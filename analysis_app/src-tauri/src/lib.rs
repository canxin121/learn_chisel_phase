use cmds::{
    parse_coverage_info, parse_coverage_report_with_coverage_info, read_file,
    reread_files_with_new_root_batch, 
    update_available_root_dirs,
};

pub mod cmds;
pub mod types;

#[cfg_attr(mobile, tauri::mobile_entry_point)]
pub fn run() {
    tauri::Builder::default()
        .plugin(tauri_plugin_dialog::init())
        .plugin(tauri_plugin_opener::init())
        .invoke_handler(tauri::generate_handler![
            parse_coverage_info,
            reread_files_with_new_root_batch,
            read_file,
            parse_coverage_report_with_coverage_info,
            update_available_root_dirs,
        ])
        .run(tauri::generate_context!())
        .expect("error while running tauri application");
}
