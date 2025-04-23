import type { ConditionCoveragePoint, RegisterCoveragePoint, RegisterBitCoverage } from "./CoverageReport";

export interface TreeNode {
  title: string;
  key: string;
  children?: TreeNode[];
  coverage?: number;
  type: 'root' | 'instance' | 'predicate' | 'mux' | 'register' | 'register_bit';
  details?: ConditionCoveragePoint | RegisterCoveragePoint | RegisterBitCoverage;
  isLeaf?: boolean;
  sourceLocation?: { filePath: string; line: number; column: number };
}
