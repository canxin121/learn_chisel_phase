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
    root_dir: Option<String>,
    content: Option<String>,
}

#[derive(Default, Serialize, Deserialize, Debug, Clone)]
pub struct InstanceSignalTree {
    pub instance_name: String,
    pub module_name: String,
    pub sub_instances: Vec<InstanceSignalTree>,
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
    pub module_source_files: Option<HashMap<String, Vec<String>>>,
    pub source_file_info_map: Option<HashMap<String, SourceFileInfo>>,
    pub instance_signal_tree: Option<InstanceSignalTree>,
    pub available_root_dirs: Option<Vec<String>>,
}

impl CoverageInfo {
    pub fn parse(&mut self) {
        self.instance_signal_tree = Some(InstanceSignalTree {
            instance_name: self.top_module_name.clone(),
            module_name: self.top_module_name.clone(),
            sub_instances: Vec::new(),
            signals: Vec::new(),
        });

        if self.module_source_files.is_none() {
            self.module_source_files = Some(HashMap::new());
        }
        if self.source_file_info_map.is_none() {
            self.source_file_info_map = Some(HashMap::new());
        }

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
                        let module_files = self
                            .module_source_files
                            .as_mut()
                            .unwrap()
                            .entry(module_name_extracted.clone())
                            .or_insert_with(Vec::new);

                        if !module_files.contains(relative_path) {
                            module_files.push(relative_path.clone());
                        }

                        let _source_file_entry = self
                            .source_file_info_map
                            .as_mut()
                            .unwrap()
                            .entry(relative_path.clone())
                            .or_insert_with(SourceFileInfo::default);

                        encountered_module_files
                            .insert((module_name_extracted.clone(), relative_path.clone()));
                    } else {
                        eprintln!(
                            "Warning: Signal (compressed: '{}', mapped: '{}') has module name '{}' but no file path could be parsed from info string '{}'. Cannot associate with source file.",
                            signal.compressed_name, reconstructed_signal_path, module_name_extracted, signal.info
                        );
                    }

                    let mut current_node = self.instance_signal_tree.as_mut().unwrap();
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

        let available_roots = self.available_root_dirs.clone().unwrap_or_default();
        if let Some(source_map) = self.source_file_info_map.as_mut() {
            for (relative_path_str, source_file_info) in source_map.iter_mut() {
                if source_file_info.content.is_none() {
                    let mut loaded_successfully = false;
                    let mut root_dir_where_file_existed: Option<String> = None;

                    for potential_root_dir in &available_roots {
                        let path_to_try = PathBuf::from(potential_root_dir).join(relative_path_str);

                        if path_to_try.exists() && path_to_try.is_file() {
                            root_dir_where_file_existed = Some(potential_root_dir.to_string());
                            match fs::read_to_string(&path_to_try) {
                                Ok(content_data) => {
                                    source_file_info.root_dir =
                                        Some(potential_root_dir.to_string());
                                    source_file_info.content = Some(content_data);
                                    loaded_successfully = true;
                                    break;
                                }
                                Err(e) => {
                                    eprintln!(
                                        "Error reading existing file '{}' with root '{}': {}. (Full Path: {})",
                                        relative_path_str, potential_root_dir, e, path_to_try.display()
                                    );
                                    source_file_info.content = None;
                                }
                            }
                        }
                    }

                    if !loaded_successfully {
                        source_file_info.content = None;
                        source_file_info.root_dir = root_dir_where_file_existed;

                        if source_file_info.root_dir.is_none() {
                            eprintln!(
                                "Source file '{}' not found using any available root directory.",
                                relative_path_str
                            );
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
    ) -> Result<(), String> {
        let mut all_successful = true;
        let mut errors: Vec<String> = Vec::new();

        if let Some(source_map) = self.source_file_info_map.as_mut() {
            for identifier in source_file_identifiers {
                if let Some(source_file) = source_map.get_mut(&identifier.relative_path) {
                    source_file.root_dir = Some(new_root_dir.to_string());
                    source_file.content = None;
                    let current_relative_path = Path::new(&identifier.relative_path);
                    let root_normalized = new_root_dir.replace('\\', "/");
                    let mut combined_path = PathBuf::from(root_normalized);
                    combined_path.push(current_relative_path);

                    match fs::read_to_string(&combined_path) {
                        Ok(content) => {
                            source_file.content = Some(content);
                        }
                        Err(e) => {
                            let error_msg = format!(
                                "Error reloading file '{}' with new root '{}': {} (Path: {})",
                                identifier.relative_path,
                                new_root_dir,
                                e,
                                combined_path.display()
                            );
                            eprintln!("{}", error_msg);
                            source_file.content = None;
                            errors.push(error_msg);
                            all_successful = false;
                        }
                    }
                } else {
                    let error_msg = format!(
                        "Source file relative path not found in map: {}",
                        identifier.relative_path
                    );
                    errors.push(error_msg);
                    all_successful = false;
                }
            }
        } else {
            errors.push("Source file info map is not available.".to_string());
            all_successful = false;
        }

        if all_successful {
            Ok(())
        } else {
            Err(errors.join("; "))
        }
    }

    pub fn set_available_root_dirs(&mut self, new_dirs: Vec<String>) {
        self.available_root_dirs = Some(new_dirs);
        if let Some(source_map) = self.source_file_info_map.as_mut() {
            for (relative_path_str, source_file_info) in source_map.iter_mut() {
                if source_file_info
                    .content
                    .as_ref()
                    .map_or(false, |c| c.starts_with("Error:"))
                {
                    source_file_info.content = None;
                    source_file_info.root_dir = None;
                }

                if source_file_info.content.is_none() {
                    let mut loaded_successfully = false;
                    let mut root_dir_where_file_existed: Option<String> = None;

                    if let Some(available_roots) = self.available_root_dirs.as_ref() {
                        for potential_root_dir in available_roots {
                            let path_to_try =
                                PathBuf::from(potential_root_dir).join(relative_path_str);
                            if path_to_try.exists() && path_to_try.is_file() {
                                root_dir_where_file_existed = Some(potential_root_dir.to_string());
                                match fs::read_to_string(&path_to_try) {
                                    Ok(content_data) => {
                                        source_file_info.root_dir =
                                            Some(potential_root_dir.to_string());
                                        source_file_info.content = Some(content_data);
                                        loaded_successfully = true;
                                        break;
                                    }
                                    Err(e) => {
                                        eprintln!(
                                            "Error reading existing file '{}' with root '{}' during set_available_root_dirs: {}. (Full Path: {})",
                                            relative_path_str, potential_root_dir, e, path_to_try.display()
                                        );
                                        source_file_info.content = None;
                                    }
                                }
                            }
                        }
                    }
                    if !loaded_successfully {
                        source_file_info.content = None;
                        source_file_info.root_dir = root_dir_where_file_existed;

                        if source_file_info.root_dir.is_none() {
                            eprintln!(
                                "Error: Source file '{}' not found using any available root directory after update.",
                                relative_path_str
                            );
                        }
                    }
                }
            }
        }
    }
}

#[cfg(test)]
pub mod test {
    #[test]
    pub fn test_parse() {
        use super::*;
        let content = std::fs::read_to_string(r"data\TestHarness_coverage_info.json").unwrap();
        let mut info = serde_json::from_str::<CoverageInfo>(&content).unwrap();
        // modify this
        info.available_root_dirs = Some(vec![
            r"D:\git\chisel".to_string(),
            r"D:\git\rocket-chip".to_string(),
        ]);
        let start_time = std::time::Instant::now();
        info.parse();
        let duration = start_time.elapsed();
        println!("Parsing took: {:?}", duration);

        assert!(info.module_source_files.is_some());
        assert!(info.source_file_info_map.is_some());
        if let Some(module_files_map) = &info.module_source_files {
            if let Some(files) = module_files_map.get("TestHarness") {
                assert!(
                    !files.is_empty(),
                    "TestHarness module should have source files"
                );
                if let Some(source_map) = &info.source_file_info_map {
                    for file_path in files {
                        assert!(
                            source_map.contains_key(file_path),
                            "Source file {} for TestHarness not found in source_file_info_map",
                            file_path
                        );
                    }
                } else {
                    panic!("source_file_info_map is None after parse");
                }
            } else {
                println!(
                    "Warning: Module 'TestHarness' not found in module_source_files for testing."
                );
            }
        } else {
            panic!("module_source_files is None after parse");
        }

        let parsed_content = serde_json::to_string_pretty(&info).unwrap();
        std::fs::write(
            r"data\TestHarness_coverage_info_parsed.json",
            parsed_content,
        ).unwrap();

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
        let all_instances_valid = check_instance(&info.instance_signal_tree.unwrap());
        assert!(
            all_instances_valid,
            "There are instances with UNKNOWN_MODULE_PLACEHOLDER in their module names."
        );
    }
}
