<script setup lang="ts">
import { ref, computed, watch, nextTick } from 'vue';
// Import Select component and its types
import { Card as ACard, Row as ARow, Col as ACol, DirectoryTree as ADirectoryTree, Spin as ASpin, Alert as AAlert, Button as AButton, Empty as AEmpty, Tag as ATag, Select as ASelect, SelectOption as ASelectOption } from 'ant-design-vue';
import type { SelectValue, DefaultOptionType } from 'ant-design-vue/es/select'; // Import SelectValue
import { CodeOutlined, LoadingOutlined, PlusSquareOutlined, MinusSquareOutlined } from "@ant-design/icons-vue";
import { useCoverageStore } from "../stores/coverageStore";
import type { InstanceSignalTree, SignalInfo, ModuleInfo, SourceFileInfo } from '../types/CoverageInfo';
import type { ConditionCoveragePoint, RegisterCoveragePoint } from '../types/CoverageReport';
import { formatCoverage, getNodeStyle, getConditionTagColor, formatCount, formatPercent, parseSignalName } from '../utils/coverageUtils';
import hljs from 'highlight.js';
import scala from 'highlight.js/lib/languages/scala';
import 'highlight.js/styles/vs.css';

// Register Scala language
hljs.registerLanguage('scala', scala);

// --- Type Definitions ---

interface InstanceTreeNode {
  key: string; // Unique path of the instance (e.g., "root__I__sub1")
  title: string; // Display title: "instanceName (moduleName)"
  moduleName: string;
  children?: InstanceTreeNode[];
  isLeaf: boolean;
  // Add reference to the original node to access signals on selection
  rawNode: InstanceSignalTree;
}

interface LineCoverageInfo {
  signalInfo: SignalInfo;
  coverageData?: ConditionCoveragePoint | RegisterCoveragePoint;
  parsedName: ReturnType<typeof parseSignalName>;
  instancePath: string[]; // Absolute path of the instance the signal belongs to (i.e., the path of the currently selected instance)
}

// --- Store and Refs ---
const coverageStore = useCoverageStore();
const sourceCodeContainerRef = ref<HTMLElement | null>(null);

// --- State ---
const selectedInstanceKey = ref<string | null>(null);
const selectedInstanceNode = ref<InstanceTreeNode | null>(null);
const displayedSourceContent = ref<string | null>(null);
const displayedSourceModuleName = ref<string | null>(null);
// MODIFIED: Initialize with undefined instead of null
const displayedSourceRelativePath = ref<string | undefined>(undefined);
// NEW: Store the list of available source files for the selected module
const availableSourceFiles = ref<SourceFileInfo[]>([]);
const isSourceLoading = ref(false);
const sourceError = ref<string | null>(null);

// Line-level coverage data (only includes signals from the currently selected instance in the current file)
const coverageDataByLine = ref<Record<number, LineCoverageInfo[]>>({});
const expandedLines = ref<Set<number>>(new Set());

// --- Computed Properties ---

// Convert InstanceSignalTree to Ant Design Tree data
const instanceTreeData = computed((): InstanceTreeNode[] => {
  const rootInstance = coverageStore.coverageInfo?.instanceSignalMap;
  if (!rootInstance) return [];

  const transformNode = (node: InstanceSignalTree, path: string[]): InstanceTreeNode => {
    const currentPath = [...path, node.instanceName];
    const nodeKey = currentPath.join('__I__');

    return {
      key: nodeKey,
      title: `${node.instanceName} (${node.moduleName})`,
      moduleName: node.moduleName,
      children: node.subInstances.map(sub => transformNode(sub, currentPath)),
      isLeaf: node.subInstances.length === 0,
      rawNode: node, // Store reference to the original node
    };
  };

  // Start conversion from the root instance (path starts as an empty array)
  return [transformNode(rootInstance, [])];
});

// Highlight source code
const highlightedSourceCode = computed(() => {
  if (displayedSourceContent.value && !sourceError.value) {
    try {
      return hljs.highlight(displayedSourceContent.value, { language: 'scala', ignoreIllegals: true }).value;
    } catch (e) {
      console.error("Highlighting error:", e);
      return displayedSourceContent.value; // Fallback to plain text
    }
  }
  return '';
});

// Calculate lines with coverage data
// MODIFIED: Filter coverageInfos based on displayedSourceRelativePath
const linesWithCoverage = computed(() => {
  if (!highlightedSourceCode.value) return [];
  const lines = highlightedSourceCode.value.split('\n');
  return lines.map((content, index) => {
    const lineNumber = index + 1;
    // Filter coverageInfos:
    // 1. Must belong to the currently selected instance
    // 2. Must belong to the currently displayed source file
    const coverageInfos = (coverageDataByLine.value[lineNumber] || []).filter(info =>
      info.instancePath.join('__I__') === selectedInstanceKey.value &&
      info.signalInfo.filePath === displayedSourceRelativePath.value // <-- Check against displayed file path
    );
    return {
      lineNumber,
      content, // Already highlighted HTML
      coverageInfos, // Now filtered by instance AND file path
      isExpanded: expandedLines.value.has(lineNumber),
    };
  });
});


// Path array of the currently selected instance
const selectedInstancePathArray = computed(() => {
  return selectedInstanceKey.value ? selectedInstanceKey.value.split('__I__') : [];
});


// --- Methods ---

// Toggle line expansion state
const toggleLineExpansion = (lineNumber: number) => {
  if (expandedLines.value.has(lineNumber)) {
    expandedLines.value.delete(lineNumber);
  } else {
    expandedLines.value.add(lineNumber);
  }
  expandedLines.value = new Set(expandedLines.value); // Force reactivity
};

// MODIFIED: updateCoverageDataForSelectedInstance - Now considers all signals of the instance,
// filtering happens later in linesWithCoverage computed property based on displayedSourceRelativePath.
// This pre-calculates coverage for all signals of the instance, regardless of which file they are in.
const updateCoverageDataForSelectedInstance = () => {
  const data: Record<number, LineCoverageInfo[]> = {};
  const currentInstanceNode = selectedInstanceNode.value; // Use the stored selected node
  const currentInstancePathArray = selectedInstancePathArray.value;

  console.log(`[updateCoverageData] Start: Pre-calculating for selected instance: ${currentInstancePathArray.join('.') || '(none)'}`);

  // 1. Check prerequisites
  if (!currentInstanceNode || // Must have a selected instance node
    !coverageStore.coverageReport ||
    currentInstancePathArray.length === 0) // Must have an instance path
  {
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    console.log('[updateCoverageData] Exiting early - missing required data (selected node, report, or instance path).');
    return;
  }

  // 2. Access the raw InstanceSignalTree data of the selected node
  const selectedRawNode = currentInstanceNode.rawNode;
  const report = coverageStore.coverageReport;

  // 3. Iterate through the signals of the selected instance
  selectedRawNode.signals.forEach(signalInfo => {
    // Core matching logic: signal line number is valid
    if (signalInfo.line !== null && signalInfo.line !== undefined && signalInfo.line > 0 && signalInfo.filePath) {
      const lineNumber = signalInfo.line;
      const parsed = parseSignalName(signalInfo.name);
      let coverageData: ConditionCoveragePoint | RegisterCoveragePoint | undefined = undefined;

      // Find coverage data in the report
      switch (parsed.type) {
        case 'predicate':
          coverageData = report.conditional_predicates?.find(p => p.name === signalInfo.name);
          break;
        case 'mux':
          coverageData = report.mux_conditions?.find(m => m.name === signalInfo.name);
          break;
        case 'register':
          coverageData = report.register_coverage?.find(r => r.name === signalInfo.name);
          break;
      }
      // console.log(`[updateCoverageData]   Signal: ${signalInfo.name} (Line ${lineNumber}), Found in report: ${!!coverageData}`);

      // Create line info (includes signalInfo.filePath)
      const lineInfo: LineCoverageInfo = {
        signalInfo, // Contains the relative filePath
        coverageData,
        parsedName: parsed,
        instancePath: currentInstancePathArray, // Use the path of the currently selected instance
      };

      if (!data[lineNumber]) {
        data[lineNumber] = [];
      }
      data[lineNumber].push(lineInfo);
    }
    // else if (signalInfo.line === null || signalInfo.line === undefined || signalInfo.line <= 0) {
    //    console.log(`[updateCoverageData]   Signal ${signalInfo.name} has invalid line number: ${signalInfo.line}`);
    // }
  });

  // 4. Update state
  console.log('[updateCoverageData] End: Pre-calculated data object for selected instance (all files):', JSON.parse(JSON.stringify(data)));
  coverageDataByLine.value = data; // Store the pre-calculated data
  // Filtering based on displayed file happens in linesWithCoverage computed property
};


// MODIFIED: loadSourceFileContent - Ensure path is set correctly
const loadSourceFileContent = (sourceFileInfo: SourceFileInfo | undefined) => {
  isSourceLoading.value = true;
  sourceError.value = null;
  displayedSourceContent.value = null;

  if (!sourceFileInfo) {
    sourceError.value = "Selected source file information is missing.";
    console.error(sourceError.value);
    displayedSourceRelativePath.value = undefined; // Ensure path is undefined on error
    isSourceLoading.value = false;
    return;
  }

  displayedSourceRelativePath.value = sourceFileInfo.relativePath; // Update displayed path

  console.log(`Loading content for: ${sourceFileInfo.relativePath}`);

  if (sourceFileInfo.content === null || sourceFileInfo.content === undefined) {
    sourceError.value = `Source content for file "${sourceFileInfo.relativePath}" in module "${displayedSourceModuleName.value}" is not available or could not be loaded. Check root directory settings.`;
    console.warn(sourceError.value);
  } else if (sourceFileInfo.content.startsWith("Error reading file:")) {
    sourceError.value = sourceFileInfo.content; // Show the specific error
    console.error(`Error reading file "${sourceFileInfo.relativePath}" for module "${displayedSourceModuleName.value}": ${sourceFileInfo.content}`);
  } else {
    displayedSourceContent.value = sourceFileInfo.content;
    // No need to call updateCoverageDataForSelectedInstance here, it's already done for the instance.
    // linesWithCoverage will automatically filter based on the new displayedSourceRelativePath.
    nextTick(() => {
      sourceCodeContainerRef.value?.scrollTo({ top: 0 });
    });
  }
  isSourceLoading.value = false;
};


// MODIFIED: handleInstanceSelect - Ensure path is set to undefined on reset/error
const handleInstanceSelect = (keys: (string | number)[], { node }: { node: any }) => {
  // --- Reset state ---
  selectedInstanceKey.value = null;
  selectedInstanceNode.value = null;
  displayedSourceContent.value = null;
  displayedSourceModuleName.value = null;
  displayedSourceRelativePath.value = undefined; // Reset to undefined
  availableSourceFiles.value = []; // Clear available files
  sourceError.value = null;
  coverageDataByLine.value = {};
  expandedLines.value.clear();

  if (keys.length === 0 || !node) {
    return; // Exit if deselected or invalid node
  }

  // --- Set selected instance ---
  const selectedKey = String(keys[0]);
  const selectedNodeData = node.dataRef as InstanceTreeNode;
  selectedInstanceKey.value = selectedKey;
  selectedInstanceNode.value = selectedNodeData;
  const moduleName = selectedNodeData.moduleName;
  displayedSourceModuleName.value = moduleName;

  console.log(`Selected instance: ${selectedNodeData.title}, Module: ${moduleName}`);
  isSourceLoading.value = true; // Start loading indicator

  // --- Find ModuleInfo and Source Files ---
  const moduleInfo = coverageStore.coverageInfo?.moduleInfoMap?.[moduleName];

  if (moduleInfo?.sourceFiles) {
    const filesArray = Object.values(moduleInfo.sourceFiles);
    availableSourceFiles.value = filesArray; // Store available files

    if (filesArray.length > 0) {
      // --- Select and load the default (first) source file ---
      const defaultSourceFile = filesArray[0];
      console.log(`Found ${filesArray.length} source file(s) for module ${moduleName}. Defaulting to: ${defaultSourceFile.relativePath}`);
      // Pre-calculate coverage for the entire instance *before* loading the first file's content
      updateCoverageDataForSelectedInstance();
      // Load content for the default file
      loadSourceFileContent(defaultSourceFile); // This sets displayedSourceRelativePath and content/error

    } else {
      sourceError.value = `Module "${moduleName}" has no associated source files defined in coverage info.`;
      console.warn(sourceError.value);
      displayedSourceRelativePath.value = undefined; // Ensure path is undefined
      isSourceLoading.value = false;
    }
  } else {
    sourceError.value = `Module information or source files for "${moduleName}" not found in coverage info.`;
    console.error(sourceError.value);
    displayedSourceRelativePath.value = undefined; // Ensure path is undefined
    isSourceLoading.value = false;
  }

  // If an error occurred during module/file finding, ensure loading stops
  if (sourceError.value) {
    isSourceLoading.value = false;
    // Clear coverage data if we errored out before calculating it
    if (availableSourceFiles.value.length === 0) {
      updateCoverageDataForSelectedInstance(); // Clears the data
    }
  }
};

// MODIFIED: Handle change in source file selection dropdown - Adjust signature and add type check
const handleSourceFileChange = (value: SelectValue, _option: DefaultOptionType | DefaultOptionType[]) => {
  // Check if the value is a string (it should be in this case)
  if (typeof value === 'string') {
    const selectedPath = value;
    console.log("Source file selection changed to:", selectedPath);
    const selectedFileInfo = availableSourceFiles.value.find(f => f.relativePath === selectedPath);
    if (selectedFileInfo) {
      loadSourceFileContent(selectedFileInfo);
    } else {
      console.error(`Could not find SourceFileInfo for path: ${selectedPath}`);
      sourceError.value = `Internal error: Could not find details for selected file path ${selectedPath}.`;
      displayedSourceContent.value = null;
      displayedSourceRelativePath.value = undefined; // Reset path on error
    }
  } else {
    // Handle unexpected value types if necessary (e.g., multiple select, labeled value)
    console.warn("Unexpected value type from Select change event:", value);
    displayedSourceRelativePath.value = undefined; // Reset path
  }
};


// --- Watchers ---
// MODIFIED: Watch coverageInfo - Reset path to undefined
watch(() => coverageStore.coverageInfo, (newInfo, oldInfo) => {
  if (newInfo !== oldInfo) {
    console.log("Coverage info changed, clearing source viewer state.");
    selectedInstanceKey.value = null;
    selectedInstanceNode.value = null;
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = null;
    displayedSourceRelativePath.value = undefined; // Reset to undefined
    availableSourceFiles.value = []; // Clear available files too
    sourceError.value = null;
    coverageDataByLine.value = {};
    expandedLines.value.clear();
  }
}, { immediate: false });

// Watch for coverageReport changes
watch(() => coverageStore.coverageReport, () => {
  console.log("Coverage report changed, updating line coverage data if an instance is selected.");
  // Only update if an instance is selected
  if (selectedInstanceKey.value) {
    updateCoverageDataForSelectedInstance(); // Re-calculate pre-computed data
  }
}, { deep: true });

</script>

<template>
  <a-card class="source-viewer-card" title="Instance Source Viewer">
    <template v-if="coverageStore.coverageInfo?.instanceSignalMap">
      <a-row :gutter="16" class="source-viewer-layout">
        <!-- Instance Tree Column -->
        <a-col :span="8" class="tree-column">
          <div class="tree-container">
            <a-directory-tree v-if="instanceTreeData.length > 0" :tree-data="instanceTreeData" :showLine="true"
              :default-expand-all="false" :selectable="true"
              :selectedKeys="selectedInstanceKey ? [selectedInstanceKey] : []" @select="handleInstanceSelect" blockNode
              :fieldNames="{ title: 'title', key: 'key', children: 'children' }">
              <!-- Ant Tree handles ellipsis with fieldNames, no custom title slot needed -->
            </a-directory-tree>
            <a-empty v-else description="Instance tree is empty or loading..." />
          </div>
        </a-col>

        <!-- Source Code Column -->
        <a-col :span="16" class="source-column">
          <div class="source-container" ref="sourceCodeContainerRef">
            <a-spin :spinning="isSourceLoading" :indicator="LoadingOutlined" size="large" tip="Loading source code...">
              <div v-if="selectedInstanceKey">
                <!-- Source Header -->
                <div class="source-header">
                  <span class="module-name" :title="`Module: ${displayedSourceModuleName ?? 'N/A'}`">
                    Module: <strong>{{ displayedSourceModuleName ?? 'N/A' }}</strong>
                  </span>
                  <!-- Source File Selector Dropdown (value binding is now compatible) -->
                  <a-select v-if="availableSourceFiles.length > 1" :value="displayedSourceRelativePath"
                    @change="handleSourceFileChange" size="small"
                    style="min-width: 200px; max-width: 50%; margin-left: 15px;"
                    :title="`Select source file for module ${displayedSourceModuleName}`"
                    :options="availableSourceFiles.map(f => ({ value: f.relativePath, label: f.relativePath }))"
                    :showSearch="true" optionFilterProp="label" placeholder="Select source file" allowClear>
                  </a-select>
                  <!-- Display single file path if only one exists -->
                  <span v-else-if="availableSourceFiles.length === 1" class="file-path"
                    :title="`File: ${displayedSourceRelativePath ?? 'N/A'}`">
                    File: {{ displayedSourceRelativePath ?? 'N/A' }}
                  </span>
                  <!-- Placeholder if no files (should ideally show error) -->
                  <span v-else class="file-path" title="No source files available">
                    File: N/A
                  </span>
                </div>

                <!-- Error Display -->
                <div v-if="sourceError" class="error-display">
                  <a-alert type="error"
                    :message="`Error loading source for ${displayedSourceModuleName} (${displayedSourceRelativePath ?? 'path unknown'})`"
                    show-icon>
                    <template #description>
                      <p>{{ sourceError }}</p>
                      <!-- Consider adding a retry or root dir link here -->
                    </template>
                  </a-alert>
                </div>

                <!-- Source Code (uses linesWithCoverage which is now filtered) -->
                <pre v-else-if="displayedSourceContent" class="source-code-viewer hljs vs">
  <!-- Loop uses linesWithCoverage, which now correctly filters based on displayed file -->
  <div v-for="line in linesWithCoverage" :key="line.lineNumber" class="line-container">
    <div class="line-content-wrapper">
      <!-- Toggle Button -->
      <span class="line-toggle">
        <!-- Only show toggle if there are coverageInfos *for this file* on this line -->
        <a-button v-if="line.coverageInfos.length > 0" type="text" size="small"
          @click="toggleLineExpansion(line.lineNumber)"
          :title="line.isExpanded ? 'Collapse coverage details' : 'Expand coverage details'">
          <template #icon>
                            <component :is="line.isExpanded ? MinusSquareOutlined : PlusSquareOutlined" />
                          </template>
        </a-button>
        <span v-else class="toggle-placeholder"></span>
      </span>
      <!-- Line Number -->
      <span class="line-number">{{ line.lineNumber }}</span>
      <!-- Line Content (Highlighted) -->
      <code class="line-content" v-html="line.content"></code>
    </div>
    <!-- Coverage Details (only shown if line.coverageInfos has items for this file) -->
    <div v-if="line.isExpanded && line.coverageInfos.length > 0" class="coverage-details-line">
      <div v-for="(info, index) in line.coverageInfos" :key="`${line.lineNumber}-${index}-${info.signalInfo.name}`"
        class="coverage-item">
        <!-- Display Signal Name -->
        <span class="signal-path" :title="info.signalInfo.name">
          {{ info.parsedName.signal }}
        </span>

        <!-- Display coverage data based on type -->
        <template v-if="info.coverageData">
                          <!-- Condition Coverage -->
                          <span v-if="info.parsedName.type === 'predicate' || info.parsedName.type === 'mux'"
                                class="coverage-tags condition-details">
                            <a-tag :color="getConditionTagColor((info.coverageData as ConditionCoveragePoint).hit_true)">True</a-tag>
                            <span class="detail-count">({{ formatCount((info.coverageData as ConditionCoveragePoint).count_true) }}, {{ formatPercent((info.coverageData as ConditionCoveragePoint).true_percentage) }})</span>
                            <a-tag :color="getConditionTagColor((info.coverageData as ConditionCoveragePoint).hit_false)">False</a-tag>
                            <span class="detail-count">({{ formatCount((info.coverageData as ConditionCoveragePoint).count_false) }}, {{ formatPercent((info.coverageData as ConditionCoveragePoint).false_percentage) }})</span>
                            <span class="coverage-percent" :style="getNodeStyle(info.coverageData.coverage_percent)">({{ formatCoverage(info.coverageData.coverage_percent) }})</span>
                          </span>
                          <!-- Register Coverage -->
                          <span v-else-if="info.parsedName.type === 'register'"
                                class="coverage-tags register-details">
                            (W: {{ (info.coverageData as RegisterCoveragePoint).width }}, Hit: {{ (info.coverageData as RegisterCoveragePoint).bins_hit }}/{{ (info.coverageData as RegisterCoveragePoint).bins_total }})
                            <span class="coverage-percent" :style="getNodeStyle(info.coverageData.coverage_percent)">({{ formatCoverage(info.coverageData.coverage_percent) }})</span>
                          </span>
                        </template>
        <!-- No data in report -->
        <span v-else class="coverage-tags no-data">
          (No coverage data in report)
        </span>
      </div>
    </div>
  </div>
</pre>

                <!-- No Content (but no error) (Simplified) -->
                <div v-else-if="!isSourceLoading" class="empty-content">
                  <a-empty description="Source content for this module/file is empty or unavailable." />
                </div>

              </div>
              <!-- Placeholder when no instance is selected -->
              <div v-else class="empty-selection">
                <CodeOutlined style="font-size: 24px; margin-bottom: 10px;" />
                <p>Select an instance from the tree on the left to view its module's source code and coverage.</p>
              </div>
            </a-spin>
          </div>
        </a-col>
      </a-row>
    </template>
    <!-- Placeholder when coverage info is not loaded -->
    <template v-else>
      <div class="empty-info">
        <a-empty description="Please load a coverage info file first to build the instance tree." />
      </div>
    </template>

  </a-card>
</template>

<style scoped>
/* --- Overall Layout and Containers --- */
.source-viewer-card {
  width: 100%;
  margin-top: 16px;
  height: 75vh;
  /* Adjust as needed */
  display: flex;
  flex-direction: column;
}

.source-viewer-card :deep(.ant-card-body) {
  padding: 0;
  flex-grow: 1;
  display: flex;
  overflow: hidden;
}

.source-viewer-layout {
  width: 100%;
  height: 100%;
  display: flex;
}

/* --- Left and Right Columns --- */
.tree-column {
  height: 100%;
  border-right: 1px solid #f0f0f0;
  display: flex;
  flex-direction: column;
  overflow: hidden;
}

.source-column {
  height: 100%;
  display: flex;
  flex-direction: column;
  overflow: hidden;
}

/* --- Tree Container --- */
.tree-container {
  padding: 10px;
  overflow: auto;
  flex-grow: 1;
}

/* --- Source Container --- */
.source-container {
  flex-grow: 1;
  overflow: auto;
  /* This should handle the scrolling */
  display: flex;
  flex-direction: column;
  position: relative;
}

.source-container :deep(.ant-spin-nested-loading),
.source-container :deep(.ant-spin-container) {
  height: 100%;
  display: flex;
  flex-direction: column;
}

.source-container :deep(.ant-spin-container) {
  flex-grow: 1;
  /* Ensure spinner container grows */
  display: flex;
  /* Ensure flex layout for child */
  flex-direction: column;
  /* Ensure flex layout for child */
}


/* --- Source Header --- */
.source-header {
  padding: 8px 16px;
  background-color: #fafafa;
  border-bottom: 1px solid #f0f0f0;
  flex-shrink: 0;
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
  display: flex;
  /* Ensure flex */
  align-items: center;
  /* Vertically align items */
  justify-content: space-between;
  /* Space out module and file selector */
}

.module-name {
  font-size: 0.9em;
  color: #555;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  flex-shrink: 0;
  /* Prevent module name from shrinking too much */
}

.file-path {
  margin-left: 15px;
  /* Add some space between module and file */
  color: #888;
  flex-shrink: 1;
  /* Allow file path to shrink if needed */
  text-align: right;
  /* Align text to the right */
}

/* Style the select dropdown */
.source-header .ant-select {
  flex-grow: 1;
  /* Allow select to take available space */
  margin-left: 15px;
}

/* --- Error Display --- */
.error-display {
  padding: 16px;
  flex-shrink: 0;
}

.error-display p {
  margin-bottom: 8px;
}

/* --- Source Code Viewer (pre tag) --- */
.source-code-viewer {
  flex-grow: 1;
  padding: 10px 0;
  margin: 0;
  font-family: 'SFMono-Regular', Consolas, 'Liberation Mono', Menlo, Courier, monospace;
  font-size: 13px;
  line-height: 0.1em;
  white-space: pre;
  background-color: #fff;
  /* Content is scrolled by the parent .source-container */
}

/* --- Line Container --- */
.line-container {
  display: flex;
  flex-direction: column;
  position: relative;
  border-left: 3px solid transparent;
}

.line-container:hover {
  background-color: #f7f7f7;
}

/* --- Line Content Wrapper (Button, Line Number, Code) --- */
.line-content-wrapper {
  display: flex;
  align-items: center;
  min-height: calc(13px * 1.5);
  /* Maintain minimum height */
}

/* --- Line Expand/Collapse Toggle Button --- */
.line-toggle {
  width: 28px;
  flex-shrink: 0;
  padding-left: 4px;
  display: flex;
  /* Use flexbox */
  align-items: center;
  /* Vertically center the button */
  justify-content: center;
  /* Horizontally center the button */
  height: 100%;
  /* Ensure toggle span takes full height of wrapper */
}

.line-toggle .ant-btn {
  padding: 0 4px;
  height: 18px;
  display: inline-flex;
  /* Ensure icon inside button is centered */
  align-items: center;
  justify-content: center;
}

.toggle-placeholder {
  display: inline-block;
  width: 18px;
  /* Match button width */
  height: 18px;
  /* Match button height */
}

/* --- Line Number --- */
.line-number {
  width: 45px;
  text-align: right;
  padding-right: 10px;
  color: #aaa;
  user-select: none;
  flex-shrink: 0;
  /* Ensure line-number aligns well with centered items */
  line-height: calc(13px * 1.5);
  /* Match min-height of wrapper */
}

/* --- Line Code Content --- */
.line-content {
  flex-grow: 1;
  padding-right: 16px;
  /* Ensure code content aligns well */
  line-height: calc(13px * 1.5);
  /* Match min-height of wrapper */
}

/* --- Coverage Details Line --- */
.coverage-details-line {
  background-color: #f9f9f9;
  border: 1px solid #eee;
  border-left: 3px solid #1890ff;
  margin-left: 32px;
  /* Indent */
  margin-right: 16px;
  margin-top: 2px;
  margin-bottom: 4px;
  padding: 6px 10px;
  border-radius: 3px;
  font-size: 0.9em;
}

/* --- Single Coverage Item --- */
.coverage-item {
  margin-bottom: 4px;
  padding-bottom: 4px;
  border-bottom: 1px dashed #eee;
  display: flex;
  align-items: baseline;
  flex-wrap: wrap;
  gap: 8px;
}

.coverage-item:last-child {
  margin-bottom: 0;
  padding-bottom: 0;
  border-bottom: none;
}

/* --- Signal Path --- */
.signal-path {
  font-weight: bold;
  color: #333;
  margin-right: 10px;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  max-width: 45%;
  display: inline-block;
  line-height: 1.4;
  /* Added line-height for better vertical display */
}

/* --- Coverage Tags and Counts --- */
.coverage-tags {
  display: inline-flex;
  align-items: center;
  gap: 4px;
  white-space: nowrap;
}

.condition-details .ant-tag,
.register-details .ant-tag {
  margin: 0;
  padding: 0 5px;
  font-size: 0.9em;
}

.detail-count {
  font-size: 0.9em;
  color: #555;
  margin-right: 6px;
}

.coverage-percent {
  font-size: 0.9em;
  margin-left: 4px;
}

.register-details {
  color: #555;
}

.no-data {
  color: #aaa;
  font-style: italic;
}

/* --- Empty States --- */
.empty-selection,
.empty-info,
.empty-content {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  height: 100%;
  padding: 20px;
  text-align: center;
  color: #888;
  flex-grow: 1;
}

/* --- Tree Node Styles --- */
/* Ant Tree's default blockNode and fieldNames handle title overflow well */
:deep(.ant-tree .ant-tree-node-content-wrapper) {
  padding: 1px 5px;
  line-height: 1.8;
}

:deep(.ant-tree .ant-tree-node-content-wrapper:hover) {
  background-color: #e6f7ff;
}

:deep(.ant-tree .ant-tree-node-selected .ant-tree-node-content-wrapper) {
  background-color: #bae7ff;
}
</style>
