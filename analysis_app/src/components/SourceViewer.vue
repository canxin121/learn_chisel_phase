<script setup lang="ts">
import { ref, computed, watch, nextTick } from 'vue';
// 如果其他地方不再需要，移除 Select 导入
import { Card as ACard, Row as ARow, Col as ACol, DirectoryTree as ADirectoryTree, Spin as ASpin, Alert as AAlert, Button as AButton, Empty as AEmpty, Tag as ATag } from 'ant-design-vue';
// 如果未使用，移除 SelectValue, DefaultOptionType
// import type { SelectValue, DefaultOptionType } from 'ant-design-vue/es/select';
// 修改：添加了 FileOutlined, FolderOutlined
import { CodeOutlined, LoadingOutlined, PlusSquareOutlined, MinusSquareOutlined, FileOutlined } from "@ant-design/icons-vue";
import { useCoverageStore } from "../stores/coverageStore";
import type { InstanceSignalTree, SignalInfo, SourceFileInfo } from '../types/CoverageInfo';
import type { ConditionCoveragePoint, RegisterCoveragePoint } from '../types/CoverageReport';
import { formatCoverage, getNodeStyle, getConditionTagColor, formatCount, formatPercent, parseSignalName } from '../utils/coverageUtils';
import hljs from 'highlight.js';
import scala from 'highlight.js/lib/languages/scala';
import 'highlight.js/styles/vs.css';

// 注册 Scala 语言
hljs.registerLanguage('scala', scala);

// --- 常量 ---
const INSTANCE_SEPARATOR = '__I__';
const FILE_SEPARATOR = '::FILE::'; // 键中文件路径的分隔符

// --- 类型定义 ---
// 修改：添加 nodeType 和可能的 fileInfo
interface InstanceTreeNode {
  key: string; // 唯一路径: instancePath 或 instancePath::FILE::relativePath
  title: string; // 显示标题
  moduleName?: string; // 模块名称 (主要用于实例节点)
  relativePath?: string; // 相对路径 (仅用于文件节点)
  children?: InstanceTreeNode[];
  isLeaf: boolean;
  nodeType: 'instance' | 'file'; // 区分节点类型
  // 如果以后需要，为实例节点添加对原始节点的引用
  rawInstanceNode?: InstanceSignalTree;
  // 为文件节点直接存储文件信息
  rawFileInfo?: SourceFileInfo;
}

// 行覆盖信息
interface LineCoverageInfo {
  signalInfo: SignalInfo; // 原始信号信息
  coverageData?: ConditionCoveragePoint | RegisterCoveragePoint; // 对应的覆盖率数据
  parsedName: ReturnType<typeof parseSignalName>; // 解析后的信号名称信息
  instancePath: string[]; // 信号所属实例的绝对路径 (即当前选定实例的路径)
}

// --- Store 和 Refs ---
const coverageStore = useCoverageStore();
const sourceCodeContainerRef = ref<HTMLElement | null>(null); // 源代码容器的引用

// --- State ---
const selectedNodeKey = ref<string | null>(null); // 选定节点的键 (实例或文件)
// 移除：selectedInstanceNode 现在用处不大，从 selectedNodeKey/treeData 推导信息
// const selectedInstanceNode = ref<InstanceTreeNode | null>(null);
const displayedSourceContent = ref<string | null>(null); // 显示的源代码内容
const displayedSourceModuleName = ref<string | null>(null); // 显示的源代码所属模块名
const displayedSourceRelativePath = ref<string | undefined>(undefined); // 显示的源代码相对路径
// 移除：availableSourceFiles 不再需要
// const availableSourceFiles = ref<SourceFileInfo[]>([]);
const isSourceLoading = ref(false); // 是否正在加载源代码
const sourceError = ref<string | null>(null); // 源代码加载错误信息
const coverageDataByLine = ref<Record<number, LineCoverageInfo[]>>({}); // 按行号组织的覆盖信息
const expandedLines = ref<Set<number>>(new Set()); // 展开的行号集合

// --- Computed Properties ---

// 修改：转换 InstanceSignalTree 以包含文件节点
const instanceTreeData = computed((): InstanceTreeNode[] => {
  const rootInstance = coverageStore.coverageInfo?.instanceSignalMap;
  if (!rootInstance) return [];

  // 转换单个实例节点
  const transformNode = (node: InstanceSignalTree, path: string[]): InstanceTreeNode => {
    const currentPath = [...path, node.instanceName];
    const instanceKey = currentPath.join(INSTANCE_SEPARATOR);
    const moduleName = node.moduleName;

    const instanceNode: InstanceTreeNode = {
      key: instanceKey,
      title: `${node.instanceName} (${moduleName})`,
      moduleName: moduleName,
      children: [], // 初始化子节点数组
      isLeaf: false, // 初始假设不是叶子节点
      nodeType: 'instance',
      rawInstanceNode: node,
    };

    // 1. 从子实例添加子节点 (递归调用)
    node.subInstances.forEach(sub => {
      instanceNode.children!.push(transformNode(sub, currentPath));
    });

    // 2. 为与 *此* 实例模块关联的源文件添加子节点
    const moduleInfo = coverageStore.coverageInfo?.moduleInfoMap?.[moduleName];
    if (moduleInfo?.sourceFiles) {
      const sourceFilesArray = Object.values(moduleInfo.sourceFiles);
      // 按相对路径字母顺序对文件排序
      sourceFilesArray.sort((a, b) => a.relativePath.localeCompare(b.relativePath));

      sourceFilesArray.forEach(fileInfo => {
        const fileKey = `${instanceKey}${FILE_SEPARATOR}${fileInfo.relativePath}`;
        instanceNode.children!.push({
          key: fileKey,
          title: fileInfo.relativePath, // 将相对路径显示为标题
          relativePath: fileInfo.relativePath,
          moduleName: moduleName, // 存储模块名称以供上下文使用
          isLeaf: true,
          nodeType: 'file',
          rawFileInfo: fileInfo, // 存储原始文件信息
          children: undefined, // 文件始终是叶子节点
        });
      });
    }

    // 3. 确定实例节点本身是否是叶子节点
    instanceNode.isLeaf = !instanceNode.children || instanceNode.children.length === 0;

    return instanceNode;
  };

  // 从根实例开始转换
  return [transformNode(rootInstance, [])];
});

// 高亮源代码
const highlightedSourceCode = computed(() => {
  if (displayedSourceContent.value && !sourceError.value) {
    try {
      // 使用 highlight.js 进行 Scala 代码高亮
      return hljs.highlight(displayedSourceContent.value, { language: 'scala', ignoreIllegals: true }).value;
    } catch (e) {
      console.error("Highlighting error:", e);
      return displayedSourceContent.value; // 高亮失败时回退到纯文本
    }
  }
  return '';
});

// 计算带有覆盖率数据的行
// 修改：过滤 coverageInfos，计算并添加 lineCoveragePercent
const linesWithCoverage = computed(() => {
  if (!highlightedSourceCode.value) return [];
  const lines = highlightedSourceCode.value.split('\n');
  const currentInstancePathString = selectedInstancePathArray.value.join('__I__'); // 只获取一次实例路径字符串

  return lines.map((content, index) => {
    const lineNumber = index + 1;
    // 过滤 coverageInfos:
    // 1. 必须属于当前选定的实例 (使用 selectedInstancePathArray)
    // 2. 必须属于当前显示的源文件
    const coverageInfos = (coverageDataByLine.value[lineNumber] || []).filter(info =>
      info.instancePath.join('__I__') === currentInstancePathString && // <-- 正确的比较
      info.signalInfo.filePath === displayedSourceRelativePath.value // <-- 检查显示的文​​件路径
    );

    // 计算聚合的行覆盖率百分比
    let lineCoveragePercent: number | undefined = undefined;
    if (coverageInfos.length > 0) {
      const validCoverages = coverageInfos
        .map(info => info.coverageData?.coverage_percent)
        .filter((c): c is number => c !== undefined && !isNaN(c)); // 过滤掉 undefined/NaN

      if (validCoverages.length > 0) {
        const sum = validCoverages.reduce((acc, cur) => acc + cur, 0);
        lineCoveragePercent = sum / validCoverages.length;
      } else if (coverageInfos.some(info => info.coverageData !== undefined)) {
        // 如果有覆盖数据但没有有效的百分比 (例如，所有 bin 都是 0/0)，则显示为 0% 覆盖
        lineCoveragePercent = 0;
      }
      // 如果此行没有任何信号的 coverageData，则 lineCoveragePercent 保持 undefined
    }

    return {
      lineNumber,
      content, // 已经是高亮的 HTML
      coverageInfos, // 现在已按实例和文件路径正确过滤
      isExpanded: expandedLines.value.has(lineNumber),
      lineCoveragePercent, // 添加计算出的行覆盖率
    };
  });
});


// 从选定的 *节点* 键获取实例路径数组
const selectedInstancePathArray = computed(() => {
  if (!selectedNodeKey.value) return [];
  // 提取文件分隔符之前的实例部分
  const instanceKey = selectedNodeKey.value.split(FILE_SEPARATOR)[0];
  return instanceKey ? instanceKey.split(INSTANCE_SEPARATOR) : [];
});


// --- Methods ---

// 切换行的展开状态
const toggleLineExpansion = (lineNumber: number) => {
  if (expandedLines.value.has(lineNumber)) {
    expandedLines.value.delete(lineNumber);
  } else {
    expandedLines.value.add(lineNumber);
  }
  expandedLines.value = new Set(expandedLines.value); // 强制响应性
};

// 修改：updateCoverageDataForSelectedInstance - 需要查找原始实例节点数据
// 为选定的实例预计算覆盖率数据 (针对其所有可能的源文件)
const updateCoverageDataForSelectedInstance = () => {
  const data: Record<number, LineCoverageInfo[]> = {};
  const currentInstancePathArray = selectedInstancePathArray.value; // 使用计算属性

  console.log(`[updateCoverageData] Start: Pre-calculating for selected instance path: ${currentInstancePathArray.join('.') || '(none)'}`);

  // 1. 检查先决条件
  if (currentInstancePathArray.length === 0 || !coverageStore.coverageReport || !coverageStore.coverageInfo?.instanceSignalMap) {
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    console.log('[updateCoverageData] Exiting early - missing required data (instance path, report, or root instance map).');
    return;
  }

  // 2. 查找与路径对应的原始 InstanceSignalTree 节点
  // 修改：添加显式类型注解
  let selectedRawNode: InstanceSignalTree | null = coverageStore.coverageInfo.instanceSignalMap;
  // 使用路径遍历树 (跳过路径数组中的根名称进行遍历)
  for (let i = 1; i < currentInstancePathArray.length; i++) {
    const part = currentInstancePathArray[i];
    // selectedRawNode 上的显式类型有助于 TS 在这里工作
    const foundChild: InstanceSignalTree | undefined = selectedRawNode?.subInstances.find(sub => sub.instanceName === part);
    if (foundChild) {
      selectedRawNode = foundChild;
    } else {
      selectedRawNode = null; // 路径无效
      break;
    }
  }

  if (!selectedRawNode) {
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    console.error(`[updateCoverageData] Could not find raw instance node for path: ${currentInstancePathArray.join('.')}`);
    return;
  }

  // 3. 访问报告并迭代信号 (逻辑保持不变)
  const report = coverageStore.coverageReport;
  selectedRawNode.signals.forEach(signalInfo => {
    // 核心匹配逻辑：信号行号有效
    if (signalInfo.line !== null && signalInfo.line !== undefined && signalInfo.line > 0 && signalInfo.filePath) {
      const lineNumber = signalInfo.line;
      const parsed = parseSignalName(signalInfo.name);
      let coverageData: ConditionCoveragePoint | RegisterCoveragePoint | undefined = undefined;

      // 在报告中查找覆盖率数据
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

      const lineInfo: LineCoverageInfo = {
        signalInfo,
        coverageData,
        parsedName: parsed,
        instancePath: currentInstancePathArray, // 使用从 selectedNodeKey 派生的路径
      };

      if (!data[lineNumber]) {
        data[lineNumber] = [];
      }
      data[lineNumber].push(lineInfo);
    }
  });

  // 4. 更新状态
  console.log('[updateCoverageData] End: Pre-calculated data object for selected instance (all files):', JSON.parse(JSON.stringify(data)));
  coverageDataByLine.value = data;
};


// 修改：loadSourceFileContent - 简化，接受 SourceFileInfo
// 加载指定源文件的内容
const loadSourceFileContent = (sourceFileInfo: SourceFileInfo | undefined, moduleName: string | undefined) => {
  isSourceLoading.value = true;
  sourceError.value = null;
  displayedSourceContent.value = null;
  // 尽早设置模块名称
  displayedSourceModuleName.value = moduleName ?? null;

  if (!sourceFileInfo || !moduleName) {
    sourceError.value = "Source file information or module name is missing.";
    console.error(sourceError.value, { sourceFileInfo, moduleName });
    displayedSourceRelativePath.value = undefined;
    isSourceLoading.value = false;
    return;
  }

  displayedSourceRelativePath.value = sourceFileInfo.relativePath; // 更新显示的路径

  console.log(`Loading content for: ${sourceFileInfo.relativePath} in module ${moduleName}`);

  // 检查文件内容是否有效
  if (sourceFileInfo.content === null || sourceFileInfo.content === undefined) {
    sourceError.value = `Source content for file "${sourceFileInfo.relativePath}" in module "${moduleName}" is not available or could not be loaded. Check root directory settings.`;
    console.warn(sourceError.value);
  } else if (sourceFileInfo.content.startsWith("Error reading file:")) {
    // 如果内容是错误消息
    sourceError.value = sourceFileInfo.content;
    console.error(`Error reading file "${sourceFileInfo.relativePath}" for module "${moduleName}": ${sourceFileInfo.content}`);
  } else {
    // 成功加载内容
    displayedSourceContent.value = sourceFileInfo.content;
    // 滚动到顶部
    nextTick(() => {
      sourceCodeContainerRef.value?.scrollTo({ top: 0 });
    });
  }
  isSourceLoading.value = false;
};


// 修改：handleInstanceSelect - 基于从键派生的 nodeType 的逻辑
// 处理实例树节点选择事件
const handleInstanceSelect = (keys: (string | number)[], { node }: { node: any /* AntTreeNode */ }) => {
  if (keys.length === 0 || !node) {
    // --- 取消选择 ---
    selectedNodeKey.value = null;
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = null;
    displayedSourceRelativePath.value = undefined;
    sourceError.value = null;
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    return;
  }

  const selectedKey = String(keys[0]);
  selectedNodeKey.value = selectedKey; // 存储完整的键 (实例或实例::FILE::文件)
  const selectedNodeData = node.dataRef as InstanceTreeNode; // 获取与节点关联的数据

  // --- 检查是否选择了文件节点 ---
  if (selectedNodeData.nodeType === 'file') {
    const relativePath = selectedNodeData.relativePath;
    const moduleName = selectedNodeData.moduleName;
    const fileInfo = selectedNodeData.rawFileInfo;

    if (relativePath && moduleName && fileInfo) {
      console.log(`Selected file node: ${relativePath} in module ${moduleName}`);
      // 实例路径通过计算属性 selectedInstancePathArray 派生
      // 为此文件所属的实例预计算覆盖率
      updateCoverageDataForSelectedInstance();
      // 加载所选文件的内容
      loadSourceFileContent(fileInfo, moduleName);
    } else {
      console.error("Selected file node is missing required data:", selectedNodeData);
      sourceError.value = "Internal error: Selected file node data is incomplete.";
      displayedSourceContent.value = null;
      displayedSourceModuleName.value = null;
      displayedSourceRelativePath.value = undefined;
      coverageDataByLine.value = {};
      expandedLines.value.clear();
    }
  }
  // --- 选择了实例节点 ---
  else if (selectedNodeData.nodeType === 'instance') {
    console.log(`Selected instance node: ${selectedNodeData.title}`);
    // 清除源代码查看器面板，因为只单击了实例 (而不是特定文件)
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = selectedNodeData.moduleName ?? null; // 显示模块名称
    displayedSourceRelativePath.value = undefined; // 未选择特定文件
    sourceError.value = null; // 没有错误，只是未选择文件
    coverageDataByLine.value = {}; // 清除特定于行的数据
    expandedLines.value.clear();
    // 可选地，您可以在此处自动加载第一个文件，但显式选择更清晰。
  } else {
    console.error("Unknown node type selected:", selectedNodeData);
    // 作为后备重置状态
    selectedNodeKey.value = null;
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = null;
    displayedSourceRelativePath.value = undefined;
    sourceError.value = "Internal error: Unknown node type selected.";
    coverageDataByLine.value = {};
    expandedLines.value.clear();
  }
};

// 移除：handleSourceFileChange 不再需要

// --- Watchers ---
// 修改：监视 coverageInfo - 重置 selectedNodeKey
watch(() => coverageStore.coverageInfo, (newInfo, oldInfo) => {
  if (newInfo !== oldInfo) {
    console.log("Coverage info changed, clearing source viewer state.");
    selectedNodeKey.value = null; // 重置选定的节点键
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = null;
    displayedSourceRelativePath.value = undefined;
    sourceError.value = null;
    coverageDataByLine.value = {};
    expandedLines.value.clear();
  }
}, { immediate: false }); // 不立即执行，仅在更改时执行

// 修改：监视 coverageReport - 使用 selectedNodeKey 检查是否需要更新
watch(() => coverageStore.coverageReport, () => {
  console.log("Coverage report changed, updating line coverage data if a file node is selected.");
  // 仅当当前选择了文件节点时才更新
  if (selectedNodeKey.value && selectedNodeKey.value.includes(FILE_SEPARATOR)) {
    updateCoverageDataForSelectedInstance(); // 重新计算预计算的数据
  }
}, { deep: true }); // 深度监视报告对象的变化

</script>

<template>
  <a-card class="source-viewer-card" title="Instance Source Viewer">
    <template v-if="coverageStore.coverageInfo?.instanceSignalMap">
      <a-row :gutter="16" class="source-viewer-layout">
        <!-- 实例树列 -->
        <a-col :span="8" class="tree-column">
          <div class="tree-container">
            <!-- 修改：添加了 showIcon="false" -->
            <a-directory-tree v-if="instanceTreeData.length > 0" :tree-data="instanceTreeData" :showLine="true"
              :showIcon="false" :default-expand-all="false" :selectable="true"
              :selectedKeys="selectedNodeKey ? [selectedNodeKey] : []" @select="handleInstanceSelect" blockNode
              :fieldNames="{ title: 'title', key: 'key', children: 'children' }">
              <!-- 修改：自定义标题插槽以根据 nodeType 添加图标 -->
              <template #title="{ data: nodeData }">
                <span class="tree-node-title-wrapper">
                  <!-- 根据节点类型显示不同图标 (可选) -->
                  <!-- <component :is="nodeData.nodeType === 'file' ? FileOutlined : FolderOutlined" class="node-icon" :class="{ 'file-icon': nodeData.nodeType === 'file' }" /> -->
                  <span class="node-title-text">{{ nodeData.title }}</span>
                </span>
              </template>
            </a-directory-tree>
            <a-empty v-else description="Instance tree is empty or loading..." />
          </div>
        </a-col>

        <!-- 源代码列 -->
        <a-col :span="16" class="source-column">
          <div class="source-container" ref="sourceCodeContainerRef">
            <a-spin :spinning="isSourceLoading" :indicator="LoadingOutlined" size="large" tip="Loading source code...">
              <!-- 仅当选择/显示文件路径时显示内容 -->
              <div v-if="displayedSourceRelativePath">
                <!-- 修改：源文件头部 - 移除了 Select，显示当前文件 -->
                <div class="source-header">
                  <span class="module-name" :title="`Module: ${displayedSourceModuleName ?? 'N/A'}`">
                    Module: <strong>{{ displayedSourceModuleName ?? 'N/A' }}</strong>
                  </span>
                  <span class="file-path" :title="`File: ${displayedSourceRelativePath}`">
                    File: {{ displayedSourceRelativePath }}
                  </span>
                </div>

                <!-- 错误显示 -->
                <div v-if="sourceError" class="error-display">
                  <!-- 现有的错误警报 -->
                  <a-alert type="error"
                    :message="`Error loading source for ${displayedSourceModuleName} (${displayedSourceRelativePath ?? 'path unknown'})`"
                    show-icon>
                    <template #description>
                      <p>{{ sourceError }}</p>
                    </template>
                  </a-alert>
                </div>

                <!-- 源代码 -->
                <pre v-else-if="displayedSourceContent" class="source-code-viewer hljs vs">
                  <!-- 修改：为行覆盖率百分比显示添加 v-if 并添加占位符 -->
                  <div v-for="line in linesWithCoverage" :key="line.lineNumber" class="line-container">
                    <div class="line-content-wrapper">
                      <!-- 行覆盖率百分比 (条件性) -->
                      <span v-if="line.lineCoveragePercent !== undefined" class="line-coverage-percent"
                        :style="getNodeStyle(line.lineCoveragePercent)">
                        {{ formatCoverage(line.lineCoveragePercent) }}
                      </span>
                      <!-- 无覆盖率时用于对齐的占位符 -->
                      <span v-else class="coverage-percent-placeholder"></span>
                      <!-- 切换按钮 -->
                      <span class="line-toggle">
                        <a-button v-if="line.coverageInfos.length > 0" type="text" size="small"
                          @click="toggleLineExpansion(line.lineNumber)"
                          :title="line.isExpanded ? 'Collapse coverage details' : 'Expand coverage details'">
                          <template #icon>
                            <component :is="line.isExpanded ? MinusSquareOutlined : PlusSquareOutlined" />
                          </template>
                        </a-button>
                        <!-- 无覆盖信息时的占位符 -->
                        <span v-else class="toggle-placeholder"></span>
                      </span>
                      <!-- 行号 -->
                      <span class="line-number">{{ line.lineNumber }}</span>
                      <!-- 行内容 (高亮) -->
                      <code class="line-content" v-html="line.content"></code>
                    </div>
                    <!-- 覆盖详情 -->
                    <div v-if="line.isExpanded && line.coverageInfos.length > 0" class="coverage-details-line">
                      <!-- 现有的覆盖项循环 -->
                      <div v-for="(info, index) in line.coverageInfos"
                        :key="`${line.lineNumber}-${index}-${info.signalInfo.name}`" class="coverage-item">
                        <!-- 显示信号名称 -->
                        <span class="signal-path" :title="info.signalInfo.name">
                          {{ info.parsedName.signal }}
                        </span>
                        <!-- 根据类型显示覆盖数据 -->
                        <template v-if="info.coverageData">
                          <!-- 现有的条件/寄存器详情 -->
                           <span v-if="info.parsedName.type === 'predicate' || info.parsedName.type === 'mux'"
                                class="coverage-tags condition-details">
                            <a-tag :color="getConditionTagColor((info.coverageData as ConditionCoveragePoint).hit_true)">True</a-tag>
                            <span class="detail-count">({{ formatCount((info.coverageData as ConditionCoveragePoint).count_true) }}, {{ formatPercent((info.coverageData as ConditionCoveragePoint).true_percentage) }})</span>
                            <a-tag :color="getConditionTagColor((info.coverageData as ConditionCoveragePoint).hit_false)">False</a-tag>
                            <span class="detail-count">({{ formatCount((info.coverageData as ConditionCoveragePoint).count_false) }}, {{ formatPercent((info.coverageData as ConditionCoveragePoint).false_percentage) }})</span>
                            <span class="coverage-percent" :style="getNodeStyle(info.coverageData.coverage_percent)">({{ formatCoverage(info.coverageData.coverage_percent) }})</span>
                          </span>
                          <span v-else-if="info.parsedName.type === 'register'"
                                class="coverage-tags register-details">
                            (W: {{ (info.coverageData as RegisterCoveragePoint).width }}, Hit: {{ (info.coverageData as RegisterCoveragePoint).bins_hit }}/{{ (info.coverageData as RegisterCoveragePoint).bins_total }})
                            <span class="coverage-percent" :style="getNodeStyle(info.coverageData.coverage_percent)">({{ formatCoverage(info.coverageData.coverage_percent) }})</span>
                          </span>
                        </template>
                        <!-- 无覆盖数据时的显示 -->
                        <span v-else class="coverage-tags no-data">
                          (No coverage data in report)
                        </span>
                      </div>
                    </div>
                  </div>
                </pre>

                <!-- 无内容 (但无错误) -->
                <div v-else-if="!isSourceLoading" class="empty-content">
                  <a-empty description="Source content for this module/file is empty or unavailable." />
                </div>
              </div>
              <!-- 未选择文件节点时的占位符 -->
              <div v-else class="empty-selection">
                <CodeOutlined style="font-size: 24px; margin-bottom: 10px;" />
                <!-- 修改：使用 FileOutlined 图标组件 -->
                <p v-if="selectedNodeKey && !selectedNodeKey.includes(FILE_SEPARATOR)">Select a source file (
                  <FileOutlined />) from the tree on the left to view its content.
                </p>
                <p v-else>Select an instance and then a source file (
                  <FileOutlined />) from the tree on the left.
                </p>
              </div>
            </a-spin>
          </div>
        </a-col>
      </a-row>
    </template>
    <!-- 未加载覆盖信息时的占位符 -->
    <template v-else>
      <div class="empty-info">
        <a-empty description="Please load a coverage info file first to build the instance tree." />
      </div>
    </template>

  </a-card>
</template>

<style scoped>
/* --- 整体布局和容器 --- */
.source-viewer-card {
  width: 100%;
  margin-top: 16px;
  height: 75vh; /* 根据需要调整 */
  display: flex;
  flex-direction: column;
}

.source-viewer-card :deep(.ant-card-body) {
  padding: 0;
  flex-grow: 1;
  display: flex;
  overflow: hidden; /* 防止内部布局溢出卡片 */
}

.source-viewer-layout {
  width: 100%;
  height: 100%;
  display: flex;
}

/* --- 左右列 --- */
.tree-column {
  height: 100%;
  border-right: 1px solid #f0f0f0;
  display: flex;
  flex-direction: column;
  overflow: hidden; /* 防止树溢出 */
}

.source-column {
  height: 100%;
  display: flex;
  flex-direction: column;
  overflow: hidden; /* 防止源代码查看器溢出 */
}

/* --- 树容器 --- */
.tree-container {
  padding: 10px;
  overflow: auto; /* 允许树滚动 */
  flex-grow: 1;
}

/* --- 源代码容器 --- */
.source-container {
  flex-grow: 1;
  overflow: auto; /* 这个应该处理滚动 */
  display: flex;
  flex-direction: column;
  position: relative; /* 用于 Spin 定位 */
}

/* 确保 Spin 组件及其容器占满高度 */
.source-container :deep(.ant-spin-nested-loading),
.source-container :deep(.ant-spin-container) {
  height: 100%;
  display: flex;
  flex-direction: column;
}

.source-container :deep(.ant-spin-container) {
  flex-grow: 1; /* 确保 Spin 容器增长 */
  display: flex; /* 确保子元素使用 flex 布局 */
  flex-direction: column; /* 确保子元素使用 flex 布局 */
}


/* --- 源代码头部 --- */
.source-header {
  padding: 8px 16px;
  background-color: #fafafa;
  border-bottom: 1px solid #f0f0f0;
  flex-shrink: 0; /* 防止头部在 flex 布局中收缩 */
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
  display: flex; /* 确保 flex */
  align-items: center; /* 垂直居中 */
  justify-content: space-between; /* 保持间距 */
}

.module-name {
  font-size: 0.9em;
  color: #555;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  flex-shrink: 0; /* 防止模块名称收缩过多 */
}

.file-path {
  margin-left: 15px; /* 在模块和文件之间添加一些空间 */
  color: #888;
  flex-shrink: 1; /* 如果需要，允许文件路径收缩 */
  text-align: right; /* 文本右对齐 */
}

/* --- 错误显示 --- */
.error-display {
  padding: 16px;
  flex-shrink: 0; /* 防止错误信息收缩 */
}

.error-display p {
  margin-bottom: 8px;
}

/* --- 源代码查看器 (pre 标签) --- */
.source-code-viewer {
  flex-grow: 1; /* 占据剩余空间 */
  padding: 10px 0 10px 10px; /* 添加了左内边距 */
  margin: 0;
  font-family: 'SFMono-Regular', Consolas, 'Liberation Mono', Menlo, Courier, monospace;
  font-size: 13px;
  line-height: 0.1em; /* 调整行高以适应内容 */
  white-space: pre; /* 保留空白符 */
  background-color: #fff;
  /* 内容由父元素 .source-container 滚动 */
}

/* --- 行容器 --- */
.line-container {
  display: flex;
  flex-direction: column; /* 允许覆盖详情在下方显示 */
  position: relative;
  /* 如果需要，调整左边框位置，或者如果百分比提供了足够的视觉提示，则移除 */
  /* border-left: 3px solid transparent; */ /* 考虑移除或调整 */
}

.line-container:hover {
  background-color: #f7f7f7; /* 悬停时高亮行 */
}

/* --- 行内容包装器 (按钮, 行号, 代码) --- */
.line-content-wrapper {
  display: flex;
  align-items: center; /* 垂直居中对齐 */
  min-height: calc(13px * 1.5); /* 保持最小高度 (基于字体大小和行高) */
}

/* --- 行覆盖率百分比 --- */
.line-coverage-percent {
  width: 55px; /* 根据需要调整宽度 */
  text-align: right;
  padding-right: 8px;
  font-size: 0.85em;
  color: #888; /* 默认颜色 */
  user-select: none; /* 防止文本选择 */
  flex-shrink: 0; /* 防止收缩 */
  white-space: nowrap;
  line-height: calc(13px * 1.5); /* 匹配包装器的最小高度 */
}

/* --- 新增：行覆盖率百分比的占位符 --- */
.coverage-percent-placeholder {
  display: inline-block; /* 或 block，取决于布局需求 */
  width: 55px; /* 匹配 .line-coverage-percent 的宽度 */
  padding-right: 8px; /* 匹配 .line-coverage-percent 的内边距 */
  flex-shrink: 0; /* 防止收缩 */
  /* 无需内容，仅占位 */
}

/* --- 行展开/折叠切换按钮 --- */
.line-toggle {
  width: 24px; /* 略微减小宽度 */
  flex-shrink: 0; /* 防止收缩 */
  display: flex;
  align-items: center;
  justify-content: center;
  height: 100%; /* 填充行高 */
}

.line-toggle .ant-btn {
  padding: 0 4px; /* 按钮内边距 */
  height: 18px; /* 按钮高度 */
  display: inline-flex; /* 确保按钮内的图标居中 */
  align-items: center;
  justify-content: center;
}

/* 切换按钮的占位符 */
.toggle-placeholder {
  display: inline-block;
  width: 18px; /* 匹配按钮宽度 */
  height: 18px; /* 匹配按钮高度 */
}

/* --- 行号 --- */
.line-number {
  width: 40px; /* 略微减小宽度 */
  text-align: right;
  padding-right: 10px;
  color: #aaa;
  user-select: none; /* 防止文本选择 */
  flex-shrink: 0; /* 防止收缩 */
  line-height: calc(13px * 1.5); /* 匹配包装器的最小高度 */
}

/* --- 行代码内容 --- */
.line-content {
  flex-grow: 1; /* 占据剩余宽度 */
  padding-right: 16px; /* 右侧内边距 */
  line-height: calc(13px * 1.5); /* 匹配包装器的最小高度 */
}

/* --- 覆盖详情行 --- */
.coverage-details-line {
  background-color: #f9f9f9; /* 轻微背景色 */
  border: 1px solid #eee;
  border-left: 3px solid #1890ff; /* 左侧蓝色标记 */
  margin-left: calc(55px + 24px + 40px + 10px); /* 前面元素的宽度 + 内边距总和 */
  margin-right: 16px;
  margin-top: 2px;
  margin-bottom: 4px;
  padding: 6px 10px;
  border-radius: 3px;
  font-size: 0.9em; /* 稍小字体 */
}

/* --- 单个覆盖项 --- */
.coverage-item {
  margin-bottom: 4px;
  padding-bottom: 4px;
  border-bottom: 1px dashed #eee; /* 分隔线 */
  display: flex;
  align-items: baseline; /* 基线对齐 */
  flex-wrap: wrap; /* 允许换行 */
  gap: 8px; /* 项目间距 */
}

.coverage-item:last-child {
  margin-bottom: 0;
  padding-bottom: 0;
  border-bottom: none; /* 最后一项无分隔线 */
}

/* --- 信号路径 --- */
.signal-path {
  font-weight: bold;
  color: #333;
  margin-right: 10px;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  max-width: 45%; /* 限制最大宽度 */
  display: inline-block;
  line-height: 1.4; /* 添加了行高以改善垂直显示 */
}

/* --- 覆盖标签和计数 --- */
.coverage-tags {
  display: inline-flex;
  align-items: center;
  gap: 4px; /* 标签内间距 */
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

/* --- 空状态 --- */
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
  flex-grow: 1; /* 占据父容器剩余空间 */
}

/* --- 树节点样式 --- */
/* Ant Tree 的默认 blockNode 和 fieldNames 能很好地处理标题溢出 */
:deep(.ant-tree .ant-tree-node-content-wrapper) {
  padding: 1px 5px; /* 调整内边距 */
  line-height: 1.8; /* 调整行高 */
}

:deep(.ant-tree .ant-tree-node-content-wrapper:hover) {
  background-color: #e6f7ff; /* 悬停背景色 */
}

:deep(.ant-tree .ant-tree-node-selected .ant-tree-node-content-wrapper) {
  background-color: #bae7ff; /* 选中背景色 */
}

/* 树节点标题包装器 */
.tree-node-title-wrapper {
  display: flex;
  align-items: center;
  gap: 4px; /* 图标和文本之间的间距 */
  overflow: hidden; /* 防止溢出 */
}

/* 节点图标 */
.node-icon {
  flex-shrink: 0; /* 防止图标收缩 */
  color: #555; /* 可选：图标颜色 */
}

/* 文件图标 */
.file-icon {
  color: #1890ff; /* 文件使用蓝色 */
}

/* 节点标题文本 */
.node-title-text {
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
}
</style>
