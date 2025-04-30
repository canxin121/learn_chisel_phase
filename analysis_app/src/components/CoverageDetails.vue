<script setup lang="ts">
import { Tag as ATag, Tabs as ATabs, TabPane as ATabPane } from 'ant-design-vue';
import { formatCoverage, getNodeStyle, getConditionTagColor, getBitTagColor, formatCount, formatPercent } from '../utils/coverageUtils';
import { useCoverageStore } from "../stores/coverageStore";

const coverageStore = useCoverageStore();
</script>

<template>
  <a-card class="coverage-details-card" title="Coverage Details">
    <a-tabs v-model:activeKey="coverageStore.activeTabKey">
      <!-- Conditional Predicates Tab -->
      <a-tab-pane key="predicates" tab="Conditional Predicates">
        <div class="tree-container">
          <a-directory-tree :showLine="true" v-if="coverageStore.predicateTreeData.length > 0"
            :tree-data="coverageStore.predicateTreeData" :default-expand-all="false" selectable
            :fieldNames="{ title: 'label', key: 'key', children: 'children' }">
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <!-- Node Label (Instance or Signal Name) -->
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.label }}</span>

                <!-- Coverage Value (Aggregated or Direct) -->
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>

                <!-- Signal Specific Details (ONLY for Signal nodes) -->
                <span v-if="nodeData.isSignal && nodeData.data?.type === 'predicate' && nodeData.data"
                  class="node-details condition-details">
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_true)">True</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_true) }}, {{
                    formatPercent(nodeData.data.true_percentage) }})</span>
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_false)">False</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_false) }}, {{
                    formatPercent(nodeData.data.false_percentage) }})</span>
                </span>

                <!-- Originating Module Indicator (ONLY for Signal nodes) -->
                <span v-if="nodeData.isSignal && nodeData.originatingModule && nodeData.originatingModule !== '?'"
                  class="originating-module-indicator" :title="`Originating Module: ${nodeData.originatingModule}`">
                  M:{{ nodeData.originatingModule }}
                </span>
              </span>
            </template>
          </a-directory-tree>
          <p v-else class="empty-tree-msg">No Conditional Predicate coverage points found.</p>
        </div>
      </a-tab-pane>

      <!-- Mux Conditions Tab -->
      <a-tab-pane key="mux" tab="Mux Conditions">
        <div class="tree-container">
          <a-directory-tree v-if="coverageStore.muxTreeData.length > 0" :tree-data="coverageStore.muxTreeData"
            :default-expand-all="false" selectable :fieldNames="{ title: 'label', key: 'key', children: 'children' }">
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <!-- Node Label (Instance or Signal Name) -->
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.label }}</span>

                <!-- Coverage Value (Aggregated or Direct) -->
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>

                <!-- Signal Specific Details (ONLY for Signal nodes) -->
                <span v-if="nodeData.isSignal && nodeData.data?.type === 'mux' && nodeData.data"
                  class="node-details condition-details">
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_true)">True</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_true) }}, {{
                    formatPercent(nodeData.data.true_percentage) }})</span>
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_false)">False</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_false) }}, {{
                    formatPercent(nodeData.data.false_percentage) }})</span>
                </span>

                <!-- Originating Module Indicator (ONLY for Signal nodes) -->
                <span v-if="nodeData.isSignal && nodeData.originatingModule && nodeData.originatingModule !== '?'"
                  class="originating-module-indicator" :title="`Originating Module: ${nodeData.originatingModule}`">
                  M:{{ nodeData.originatingModule }}
                </span>
              </span>
            </template>
          </a-directory-tree>
          <p v-else class="empty-tree-msg">No Mux Condition coverage points found.</p>
        </div>
      </a-tab-pane>

      <!-- Register Bits Tab -->
      <a-tab-pane key="registers" tab="Register Bits">
        <div class="tree-container">
          <a-directory-tree v-if="coverageStore.registerTreeData.length > 0" :tree-data="coverageStore.registerTreeData"
            :default-expand-all="false" selectable :fieldNames="{ title: 'label', key: 'key', children: 'children' }">
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <!-- Node Label (Instance or Signal Name) -->
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.label }}</span>

                <!-- Coverage Value (Aggregated or Direct) -->
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>

                <!-- Register Summary (ONLY for Signal nodes of type 'register') -->
                <span v-if="nodeData.isSignal && nodeData.data?.type === 'register' && nodeData.data"
                  class="node-details register-summary-details">
                  (W: {{ nodeData.data.width }}, Hit: {{ nodeData.data.bins_hit }}/{{
                    nodeData.data.bins_total }})
                </span>

                <!-- Register Bit Details (ONLY for Signal nodes of type 'register_bit') -->
                <!-- Note: buildCoverageTrees currently creates 'register' type nodes. -->
                <!-- If you want bit-level nodes, buildCoverageTrees needs further modification. -->
                <!-- This span likely won't render with the current buildCoverageTrees. -->
                <span v-if="nodeData.isSignal && nodeData.data?.type === 'register_bit' && nodeData.data"
                  class="node-details bit-details">
                  <a-tag :color="getBitTagColor(nodeData.data.hit_zero)">0</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_zero) }}, {{
                    formatPercent(nodeData.data.zero_percentage) }})</span>
                  <a-tag :color="getBitTagColor(nodeData.data.hit_one)">1</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_one) }}, {{
                    formatPercent(nodeData.data.one_percentage) }})</span>
                  <span v-if="nodeData.data.missing" class="missing-indicator"> ({{ nodeData.data.missing }})
                  </span>
                </span>

                <!-- Originating Module Indicator (ONLY for Signal nodes) -->
                <span v-if="nodeData.isSignal && nodeData.originatingModule && nodeData.originatingModule !== '?'"
                  class="originating-module-indicator" :title="`Originating Module: ${nodeData.originatingModule}`">
                  M:{{ nodeData.originatingModule }}
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
  margin-left: 0;
  margin-right: 8px;
  white-space: nowrap;
  flex-shrink: 0;
}

.node-details {
  margin-left: auto;
  padding-left: 10px;
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
  margin-left: auto;
  padding-left: 10px;
  color: #1890ff;
  cursor: pointer;
  flex-shrink: 0;
}

.source-link-icon:hover {
  color: #40a9ff;
}

.originating-module-indicator {
  margin-left: 10px;
  font-size: 0.8em;
  color: #888;
  background-color: #eee;
  padding: 1px 4px;
  border-radius: 3px;
  white-space: nowrap;
  font-style: italic;
  flex-shrink: 0;
}

/* Ensure enough space for all elements */
:deep(.ant-tree-node-content-wrapper) {
  width: 100%;
  overflow: hidden;
  /* Prevent content overflow */
}
</style>
