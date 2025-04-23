<script setup lang="ts">
import { UploadOutlined, FileTextOutlined } from "@ant-design/icons-vue";
import { Tooltip as ATooltip, Space as ASpace } from 'ant-design-vue'; // 导入 Tooltip 和 Space
import { useCoverageStore } from "../stores/coverageStore";

// 使用 Pinia Store 替代 props
const coverageStore = useCoverageStore();

// beforeUpload handlers 
const beforeUploadReport = (file: File) => {
  const isJson = file.type === 'application/json';
  if (isJson) {
    console.log("FileUpload: Calling store.processReportFile for", file.name);
    // 直接调用 store action
    coverageStore.processReportFile(file);
  }
  return false; // 阻止默认上传行为
};

const beforeUploadInfo = (file: File) => {
  const isJson = file.type === 'application/json';
  if (isJson) {
    console.log("FileUpload: Calling store.processInfoFile for", file.name);
    // 直接调用 store action
    coverageStore.processInfoFile(file);
  }
  return false; // 阻止默认上传行为
};
</script>

<template>
  <a-card>
    <a-row>
      <a-col :span="24">
        <a-space :size="16">
          <div>
            <a-tooltip title="Select Coverage Report File (*_coverage_report.json)">
              <a-upload :file-list="coverageStore.reportFileList" :before-upload="beforeUploadReport" accept=".json">
                <a-button type="primary" :loading="coverageStore.isLoadingReport">
                  <template #icon>
                    <UploadOutlined />
                  </template>
                  Upload Report
                </a-button>
              </a-upload>
            </a-tooltip>
            <div v-if="coverageStore.coverageReport" style="margin-top: 8px; color: green; text-align: center;">
              Report Loaded
            </div>
          </div>

          <div>
            <a-tooltip title="Select Coverage Info File (*_coverage_info.json) (Optional)">
              <a-upload :file-list="coverageStore.infoFileList" :before-upload="beforeUploadInfo" accept=".json">
                <a-button :loading="coverageStore.isLoadingInfo">
                  <template #icon>
                    <FileTextOutlined />
                  </template>
                  Upload Info (Optional)
                </a-button>
              </a-upload>
            </a-tooltip>
            <div v-if="coverageStore.coverageInfo" style="margin-top: 8px; color: green; text-align: center;">
              Info Loaded
            </div>
          </div>
        </a-space>
      </a-col>
    </a-row>
  </a-card>
</template>
