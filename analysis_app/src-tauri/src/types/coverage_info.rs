use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::fs;
use std::path::{Path, PathBuf};

const UNKNOWN_MODULE_PLACEHOLDER: &str = "__UNKNOWN_MODULE__";

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SignalInfo {
    pub compressed_name: String,
    pub r#type: String,
    pub info: String,
    #[serde(default)]
    pub file_path: Option<String>,
    #[serde(default)]
    pub line: Option<u32>,
    #[serde(default)]
    pub column: Option<u32>,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct ExportedPort {
    pub r#type: String,
    pub signals: Vec<SignalInfo>,
    pub name_mapping: HashMap<String, String>,
}

#[derive(Serialize, Deserialize, Debug, Clone, Default)]
pub struct SourceFileInfo {
    relative_path: String,
    root_dir: Option<String>,
    content: Option<String>,
}

#[derive(Serialize, Deserialize, Debug, Clone, Default)]
pub struct ModuleInfo {
    #[serde(default)]
    source_files: HashMap<String, SourceFileInfo>,
}

#[derive(Default, Serialize, Deserialize, Debug, Clone)]
pub struct InstanceSignalTree {
    pub instance_name: String,
    pub module_name: String,
    #[serde(default)]
    pub sub_instances: Vec<InstanceSignalTree>,
    #[serde(default)]
    pub signals: Vec<SignalInfo>,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SourceFileIdentifier {
    pub module_name: String,
    pub relative_path: String,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct CoverageInfo {
    pub top_module_name: String,
    pub exported_ports: Vec<ExportedPort>,
    #[serde(default)]
    pub module_info_map: HashMap<String, ModuleInfo>,
    #[serde(default)]
    pub instance_signal_tree: InstanceSignalTree,
    #[serde(default)]
    pub available_root_dirs: Vec<String>,
}

impl CoverageInfo {
    pub fn parse(&mut self) {
        self.instance_signal_tree = InstanceSignalTree {
            instance_name: self.top_module_name.clone(),
            module_name: self.top_module_name.clone(),
            sub_instances: Vec::new(),
            signals: Vec::new(),
        };

        let mut encountered_module_files = std::collections::HashSet::<(String, String)>::new();

        for port in self.exported_ports.iter_mut() {
            let name_mapping = &port.name_mapping;

            let prefix_to_remove = match port.r#type.as_str() {
                "cond_pred" => "_cp_",
                "mux_cond" => "_mc_",
                "register" => "_rs_",
                _ => "",
            };

            for signal in port.signals.iter_mut() {
                let mut corrected_relative_path: Option<String> = None;

                if let Some(start) = signal.info.find("@[") {
                    if let Some(end) = signal.info.find(']') {
                        let core_info = &signal.info[start + 2..end];
                        if let Some(space_pos) = core_info.rfind(' ') {
                            let path_str_raw = core_info[..space_pos].trim();
                            let mut path_str = path_str_raw.replace(r"\\", "\\").replace('\\', "/");
                            let loc_str = core_info[space_pos + 1..].trim();

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
                            corrected_relative_path = Some(path_str);

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
                signal.file_path = corrected_relative_path.clone();

                let lookup_key = if !prefix_to_remove.is_empty()
                    && signal.compressed_name.starts_with(prefix_to_remove)
                {
                    &signal.compressed_name[prefix_to_remove.len()..]
                } else {
                    eprintln!(
                        "Warning: Compressed name '{}' does not start with expected prefix '{}' for port type '{}'. Using full name for lookup.",
                        signal.compressed_name, prefix_to_remove, port.r#type
                    );
                    signal.compressed_name.as_str()
                };

                let reconstructed_signal_path = match name_mapping.get(lookup_key) {
                    Some(mapped_name) => mapped_name,
                    None => {
                        eprintln!(
                            "Warning: Lookup key '{}' (derived from compressed name '{}') not found in name mapping for port type '{}'. Skipping processing.",
                            lookup_key, signal.compressed_name, port.r#type
                        );
                        continue;
                    }
                };

                if let Some(s_start) = reconstructed_signal_path.find("__S__") {
                    let instance_module_part = &reconstructed_signal_path[..s_start];
                    let module_name_extracted: String;
                    let instance_path_parts: Vec<&str>;

                    let m_start = instance_module_part.rfind("__M__")
                        .unwrap_or_else(|| panic!(
                            "FATAL: Mapped signal path '{}' (from compressed '{}', lookup key '{}') must contain '__M__' before '__S__' to determine module name.",
                            reconstructed_signal_path, signal.compressed_name, lookup_key
                        ));

                    module_name_extracted = instance_module_part[m_start + 5..].to_string();
                    let instance_part = &instance_module_part[..m_start];
                    instance_path_parts = instance_part.split("__I__").collect();

                    if let Some(relative_path) = &corrected_relative_path {
                        let module_entry = self
                            .module_info_map
                            .entry(module_name_extracted.clone())
                            .or_insert_with(ModuleInfo::default);

                        let _source_file_entry = module_entry
                            .source_files
                            .entry(relative_path.clone())
                            .or_insert_with(|| SourceFileInfo {
                                relative_path: relative_path.clone(),
                                root_dir: None,
                                content: None,
                            });
                        encountered_module_files
                            .insert((module_name_extracted.clone(), relative_path.clone()));
                    } else {
                        eprintln!(
                            "Warning: Signal (compressed: '{}', mapped: '{}') has module name '{}' but no file path could be parsed from info string '{}'. Cannot associate with source file.",
                            signal.compressed_name, reconstructed_signal_path, module_name_extracted, signal.info
                        );
                    }

                    let mut current_node = &mut self.instance_signal_tree;
                    for (i, &instance_name_part) in instance_path_parts.iter().enumerate().skip(1) {
                        let position = current_node
                            .sub_instances
                            .iter()
                            .position(|sub| sub.instance_name == instance_name_part);

                        let is_last_instance_in_path = i == instance_path_parts.len() - 1;

                        if let Some(pos) = position {
                            current_node = &mut current_node.sub_instances[pos];

                            if is_last_instance_in_path {
                                if current_node.module_name == UNKNOWN_MODULE_PLACEHOLDER {
                                    current_node.module_name = module_name_extracted.clone();
                                } else if current_node.module_name != module_name_extracted {
                                    panic!(
                                        "FATAL: Module name inconsistency for instance '{}'. Existing: '{}', Signal '{}' suggests: '{}'.",
                                        instance_name_part, current_node.module_name, reconstructed_signal_path, module_name_extracted
                                    );
                                }
                            }
                        } else {
                            let sub_module_name = if is_last_instance_in_path {
                                module_name_extracted.clone()
                            } else {
                                UNKNOWN_MODULE_PLACEHOLDER.to_string()
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
                    current_node.signals.push(signal.clone());
                } else {
                    panic!(
                        "FATAL: Mapped signal path '{}' (from compressed '{}', lookup key '{}') does not contain '__S__'. Skipping processing.",
                        reconstructed_signal_path, signal.compressed_name, lookup_key
                    );
                }
            }
        }

        // New section: Attempt to determine root_dir and load content for SourceFileInfo
        // if root_dir is missing or content is invalid.
        let available_roots = self.available_root_dirs.clone();
        for (module_name, module_info) in self.module_info_map.iter_mut() {
            for (relative_path_str, source_file_info) in module_info.source_files.iter_mut() {
                let needs_processing = source_file_info.root_dir.is_none()
                    || source_file_info.content.is_none()
                    || source_file_info
                        .content
                        .as_ref()
                        .map_or(false, |c| c.starts_with("Error"));

                if needs_processing {
                    let mut loaded_successfully_in_block = false;
                    for potential_root_dir in &available_roots {
                        let path_to_try =
                            PathBuf::from(potential_root_dir).join(&source_file_info.relative_path);

                        if path_to_try.exists() && path_to_try.is_file() {
                            match fs::read_to_string(&path_to_try) {
                                Ok(content_data) => {
                                    source_file_info.root_dir =
                                        Some(potential_root_dir.to_string());
                                    source_file_info.content = Some(content_data);
                                    loaded_successfully_in_block = true;
                                    break; // Found working root and content
                                }
                                Err(e) => {
                                    // Path exists but read failed. Update info to this attempt's failure.
                                    // Allow next potential_root_dir to override if it works.
                                    source_file_info.root_dir =
                                        Some(potential_root_dir.to_string());
                                    let error_message = format!(
                                        "Error reading file (path exists with trial root '{}'): {} (Full Path: {})",
                                        potential_root_dir, e, path_to_try.display()
                                    );
                                    source_file_info.content = Some(error_message.clone());
                                    eprintln!(
                                        "Failed content load attempt for Module: '{}', File: '{}'. Error: {}",
                                        module_name, relative_path_str, error_message
                                    );
                                }
                            }
                        }
                    }

                    if !loaded_successfully_in_block && source_file_info.root_dir.is_none() {
                        // If no root_dir was found (no path from available_roots existed)
                        // and content isn't already an error (e.g. from a previous state before parse)
                        if !source_file_info
                            .content
                            .as_ref()
                            .map_or(false, |c| c.starts_with("Error"))
                        {
                            source_file_info.content = Some(format!(
                                "Error: Source file '{}' for module '{}' not found using any available root directory.",
                                source_file_info.relative_path, module_name
                            ));
                        }
                    }
                }
            }
        }

        self.load_all_module_content();
    }

    fn load_all_module_content(&mut self) {
        for (module_name, module_info) in self.module_info_map.iter_mut() {
            for (relative_path_key, source_file_info) in module_info.source_files.iter_mut() {
                if let Some(root_dir_str) = source_file_info.root_dir.as_ref() {
                    // Attempt to load if content is missing or is an error message
                    if source_file_info.content.is_none()
                        || source_file_info
                            .content
                            .as_ref()
                            .map_or(false, |c| c.starts_with("Error"))
                    {
                        let current_relative_path = Path::new(&source_file_info.relative_path);

                        let root_normalized = root_dir_str.replace('\\', "/");
                        let mut combined_path = PathBuf::from(root_normalized);
                        combined_path.push(current_relative_path);

                        match fs::read_to_string(&combined_path) {
                            Ok(content) => {
                                source_file_info.content = Some(content);
                            }
                            Err(e) => {
                                let error_msg = format!(
                                    "Error reading file: {} (Path: {})",
                                    e,
                                    combined_path.display()
                                );
                                eprintln!(
                                    "{} (Module: {}, File: {})",
                                    error_msg, module_name, relative_path_key
                                );
                                source_file_info.content = Some(error_msg);
                            }
                        }
                    }
                }
            }
        }
    }

    pub fn update_source_file_roots_and_reload(
        &mut self,
        source_file_identifiers: &[SourceFileIdentifier],
        new_root_dir: &str,
    ) -> Result<CoverageInfo, String> {
        let mut updated_count = 0;
        let mut not_found_files = Vec::new();
        let mut needs_reload = false;

        for identifier in source_file_identifiers {
            if let Some(module_info) = self.module_info_map.get_mut(&identifier.module_name) {
                if let Some(source_file_info) =
                    module_info.source_files.get_mut(&identifier.relative_path)
                {
                    let old_root_dir = source_file_info.root_dir.clone();
                    if old_root_dir.as_deref() != Some(new_root_dir)
                        || source_file_info.content.is_none()
                        || source_file_info
                            .content
                            .as_ref()
                            .map_or(false, |c| c.starts_with("Error reading file:"))
                    {
                        source_file_info.root_dir = Some(new_root_dir.to_string());
                        source_file_info.content = None;
                        needs_reload = true;
                        updated_count += 1;
                    }
                } else {
                    not_found_files.push(identifier.clone());
                    eprintln!(
                        "Warning: Relative path '{}' not found within module '{}' during batch update.",
                        identifier.relative_path, identifier.module_name
                    );
                }
            } else {
                not_found_files.push(identifier.clone());
                eprintln!(
                    "Warning: Module name '{}' not found during batch update.",
                    identifier.module_name
                );
            }
        }

        if !not_found_files.is_empty() {
            eprintln!(
                "Batch update: {} files updated. Source files not found: {:?}",
                updated_count, not_found_files
            );
        }

        if needs_reload {
            self.load_all_module_content();
        }

        if updated_count == 0
            && !source_file_identifiers.is_empty()
            && not_found_files.len() == source_file_identifiers.len()
        {
            return Err("No valid source file identifiers found for update.".to_string());
        } else if updated_count == 0 && !needs_reload && source_file_identifiers.is_empty() {
            return Ok(self.clone());
        } else if updated_count == 0
            && !needs_reload
            && !source_file_identifiers.is_empty()
            && not_found_files.is_empty()
        {
            return Ok(self.clone());
        }

        Ok(self.clone())
    }
}

#[cfg(test)]
pub mod test {
    #[test]
    pub fn test_parse() {
        use super::*;
        let content = std::fs::read_to_string(r"/home/canxin/git/chisel_coverage_tool/output_generated/uart_rx/UART_rx_coverage_info.json").unwrap();
        let mut info = serde_json::from_str::<CoverageInfo>(&content).unwrap();
        info.parse();

        let parsed_content = serde_json::to_string_pretty(&info).unwrap();
        std::fs::write(
            r"/home/canxin/git/chisel_coverage_tool/output_generated/uart_rx/UART_rx_coverage_info_parsed.json",
            parsed_content,
        ).unwrap();

        // 递归检查info的instace_signal_tree中是否所有 "signals 不为空的" instance 的 module 都不是 UNKNOWN_MODULE_PLACEHOLDER
        fn check_instance(instance: &InstanceSignalTree) -> bool {
            if instance.module_name == UNKNOWN_MODULE_PLACEHOLDER && !instance.signals.is_empty() {
                return false;
            }
            for sub_instance in &instance.sub_instances {
                if !check_instance(sub_instance) {
                    return false;
                }
            }
            true
        }
        let all_instances_valid = check_instance(&info.instance_signal_tree);
        assert!(
            all_instances_valid,
            "There are instances with UNKNOWN_MODULE_PLACEHOLDER in their module names."
        );
    }
}
