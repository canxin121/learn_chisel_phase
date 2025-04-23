<script setup lang="ts">
import { ref, nextTick, watch } from "vue";
import { useCoverageStore } from "./stores/coverageStore";

// Import components
import FileUpload from './components/FileUpload.vue';
import CoverageSummary from './components/CoverageSummary.vue';
import CoverageDetails from './components/CoverageDetails.vue';
import SourceViewer from './components/SourceViewer.vue';

// 使用 Pinia Store
const coverageStore = useCoverageStore();

// Refs
const sourceViewerWrapperRef = ref<HTMLElement | null>(null);

// 监听 store 中的 selectedSourcePath, highlightLine 和 selectionTrigger 来滚动页面
watch([() => coverageStore.selectedSourcePath, () => coverageStore.highlightLine, () => coverageStore.selectionTrigger],
  ([newPath, newLine]) => { // selectionTrigger 的变化会触发回调
    if (newPath && newLine !== null) {
      nextTick(() => {
        // 使用 setTimeout 确保 SourceViewer 组件有时间响应 store 更新并渲染
        setTimeout(() => {
          sourceViewerWrapperRef.value?.scrollIntoView({ behavior: 'smooth', block: 'nearest' });
          console.log("App.vue: Scrolled page to SourceViewer wrapper due to store change.");
        }, 100); // 增加一点延迟以确保 SourceViewer 内部滚动完成
      });
    }
  });

</script>

<template>
  <a-layout class="layout">
    <a-page-header class="page-header" title="Coverage Report Viewer"
      sub-title="Upload coverage report (.json) and optional coverage info (.json)" />
    <a-layout-content class="content">
      <a-spin :spinning="coverageStore.isLoadingReport || coverageStore.isLoadingInfo" tip="Processing files...">
        <a-space direction="vertical" size="large" style="width: 100%">
          <!-- File Upload Component - 移除事件监听 -->
          <FileUpload />

          <!-- Summary Component -->
          <CoverageSummary />

          <!-- Group Details and Source Viewer under v-if -->
          <template v-if="coverageStore.coverageReport">
            <!-- Details Component (Trees Only) - 移除事件监听 -->
            <CoverageDetails />

            <!-- Add a wrapper div with the ref -->
            <div ref="sourceViewerWrapperRef">
              <SourceViewer />
            </div>
          </template>

          <!-- Message when no report is loaded (use v-else) -->
          <a-card v-else>
            <p style="text-align: center; color: #888;">Please upload a coverage report file to view the analysis.</p>
          </a-card>
        </a-space>
      </a-spin>
    </a-layout-content>
  </a-layout>
</template>

<style scoped>
/* Global layout styles */
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
</style>

<style>
/* Global styles (like body) remain */
body {
  font-family: Inter, Avenir, Helvetica, Arial, sans-serif;
  font-size: 14px;
  line-height: 1.6;
  background-color: #f0f2f5;
  margin: 0;
}
</style>