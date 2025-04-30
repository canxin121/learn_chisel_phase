import { invoke } from "@tauri-apps/api/core";
import type { CoverageInfo } from "../types/CoverageInfo"; // 导入 CoverageInfo 类型

// 读取原始 CoverageInfo JSON 文件内容的函数
export async function readFile(path: string): Promise<string> {
    console.log(`Calling backend read_file for path: ${path}`);
    return await invoke("read_file", { path });
}

// 将 CoverageInfo 对象写回 JSON 文件的函数
export async function writeCoverageInfo(path: string, coverageInfo: CoverageInfo): Promise<void> {
    console.log(`Calling backend write_coverage_info for path: ${path}`);
    return await invoke("write_coverage_info", { path, coverageInfo });
}

// 通用的 writeFile 函数
export async function writeFile(path: string, content: string): Promise<void> {
     console.warn("Using generic writeFile, consider writeCoverageInfo for CoverageInfo objects.");
     return await invoke("write_file", { path, content });
}
