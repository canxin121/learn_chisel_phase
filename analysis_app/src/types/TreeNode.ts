export interface TreeNode {
  key: string; // 唯一标识符
  label: string; // 显示名称
  children?: TreeNode[];
  coverage?: number; // 覆盖率百分比
  isSignal: boolean; // 是否为信号节点
  data?: any; // 附加数据
  originatingModule?: string; // 信号起源的模块
  sourceLocation?: { filePath: string; line: number; column: number }; // 直接的源位置
}
