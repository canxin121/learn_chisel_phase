<script setup lang="ts">
// 导入组件和图标
import { ref, computed } from 'vue';
import { Tag as ATag, Tabs as ATabs, TabPane as ATabPane, Button as AButton, Card as ACard, DirectoryTree as ADirectoryTree, Tooltip as ATooltip, message } from 'ant-design-vue'; // 导入 ADirectoryTree 和 ATooltip
import { PlusSquareOutlined, MinusSquareOutlined, CodeOutlined } from '@ant-design/icons-vue'; // Added CodeOutlined
import { formatCoverage, getNodeStyle, getConditionTagColor, getBitTagColor, formatCount, formatPercent } from '../utils/coverageUtils';
import { useCoverageStore } from "../stores/coverageStore";
// 导入新的类型定义
import type {
  ConditionCoverageNode,
  RegisterCoverageNode,
  RegisterBitCoverage,
  ConditionCoveragePoint, // Added
  RegisterCoveragePoint // Added
} from '../types/CoverageReport';
import type { SignalInfo } from '../types/CoverageInfo'; // Added

// 定义统一树节点类型
interface UnifiedTreeNode {
  key: string;
  title: string; // instance_name or origin_name 
  children?: UnifiedTreeNode[];
  nodeType: 'instance' | 'conditionPoint' | 'muxPoint' | 'registerPoint';
  isLeaf: boolean;
  fullInstancePath: string; // Added: e.g., "Top.sub.leaf_inst" or "Top__I__Sub" for SourceViewer matching
  parentInstanceModuleName?: string; // Added: Module name of the direct parent instance (for points)

  // Instance specific
  instance_name?: string; // Name of this instance if nodeType is 'instance'
  module_name?: string;   // Module type of this instance if nodeType is 'instance'

  // Point specific data (copied for direct access in template)
  compressed_name?: string; // Added: compressed_name for points, crucial for linking
  origin_name?: string;
  coverage_percent?: number;
  // Condition/Mux
  hit_true?: boolean;
  count_true?: number;
  true_percentage?: number;
  hit_false?: boolean;
  count_false?: number;
  false_percentage?: number;
  total_updates?: number;
  // Register
  width?: number;
  bins_hit?: number;
  bins_total?: number;
  bit_details?: RegisterBitCoverage[];
}

const coverageStore = useCoverageStore();
const expandedRegisterPoints = ref<Set<string>>(new Set()); // Stores UnifiedTreeNode.key for register points
const expandedPredicateKeys = ref<string[]>([]);
const expandedMuxKeys = ref<string[]>([]);
const expandedRegisterKeys = ref<string[]>([]);

const toggleRegisterPointExpansion = (nodeKey: string) => {
  if (expandedRegisterPoints.value.has(nodeKey)) {
    expandedRegisterPoints.value.delete(nodeKey);
  } else {
    expandedRegisterPoints.value.add(nodeKey);
  }
  expandedRegisterPoints.value = new Set(expandedRegisterPoints.value);
};

const isRegisterPointExpanded = (nodeKey: string): boolean => {
  return expandedRegisterPoints.value.has(nodeKey);
};

const getUncoveredBits = (nodeData: UnifiedTreeNode): RegisterBitCoverage[] => {
  if (nodeData.nodeType === 'registerPoint' && nodeData.bit_details) {
    return nodeData.bit_details.filter((bit: RegisterBitCoverage) => !bit.covered);
  }
  return [];
};

// --- Data Transformation ---
let treeNodeKeyCounter = 0;
function generateUniqueKey(prefix: string): string {
  const sanitizedPrefix = prefix.replace(/[^a-zA-Z0-9_.]/g, '_'); // Allow dots for instance paths
  return `${sanitizedPrefix}_${treeNodeKeyCounter++}`;
}

function transformSingleConditionNode(
  node: ConditionCoverageNode,
  parentFullInstancePath: string, // Changed from parentPathKey
  pointType: 'conditionPoint' | 'muxPoint'
): UnifiedTreeNode {
  // Use a more stable path construction, e.g. using __I__ as in SourceViewer
  const currentFullInstancePath = parentFullInstancePath
    ? `${parentFullInstancePath}__I__${node.instance_name}`
    : node.instance_name;
  const instanceKey = generateUniqueKey(`instance_${currentFullInstancePath}`);

  const instanceUnifiedNode: UnifiedTreeNode = {
    key: instanceKey,
    title: node.instance_name,
    nodeType: 'instance',
    instance_name: node.instance_name,
    module_name: node.module_name,
    fullInstancePath: currentFullInstancePath, // Set full instance path
    isLeaf: false,
    children: [],
  };

  if (node.coverage_points) {
    node.coverage_points.forEach((point: ConditionCoveragePoint) => { // Added type for point
      const pointKey = generateUniqueKey(`point_${instanceKey}_${point.origin_name || point.compressed_name}`);
      instanceUnifiedNode.children?.push({
        key: pointKey,
        title: point.origin_name || point.compressed_name, // Use compressed_name as fallback for title
        nodeType: pointType,
        isLeaf: true,
        fullInstancePath: currentFullInstancePath, // Path of the instance containing this point
        parentInstanceModuleName: node.module_name, // Module name of the instance
        compressed_name: point.compressed_name, // Store compressed_name
        origin_name: point.origin_name,
        coverage_percent: point.coverage_percent,
        hit_true: point.hit_true,
        count_true: point.count_true,
        true_percentage: point.true_percentage,
        hit_false: point.hit_false,
        count_false: point.count_false,
        false_percentage: point.false_percentage,
        total_updates: point.total_updates,
      });
    });
  }

  if (node.sub_instances) {
    node.sub_instances.forEach(subInstance => {
      instanceUnifiedNode.children?.push(transformSingleConditionNode(subInstance, currentFullInstancePath, pointType));
    });
  }
  return instanceUnifiedNode;
}

function transformSingleRegisterNode(
  node: RegisterCoverageNode,
  parentFullInstancePath: string // Changed from parentPathKey
): UnifiedTreeNode {
  const currentFullInstancePath = parentFullInstancePath
    ? `${parentFullInstancePath}__I__${node.instance_name}`
    : node.instance_name;
  const instanceKey = generateUniqueKey(`reginstance_${currentFullInstancePath}`);

  const instanceUnifiedNode: UnifiedTreeNode = {
    key: instanceKey,
    title: node.instance_name,
    nodeType: 'instance',
    instance_name: node.instance_name,
    module_name: node.module_name,
    fullInstancePath: currentFullInstancePath, // Set full instance path
    isLeaf: false,
    children: [],
  };

  if (node.coverage_points) {
    node.coverage_points.forEach((point: RegisterCoveragePoint) => { // Added type for point
      const pointKey = generateUniqueKey(`regpoint_${instanceKey}_${point.origin_name || point.compressed_name}`);
      instanceUnifiedNode.children?.push({
        key: pointKey,
        title: point.origin_name || point.compressed_name, // Use compressed_name as fallback
        nodeType: 'registerPoint',
        isLeaf: true,
        fullInstancePath: currentFullInstancePath, // Path of the instance
        parentInstanceModuleName: node.module_name, // Module name of the instance
        compressed_name: point.compressed_name, // Store compressed_name
        origin_name: point.origin_name,
        coverage_percent: point.coverage_percent,
        width: point.width,
        bins_hit: point.bins_hit,
        bins_total: point.bins_total,
        bit_details: point.bit_details,
      });
    });
  }

  if (node.sub_instances) {
    node.sub_instances.forEach(subInstance => {
      instanceUnifiedNode.children?.push(transformSingleRegisterNode(subInstance, currentFullInstancePath));
    });
  }
  return instanceUnifiedNode;
}

const transformedConditionalTreeData = computed(() => {
  treeNodeKeyCounter = 0;
  if (!coverageStore.coverageReport?.conditional_coverage_tree) return [];
  // Pass empty string for root parentFullInstancePath
  return [transformSingleConditionNode(coverageStore.coverageReport.conditional_coverage_tree, '', 'conditionPoint')];
});

const transformedMuxTreeData = computed(() => {
  treeNodeKeyCounter = 0;
  if (!coverageStore.coverageReport?.mux_condition_tree) return [];
  // Pass empty string for root parentFullInstancePath
  return [transformSingleConditionNode(coverageStore.coverageReport.mux_condition_tree, '', 'muxPoint')];
});

const transformedRegisterTreeData = computed(() => {
  treeNodeKeyCounter = 0;
  if (!coverageStore.coverageReport?.register_coverage_tree) return [];
  // Pass empty string for root parentFullInstancePath
  return [transformSingleRegisterNode(coverageStore.coverageReport.register_coverage_tree, '')];
});


const handleNavigateToSource = (pointNode: UnifiedTreeNode, event?: Event) => {
  if (!pointNode.compressed_name || !pointNode.fullInstancePath || !pointNode.parentInstanceModuleName) {
    message.error("Navigation data incomplete for this point.");
    console.error("Navigation data incomplete:", pointNode);
    return;
  }

  const signalInfo: SignalInfo | undefined = coverageStore.getSignalInfoByCompressedName(pointNode.compressed_name);

  if (!signalInfo || signalInfo.file_path == null || signalInfo.line == null || signalInfo.column == null) {
    message.warn(`Source location not found for signal: ${pointNode.origin_name || pointNode.compressed_name}. Ensure Coverage Info file is processed and contains source mapping.`);
    console.warn("Signal info or source location not found:", signalInfo, "for compressed_name:", pointNode.compressed_name);
    return;
  }

  coverageStore.navigateToSource({
    signalKey: pointNode.compressed_name,
    instancePath: pointNode.fullInstancePath, // This is already the full path like "Top__I__Sub"
    sourceLocation: {
      filePath: signalInfo.file_path,
      line: signalInfo.line,
      column: signalInfo.column,
    },
    moduleName: pointNode.parentInstanceModuleName, // Module type of the instance containing the signal
    signalOriginName: pointNode.origin_name,
  });

  // Blur the clicked button to avoid focus issues with hidden tab panes
  if (event && event.currentTarget instanceof HTMLElement) {
    event.currentTarget.blur();
  }
};

</script>

<template>
  <a-card class="coverage-details-card" title="Coverage Details">
    <a-tabs v-model:activeKey="coverageStore.activeTabKey">
      <a-tab-pane key="predicates" tab="Conditional Predicates">
        <div v-if="transformedConditionalTreeData.length > 0" class="tree-container">
          <a-directory-tree :tree-data="transformedConditionalTreeData as any" show-line block-node :show-icon="false"
            :field-names="{ children: 'children', title: 'title', key: 'key' }"
            v-model:expandedKeys="expandedPredicateKeys">
            <template #title="nodeData">
              <!-- nodeData is UnifiedTreeNode -->
              <div class="node-content-wrapper-custom">
                <template v-if="nodeData.nodeType === 'instance'">
                  <span class="node-text instance-name">{{ nodeData.title }}</span>
                  <span v-if="nodeData.module_name" class="originating-module-indicator">
                    ({{ nodeData.module_name }})
                  </span>
                </template>
                <template v-else-if="nodeData.nodeType === 'conditionPoint'">
                  <a-tooltip title="Go to Source">
                    <a-button type="text" size="small" class="nav-button"
                      @click.stop="handleNavigateToSource(nodeData as UnifiedTreeNode, $event)">
                      <template #icon>
                        <CodeOutlined />
                      </template>
                    </a-button>
                  </a-tooltip>
                  <span class="node-text ">{{ nodeData.title }}</span>
                  <span v-if="nodeData.origin_name && nodeData.origin_name !== nodeData.title"
                    class="origin-name-indicator">
                    ({{ nodeData.origin_name }})
                  </span>
                  <span class="coverage-value" :style="getNodeStyle(nodeData.coverage_percent!)">
                    {{ formatCoverage(nodeData.coverage_percent!) }}
                  </span>
                  <span class="node-details">
                    <a-tag :color="getConditionTagColor(nodeData.hit_true!)">
                      True: {{ formatCount(nodeData.count_true!) }} ({{ formatPercent(nodeData.true_percentage!) }})
                    </a-tag>
                    <a-tag :color="getConditionTagColor(nodeData.hit_false!)">
                      False: {{ formatCount(nodeData.count_false!) }} ({{ formatPercent(nodeData.false_percentage!) }})
                    </a-tag>
                    <span class="detail-count">Total: {{ formatCount(nodeData.total_updates!) }}</span>
                  </span>
                </template>
              </div>
            </template>
          </a-directory-tree>
        </div>
        <div v-else class="empty-tree-msg">No predicate coverage data available.</div>
      </a-tab-pane>

      <a-tab-pane key="mux" tab="Mux Conditions">
        <div v-if="transformedMuxTreeData.length > 0" class="tree-container">
          <a-directory-tree :tree-data="transformedMuxTreeData as any" show-line block-node :show-icon="false"
            :field-names="{ children: 'children', title: 'title', key: 'key' }" v-model:expandedKeys="expandedMuxKeys">
            <template #title="nodeData">
              <!-- nodeData is UnifiedTreeNode -->
              <div class="node-content-wrapper-custom">
                <template v-if="nodeData.nodeType === 'instance'">
                  <span class="node-text instance-name">{{ nodeData.title }}</span>
                  <span v-if="nodeData.module_name" class="originating-module-indicator">
                    ({{ nodeData.module_name }})
                  </span>
                </template>
                <template v-else-if="nodeData.nodeType === 'muxPoint'">
                  <a-tooltip title="Go to Source">
                    <a-button type="text" size="small" class="nav-button"
                      @click.stop="handleNavigateToSource(nodeData as UnifiedTreeNode, $event)">
                      <template #icon>
                        <CodeOutlined />
                      </template>
                    </a-button>
                  </a-tooltip>
                  <span class="node-text ">{{ nodeData.title }}</span>
                  <span v-if="nodeData.origin_name && nodeData.origin_name !== nodeData.title"
                    class="origin-name-indicator">
                    ({{ nodeData.origin_name }})
                  </span>
                  <span class="coverage-value" :style="getNodeStyle(nodeData.coverage_percent!)">
                    {{ formatCoverage(nodeData.coverage_percent!) }}
                  </span>
                  <span class="node-details">
                    <a-tag :color="getConditionTagColor(nodeData.hit_true!)">
                      True: {{ formatCount(nodeData.count_true!) }} ({{ formatPercent(nodeData.true_percentage!) }})
                    </a-tag>
                    <a-tag :color="getConditionTagColor(nodeData.hit_false!)">
                      False: {{ formatCount(nodeData.count_false!) }} ({{ formatPercent(nodeData.false_percentage!) }})
                    </a-tag>
                    <span class="detail-count">Total: {{ formatCount(nodeData.total_updates!) }}</span>
                  </span>
                </template>
              </div>
            </template>
          </a-directory-tree>
        </div>
        <div v-else class="empty-tree-msg">No Mux condition coverage data available.</div>
      </a-tab-pane>

      <a-tab-pane key="registers" tab="Register Bits">
        <div v-if="transformedRegisterTreeData.length > 0" class="tree-container">
          <a-directory-tree :tree-data="transformedRegisterTreeData as any" show-line block-node :show-icon="false"
            :field-names="{ children: 'children', title: 'title', key: 'key' }"
            v-model:expandedKeys="expandedRegisterKeys">
            <template #title="nodeData">
              <!-- nodeData is UnifiedTreeNode -->
              <div class="node-content-wrapper-custom">
                <template v-if="nodeData.nodeType === 'instance'">
                  <span class="node-text instance-name">{{ nodeData.title }}</span>
                  <span v-if="nodeData.module_name" class="originating-module-indicator">
                    ({{ nodeData.module_name }})
                  </span>
                </template>
                <template v-else-if="nodeData.nodeType === 'registerPoint'">
                  <div class="register-point-summary-wrapper">
                    <div class="register-point-summary">
                      <a-tooltip title="Go to Source">
                        <a-button type="text" size="small" class="nav-button register-nav-button"
                          @click.stop="handleNavigateToSource(nodeData as UnifiedTreeNode, $event)">
                          <template #icon>
                            <CodeOutlined />
                          </template>
                        </a-button>
                      </a-tooltip>
                      <a-button v-if="nodeData.bit_details?.length! > 0" type="text" size="small"
                        @click.stop="toggleRegisterPointExpansion(nodeData.key)" class="bit-expand-button">
                        <template #icon>
                          <PlusSquareOutlined v-if="!isRegisterPointExpanded(nodeData.key)" />
                          <MinusSquareOutlined v-else />
                        </template>
                      </a-button>
                      <span v-else class="bit-expand-placeholder"></span>

                      <span class="node-text ">{{ nodeData.title }}</span>
                      <span v-if="nodeData.origin_name && nodeData.origin_name !== nodeData.title"
                        class="origin-name-indicator">
                        ({{ nodeData.origin_name }})
                      </span>
                      <span class="coverage-value" :style="getNodeStyle(nodeData.coverage_percent!)">
                        {{ formatCoverage(nodeData.coverage_percent!) }}
                      </span>
                      <span class="node-details register-summary-details">
                        <a-tag color="blue">Width: {{ nodeData.width }}</a-tag>
                        <a-tag :color="nodeData.bins_hit === nodeData.bins_total ? 'success' : 'error'">
                          Bits Hit: {{ nodeData.bins_hit }}/{{ nodeData.bins_total }}
                        </a-tag>
                        <span v-if="getUncoveredBits(nodeData).length > 0" class="missing-indicator">
                          (Missing Bits: {{getUncoveredBits(nodeData).map(b => b.bit).join(', ')}})
                        </span>
                      </span>
                    </div>
                    <div v-if="nodeData.bit_details?.length! > 0 && isRegisterPointExpanded(nodeData.key)"
                      class="uncovered-bit-details">
                      <div v-for="bit in nodeData.bit_details" :key="bit.bit" class="uncovered-bit-item">
                        <span class="bit-number">Bit {{ bit.bit }}:</span>
                        <span class="bit-status">
                          <a-tag :color="getBitTagColor(bit.hit_zero)">Zero: {{ formatCount(bit.count_zero) }} ({{
                            formatPercent(bit.zero_percentage) }})</a-tag>
                          <a-tag :color="getBitTagColor(bit.hit_one)">One: {{ formatCount(bit.count_one) }} ({{
                            formatPercent(bit.one_percentage) }})</a-tag>
                        </span>
                        <span v-if="!bit.covered" class="bit-missing">Missing: {{ bit.missing }}</span>
                        <span class="bit-counts">Total Updates: {{ formatCount(bit.total_updates) }}</span>
                      </div>
                    </div>
                  </div>
                </template>
              </div>
            </template>
          </a-directory-tree>
        </div>
        <div v-else class="empty-tree-msg">No register coverage data available.</div>
      </a-tab-pane>
    </a-tabs>
  </a-card>
</template>

<style scoped>
.coverage-details-card :deep(.ant-card-body) {
  padding: 0;
}

.coverage-details-card :deep(.ant-tabs-content-holder) {
  padding: 16px 24px;
}

.coverage-details-card :deep(.ant-tabs-tab) {
  padding: 12px 16px;
}

.tree-container {
  max-height: 55vh;
  overflow: auto;
  border: 1px solid #f0f0f0;
  border-radius: 4px;
  padding: 8px;
}

.empty-tree-msg {
  text-align: center;
  color: #aaa;
  padding: 20px;
}

/* New main wrapper for content within a tree node's title slot */
.node-content-wrapper-custom {
  display: flex;
  align-items: center;
  width: 100%;
  flex-wrap: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  line-height: 1.5;
  /* Changed from normal to 1.5 for better vertical alignment consistency */
  gap: 4px;
  /* Add gap for items like nav button and text */
}

.nav-button {
  padding: 0 4px;
  border: none;
  box-shadow: none;
  background: transparent;
  color: #555;
  flex-shrink: 0;
}

.nav-button:hover {
  color: #1890ff;
  background: #e6f7ff;
}

.register-nav-button {
  /* Specific adjustments if needed, for now inherits .nav-button */
  /* May need to adjust margin if it interferes with expand button */
  margin-right: -4px;
  /* Pull closer to text if expand button is present */
}

.register-point-summary-wrapper {
  display: flex;
  flex-direction: column;
  width: 100%;
}

.node-text {
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  flex-shrink: 1;
  min-width: 50px;
}

.instance-name {
  font-weight: 500;
}

.coverage-value {
  margin-left: 8px;
  margin-right: 8px;
  white-space: nowrap;
  flex-shrink: 0;
}

.node-details {
  margin-left: auto;
  padding-left: 10px;
  display: inline-flex;
  align-items: center;
  flex-wrap: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
}

.detail-count {
  margin-left: 8px;
  font-size: 0.85em;
  color: #555;
  white-space: nowrap;
}

.register-summary-details .ant-tag {
  margin-right: 4px;
}

.missing-indicator {
  margin-left: 8px;
  font-size: 0.85em;
  color: #ff4d4f;
  white-space: nowrap;
}

.origin-name-indicator {
  font-style: italic;
  color: #888;
  margin-left: 4px;
  font-size: 0.9em;
  white-space: nowrap;
}

.register-point-summary {
  display: flex;
  align-items: center;
  width: 100%;
}

:deep(.ant-tree-node-content-wrapper) {
  display: flex;
  align-items: center;
  width: 100%;
  padding: 2px 0px;
  /* Adjusted padding for row spacing */
  line-height: 1.5;
  /* More standard line-height */
}

:deep(.ant-tree-node-content-wrapper:hover) {
  background-color: #f0f5ff;
}

.originating-module-indicator {
  font-style: italic;
  color: #777;
  margin-left: 5px;
  white-space: nowrap;
  flex-shrink: 0;
}

.bit-expand-button {
  margin-right: 4px;
  /* Keep margin for expand button */
}

.bit-expand-placeholder {
  display: inline-block;
  width: 20px;
  margin-right: 4px;
  flex-shrink: 0;
}

.uncovered-bit-details {
  margin-left: 24px;
  padding: 4px 0;
  border-left: 1px dashed #d9d9d9;
  font-size: 0.9em;
  width: calc(100% - 24px);
  box-sizing: border-box;
}

.uncovered-bit-item {
  display: flex;
  align-items: center;
  padding: 2px 8px;
  white-space: nowrap;
}

.uncovered-bit-item:last-child {
  margin-bottom: 0;
}

.uncovered-bit-details .bit-number {
  font-weight: bold;
  margin-right: 8px;
  min-width: 50px;
}

.uncovered-bit-details .bit-status {
  margin-right: 8px;
}

.uncovered-bit-details .bit-status .ant-tag {
  margin-right: 4px;
}

.uncovered-bit-details .bit-missing {
  color: #ff4d4f;
  margin-right: 8px;
}

.uncovered-bit-details .bit-counts {
  color: #555;
  font-size: 0.9em;
}

:deep(.ant-tree-treenode) {
  /* MODIFICATION START */
  display: flex;
  align-items: center;
  /* MODIFICATION END */
  padding-top: 1px;
  padding-bottom: 1px;
}
</style>