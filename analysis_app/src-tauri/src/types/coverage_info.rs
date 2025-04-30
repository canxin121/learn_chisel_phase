use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::fs;
use std::path::{Path, PathBuf};

#[derive(Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct SignalInfo {
    // TopModuleNameAsTopInstanceName__I__subinstance1__I__subinstance2__M__SubInstance2Module__S__signal1__s__out
    // 上述是一个 探针信号名称, 首先是 将TopModule的名字作为顶层实例的名字, 然后使用__I__连接实例路径, 然后使用__M__标志最后一个实例的Module名称, 然后使用__S__标注信号名称, __s__则是代替信号中的`.`
    // 可以保证M标志的Module名称是 唯一的
    pub name: String,
    pub r#type: String,
    pub info: String,
    // info包含下面三个字段的值
    // 一个示例是         "info": " @[\\\\chisel_coverage_tool\\\\src\\\\modules\\\\Reg.scala 13:24]"
    // file_path will store the relative path extracted from the info string
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
    pub r#type: String,
    pub signals: Vec<SignalInfo>,
}

// NEW: Structure to hold info about a single source file associated with a module
#[derive(Serialize, Deserialize, Debug, Clone, Default)]
#[serde(rename_all = "camelCase")]
pub struct SourceFileInfo {
    // The relative path extracted from signal info (acts as key in ModuleInfo map)
    // Stored here for potential convenience, though redundant with the map key.
    relative_path: String,
    // User-defined root directory for this specific source file
    root_dir: Option<String>,
    // Loaded content of the source file
    content: Option<String>,
}

// MODIFIED: ModuleInfo now holds a map of source files
#[derive(Serialize, Deserialize, Debug, Clone, Default)]
#[serde(rename_all = "camelCase")]
pub struct ModuleInfo {
    // Map where key is the relative file path (from signal info)
    // and value is the detailed info for that source file.
    #[serde(default)]
    source_files: HashMap<String, SourceFileInfo>,
}

#[derive(Default, Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct InstanceSignalTree {
    pub instance_name: String, // Make fields public
    pub module_name: String,   // Make fields public
    #[serde(default)]
    pub sub_instances: Vec<InstanceSignalTree>, // Make fields public
    #[serde(default)]
    pub signals: Vec<SignalInfo>, // Make fields public
}

// NEW: Struct to identify a specific source file
#[derive(Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct SourceFileIdentifier {
    pub module_name: String,
    pub relative_path: String,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct CoverageInfo {
    pub top_module_name: String,
    pub exported_ports: Vec<ExportedPort>,
    #[serde(default)]
    pub module_info_map: HashMap<String, ModuleInfo>,
    #[serde(default)]
    pub instance_signal_map: InstanceSignalTree,
}

impl CoverageInfo {
    // 1. Parse SignalInfo.info, correct path, extract line/col. Store *relative* path in SignalInfo.file_path.
    // 2. Populate module_info_map: For each signal, find its moduleName and relative filePath. Add/update the SourceFileInfo entry within the corresponding ModuleInfo.
    // 3. Build instance_signal_map tree.
    // 4. Load content for all SourceFileInfo entries based on their rootDir and relativePath.
    pub fn parse(&mut self) {
        // Initialize instance_signal_map root
        self.instance_signal_map = InstanceSignalTree {
            instance_name: self.top_module_name.clone(),
            module_name: self.top_module_name.clone(),
            sub_instances: Vec::new(),
            signals: Vec::new(),
        };

        // Clear existing module info map before parsing
        self.module_info_map.clear();

        // 1, 2, 3: Parse signals, populate module_info_map and instance_signal_map
        for port in self.exported_ports.iter_mut() {
            for signal in port.signals.iter_mut() {
                let mut corrected_relative_path: Option<String> = None; // Store corrected *relative* path

                // Parse info: " @[<file_path> <line>:<column>]"
                if let Some(start) = signal.info.find("@[") {
                    if let Some(end) = signal.info.find(']') {
                        let core_info = &signal.info[start + 2..end];
                        if let Some(space_pos) = core_info.rfind(' ') {
                            let path_str_raw = core_info[..space_pos].trim();
                            let mut path_str = path_str_raw.replace(r"\\", "\\").replace('\\', "/");
                            let loc_str = core_info[space_pos + 1..].trim();

                            // Path correction logic (remove incorrect leading '/')
                            let path_obj = Path::new(&path_str);
                            if path_str.starts_with('/') && path_str.len() > 1 && !path_obj.exists()
                            {
                                let is_likely_windows_drive = path_str.len() >= 3
                                    && path_str.chars().nth(1) == Some(':')
                                    && path_str.chars().nth(2) == Some('/');
                                if !is_likely_windows_drive {
                                    path_str = path_str[1..].to_string();
                                }
                            }
                            // Store the corrected *relative* path
                            corrected_relative_path = Some(path_str);

                            // Parse line and column
                            if let Some(colon_pos) = loc_str.find(':') {
                                if let Ok(line) = loc_str[..colon_pos].parse::<u32>() {
                                    signal.line = Some(line);
                                }
                                if let Ok(col) = loc_str[colon_pos + 1..].parse::<u32>() {
                                    signal.column = Some(col);
                                }
                            }
                        }
                    }
                }
                // Assign the corrected *relative* path to signal.file_path
                signal.file_path = corrected_relative_path.clone(); // Clone for signal

                // Extract module name, instance path, and update module_info_map / instance_signal_map
                if let Some(s_start) = signal.name.find("__S__") {
                    let instance_module_part = &signal.name[..s_start];
                    let mut module_name_extracted = String::new();
                    let mut instance_path_parts: Vec<&str> = Vec::new();

                    if let Some(m_start) = instance_module_part.rfind("__M__") {
                        module_name_extracted = instance_module_part[m_start + 5..].to_string();
                        let instance_part = &instance_module_part[..m_start];
                        instance_path_parts = instance_part.split("__I__").collect();

                        // Update module_info_map using the extracted module name and corrected relative path
                        if let Some(relative_path) = &corrected_relative_path {
                            // Get or insert the ModuleInfo for this module name
                            let module_entry = self
                                .module_info_map
                                .entry(module_name_extracted.clone())
                                .or_insert_with(ModuleInfo::default); // Use default if new

                            // Get or insert the SourceFileInfo for this specific relative path within the module
                            module_entry
                                .source_files
                                .entry(relative_path.clone())
                                .or_insert_with(|| SourceFileInfo {
                                    relative_path: relative_path.clone(), // Store relative path
                                    root_dir: None, // Initialize rootDir as None
                                    content: None,  // Initialize content as None
                                });
                        } else {
                            eprintln!(
                                "Warning: Signal '{}' has module name '{}' but no file path could be parsed from info string '{}'. Cannot associate with source file.",
                                signal.name, module_name_extracted, signal.info
                            );
                        }
                    } else {
                        // Handle cases without __M__ (e.g., top-level signals)
                        instance_path_parts = vec![instance_module_part];
                        module_name_extracted = self.top_module_name.clone(); // Assume top module
                                                                              // Top-level signals might still have source info
                        if let Some(relative_path) = &corrected_relative_path {
                            let module_entry = self
                                .module_info_map
                                .entry(module_name_extracted.clone())
                                .or_insert_with(ModuleInfo::default);
                            module_entry
                                .source_files
                                .entry(relative_path.clone())
                                .or_insert_with(|| SourceFileInfo {
                                    relative_path: relative_path.clone(),
                                    root_dir: None,
                                    content: None,
                                });
                        } else {
                            eprintln!(
                                "Warning: Top-level signal '{}' has no file path parsed from info string '{}'.",
                                signal.name, signal.info
                            );
                        }
                    }

                    // Build/Navigate the InstanceSignalTree (logic remains the same)
                    let mut current_node = &mut self.instance_signal_map;
                    for (i, &instance_name_part) in instance_path_parts.iter().enumerate().skip(1) {
                        let position = current_node
                            .sub_instances
                            .iter()
                            .position(|sub| sub.instance_name == instance_name_part);

                        if let Some(pos) = position {
                            current_node = &mut current_node.sub_instances[pos];
                        } else {
                            // Determine module name for new sub-instance (using current signal's module if last part)
                            let sub_module_name = if i == instance_path_parts.len() - 1 {
                                module_name_extracted.clone()
                            } else {
                                // Using "Unknown" for intermediate nodes remains a simplification.
                                // A full pre-scan could map all instance paths to module names.
                                String::from("Unknown")
                            };

                            let new_node = InstanceSignalTree {
                                instance_name: instance_name_part.to_string(),
                                module_name: sub_module_name,
                                sub_instances: Vec::new(),
                                signals: Vec::new(),
                            };
                            current_node.sub_instances.push(new_node);
                            current_node = current_node.sub_instances.last_mut().unwrap();
                        }
                    }
                    // Add the signal (with its relative file_path) to the final node
                    current_node.signals.push(signal.clone());
                } else {
                    eprintln!(
                        "Warning: Signal name '{}' does not contain '__S__'. Skipping processing.",
                        signal.name
                    );
                }
            }
        }

        // 4: Load file content for all SourceFileInfo entries
        self.load_all_module_content();
    }

    // MODIFIED: Helper function to load/reload content for all source files within all modules
    fn load_all_module_content(&mut self) {
        // Iterate through each module in the map
        for (module_name, module_info) in self.module_info_map.iter_mut() {
            // Iterate through each source file associated with this module
            for (relative_path_key, source_file_info) in module_info.source_files.iter_mut() {
                // Reset content before attempting to load
                source_file_info.content = None;

                let current_relative_path = Path::new(relative_path_key); // Use the key as the relative path
                let mut path_to_read: Option<PathBuf> = None;

                // Check if root_dir is available for *this specific source file*
                if let Some(root_dir_str) = &source_file_info.root_dir {
                    // Normalize root_dir slashes
                    let root_normalized = root_dir_str.replace('\\', "/");
                    let mut combined_path = PathBuf::from(root_normalized);
                    combined_path.push(current_relative_path); // Push the relative path onto the root
                    path_to_read = Some(combined_path);
                } else {
                    // Log warning if root_dir is needed but missing for this file
                    let warning_msg = format!(
                        "Root directory not set for relative path '{}' in module '{}'",
                        relative_path_key, module_name
                    );
                    eprintln!("Warning: {}. File content will not be loaded.", warning_msg);
                    // Set content to an error message for the frontend
                    source_file_info.content = Some(format!("Error reading file: {}", warning_msg));
                }

                // Try reading the file if we determined a path
                if let Some(final_path) = path_to_read {
                    match fs::read_to_string(&final_path) {
                        Ok(content) => {
                            source_file_info.content = Some(content);
                        }
                        Err(e) => {
                            let error_msg = format!(
                                "Error reading file: {} (Path: {})",
                                e,
                                final_path.display()
                            );
                            eprintln!(
                                "{} (Module: {}, File: {})",
                                error_msg, module_name, relative_path_key
                            );
                            // Set content to the error message for the frontend
                            source_file_info.content = Some(error_msg);
                        }
                    }
                }
                // If path_to_read was None (root_dir missing), content remains the error message set earlier.
            } // End loop through source files
        } // End loop through modules
    }

    // RENAMED & MODIFIED: Method to update root dir for specific source files and reload content once
    pub fn update_source_file_roots_and_reload(
        &mut self,
        source_file_identifiers: &[SourceFileIdentifier], // Use new identifier struct
        new_root_dir: &str,
    ) -> Result<(), String> {
        let mut updated_count = 0;
        let mut not_found_files = Vec::new();

        // Iterate through the provided identifiers
        for identifier in source_file_identifiers {
            // Find the module
            if let Some(module_info) = self.module_info_map.get_mut(&identifier.module_name) {
                // Find the specific source file within the module
                if let Some(source_file_info) =
                    module_info.source_files.get_mut(&identifier.relative_path)
                {
                    // Update the root_dir for this specific file
                    source_file_info.root_dir = Some(new_root_dir.to_string());
                    updated_count += 1;
                } else {
                    // Source file not found within the module
                    not_found_files.push(identifier.clone());
                    eprintln!(
                        "Warning: Relative path '{}' not found within module '{}' during batch update.",
                        identifier.relative_path, identifier.module_name
                    );
                }
            } else {
                // Module not found
                not_found_files.push(identifier.clone());
                eprintln!(
                    "Warning: Module name '{}' not found during batch update.",
                    identifier.module_name
                );
            }
        }

        // Report errors if some files were not found
        if !not_found_files.is_empty() {
            // Log the error, but proceed to reload content for files that were updated.
            eprintln!(
                "Batch update partially failed: Source files not found: {:?}",
                not_found_files
            );
            // Optionally return an Err here if partial failure is unacceptable.
            // return Err(format!("Failed to update: Source files not found: {:?}", not_found_files));
        }

        // If at least one file was updated, reload content for all modules.
        if updated_count > 0 {
            self.load_all_module_content();
        } else if source_file_identifiers.is_empty() {
            // No identifiers provided, do nothing, return Ok.
            return Ok(());
        } else if not_found_files.len() == source_file_identifiers.len() {
            // All provided identifiers resulted in errors
            return Err("No valid source file identifiers found for update.".to_string());
        }
        // If only warnings occurred (files not found), but updated_count is 0,
        // we might still reach here. Consider if reloading is needed even then.
        // Currently, reload only happens if updated_count > 0.

        Ok(())
    }
}

#[cfg(test)]
pub mod test {
    use crate::types::coverage_info::CoverageInfo;

    #[test]
    pub fn test_process_source_info() {
        let mut coverage_info: CoverageInfo = serde_json::from_str(include_str!(r"D:\projs\fuzz\chisel_coverage_tool\output_generated\rocket_alu\RocketALU_coverage_info.json")).unwrap();
        coverage_info.parse();
        // 保存到一个临时文件
        let temp_file_path = "temp_coverage_info.json";
        let content = serde_json::to_string_pretty(&coverage_info).unwrap();
        std::fs::write(temp_file_path, content).unwrap();
    }
}
