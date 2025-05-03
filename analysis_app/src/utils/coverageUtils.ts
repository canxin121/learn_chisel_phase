import type { CSSProperties } from 'vue';
import type { CoverageReport, ConditionCoveragePoint, RegisterCoveragePoint } from "../types/CoverageReport";
import type { InstanceSignalTree, ExportedPort } from "../types/CoverageInfo";
import type { TreeNode } from "../types/TreeNode";

// --- 常量 ---
const InstanceSeparator = "__I__";
const InternalSeparator = "__s__";
const InternalSeparatorRegex = new RegExp(InternalSeparator, 'g');

const CondPrefix = "_cp_";
const MuxPrefix = "_mc_";
const RegPrefix = "_rs_";

// --- Helper function to extract signal name ---
function extractSignalName(fullName: string): string {
    const signalMarker = "__S__";
    const lastSignalMarkerIndex = fullName.lastIndexOf(signalMarker);

    if (lastSignalMarkerIndex !== -1) {
        // Extract the part after the last __S__
        const signalPart = fullName.substring(lastSignalMarkerIndex + signalMarker.length);
        // Replace internal separators
        return signalPart.replace(InternalSeparatorRegex, '.');
    } else {
        // If __S__ is not found, assume the full name is the signal name (or handle error)
        // Replace separators just in case
        console.warn(`[extractSignalName] Signal marker "__S__" not found in "${fullName}". Replacing separators in the full name.`);
        return fullName.replace(InternalSeparatorRegex, '.');
    }
}

// --- 解析 ---
// 简化 parseSignalName 以仅提取类型和基础名称
export function parseCompressedName(compressedName: string): { type: 'predicate' | 'mux' | 'register' | 'unknown'; baseName: string } {
  if (typeof compressedName !== 'string' || !compressedName) {
    console.warn(`[coverageUtils] parseCompressedName called with invalid name:`, compressedName);
    return { type: 'unknown', baseName: "INVALID_COMPRESSED_NAME" };
  }

  let name = compressedName;
  let type: 'predicate' | 'mux' | 'register' | 'unknown' = 'unknown';

  if (name.startsWith(CondPrefix)) {
    name = name.substring(CondPrefix.length);
    type = 'predicate';
  } else if (name.startsWith(MuxPrefix)) {
    name = name.substring(MuxPrefix.length);
    type = 'mux';
  } else if (name.startsWith(RegPrefix)) {
    name = name.substring(RegPrefix.length);
    type = 'register';
  } else {
    console.warn(`[coverageUtils] parseCompressedName: Unknown prefix for name: ${compressedName}`);
  }

  const baseName = name;

  return { type, baseName };
}

// 构建覆盖率树
export function buildCoverageTrees(
  report: CoverageReport,
  instanceSignalMap: InstanceSignalTree,
  exportedPorts: ExportedPort[]
): { predicates: TreeNode[], mux: TreeNode[], registers: TreeNode[] } {
  const predicateSignals: TreeNode[] = [];
  const muxSignals: TreeNode[] = [];
  const registerSignals: TreeNode[] = [];

  const collectSignalsRecursive = (instanceNode: InstanceSignalTree, currentPath: string[]) => {
    const currentInstancePath = [...currentPath, instanceNode.instance_name];
    const currentModuleName = instanceNode.module_name;

    instanceNode.signals.forEach(signalInfo => {
      const parsedCompressed = parseCompressedName(signalInfo.compressed_name);

      if (parsedCompressed.baseName === "INVALID_COMPRESSED_NAME") {
        console.warn(`[buildCoverageTrees] Skipping signal due to invalid compressed_name in signalInfo:`, signalInfo);
        return;
      }

      let coverageData: ConditionCoveragePoint | RegisterCoveragePoint | undefined = undefined;
      let coveragePercent: number | undefined = undefined;
      let targetList: TreeNode[] | null = null;

      switch (parsedCompressed.type) {
        case 'predicate':
          coverageData = report.conditional_predicates?.find(p => p.compressed_name === signalInfo.compressed_name);
          targetList = predicateSignals;
          break;
        case 'mux':
          coverageData = report.mux_conditions?.find(m => m.compressed_name === signalInfo.compressed_name);
          targetList = muxSignals;
          break;
        case 'register':
          coverageData = report.register_coverage?.find(r => r.compressed_name === signalInfo.compressed_name);
          targetList = registerSignals;
          break;
        default:
          console.warn(`[buildCoverageTrees] Unknown signal type for compressed_name: ${signalInfo.compressed_name}`);
          return;
      }

      if (!coverageData) {
        coveragePercent = undefined;
      } else {
        coveragePercent = coverageData.coverage_percent;
      }

      const sourceLocation = signalInfo.file_path && signalInfo.line !== null && signalInfo.line !== undefined
        ? { filePath: signalInfo.file_path, line: signalInfo.line, column: signalInfo.column ?? 0 }
        : undefined;

      // --- 查找对应 port 的 name_mapping ---
      const compressedBaseName = parsedCompressed.baseName;
      const port = exportedPorts.find(p =>
        p.signals.some(s => s.compressed_name === signalInfo.compressed_name)
      );
      let displayLabel = compressedBaseName;
      if (port?.name_mapping && port.name_mapping[compressedBaseName]) {
        displayLabel = extractSignalName(port.name_mapping[compressedBaseName]);
      } else if (compressedBaseName.startsWith('_s')) {
        console.warn(`[buildCoverageTrees] No mapping for ${compressedBaseName}, falling back.`);
      } else {
        console.warn(`[buildCoverageTrees] Non-compressed name ${compressedBaseName}, extracting directly.`);
        displayLabel = extractSignalName(compressedBaseName);
      }
      // --- 结束查找显示标签 ---

      const signalNode: TreeNode = {
        key: signalInfo.compressed_name, // key 仍然使用 compressed_name，因为它是报告中的唯一标识符
        label: displayLabel, // label 使用提取并格式化后的信号名称
        isSignal: true,
        coverage: coveragePercent,
        originatingModule: currentModuleName,
        sourceLocation: sourceLocation,
        data: {
          ...(coverageData ?? {}),
          rawSignalInfo: signalInfo,
          instancePath: currentInstancePath,
          type: parsedCompressed.type,
        },
      };

      if (targetList) {
        targetList.push(signalNode);
      }
    });

    instanceNode.sub_instances.forEach(subInstance => {
      collectSignalsRecursive(subInstance, currentInstancePath);
    });
  };

  collectSignalsRecursive(instanceSignalMap, []);

  const buildTreeFromSignalList = (signalNodes: TreeNode[]): TreeNode[] => {
    const rootMap = new Map<string, TreeNode>();

    signalNodes.forEach(signalNode => {
      const instancePath = signalNode.data?.instancePath as string[] | undefined;
      if (!instancePath || instancePath.length === 0) {
        console.warn(`[buildTreeFromSignalList] Signal node ${signalNode.key} is missing a valid instancePath.`);
        return;
      }

      let currentChildrenMap: Map<string, TreeNode> | null = null;
      let parentNode: TreeNode | null = null;
      let nodeKeyPrefix = '';

      for (let i = 0; i < instancePath.length; i++) {
        const part = instancePath[i];
        const isRootLevel = i === 0;
        const currentLevelMap = isRootLevel ? rootMap : currentChildrenMap;
        const nodeKey = i === 0 ? part : `${nodeKeyPrefix}${InstanceSeparator}${part}`;

        let currentNode: TreeNode;

        if (!currentLevelMap || !currentLevelMap.has(part)) {
          currentNode = {
            key: nodeKey,
            label: part,
            children: [],
            isSignal: false,
            coverage: undefined,
            originatingModule: undefined,
            sourceLocation: undefined,
            data: { instancePath: instancePath.slice(0, i + 1) }
          };
          if (parentNode) {
            parentNode.children!.push(currentNode);
          } else {
            rootMap.set(part, currentNode);
          }
          if (currentLevelMap) currentLevelMap.set(part, currentNode);
        } else {
          currentNode = currentLevelMap.get(part)!;
          currentNode.isSignal = false;
          if (!currentNode.children) currentNode.children = [];
        }

        parentNode = currentNode;
        nodeKeyPrefix = nodeKey;
        if (i < instancePath.length - 1) {
          currentChildrenMap = new Map(currentNode.children!.map(child => [child.label, child]));
        }
      }

      if (parentNode) {
        if (!parentNode.children) parentNode.children = [];
        parentNode.children!.push(signalNode);
      } else {
        console.error(`[buildTreeFromSignalList] Failed to find parent node for signal ${signalNode.key}. Path:`, instancePath);
        rootMap.set(signalNode.key, signalNode);
      }
    });

    return Array.from(rootMap.values()).sort((a, b) => a.label.localeCompare(b.label));
  };

  const predicateTree = buildTreeFromSignalList(predicateSignals);
  const muxTree = buildTreeFromSignalList(muxSignals);
  const registerTree = buildTreeFromSignalList(registerSignals);

  const aggregateCoverageRecursive = (node: TreeNode): number | undefined => {
    if (node.isSignal) {
      return node.coverage;
    }
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
    node.coverage = undefined;
    return undefined;
  };

  const applyAggregation = (treeNodes: TreeNode[]) => {
    treeNodes.forEach(node => aggregateCoverageRecursive(node));
  };

  applyAggregation(predicateTree);
  applyAggregation(muxTree);
  applyAggregation(registerTree);

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
  if (coverage < 50) color = 'hsl(0, 80%, 50%)';
  else if (coverage < 80) color = 'hsl(39, 100%, 50%)';
  else color = 'hsl(60, 80%, 45%)';
  return { color: color, fontWeight: 'bold' };
};
export const getConditionTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
export const getBitTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
