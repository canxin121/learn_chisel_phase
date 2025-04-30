import type { CSSProperties } from 'vue';
import type { CoverageReport, ConditionCoveragePoint, RegisterCoveragePoint } from "../types/CoverageReport";
// 导入更新后的 CoverageInfo, ModuleInfo, 和新的 InstanceSignalTree
import type { CoverageInfo, SignalInfo, ModuleInfo, InstanceSignalTree } from "../types/CoverageInfo";
import type { TreeNode } from "../types/TreeNode";

// --- 常量 (保持不变) ---
const InstanceSeparator = "__I__";
const ModuleMarker = "__M__";
const SignalMarker = "__S__";
const InternalSeparator = "__s__";
const InternalSeparatorRegex = new RegExp(InternalSeparator, 'g');

const CondPrefix = "_cond_pred_";
const MuxPrefix = "_mux_cond_";
const RegPrefix = "_reg_signals_";

// --- 解析 (parseSignalName 仍然有用) ---
export function parseSignalName(rawName: string): { path: string[]; originatingModule: string; signal: string; type: 'predicate' | 'mux' | 'register' | 'unknown' } {
  // 确保正确提取 originatingModule
  let name = rawName;
  let type: 'predicate' | 'mux' | 'register' | 'unknown' = 'unknown';

  // 1. 提取类型前缀
  if (name.startsWith(CondPrefix)) {
    name = name.substring(CondPrefix.length);
    type = 'predicate';
  } else if (name.startsWith(MuxPrefix)) {
    name = name.substring(MuxPrefix.length);
    type = 'mux';
  } else if (name.startsWith(RegPrefix)) {
    name = name.substring(RegPrefix.length);
    type = 'register';
  }

  // 2. 初始化默认值
  let path: string[] = [];
  let originatingModule = "?";
  let signal = name; // 如果解析失败，默认为修改后的名称

  // 3. 查找 *最后* 一个模块标记 (__M__)
  const lastMIndex = name.lastIndexOf(ModuleMarker);

  if (lastMIndex !== -1) {
    const instancePathStr = name.substring(0, lastMIndex);
    const rest = name.substring(lastMIndex + ModuleMarker.length);

    // 4. 在最后一个模块标记之后查找信号标记 (__S__)
    const sIndex = rest.indexOf(SignalMarker);

    if (sIndex !== -1) {
      // 5. 根据标记提取各部分
      originatingModule = rest.substring(0, sIndex);
      const signalPart = rest.substring(sIndex + SignalMarker.length);

      // 6. 解析实例路径
      path = instancePathStr.split(InstanceSeparator).filter(p => p.length > 0);

      // 7. 最终确定信号名称
      signal = signalPart.replace(InternalSeparatorRegex, '.');

    } else {
      console.warn(`[coverageUtils] Signal name format warning: Found '${ModuleMarker}' but no subsequent '${SignalMarker}' in '${rawName}'. Falling back.`);
      signal = name;
      path = [];
      originatingModule = "?";
    }
  } else {
    console.warn(`[coverageUtils] Signal name format warning: No '${ModuleMarker}' found in '${rawName}'. Attempting fallback parsing.`);
    const sIndex = name.indexOf(SignalMarker);
    if (sIndex !== -1) {
      const possibleModuleOrPath = name.substring(0, sIndex);
      const signalPart = name.substring(sIndex + SignalMarker.length);
      if (possibleModuleOrPath.includes(InstanceSeparator)) {
        path = possibleModuleOrPath.split(InstanceSeparator).filter(p => p.length > 0);
        originatingModule = "?";
        signal = signalPart.replace(InternalSeparatorRegex, '.');
        console.warn(`[coverageUtils] Fallback: Interpreted '${possibleModuleOrPath}' as path. Module unknown.`);
      } else if (possibleModuleOrPath.length > 0) {
        originatingModule = possibleModuleOrPath;
        signal = signalPart.replace(InternalSeparatorRegex, '.');
        path = [];
        console.warn(`[coverageUtils] Fallback: Interpreted '${possibleModuleOrPath}' as originating module.`);
      } else {
        signal = name;
        path = [];
        originatingModule = "?";
        console.warn(`[coverageUtils] Fallback: Found '${SignalMarker}' at unexpected position.`);
      }
    } else {
      signal = name.replace(InternalSeparatorRegex, '.');
      path = [];
      originatingModule = "?";
      console.warn(`[coverageUtils] Fallback: No '${ModuleMarker}' or '${SignalMarker}' found. Treating '${signal}' as signal name.`);
    }
  }

  if (!signal && rawName) {
    signal = rawName;
  }

  return { path, originatingModule, signal, type };
}


// 重写: buildCoverageTrees - 遍历 instanceSignalMap 和 report 来构建类型化的树。
export function buildCoverageTrees(report: CoverageReport, instanceSignalMap: InstanceSignalTree | null): { predicates: TreeNode[], mux: TreeNode[], registers: TreeNode[] } {
  const predicateSignals: TreeNode[] = [];
  const muxSignals: TreeNode[] = [];
  const registerSignals: TreeNode[] = [];

  // 辅助函数，用于从 instanceSignalMap 收集装饰过的信号 TreeNode
  const collectSignalsRecursive = (instanceNode: InstanceSignalTree, currentPath: string[]) => {
    // 确保根实例名称包含在路径中
    const currentInstancePath = [...currentPath, instanceNode.instanceName];

    instanceNode.signals.forEach(signalInfo => {
      const parsed = parseSignalName(signalInfo.name);
      let coverageData: ConditionCoveragePoint | RegisterCoveragePoint | undefined = undefined;
      let coveragePercent: number | undefined = undefined;
      let targetList: TreeNode[] | null = null;

      // 在报告中查找相应的覆盖率数据
      switch (parsed.type) {
        case 'predicate':
          coverageData = report.conditional_predicates?.find(p => p.name === signalInfo.name);
          targetList = predicateSignals;
          break;
        case 'mux':
          coverageData = report.mux_conditions?.find(m => m.name === signalInfo.name);
          targetList = muxSignals;
          break;
        case 'register':
          coverageData = report.register_coverage?.find(r => r.name === signalInfo.name);
          targetList = registerSignals;
          break;
        default:
          console.warn(`[buildCoverageTrees] Unknown signal type for: ${signalInfo.name}`);
          return; // 跳过未知类型
      }

      if (!coverageData) {
        // console.warn(`[buildCoverageTrees] No coverage data found in report for signal: ${signalInfo.fieldName}`);
        // 决定是否包含没有覆盖率数据的信号
        // return; // 选项：跳过报告中没有的信号
        coveragePercent = undefined; // 选项：包含但标记为无覆盖率数据
      } else {
        coveragePercent = coverageData.coverage_percent;
      }

      // 直接从 SignalInfo 确定源位置
      const sourceLocation = signalInfo.filePath && signalInfo.line !== null && signalInfo.line !== undefined
        ? { filePath: signalInfo.filePath, line: signalInfo.line, column: signalInfo.column ?? 0 }
        : undefined;

      // 为此信号创建 TreeNode
      const signalNode: TreeNode = {
        // 使用 fieldName 作为唯一性键
        key: signalInfo.name,
        label: parsed.signal, // 使用解析后的信号名称进行显示
        isSignal: true,
        coverage: coveragePercent,
        // 使用 *当前* 正在处理的实例节点的 moduleName
        originatingModule: instanceNode.moduleName,
        sourceLocation: sourceLocation,
        // 存储详情视图和选择所需的数据
        data: {
          ...(coverageData ?? {}), // 如果找到覆盖率数据，则展开
          rawSignalInfo: signalInfo, // 如果需要，保留原始信号信息
          parsedName: parsed, // 保留解析后的组件
          instancePath: currentInstancePath, // 存储完整的实例路径，包括根
          type: parsed.type, // 存储类型
        },
        // children: undefined, // 在此模型中，信号不应有子节点
      };

      if (targetList) {
        targetList.push(signalNode);
      }
    });

    // 递归处理子实例
    instanceNode.subInstances.forEach(subInstance => {
      // 将更新后的路径向下传递
      collectSignalsRecursive(subInstance, currentInstancePath);
    });
  };

  // 如果 instanceSignalMap 存在，则开始收集
  if (instanceSignalMap) {
    // 从根开始递归。路径在根 *之前* 为空。
    collectSignalsRecursive(instanceSignalMap, []);
  } else {
    console.warn("[buildCoverageTrees] instanceSignalMap is null, cannot build trees.");
  }


  // 辅助函数，用于从信号节点的平面列表构建分层树
  const buildTreeFromSignalList = (signalNodes: TreeNode[]): TreeNode[] => {
    const rootMap = new Map<string, TreeNode>(); // 键是顶层实例名称

    signalNodes.forEach(signalNode => {
      const instancePath = signalNode.data?.instancePath as string[] | undefined;
      // 期望 instancePath 至少有一个元素（根实例名称）
      if (!instancePath || instancePath.length === 0) {
        console.warn(`[buildTreeFromSignalList] Signal node ${signalNode.key} is missing a valid instancePath.`);
        return; // 没有路径无法放置节点
      }

      let currentChildrenMap: Map<string, TreeNode> | null = null;
      let parentNode: TreeNode | null = null;
      let nodeKeyPrefix = '';

      // 在 rootMap 中遍历/创建实例路径
      // 第一个元素是根实例，后续是子实例
      for (let i = 0; i < instancePath.length; i++) {
        const part = instancePath[i]; // 此级别的实例名称
        const isRootLevel = i === 0;
        const currentLevelMap = isRootLevel ? rootMap : currentChildrenMap;
        // 键生成：使用完整路径段通过分隔符连接
        const nodeKey = i === 0 ? part : `${nodeKeyPrefix}${InstanceSeparator}${part}`;

        let currentNode: TreeNode;

        if (!currentLevelMap || !currentLevelMap.has(part)) {
          // 如果可能，查找此实例级别的模块名称
          // 这需要搜索原始的 instanceSignalMap 结构，这里比较复杂。
          // 我们将依赖信号节点中存储的模块名称来显示原始模块。
          // 对于实例节点，如果没有更复杂的映射，我们可能无法轻易获得模块名称。
          currentNode = {
            key: nodeKey,
            label: part, // 实例名称
            children: [],
            isSignal: false,
            coverage: undefined,
            originatingModule: undefined, // 实例节点不直接产生信号
            sourceLocation: undefined,
            data: { instancePath: instancePath.slice(0, i + 1) } // 存储到此实例的路径
          };
          if (parentNode) {
            parentNode.children!.push(currentNode);
          } else {
            // 这是根实例节点
            rootMap.set(part, currentNode);
          }
          if (currentLevelMap) currentLevelMap.set(part, currentNode); // 添加到 map 中以供查找
        } else {
          currentNode = currentLevelMap.get(part)!;
          // 确保它被标记为实例节点并具有 children 数组
          currentNode.isSignal = false;
          if (!currentNode.children) currentNode.children = [];
        }

        parentNode = currentNode;
        nodeKeyPrefix = nodeKey; // 更新下一级别键生成的前缀
        // 更新下一次迭代的 children map（如果不是最后一部分）
        if (i < instancePath.length - 1) {
          currentChildrenMap = new Map(currentNode.children!.map(child => [child.label, child]));
        }
      }


      // 将实际的信号节点添加为最终实例节点 (parentNode) 下的叶子节点
      if (parentNode) {
        // 移除：不要覆盖在 collectSignalsRecursive 中设置的唯一键
        // signalNode.key = `${parentNode.key}${SignalMarker}${signalNode.label}`;
        // 确保父节点有 children 数组
        if (!parentNode.children) parentNode.children = [];
        parentNode.children!.push(signalNode);
        // 排序子节点？也许稍后在聚合期间进行。
      } else {
        // 如果 instancePath 始终至少包含根元素，则不应发生这种情况
        console.error(`[buildTreeFromSignalList] Failed to find parent node for signal ${signalNode.key}. Path:`, instancePath);
        // 作为后备，添加到根，但这表明存在问题。
        rootMap.set(signalNode.key, signalNode); // 使用唯一的信号键
      }
    });

    // 将根 map 的值转换为数组并排序
    return Array.from(rootMap.values()).sort((a, b) => a.label.localeCompare(b.label));
  };


  // 构建各个树
  const predicateTree = buildTreeFromSignalList(predicateSignals);
  const muxTree = buildTreeFromSignalList(muxSignals);
  const registerTree = buildTreeFromSignalList(registerSignals);


  // --- 聚合覆盖率计算 (保持不变，应用于新树) ---
  const aggregateCoverageRecursive = (node: TreeNode): number | undefined => {
    if (node.isSignal) {
      return node.coverage;
    }
    // 在访问 length 之前检查 children 是否存在
    if (node.children && node.children.length > 0) {
      const childCoverages = node.children
        .map(aggregateCoverageRecursive)
        .filter((c): c is number => c !== undefined && !isNaN(c));
      if (childCoverages.length > 0) {
        const sum = childCoverages.reduce((acc, cur) => acc + cur, 0);
        node.coverage = sum / childCoverages.length;
        return node.coverage;
      }
    }
    node.coverage = undefined; // 如果没有子节点或没有有效覆盖率，则显式设置为 undefined
    return undefined;
  };

  const applyAggregation = (treeNodes: TreeNode[]) => {
    treeNodes.forEach(node => aggregateCoverageRecursive(node));
  };

  applyAggregation(predicateTree);
  applyAggregation(muxTree);
  applyAggregation(registerTree);
  // --- 结束聚合 ---

  return {
    predicates: predicateTree,
    mux: muxTree,
    registers: registerTree,
  };
}


// --- 格式化函数 (保持不变) ---
export const formatCoverage = (coverage?: number): string => {
  if (coverage === undefined || coverage === null) return "-";
  return `${coverage.toFixed(1)}%`;
};
export const formatPercent = (value?: number): string => {
  if (value === undefined || value === null) return '-';
  return `${value.toFixed(1)}%`;
};
export const formatCount = (value?: number): string => {
  if (value === undefined || value === null) return '-';
  if (value >= 1e9) return (value / 1e9).toFixed(1) + 'G';
  if (value >= 1e6) return (value / 1e6).toFixed(1) + 'M';
  if (value >= 1e3) return (value / 1e3).toFixed(1) + 'k';
  return value.toString();
};

// --- 样式函数 (保持不变) ---
export const getNodeStyle = (coverage?: number): CSSProperties => {
  if (coverage === undefined || coverage === null || coverage === 100) {
    return {};
  }
  let color = '';
  if (coverage < 50) color = 'hsl(0, 80%, 50%)'; // 红色
  else if (coverage < 80) color = 'hsl(39, 100%, 50%)'; // 橙色
  else color = 'hsl(60, 80%, 45%)'; // 黄色
  return { color: color, fontWeight: 'bold' };
};
export const getConditionTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
export const getBitTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
