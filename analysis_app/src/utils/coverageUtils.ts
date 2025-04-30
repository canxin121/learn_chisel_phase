import type { CSSProperties } from 'vue';
import type { CoverageReport, ConditionCoveragePoint, RegisterCoveragePoint } from "../types/CoverageReport";
// 导入 CoverageInfo, ModuleInfo, 和 InstanceSignalTree
import type { CoverageInfo, SignalInfo, ModuleInfo, InstanceSignalTree } from "../types/CoverageInfo";
import type { TreeNode } from "../types/TreeNode";

// --- 常量 ---
const InstanceSeparator = "__I__";
const ModuleMarker = "__M__";
const SignalMarker = "__S__";
const InternalSeparator = "__s__";
const InternalSeparatorRegex = new RegExp(InternalSeparator, 'g');

const CondPrefix = "_cond_pred_";
const MuxPrefix = "_mux_cond_";
const RegPrefix = "_reg_signals_";

// --- 解析 ---
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


// 构建覆盖率树
export function buildCoverageTrees(report: CoverageReport, instanceSignalMap: InstanceSignalTree | null): { predicates: TreeNode[], mux: TreeNode[], registers: TreeNode[] } {
  const predicateSignals: TreeNode[] = [];
  const muxSignals: TreeNode[] = [];
  const registerSignals: TreeNode[] = [];

  // 辅助函数：收集信号节点
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
        coveragePercent = undefined; // 包含但标记为无覆盖率数据
      } else {
        coveragePercent = coverageData.coverage_percent;
      }

      // 确定源位置
      const sourceLocation = signalInfo.filePath && signalInfo.line !== null && signalInfo.line !== undefined
        ? { filePath: signalInfo.filePath, line: signalInfo.line, column: signalInfo.column ?? 0 }
        : undefined;

      // 为此信号创建 TreeNode
      const signalNode: TreeNode = {
        key: signalInfo.name, // 唯一键
        label: parsed.signal, // 显示名称
        isSignal: true,
        coverage: coveragePercent,
        originatingModule: instanceNode.moduleName, // 模块名称
        sourceLocation: sourceLocation,
        // 附加数据
        data: {
          ...(coverageData ?? {}), // 覆盖率数据
          rawSignalInfo: signalInfo, // 原始信号信息
          parsedName: parsed, // 解析后的名称
          instancePath: currentInstancePath, // 实例路径
          type: parsed.type, // 类型
        },
        // children: undefined,
      };

      if (targetList) {
        targetList.push(signalNode);
      }
    });

    // 递归处理子实例
    instanceNode.subInstances.forEach(subInstance => {
      collectSignalsRecursive(subInstance, currentInstancePath); // 传递路径
    });
  };

  // 开始收集
  if (instanceSignalMap) {
    collectSignalsRecursive(instanceSignalMap, []); // 从根开始
  } else {
    console.warn("[buildCoverageTrees] instanceSignalMap is null, cannot build trees.");
  }


  // 辅助函数：构建分层树
  const buildTreeFromSignalList = (signalNodes: TreeNode[]): TreeNode[] => {
    const rootMap = new Map<string, TreeNode>(); // 顶层实例映射

    signalNodes.forEach(signalNode => {
      const instancePath = signalNode.data?.instancePath as string[] | undefined;
      // 检查 instancePath
      if (!instancePath || instancePath.length === 0) {
        console.warn(`[buildTreeFromSignalList] Signal node ${signalNode.key} is missing a valid instancePath.`);
        return; // 跳过
      }

      let currentChildrenMap: Map<string, TreeNode> | null = null;
      let parentNode: TreeNode | null = null;
      let nodeKeyPrefix = '';

      // 遍历/创建实例路径
      for (let i = 0; i < instancePath.length; i++) {
        const part = instancePath[i]; // 实例名称
        const isRootLevel = i === 0;
        const currentLevelMap = isRootLevel ? rootMap : currentChildrenMap;
        const nodeKey = i === 0 ? part : `${nodeKeyPrefix}${InstanceSeparator}${part}`; // 节点键

        let currentNode: TreeNode;

        if (!currentLevelMap || !currentLevelMap.has(part)) {
          // 查找模块名称比较复杂，依赖信号节点信息
          currentNode = {
            key: nodeKey,
            label: part, // 实例名称
            children: [],
            isSignal: false,
            coverage: undefined,
            originatingModule: undefined, // 实例节点
            sourceLocation: undefined,
            data: { instancePath: instancePath.slice(0, i + 1) } // 实例路径
          };
          if (parentNode) {
            parentNode.children!.push(currentNode);
          } else {
            rootMap.set(part, currentNode); // 根实例节点
          }
          if (currentLevelMap) currentLevelMap.set(part, currentNode); // 添加到 map
        } else {
          currentNode = currentLevelMap.get(part)!;
          // 确保是实例节点并有 children
          currentNode.isSignal = false;
          if (!currentNode.children) currentNode.children = [];
        }

        parentNode = currentNode;
        nodeKeyPrefix = nodeKey; // 更新前缀
        // 更新 children map
        if (i < instancePath.length - 1) {
          currentChildrenMap = new Map(currentNode.children!.map(child => [child.label, child]));
        }
      }


      // 添加信号节点
      if (parentNode) {
        // signalNode.key = `${parentNode.key}${SignalMarker}${signalNode.label}`;
        if (!parentNode.children) parentNode.children = [];
        parentNode.children!.push(signalNode);
        // 排序子节点
      } else {
        console.error(`[buildTreeFromSignalList] Failed to find parent node for signal ${signalNode.key}. Path:`, instancePath);
        rootMap.set(signalNode.key, signalNode); // 后备：添加到根
      }
    });

    // 转换并排序
    return Array.from(rootMap.values()).sort((a, b) => a.label.localeCompare(b.label));
  };


  // 构建树
  const predicateTree = buildTreeFromSignalList(predicateSignals);
  const muxTree = buildTreeFromSignalList(muxSignals);
  const registerTree = buildTreeFromSignalList(registerSignals);


  // --- 聚合覆盖率计算 ---
  const aggregateCoverageRecursive = (node: TreeNode): number | undefined => {
    if (node.isSignal) {
      return node.coverage;
    }
    // 检查 children
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
    node.coverage = undefined; // 无有效覆盖率
    return undefined;
  };

  const applyAggregation = (treeNodes: TreeNode[]) => {
    treeNodes.forEach(node => aggregateCoverageRecursive(node));
  };

  applyAggregation(predicateTree);
  applyAggregation(muxTree);
  applyAggregation(registerTree);
  // ---

  return {
    predicates: predicateTree,
    mux: muxTree,
    registers: registerTree,
  };
}


// --- 格式化函数 ---
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

// --- 样式函数 ---
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
