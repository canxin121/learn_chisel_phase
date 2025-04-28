use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::fs;
use std::path::Path;

#[derive(Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct SignalInfo {
    pub field_name: String,
    #[serde(rename = "type")]
    pub signal_type: String,
    pub info: String,
    #[serde(default)]
    pub file_path: Option<String>,
    #[serde(default)]
    pub line: Option<u32>,
    #[serde(default)]
    pub column: Option<u32>,
    #[serde(default)]
    pub root_dir: Option<String>,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct ExportedPort {
    pub port_name: String,
    pub signals: Vec<SignalInfo>,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct CoverageInfo {
    pub top_module_name: String,
    pub exported_ports: Vec<ExportedPort>,
    #[serde(default)]
    pub source_files: HashMap<String, String>,
}

impl CoverageInfo {
    pub fn process_source_info(&mut self) {
        let mut files_to_read = HashMap::new();

        for port in self.exported_ports.iter_mut() {
            for signal in port.signals.iter_mut() {
                if signal.file_path.is_none() {
                    if let Some(start_index) = signal.info.find(" @[") {
                        if let Some(end_index) = signal.info.rfind(']') {
                            let content = &signal.info[start_index + 3..end_index];

                            if let Some(last_space_index) = content.rfind(' ') {
                                let relative_path_str = &content[..last_space_index];
                                let location_str = &content[last_space_index + 1..];

                                let cleaned_relative_path = relative_path_str
                                    .strip_prefix("\\\\")
                                    .unwrap_or(relative_path_str);

                                let base_path_str = signal.root_dir.as_deref().unwrap_or(".");
                                let base_path = Path::new(base_path_str);

                                let absolute_path = base_path.join(cleaned_relative_path);
                                let absolute_path_str = absolute_path.to_string_lossy().to_string();

                                if let Some(colon_index) = location_str.find(':') {
                                    let line_str = &location_str[..colon_index];
                                    let col_str = &location_str[colon_index + 1..];

                                    let line = line_str.parse::<u32>().ok();
                                    let column = col_str.parse::<u32>().ok();

                                    signal.file_path = Some(absolute_path_str.clone());
                                    signal.line = line;
                                    signal.column = column;

                                    if !self.source_files.contains_key(&absolute_path_str) {
                                        if absolute_path.exists() {
                                            files_to_read.entry(absolute_path_str).or_insert(());
                                        } else {
                                            eprintln!(
                                                "Warning: Calculated path does not exist: {}",
                                                absolute_path_str
                                            );
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if let Some(existing_path) = &signal.file_path {
                    let path_obj = Path::new(existing_path);
                    if !self.source_files.contains_key(existing_path) && path_obj.exists() {
                        files_to_read.entry(existing_path.clone()).or_insert(());
                    } else if !path_obj.exists() {
                        eprintln!(
                            "Warning: Provided file_path does not exist: {}",
                            existing_path
                        );
                    }
                }
            }
        }

        for (file_path, _) in files_to_read {
            match fs::read_to_string(&file_path) {
                Ok(content) => {
                    self.source_files.insert(file_path, content);
                }
                Err(e) => {
                    eprintln!("Error reading file {}: {}", file_path, e);
                    self.source_files
                        .insert(file_path, format!("Error reading file: {}", e));
                }
            }
        }
    }
}
