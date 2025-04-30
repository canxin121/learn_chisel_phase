export interface TreeNode {
  key: string; // 唯一标识符 (例如，完整路径)
  label: string; // 此节点部分的显示名称 (例如，实例名称或信号名称)
  children?: TreeNode[];
  coverage?: number; // 聚合或直接的覆盖率百分比
  isSignal: boolean; // 如果此节点表示特定的覆盖点 (概念层次结构中的叶子)，则为 true
  data?: any; // 来自报告的原始数据点 + 相关信息 (可选，用于详细信息)
  originatingModule?: string; // 信号起源的模块 (已解析)
  // sourceLocation 由更新后的 buildCoverageTrees 正确填充
  sourceLocation?: { filePath: string; line: number; column: number }; // 直接的源位置
}
