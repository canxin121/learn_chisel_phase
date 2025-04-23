import type { CSSProperties } from 'vue';
import type { CoverageReport, } from "../types/CoverageReport";
import type { CoverageInfo, SignalInfo } from "../types/CoverageInfo";
import type { TreeNode } from "../types/TreeNode";

// --- 常量 ---
const InstanceSeparator = "__I__";
const SubfieldSeparator = "__S__";
const LocalMarker = "local";
const CondPrefix = "_cond_pred_";
const MuxPrefix = "_mux_cond_";
const RegPrefix = "_reg_signals_";

// --- 解析与构建 ---

export function parseSignalName(rawName: string): { path: string[]; signal: string; type: 'predicate' | 'mux' | 'register' | 'unknown' } {
  let name = rawName;
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
  }

  const parts = name.split(InstanceSeparator);
  const localIndex = parts.indexOf(LocalMarker);

  let path: string[] = [];
  let signal: string = "";

  if (localIndex !== -1) {
    path = parts.slice(0, localIndex);
    const signalParts = parts.slice(localIndex + 1);
    signal = signalParts.join(InstanceSeparator).replace(new RegExp(SubfieldSeparator, 'g'), '.');
  } else {
    if (parts.length > 0) {
      path = [parts[0]];
      signal = parts.slice(1).join(InstanceSeparator).replace(new RegExp(SubfieldSeparator, 'g'), '.');
      if (!signal) signal = path[0];
    } else {
      signal = name.replace(new RegExp(SubfieldSeparator, 'g'), '.');
    }
  }

  if (path.length === 0 && signal.includes(InstanceSeparator)) {
    const signalParts = signal.split(InstanceSeparator);
    path = [signalParts[0]];
    signal = signalParts.slice(1).join(InstanceSeparator);
  }

  path = path.filter(p => p.length > 0);
  if (path.length === 0 && parts.length > 1 && type !== 'unknown') {
    path = [parts[0]];
    signal = parts.slice(1).join(InstanceSeparator).replace(new RegExp(SubfieldSeparator, 'g'), '.');
  } else if (path.length === 0 && parts.length === 1) {
    path = [parts[0]];
    signal = parts[0];
  }

  return { path, signal, type };
}

export function findSignalInfo(signalName: string, coverageInfo: CoverageInfo | null): SignalInfo | undefined {
  if (!coverageInfo) return undefined;
  console.log(`findSignalInfo: Searching for "${signalName}"`); // Log input name

  // Direct match check
  for (const port of coverageInfo.exportedPorts) {
    const signal = port.signals.find(s => s.fieldName === signalName);
    if (signal) {
      console.log(`findSignalInfo: Direct match found for "${signalName}"`);
      return signal;
    }
  }

  // Prefix check - 改进前缀处理逻辑
  const prefixes = [CondPrefix, MuxPrefix, RegPrefix];
  for (const prefix of prefixes) {
    if (signalName.startsWith(prefix)) {
      const strippedName = signalName.substring(prefix.length);
      console.log(`findSignalInfo: Trying stripped name "${strippedName}" (from "${signalName}")`);
      
      for (const port of coverageInfo.exportedPorts) {
        // 尝试精确匹配
        const signal = port.signals.find(s => s.fieldName === strippedName);
        if (signal) {
          console.log(`findSignalInfo: Stripped name match found for "${strippedName}"`);
          return signal;
        }
        
        // 寄存器信号可能有特殊格式，尝试部分匹配
        if (prefix === RegPrefix) {
          const partialMatch = port.signals.find(s => 
            strippedName.includes(s.fieldName) || s.fieldName.includes(strippedName));
          if (partialMatch) {
            console.log(`findSignalInfo: Partial match for register signal "${strippedName}" -> "${partialMatch.fieldName}"`);
            return partialMatch;
          }
        }
      }
    }
  }

  console.log(`findSignalInfo: No match found for "${signalName}"`); // Log if no match
  return undefined;
}

export function buildCoverageTrees(report: CoverageReport, info: CoverageInfo | null): { predicates: TreeNode[], mux: TreeNode[], registers: TreeNode[] } {
  const predicateRootMap = new Map<string, TreeNode>();
  const muxRootMap = new Map<string, TreeNode>();
  const registerRootMap = new Map<string, TreeNode>();

  function findOrCreateNode(path: string[], targetMap: Map<string, TreeNode>): TreeNode {
    if (path.length === 0) {
      throw new Error("Path cannot be empty when finding/creating node");
    }

    const currentLevelName = path[0];
    let node = targetMap.get(currentLevelName);

    if (!node) {
      const key = path.join(InstanceSeparator);
      node = {
        title: currentLevelName,
        key: key,
        children: [],
        type: 'instance',
        isLeaf: false,
      };
      targetMap.set(currentLevelName, node);
    }

    if (path.length === 1) {
      return node;
    } else {
      if (!node.children) node.children = [];
      // Use a map for efficient child lookup during creation
      const childMap = new Map(node.children.map(child => [child.title, child]));
      const nextNode = findOrCreateNode(path.slice(1), childMap);

      // Ensure the child map reflects the potentially newly created/found node
      childMap.set(nextNode.title, nextNode);

      // Rebuild children array from the map to ensure correct structure
      node.children = Array.from(childMap.values());

      // Find the specific child node we were working on to return it
      const foundChild = node.children.find(child => child.key === nextNode.key);
      return foundChild || nextNode; // Should always find the child
    }
  }


  const getSourceLoc = (signalName: string): { filePath: string; line: number; column: number } | undefined => {
    if (!info) return undefined;
    const sigInfo = findSignalInfo(signalName, info);
    // Log the result specifically for getSourceLoc
    console.log(`getSourceLoc for "${signalName}": Found SignalInfo:`, sigInfo ? { filePath: sigInfo.filePath, line: sigInfo.line } : undefined);
    if (sigInfo?.filePath && sigInfo.line !== undefined && sigInfo.line !== null) {
      return { filePath: sigInfo.filePath, line: sigInfo.line, column: sigInfo.column ?? 0 };
    }
    return undefined;
  };

  report.conditional_predicates.forEach(point => {
    const { path, signal } = parseSignalName(point.name);
    if (path.length === 0 || !signal) { return; }
    const parentNode = findOrCreateNode(path, predicateRootMap);
    if (!parentNode.children) parentNode.children = [];
    parentNode.children.push({
      title: signal, key: point.name, coverage: point.coverage_percent,
      type: 'predicate', details: point, isLeaf: true,
      sourceLocation: getSourceLoc(point.name)
    });
  });

  report.mux_conditions.forEach(point => {
    const { path, signal } = parseSignalName(point.name);
    if (path.length === 0 || !signal) { return; }
    const parentNode = findOrCreateNode(path, muxRootMap);
    if (!parentNode.children) parentNode.children = [];
    parentNode.children.push({
      title: signal, key: point.name, coverage: point.coverage_percent,
      type: 'mux', details: point, isLeaf: true,
      sourceLocation: getSourceLoc(point.name)
    });
  });

  report.register_coverage.forEach(point => {
    const { path, signal } = parseSignalName(point.name);
    if (path.length === 0 || !signal) {
      console.warn(`buildCoverageTrees: Skipping register due to invalid path/signal for name: ${point.name}`);
      return;
    }
    const parentNode = findOrCreateNode(path, registerRootMap);
    if (!parentNode.children) parentNode.children = [];

    const sourceLocation = getSourceLoc(point.name); // Get source location
    console.log(`buildCoverageTrees: Register "${point.name}" (parsed signal: "${signal}") -> SourceLoc:`, sourceLocation); // Log register source location

    const registerNode: TreeNode = {
      title: signal, key: point.name, coverage: point.coverage_percent,
      type: 'register', details: point, isLeaf: false, children: [],
      sourceLocation: sourceLocation // Assign source location
    };

    point.bit_details.forEach(bit => {
      const bitCoverage = (bit.hit_zero ? 50 : 0) + (bit.hit_one ? 50 : 0);
      // Ensure children array exists before pushing
      if (!registerNode.children) registerNode.children = [];
      registerNode.children.push({
        title: `Bit ${bit.bit}`, key: `${point.name}_bit_${bit.bit}`, coverage: bitCoverage,
        type: 'register_bit', details: bit, isLeaf: true,
        sourceLocation: registerNode.sourceLocation // Bit inherits source location from register
      });
    });
    if (registerNode.children?.length === 0) registerNode.isLeaf = true;
    parentNode.children.push(registerNode);
  });

  // Helper function to sort tree nodes alphabetically, instances first
  const sortTreeNodes = (nodes: TreeNode[]): TreeNode[] => {
    nodes.sort((a, b) => {
      // Instances come before leaves
      const aIsInstance = a.type === 'instance';
      const bIsInstance = b.type === 'instance';
      if (aIsInstance && !bIsInstance) return -1;
      if (!aIsInstance && bIsInstance) return 1;
      // Otherwise, sort alphabetically by title
      return a.title.localeCompare(b.title);
    });
    // Recursively sort children
    nodes.forEach(node => {
      if (node.children && node.children.length > 0) {
        node.children = sortTreeNodes(node.children);
      }
    });
    return nodes;
  };

  return {
    predicates: sortTreeNodes(Array.from(predicateRootMap.values())),
    mux: sortTreeNodes(Array.from(muxRootMap.values())),
    registers: sortTreeNodes(Array.from(registerRootMap.values()))
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
  if (coverage < 50) {
    color = 'hsl(0, 80%, 50%)'; // Red
  } else if (coverage < 80) {
    color = 'hsl(39, 100%, 50%)'; // Orange
  } else {
    color = 'hsl(60, 80%, 45%)'; // Yellow-ish
  }
  return {
    color: color,
    fontWeight: 'bold'
  };
};

export const getConditionTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};

export const getBitTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
