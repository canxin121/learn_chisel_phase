use crate::types::coverage_info::CoverageInfo;
use std::fs; // Import fs for read_file and write_file

#[tauri::command]
pub async fn parse_coverage_info(mut coverage_info: CoverageInfo) -> Result<CoverageInfo, String> {
    coverage_info.parse();
    Ok(coverage_info)
}

// NEW: Batch command to update root dir for multiple modules
#[tauri::command]
pub async fn reread_files_with_new_root_batch(
    mut coverage_info: CoverageInfo,
    module_keys: Vec<String>, // Expect a list of keys
    new_root_dir: String,
) -> Result<CoverageInfo, String> {
    // Call the batch update method on CoverageInfo
    match coverage_info.update_multiple_module_roots_and_reload(&module_keys, &new_root_dir) {
        Ok(_) => Ok(coverage_info), // Return the updated info on success
        Err(e) => Err(e),           // Return the error string on failure
    }
}

#[tauri::command]
pub fn write_coverage_info(path: String, coverage_info: CoverageInfo) -> Result<(), String> {
    let content = serde_json::to_string_pretty(&coverage_info).map_err(|e| e.to_string())?;
    std::fs::write(path, content).map_err(|e| e.to_string())
}

// Add generic file read/write commands if they are needed elsewhere
#[tauri::command]
pub fn read_file(path: String) -> Result<String, String> {
    fs::read_to_string(path).map_err(|e| e.to_string())
}

#[tauri::command]
pub fn write_file(path: String, content: String) -> Result<(), String> {
    fs::write(path, content).map_err(|e| e.to_string())
}
