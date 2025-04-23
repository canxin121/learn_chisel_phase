use crate::types::coverage_info::CoverageInfo;

#[tauri::command]
pub async fn parse_coverage_info(mut coverage_info: CoverageInfo) -> Result<CoverageInfo, String> {
    coverage_info.process_source_info();
    Ok(coverage_info)
}
