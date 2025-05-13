import { invoke } from "@tauri-apps/api/core";
import { message } from "ant-design-vue";

// Placeholder types for Node structures from Rust
export interface ConditionCoverageNode {
    instance_name: string;
    module_name: string;
    coverage_points: ConditionCoveragePoint[];
    sub_instances: ConditionCoverageNode[];
}

export interface RegisterCoverageNode {
    instance_name: string;
    module_name: string;
    coverage_points: RegisterCoveragePoint[];
    sub_instances: RegisterCoverageNode[];
}

export interface LineCoverage {
    conditional_predicates: ConditionCoveragePoint[];
    mux_conditions: ConditionCoveragePoint[];
    register_coverage: RegisterCoveragePoint[];
}

export interface SourceFileCoverage {
    file_path: string;
    lines: Record<number, LineCoverage>; // Maps line number (u32) to LineCoverage
}

export interface InstanceCoverageNode {
    instance_name: string;
    module_name: string;
    source_files: SourceFileCoverage[];
    sub_instances: InstanceCoverageNode[];
}

// 覆盖率报告的顶层结构
export interface CoverageReport {
    summary: CoverageSummary;
    conditional_predicates: ConditionCoveragePoint[];
    mux_conditions: ConditionCoveragePoint[];
    register_coverage: RegisterCoveragePoint[];
    conditional_coverage_tree?: ConditionCoverageNode;
    mux_condition_tree?: ConditionCoverageNode;
    register_coverage_tree?: RegisterCoverageNode;
    instance_coverage_tree?: InstanceCoverageNode; // Added field
}

// CoverageReport after parsing, with previously nullable fields now guaranteed
export interface ParsedCoverageReport {
    summary: CoverageSummary;
    conditional_predicates: ConditionCoveragePoint[];
    mux_conditions: ConditionCoveragePoint[];
    register_coverage: RegisterCoveragePoint[];
    conditional_coverage_tree: ConditionCoverageNode;
    mux_condition_tree: ConditionCoverageNode;
    register_coverage_tree: RegisterCoverageNode;
    instance_coverage_tree: InstanceCoverageNode; // Added field
}

// 覆盖率摘要信息
export interface CoverageSummary {
    overall_coverage_percent: number; // 总体覆盖率百分比
    total_bins_hit: number; // 命中的总 bin 数
    total_bins: number; // 总 bin 数
}

// 条件覆盖点 (用于谓词和 Mux)
export interface ConditionCoveragePoint {
    compressed_name: string; // 覆盖点名称
    origin_name?: string; // Added: Original name from Rust struct if available
    hit_true: boolean; // 是否命中 true 分支
    hit_false: boolean; // 是否命中 false 分支
    bins_hit: number; // 此覆盖点命中的 bin 数
    bins_total: number; // 此覆盖点的总 bin 数
    coverage_percent: number; // 此覆盖点的覆盖率百分比
    count_true: number; // CHANGED: Was optional
    count_false: number; // CHANGED: Was optional
    total_updates: number; // CHANGED: Was optional
    true_percentage: number; // CHANGED: Was optional
    false_percentage: number; // CHANGED: Was optional
}

// 寄存器覆盖点
export interface RegisterCoveragePoint {
    compressed_name: string; // 寄存器信号名称
    origin_name?: string; // ADDED: To match Rust struct
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
    count_zero: number; // CHANGED: Was optional
    count_one: number; // CHANGED: Was optional
    total_updates: number; // CHANGED: Was optional
    zero_percentage: number; // CHANGED: Was optional
    one_percentage: number; // CHANGED: Was optional
}

export async function parseCoverageReportWithCoverageInfo(
    coverageReportPath: string,
    coverageInfoPath: string
): Promise<void> {
    // 调用后端命令，该命令现在只接受路径
    const startTime = performance.now();
    await invoke("parse_coverage_report_with_coverage_info", {
        coverageReportPath,
        coverageInfoPath
    });
    const endTime = performance.now();
    message.info(`parse_coverage_report_with_coverage_info took ${(endTime - startTime).toFixed(2)} ms.`);
}