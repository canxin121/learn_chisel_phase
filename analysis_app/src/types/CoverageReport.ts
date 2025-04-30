// 覆盖率报告的顶层结构
export interface CoverageReport {
    summary: CoverageSummary; // 总体摘要信息
    conditional_predicates: ConditionCoveragePoint[]; // 条件谓词覆盖点
    mux_conditions: ConditionCoveragePoint[]; // Mux 条件覆盖点
    register_coverage: RegisterCoveragePoint[]; // 寄存器覆盖点
}

// 覆盖率摘要信息
export interface CoverageSummary {
    overall_coverage_percent: number; // 总体覆盖率百分比
    total_bins_hit: number; // 命中的总 bin 数
    total_bins: number; // 总 bin 数
}

// 条件覆盖点 (用于谓词和 Mux)
export interface ConditionCoveragePoint {
    name: string; // 覆盖点名称
    hit_true: boolean; // 是否命中 true 分支
    hit_false: boolean; // 是否命中 false 分支
    bins_hit: number; // 此覆盖点命中的 bin 数
    bins_total: number; // 此覆盖点的总 bin 数
    coverage_percent: number; // 此覆盖点的覆盖率百分比
    count_true?: number; // true 分支命中次数 (可选)
    count_false?: number; // false 分支命中次数 (可选)
    total_updates?: number; // 总更新次数 (可选)
    true_percentage?: number; // true 分支命中百分比 (可选)
    false_percentage?: number; // false 分支命中百分比 (可选)
}

// 寄存器覆盖点
export interface RegisterCoveragePoint {
    name: string; // 寄存器信号名称
    width: number; // 寄存器位宽
    bins_hit: number; // 命中的 bin 数 (通常是 hit_zero + hit_one 的总和)
    bins_total: number; // 总 bin 数 (通常是 width * 2)
    coverage_percent: number; // 寄存器的覆盖率百分比
    bit_details: RegisterBitCoverage[]; // 每个位的详细覆盖信息
}

// 寄存器单个位的覆盖信息
export interface RegisterBitCoverage {
    bit: number; // 位索引
    hit_zero: boolean; // 是否命中 0 值
    hit_one: boolean; // 是否命中 1 值
    covered: boolean; // 此位是否被覆盖 (hit_zero && hit_one)
    status: string; // 状态描述 (例如 "Covered", "Hit 0", "Hit 1", "Uncovered")
    missing?: string; // 缺失的覆盖情况 (例如 "1", "0")
    count_zero?: number; // 命中 0 的次数 (可选)
    count_one?: number; // 命中 1 的次数 (可选)
    total_updates?: number; // 总更新次数 (可选)
    zero_percentage?: number; // 命中 0 的百分比 (可选)
    one_percentage?: number; // 命中 1 的百分比 (可选)
}