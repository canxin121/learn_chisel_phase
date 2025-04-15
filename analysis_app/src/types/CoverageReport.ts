export interface CoverageReport {
    summary: CoverageSummary;
    conditional_predicates: ConditionCoveragePoint[];
    mux_conditions: ConditionCoveragePoint[];
    register_coverage: RegisterCoveragePoint[];
}

export interface CoverageSummary {
    overall_coverage_percent: number;
    total_bins_hit: number;
    total_bins: number;
}

export interface ConditionCoveragePoint {
    name: string;
    hit_true: boolean;
    hit_false: boolean;
    bins_hit: number;
    bins_total: number;
    coverage_percent: number;
}

export interface RegisterCoveragePoint {
    name: string;
    width: number;
    bins_hit: number;
    bins_total: number;
    coverage_percent: number;
    bit_details: RegisterBitCoverage[];
}

export interface RegisterBitCoverage {
    bit: number;
    hit_zero: boolean;
    hit_one: boolean;
    covered: boolean;
    status: string;
    missing?: string;
}