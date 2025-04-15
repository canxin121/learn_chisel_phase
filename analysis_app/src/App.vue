<script setup lang="ts">
import { ref, computed } from "vue";
import type { CSSProperties } from 'vue';
import { message, type UploadChangeParam, type UploadFile, DirectoryTree as ADirectoryTree } from 'ant-design-vue';
import {
  CoverageReport,
  ConditionCoveragePoint,
  RegisterCoveragePoint,
  RegisterBitCoverage,
} from "./types/CoverageReport";
import { UploadOutlined } from "@ant-design/icons-vue";

interface TreeNode {
  title: string;
  key: string;
  children?: TreeNode[];
  coverage?: number;
  type: 'root' | 'instance' | 'predicate' | 'mux' | 'register' | 'register_bit';
  details?: ConditionCoveragePoint | RegisterCoveragePoint | RegisterBitCoverage;
  isLeaf?: boolean;
}

// --- 状态变量 ---
const coverageReport = ref<CoverageReport | null>(null);
// 分离树数据
const predicateTreeData = ref<TreeNode[]>([]);
const muxTreeData = ref<TreeNode[]>([]);
const registerTreeData = ref<TreeNode[]>([]);
const fileList = ref<UploadFile[]>([]);
const isLoading = ref(false);
const activeTabKey = ref('predicates'); // 默认激活的 Tab

// --- 计算属性 (总体摘要保持不变) ---
const overallCoverage = computed(() => coverageReport.value?.summary?.overall_coverage_percent ?? 0);
const totalBins = computed(() => coverageReport.value?.summary?.total_bins ?? 0);
const hitBins = computed(() => coverageReport.value?.summary?.total_bins_hit ?? 0);

// --- 计算属性 (各部分摘要) ---
const predicateStats = computed(() => {
  let total = 0;
  let hit = 0;
  coverageReport.value?.conditional_predicates.forEach(p => {
    total += p.bins_total;
    hit += p.bins_hit;
  });
  return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 };
});
const muxStats = computed(() => {
  let total = 0;
  let hit = 0;
  coverageReport.value?.mux_conditions.forEach(p => {
    total += p.bins_total;
    hit += p.bins_hit;
  });
  return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 };
});
const registerStats = computed(() => {
  let total = 0;
  let hit = 0;
  coverageReport.value?.register_coverage.forEach(p => {
    total += p.bins_total;
    hit += p.bins_hit;
  });
  return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 };
});

// --- 常量 (保持不变) ---
const InstanceSeparator = "__I__";
const SubfieldSeparator = "__S__";
const LocalMarker = "local";
const CondPrefix = "_cond_pred_";
const MuxPrefix = "_mux_cond_";
const RegPrefix = "_reg_signals_";

// --- 辅助函数：解析信号名称 (保持不变) ---
function parseSignalName(rawName: string): { path: string[]; signal: string; type: 'predicate' | 'mux' | 'register' | 'unknown' } {
  let name = rawName;
  let type: 'predicate' | 'mux' | 'register' | 'unknown' = 'unknown';

  if (name.startsWith(CondPrefix)) {
    name = name.substring(CondPrefix.length);
    type = 'predicate';
  } else if (name.startsWith(MuxPrefix)) {
    name = name.substring(MuxPrefix.length);
    type = 'mux';
  } else if (name.startsWith(RegPrefix)) {
    name = name.substring(RegPrefix.length);
    type = 'register';
  }

  const parts = name.split(InstanceSeparator);
  const localIndex = parts.indexOf(LocalMarker);

  let path: string[] = [];
  let signal: string = "";

  if (localIndex !== -1) {
    path = parts.slice(0, localIndex); // 路径是 local 之前的部分
    const signalParts = parts.slice(localIndex + 1);
    signal = signalParts.join(InstanceSeparator).replace(new RegExp(SubfieldSeparator, 'g'), '.');
  } else {
    if (parts.length > 0) {
      path = [parts[0]];
      signal = parts.slice(1).join(InstanceSeparator).replace(new RegExp(SubfieldSeparator, 'g'), '.');
      if (!signal) signal = path[0];
    } else {
      signal = name.replace(new RegExp(SubfieldSeparator, 'g'), '.');
    }
  }

  if (path.length === 0 && signal.includes(InstanceSeparator)) {
    const signalParts = signal.split(InstanceSeparator);
    path = [signalParts[0]];
    signal = signalParts.slice(1).join(InstanceSeparator);
  }

  path = path.filter(p => p.length > 0);
  if (path.length === 0 && parts.length > 1 && type !== 'unknown') {
    path = [parts[0]];
    signal = parts.slice(1).join(InstanceSeparator).replace(new RegExp(SubfieldSeparator, 'g'), '.');
  } else if (path.length === 0 && parts.length === 1) {
    path = [parts[0]];
    signal = parts[0];
  }

  return { path, signal, type };
}

// --- 辅助函数：构建覆盖率树 (修改为填充三个不同的树) ---
function buildCoverageTrees(report: CoverageReport): { predicates: TreeNode[], mux: TreeNode[], registers: TreeNode[] } {
  const predicateRootMap = new Map<string, TreeNode>();
  const muxRootMap = new Map<string, TreeNode>();
  const registerRootMap = new Map<string, TreeNode>();

  function findOrCreateNode(path: string[], targetMap: Map<string, TreeNode>): TreeNode {
    if (path.length === 0) {
      throw new Error("Path cannot be empty when finding/creating node");
    }

    const currentLevelName = path[0];
    let node = targetMap.get(currentLevelName);

    if (!node) {
      const key = path.join(InstanceSeparator);
      node = {
        title: currentLevelName,
        key: key,
        children: [],
        type: 'instance',
        isLeaf: false,
      };
      targetMap.set(currentLevelName, node);
    }

    if (path.length === 1) {
      return node;
    } else {
      if (!node.children) node.children = [];
      let childMap = new Map(node.children.map(child => [child.title, child]));
      const nextNode = findOrCreateNode(path.slice(1), childMap);
      if (!node.children.some(child => child.key === nextNode.key)) {
        node.children.push(nextNode);
      }
      const childIndex = node.children.findIndex(child => child.key === nextNode.key);
      if (childIndex !== -1) {
        node.children[childIndex] = nextNode;
      }

      return nextNode;
    }
  }

  report.conditional_predicates.forEach(point => {
    const { path, signal } = parseSignalName(point.name);
    if (path.length === 0 || !signal) { return; }
    const parentNode = findOrCreateNode(path, predicateRootMap);
    if (!parentNode.children) parentNode.children = [];
    parentNode.children.push({
      title: signal, key: point.name, coverage: point.coverage_percent,
      type: 'predicate', details: point, isLeaf: true,
    });
  });

  report.mux_conditions.forEach(point => {
    const { path, signal } = parseSignalName(point.name);
    if (path.length === 0 || !signal) { return; }
    const parentNode = findOrCreateNode(path, muxRootMap);
    if (!parentNode.children) parentNode.children = [];
    parentNode.children.push({
      title: signal, key: point.name, coverage: point.coverage_percent,
      type: 'mux', details: point, isLeaf: true,
    });
  });

  report.register_coverage.forEach(point => {
    const { path, signal } = parseSignalName(point.name);
    if (path.length === 0 || !signal) { return; }
    const parentNode = findOrCreateNode(path, registerRootMap);
    if (!parentNode.children) parentNode.children = [];

    const registerNode: TreeNode = {
      title: signal, key: point.name, coverage: point.coverage_percent,
      type: 'register', details: point, isLeaf: false, children: [],
    };

    point.bit_details.forEach(bit => {
      const bitCoverage = (bit.hit_zero ? 50 : 0) + (bit.hit_one ? 50 : 0);
      registerNode.children?.push({
        title: `Bit ${bit.bit}`, key: `${point.name}_bit_${bit.bit}`, coverage: bitCoverage,
        type: 'register_bit', details: bit, isLeaf: true,
      });
    });
    if (registerNode.children?.length === 0) registerNode.isLeaf = true;
    parentNode.children.push(registerNode);
  });

  return {
    predicates: Array.from(predicateRootMap.values()),
    mux: Array.from(muxRootMap.values()),
    registers: Array.from(registerRootMap.values())
  };
}

// --- 文件上传处理 ---
const handleFileUpload = (info: UploadChangeParam) => {
  const file = info.file.originFileObj || info.file as unknown as File;

  if (file && typeof file.name === 'string' && typeof file.size === 'number') {
    isLoading.value = true;
    coverageReport.value = null;
    predicateTreeData.value = [];
    muxTreeData.value = [];
    registerTreeData.value = [];
    activeTabKey.value = 'predicates';

    console.log("Found file object, attempting to read:", file.name, "Size:", file.size);

    const reader = new FileReader();
    reader.onload = (e) => {
      try {
        const jsonContent = e.target?.result as string;
        if (!jsonContent) { return; }
        console.log("File content read successfully, attempting to parse JSON...");
        const reportData: CoverageReport = JSON.parse(jsonContent);
        console.log("JSON parsed successfully.");
        coverageReport.value = reportData;
        const trees = buildCoverageTrees(reportData);
        predicateTreeData.value = trees.predicates;
        muxTreeData.value = trees.mux;
        registerTreeData.value = trees.registers;
        console.log("Coverage trees built successfully.");
        message.success(`${file.name} uploaded and parsed successfully!`);
      } catch (error: any) {
        console.error("Failed to parse JSON file:", error);
        message.error(`Failed to parse ${file.name}: ${error.message || 'Please ensure the file is a valid JSON format.'}`);
        coverageReport.value = null;
        predicateTreeData.value = [];
        muxTreeData.value = [];
        registerTreeData.value = [];
      } finally {
        fileList.value = [];
        isLoading.value = false;
        console.log("File list cleared.");
      }
    };
    reader.onerror = (error) => {
      console.error("FileReader onerror event triggered:", error);
      message.error(`Error reading ${file.name}.`);
      coverageReport.value = null;
      predicateTreeData.value = [];
      muxTreeData.value = [];
      registerTreeData.value = [];
      isLoading.value = false;
      fileList.value = [];
      console.log("File list cleared (onerror).");
    };
    if (file instanceof Blob) {
      reader.readAsText(file);
    } else {
      isLoading.value = false;
      fileList.value = [];
    }

  } else if (info.file.status === 'removed') {
    console.log("File removed:", info.file.name);
  } else {
    isLoading.value = false;
    fileList.value = [];
  }
};

// --- beforeUpload (保持不变) ---
const beforeUpload = (file: File) => {
  console.log("beforeUpload triggered for:", file.name, "Type:", file.type);
  const isJson = file.type === 'application/json';
  if (!isJson) {
    message.error(`${file.name} is not a valid JSON file!`);
    console.warn("File type is not application/json, preventing upload.");
    return false;
  }
  console.log("File type is JSON, allowing onChange handling.");
  return false;
};

// --- formatCoverage (保持不变) ---
const formatCoverage = (coverage?: number): string => {
  if (coverage === undefined || coverage === null) return "-";
  return `${coverage.toFixed(1)}%`;
};

// --- getNodeStyle (更新颜色逻辑) ---
const getNodeStyle = (coverage?: number): CSSProperties => {
  if (coverage === undefined || coverage === null || coverage === 100) {
    return {}; // Default color for 100% or undefined
  }
  let color = '';
  if (coverage < 50) {
    color = 'hsl(0, 80%, 50%)'; // Red
  } else if (coverage < 80) {
    color = 'hsl(39, 100%, 50%)'; // Orange
  } else { // 80 <= coverage < 100
    color = 'hsl(60, 80%, 45%)'; // Yellow
  }
  return {
    color: color,
    fontWeight: 'bold'
  };
};

// --- 辅助函数：获取条件 Tag 颜色 ---
const getConditionTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'default';
};
// --- 辅助函数：获取寄存器位 Tag 颜色 ---
const getBitTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'default';
};

</script>

<template>
  <a-layout class="layout">
    <a-page-header class="page-header" title="Coverage Report Viewer"
      sub-title="Upload a coverage report file for analysis" />
    <a-layout-content class="content">
      <a-spin :spinning="isLoading" tip="Parsing file...">
        <a-space direction="vertical" size="large" style="width: 100%">
          <a-card>
            <a-upload :file-list="fileList" :before-upload="beforeUpload" @change="handleFileUpload" accept=".json">
              <a-button type="primary">
                <template #icon>
                  <UploadOutlined />
                </template>
                Select Coverage Report File
              </a-button>
            </a-upload>
          </a-card>

          <a-card v-if="coverageReport" title="Overall Coverage Summary">
            <a-row :gutter="16">
              <a-col :span="4">
                <a-statistic title="Overall" :value="overallCoverage" :precision="2" suffix="%" />
              </a-col>
              <a-col :span="4">
                <a-statistic title="Conditional Predicates" :value="predicateStats.coverage" :precision="1"
                  suffix="%" />
              </a-col>
              <a-col :span="4">
                <a-statistic title="Mux Conditions" :value="muxStats.coverage" :precision="1" suffix="%" />
              </a-col>
              <a-col :span="4">
                <a-statistic title="Register Bits" :value="registerStats.coverage" :precision="1" suffix="%" />
              </a-col>
              <a-col :span="4">
                <a-statistic title="Total Hit Bins" :value="hitBins" />
              </a-col>
              <a-col :span="4">
                <a-statistic title="Total Bins" :value="totalBins" />
              </a-col>
            </a-row>
          </a-card>

          <a-card v-if="coverageReport" class="coverage-details-card" title="Coverage Details">
            <a-tabs v-model:activeKey="activeTabKey">
              <a-tab-pane key="predicates" tab="Conditional Predicates">
                <a-row :gutter="16" style="margin-bottom: 16px;">
                  <a-col :span="8">
                    <a-statistic title="Predicate Coverage" :value="predicateStats.coverage" :precision="1"
                      suffix="%" />
                  </a-col>
                  <a-col :span="8">
                    <a-statistic title="Hit Bins" :value="predicateStats.hit" />
                  </a-col>
                  <a-col :span="8">
                    <a-statistic title="Total Bins" :value="predicateStats.total" />
                  </a-col>
                </a-row>
                <div class="tree-container">
                  <a-directory-tree :showLine="true" v-if="predicateTreeData.length > 0" :tree-data="predicateTreeData"
                    :default-expand-all="false">
                    <template #title="{ data: nodeData }">
                      <span>
                        <span :style="getNodeStyle(nodeData.coverage)">{{ nodeData.title }}</span>
                        <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                          :style="getNodeStyle(nodeData.coverage)">
                          ({{ formatCoverage(nodeData.coverage) }})
                        </span>
                        <span v-if="nodeData.type === 'predicate'" class="node-details condition-details">
                          <a-tag :color="getConditionTagColor(nodeData.details?.hit_true)">True</a-tag>
                          <a-tag :color="getConditionTagColor(nodeData.details?.hit_false)">False</a-tag>
                        </span>
                      </span>
                    </template>
                  </a-directory-tree>
                  <p v-else class="empty-tree-msg">No Conditional Predicate coverage points found.</p>
                </div>
              </a-tab-pane>

              <a-tab-pane key="mux" tab="Mux Conditions">
                <a-row :gutter="16" style="margin-bottom: 16px;">
                  <a-col :span="8">
                    <a-statistic title="Mux Condition Coverage" :value="muxStats.coverage" :precision="1" suffix="%" />
                  </a-col>
                  <a-col :span="8">
                    <a-statistic title="Hit Bins" :value="muxStats.hit" />
                  </a-col>
                  <a-col :span="8">
                    <a-statistic title="Total Bins" :value="muxStats.total" />
                  </a-col>
                </a-row>
                <div class="tree-container">
                  <a-directory-tree v-if="muxTreeData.length > 0" :tree-data="muxTreeData" :default-expand-all="false">
                    <template #title="{ data: nodeData }">
                      <span>
                        <span :style="getNodeStyle(nodeData.coverage)">{{ nodeData.title }}</span>
                        <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                          :style="getNodeStyle(nodeData.coverage)">
                          ({{ formatCoverage(nodeData.coverage) }})
                        </span>
                        <span v-if="nodeData.type === 'mux'" class="node-details condition-details">
                          <a-tag :color="getConditionTagColor(nodeData.details?.hit_true)">True</a-tag>
                          <a-tag :color="getConditionTagColor(nodeData.details?.hit_false)">False</a-tag>
                        </span>
                      </span>
                    </template>
                  </a-directory-tree>
                  <p v-else class="empty-tree-msg">No Mux Condition coverage points found.</p>
                </div>
              </a-tab-pane>

              <a-tab-pane key="registers" tab="Register Bits">
                <a-row :gutter="16" style="margin-bottom: 16px;">
                  <a-col :span="8">
                    <a-statistic title="Register Bit Coverage" :value="registerStats.coverage" :precision="1"
                      suffix="%" />
                  </a-col>
                  <a-col :span="8">
                    <a-statistic title="Hit Bins" :value="registerStats.hit" />
                  </a-col>
                  <a-col :span="8">
                    <a-statistic title="Total Bins" :value="registerStats.total" />
                  </a-col>
                </a-row>
                <div class="tree-container">
                  <a-directory-tree v-if="registerTreeData.length > 0" :tree-data="registerTreeData"
                    :default-expand-all="false">
                    <template #title="{ data: nodeData }">
                      <span>
                        <span :style="getNodeStyle(nodeData.coverage)">{{ nodeData.title }}</span>
                        <span v-if="nodeData.coverage !== undefined" class="coverage-value"
                          :style="getNodeStyle(nodeData.coverage)">
                          ({{ formatCoverage(nodeData.coverage) }})
                        </span>
                        <span v-if="nodeData.type === 'register'" class="node-details register-summary-details">
                          (W: {{ nodeData.details?.width }}, Hit: {{ nodeData.details?.bins_hit }}/{{
                            nodeData.details?.bins_total }})
                        </span>
                        <span v-if="nodeData.type === 'register_bit'" class="node-details bit-details">
                          <a-tag :color="getBitTagColor(nodeData.details?.hit_zero)">0</a-tag>
                          <a-tag :color="getBitTagColor(nodeData.details?.hit_one)">1</a-tag>
                        </span>
                      </span>
                    </template>
                  </a-directory-tree>
                  <p v-else class="empty-tree-msg">No Register coverage points found.</p>
                </div>
              </a-tab-pane>
            </a-tabs>
          </a-card>

          <a-card v-else-if="!isLoading && coverageReport === null">
            <p style="text-align: center; color: #888;">Please upload a coverage report file to view the analysis.</p>
          </a-card>
        </a-space>
      </a-spin>
    </a-layout-content>
  </a-layout>
</template>

<style scoped>
.layout {
  min-height: 100vh;
  background-color: #f0f2f5;
}

.page-header {
  background-color: #fff;
  border-bottom: 1px solid #e8e8e8;
  padding: 16px 24px;
}

.content {
  padding: 24px;
  margin: 0;
}

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

.coverage-value {
  margin-left: 8px;
}

.node-details {
  margin-left: 10px;
  display: inline-flex;
  align-items: center;
  gap: 4px;
}

.condition-details .ant-tag,
.bit-details .ant-tag {
  margin: 0;
  padding: 0 5px;
  line-height: 18px;
  font-size: 0.85em;
}

.register-summary-details {
  color: #888;
}

:deep(.ant-tree-node-content-wrapper) {
  white-space: normal !important;
  overflow: visible !important;
  padding: 2px 5px;
  border-radius: 3px;
}

:deep(.ant-tree-node-content-wrapper:hover) {
  background-color: #e6f7ff;
}
</style>
<style>
body {
  font-family: Inter, Avenir, Helvetica, Arial, sans-serif;
  font-size: 14px;
  line-height: 1.6;
  background-color: #f0f2f5;
  margin: 0;
}
</style>