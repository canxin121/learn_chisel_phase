use crate::types::{
    coverage_info::{CoverageInfo, SourceFileIdentifier},
    coverage_report::CoverageReport,
};
use std::fs;

// Helper function to read CoverageInfo from a file path
fn read_coverage_info_from_file(path: &str) -> Result<CoverageInfo, String> {
    let content = fs::read_to_string(path).map_err(|e| e.to_string())?;
    serde_json::from_str(&content).map_err(|e| e.to_string())
}

// Helper function to write CoverageInfo to a file path
fn write_coverage_info_to_file(path: &str, coverage_info: &CoverageInfo) -> Result<(), String> {
    let content = serde_json::to_string_pretty(coverage_info).map_err(|e| e.to_string())?;
    fs::write(path, content).map_err(|e| e.to_string())
}

// Helper function to read CoverageReport from a file path
fn read_coverage_report_from_file(path: &str) -> Result<CoverageReport, String> {
    let content = fs::read_to_string(path).map_err(|e| e.to_string())?;
    serde_json::from_str(&content).map_err(|e| e.to_string())
}

// Helper function to write CoverageReport to a file path
fn write_coverage_report_to_file(
    path: &str,
    coverage_report: &CoverageReport,
) -> Result<(), String> {
    let content = serde_json::to_string_pretty(coverage_report).map_err(|e| e.to_string())?;
    fs::write(path, content).map_err(|e| e.to_string())
}

#[tauri::command]
pub async fn parse_coverage_info(coverage_info_path: String) -> Result<(), String> {
    let mut coverage_info = read_coverage_info_from_file(&coverage_info_path)?;
    coverage_info.parse(); // Assumes in-place modification, infallible or error handled internally
    write_coverage_info_to_file(&coverage_info_path, &coverage_info)
}

#[tauri::command]
pub async fn reread_files_with_new_root_batch(
    coverage_info_path: String,
    source_file_identifiers: Vec<SourceFileIdentifier>,
    new_root_dir: String,
) -> Result<(), String> {
    let mut coverage_info = read_coverage_info_from_file(&coverage_info_path)?;
    // Assuming update_source_file_roots_and_reload returns Result<(), StringOrCompatibleError>
    coverage_info.update_source_file_roots_and_reload(&source_file_identifiers, &new_root_dir)?;
    write_coverage_info_to_file(&coverage_info_path, &coverage_info)
}

#[tauri::command]
pub fn parse_coverage_report_with_coverage_info(
    coverage_report_path: String,
    coverage_info_path: String,
) -> Result<(), String> {
    let mut coverage_report = read_coverage_report_from_file(&coverage_report_path)?;
    let coverage_info = read_coverage_info_from_file(&coverage_info_path)?;

    coverage_report.parse_with_coverage_info(&coverage_info); // Assumes in-place modification, infallible or error handled internally

    write_coverage_report_to_file(&coverage_report_path, &coverage_report)
}

#[tauri::command]
pub fn read_file(path: String) -> Result<String, String> {
    fs::read_to_string(path).map_err(|e| e.to_string())
}

#[tauri::command]
pub async fn update_available_root_dirs(
    coverage_info_path: String,
    new_root_dirs: Vec<String>,
) -> Result<(), String> {
    let mut coverage_info = read_coverage_info_from_file(&coverage_info_path)?;
    coverage_info.set_available_root_dirs(new_root_dirs);
    write_coverage_info_to_file(&coverage_info_path, &coverage_info)
}
