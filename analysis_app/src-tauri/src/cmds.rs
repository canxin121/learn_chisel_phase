use crate::types::coverage_info::CoverageInfo;

#[tauri::command]
pub async fn parse_coverage_info(mut coverage_info: CoverageInfo) -> Result<CoverageInfo, String> {
    coverage_info.process_source_info();
    Ok(coverage_info)
}

#[tauri::command]
pub async fn write_file(path: String, content: String) -> Result<(), String> {
    std::fs::write(&path, content).map_err(|e| e.to_string())?;
    Ok(())
}