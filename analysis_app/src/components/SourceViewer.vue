<script setup lang="ts">
import { ref, computed, watch, nextTick } from 'vue';
import { Card as ACard, Row as ARow, Col as ACol, DirectoryTree as ADirectoryTree, Spin as ASpin, Alert as AAlert, Button as AButton, Empty as AEmpty, Tag as ATag } from 'ant-design-vue';
import { CodeOutlined, LoadingOutlined, PlusSquareOutlined, MinusSquareOutlined, FileOutlined } from "@ant-design/icons-vue";
import { useCoverageStore } from "../stores/coverageStore";
import type { InstanceSignalTree, SignalInfo, SourceFileInfo } from '../types/CoverageInfo';
import type { ConditionCoveragePoint, RegisterCoveragePoint } from '../types/CoverageReport';
import { formatCoverage, getNodeStyle, getConditionTagColor, formatCount, formatPercent, parseSignalName } from '../utils/coverageUtils';
import hljs from 'highlight.js';
import scala from 'highlight.js/lib/languages/scala';
import 'highlight.js/styles/vs.css';
// 导入 Tree 类型
import type { EventDataNode } from 'ant-design-vue/es/tree';
import type { Key } from 'ant-design-vue/es/table/interface';


// 注册语言
hljs.registerLanguage('scala', scala);

// --- 常量 ---
const INSTANCE_SEPARATOR = '__I__';
const FILE_SEPARATOR = '::FILE::'; // 文件路径分隔符
const HIGHLIGHT_CLASS = 'line-highlighted'; // 高亮行 CSS 类
const HIGHLIGHT_DURATION = 2000; // 高亮持续时间

// --- 类型定义 ---
interface InstanceTreeNode {
  key: string; // 唯一路径
  title: string; // 显示标题
  moduleName?: string; // 模块名称
  relativePath?: string; // 相对路径
  children?: InstanceTreeNode[];
  isLeaf: boolean;
  nodeType: 'instance' | 'file'; // 节点类型
  rawInstanceNode?: InstanceSignalTree; // 原始实例节点引用
  rawFileInfo?: SourceFileInfo; // 文件信息
}

// 行覆盖信息
interface LineCoverageInfo {
  signalInfo: SignalInfo; // 原始信号信息
  coverageData?: ConditionCoveragePoint | RegisterCoveragePoint; // 覆盖率数据
  parsedName: ReturnType<typeof parseSignalName>; // 解析后的信号名称
  instancePath: string[]; // 信号所属实例路径
}

// --- Store 和 Refs ---
const coverageStore = useCoverageStore();
const sourceCodeContainerRef = ref<HTMLElement | null>(null); // 源代码容器引用
const instanceTreeRef = ref<{ treeRef: { scrollTo: (options: { key: Key, align?: 'top' | 'bottom' | 'auto', offset?: number }) => void } } | null>(null); // 实例树引用
const highlightedLineNumber = ref<number | null>(null); // 高亮行号
let highlightTimeoutId: number | null = null; // 高亮 Timeout ID

// --- State ---
const selectedNodeKey = ref<string | null>(null); // 选定节点键
const displayedSourceContent = ref<string | null>(null); // 源代码内容
const displayedSourceModuleName = ref<string | null>(null); // 源代码模块名
const displayedSourceRelativePath = ref<string | undefined>(undefined); // 源代码相对路径
const isSourceLoading = ref(false); // 源代码加载状态
const sourceError = ref<string | null>(null); // 源代码加载错误
const coverageDataByLine = ref<Record<number, LineCoverageInfo[]>>({}); // 行覆盖信息
const expandedLines = ref<Set<number>>(new Set()); // 展开行集合
const expandedNodeKeys = ref<Key[]>([]); // 展开节点键

// --- Computed Properties ---

// 转换 InstanceSignalTree
const instanceTreeData = computed((): InstanceTreeNode[] => {
  const rootInstance = coverageStore.coverageInfo?.instanceSignalMap;
  if (!rootInstance) return [];

  // 转换节点
  const transformNode = (node: InstanceSignalTree, path: string[]): InstanceTreeNode => {
    const currentPath = [...path, node.instanceName];
    const instanceKey = currentPath.join(INSTANCE_SEPARATOR);
    const moduleName = node.moduleName;

    const instanceNode: InstanceTreeNode = {
      key: instanceKey,
      title: `${node.instanceName} (${moduleName})`,
      moduleName: moduleName,
      children: [], // 子节点
      isLeaf: false, // 是否叶子节点
      nodeType: 'instance',
      rawInstanceNode: node,
    };

    // 添加子实例节点
    node.subInstances.forEach(sub => {
      instanceNode.children!.push(transformNode(sub, currentPath));
    });

    // 添加源文件节点
    const moduleInfo = coverageStore.coverageInfo?.moduleInfoMap?.[moduleName];
    if (moduleInfo?.sourceFiles) {
      const sourceFilesArray = Object.values(moduleInfo.sourceFiles);
      sourceFilesArray.sort((a, b) => a.relativePath.localeCompare(b.relativePath)); // 排序

      sourceFilesArray.forEach(fileInfo => {
        const fileKey = `${instanceKey}${FILE_SEPARATOR}${fileInfo.relativePath}`;
        instanceNode.children!.push({
          key: fileKey,
          title: fileInfo.relativePath, // 标题
          relativePath: fileInfo.relativePath,
          moduleName: moduleName, // 模块名
          isLeaf: true,
          nodeType: 'file',
          rawFileInfo: fileInfo, // 文件信息
          children: undefined, // 叶子节点
        });
      });
    }

    // 确定是否为叶子节点
    instanceNode.isLeaf = !instanceNode.children || instanceNode.children.length === 0;

    return instanceNode;
  };

  // 转换根实例
  return [transformNode(rootInstance, [])];
});

// 高亮代码
const highlightedSourceCode = computed(() => {
  if (displayedSourceContent.value && !sourceError.value) {
    try {
      // Scala 代码高亮
      return hljs.highlight(displayedSourceContent.value, { language: 'scala', ignoreIllegals: true }).value;
    } catch (e) {
      console.error("Highlighting error:", e);
      return displayedSourceContent.value; // 回退到纯文本
    }
  }
  return '';
});

// 计算带覆盖率的行
// 过滤 coverageInfos 并计算行覆盖率
const linesWithCoverage = computed(() => {
  if (!highlightedSourceCode.value) return [];
  const lines = highlightedSourceCode.value.split('\n');
  const currentInstancePathString = selectedInstancePathArray.value.join('__I__'); // 实例路径字符串

  return lines.map((content, index) => {
    const lineNumber = index + 1;
    // 过滤 coverageInfos:
    const coverageInfos = (coverageDataByLine.value[lineNumber] || []).filter(info =>
      info.instancePath.join('__I__') === currentInstancePathString && // 属于当前选定实例
      info.signalInfo.filePath === displayedSourceRelativePath.value // 属于当前显示文件
    );

    // 计算行覆盖率
    let lineCoveragePercent: number | undefined = undefined;
    if (coverageInfos.length > 0) {
      const validCoverages = coverageInfos
        .map(info => info.coverageData?.coverage_percent)
        .filter((c): c is number => c !== undefined && !isNaN(c)); // 过滤

      if (validCoverages.length > 0) {
        const sum = validCoverages.reduce((acc, cur) => acc + cur, 0);
        lineCoveragePercent = sum / validCoverages.length;
      } else if (coverageInfos.some(info => info.coverageData !== undefined)) {
        lineCoveragePercent = 0; // 0% 覆盖
      }
    }

    return {
      lineNumber,
      content, // 高亮 HTML
      coverageInfos, // 过滤后的信息
      isExpanded: expandedLines.value.has(lineNumber),
      lineCoveragePercent, // 行覆盖率
      isHighlighted: lineNumber === highlightedLineNumber.value, // 检查是否高亮
    };
  });
});

// 获取实例路径数组
const selectedInstancePathArray = computed(() => {
  if (!selectedNodeKey.value) return [];
  // 提取实例部分
  const instanceKey = selectedNodeKey.value.split(FILE_SEPARATOR)[0];
  return instanceKey ? instanceKey.split(INSTANCE_SEPARATOR) : [];
});


// --- Methods ---

// 滚动到行
const scrollToLine = (lineNumber: number) => {
  nextTick(() => {
    if (sourceCodeContainerRef.value) {
      // 查找行元素
      const lineElement = sourceCodeContainerRef.value.querySelector(`.line-container:nth-child(${lineNumber})`) as HTMLElement;
      if (lineElement) {
        lineElement.scrollIntoView({ behavior: 'smooth', block: 'center' });
        console.log(`Scrolled to line ${lineNumber}`);

        // 高亮效果
        highlightedLineNumber.value = lineNumber;
        if (highlightTimeoutId !== null) {
          clearTimeout(highlightTimeoutId); // 清除计时器
        }
        highlightTimeoutId = window.setTimeout(() => { // 设置新计时器
          highlightedLineNumber.value = null;
          highlightTimeoutId = null;
        }, HIGHLIGHT_DURATION);

      } else {
        // 后备滚动
        const lineHeightEstimate = 20; // 行高估算
        const scrollToY = (lineNumber - 5) * lineHeightEstimate; // 滚动位置
        sourceCodeContainerRef.value.scrollTo({ top: Math.max(0, scrollToY), behavior: 'smooth' });
        console.warn(`Could not find line element for ${lineNumber}, estimated scroll.`);
      }
    }
  });
};

// 切换行展开
const toggleLineExpansion = (lineNumber: number) => {
  if (expandedLines.value.has(lineNumber)) {
    expandedLines.value.delete(lineNumber);
  } else {
    expandedLines.value.add(lineNumber);
  }
  expandedLines.value = new Set(expandedLines.value); // 响应性
};

// 为选定实例预计算覆盖率数据
const updateCoverageDataForSelectedInstance = () => {
  const data: Record<number, LineCoverageInfo[]> = {};
  const currentInstancePathArray = selectedInstancePathArray.value; // 实例路径

  console.log(`[updateCoverageData] Start: Pre-calculating for selected instance path: ${currentInstancePathArray.join('.') || '(none)'}`);

  // 1. 检查先决条件
  if (currentInstancePathArray.length === 0 || !coverageStore.coverageReport || !coverageStore.coverageInfo?.instanceSignalMap) {
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    console.log('[updateCoverageData] Exiting early - missing required data (instance path, report, or root instance map).');
    return;
  }

  // 2. 查找原始实例节点
  let selectedRawNode: InstanceSignalTree | null = coverageStore.coverageInfo.instanceSignalMap;
  // 遍历路径
  for (let i = 1; i < currentInstancePathArray.length; i++) {
    const part = currentInstancePathArray[i];
    const foundChild: InstanceSignalTree | undefined = selectedRawNode?.subInstances.find(sub => sub.instanceName === part);
    if (foundChild) {
      selectedRawNode = foundChild;
    } else {
      selectedRawNode = null; // 无效路径
      break;
    }
  }

  if (!selectedRawNode) {
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    console.error(`[updateCoverageData] Could not find raw instance node for path: ${currentInstancePathArray.join('.')}`);
    return;
  }

  // 3. 访问报告并迭代信号
  const report = coverageStore.coverageReport;
  selectedRawNode.signals.forEach(signalInfo => {
    // 检查信号行号
    if (signalInfo.line !== null && signalInfo.line !== undefined && signalInfo.line > 0 && signalInfo.filePath) {
      const lineNumber = signalInfo.line;
      const parsed = parseSignalName(signalInfo.name);
      let coverageData: ConditionCoveragePoint | RegisterCoveragePoint | undefined = undefined;

      // 查找覆盖率数据
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
        instancePath: currentInstancePathArray, // 实例路径
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


// 加载源文件内容
const loadSourceFileContent = (sourceFileInfo: SourceFileInfo | undefined, moduleName: string | undefined) => {
  isSourceLoading.value = true;
  sourceError.value = null;
  displayedSourceContent.value = null;
  displayedSourceModuleName.value = moduleName ?? null; // 设置模块名

  if (!sourceFileInfo || !moduleName) {
    sourceError.value = "Source file information or module name is missing.";
    console.error(sourceError.value, { sourceFileInfo, moduleName });
    displayedSourceRelativePath.value = undefined;
    isSourceLoading.value = false;
    return;
  }

  displayedSourceRelativePath.value = sourceFileInfo.relativePath; // 更新路径

  console.log(`Loading content for: ${sourceFileInfo.relativePath} in module ${moduleName}`);

  // 检查文件内容
  if (sourceFileInfo.content === null || sourceFileInfo.content === undefined) {
    sourceError.value = `Source content for file "${sourceFileInfo.relativePath}" in module "${moduleName}" is not available or could not be loaded. Check root directory settings.`;
    console.warn(sourceError.value);
  } else if (sourceFileInfo.content.startsWith("Error reading file:")) {
    // 内容是错误消息
    sourceError.value = sourceFileInfo.content;
    console.error(`Error reading file "${sourceFileInfo.relativePath}" for module "${moduleName}": ${sourceFileInfo.content}`);
  } else {
    // 加载内容成功
    displayedSourceContent.value = sourceFileInfo.content;
    nextTick(() => {
      sourceCodeContainerRef.value?.scrollTo({ top: 0 }); // 滚动到顶部
    });
  }
  isSourceLoading.value = false;
};


// 处理实例树节点选择
const handleInstanceSelect = (keys: Key[], { node }: { node: any /* AntTreeNode */ }) => {
  if (keys.length === 0 || !node) {
    // 取消选择
    selectedNodeKey.value = null;
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = null;
    displayedSourceRelativePath.value = undefined;
    sourceError.value = null;
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    // expandedNodeKeys.value = []; // 不清除展开状态
    return;
  }

  const selectedKey = keys[0];
  selectedNodeKey.value = String(selectedKey); // 内部状态
  const selectedNodeData = node.dataRef as InstanceTreeNode;

  // 自动展开父节点
  const pathParts = String(selectedKey).split(INSTANCE_SEPARATOR);
  const keysToExpand: Key[] = [];
  for (let i = 1; i < pathParts.length; i++) {
    keysToExpand.push(pathParts.slice(0, i + 1).join(INSTANCE_SEPARATOR));
  }
  expandedNodeKeys.value = Array.from(new Set([...expandedNodeKeys.value, ...keysToExpand])); // 合并


  if (selectedNodeData.nodeType === 'file') {
    const relativePath = selectedNodeData.relativePath;
    const moduleName = selectedNodeData.moduleName;
    const fileInfo = selectedNodeData.rawFileInfo;

    if (relativePath && moduleName && fileInfo) {
      console.log(`Selected file node: ${relativePath} in module ${moduleName}`);
      // 预计算覆盖率
      updateCoverageDataForSelectedInstance();
      // 加载文件内容
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
  else if (selectedNodeData.nodeType === 'instance') {
    // 选择了实例节点
    console.log(`Selected instance node: ${selectedNodeData.title}`);
    // 清除源代码面板
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = selectedNodeData.moduleName ?? null; // 显示模块名
    displayedSourceRelativePath.value = undefined; // 无特定文件
    sourceError.value = null; // 无错误
    coverageDataByLine.value = {}; // 清除行数据
    expandedLines.value.clear();
    // 可选：自动加载第一个文件
  } else {
    console.error("Unknown node type selected:", selectedNodeData);
    // 重置状态
    selectedNodeKey.value = null;
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = null;
    displayedSourceRelativePath.value = undefined;
    sourceError.value = "Internal error: Unknown node type selected.";
    coverageDataByLine.value = {};
    expandedLines.value.clear();
  }
}

// 处理树节点展开
const handleExpand = (keys: Key[], info: { node: EventDataNode; expanded: boolean; nativeEvent: MouseEvent }) => {
  expandedNodeKeys.value = keys; // 使用 Key[]
};


// --- Watchers ---
// 监视 coverageInfo
watch(() => coverageStore.coverageInfo, (newInfo, oldInfo) => {
  if (newInfo !== oldInfo) {
    console.log("Coverage info changed, clearing source viewer state.");
    selectedNodeKey.value = null; // 重置键
    displayedSourceContent.value = null;
    displayedSourceModuleName.value = null;
    displayedSourceRelativePath.value = undefined;
    sourceError.value = null;
    coverageDataByLine.value = {};
    expandedLines.value.clear();
    expandedNodeKeys.value = []; // 清除展开
  }
}, { immediate: false }); // 仅更改时执行

// 监视 coverageReport
watch(() => coverageStore.coverageReport, () => {
  console.log("Coverage report changed, updating line coverage data if a file node is selected.");
  // 仅当选择了文件节点时更新
  if (selectedNodeKey.value && selectedNodeKey.value.includes(FILE_SEPARATOR)) {
    updateCoverageDataForSelectedInstance(); // 重新计算
  }
}, { deep: true }); // 深度监视

// 监听导航目标
watch(() => coverageStore.navigationTarget, (target) => {
  if (target) {
    console.log("SourceViewer: Detected navigation target:", target);

    // 1. 构建目标键
    const instanceKey = target.instancePath.join(INSTANCE_SEPARATOR);
    const targetFileKey = `${instanceKey}${FILE_SEPARATOR}${target.sourceLocation.filePath}`;

    // 2. 设置选定键
    selectedNodeKey.value = targetFileKey;

    // 3. 展开父节点
    const keysToExpand: Key[] = [];
    for (let i = 1; i < target.instancePath.length; i++) { // 从 1 开始
      keysToExpand.push(target.instancePath.slice(0, i + 1).join(INSTANCE_SEPARATOR));
    }
    expandedNodeKeys.value = Array.from(new Set([...expandedNodeKeys.value, ...keysToExpand]));


    // 4. 加载文件内容
    const moduleInfo = coverageStore.coverageInfo?.moduleInfoMap?.[target.moduleName];
    const fileInfo = moduleInfo?.sourceFiles?.[target.sourceLocation.filePath];

    if (fileInfo) {
      updateCoverageDataForSelectedInstance(); // 更新覆盖数据
      loadSourceFileContent(fileInfo, target.moduleName);

      // 5. 滚动到目标行
      scrollToLine(target.sourceLocation.line);

      // 6. 滚动实例树
      nextTick(() => {
        console.log(`Scrolling instance tree to instance key: ${instanceKey}`);
        instanceTreeRef.value?.treeRef?.scrollTo({ key: instanceKey, align: 'top', offset: 10 }); // 使用 treeRef
      });

    } else {
      console.error(`Navigation failed: Could not find file info for ${target.sourceLocation.filePath} in module ${target.moduleName}`);
      sourceError.value = `Navigation failed: File ${target.sourceLocation.filePath} not found in module ${target.moduleName}.`;
    }


    // 7. 清除导航目标
    coverageStore.clearNavigationTarget();
  }
}, { immediate: false }); // 不需要立即执行

</script>

<template>
  <a-card class="source-viewer-card" title="Instance Source Viewer">
    <template v-if="coverageStore.coverageInfo?.instanceSignalMap">
      <a-row :gutter="16" class="source-viewer-layout">
        <!-- 实例树列 -->
        <a-col :span="8" class="tree-column">
          <div class="tree-container">
            <!-- selectedKeys 和 expandedKeys 使用 Key[] -->
            <a-directory-tree ref="instanceTreeRef" v-if="instanceTreeData.length > 0" :tree-data="instanceTreeData"
              :showLine="true" :showIcon="false" :default-expand-all="false" :selectable="true"
              :selectedKeys="selectedNodeKey ? [selectedNodeKey] : []" v-model:expandedKeys="expandedNodeKeys"
              @select="handleInstanceSelect" @expand="handleExpand" blockNode
              :fieldNames="{ title: 'title', key: 'key', children: 'children' }">
              <!-- 自定义标题插槽 -->
              <template #title="{ data: nodeData }">
                <span class="tree-node-title-wrapper">
                  <!-- 节点图标 -->
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
              <!-- 显示文件内容 -->
              <div v-if="displayedSourceRelativePath">
                <!-- 源文件头部 -->
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
          <!-- 绑定高亮类 -->
          <div v-for="line in linesWithCoverage" :key="line.lineNumber" class="line-container"
            :class="{ [HIGHLIGHT_CLASS]: line.isHighlighted }">
            <div class="line-content-wrapper">
              <!-- 行覆盖率百分比 -->
              <span v-if="line.lineCoveragePercent !== undefined" class="line-coverage-percent"
                :style="getNodeStyle(line.lineCoveragePercent)">
                {{ formatCoverage(line.lineCoveragePercent) }}
              </span>
              <!-- 覆盖率占位符 -->
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
                <!-- 切换按钮占位符 -->
                <span v-else class="toggle-placeholder"></span>
              </span>
              <!-- 行号 -->
              <span class="line-number">{{ line.lineNumber }}</span>
              <!-- 行内容 -->
              <code class="line-content" v-html="line.content"></code>
            </div>
            <!-- 覆盖详情 -->
            <div v-if="line.isExpanded && line.coverageInfos.length > 0" class="coverage-details-line">
              <div v-for="(info, index) in line.coverageInfos"
                :key="`${line.lineNumber}-${index}-${info.signalInfo.name}`" class="coverage-item">
                <!-- 信号名称 -->
                <span class="signal-path" :title="info.signalInfo.name">
                  {{ info.parsedName.signal }}
                </span>
                <!-- 覆盖数据 -->
                <template v-if="info.coverageData">
                           <!-- 条件/寄存器详情 -->
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
                <!-- 无覆盖数据 -->
                <span v-else class="coverage-tags no-data">
                  (No coverage data in report)
                </span>
              </div>
            </div>
          </div>
        </pre>

                <!-- 无内容 -->
                <div v-else-if="!isSourceLoading" class="empty-content">
                  <a-empty description="Source content for this module/file is empty or unavailable." />
                </div>
              </div>
              <!-- 未选择文件占位符 -->
              <div v-else class="empty-selection">
                <CodeOutlined style="font-size: 24px; margin-bottom: 10px;" />
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
    <!-- 未加载信息占位符 -->
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
  height: 75vh;
  /* 根据需要调整 */
  display: flex;
  flex-direction: column;
}

.source-viewer-card :deep(.ant-card-body) {
  padding: 0;
  flex-grow: 1;
  display: flex;
  overflow: hidden;
  /* 防止内部布局溢出卡片 */
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
  overflow: hidden;
  /* 防止树溢出 */
}

.source-column {
  height: 100%;
  display: flex;
  flex-direction: column;
  overflow: hidden;
  /* 防止源代码查看器溢出 */
}

/* --- 树容器 --- */
.tree-container {
  padding: 10px;
  overflow: auto;
  /* 允许树滚动 */
  flex-grow: 1;
}

/* --- 源代码容器 --- */
.source-container {
  flex-grow: 1;
  overflow: auto;
  /* 这个应该处理滚动 */
  display: flex;
  flex-direction: column;
  position: relative;
  /* 用于 Spin 定位 */
}

/* 确保 Spin 组件及其容器占满高度 */
.source-container :deep(.ant-spin-nested-loading),
.source-container :deep(.ant-spin-container) {
  height: 100%;
  display: flex;
  flex-direction: column;
}

.source-container :deep(.ant-spin-container) {
  flex-grow: 1;
  /* 确保 Spin 容器增长 */
  display: flex;
  /* 确保子元素使用 flex 布局 */
  flex-direction: column;
  /* 确保子元素使用 flex 布局 */
}


/* --- 源代码头部 --- */
.source-header {
  padding: 8px 16px;
  background-color: #fafafa;
  border-bottom: 1px solid #f0f0f0;
  flex-shrink: 0;
  /* 防止头部在 flex 布局中收缩 */
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
  display: flex;
  /* 确保 flex */
  align-items: center;
  /* 垂直居中 */
  justify-content: space-between;
  /* 保持间距 */
}

.module-name {
  font-size: 0.9em;
  color: #555;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  flex-shrink: 0;
  /* 防止模块名称收缩过多 */
}

.file-path {
  margin-left: 15px;
  /* 在模块和文件之间添加一些空间 */
  color: #888;
  flex-shrink: 1;
  /* 如果需要，允许文件路径收缩 */
  text-align: right;
  /* 文本右对齐 */
}

/* --- 错误显示 --- */
.error-display {
  padding: 16px;
  flex-shrink: 0;
  /* 防止错误信息收缩 */
}

.error-display p {
  margin-bottom: 8px;
}

/* --- 源代码查看器 (pre 标签) --- */
.source-code-viewer {
  flex-grow: 1;
  /* 占据空间 */
  padding: 10px 0 10px 10px;
  /* 左内边距 */
  margin: 0;
  font-family: 'SFMono-Regular', Consolas, 'Liberation Mono', Menlo, Courier, monospace;
  font-size: 13px;
  line-height: 0.1em;
  /* 行高 */
  white-space: pre;
  /* 保留空白 */
  background-color: #fff;
  /* 由 .source-container 滚动 */
}

/* --- 行容器 --- */
.line-container {
  display: flex;
  flex-direction: column;
  /* 允许详情在下方 */
  position: relative;
  /* border-left: 3px solid transparent; */
}

.line-container:hover {
  background-color: #f7f7f7;
  /* 悬停时高亮行 */
}

/* --- 行内容包装器 (按钮, 行号, 代码) --- */
.line-content-wrapper {
  display: flex;
  align-items: center;
  /* 垂直居中对齐 */
  min-height: calc(13px * 1.5);
  /* 保持最小高度 (基于字体大小和行高) */
}

/* --- 行覆盖率百分比 --- */
.line-coverage-percent {
  width: 55px;
  /* 宽度 */
  text-align: right;
  padding-right: 8px;
  font-size: 0.85em;
  color: #888;
  /* 颜色 */
  user-select: none;
  /* 防止选择 */
  flex-shrink: 0;
  /* 防止收缩 */
  white-space: nowrap;
  line-height: calc(13px * 1.5);
  /* 匹配高度 */
}

/* --- 行覆盖率百分比的占位符 --- */
.coverage-percent-placeholder {
  display: inline-block;
  width: 55px;
  /* 匹配宽度 */
  padding-right: 8px;
  /* 匹配内边距 */
  flex-shrink: 0;
  /* 防止收缩 */
}

/* --- 行展开/折叠切换按钮 --- */
.line-toggle {
  width: 24px;
  /* 宽度 */
  flex-shrink: 0;
  /* 防止收缩 */
  display: flex;
  align-items: center;
  justify-content: center;
  height: 100%;
  /* 填充行高 */
}

.line-toggle .ant-btn {
  padding: 0 4px;
  /* 按钮内边距 */
  height: 18px;
  /* 按钮高度 */
  display: inline-flex;
  /* 确保按钮内的图标居中 */
  align-items: center;
  justify-content: center;
}

/* 切换按钮的占位符 */
.toggle-placeholder {
  display: inline-block;
  width: 18px;
  /* 匹配按钮宽度 */
  height: 18px;
  /* 匹配按钮高度 */
}

/* --- 行号 --- */
.line-number {
  width: 40px;
  /* 宽度 */
  text-align: right;
  padding-right: 10px;
  color: #aaa;
  user-select: none;
  /* 防止选择 */
  flex-shrink: 0;
  /* 防止收缩 */
  line-height: calc(13px * 1.5);
  /* 匹配高度 */
}

/* --- 行代码内容 --- */
.line-content {
  flex-grow: 1;
  /* 占据宽度 */
  padding-right: 16px;
  /* 右内边距 */
  line-height: calc(13px * 1.5);
  /* 匹配高度 */
}

/* --- 覆盖详情行 --- */
.coverage-details-line {
  background-color: #f9f9f9;
  /* 背景色 */
  border: 1px solid #eee;
  border-left: 3px solid #1890ff;
  /* 左标记 */
  margin-left: calc(55px + 24px + 40px + 10px);
  /* 边距 */
  margin-right: 16px;
  margin-top: 2px;
  margin-bottom: 4px;
  padding: 6px 10px;
  border-radius: 3px;
  font-size: 0.9em;
  /* 字体 */
}

/* --- 单个覆盖项 --- */
.coverage-item {
  margin-bottom: 4px;
  padding-bottom: 4px;
  border-bottom: 1px dashed #eee;
  /* 分隔线 */
  display: flex;
  align-items: baseline;
  /* 对齐 */
  flex-wrap: wrap;
  /* 换行 */
  gap: 8px;
  /* 间距 */
}

.coverage-item:last-child {
  margin-bottom: 0;
  padding-bottom: 0;
  border-bottom: none;
  /* 最后一项无分隔线 */
}

/* --- 信号路径 --- */
.signal-path {
  font-weight: bold;
  color: #333;
  margin-right: 10px;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  max-width: 45%;
  /* 最大宽度 */
  display: inline-block;
  line-height: 1.4;
  /* 行高 */
}

/* --- 覆盖标签和计数 --- */
.coverage-tags {
  display: inline-flex;
  align-items: center;
  gap: 4px;
  /* 间距 */
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
  flex-grow: 1;
  /* 占据空间 */
}

/* --- 树节点样式 --- */
/* Ant Tree 处理标题溢出 */
:deep(.ant-tree .ant-tree-node-content-wrapper) {
  padding: 1px 5px;
  /* 内边距 */
  line-height: 1.8;
  /* 行高 */
}

:deep(.ant-tree .ant-tree-node-content-wrapper:hover) {
  background-color: #e6f7ff;
  /* 悬停背景色 */
}

:deep(.ant-tree .ant-tree-node-selected .ant-tree-node-content-wrapper) {
  background-color: #bae7ff;
  /* 选中背景色 */
}

/* 树节点标题包装器 */
.tree-node-title-wrapper {
  display: flex;
  align-items: center;
  gap: 4px;
  /* 间距 */
  overflow: hidden;
  /* 防止溢出 */
}

/* 节点图标 */
.node-icon {
  flex-shrink: 0;
  /* 防止收缩 */
  color: #555;
  /* 颜色 */
}

/* 文件图标 */
.file-icon {
  color: #1890ff;
  /* 蓝色 */
}

/* 节点标题文本 */
.node-title-text {
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
}

/* 高亮行的样式 */
.line-highlighted>.line-content-wrapper {
  background-color: #fffbe6;
  /* 背景 */
  transition: background-color 0.5s ease-out; /* 过渡 */
}

/* 高亮行边框 */
.line-highlighted {
  /* border-left: 3px solid #faad14; */
  /* 左边框 */
}
</style>
