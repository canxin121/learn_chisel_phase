<script setup lang="ts">
import { ref } from "vue";
import { useCoverageStore } from "./stores/coverageStore";

// 导入组件
import FileUpload from './components/FileUpload.vue';
import CoverageSummary from './components/CoverageSummary.vue';
import CoverageDetails from './components/CoverageDetails.vue';
import SourceViewer from './components/SourceViewer.vue';
import ModuleRootDirEditor from './components/ModuleRootDirEditor.vue'; // 导入新组件

// 使用 Pinia Store
const coverageStore = useCoverageStore();

</script>

<template>
  <a-layout class="layout">
    <a-page-header class="page-header" title="Coverage Report Viewer"
      sub-title="Upload coverage report (.json) and optional coverage info (.json)" />
    <a-layout-content class="content">
      <a-spin :spinning="coverageStore.isLoadingReport || coverageStore.isLoadingInfo" tip="Processing files...">
        <a-space direction="vertical" size="large" style="width: 100%">
          <!-- 文件上传组件 -->
          <FileUpload />

          <!-- 模块根目录编辑器 (当 info 加载后显示) -->
          <ModuleRootDirEditor v-if="coverageStore.coverageInfo" />

          <!-- 摘要组件 -->
          <CoverageSummary />

          <!-- 将 Details 和 Source Viewer 组合在 v-if 下 -->
          <template v-if="coverageStore.coverageReport">
            <!-- 详情组件 -->
            <CoverageDetails />

            <!-- SourceViewer 现在正确地使用 store 中的 moduleInfoMap -->
            <SourceViewer />
          </template>

          <!-- 未加载报告时的消息 (使用 v-else) -->
          <a-card v-else>
            <p style="text-align: center; color: #888;">Please upload a coverage report file to view the analysis.</p>
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