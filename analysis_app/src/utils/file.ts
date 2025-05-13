import { invoke } from "@tauri-apps/api/core";
import { message } from "ant-design-vue";

export async function readFile(path:
    string
): Promise<string> {
    console.log(`Calling backend read_file for path: ${path}`);
    const startTime = performance.now();
    const result = await invoke<string>("read_file", { path });
    const endTime = performance.now();
    message.info(`read_file for ${path} took ${(endTime - startTime).toFixed(2)} ms.`);
    return result;
}
