import { invoke } from '@tauri-apps/api/core';
import { message } from 'ant-design-vue';

// 单个信号的信息
export interface SignalInfo {
    compressed_name: string; // 压缩名称
    type: string; // 信号类型
    info: string; // 原始信息字符串
    file_path?: string | null; // 相对文件路径 (Matches Rust Option<String>)
    line?: number | null; // 行号 (Matches Rust Option<u32>)
    column?: number | null; // 列号 (Matches Rust Option<u32>)
}

// 导出的端口信息
export interface ExportedPort {
    type: string;
    signals: SignalInfo[];
    name_mapping: Record<string, string>; // CHANGED: Was optional, made non-optional
}

// 模块内单个源文件的信息接口 (Matches Rust SourceFileInfo)
export interface SourceFileInfo {
    root_dir?: string | null; // 根目录 (Matches Rust Option<String>)
    content?: string | null; // 文件内容 (Matches Rust Option<String>)
}

// 实例和信号的树状结构 (Matches Rust InstanceSignalTree)
export interface InstanceSignalTree {
    instance_name: string; // 实例名称
    module_name: string; // 模块名称
    signals: SignalInfo[]; // Matches Rust Vec<SignalInfo>
    sub_instances: InstanceSignalTree[]; // Matches Rust Vec<InstanceSignalTree>
}

// 用于后端命令识别特定源文件的接口
export interface SourceFileIdentifier {
    module_name: string;
    relative_path: string;
}

// 覆盖信息文件的顶层结构 (Matches Rust CoverageInfo)
export interface CoverageInfo {
    top_module_name: string; // Matches Rust String
    exported_ports: ExportedPort[]; // Matches Rust Vec<ExportedPort>
    module_source_files?: Record<string, string[]>; // Matches Rust Option<HashMap<String, Vec<String>>>
    source_file_info_map?: Record<string, SourceFileInfo>; // Matches Rust Option<HashMap<String, SourceFileInfo>>
    instance_signal_tree?: InstanceSignalTree; // Matches Rust Option<InstanceSignalTree>
    available_root_dirs?: string[]; // Matches Rust Option<Vec<String>>
}

// CoverageInfo after parsing, with previously nullable fields now guaranteed
export interface ParsedCoverageInfo {
    top_module_name: string;
    exported_ports: ExportedPort[];
    module_source_files: Record<string, string[]>; // Guaranteed after parse
    source_file_info_map: Record<string, SourceFileInfo>; // Guaranteed after parse
    instance_signal_tree: InstanceSignalTree; // Guaranteed after parse
    available_root_dirs?: string[]; // Still optional
}

// 解析原始覆盖信息数据
export async function parseCoverageInfo(coverageInfoPath: string): Promise<void> {
    // 调用后端命令，该命令现在只接受路径，并在内部处理读写
    // 后端命令成功则返回 void，失败则抛出错误或返回错误信息字符串
    const startTime = performance.now();
    await invoke("parse_coverage_info", { coverageInfoPath });
    const endTime = performance.now();
    message.info(`parse_coverage_info took ${(endTime - startTime).toFixed(2)} ms.`);
}

// 使用新的根目录批量重新读取文件
export async function rereadFilesWithNewRootBatch(
    coverageInfoPath: string,
    sourceFileIdentifiers: SourceFileIdentifier[],
    newRootDir: string
): Promise<void> {
    // 调用后端命令，该命令现在只接受路径
    const startTime = performance.now();
    await invoke("reread_files_with_new_root_batch", {
        coverageInfoPath: coverageInfoPath,
        sourceFileIdentifiers: sourceFileIdentifiers,
        newRootDir: newRootDir
    });
    const endTime = performance.now();
    message.info(`reread_files_with_new_root_batch took ${(endTime - startTime).toFixed(2)} ms.`);
}

// 更新可用的根目录
export async function updateAvailableRootDirs(
    coverageInfoPath: string,
    newRootDirs: string[]
): Promise<void> {
    const startTime = performance.now();
    await invoke("update_available_root_dirs", {
        coverageInfoPath,
        newRootDirs
    });
    const endTime = performance.now();
    message.info(`update_available_root_dirs took ${(endTime - startTime).toFixed(2)} ms.`);
}