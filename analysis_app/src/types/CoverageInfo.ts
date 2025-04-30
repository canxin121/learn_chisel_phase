import { invoke } from '@tauri-apps/api/core';

export interface SignalInfo {
    name: string;
    type: string;
    info: string;
    // filePath now stores the relative path from the info string
    filePath?: string | null;
    line?: number | null;
    column?: number | null;

}

export interface ExportedPort {
    type: string;
    signals: SignalInfo[];
}


// NEW: Interface for individual source file info within a module
export interface SourceFileInfo {
    relativePath: string; // The relative path (key in the map)
    rootDir: string | null;
    content: string | null; // Content or error message
}

// MODIFIED: ModuleInfo now contains a map of source files
export interface ModuleInfo {
    // Key is the relative file path
    sourceFiles: Record<string, SourceFileInfo>;
}

export interface InstanceSignalTree {
    instanceName: string;
    moduleName: string;
    subInstances: InstanceSignalTree[];
    signals: SignalInfo[];
}

// NEW: Interface to identify a specific source file for backend commands
export interface SourceFileIdentifier {
    moduleName: string;
    relativePath: string;
}

export interface CoverageInfo {
    topModuleName: string;
    exportedPorts: ExportedPort[];
    // moduleInfoMap's value is now the updated ModuleInfo interface
    moduleInfoMap: Record<string, ModuleInfo>;
    instanceSignalMap: InstanceSignalTree;
}

export async function parseCoverageInfo(rawCoverageInfo: any): Promise<CoverageInfo> {
    const processedInfo: CoverageInfo = await invoke("parse_coverage_info", { coverageInfo: rawCoverageInfo });
    return processedInfo;
}

// MODIFIED: Update signature to accept SourceFileIdentifier array
export async function rereadFilesWithNewRootBatch(
    currentCoverageInfo: CoverageInfo,
    sourceFileIdentifiers: SourceFileIdentifier[], // Expect an array of identifiers
    newRootDir: string
): Promise<CoverageInfo> {
    console.log(`Calling backend reread_files_with_new_root_batch for ${sourceFileIdentifiers.length} source file(s).`);
    const updatedInfo: CoverageInfo = await invoke("reread_files_with_new_root_batch", {
        coverageInfo: currentCoverageInfo,
        sourceFileIdentifiers: sourceFileIdentifiers, // Pass the array of identifiers
        newRootDir: newRootDir
    });
    return updatedInfo;
}