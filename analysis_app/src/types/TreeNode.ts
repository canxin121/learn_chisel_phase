export interface TreeNode {
  key: string; // Unique identifier (e.g., full path)
  label: string; // Display name for this node part (e.g., instance name or signal name)
  children?: TreeNode[];
  coverage?: number; // Aggregated or direct coverage percentage
  isSignal: boolean; // True if this node represents a specific coverage point (leaf in conceptual hierarchy)
  data?: any; // Original data point from report + associated info (optional, for details)
  originatingModule?: string; // Module where the signal originates (parsed)
  // sourceLocation is correctly populated by the updated buildCoverageTrees
  sourceLocation?: { filePath: string; line: number; column: number }; // Direct source location
}
