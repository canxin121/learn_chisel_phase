import { invoke } from "@tauri-apps/api/core";
import type { CoverageInfo } from "../types/CoverageInfo"; // 导入 CoverageInfo 类型

// 读取原始 CoverageInfo JSON 文件内容的函数
export async function readFile(path: string): Promise<string> {
    console.log(`Calling backend read_file for path: ${path}`);
    return await invoke("read_file", { path });
}

// 将 CoverageInfo 对象写回 JSON 文件的函数
// 注意：后端命令期望接收对象，而不是字符串
export async function writeCoverageInfo(path: string, coverageInfo: CoverageInfo): Promise<void> {
    console.log(`Calling backend write_coverage_info for path: ${path}`);
    return await invoke("write_coverage_info", { path, coverageInfo });
}

// 如果其他地方需要，保留通用的 writeFile 函数，但 writeCoverageInfo 更具体
export async function writeFile(path: string, content: string): Promise<void> {
     console.warn("Using generic writeFile, consider writeCoverageInfo for CoverageInfo objects.");
     return await invoke("write_file", { path, content });
}
