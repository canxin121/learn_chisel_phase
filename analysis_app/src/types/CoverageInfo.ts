import { invoke } from '@tauri-apps/api/core';

export interface SignalInfo {
    fieldName: string;
    signalType: string;
    info: string;
    filePath?: string | null;
    line?: number | null;
    column?: number | null;
    rootDir?: string | null;
}

export interface ExportedPort {
    portName: string;
    signals: SignalInfo[];
}

export interface CoverageInfo {
    topModuleName: string;
    exportedPorts: ExportedPort[];
    sourceFiles: Record<string, string>;
}

export async function parseCoverageInfo(rawCoverageInfo: CoverageInfo): Promise<CoverageInfo> {
    const processedInfo: CoverageInfo = await invoke("parse_coverage_info", { coverageInfo: rawCoverageInfo });
    return processedInfo;
}

