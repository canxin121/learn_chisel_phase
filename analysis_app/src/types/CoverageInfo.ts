import { invoke } from '@tauri-apps/api/core';

export interface SignalInfo {
    name: string;
    type: string;
    info: string;
    filePath?: string | null;
    line?: number | null;
    column?: number | null;

}

export interface ExportedPort {
    type: string;
    signals: SignalInfo[];
}


export interface ModuleInfo {
    content: string | null;
    filePath: string | null;
    rootDir: string | null;
}

export interface InstanceSignalTree {
    instanceName: string;
    moduleName: string;
    subInstances: InstanceSignalTree[];
    signals: SignalInfo[];
}


export interface CoverageInfo {
    topModuleName: string;
    exportedPorts: ExportedPort[];
    moduleInfoMap: Record<string, ModuleInfo>;
    instanceSignalMap: InstanceSignalTree;
}

export async function parseCoverageInfo(rawCoverageInfo: any): Promise<CoverageInfo> {
    const processedInfo: CoverageInfo = await invoke("parse_coverage_info", { coverageInfo: rawCoverageInfo });
    return processedInfo;
}

export async function rereadFilesWithNewRootBatch(
    currentCoverageInfo: CoverageInfo,
    moduleKeys: string[], // Expect an array of keys
    newRootDir: string
): Promise<CoverageInfo> {
    console.log(`Calling backend reread_files_with_new_root_batch for keys: ${moduleKeys.join(', ')}`);
    const updatedInfo: CoverageInfo = await invoke("reread_files_with_new_root_batch", {
        coverageInfo: currentCoverageInfo,
        moduleKeys: moduleKeys, // Pass the array
        newRootDir: newRootDir
    });
    return updatedInfo;
}