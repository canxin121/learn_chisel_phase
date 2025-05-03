import { invoke } from "@tauri-apps/api/core";
import type { CoverageInfo } from "../types/CoverageInfo"; // 导入 CoverageInfo 类型

// 将 CoverageInfo 对象写回 JSON 文件的函数
export async function writeCoverageInfo(path: string, coverageInfo: CoverageInfo): Promise<void> {
    console.log(`Calling backend write_coverage_info for path: ${path}`);
    return await invoke("write_coverage_info", { path, coverageInfo });
}

