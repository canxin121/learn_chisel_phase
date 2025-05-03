import { invoke } from '@tauri-apps/api/core';

// 单个信号的信息
export interface SignalInfo {
    compressedName: string; // 压缩名称
    originName: string; // 原始信号名称
    type: string; // 信号类型
    info: string; // 原始信息字符串
    filePath?: string | null; // 相对文件路径
    line?: number | null; // 行号
    column?: number | null; // 列号
}

// 导出的端口信息
export interface ExportedPort {
    type: string;
    signals: SignalInfo[];
    // "nameMapping": {
    //     "_s0": "WaveformGenerator__M__WaveformGenerator__S__phaseAcc",
    //     "_s1": "WaveformGenerator__M__WaveformGenerator__S___T_1",
    //     "_s3": "WaveformGenerator__M__WaveformGenerator__S___T_3",
    //     "_s2": "WaveformGenerator__M__WaveformGenerator__S___T_2"
    //   }
    // 这里的 nameMapping 是一个映射关系，key 是压缩名称，value 是原始名称
    // 并且这里不包含前缀, 前缀不被压缩
    nameMapping: Record<string, string>; // 映射关系
}


// 模块内单个源文件的信息接口
export interface SourceFileInfo {
    relativePath: string; // 相对路径
    rootDir: string | null; // 根目录
    content: string | null; // 文件内容
    compressedName: string;
}

// ModuleInfo 包含一个源文件映射
export interface ModuleInfo {
    sourceFiles: Record<string, SourceFileInfo>; // 源文件映射
}

// 实例和信号的树状结构
export interface InstanceSignalTree {
    instanceName: string; // 实例名称
    moduleName: string; // 模块名称
    subInstances: InstanceSignalTree[]; // 子实例列表
    signals: SignalInfo[]; // 此实例直接包含的信号列表
}

// 用于后端命令识别特定源文件的接口
export interface SourceFileIdentifier {
    moduleName: string;
    relativePath: string;
}

// 覆盖信息文件的顶层结构
export interface CoverageInfo {
    topModuleName: string; // 顶层模块名称
    exportedPorts: ExportedPort[]; // 导出的端口列表
    moduleInfoMap: Record<string, ModuleInfo>; // 模块信息映射
    instanceSignalMap: InstanceSignalTree; // 实例/信号树
}

// 解析原始覆盖信息数据
export async function parseCoverageInfo(rawCoverageInfo: any): Promise<CoverageInfo> {
    const processedInfo: CoverageInfo = await invoke("parse_coverage_info", { coverageInfo: rawCoverageInfo });
    return processedInfo;
}

// 使用新的根目录批量重新读取文件
export async function rereadFilesWithNewRootBatch(
    currentCoverageInfo: CoverageInfo,
    sourceFileIdentifiers: SourceFileIdentifier[], // 源文件标识符
    newRootDir: string
): Promise<CoverageInfo> {
    console.log(`Calling backend reread_files_with_new_root_batch for ${sourceFileIdentifiers.length} source file(s).`);
    const updatedInfo: CoverageInfo = await invoke("reread_files_with_new_root_batch", {
        coverageInfo: currentCoverageInfo,
        sourceFileIdentifiers: sourceFileIdentifiers, // 标识符数组
        newRootDir: newRootDir
    });
    return updatedInfo;
}