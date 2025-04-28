<script setup lang="ts">
import { ref, watch, nextTick, reactive } from 'vue';
// Import EditOutlined and Modal
import { FileTextOutlined, CaretRightOutlined, CaretDownOutlined, EditOutlined } from "@ant-design/icons-vue";
import { Card as ACard, Collapse as ACollapse, CollapsePanel as ACollapsePanel, Tag as ATag, Modal as AModal, Input as AInput, Button as AButton, Tooltip as ATooltip } from 'ant-design-vue'; // Add Modal, Input, Button, Tooltip
import { useCoverageStore } from "../stores/coverageStore";
import { formatCoverage, getNodeStyle, getConditionTagColor, getBitTagColor, formatCount, formatPercent } from '../utils/coverageUtils';
import type { CSSProperties } from 'vue';
import hljs from 'highlight.js';
import 'highlight.js/styles/vs.css'; // 使用 VS Code 风格

interface CoveragePoint {
  id: string;
  name: string;
  type: 'predicate' | 'mux' | 'register' | 'register_bit' | 'unknown';
  coverage?: number;
  details: any;
  sourceLocation?: { filePath: string; line: number; column: number };
}
interface AnnotatedLine {
  lineNum: number;
  content: string; // 原始文本内容
  highlightedContent: string; // 高亮后的 HTML 内容
  isHighlighted: boolean;
  coveragePoints: CoveragePoint[];
  aggregateCoverage?: number;
  annotationStyle: CSSProperties;
}
// 使用 Pinia Store 替代 props
const coverageStore = useCoverageStore();
const sourceViewerContainerRef = ref<HTMLElement | null>(null);
const fileRefs = ref<Record<string, HTMLElement | null>>({});
const activeFileKeys = ref<string[]>([]);
// 新增：管理展开状态的行
const expandedLines = reactive<Record<string, Set<number>>>({});
const CondPrefix = "_cond_pred_";
const MuxPrefix = "_mux_cond_";
const RegPrefix = "_reg_signals_";
// 修改：获取更详细的行注释信息
const getAnnotatedLines = (filePath: string, fileContent: string): AnnotatedLine[] => {
  if (!fileContent || !coverageStore.coverageInfo || !coverageStore.coverageReport) {
    return (fileContent || '').split('\n').map((line, index) => ({
      lineNum: index + 1,
      content: line,
      highlightedContent: hljs.highlight(line, { language: 'scala', ignoreIllegals: true }).value, // 指定语言为 scala
      isHighlighted: false,
      coveragePoints: [],
      annotationStyle: {}
    }));
  }
  const lines = fileContent.split('\n');
  const lineAnnotations: Record<number, CoveragePoint[]> = {};
  // 从覆盖率报告和信息中收集所有覆盖点
  coverageStore.coverageInfo.exportedPorts.forEach(port => {
    port.signals.forEach(sigInfo => {
      if (sigInfo.filePath === filePath && sigInfo.line !== undefined && sigInfo.line !== null) {
        const lineIdx = sigInfo.line - 1;
        if (lineIdx >= 0 && lineIdx < lines.length) {
          // 初始化行注释数组（如果不存在）
          if (!lineAnnotations[lineIdx]) {
            lineAnnotations[lineIdx] = [];
          }
          // 创建源位置对象（只有在filePath和line都有值时）
          const sourceLocation = sigInfo.filePath && sigInfo.line !== null && sigInfo.line !== undefined
            ? {
              filePath: sigInfo.filePath,
              line: sigInfo.line,
              column: sigInfo.column ?? 0
            }
            : undefined;
          const fieldName = sigInfo.fieldName;
          console.log(`检查行 ${lineIdx + 1} 的信号: ${fieldName}`);
          // 查找条件谓词覆盖点
          const predicate = coverageStore.coverageReport!.conditional_predicates.find(p =>
            p.name === fieldName || p.name === `${CondPrefix}${fieldName}`);
          if (predicate) {
            console.log(`找到条件谓词覆盖点: ${predicate.name}`);
            lineAnnotations[lineIdx].push({
              id: `pred-${predicate.name}`,
              name: predicate.name,
              type: 'predicate',
              coverage: predicate.coverage_percent,
              details: predicate,
              sourceLocation
            });
            return; // 已找到匹配，继续下一个信号
          }
          // 查找多路复用条件覆盖点
          const mux = coverageStore.coverageReport!.mux_conditions.find(m =>
            m.name === fieldName || m.name === `${MuxPrefix}${fieldName}`);
          if (mux) {
            console.log(`找到多路复用覆盖点: ${mux.name}`);
            lineAnnotations[lineIdx].push({
              id: `mux-${mux.name}`,
              name: mux.name,
              type: 'mux',
              coverage: mux.coverage_percent,
              details: mux,
              sourceLocation
            });
            return; // 已找到匹配，继续下一个信号
          }
          // 查找寄存器覆盖点 - 修正比较逻辑
          const register = coverageStore.coverageReport!.register_coverage.find(r =>
            r.name === fieldName || r.name === `${RegPrefix}${fieldName}`);
          if (register) {
            console.log(`找到寄存器覆盖点: ${register.name}, 宽度: ${register.width}`);
            lineAnnotations[lineIdx].push({
              id: `reg-${register.name}`,
              name: register.name,
              type: 'register',
              coverage: register.coverage_percent,
              details: register,
              sourceLocation
            });
            // 为寄存器的每个位添加覆盖点
            register.bit_details.forEach(bit => {
              const bitCoverage = (bit.hit_zero ? 50 : 0) + (bit.hit_one ? 50 : 0);
              lineAnnotations[lineIdx].push({
                id: `reg-bit-${register.name}-${bit.bit}`,
                name: `${register.name}[${bit.bit}]`,
                type: 'register_bit',
                coverage: bitCoverage,
                details: bit,
                sourceLocation
              });
            });
          }
        }
      }
    });
  });
  // 添加调试日志，显示找到多少个覆盖点
  Object.entries(lineAnnotations).forEach(([lineIdx, points]) => {
    console.log(`行 ${parseInt(lineIdx) + 1} 共找到 ${points.length} 个覆盖点`);
    points.forEach(p => console.log(`  - ${p.type}: ${p.name} (${p.coverage}%)`));
  });
  return lines.map((line, index) => {
    const lineNum = index + 1;
    const coveragePoints = lineAnnotations[index] || [];
    // 计算行的聚合覆盖率（使用最低的覆盖率作为指标）
    let aggregateCoverage: number | undefined = undefined;
    if (coveragePoints.length > 0) {
      const coverages = coveragePoints
        .map(p => p.coverage)
        .filter((c): c is number => c !== undefined);
      if (coverages.length > 0) {
        aggregateCoverage = Math.min(...coverages);
      }
    }
    const isHighlighted = filePath === coverageStore.selectedSourcePath && lineNum === coverageStore.highlightLine;
    // 指定语言为 scala 进行高亮，忽略可能的错误以提高容错性
    const highlightedContent = hljs.highlight(line, { language: 'scala', ignoreIllegals: true }).value;
    return {
      lineNum,
      content: line, // 保留原始文本
      highlightedContent, // 存储高亮后的 HTML
      isHighlighted,
      coveragePoints,
      aggregateCoverage,
      annotationStyle: aggregateCoverage !== undefined ? getNodeStyle(aggregateCoverage) : {}
    };
  });
};
// 新增：切换行的展开状态
const toggleLineExpansion = (filePath: string, lineNum: number) => {
  if (!expandedLines[filePath]) {
    expandedLines[filePath] = new Set<number>();
  }
  if (expandedLines[filePath].has(lineNum)) {
    expandedLines[filePath].delete(lineNum);
  } else {
    expandedLines[filePath].add(lineNum);
  }
};
// 新增：检查行是否展开
const isLineExpanded = (filePath: string, lineNum: number): boolean => {
  return !!expandedLines[filePath]?.has(lineNum);
};
// 新增：检查内容是否为错误消息
const isErrorContent = (content: string | undefined): boolean => {
  return typeof content === 'string' && content.startsWith("Error:");
};
// 新增：Modal 状态
const isModalVisible = ref(false);
const currentEditingFilePath = ref<string | null>(null);
const newRootDirInput = ref('');

// 新增：打开编辑根目录模态框
const openEditRootModal = (filePath: string) => {
  currentEditingFilePath.value = filePath;
  // 从 store 获取当前用户定义的根目录（如果有）
  newRootDirInput.value = coverageStore.userDefinedRootDirs[filePath] || '';
  isModalVisible.value = true;
};

// 新增：处理模态框确认
const handleModalOk = () => {
  if (currentEditingFilePath.value) {
    // 调用 store action 更新根目录
    coverageStore.updateFileRoot(currentEditingFilePath.value, newRootDirInput.value);
  }
  isModalVisible.value = false;
  currentEditingFilePath.value = null;
  newRootDirInput.value = '';
};

// 新增：处理模态框取消
const handleModalCancel = () => {
  isModalVisible.value = false;
  currentEditingFilePath.value = null;
  newRootDirInput.value = '';
};

watch([() => coverageStore.selectedSourcePath, () => coverageStore.highlightLine, () => coverageStore.selectionTrigger],
  ([newPath, newLine], []) => {
    if (newPath && newLine !== null) {
      const needsExpansion = !activeFileKeys.value.includes(newPath);
      if (needsExpansion) {
        activeFileKeys.value = [...activeFileKeys.value, newPath];
      }
      nextTick(() => {
        const scrollAction = () => {
          nextTick(() => {
            scrollToFileAndLine(newPath, newLine);
            // 自动展开含有高亮行的覆盖点信息
            if (newPath && !expandedLines[newPath]) {
              expandedLines[newPath] = new Set<number>();
            }
            if (newPath) {
              expandedLines[newPath].add(newLine);
            }
          });
        };
        if (needsExpansion) {
          setTimeout(scrollAction, 150);
        } else {
          setTimeout(scrollAction, 50);
        }
      });
    }
  }, { flush: 'post' });
const scrollToFileAndLine = (filePath: string, line: number) => {
  const container = sourceViewerContainerRef.value;
  const panelContentElement = fileRefs.value[filePath];
  if (container && panelContentElement) {
    const lineElement = panelContentElement.querySelector(`.code-line.line-${line}`) as HTMLElement;
    if (lineElement) {
      const containerRect = container.getBoundingClientRect();
      const lineRect = lineElement.getBoundingClientRect();
      const scrollTopTarget = container.scrollTop + (lineRect.top - containerRect.top) - (containerRect.height / 2) + (lineRect.height / 2);
      console.log(`Scrolling container to ${scrollTopTarget} for line ${line} in ${filePath}`);
      container.scrollTo({
        top: scrollTopTarget,
        behavior: 'smooth'
      });
    } else {
      console.warn(`Target line element ${line} not found in ${filePath}.`);
    }
  } else {
    console.warn(`Source viewer container or panel content element for "${filePath}" not found for scrolling.`);
  }
};
const setFileRef = (el: any, filePath: string) => {
  if (el) {
    fileRefs.value[filePath] = el as HTMLElement;
  }
};
watch(() => coverageStore.coverageInfo?.sourceFiles, () => {
  fileRefs.value = {};
  // 重置展开状态
  Object.keys(expandedLines).forEach(key => {
    expandedLines[key] = new Set<number>();
  });
  // Check if active keys still exist, remove if not
  activeFileKeys.value = activeFileKeys.value.filter(key => coverageStore.coverageInfo?.sourceFiles[key] !== undefined);

}, { deep: true }); // Use deep watch if necessary, though keys changing might be enough
</script>
<template>
  <a-card title="Source Code Viewer" style="width: 100%;">
    <div ref="sourceViewerContainerRef" class="multi-source-viewer-container">
      <div
        v-if="coverageStore.coverageInfo && coverageStore.coverageInfo.sourceFiles && Object.keys(coverageStore.coverageInfo.sourceFiles).length > 0">
        <!-- Use filePath as key for v-for and collapse panel -->
        <a-collapse v-model:activeKey="activeFileKeys">
          <a-collapse-panel v-for="(content, filePath) in coverageStore.coverageInfo.sourceFiles" :key="filePath">
            <!-- Custom Header Slot -->
            <template #header>
              <div class="panel-header">
                <span class="file-path-text">{{ filePath }}</span>
                <!-- Edit Root Directory Button -->
                <a-tooltip title="Edit Root Directory for this File">
                  <a-button type="text" size="small" class="edit-root-button" @click.stop="openEditRootModal(filePath)">
                    <template #icon><EditOutlined /></template>
                  </a-button>
                </a-tooltip>
              </div>
            </template>
            <!-- Panel Content -->
            <div :ref="el => setFileRef(el, filePath)">
              <!-- 新增：检查内容是否为错误 -->
              <div v-if="isErrorContent(content)" class="error-content-message">
                <p>无法读取或解析此文件。</p>
                <p>{{ content }}</p>
                <p>请点击标题栏中的 <EditOutlined /> 图标设置正确的根目录。</p>
              </div>
              <!-- 否则，显示源代码 -->
              <pre v-else class="source-code-viewer hljs"><code
                ><div v-for="line in getAnnotatedLines(filePath, content || '')" :key="line.lineNum"
                  :class="['code-line', `line-${line.lineNum}`, { 'highlighted-line': line.isHighlighted }]"
                  ><div class="line-content-wrapper"
                    ><span v-if="line.coveragePoints.length > 0" class="expand-button"
                        @click="toggleLineExpansion(filePath, line.lineNum)"
                      ><caret-right-outlined v-if="!isLineExpanded(filePath, line.lineNum)" /><caret-down-outlined v-else /></span
                    ><span v-else class="expand-placeholder"></span
                    ><span class="line-number">{{ line.lineNum }}</span
                    ><span class="line-content" :style="line.annotationStyle"
                      ><span v-html="line.highlightedContent"></span></span
                    ><span v-if="line.aggregateCoverage !== undefined" class="line-annotation"
                        :style="line.annotationStyle"
                        :title="`Coverage: ${formatCoverage(line.aggregateCoverage)}, Points: ${line.coveragePoints.length}`"
                      >{{ formatCoverage(line.aggregateCoverage) }}</span></div
                  ><div v-if="isLineExpanded(filePath, line.lineNum) && line.coveragePoints.length > 0"
                       class="coverage-points-details"
                    ><div v-for="point in line.coveragePoints" :key="point.id" class="coverage-point"
                      ><div class="coverage-point-header"
                        ><span class="node-text" :style="getNodeStyle(point.coverage)">{{ point.name }}</span
                        ><span v-if="point.coverage !== undefined" class="coverage-value"
                          :style="getNodeStyle(point.coverage)"
                          >({{ formatCoverage(point.coverage) }})</span
                        ><span class="point-type">{{ point.type }}</span></div
                      ><div v-if="point.type === 'predicate'" class="node-details condition-details"
                        ><a-tag :color="getConditionTagColor(point.details.hit_true)">True</a-tag
                        ><span class="detail-count">({{ formatCount(point.details.count_true) }}, 
                          {{ formatPercent(point.details.true_percentage) }})</span
                        ><a-tag :color="getConditionTagColor(point.details.hit_false)">False</a-tag
                        ><span class="detail-count">({{ formatCount(point.details.count_false) }}, 
                          {{ formatPercent(point.details.false_percentage) }})</span></div
                      ><div v-if="point.type === 'mux'" class="node-details condition-details"
                        ><a-tag :color="getConditionTagColor(point.details.hit_true)">True</a-tag
                        ><span class="detail-count">({{ formatCount(point.details.count_true) }}, 
                          {{ formatPercent(point.details.true_percentage) }})</span
                        ><a-tag :color="getConditionTagColor(point.details.hit_false)">False</a-tag
                        ><span class="detail-count">({{ formatCount(point.details.count_false) }}, 
                          {{ formatPercent(point.details.false_percentage) }})</span></div
                      ><div v-if="point.type === 'register'" class="node-details register-summary-details"
                        ><span class="detail-count"
                          >Width: {{ point.details.width }}, Hit: {{ point.details.bins_hit }}/{{ point.details.bins_total }}</span></div
                      ><div v-if="point.type === 'register_bit'" class="node-details bit-details"
                        ><a-tag :color="getBitTagColor(point.details.hit_zero)">0</a-tag
                        ><span class="detail-count">({{ formatCount(point.details.count_zero) }}, 
                          {{ formatPercent(point.details.zero_percentage) }})</span
                        ><a-tag :color="getBitTagColor(point.details.hit_one)">1</a-tag
                        ><span class="detail-count">({{ formatCount(point.details.count_one) }}, 
                          {{ formatPercent(point.details.one_percentage) }})</span
                        ><span v-if="point.details.missing" class="missing-indicator"
                          >({{ point.details.missing }})</span></div></div></div></div></code
              ></pre>
            </div>
          </a-collapse-panel>
        </a-collapse>
      </div>
      <div
        v-else-if="coverageStore.coverageInfo && coverageStore.coverageInfo.sourceFiles && Object.keys(coverageStore.coverageInfo.sourceFiles).length === 0"
        class="empty-source-view">
        <p>(No source files found in the loaded Coverage Info)</p>
      </div>
      <div v-else-if="!coverageStore.coverageInfo" class="empty-source-view">
        <p>(Coverage Info file not loaded)</p>
      </div>
      <div v-else class="empty-source-view">
        <p>Select an item with source information
          <FileTextOutlined /> in the coverage trees to view its code here.
        </p>
      </div>
    </div>

    <!-- Edit Root Directory Modal -->
    <a-modal v-model:open="isModalVisible" title="Edit Root Directory" @ok="handleModalOk" @cancel="handleModalCancel">
      <p v-if="currentEditingFilePath">Enter the correct root directory for file:</p>
      <p><strong>{{ currentEditingFilePath }}</strong></p>
      <a-input v-model:value="newRootDirInput" placeholder="/path/to/your/project/root" />
      <template #footer>
        <a-button key="back" @click="handleModalCancel">Cancel</a-button>
        <a-button key="submit" type="primary" @click="handleModalOk">Update Root</a-button>
      </template>
    </a-modal>

  </a-card>
</template>
<style scoped>
:deep(.ant-card-head) {
  padding: 0 16px;
  min-height: 40px;
}

:deep(.ant-card-head-title) {
  padding: 10px 0;
  font-size: 16px;
}

:deep(.ant-card-body) {
  padding: 0;
}

.multi-source-viewer-container {
  max-height: 90vh; /* 增大最大高度 */
  overflow-y: auto;
}

.multi-source-viewer-container :deep(.ant-collapse) {
  background-color: transparent;
  border: none;
  border-top: 1px solid #f0f0f0;
}

.multi-source-viewer-container :deep(.ant-collapse-item) {
  background-color: #fff;
  border: 1px solid #e8e8e8;
  border-top: none;
  border-radius: 0;
  margin-bottom: 0;
}

.multi-source-viewer-container :deep(.ant-collapse-item:last-child) {
  border-bottom: 1px solid #e8e8e8;
}

.multi-source-viewer-container :deep(.ant-collapse-item > .ant-collapse-header) {
  /* Adjust padding to accommodate the button */
  padding: 8px 36px 8px 12px; /* Add padding on the right */
  position: relative; /* Needed for absolute positioning of the button */
  background-color: #fafafa;
  border-bottom: 1px solid #e8e8e8;
  border-radius: 0;
  font-weight: bold;
  color: #555;
  /* Add sticky positioning */
  position: sticky;
  top: 0;
  z-index: 1;
}

/* Style the custom header content */
.panel-header {
  display: flex;
  align-items: center;
  justify-content: space-between; /* Pushes button to the right */
  width: 100%;
}

.file-path-text {
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
  flex-grow: 1; /* Allow text to take available space */
  margin-right: 8px; /* Space before button */
}

.edit-root-button {
  position: absolute; /* Position relative to header */
  right: 12px; /* Position from the right edge */
  top: 50%;
  transform: translateY(-50%); /* Center vertically */
  color: #888;
  padding: 2px 4px; /* Smaller padding */
  line-height: 1; /* Adjust line height */
  height: auto; /* Adjust height */
}

.edit-root-button:hover {
  color: #1890ff;
  background-color: #e6f7ff;
}

.source-code-viewer {
  padding: 10px 0;
  margin: 0;
  font-family: 'Courier New', Courier, monospace;
  font-size: 13px;
  line-height: 1.4;
  background-color: #fff;
  counter-reset: line;
  white-space: pre;
}

.line-content-wrapper {
  display: flex;
  padding: 0;
  position: relative;
  align-items: center;
  line-height: 1.4em;
  min-height: 1.4em;
}

.code-line {
  position: relative;
  min-height: 1.4em;
  line-height: 1.4em;
}

.code-line:hover {
  background-color: #f5f5f5;
}

.highlighted-line {
  background-color: #fffbe6 !important;
  outline: 1px solid #ffe58f;
}

.expand-button {
  width: 14px;
  height: 14px;
  display: flex;
  align-items: center;
  justify-content: center;
  cursor: pointer;
  color: #1890ff;
  margin-left: 10px;
  margin-right: 4px;
  flex-shrink: 0;
  font-size: 12px;
  line-height: 1;
}

.expand-button:hover {
  background-color: #e6f7ff;
  border-radius: 2px;
}

.expand-placeholder {
  width: 14px;
  margin-left: 10px;
  margin-right: 4px;
  flex-shrink: 0;
}

.line-number {
  display: inline-block;
  width: 40px;
  padding-right: 10px;
  text-align: right;
  color: #aaa;
  user-select: none;
  flex-shrink: 0;
  font-size: 12px;
  line-height: 1.4em;
  margin-left: 0;
}

.line-content {
  flex-grow: 1;
  white-space: pre;
  overflow: hidden;
  text-overflow: ellipsis;
  line-height: 1.4em;
  padding: 0;
  margin: 0;
}

.line-content :deep(span) {
  white-space: pre;
  line-height: 1.4em;
}

.line-annotation {
  display: inline-block;
  align-items: center;
  font-size: 0.8em;
  padding: 0 5px;
  background-color: rgba(200, 200, 200, 0.7);
  border-radius: 3px;
  color: #333;
  opacity: 0.7;
  pointer-events: none;
  height: 1.4em;
  line-height: 1.4em;
  white-space: nowrap;
  flex-shrink: 0;
  margin-left: 10px;
  margin-right: 10px;
}

.coverage-points-details {
  padding: 3px 10px 3px calc(10px + 14px + 4px + 40px + 10px);
  background-color: #f9f9f9;
  border-top: 1px dotted #ddd;
  border-bottom: 1px dotted #ddd;
  margin-bottom: 1px;
}

.coverage-point {
  background-color: #fff;
  border: 1px solid #eee;
  border-radius: 3px;
  margin-bottom: 4px;
  padding: 4px 8px;
  font-size: 12px;
}

.coverage-point-header {
  display: flex;
  align-items: center;
  flex-wrap: nowrap;
  overflow: hidden;
  margin-bottom: 4px;
  line-height: 1;
  padding: 2px 0;
  min-height: 26px;
}

.node-text {
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  flex-shrink: 1;
  min-width: 50px;
  font-weight: bold;
  line-height: 1.6;
}

.coverage-value {
  margin-left: 8px;
  white-space: nowrap;
  flex-shrink: 0;
  font-weight: bold;
}

.point-type {
  font-style: italic;
  color: #666;
  margin-left: 8px;
  padding: 0 4px;
  background: #f0f0f0;
  border-radius: 2px;
  font-size: 11px;
  flex-shrink: 0;
  line-height: 1.6;
}

.node-details {
  display: flex;
  align-items: center;
  flex-wrap: wrap;
  gap: 4px;
  margin-top: 2px;
  background-color: #fafafa;
  border-radius: 2px;
  padding: 6px;
  min-height: 24px;
  line-height: 1.6;
}

.condition-details,
.bit-details {
  line-height: 1.6;
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

.point-name {
  display: none;
}

.point-coverage {
  display: none;
}

.register-summary-details {
  font-style: italic;
  color: #555;
  background-color: #f5f5f5;
  border-radius: 2px;
  line-height: inherit;
}

.missing-indicator {
  margin-left: 5px;
  font-size: 0.8em;
  color: #ff4d4f;
  font-style: italic;
  white-space: nowrap;
  flex-shrink: 0;
}

.empty-source-view {
  text-align: center;
  padding: 40px;
  color: #888;
}

.empty-source-view p {
  margin-bottom: 5px;
}

/* 新增：错误消息样式 */
.error-content-message {
  padding: 20px;
  text-align: center;
  color: #faad14; /* Warning color */
  background-color: #fffbe6; /* Light warning background */
  border: 1px solid #ffe58f; /* Warning border */
  margin: 10px;
  border-radius: 4px;
}

.error-content-message p {
  margin-bottom: 8px;
}

.error-content-message .anticon {
  color: #1890ff; /* Match button color */
}
</style>
