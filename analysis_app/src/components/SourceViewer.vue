<script setup lang="ts">
import { ref, computed, watch, nextTick } from 'vue';
// Added message import and FolderOutlined/FileOutlined
import { Card as ACard, Row as ARow, Col as ACol, DirectoryTree as ADirectoryTree, Spin as ASpin, Alert as AAlert, Button as AButton, Empty as AEmpty, Tag as ATag, message } from 'ant-design-vue';
import { CodeOutlined, LoadingOutlined, PlusSquareOutlined, MinusSquareOutlined, FolderOutlined, FileOutlined } from "@ant-design/icons-vue"; // Modified: Added FolderOutlined/FileOutlined
import { useCoverageStore, type NavigationTarget } from "../stores/coverageStore"; // Added NavigationTarget
import type { InstanceCoverageNode, SourceFileCoverage, LineCoverage, ConditionCoveragePoint, RegisterCoveragePoint } from '../types/CoverageReport'; // Import necessary types
import { formatCoverage, getNodeStyle, getConditionTagColor, formatCount, formatPercent } from '../utils/coverageUtils';
import hljs from 'highlight.js';
import scala from 'highlight.js/lib/languages/scala';
import 'highlight.js/styles/vs.css';
import type { EventDataNode } from 'ant-design-vue/es/tree';
import type { Key } from 'ant-design-vue/es/table/interface';

// 注册语言
hljs.registerLanguage('scala', scala);

// --- 常量 ---
const HIGHLIGHT_CLASS = 'line-highlighted';

// --- 类型定义 ---
// Tree Node for Ant Design Tree
interface SourceViewerTreeNode {
  key: string; // Unique key (e.g., instancePath or instancePath::filePath)
  title: string; // Display title (instance name or file name)
  isLeaf: boolean;
  children?: SourceViewerTreeNode[];
  nodeType: 'instance' | 'file';
  // Data references
  instanceNode?: InstanceCoverageNode; // Reference to the original instance node
  fileNode?: SourceFileCoverage; // Reference to the original file node (if type is 'file')
  instancePath: string; // Path to the instance (e.g., "Top__I__sub1")
}

// --- Store 和 Refs ---
const coverageStore = useCoverageStore();
const sourceCodeContainerRef = ref<HTMLElement | null>(null);
const highlightedLineNumber = ref<number | null>(null);
const expandedRegisterLines = ref<Set<string>>(new Set()); // Key: `${lineNumber}-${compressedName}`
const isNavigating = ref(false); // Added for managing navigation state

// --- State ---
const selectedNodeKey = ref<string | null>(null); // Key of the selected node in the tree
const selectedInstanceNode = ref<InstanceCoverageNode | null>(null); // Currently selected instance node from the tree
const selectedFileNode = ref<SourceFileCoverage | null>(null); // Currently selected file node from the tree
const displayedSourceContent = ref<string | null>(null);
const isSourceLoading = ref(false);
const sourceError = ref<string | null>(null);
const expandedLines = ref<Set<number>>(new Set()); // Line numbers expanded to show details
const expandedNodeKeys = ref<Key[]>([]); // Keys of expanded nodes in the tree

// --- Computed Properties ---

// Transform the instance_coverage_tree from the store into the format needed by a-directory-tree
const sourceViewerTreeData = computed((): SourceViewerTreeNode[] => {
  const rootInstanceNode = coverageStore.coverageReport?.instance_coverage_tree;
  if (!rootInstanceNode) return [];

  let keyCounter = 0;
  const generateKey = (prefix: string) => `${prefix}_${keyCounter++}`;

  const transformNode = (node: InstanceCoverageNode, parentPath: string): SourceViewerTreeNode => {
    const currentInstancePath = parentPath ? `${parentPath}__I__${node.instance_name}` : node.instance_name;
    const instanceKey = generateKey(`inst_${currentInstancePath}`);

    const children: SourceViewerTreeNode[] = [];

    // 1. Add source files as children
    if (node.source_files) {
      // Sort files by path
      const sortedFiles = [...node.source_files].sort((a, b) => a.file_path.localeCompare(b.file_path));
      sortedFiles.forEach(file => {
        const fileKey = generateKey(`file_${instanceKey}_${file.file_path}`);
        children.push({
          key: fileKey,
          title: file.file_path.split(/[/\\]/).pop() || file.file_path, // Show only filename
          isLeaf: true,
          nodeType: 'file',
          instanceNode: node, // Reference back to parent instance
          fileNode: file, // Reference to the file data
          instancePath: currentInstancePath, // Store instance path
        });
      });
    }

    // 2. Add sub-instances as children (recursive call)
    if (node.sub_instances) {
      node.sub_instances.forEach(sub => {
        children.push(transformNode(sub, currentInstancePath));
      });
    }

    return {
      key: instanceKey,
      title: node.instance_name,
      isLeaf: children.length === 0,
      children: children.length > 0 ? children : undefined,
      nodeType: 'instance',
      instanceNode: node,
      instancePath: currentInstancePath,
    };
  };

  return [transformNode(rootInstanceNode, '')];
});

// Highlighted source code using highlight.js
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

// Process lines for display, incorporating coverage data directly from the selectedFileNode
const linesWithCoverage = computed(() => {
  if (!highlightedSourceCode.value || !selectedFileNode.value) return [];

  const lines = highlightedSourceCode.value.split('\n');
  const coverageLinesMap = selectedFileNode.value.lines || {}; // Get the lines map from the selected file node

  return lines.map((content, index) => {
    const lineNumber = index + 1;
    const lineCoverageData: LineCoverage | undefined = coverageLinesMap[lineNumber]; // Direct lookup

    // Combine all points for this line
    const coverageInfos: (ConditionCoveragePoint | RegisterCoveragePoint)[] = [];
    let lineCoveragePercent: number | undefined = undefined;

    if (lineCoverageData) {
      coverageInfos.push(...lineCoverageData.conditional_predicates);
      coverageInfos.push(...lineCoverageData.mux_conditions);
      coverageInfos.push(...lineCoverageData.register_coverage);

      // Calculate average line coverage percent if there are points
      const validCoverages = coverageInfos
        .map(info => info.coverage_percent)
        .filter((c): c is number => c !== undefined && !isNaN(c));

      if (validCoverages.length > 0) {
        const sum = validCoverages.reduce((acc, cur) => acc + cur, 0);
        lineCoveragePercent = sum / validCoverages.length;
      } else if (coverageInfos.length > 0) {
        lineCoveragePercent = 0; // If points exist but have no percentage (shouldn't happen), show 0%
      }
    }

    return {
      lineNumber,
      content, // Highlighted HTML content
      coverageData: lineCoverageData, // Direct reference to LineCoverage for this line
      isExpanded: expandedLines.value.has(lineNumber),
      lineCoveragePercent,
      isHighlighted: highlightedLineNumber.value === lineNumber,
    };
  });
});

// --- Methods ---
const toggleLineExpansion = (lineNumber: number) => {
  if (expandedLines.value.has(lineNumber)) {
    expandedLines.value.delete(lineNumber);
  } else {
    expandedLines.value.add(lineNumber);
  }
  expandedLines.value = new Set(expandedLines.value);
};

const toggleRegisterLineExpansion = (lineNumber: number, compressedName: string) => {
  const key = `${lineNumber}-${compressedName}`;
  if (expandedRegisterLines.value.has(key)) {
    expandedRegisterLines.value.delete(key);
  } else {
    expandedRegisterLines.value.add(key);
  }
  expandedRegisterLines.value = new Set(expandedRegisterLines.value);
};

const isRegisterLineExpanded = (lineNumber: number, compressedName: string): boolean => {
  return expandedRegisterLines.value.has(`${lineNumber}-${compressedName}`);
};

// Load source file content using the file path from the selected file node
const loadSourceFileContent = async (filePath: string | undefined) => { // Made async
  isSourceLoading.value = true;
  sourceError.value = null;
  displayedSourceContent.value = null;
  highlightedLineNumber.value = null; // Clear highlight when loading new content

  if (!filePath) {
    sourceError.value = "File path is missing.";
    isSourceLoading.value = false;
    return;
  }

  // Find the source file info in the coverageInfo store
  const sourceFileInfo = coverageStore.coverageInfo?.source_file_info_map?.[filePath];

  if (!sourceFileInfo) {
    sourceError.value = `Source file information not found for path: ${filePath}`;
    console.error(sourceError.value);
    isSourceLoading.value = false;
    return;
  }

  console.log(`Loading content for: ${filePath}`);

  if (sourceFileInfo.content === null || sourceFileInfo.content === undefined) {
    sourceError.value = `Source content for file "${filePath}" is not available or could not be loaded. Check root directory settings in the editor above.`;
    console.warn(sourceError.value);
  } else if (sourceFileInfo.content.startsWith("Error reading file:")) {
    sourceError.value = sourceFileInfo.content; // Display the error from the backend
    console.error(`Error reading file "${filePath}": ${sourceFileInfo.content}`);
  } else {
    displayedSourceContent.value = sourceFileInfo.content;
    await nextTick(() => {
      sourceCodeContainerRef.value?.scrollTo({ top: 0 }); // Scroll to top on new content
    });
  }
  isSourceLoading.value = false;
};

// Handle tree node selection
// Corrected EventDataNode usage
const handleInstanceSelect = async (keys: Key[], { node }: { node: EventDataNode }) => { // Made async
  if (isNavigating.value) return; // Prevent re-entry if selection is due to navigation

  if (keys.length === 0 || !node || !node.dataRef) {
    selectedNodeKey.value = null;
    selectedInstanceNode.value = null;
    selectedFileNode.value = null;
    displayedSourceContent.value = null;
    sourceError.value = null;
    expandedLines.value.clear();
    return;
  }

  const selectedKey = keys[0];
  selectedNodeKey.value = String(selectedKey);
  // Use type assertion for node.dataRef
  const selectedNodeData = node.dataRef as SourceViewerTreeNode;

  // Auto expand parent nodes
  const pathParts = selectedNodeData.instancePath.split('__I__');
  // Find keys corresponding to the instance path parts in the tree data
  const findKeysRecursive = (nodes: SourceViewerTreeNode[], targetPathParts: string[], currentBuildPath: string): Key[] => {
    let foundKeys: Key[] = [];
    for (const n of nodes) {
      const nodeInstanceName = n.instanceNode?.instance_name;
      if (n.nodeType === 'instance' && nodeInstanceName === targetPathParts[0]) {
        const nextBuildPath = currentBuildPath ? `${currentBuildPath}__I__${nodeInstanceName}` : nodeInstanceName;
        foundKeys.push(n.key); // Add the key of the matching instance node
        if (targetPathParts.length > 1 && n.children) {
          // Recursively search in children for the next part
          foundKeys = foundKeys.concat(findKeysRecursive(n.children, targetPathParts.slice(1), nextBuildPath));
        }
        break; // Found the node for this level
      }
    }
    return foundKeys;
  };
  expandedNodeKeys.value = Array.from(new Set([...expandedNodeKeys.value, ...findKeysRecursive(sourceViewerTreeData.value, pathParts, '')]));


  if (selectedNodeData.nodeType === 'file' && selectedNodeData.fileNode) {
    selectedInstanceNode.value = selectedNodeData.instanceNode || null; // Get instance ref from node
    selectedFileNode.value = selectedNodeData.fileNode;
    // Added non-null assertions
    console.log(`Selected file: ${selectedFileNode.value!.file_path} in instance ${selectedInstanceNode.value?.instance_name}`);
    await loadSourceFileContent(selectedFileNode.value!.file_path); // await loading
    expandedLines.value.clear(); // Clear line expansions for new file
    expandedRegisterLines.value.clear(); // Clear register expansions
  } else if (selectedNodeData.nodeType === 'instance') {
    selectedInstanceNode.value = selectedNodeData.instanceNode || null;
    selectedFileNode.value = null; // Clear file selection
    displayedSourceContent.value = null; // Clear source display
    sourceError.value = null;
    console.log(`Selected instance: ${selectedInstanceNode.value?.instance_name}`);
    expandedLines.value.clear();
  } else {
    console.error("Unknown node type selected:", selectedNodeData);
    selectedNodeKey.value = null;
    selectedInstanceNode.value = null;
    selectedFileNode.value = null;
    displayedSourceContent.value = null;
    sourceError.value = "Internal error: Unknown node type selected.";
    expandedLines.value.clear();
  }
};

// Handle tree node expansion/collapse
const handleExpand = (keys: Key[]) => {
  if (isNavigating.value) return; // Prevent re-entry if expansion is due to navigation
  expandedNodeKeys.value = keys;
};

// --- Watchers ---
watch(() => coverageStore.coverageReport, (newReport, oldReport) => {
  if (newReport !== oldReport) {
    console.log("Coverage report changed, resetting SourceViewer state.");
    selectedNodeKey.value = null;
    selectedInstanceNode.value = null;
    selectedFileNode.value = null;
    displayedSourceContent.value = null;
    sourceError.value = null;
    expandedLines.value.clear();
    expandedNodeKeys.value = []; // Reset expanded nodes as tree structure changed
    expandedRegisterLines.value.clear();
  }
}, { immediate: false }); // Don't run immediately, only on change

// Watch for navigation targets
watch(() => coverageStore.navigationTarget, async (target: NavigationTarget | null) => {
  if (!target || !target.sourceLocation || !target.sourceLocation.filePath) {
    // Clear any previous highlight if target is cleared or invalid
    // highlightedLineNumber.value = null; // Already cleared in loadSourceFileContent or if no file selected
    return;
  }

  isNavigating.value = true;
  console.log("Navigation target received:", target);

  const { targetFileNode, keysForExpansion } = findTargetFileNodeAndExpansionPath(
    sourceViewerTreeData.value,
    target.instancePath, // This is the full instance path string e.g. Top__I__Sub
    target.sourceLocation.filePath
  );

  if (targetFileNode && targetFileNode.fileNode) {
    // Update expanded keys: merge to preserve user's other expansions
    expandedNodeKeys.value = Array.from(new Set([...expandedNodeKeys.value, ...keysForExpansion]));
    
    let contentActuallyLoaded = false;
    if (selectedNodeKey.value !== targetFileNode.key) {
      selectedNodeKey.value = targetFileNode.key;
      selectedInstanceNode.value = targetFileNode.instanceNode || null;
      selectedFileNode.value = targetFileNode.fileNode;
      await loadSourceFileContent(targetFileNode.fileNode.file_path);
      contentActuallyLoaded = true;
    } else if (!displayedSourceContent.value && selectedFileNode.value?.file_path === targetFileNode.fileNode.file_path) {
      // File was selected, but content might have failed to load previously or was cleared
      await loadSourceFileContent(targetFileNode.fileNode.file_path);
      contentActuallyLoaded = true;
    }


    // Scroll and highlight after content is potentially (re)loaded
    // Must wait for DOM updates if content was loaded/reloaded
    if (contentActuallyLoaded) {
        await nextTick(); 
    }


    if (!sourceError.value && displayedSourceContent.value) {
      highlightedLineNumber.value = target.sourceLocation.line;

      const lineData = linesWithCoverage.value.find(l => l.lineNumber === target.sourceLocation.line);

      if (lineData) { // Check if lineData exists
        // Expand line details if it has coverage and is not expanded
        if (lineData.coverageData && (lineData.coverageData.conditional_predicates.length > 0 || lineData.coverageData.mux_conditions.length > 0 || lineData.coverageData.register_coverage.length > 0) && !lineData.isExpanded) {
          toggleLineExpansion(target.sourceLocation.line);
        }
        // Expand specific register if targeted
        if (target.signalKey && lineData.coverageData?.register_coverage) {
          const regPoint = lineData.coverageData.register_coverage.find(rc => rc.compressed_name === target.signalKey);
          if (regPoint && !isRegisterLineExpanded(target.sourceLocation.line, regPoint.compressed_name)) {
            toggleRegisterLineExpansion(target.sourceLocation.line, regPoint.compressed_name);
          }
        }
      }
      
      // Ensure DOM is fully updated after expansions before scrolling
      await nextTick();

      const lineElement = sourceCodeContainerRef.value?.querySelector(`.line-container:nth-child(${target.sourceLocation.line})`);
      if (lineElement) {
        lineElement.scrollIntoView({ behavior: 'smooth', block: 'center' });
        console.log(`Scrolled to line ${target.sourceLocation.line}`);
        message.success(`Navigated to ${target.sourceLocation.filePath}:${target.sourceLocation.line}`);
      } else {
        console.warn(`Line element for line ${target.sourceLocation.line} not found for scrolling.`);
        message.warn(`Could not scroll to line ${target.sourceLocation.line}. Line may not exist or view not updated.`);
      }
    } else {
      message.warn(`Cannot navigate: Source content for ${target.sourceLocation.filePath} not available or has errors.`);
    }
  } else {
    message.error(`Navigation failed: Could not find instance '${target.instancePath}' or file '${target.sourceLocation.filePath}' in the source tree.`);
  }

  coverageStore.clearNavigationTarget(); // Clear target after processing
  isNavigating.value = false;
}, { deep: true });


// Helper function to find the target file node and the keys of its ancestor instances for expansion
interface FindNodeResult {
  targetFileNode: SourceViewerTreeNode | null;
  keysForExpansion: Key[];
}

function findTargetFileNodeAndExpansionPath(
  rootNodes: SourceViewerTreeNode[],
  targetFullInstancePath: string, // e.g., "Top__I__InstanceA__I__InstanceB"
  targetFilePath: string
): FindNodeResult {
  const keys: Key[] = [];
  let foundNode: SourceViewerTreeNode | null = null;

  function findRecursively(nodes: SourceViewerTreeNode[], currentPathStack: SourceViewerTreeNode[]): boolean {
    for (const node of nodes) {
      if (node.nodeType === 'instance') {
        // Check if this instance node's path is a prefix or exact match of the target instance path
        if (targetFullInstancePath.startsWith(node.instancePath)) {
          currentPathStack.push(node); // Add current instance to path stack

          if (node.instancePath === targetFullInstancePath) {
            // This is the target instance. Look for the file in its children.
            const fileChild = node.children?.find(
              (child) => child.nodeType === 'file' && child.fileNode?.file_path === targetFilePath
            );
            if (fileChild) {
              foundNode = fileChild;
              // Populate keys from the stack
              keys.push(...currentPathStack.map(n => n.key));
              return true; // Found the file
            }
          }
          
          // If not the exact instance, or if it is but file not found directly,
          // and if there are children, recurse, but only if this instance is a true prefix
          if (node.children && targetFullInstancePath !== node.instancePath && targetFullInstancePath.startsWith(node.instancePath + "__I__")) {
            if (findRecursively(node.children, currentPathStack)) {
              return true; // Found in a deeper path
            }
          }
          
          // If not found in this branch, backtrack from stack
          currentPathStack.pop();
        }
      }
    }
    return false; // Not found in this list of nodes
  }

  findRecursively(rootNodes, []);
  // If foundNode is set, 'keys' will contain the path to its parent instance.
  // We need the keys of all instances ON THE PATH to the targetFileNode's PARENT instance.
  // The 'keys' array collected should be correct as it collects instance keys.
  return { targetFileNode: foundNode, keysForExpansion: foundNode ? keys : [] };
}

</script>

<template>
  <a-card class="source-viewer-card" title="Instance Source Viewer">
    <!-- Check if the specific tree exists in the report -->
    <template v-if="coverageStore.coverageReport?.instance_coverage_tree">
      <a-row :gutter="16" class="source-viewer-layout">
        <!-- Instance/File Tree Column -->
        <a-col :span="8" class="tree-column">
          <div class="tree-container">
            <a-directory-tree v-if="sourceViewerTreeData.length > 0" :tree-data="sourceViewerTreeData" :showLine="true"
              :selectable="true" :selectedKeys="selectedNodeKey ? [selectedNodeKey] : []"
              v-model:expandedKeys="expandedNodeKeys" @select="handleInstanceSelect" @expand="handleExpand" blockNode
              :fieldNames="{ title: 'title', key: 'key', children: 'children' }">
              <!-- Custom Icon Slot -->
              <template #icon="{ data: nodeData }">
                <template v-if="nodeData.nodeType === 'instance'">
                  <FolderOutlined />
                </template>
                <!-- For file nodes, render nothing here; a-directory-tree handles file icon -->
              </template>
              <!-- Custom Title Slot -->
              <template #title="{ data: nodeData }">
                <span class="tree-node-title-wrapper">
                  <span class="node-title-text"
                    :title="nodeData.nodeType === 'file' ? nodeData.fileNode?.file_path : nodeData.title">
                    {{ nodeData.title }}
                    <span v-if="nodeData.nodeType === 'instance' && nodeData.instanceNode?.module_name"
                      class="node-module-name">
                      ({{ nodeData.instanceNode.module_name }})
                    </span>
                  </span>
                </span>
              </template>
            </a-directory-tree>
            <a-empty v-else description="Instance coverage tree is empty." />
          </div>
        </a-col>

        <!-- Source Code Column -->
        <a-col :span="16" class="source-column">
          <div class="source-container" ref="sourceCodeContainerRef">
            <a-spin :spinning="isSourceLoading" :indicator="LoadingOutlined" size="large" tip="Loading source code...">
              <!-- Display File Content -->
              <div v-if="selectedFileNode" class="source-content-area">
                <!-- Source Header -->
                <div class="source-header">
                  <span class="header-info instance-info"
                    :title="`Instance: ${selectedInstanceNode?.instance_name ?? 'N/A'} (${selectedInstanceNode?.module_name ?? 'N/A'})`">
                    Instance: <strong>{{ selectedInstanceNode?.instance_name ?? 'N/A' }}</strong> ({{
                      selectedInstanceNode?.module_name ?? 'N/A' }})
                  </span>
                  <span class="header-info file-info" :title="`File: ${selectedFileNode.file_path}`">
                    File: {{ selectedFileNode.file_path }}
                  </span>
                </div>

                <!-- Error Display -->
                <div v-if="sourceError" class="error-display">
                  <a-alert type="error" :message="`Error loading source for ${selectedFileNode.file_path}`" show-icon>
                    <template #description>
                      <p>{{ sourceError }}</p>
                      <p v-if="sourceError.includes('Check root directory settings')">
                        Please use the "Source File Root Directory Editor" above to configure correct paths.
                      </p>
                    </template>
                  </a-alert>
                </div>

                <!-- Source Code Viewer -->
                <pre v-else-if="displayedSourceContent" class="source-code-viewer hljs vs">
          <div v-for="line in linesWithCoverage" :key="line.lineNumber" class="line-container"
            :class="{ [HIGHLIGHT_CLASS]: line.isHighlighted }">
            <div class="line-content-wrapper">
              <!-- Line Coverage Percent -->
              <span class="line-coverage-percent"
                :style="line.lineCoveragePercent !== undefined ? getNodeStyle(line.lineCoveragePercent) : {}">
                {{ line.lineCoveragePercent !== undefined ? formatCoverage(line.lineCoveragePercent) : '' }}
              </span>
              <!-- Toggle Button -->
              <span class="line-toggle">
                <a-button
                  v-if="line.coverageData && (line.coverageData.conditional_predicates.length > 0 || line.coverageData.mux_conditions.length > 0 || line.coverageData.register_coverage.length > 0)"
                  type="text" size="small" @click="toggleLineExpansion(line.lineNumber)"
                  :title="line.isExpanded ? 'Collapse coverage details' : 'Expand coverage details'">
                  <template #icon>
                            <component :is="line.isExpanded ? MinusSquareOutlined : PlusSquareOutlined" />
                          </template>
                </a-button>
                <!-- Placeholder for alignment -->
                <span v-else class="toggle-placeholder"></span>
              </span>
              <!-- Line Number -->
              <span class="line-number">{{ line.lineNumber }}</span>
              <!-- Line Content -->
              <code class="line-content" v-html="line.content"></code>
            </div>
            <!-- Coverage Details -->
            <div v-if="line.isExpanded && line.coverageData" class="coverage-details-line">
              <!-- Conditional Predicates -->
              <template v-if="line.coverageData.conditional_predicates.length > 0">
                        <div v-for="(point, idx) in line.coverageData.conditional_predicates"
                          :key="`cond-${line.lineNumber}-${idx}`" class="coverage-item">
                          <span class="signal-path" :title="point.compressed_name">
                            {{ point.origin_name || point.compressed_name }} (Predicate)
                          </span>
                          <span class="coverage-tags condition-details">
                            <a-tag :color="getConditionTagColor(point.hit_true)">True</a-tag>
                            <span class="detail-count">({{ formatCount(point.count_true) }}, {{
                              formatPercent(point.true_percentage) }})</span>
                            <a-tag :color="getConditionTagColor(point.hit_false)">False</a-tag>
                            <span class="detail-count">({{ formatCount(point.count_false) }}, {{
                              formatPercent(point.false_percentage) }})</span>
                            <span class="coverage-percent" :style="getNodeStyle(point.coverage_percent)">({{
                              formatCoverage(point.coverage_percent) }})</span>
                          </span>
                        </div>
                      </template>
              <!-- Mux Conditions -->
              <template v-if="line.coverageData.mux_conditions.length > 0">
                        <div v-for="(point, idx) in line.coverageData.mux_conditions" :key="`mux-${line.lineNumber}-${idx}`"
                          class="coverage-item">
                          <span class="signal-path" :title="point.compressed_name">
                            {{ point.origin_name || point.compressed_name }} (Mux)
                          </span>
                          <span class="coverage-tags condition-details">
                            <a-tag :color="getConditionTagColor(point.hit_true)">True</a-tag>
                            <span class="detail-count">({{ formatCount(point.count_true) }}, {{
                              formatPercent(point.true_percentage) }})</span>
                            <a-tag :color="getConditionTagColor(point.hit_false)">False</a-tag>
                            <span class="detail-count">({{ formatCount(point.count_false) }}, {{
                              formatPercent(point.false_percentage) }})</span>
                            <span class="coverage-percent" :style="getNodeStyle(point.coverage_percent)">({{
                              formatCoverage(point.coverage_percent) }})</span>
                          </span>
                        </div>
                      </template>
              <!-- Register Coverage -->
              <template v-if="line.coverageData.register_coverage.length > 0">
                        <div v-for="(point, idx) in line.coverageData.register_coverage" :key="`reg-${line.lineNumber}-${idx}`"
                          class="coverage-item register-item">
                          <div class="register-summary-line">
                            <a-button v-if="point.bit_details && point.bit_details.length > 0" type="text" size="small"
                              class="bit-expand-button"
                              @click.stop="toggleRegisterLineExpansion(line.lineNumber, point.compressed_name)"
                              :title="isRegisterLineExpanded(line.lineNumber, point.compressed_name) ? 'Collapse bit details' : 'Expand bit details'">
                              <template #icon>
                                <component :is="isRegisterLineExpanded(line.lineNumber, point.compressed_name) ? MinusSquareOutlined : PlusSquareOutlined" />
                              </template>
              </a-button>
              <span v-else class="bit-expand-placeholder"></span>
              <span class="signal-path register-signal-path" :title="point.compressed_name">
                {{ point.origin_name || point.compressed_name }} (Register)
              </span>
              <span class="coverage-tags register-details-wrapper">
                <span class="register-summary">
                  (W: {{ point.width }}, Hit: {{ point.bins_hit }}/{{ point.bins_total }})
                </span>
                <span class="coverage-percent" :style="getNodeStyle(point.coverage_percent)">
                  ({{ formatCoverage(point.coverage_percent) }})
                </span>
              </span>
            </div>
            <!-- Expanded Register Bit Details -->
            <div v-if="isRegisterLineExpanded(line.lineNumber, point.compressed_name)" class="bit-details">
              <div v-for="bit in point.bit_details" :key="bit.bit" class="bit-item">
                <span class="bit-number">Bit {{ bit.bit }}:</span>
                <span class="bit-status">{{ bit.status }}</span>
                <span v-if="bit.missing" class="bit-missing">(Missing: {{ bit.missing }})</span>
                <span class="bit-counts">
                  (0: {{ formatCount(bit.count_zero) }} [{{ formatPercent(bit.zero_percentage) }}] /
                  1: {{ formatCount(bit.count_one) }} [{{ formatPercent(bit.one_percentage) }}])
                </span>
              </div>
            </div>
          </div>
          </template>
      </div>
  </div>
  </pre>
                <!-- Empty Content Message -->
                <div v-else-if="!isSourceLoading" class="empty-placeholder">
                  <a-empty description="Source content for this file is empty or unavailable." />
                </div>
              </div>
              <!-- Placeholder when no file is selected -->
              <div v-else class="empty-placeholder">
                <CodeOutlined style="font-size: 24px; margin-bottom: 10px;" />
                <p v-if="selectedInstanceNode">Select a source file (
                  <FileOutlined />) from the selected instance.
                </p>
                <p v-else>Select an instance (
                  <FolderOutlined />) and then a source file (
                  <FileOutlined />) from the tree.
                </p>
              </div>
            </a-spin>
          </div>
        </a-col>
      </a-row>
    </template>
    <!-- Placeholder when no report/tree is loaded -->
    <template v-else>
      <div class="empty-placeholder">
        <a-empty description="Please load a parsed Coverage Report file first to build the instance/source tree." />
      </div>
    </template>
  </a-card>
</template>

<style scoped>
/* --- Layout --- */
.source-viewer-card {
  width: 100%;
  margin-top: 16px;
  height: 75vh;
  /* Fixed viewport height */
  display: flex;
  flex-direction: column;
}

.source-viewer-card :deep(.ant-card-body) {
  padding: 0;
  flex-grow: 1;
  /* Allows card body to fill card */
  display: flex;
  overflow: hidden;
  /* Prevent content breaking out */
}

.source-viewer-layout {
  width: 100%;
  height: 100%;
  /* Fill card body */
  display: flex;
}

.tree-column,
.source-column {
  height: 100%;
  display: flex;
  flex-direction: column;
  overflow: hidden;
  /* Prevent columns from overflowing layout */
}

.tree-column {
  border-right: 1px solid #f0f0f0;
}

.tree-container,
.source-container {
  flex-grow: 1;
  /* Allow containers to fill columns */
  overflow: auto;
  /* Enable scrolling within containers */
  position: relative;
  /* Needed for spinner positioning */
}

.tree-container {
  padding: 10px;
}

/* Ensure spinner and its content take full height */
.source-container :deep(.ant-spin-nested-loading),
.source-container :deep(.ant-spin-container) {
  height: 100%;
  display: flex;
  flex-direction: column;
}

.source-container :deep(.ant-spin-container) {
  flex-grow: 1;
}

/* Area holding header and source code/error */
.source-content-area {
  display: flex;
  flex-direction: column;
  height: 100%;
  /* Try to fill container */
  flex-grow: 1;
  /* Added to fill spin container */
}

/* --- Tree Styling --- */
:deep(.ant-tree .ant-tree-node-content-wrapper) {
  padding: 1px 5px;
  /* Compact padding */
  line-height: 1.8;
  display: flex !important;
  /* Ensure flex alignment */
  align-items: center !important;
}

:deep(.ant-tree .ant-tree-node-content-wrapper:hover) {
  background-color: #e6f7ff;
}

:deep(.ant-tree .ant-tree-node-selected .ant-tree-node-content-wrapper) {
  background-color: #bae7ff;
}

.tree-node-title-wrapper {
  display: flex;
  align-items: center;
  gap: 4px;
  overflow: hidden;
  /* Prevent overflow */
  width: 100%;
}

.node-title-text {
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  flex-grow: 1;
}

.node-module-name {
  color: #888;
  font-size: 0.9em;
  margin-left: 4px;
}

/* --- Source Header --- */
.source-header {
  padding: 8px 16px;
  background-color: #fafafa;
  border-bottom: 1px solid #f0f0f0;
  flex-shrink: 0;
  /* Prevent shrinking */
  display: flex;
  align-items: center;
  justify-content: space-between;
  gap: 15px;
  overflow: hidden;
  /* Hide potential overflow */
  white-space: nowrap;
  /* Prevent wrapping */
}

.header-info {
  font-size: 0.9em;
  color: #555;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
}

.instance-info {
  flex-shrink: 1;
}

/* Allow instance info to shrink */
.file-info {
  color: #888;
  flex-shrink: 0;
  text-align: right;
}

/* --- Error Display --- */
.error-display {
  padding: 16px;
  flex-shrink: 0;
  /* Prevent shrinking */
}

.error-display p {
  margin-bottom: 8px;
}

/* --- Source Code Viewer --- */
.source-code-viewer {
  flex-grow: 1;
  /* Fill available space */
  padding: 10px 0 10px 10px;
  margin: 0;
  font-family: 'SFMono-Regular', Consolas, 'Liberation Mono', Menlo, Courier, monospace;
  font-size: 13px;
  line-height: 1.6;
  /* Slightly increased for readability */
  white-space: pre;
  background-color: #fff;
  overflow: auto;
  /* Ensure scrolling if content exceeds area */
}

/* --- Line Styling --- */
.line-container {
  display: flex;
  flex-direction: column;
  /* Stack content and details */
  position: relative;
  /* For hover/highlight effects */
}

.line-container:hover {
  background-color: #f7f7f7;
}

.line-content-wrapper {
  display: flex;
  align-items: center;
  min-height: calc(13px * 1.6);
  /* Match line height */
}

.line-coverage-percent {
  width: 55px;
  /* Fixed width for alignment */
  text-align: right;
  padding-right: 8px;
  font-size: 0.85em;
  color: #888;
  user-select: none;
  flex-shrink: 0;
  white-space: nowrap;
}

.line-toggle {
  width: 24px;
  /* Fixed width for alignment */
  flex-shrink: 0;
  display: flex;
  align-items: center;
  justify-content: center;
}

.line-toggle .ant-btn {
  padding: 0 4px;
  height: 18px;
  line-height: 1;
  display: inline-flex;
  align-items: center;
}

.toggle-placeholder {
  /* For alignment when no button exists */
  display: inline-block;
  width: 20px;
  /* Approx button width */
  height: 18px;
}

.line-number {
  width: 40px;
  /* Fixed width for alignment */
  text-align: right;
  padding-right: 10px;
  color: #aaa;
  user-select: none;
  flex-shrink: 0;
}

.line-content {
  flex-grow: 1;
  padding-right: 16px;
  /* Space at the end of the line */
}

.line-highlighted>.line-content-wrapper {
  background-color: #fffbe6;
}

/* --- Coverage Details --- */
.coverage-details-line {
  display: flex;
  /* Use flexbox */
  flex-direction: column;
  /* Stack items vertically */
  gap: 6px;
  /* Space BETWEEN flex items (coverage-item) */
  padding: 6px 10px;
  /* Padding INSIDE the border */
  background-color: #f9f9f9;
  border: 1px solid #eee;
  border-left: 3px solid #1890ff;
  margin-left: calc(55px + 24px + 40px + 10px);
  /* Align margin with start of code content */
  margin-right: 16px;
  /* Align end with code content padding */
  margin-top: 2px;
  /* Space below code line */
  margin-bottom: 4px;
  /* Space below details block */
  border-radius: 3px;
  font-size: 0.9em;
}

.coverage-item {
  display: flex;
  flex-direction: column;
  align-items: flex-start;
  gap: 4px;
  /* Space between signal path and tags within this item */
  /* Add padding and border *only if* it's not the last item */
  padding-bottom: 6px;
  border-bottom: 1px dashed #eee;
}

.coverage-item:last-child {
  padding-bottom: 0;
  /* No space needed after the last item's content */
  border-bottom: none;
  /* No border after the last item */
}

/* .register-item inherits .coverage-item styles */

.register-summary-line {
  display: flex;
  align-items: center;
  width: 100%;
  gap: 4px;
  /* Space within the summary line */
}

.signal-path {
  font-weight: bold;
  color: #333;
  white-space: normal;
  /* Allow wrapping */
  overflow-wrap: break-word;
  /* Break long words */
  line-height: 1.3;
  /* Tighter line height for wrapped signals */
}

.register-signal-path {
  flex-grow: 1;
}

/* Allow path to take space */

.coverage-tags {
  display: inline-flex;
  align-items: center;
  flex-wrap: nowrap;
  /* Prevent tags wrapping */
  gap: 4px;
}

.condition-details .ant-tag {
  margin: 0;
  padding: 0 5px;
  font-size: 0.9em;
}

.detail-count {
  font-size: 0.9em;
  color: #555;
  margin-right: 6px;
  white-space: nowrap;
}

.coverage-percent {
  font-size: 0.9em;
  margin-left: 4px;
  white-space: nowrap;
}

.register-details-wrapper {
  margin-left: auto;
  /* Push register summary to the right */
  padding-left: 10px;
  flex-shrink: 0;
  /* Prevent shrinking */
  display: inline-flex;
  /* Keep items inline */
  align-items: center;
  gap: 4px;
}

.register-summary {
  color: #555;
  white-space: nowrap;
  font-size: 0.95em;
  /* Slightly larger for clarity */
}

.bit-expand-button {
  padding: 0 4px;
  color: #555;
  flex-shrink: 0;
}

.bit-expand-button:hover {
  color: #1890ff;
  background-color: transparent !important;
}

.bit-expand-placeholder {
  display: inline-block;
  width: 20px;
  /* Match button approx width */
  height: 18px;
  flex-shrink: 0;
}

/* --- Bit Details (Expanded) --- REVISED AGAIN --- */
.bit-details {
  display: flex;
  /* Use Flexbox */
  flex-direction: column;
  /* Stack bit items vertically */
  gap: 4px;
  /* Space BETWEEN bit items */
  width: 100%;
  margin-top: 6px;
  /* Space above this box */
  padding: 6px 8px;
  /* Padding INSIDE this box */
  background-color: #f0f0f0;
  border: 1px solid #e0e0e0;
  border-radius: 3px;
  font-size: 0.95em;
  /* Relative to parent */
}

.bit-item {
  /* Remove margin-bottom, gap handles spacing */
  display: flex;
  align-items: baseline;
  gap: 6px;
  flex-wrap: wrap;
  /* Add padding and border *only if* it's not the last item */
  padding-bottom: 4px;
  /* Smaller padding for bit items */
  border-bottom: 1px dashed #ccc;
}

.bit-item:last-child {
  padding-bottom: 0;
  /* No space needed after the last item's content */
  border-bottom: none;
  /* No border after the last item */
}

.bit-number {
  font-weight: bold;
  color: #333;
  flex-shrink: 0;
}

.bit-status {
  color: #777;
  flex-shrink: 0;
}

.bit-missing {
  color: #cc0000;
  font-style: italic;
  flex-shrink: 0;
}

.bit-counts {
  color: #444;
  font-size: 0.9em;
  white-space: nowrap;
}

/* --- Empty States --- */
.empty-placeholder {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  height: 100%;
  padding: 20px;
  text-align: center;
  color: #888;
  flex-grow: 1;
  /* Fill available space */
}
</style>