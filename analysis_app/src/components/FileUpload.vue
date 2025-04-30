<script setup lang="ts">
import { UploadOutlined, FileTextOutlined } from "@ant-design/icons-vue";
import { Tooltip as ATooltip, Space as ASpace, Button as AButton, Upload as AUpload, message } from 'ant-design-vue'; // 导入所需组件
import { useCoverageStore } from "../stores/coverageStore";
// Import Tauri dialog API
import { open } from '@tauri-apps/plugin-dialog';

// 使用 Pinia Store 替代 props
const coverageStore = useCoverageStore();

// beforeUpload handler for Report file (remains the same)
const beforeUploadReport = (file: File) => {
  const isJson = file.type === 'application/json';
  if (isJson) {
    console.log("FileUpload: Calling store.processReportFile for", file.name);
    coverageStore.processReportFile(file);
  } else {
    message.error(`${file.name} is not a valid JSON file!`);
  }
  return false; // 阻止默认上传行为
};

// NEW: Click handler for the Info button using Tauri dialog
const handleUploadInfoClick = async () => {
  try {
    const selectedPath = await open({
      multiple: false,
      filters: [{
        name: 'Coverage Info JSON',
        extensions: ['json']
      }],
      title: 'Select Coverage Info File (*_coverage_info.json)'
    });

    if (selectedPath && typeof selectedPath === 'string') {
      console.log("FileUpload: Calling store.processInfoFile with path:", selectedPath);
      // Call store action with the file path
      await coverageStore.processInfoFile(selectedPath); // Pass the path string
    } else {
      console.log("File selection cancelled or invalid path.");
    }
  } catch (error) {
    console.error("Error opening file dialog:", error);
    message.error(`Failed to open file dialog: ${error instanceof Error ? error.message : String(error)}`);
  }
};

// beforeUploadInfo is no longer needed as we use the dialog
/*
const beforeUploadInfo = (file: File) => {
  // ... (this logic is replaced by handleUploadInfoClick) ...
  return false;
};
*/
</script>

<template>
  <a-card>
    <a-row>
      <a-col :span="24">
        <a-space :size="16">
          <div>
            <a-tooltip title="Select Coverage Report File (*_coverage_report.json)">
              <!-- Keep a-upload for report file -->
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
              <!-- Replace a-upload with a-button triggering the dialog -->
              <a-button @click="handleUploadInfoClick" :loading="coverageStore.isLoadingInfo">
                <template #icon>
                  <FileTextOutlined />
                </template>
                Upload Info (Optional)
              </a-button>
            </a-tooltip>
            <div v-if="coverageStore.coverageInfo" style="margin-top: 8px; color: green; text-align: center;">
              Info Loaded
            </div>
            <!-- Display original path if available -->
            <div v-if="coverageStore.originalInfoFilePath"
              style="margin-top: 4px; font-size: 0.8em; color: #888; text-align: center;"
              :title="coverageStore.originalInfoFilePath">
              Path: ...{{ coverageStore.originalInfoFilePath.slice(-30) }}
            </div>
          </div>
        </a-space>
      </a-col>
    </a-row>
  </a-card>
</template>
