use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::fs;

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
                if let Some(start_index) = signal.info.find(" @[") {
                    if let Some(end_index) = signal.info.rfind(']') {
                        let content = &signal.info[start_index + 3..end_index];

                        if let Some(last_space_index) = content.rfind(' ') {
                            let file_path_str = &content[..last_space_index];
                            let location_str = &content[last_space_index + 1..];

                            if let Some(colon_index) = location_str.find(':') {
                                let line_str = &location_str[..colon_index];
                                let col_str = &location_str[colon_index + 1..];

                                let line = line_str.parse::<u32>().ok();
                                let column = col_str.parse::<u32>().ok();
                                let file_path = file_path_str.to_string();

                                signal.file_path = Some(file_path.clone());
                                signal.line = line;
                                signal.column = column;

                                if !self.source_files.contains_key(&file_path) {
                                    files_to_read.entry(file_path).or_insert(());
                                }
                            }
                        }
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
                    self.source_files
                        .insert(file_path, format!("Error reading file: {}", e));
                }
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_process_source_info() {
        let mut coverage_info: CoverageInfo =
            serde_json::from_str(include_str!(r"../../test_data/UART_rx_coverage_info.json"))
                .unwrap();
        coverage_info.process_source_info();

        println!("Coverage Info: {:#?}", coverage_info);
    }
}
