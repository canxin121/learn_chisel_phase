<script setup lang="ts">
// 导入组件和图标
import { Tag as ATag, Tabs as ATabs, TabPane as ATabPane, Button as AButton, Tooltip as ATooltip } from 'ant-design-vue';
import { LinkOutlined } from '@ant-design/icons-vue';
import { formatCoverage, getNodeStyle, getConditionTagColor, getBitTagColor, formatCount, formatPercent } from '../utils/coverageUtils';
import { useCoverageStore } from "../stores/coverageStore";
import type { TreeNode } from '../types/TreeNode'; // TreeNode 类型

const coverageStore = useCoverageStore();

// 跳转到源代码
const jumpToSource = (nodeData: TreeNode) => {
  if (nodeData.isSignal && nodeData.sourceLocation && nodeData.data?.instancePath && nodeData.originatingModule) {
    console.log("Requesting navigation to:", nodeData.sourceLocation, "in instance", nodeData.data.instancePath.join('.'));
    coverageStore.navigateToSource({
      signalKey: nodeData.key, // 信号键
      instancePath: nodeData.data.instancePath,
      sourceLocation: nodeData.sourceLocation,
      moduleName: nodeData.originatingModule,
    });
  } else {
    console.warn("Cannot navigate: Missing required data (sourceLocation, instancePath, or originatingModule) for node:", nodeData);
  }
};
</script>

<template>
  <a-card class="coverage-details-card" title="Coverage Details">
    <a-tabs v-model:activeKey="coverageStore.activeTabKey">
      <!-- 条件谓词 -->
      <a-tab-pane key="predicates" tab="Conditional Predicates">
        <div class="tree-container">
          <a-directory-tree :showLine="true" v-if="coverageStore.predicateTreeData.length > 0"
            :tree-data="coverageStore.predicateTreeData" :default-expand-all="false" selectable
            :fieldNames="{ title: 'label', key: 'key', children: 'children' }">
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <!-- 节点标签 -->
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.label }}</span>

                <!-- 覆盖率值 -->
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>

                <!-- 信号详情 -->
                <span v-if="nodeData.isSignal && nodeData.data?.type === 'predicate' && nodeData.data"
                  class="node-details condition-details">
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_true)">True</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_true) }}, {{
                    formatPercent(nodeData.data.true_percentage) }})</span>
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_false)">False</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_false) }}, {{
                    formatPercent(nodeData.data.false_percentage) }})</span>
                </span>

                <!-- 原始模块指示器 -->
                <span v-if="nodeData.isSignal && nodeData.originatingModule && nodeData.originatingModule !== '?'"
                  class="originating-module-indicator" :title="`Originating Module: ${nodeData.originatingModule}`">
                  M:{{ nodeData.originatingModule }}
                </span>

                <!-- 跳转源代码图标 -->
                <span v-if="nodeData.isSignal && nodeData.sourceLocation" class="source-link-icon-wrapper">
                  <a-tooltip title="Jump to Source">
                    <a-button type="text" size="small" @click.stop="jumpToSource(nodeData)" class="source-link-button">
                      <template #icon>
                        <LinkOutlined />
                      </template>
                    </a-button>
                  </a-tooltip>
                </span>
              </span>
            </template>
          </a-directory-tree>
          <p v-else class="empty-tree-msg">No Conditional Predicate coverage points found.</p>
        </div>
      </a-tab-pane>

      <!-- Mux 条件 -->
      <a-tab-pane key="mux" tab="Mux Conditions">
        <div class="tree-container">
          <a-directory-tree v-if="coverageStore.muxTreeData.length > 0" :tree-data="coverageStore.muxTreeData"
            :default-expand-all="false" selectable :fieldNames="{ title: 'label', key: 'key', children: 'children' }">
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <!-- 节点标签 -->
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.label }}</span>

                <!-- 覆盖率值 -->
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>

                <!-- 信号详情 -->
                <span v-if="nodeData.isSignal && nodeData.data?.type === 'mux' && nodeData.data"
                  class="node-details condition-details">
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_true)">True</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_true) }}, {{
                    formatPercent(nodeData.data.true_percentage) }})</span>
                  <a-tag :color="getConditionTagColor(nodeData.data.hit_false)">False</a-tag>
                  <span class="detail-count">({{ formatCount(nodeData.data.count_false) }}, {{
                    formatPercent(nodeData.data.false_percentage) }})</span>
                </span>

                <!-- 原始模块指示器 -->
                <span v-if="nodeData.isSignal && nodeData.originatingModule && nodeData.originatingModule !== '?'"
                  class="originating-module-indicator" :title="`Originating Module: ${nodeData.originatingModule}`">
                  M:{{ nodeData.originatingModule }}
                </span>

                <!-- 跳转源代码图标 -->
                <span v-if="nodeData.isSignal && nodeData.sourceLocation" class="source-link-icon-wrapper">
                  <a-tooltip title="Jump to Source">
                    <a-button type="text" size="small" @click.stop="jumpToSource(nodeData)" class="source-link-button">
                      <template #icon>
                        <LinkOutlined />
                      </template>
                    </a-button>
                  </a-tooltip>
                </span>
              </span>
            </template>
          </a-directory-tree>
          <p v-else class="empty-tree-msg">No Mux Condition coverage points found.</p>
        </div>
      </a-tab-pane>

      <!-- 寄存器位 -->
      <a-tab-pane key="registers" tab="Register Bits">
        <div class="tree-container">
          <a-directory-tree v-if="coverageStore.registerTreeData.length > 0" :tree-data="coverageStore.registerTreeData"
            :default-expand-all="false" selectable :fieldNames="{ title: 'label', key: 'key', children: 'children' }">
            <template #title="{ data: nodeData }">
              <span class="tree-node-title">
                <!-- 节点标签 -->
                <span :style="getNodeStyle(nodeData.coverage)" class="node-text">{{ nodeData.label }}</span>

                <!-- 覆盖率值 -->
                <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                  :style="getNodeStyle(nodeData.coverage)">
                  ({{ formatCoverage(nodeData.coverage) }})
                </span>

                <!-- 寄存器摘要 -->
                <span v-if="nodeData.isSignal && nodeData.data?.type === 'register' && nodeData.data"
                  class="node-details register-summary-details">
                  (W: {{ nodeData.data.width }}, Hit: {{ nodeData.data.bins_hit }}/{{
                    nodeData.data.bins_total }})
                </span>

                <!-- 寄存器位详情 -->
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

                <!-- 原始模块指示器 -->
                <span v-if="nodeData.isSignal && nodeData.originatingModule && nodeData.originatingModule !== '?'"
                  class="originating-module-indicator" :title="`Originating Module: ${nodeData.originatingModule}`">
                  M:{{ nodeData.originatingModule }}
                </span>

                <!-- 跳转源代码图标 -->
                <span v-if="nodeData.isSignal && nodeData.sourceLocation" class="source-link-icon-wrapper">
                  <a-tooltip title="Jump to Source">
                    <a-button type="text" size="small" @click.stop="jumpToSource(nodeData)" class="source-link-button">
                      <template #icon>
                        <LinkOutlined />
                      </template>
                    </a-button>
                  </a-tooltip>
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

.source-link-icon-wrapper {
  margin-left: auto;
  /* 将图标推到最右边 */
  padding-left: 10px;
  /* 与其他详情保持间距 */
  flex-shrink: 0;
  /* 防止收缩 */
  display: inline-flex;
  /* 确保按钮正确显示 */
  align-items: center;
  /* 垂直居中 */
}

.source-link-button {
  color: #1890ff;
  padding: 0 4px;
  /* 调整按钮内边距 */
  height: auto;
  /* 允许按钮根据内容调整高度 */
  line-height: 1;
  /* 确保图标垂直居中 */
}

.source-link-button:hover {
  color: #40a9ff;
  background-color: transparent !important;
  /* 覆盖悬停背景 */
}

/* 如果没有详情或模块指示器，确保图标仍然在右侧 */
.coverage-value+.source-link-icon-wrapper {
  margin-left: auto;
}

/* 调整节点标题以适应图标 */
.tree-node-title {
  /* display: flex; align-items: center; 已存在 */
  justify-content: space-between;
  /* 尝试在元素间分配空间 */
}

.node-text,
.coverage-value {
  flex-shrink: 1;
  /* 允许文本和值收缩 */
}

.node-details,
.originating-module-indicator,
.source-link-icon-wrapper {
  flex-shrink: 0;
  /* 防止这些元素收缩 */
}

.node-details {
  margin-left: 8px;
  /* 覆盖之前的 margin-left: auto */
}

.originating-module-indicator {
  margin-left: 8px;
  /* 覆盖之前的 margin-left: 10px */
}

.source-link-icon-wrapper {
  margin-left: 8px;
  /* 覆盖之前的 margin-left: auto */
}

/* 确保最后一个元素是跳转图标时，它被推到右边 */
.tree-node-title>*:last-child.source-link-icon-wrapper {
  margin-left: auto;
}
</style>
