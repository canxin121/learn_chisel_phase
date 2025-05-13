use crate::types::coverage_info::{CoverageInfo, InstanceSignalTree as CoverageInstanceSignalTree};
use rayon::prelude::*;
use serde::{Deserialize, Serialize};
use std::collections::HashMap;

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct CoverageSummary {
    pub overall_coverage_percent: f64,
    pub total_bins_hit: u32,
    pub total_bins: u32,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct ConditionCoveragePoint {
    pub origin_name: Option<String>,
    pub compressed_name: String,
    pub hit_true: bool,
    pub hit_false: bool,
    pub bins_hit: u32,
    pub bins_total: u32,
    pub coverage_percent: f64,
    pub count_true: u32,
    pub count_false: u32,
    pub total_updates: u32,
    pub true_percentage: f64,
    pub false_percentage: f64,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct RegisterBitCoverage {
    pub bit: u32,
    pub hit_zero: bool,
    pub hit_one: bool,
    pub covered: bool,
    pub status: String,
    pub missing: Option<String>,
    pub count_zero: u32,
    pub count_one: u32,
    pub total_updates: u32,
    pub zero_percentage: f64,
    pub one_percentage: f64,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct RegisterCoveragePoint {
    pub origin_name: Option<String>,
    pub compressed_name: String,
    pub width: u32,
    pub bins_hit: u32,
    pub bins_total: u32,
    pub coverage_percent: f64,
    pub bit_details: Vec<RegisterBitCoverage>,
}

#[derive(Serialize, Deserialize, Debug, Clone, Default)]
pub struct ConditionCoverageNode {
    pub instance_name: String,
    pub module_name: String,
    pub coverage_points: Vec<ConditionCoveragePoint>,
    pub sub_instances: Vec<ConditionCoverageNode>,
}

impl ConditionCoverageNode {
    pub fn new(instance_name: String, module_name: String) -> Self {
        Self {
            instance_name,
            module_name,
            coverage_points: Vec::new(),
            sub_instances: Vec::new(),
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone, Default)]
pub struct RegisterCoverageNode {
    pub instance_name: String,
    pub module_name: String,
    pub coverage_points: Vec<RegisterCoveragePoint>,
    pub sub_instances: Vec<RegisterCoverageNode>,
}

impl RegisterCoverageNode {
    pub fn new(instance_name: String, module_name: String) -> Self {
        Self {
            instance_name,
            module_name,
            coverage_points: Vec::new(),
            sub_instances: Vec::new(),
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone, Default)]
pub struct LineCoverage {
    pub conditional_predicates: Vec<ConditionCoveragePoint>,
    pub mux_conditions: Vec<ConditionCoveragePoint>,
    pub register_coverage: Vec<RegisterCoveragePoint>,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SourceFileCoverage {
    pub file_path: String,
    pub lines: HashMap<u32, LineCoverage>, // Line number to LineCoverage
}

impl SourceFileCoverage {
    pub fn new(file_path: String) -> Self {
        Self {
            file_path,
            lines: HashMap::new(),
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone, Default)]
pub struct InstanceCoverageNode {
    pub instance_name: String,
    pub module_name: String,
    pub source_files: Vec<SourceFileCoverage>,
    pub sub_instances: Vec<InstanceCoverageNode>,
}

impl InstanceCoverageNode {
    pub fn new(instance_name: String, module_name: String) -> Self {
        Self {
            instance_name,
            module_name,
            source_files: Vec::new(),
            sub_instances: Vec::new(),
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct CoverageReport {
    pub summary: CoverageSummary,
    pub conditional_predicates: Vec<ConditionCoveragePoint>,
    pub mux_conditions: Vec<ConditionCoveragePoint>,
    pub register_coverage: Vec<RegisterCoveragePoint>,
    // 用于展示Coverage Details
    pub conditional_coverage_tree: Option<ConditionCoverageNode>,
    pub mux_condition_tree: Option<ConditionCoverageNode>,
    pub register_coverage_tree: Option<RegisterCoverageNode>,
    // 用于展示Instance Source Viewer
    pub instance_coverage_tree: Option<InstanceCoverageNode>,
}

impl CoverageReport {
    pub fn parse_with_coverage_info(&mut self, coverage_info: &CoverageInfo) {
        // 1. Build a map from compressed_name to reconstructed_signal_path (origin_name)
        let mut signal_origin_map: HashMap<String, String> = HashMap::new();
        for port in &coverage_info.exported_ports {
            let prefix_to_remove = match port.r#type.as_str() {
                "cond_pred" => "_cp_",
                "mux_cond" => "_mc_",
                "register" => "_rs_",
                _ => "",
            };
            for signal in &port.signals {
                let lookup_key = if !prefix_to_remove.is_empty()
                    && signal.compressed_name.starts_with(prefix_to_remove)
                {
                    signal.compressed_name[prefix_to_remove.len()..].to_string()
                } else {
                    signal.compressed_name.clone()
                };

                if let Some(reconstructed_path) = port.name_mapping.get(&lookup_key) {
                    signal_origin_map
                        .insert(signal.compressed_name.clone(), reconstructed_path.clone());
                }
            }
        }

        // 2. Populate origin_name for all coverage points with FULL paths temporarily
        for point in self.conditional_predicates.iter_mut() {
            point.origin_name = signal_origin_map.get(&point.compressed_name).cloned();
        }
        for point in self.mux_conditions.iter_mut() {
            point.origin_name = signal_origin_map.get(&point.compressed_name).cloned();
        }
        for point in self.register_coverage.iter_mut() {
            point.origin_name = signal_origin_map.get(&point.compressed_name).cloned();
        }

        // Pre-build HashMaps for faster lookups in recursive functions
        let conditional_predicates_map: HashMap<String, ConditionCoveragePoint> = self
            .conditional_predicates
            .iter()
            .map(|p| (p.compressed_name.clone(), p.clone()))
            .collect();

        let mux_conditions_map: HashMap<String, ConditionCoveragePoint> = self
            .mux_conditions
            .iter()
            .map(|p| (p.compressed_name.clone(), p.clone()))
            .collect();

        let register_coverage_map: HashMap<String, RegisterCoveragePoint> = self
            .register_coverage
            .iter()
            .map(|p| (p.compressed_name.clone(), p.clone()))
            .collect();

        // 3. Build coverage trees
        if let Some(instance_signal_tree) = &coverage_info.instance_signal_tree {
            if !instance_signal_tree.instance_name.is_empty() {
                self.conditional_coverage_tree = Some(Self::build_condition_node_recursive(
                    instance_signal_tree,
                    &conditional_predicates_map, // Pass HashMap
                ));
                self.mux_condition_tree = Some(Self::build_condition_node_recursive(
                    instance_signal_tree,
                    &mux_conditions_map, // Pass HashMap
                ));
                self.register_coverage_tree = Some(Self::build_register_node_recursive(
                    instance_signal_tree,
                    &register_coverage_map, // Pass HashMap
                ));
                // Build the new instance_coverage_tree
                self.instance_coverage_tree = Some(Self::build_instance_coverage_node_recursive(
                    instance_signal_tree,
                    &conditional_predicates_map,
                    &mux_conditions_map,
                    &register_coverage_map,
                ));
            }
        }

        // 4. Set origin_name to None for the root-level Vec<Point> as per requirement
        for point in self.conditional_predicates.iter_mut() {
            point.origin_name = None;
        }
        for point in self.mux_conditions.iter_mut() {
            point.origin_name = None;
        }
        for point in self.register_coverage.iter_mut() {
            point.origin_name = None;
        }
    }

    fn extract_and_format_signal_name(full_path: &str) -> Option<String> {
        if let Some(s_start) = full_path.rfind("__S__") {
            // Ensure there are characters after "__S__"
            if s_start + 5 <= full_path.len() {
                let signal_part = &full_path[s_start + 5..];
                Some(signal_part.replace("__s__", "."))
            } else {
                // "__S__" is at the very end, signal part is empty
                Some("".to_string())
            }
        } else {
            // __S__ not found, so cannot extract signal name as per definition
            None
        }
    }

    fn build_condition_node_recursive(
        instance_signal_node: &CoverageInstanceSignalTree,
        all_report_points: &HashMap<String, ConditionCoveragePoint>, // Changed type
    ) -> ConditionCoverageNode {
        let mut current_coverage_node = ConditionCoverageNode::new(
            instance_signal_node.instance_name.clone(),
            instance_signal_node.module_name.clone(),
        );

        for signal_info in &instance_signal_node.signals {
            if let Some(original_point) = all_report_points.get(&signal_info.compressed_name)
            // Changed to .get()
            {
                let mut point_for_tree = original_point.clone();
                if let Some(ref full_origin) = point_for_tree.origin_name {
                    point_for_tree.origin_name = Self::extract_and_format_signal_name(full_origin);
                }
                current_coverage_node.coverage_points.push(point_for_tree);
            }
        }

        current_coverage_node.sub_instances = instance_signal_node
            .sub_instances
            .par_iter()
            .map(|sub_instance_signal_node| {
                Self::build_condition_node_recursive(sub_instance_signal_node, all_report_points)
            })
            .collect();

        current_coverage_node
    }

    fn build_register_node_recursive(
        instance_signal_node: &CoverageInstanceSignalTree,
        all_report_points: &HashMap<String, RegisterCoveragePoint>, // Changed type
    ) -> RegisterCoverageNode {
        let mut current_coverage_node = RegisterCoverageNode::new(
            instance_signal_node.instance_name.clone(),
            instance_signal_node.module_name.clone(),
        );

        for signal_info in &instance_signal_node.signals {
            if let Some(original_point) = all_report_points.get(&signal_info.compressed_name)
            // Changed to .get()
            {
                let mut point_for_tree = original_point.clone();
                if let Some(ref full_origin) = point_for_tree.origin_name {
                    point_for_tree.origin_name = Self::extract_and_format_signal_name(full_origin);
                }
                current_coverage_node.coverage_points.push(point_for_tree);
            }
        }

        current_coverage_node.sub_instances = instance_signal_node
            .sub_instances
            .par_iter()
            .map(|sub_instance_signal_node| {
                Self::build_register_node_recursive(sub_instance_signal_node, all_report_points)
            })
            .collect();

        current_coverage_node
    }

    fn build_instance_coverage_node_recursive(
        instance_signal_node: &CoverageInstanceSignalTree,
        all_conditional_points: &HashMap<String, ConditionCoveragePoint>,
        all_mux_points: &HashMap<String, ConditionCoveragePoint>,
        all_register_points: &HashMap<String, RegisterCoveragePoint>,
    ) -> InstanceCoverageNode {
        let mut current_node = InstanceCoverageNode::new(
            instance_signal_node.instance_name.clone(),
            instance_signal_node.module_name.clone(),
        );

        // Aggregate coverage points by file_path and then by line_number
        let mut source_files_aggregator: HashMap<String, HashMap<u32, LineCoverage>> =
            HashMap::new();

        for signal_in_tree in &instance_signal_node.signals {
            if let (Some(file_path_str), Some(line_num)) =
                (&signal_in_tree.file_path, signal_in_tree.line)
            {
                let line_coverage_entry = source_files_aggregator
                    .entry(file_path_str.clone())
                    .or_default()
                    .entry(line_num)
                    .or_default();

                // Check conditional predicates
                if let Some(original_point) =
                    all_conditional_points.get(&signal_in_tree.compressed_name)
                {
                    let mut point_for_tree = original_point.clone();
                    if let Some(ref full_origin) = point_for_tree.origin_name {
                        point_for_tree.origin_name =
                            Self::extract_and_format_signal_name(full_origin);
                    }
                    line_coverage_entry
                        .conditional_predicates
                        .push(point_for_tree);
                }

                // Check mux conditions
                if let Some(original_point) = all_mux_points.get(&signal_in_tree.compressed_name) {
                    let mut point_for_tree = original_point.clone();
                    if let Some(ref full_origin) = point_for_tree.origin_name {
                        point_for_tree.origin_name =
                            Self::extract_and_format_signal_name(full_origin);
                    }
                    line_coverage_entry.mux_conditions.push(point_for_tree);
                }

                // Check register coverage
                if let Some(original_point) =
                    all_register_points.get(&signal_in_tree.compressed_name)
                {
                    let mut point_for_tree = original_point.clone();
                    if let Some(ref full_origin) = point_for_tree.origin_name {
                        point_for_tree.origin_name =
                            Self::extract_and_format_signal_name(full_origin);
                    }
                    line_coverage_entry.register_coverage.push(point_for_tree);
                }
            }
        }

        // Convert aggregated data to Vec<SourceFileCoverage>
        for (path_str, lines_map) in source_files_aggregator {
            if !lines_map.is_empty() {
                let mut sfc = SourceFileCoverage::new(path_str);
                sfc.lines = lines_map;
                current_node.source_files.push(sfc);
            }
        }
        // Sort source files by path for consistent output
        current_node
            .source_files
            .sort_by(|a, b| a.file_path.cmp(&b.file_path));

        current_node.sub_instances = instance_signal_node
            .sub_instances
            .par_iter()
            .map(|sub_instance_signal_node| {
                Self::build_instance_coverage_node_recursive(
                    sub_instance_signal_node,
                    all_conditional_points,
                    all_mux_points,
                    all_register_points,
                )
            })
            .collect();

        current_node
    }
}

#[cfg(test)]
mod test {
    use crate::types::coverage_info::CoverageInfo;

    #[test]
    fn test_deserialize_coverage_report() {
        let file = r"data\coverage_report.json";
        let json = std::fs::read_to_string(file).unwrap();

        let _report: super::CoverageReport = serde_json::from_str(&json).unwrap();
    }

    #[test]
    fn test_parse_with_coverage_info() {
        let content = std::fs::read_to_string(r"data\TestHarness_coverage_info.json").unwrap();
        let mut info = serde_json::from_str::<CoverageInfo>(&content).unwrap();
        // modify this
        info.available_root_dirs = Some(vec![
            r"D:\git\chisel".to_string(),
            r"D:\git\rocket-chip".to_string(),
        ]);
        let start_time = std::time::Instant::now();
        info.parse();
        let parsed_content = serde_json::to_string_pretty(&info).unwrap();
        std::fs::write(
            r"data\TestHarness_coverage_info_parsed.json",
            parsed_content,
        ).unwrap();
        let duration = start_time.elapsed();
        println!("Parsing took: {:?}", duration);


        let start_time = std::time::Instant::now();
        let report = std::fs::read_to_string(
            r"data\coverage_report.json",
        )
        .unwrap();
        let mut coverage_report = serde_json::from_str::<super::CoverageReport>(&report).unwrap();
        coverage_report.parse_with_coverage_info(&info);

        // 把处理完的保存到另一个文件
        let report_json = serde_json::to_string_pretty(&coverage_report).unwrap();
        std::fs::write(
            r"data\coverage_report_parsed.json",
            report_json,
        )
        .unwrap();

        let duration = start_time.elapsed();
        println!("parse_with_coverage_info took: {:?}", duration);
    }
}
