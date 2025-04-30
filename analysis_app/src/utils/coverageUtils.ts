import type { CSSProperties } from 'vue';
import type { CoverageReport, ConditionCoveragePoint, RegisterCoveragePoint } from "../types/CoverageReport";
// Import updated CoverageInfo, ModuleInfo, and NEW InstanceSignalTree
import type { CoverageInfo, SignalInfo, ModuleInfo, InstanceSignalTree } from "../types/CoverageInfo";
import type { TreeNode } from "../types/TreeNode";

// --- Constants (unchanged) ---
const InstanceSeparator = "__I__";
const ModuleMarker = "__M__";
const SignalMarker = "__S__";
const InternalSeparator = "__s__";
const InternalSeparatorRegex = new RegExp(InternalSeparator, 'g');

const CondPrefix = "_cond_pred_";
const MuxPrefix = "_mux_cond_";
const RegPrefix = "_reg_signals_";

// --- Parsing (parseSignalName remains useful) ---
export function parseSignalName(rawName: string): { path: string[]; originatingModule: string; signal: string; type: 'predicate' | 'mux' | 'register' | 'unknown' } {
  // Ensure it correctly extracts originatingModule
  let name = rawName;
  let type: 'predicate' | 'mux' | 'register' | 'unknown' = 'unknown';

  // 1. Extract type prefix
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

  // 2. Initialize defaults
  let path: string[] = [];
  let originatingModule = "?";
  let signal = name; // Default to modified name if parsing fails

  // 3. Find the *last* Module Marker (__M__)
  const lastMIndex = name.lastIndexOf(ModuleMarker);

  if (lastMIndex !== -1) {
    const instancePathStr = name.substring(0, lastMIndex);
    const rest = name.substring(lastMIndex + ModuleMarker.length);

    // 4. Find the Signal Marker (__S__) after the last Module Marker
    const sIndex = rest.indexOf(SignalMarker);

    if (sIndex !== -1) {
      // 5. Extract parts based on markers
      originatingModule = rest.substring(0, sIndex);
      const signalPart = rest.substring(sIndex + SignalMarker.length);

      // 6. Parse instance path
      path = instancePathStr.split(InstanceSeparator).filter(p => p.length > 0);

      // 7. Finalize signal name
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


// REWRITTEN: buildCoverageTrees - Traverses instanceSignalMap and report to build typed trees.
export function buildCoverageTrees(report: CoverageReport, instanceSignalMap: InstanceSignalTree | null): { predicates: TreeNode[], mux: TreeNode[], registers: TreeNode[] } {
  const predicateSignals: TreeNode[] = [];
  const muxSignals: TreeNode[] = [];
  const registerSignals: TreeNode[] = [];

  // Helper to collect decorated signal TreeNodes from the instanceSignalMap
  const collectSignalsRecursive = (instanceNode: InstanceSignalTree, currentPath: string[]) => {
    // Ensure the root instance name is included in the path
    const currentInstancePath = [...currentPath, instanceNode.instanceName];

    instanceNode.signals.forEach(signalInfo => {
      const parsed = parseSignalName(signalInfo.name);
      let coverageData: ConditionCoveragePoint | RegisterCoveragePoint | undefined = undefined;
      let coveragePercent: number | undefined = undefined;
      let targetList: TreeNode[] | null = null;

      // Find corresponding coverage data in the report
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
          return; // Skip unknown types
      }

      if (!coverageData) {
        // console.warn(`[buildCoverageTrees] No coverage data found in report for signal: ${signalInfo.fieldName}`);
        // Decide if you want to include signals with no coverage data
        // return; // Option: Skip signals not in the report
        coveragePercent = undefined; // Option: Include but mark as no coverage data
      } else {
        coveragePercent = coverageData.coverage_percent;
      }

      // Determine source location directly from SignalInfo
      const sourceLocation = signalInfo.filePath && signalInfo.line !== null && signalInfo.line !== undefined
        ? { filePath: signalInfo.filePath, line: signalInfo.line, column: signalInfo.column ?? 0 }
        : undefined;

      // Create the TreeNode for this signal
      const signalNode: TreeNode = {
        // Use fieldName as key for uniqueness
        key: signalInfo.name,
        label: parsed.signal, // Use the parsed signal name for display
        isSignal: true,
        coverage: coveragePercent,
        // Use moduleName from the *current* instance node being processed
        originatingModule: instanceNode.moduleName,
        sourceLocation: sourceLocation,
        // Store necessary data for details view and selection
        data: {
          ...(coverageData ?? {}), // Spread coverage data if found
          rawSignalInfo: signalInfo, // Keep original signal info if needed
          parsedName: parsed, // Keep parsed components
          instancePath: currentInstancePath, // Store the full instance path including root
          type: parsed.type, // Store the type
        },
        // children: undefined, // Signals shouldn't have children in this model
      };

      if (targetList) {
        targetList.push(signalNode);
      }
    });

    // Recursively process sub-instances
    instanceNode.subInstances.forEach(subInstance => {
      // Pass the updated path down
      collectSignalsRecursive(subInstance, currentInstancePath);
    });
  };

  // Start collection if instanceSignalMap exists
  if (instanceSignalMap) {
    // Start recursion from the root. Path starts empty *before* the root.
    collectSignalsRecursive(instanceSignalMap, []);
  } else {
    console.warn("[buildCoverageTrees] instanceSignalMap is null, cannot build trees.");
  }


  // Helper function to build a hierarchical tree from a flat list of signal nodes
  const buildTreeFromSignalList = (signalNodes: TreeNode[]): TreeNode[] => {
    const rootMap = new Map<string, TreeNode>(); // Key is the top-level instance name

    signalNodes.forEach(signalNode => {
      const instancePath = signalNode.data?.instancePath as string[] | undefined;
      // Expect instancePath to have at least one element (the root instance name)
      if (!instancePath || instancePath.length === 0) {
        console.warn(`[buildTreeFromSignalList] Signal node ${signalNode.key} is missing a valid instancePath.`);
        return; // Cannot place node without path
      }

      let currentChildrenMap: Map<string, TreeNode> | null = null;
      let parentNode: TreeNode | null = null;
      let nodeKeyPrefix = '';

      // Traverse/create the instance path in the rootMap
      // The first element is the root instance, subsequent are sub-instances
      for (let i = 0; i < instancePath.length; i++) {
        const part = instancePath[i]; // Instance name at this level
        const isRootLevel = i === 0;
        const currentLevelMap = isRootLevel ? rootMap : currentChildrenMap;
        // Key generation: use full path segments joined by separator
        const nodeKey = i === 0 ? part : `${nodeKeyPrefix}${InstanceSeparator}${part}`;

        let currentNode: TreeNode;

        if (!currentLevelMap || !currentLevelMap.has(part)) {
          // Find the module name for this instance level if possible
          // This requires searching the original instanceSignalMap structure, which is complex here.
          // We'll rely on the module name stored in the signal node for the originating module display.
          // For instance nodes, we might not have the module name readily available without more complex mapping.
          currentNode = {
            key: nodeKey,
            label: part, // Instance name
            children: [],
            isSignal: false,
            coverage: undefined,
            originatingModule: undefined, // Instance nodes don't originate signals directly
            sourceLocation: undefined,
            data: { instancePath: instancePath.slice(0, i + 1) } // Store path up to this instance
          };
          if (parentNode) {
            parentNode.children!.push(currentNode);
          } else {
            // This is the root instance node
            rootMap.set(part, currentNode);
          }
          if (currentLevelMap) currentLevelMap.set(part, currentNode); // Add to the map for lookup
        } else {
          currentNode = currentLevelMap.get(part)!;
          // Ensure it's marked as an instance node and has children array
          currentNode.isSignal = false;
          if (!currentNode.children) currentNode.children = [];
        }

        parentNode = currentNode;
        nodeKeyPrefix = nodeKey; // Update prefix for next level's key generation
        // Update children map for the next iteration (if not the last part)
        if (i < instancePath.length - 1) {
          currentChildrenMap = new Map(currentNode.children!.map(child => [child.label, child]));
        }
      }


      // Add the actual signal node as a leaf under the final instance node (parentNode)
      if (parentNode) {
        // REMOVED: Do not overwrite the unique key set in collectSignalsRecursive
        // signalNode.key = `${parentNode.key}${SignalMarker}${signalNode.label}`;
        // Ensure the parent has a children array
        if (!parentNode.children) parentNode.children = [];
        parentNode.children!.push(signalNode);
        // Sort children? Maybe later during aggregation.
      } else {
        // This case should not happen if instancePath always has at least the root element
        console.error(`[buildTreeFromSignalList] Failed to find parent node for signal ${signalNode.key}. Path:`, instancePath);
        // As a fallback, add to root, but this indicates an issue.
        rootMap.set(signalNode.key, signalNode); // Use the unique signal key
      }
    });

    // Convert the root map values to an array and sort
    return Array.from(rootMap.values()).sort((a, b) => a.label.localeCompare(b.label));
  };


  // Build the individual trees
  const predicateTree = buildTreeFromSignalList(predicateSignals);
  const muxTree = buildTreeFromSignalList(muxSignals);
  const registerTree = buildTreeFromSignalList(registerSignals);


  // --- Aggregate Coverage Calculation (unchanged, apply to new trees) ---
  const aggregateCoverageRecursive = (node: TreeNode): number | undefined => {
    if (node.isSignal) {
      return node.coverage;
    }
    // Check if children exists before accessing length
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
    node.coverage = undefined; // Explicitly set to undefined if no children or no valid coverage
    return undefined;
  };

  const applyAggregation = (treeNodes: TreeNode[]) => {
    treeNodes.forEach(node => aggregateCoverageRecursive(node));
  };

  applyAggregation(predicateTree);
  applyAggregation(muxTree);
  applyAggregation(registerTree);
  // --- End Aggregation ---

  return {
    predicates: predicateTree,
    mux: muxTree,
    registers: registerTree,
  };
}


// --- Formatting Functions (unchanged) ---
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

// --- Style Functions (unchanged) ---
export const getNodeStyle = (coverage?: number): CSSProperties => {
  if (coverage === undefined || coverage === null || coverage === 100) {
    return {};
  }
  let color = '';
  if (coverage < 50) color = 'hsl(0, 80%, 50%)'; // Red
  else if (coverage < 80) color = 'hsl(39, 100%, 50%)'; // Orange
  else color = 'hsl(60, 80%, 45%)'; // Yellow-ish
  return { color: color, fontWeight: 'bold' };
};
export const getConditionTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
export const getBitTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
