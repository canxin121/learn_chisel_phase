import { invoke } from "@tauri-apps/api/core";
import type { CoverageInfo } from "../types/CoverageInfo"; // Import CoverageInfo type

// Function to read the raw CoverageInfo JSON file content
export async function readFile(path: string): Promise<string> {
    console.log(`Calling backend read_file for path: ${path}`);
    return await invoke("read_file", { path });
}

// Function to write the CoverageInfo object back to a JSON file
// Note: The backend command expects the object, not a string
export async function writeCoverageInfo(path: string, coverageInfo: CoverageInfo): Promise<void> {
    console.log(`Calling backend write_coverage_info for path: ${path}`);
    return await invoke("write_coverage_info", { path, coverageInfo });
}

// Keep the generic writeFile if needed elsewhere, but writeCoverageInfo is specific
export async function writeFile(path: string, content: string): Promise<void> {
     console.warn("Using generic writeFile, consider writeCoverageInfo for CoverageInfo objects.");
     return await invoke("write_file", { path, content });
}
