use cmds::{
    parse_coverage_info, read_file, reread_files_with_new_root_batch, // Use batch command
    write_coverage_info, write_file,
    // Removed: reread_file_with_new_root
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
            write_coverage_info,
            reread_files_with_new_root_batch, // Register batch command
            // Removed: reread_file_with_new_root
            read_file,
            write_file
        ])
        .run(tauri::generate_context!())
        .expect("error while running tauri application");
}
