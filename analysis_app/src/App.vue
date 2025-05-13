<script setup lang="ts">
import { useCoverageStore } from "./stores/coverageStore";

// 导入组件
import FileUpload from './components/FileUpload.vue';
import CoverageSummary from './components/CoverageSummary.vue';
import CoverageDetails from './components/CoverageDetails.vue';
import ModuleRootDirEditor from './components/RootDirEditor.vue'; // 导入组件
import SourceViewer from "./components/SourceViewer.vue";

// 使用 Pinia Store
const coverageStore = useCoverageStore();

</script>

<template>
  <a-layout class="layout">
    <a-page-header class="page-header" title="Coverage Report Viewer"
      sub-title="Upload coverage report (.json) and coverage info (.json)" />
    <a-layout-content class="content">
      <a-spin :spinning="coverageStore.isLoadingReport || coverageStore.isLoadingInfo" tip="Processing files...">
        <a-space direction="vertical" size="large" style="width: 100%">
          <!-- 文件上传组件 -->
          <FileUpload />

          <!-- 仅当两个文件都加载时显示以下内容 -->
          <template v-if="coverageStore.coverageReport && coverageStore.coverageInfo">
            <!-- 模块根目录编辑器 -->
            <ModuleRootDirEditor />

            <!-- 摘要组件 -->
            <CoverageSummary />

            <!-- 详情组件 -->
            <CoverageDetails />

            <!-- 源代码查看器 -->
            <SourceViewer />
          </template>

          <!-- 未加载报告或信息时的消息 -->
          <a-card v-else>
            <p style="text-align: center; color: #888;">
              Please upload both a coverage report file (*_coverage_report.json) and a coverage info file
              (*_coverage_info.json)
              to view the analysis.
            </p>
          </a-card>
        </a-space>
      </a-spin>
    </a-layout-content>
  </a-layout>
</template>

<style scoped>
/* 全局布局样式 */
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
/* 全局样式 (例如 body) 保持不变 */
body {
  font-family: Inter, Avenir, Helvetica, Arial, sans-serif;
  font-size: 14px;
  line-height: 1.6;
  background-color: #f0f2f5;
  margin: 0;
}
</style>