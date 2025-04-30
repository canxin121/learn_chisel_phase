use crate::types::coverage_info::{CoverageInfo, SourceFileIdentifier}; // Import SourceFileIdentifier
use std::fs; // Import fs for read_file and write_file

#[tauri::command]
pub async fn parse_coverage_info(mut coverage_info: CoverageInfo) -> Result<CoverageInfo, String> {
    coverage_info.parse();
    Ok(coverage_info)
}

// MODIFIED: Batch command now accepts specific source file identifiers
#[tauri::command]
pub async fn reread_files_with_new_root_batch(
    mut coverage_info: CoverageInfo,
    source_file_identifiers: Vec<SourceFileIdentifier>, // Expect list of identifiers
    new_root_dir: String,
) -> Result<CoverageInfo, String> {
    // Call the updated batch update method on CoverageInfo
    match coverage_info.update_source_file_roots_and_reload(&source_file_identifiers, &new_root_dir) {
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
