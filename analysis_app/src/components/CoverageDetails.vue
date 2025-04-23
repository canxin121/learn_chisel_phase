<script setup lang="ts">
import { Tag as ATag, Tabs as ATabs, TabPane as ATabPane } from 'ant-design-vue';
import { FileTextOutlined } from "@ant-design/icons-vue";
import type { TreeNode } from '../types/TreeNode';
import { formatCoverage, getNodeStyle, getConditionTagColor, getBitTagColor, formatCount, formatPercent } from '../utils/coverageUtils';
import { useCoverageStore } from "../stores/coverageStore";

const coverageStore = useCoverageStore();

const onIconClick = (nodeData: TreeNode) => {
  if (nodeData.sourceLocation) {
    console.log("CoverageDetails: Calling store.selectNode for", nodeData.key);
    coverageStore.selectNode(nodeData);
  } else {
    console.log("Icon clicked on node without source location:", nodeData.key);
  }
};
</script>

<template>
  <a-card class="coverage-details-card" title="Coverage Details">
    <a-tabs v-model:activeKey="coverageStore.activeTabKey">
      <a-tab-pane key="predicates" tab="Conditional Predicates">
        <div class="tree-container">
          <a-directory-tree :showLine="true" v-if="coverageStore.predicateTreeData.length > 0"
            :tree-data="coverageStore.predicateTreeData" :default-expand-all="false" selectable>
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.title }}</span>
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>
                <FileTextOutlined v-if="nodeData.sourceLocation" class="source-link-icon" title="Go to source"
                  @click.stop="onIconClick(nodeData)" />
                <span v-if="nodeData.type === 'predicate' && nodeData.details" class="node-details condition-details">
                  <a-tag :color="getConditionTagColor(nodeData.details.hit_true)">True</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.details.count_true) }}, {{
                    formatPercent(nodeData.details.true_percentage) }})</span>
                  <a-tag :color="getConditionTagColor(nodeData.details.hit_false)">False</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.details.count_false) }}, {{
                    formatPercent(nodeData.details.false_percentage) }})</span>
                </span>
              </span>
            </template>
          </a-directory-tree>
          <p v-else class="empty-tree-msg">No Conditional Predicate coverage points found.</p>
        </div>
      </a-tab-pane>

      <a-tab-pane key="mux" tab="Mux Conditions">
        <div class="tree-container">
          <a-directory-tree v-if="coverageStore.muxTreeData.length > 0" :tree-data="coverageStore.muxTreeData"
            :default-expand-all="false" selectable>
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.title }}</span>
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>
                <FileTextOutlined v-if="nodeData.sourceLocation" class="source-link-icon" title="Go to source"
                  @click.stop="onIconClick(nodeData)" />
                <span v-if="nodeData.type === 'mux' && nodeData.details" class="node-details condition-details">
                  <a-tag :color="getConditionTagColor(nodeData.details.hit_true)">True</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.details.count_true) }}, {{
                    formatPercent(nodeData.details.true_percentage) }})</span>
                  <a-tag :color="getConditionTagColor(nodeData.details.hit_false)">False</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.details.count_false) }}, {{
                    formatPercent(nodeData.details.false_percentage) }})</span>
                </span>
              </span>
            </template>
          </a-directory-tree>
          <p v-else class="empty-tree-msg">No Mux Condition coverage points found.</p>
        </div>
      </a-tab-pane>

      <a-tab-pane key="registers" tab="Register Bits">
        <div class="tree-container">
          <a-directory-tree v-if="coverageStore.registerTreeData.length > 0" :tree-data="coverageStore.registerTreeData"
            :default-expand-all="false" selectable>
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.title }}</span>
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>
                <FileTextOutlined v-if="nodeData.sourceLocation" class="source-link-icon" title="Go to source"
                  @click.stop="onIconClick(nodeData)" />
                <span v-if="nodeData.type === 'register' && nodeData.details"
                  class="node-details register-summary-details">
                  (W: {{ nodeData.details.width }}, Hit: {{ nodeData.details.bins_hit }}/{{
                    nodeData.details.bins_total }})
                </span>
                <span v-if="nodeData.type === 'register_bit' && nodeData.details" class="node-details bit-details">
                  <a-tag :color="getBitTagColor(nodeData.details.hit_zero)">0</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.details.count_zero) }}, {{
                    formatPercent(nodeData.details.zero_percentage) }})</span>
                  <a-tag :color="getBitTagColor(nodeData.details.hit_one)">1</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.details.count_one) }}, {{
                    formatPercent(nodeData.details.one_percentage) }})</span>
                  <span v-if="nodeData.details.missing" class="missing-indicator"> ({{ nodeData.details.missing }})
                  </span>
                </span>
              </span>
            </template>
          </a-directory-tree>
          <p v-else class="empty-tree-msg">No Register coverage points found.</p>
        </div>
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

.tree-node-title {
  display: flex;
  align-items: center;
  flex-wrap: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  width: 100%;
}

.node-text {
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  flex-shrink: 1;
  min-width: 50px;
}

.coverage-value {
  margin-left: 8px;
  white-space: nowrap;
  flex-shrink: 0;
}

.node-details {
  margin-left: 10px;
  display: inline-flex;
  align-items: center;
  gap: 4px;
  white-space: nowrap;
  flex-shrink: 0;
}

.condition-details .ant-tag,
.bit-details .ant-tag {
  margin: 0;
  padding: 0 5px;
  line-height: 18px;
  font-size: 0.85em;
}

.detail-count {
  font-size: 0.85em;
  color: #555;
  margin-right: 6px;
  white-space: nowrap;
}

.register-summary-details {
  color: #888;
  font-size: 0.9em;
  white-space: nowrap;
  flex-shrink: 0;
}

.missing-indicator {
  margin-left: 5px;
  font-size: 0.8em;
  color: #ff4d4f;
  font-style: italic;
  white-space: nowrap;
  flex-shrink: 0;
}

:deep(.ant-tree-node-content-wrapper) {
  padding: 2px 5px;
  border-radius: 3px;
  line-height: 1.8;
  display: flex;
  align-items: center;
  width: 100%;
  overflow: hidden;
}

:deep(.ant-tree-node-content-wrapper:hover) {
  background-color: #e6f7ff;
}

.source-link-icon {
  margin-left: 8px;
  color: #1890ff;
  cursor: pointer;
  flex-shrink: 0;
}

.source-link-icon:hover {
  color: #40a9ff;
}
</style>
