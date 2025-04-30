use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::fs;
use std::path::{Path, PathBuf}; // Import Path

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

#[derive(Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")]
pub struct ModuleInfo {
    content: Option<String>,
    file_path: Option<String>,
    root_dir: Option<String>,
}

#[derive(Default, Serialize, Deserialize, Debug, Clone)]
#[serde(rename_all = "camelCase")] // Add camelCase rename for frontend compatibility
pub struct InstanceSignalTree {
    pub instance_name: String, // Make fields public
    pub module_name: String,   // Make fields public
    #[serde(default)]
    pub sub_instances: Vec<InstanceSignalTree>, // Make fields public
    #[serde(default)]
    pub signals: Vec<SignalInfo>, // Make fields public
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
    // 1. 解析所有SignalInfo的info字段, 提取file_path, line, column, 统一路径分隔符为 /, 并修正潜在的错误前导 / (相对路径误标为绝对路径).
    // 2. 统计所有SignalInfo的field_name中包含的__M__模块名称, 使用步骤1中修正后的路径, 来组成module_info_map.
    // 3. (已移除)
    // 4. 处理module_info_map, 检查 file_path (已修正) 是否为绝对路径. 如果是, 直接尝试读取. 如果是相对路径, 且 root_dir 存在, 则拼接后尝试读取.
    // 5. 解析 field_name 构建 instance_signal_map 树状结构.
    pub fn parse(&mut self) {
        // Initialize instance_signal_map root
        self.instance_signal_map = InstanceSignalTree {
            instance_name: self.top_module_name.clone(), // Root instance name is the top module name
            module_name: self.top_module_name.clone(),   // Root module name is the top module name
            sub_instances: Vec::new(),
            signals: Vec::new(),
        };

        // 1 & 2: Parse SignalInfo.info, correct path, and populate module_info_map
        // 5: Populate instance_signal_map
        for port in self.exported_ports.iter_mut() {
            for signal in port.signals.iter_mut() {
                let mut corrected_path_option: Option<String> = None; // Store corrected path temporarily

                // Parse info: " @[<file_path> <line>:<column>]"
                if let Some(start) = signal.info.find("@[") {
                    if let Some(end) = signal.info.find(']') {
                        let core_info = &signal.info[start + 2..end];
                        if let Some(space_pos) = core_info.rfind(' ') {
                            let path_str_raw = core_info[..space_pos].trim();
                            // Normalize slashes
                            let mut path_str = path_str_raw.replace(r"\\", "\\").replace('\\', "/");
                            let loc_str = core_info[space_pos + 1..].trim();

                            // Apply correction logic (formerly Step 3) here directly
                            let path_obj = Path::new(&path_str);
                            if path_str.starts_with('/') && path_str.len() > 1 && !path_obj.exists()
                            {
                                let is_likely_windows_drive = path_str.len() >= 3
                                    && path_str.chars().nth(1) == Some(':')
                                    && path_str.chars().nth(2) == Some('/');
                                if !is_likely_windows_drive {
                                    // Assume the leading '/' is incorrect and remove it.
                                    path_str = path_str[1..].to_string();
                                }
                            }
                            // Store the corrected path
                            corrected_path_option = Some(path_str);

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
                // Assign the corrected path (if any) to signal.file_path
                signal.file_path = corrected_path_option.clone();

                // Extract module name from field_name and update module_info_map using the corrected path
                // Also, parse field_name to build instance_signal_map
                if let Some(s_start) = signal.name.find("__S__") {
                    let instance_module_part = &signal.name[..s_start];
                    // let signal_part = &signal.field_name[s_start + 5..]; // Not needed for tree structure

                    let mut module_name_extracted = String::new();
                    let mut instance_path_parts: Vec<&str> = Vec::new();

                    if let Some(m_start) = instance_module_part.rfind("__M__") {
                        // Extract module name
                        module_name_extracted = instance_module_part[m_start + 5..].to_string();

                        // Extract instance path parts
                        let instance_part = &instance_module_part[..m_start];
                        instance_path_parts = instance_part.split("__I__").collect();

                        // Update module_info_map using the corrected path
                        let file_path_clone = signal.file_path.clone(); // Already corrected
                        self.module_info_map
                            .entry(module_name_extracted.clone())
                            .or_insert_with(|| ModuleInfo {
                                content: None,
                                file_path: file_path_clone, // Use the corrected path
                                root_dir: None,             // Initially None
                            });
                    } else {
                        // Handle cases where __M__ might not be present (e.g., top-level signals)
                        // This assumes the entire part before __S__ is the top instance/module
                        instance_path_parts = vec![instance_module_part];
                        module_name_extracted = self.top_module_name.clone(); // Assume top module
                    }

                    // Build/Navigate the InstanceSignalTree
                    let mut current_node = &mut self.instance_signal_map;

                    // Iterate through instance path parts (skip the first one, which is the top module name used as root instance name)
                    for (i, &instance_name_part) in instance_path_parts.iter().enumerate().skip(1) {
                        // Find or create the sub-instance node
                        let position = current_node
                            .sub_instances
                            .iter()
                            .position(|sub| sub.instance_name == instance_name_part);

                        if let Some(pos) = position {
                            current_node = &mut current_node.sub_instances[pos];
                        } else {
                            // Determine the module name for this new sub-instance
                            // This requires looking ahead or having a pre-built map, which is complex here.
                            // A simplification: Assume the module name is derived from the *last* part containing __M__
                            // For intermediate nodes, we might not know the exact module name from this signal alone.
                            // Let's find the module name associated with the *full* path ending here.
                            let mut sub_module_name = String::from("Unknown"); // Default if not found

                            // Search *all* signals to find one matching this prefix and extract its module name
                            // This is inefficient but necessary without pre-parsing all field names.
                            // Optimization: Could pre-process all field names to map instance paths to module names.
                            // For now, let's stick to the simpler approach: use the module name from the *current* signal
                            // if this is the *last* instance part in the current signal's path.
                            if i == instance_path_parts.len() - 1 {
                                sub_module_name = module_name_extracted.clone();
                            } else {
                                // For intermediate nodes, we can't reliably determine the module name
                                // from just this one signal. We'll leave it as "Unknown" or potentially
                                // try to find *any* signal that defines this intermediate path later.
                                // Let's use a placeholder for now.
                                // A better approach would be a separate pass to determine all instance->module mappings first.
                                // Sticking with the current signal's module name for simplicity, though potentially inaccurate for intermediates.
                                // Revisit if needed: For now, use "Unknown" for intermediates.
                                // sub_module_name = module_name_extracted.clone(); // Simpler, but maybe wrong
                            }

                            let new_node = InstanceSignalTree {
                                instance_name: instance_name_part.to_string(),
                                module_name: sub_module_name, // Use determined/placeholder module name
                                sub_instances: Vec::new(),
                                signals: Vec::new(),
                            };
                            current_node.sub_instances.push(new_node);
                            current_node = current_node.sub_instances.last_mut().unwrap();
                        }
                    }
                    // Add the signal to the final node in the path
                    current_node.signals.push(signal.clone());
                } else {
                    // Handle field_names without __S__ (shouldn't happen based on format description)
                    eprintln!(
                        "Warning: Signal field_name '{}' does not contain '__S__'. Skipping instance tree insertion.",
                        signal.name
                    );
                }
            }
        }

        // Step 3 (Removed): Correction is now done during signal processing.

        // 4: Load file content based on path type (absolute or relative + root_dir) using the corrected path in module_info_map.
        self.load_all_module_content() // Call helper function
    }

    // Helper function to load/reload content for all modules
    fn load_all_module_content(&mut self) {
        let keys: Vec<String> = self.module_info_map.keys().cloned().collect();
        for key in keys {
            if let Some(module_info) = self.module_info_map.get_mut(&key) {
                // Ensure content is reset/None before attempting to load
                module_info.content = None; // Reset content before trying to read

                // The file_path here is already corrected from step 1/2
                if let Some(file_path_str) = &module_info.file_path {
                    let current_path = Path::new(file_path_str);
                    let mut path_to_read: Option<PathBuf> = None;

                    // Check if the path is absolute
                    if current_path.is_absolute() {
                        path_to_read = Some(current_path.to_path_buf());
                    } else {
                        // If it's relative, check if root_dir is available
                        if let Some(root_dir_str) = &module_info.root_dir {
                            // Normalize root_dir slashes just in case
                            let root_normalized = root_dir_str.replace('\\', "/");
                            let mut combined_path = PathBuf::from(root_normalized);
                            combined_path.push(current_path); // Push the relative path onto the root
                            path_to_read = Some(combined_path);
                        } else {
                            // Log warning if root_dir is needed but missing
                            eprintln!(
                                "Warning: Cannot determine absolute path for relative path '{}' without a root directory for module '{}'. File content will not be loaded.",
                                file_path_str, key
                            );
                            // Set content to an error message for the frontend
                            module_info.content = Some(format!(
                                "Error reading file: Root directory not set for relative path '{}'",
                                file_path_str
                            ));
                        }
                    }

                    // Try reading the file if we determined a path to attempt
                    if let Some(final_path) = path_to_read {
                        match fs::read_to_string(&final_path) {
                            Ok(content) => {
                                module_info.content = Some(content);
                            }
                            Err(e) => {
                                let error_msg = format!(
                                    "Error reading file: {} (Path: {})",
                                    e,
                                    final_path.display()
                                );
                                eprintln!("{} (Module: {})", error_msg, key);
                                // Set content to the error message for the frontend
                                module_info.content = Some(error_msg);
                            }
                        }
                    }
                    // If path_to_read is None (because root_dir was missing), content remains the error message set earlier.
                } else {
                    // Handle case where file_path itself is None for the module
                    eprintln!(
                        "Warning: No file path associated with module '{}'. Cannot load content.",
                        key
                    );
                    module_info.content = Some(format!(
                        "Error reading file: No file path defined for module '{}'",
                        key
                    ));
                }
            }
        }
    }

    // NEW: Method to update root dir for multiple modules and reload content once
    pub fn update_multiple_module_roots_and_reload(
        &mut self,
        module_keys: &[String], // Use slice for borrowing
        new_root_dir: &str,
    ) -> Result<(), String> {
        let mut updated_count = 0;
        let mut not_found_keys = Vec::new();

        // Iterate through the provided keys and update root_dir
        for key in module_keys {
            if let Some(module_info) = self.module_info_map.get_mut(key) {
                module_info.root_dir = Some(new_root_dir.to_string());
                updated_count += 1;
            } else {
                not_found_keys.push(key.clone());
                eprintln!(
                    "Warning: Module key '{}' not found in moduleInfoMap during batch update.",
                    key
                );
            }
        }

        // Report errors if some keys were not found
        if !not_found_keys.is_empty() {
            return Err(format!(
                "Failed to update: Module keys not found: {:?}",
                not_found_keys
            ));
        }

        // If at least one module was potentially updated (even if keys were valid but root_dir didn't change), reload content.
        if updated_count > 0 {
            // Re-run the content loading logic for all modules after all roots are set.
            self.load_all_module_content();
        } else {
            // This case should ideally not happen if not_found_keys is handled,
            // but added for robustness.
            return Err("No valid module keys provided for update.".to_string());
        }

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
