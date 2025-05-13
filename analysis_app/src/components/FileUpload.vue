<script setup lang="ts">
import { UploadOutlined, FileTextOutlined, ReloadOutlined } from "@ant-design/icons-vue";
import { Tooltip as ATooltip, Space as ASpace, Button as AButton, message } from 'ant-design-vue';
import { useCoverageStore } from "../stores/coverageStore";
import { selectSingleFile } from '../utils/dialogUtils'; // IMPORT new utility

// 使用 Pinia Store
const coverageStore = useCoverageStore();

// Info 按钮点击处理程序
const handleUploadInfoClick = async () => {
  try {
    const selectedPath = await selectSingleFile({ // USE new utility
      filters: [{ name: 'Coverage Info JSON', extensions: ['json'] }],
      title: 'Select Coverage Info File (*_coverage_info.json)'
    });
    if (selectedPath) { // selectSingleFile returns string | null
      await coverageStore.processInfoFile(selectedPath);
    } else {
      console.log("File selection cancelled or invalid path.");
    }
  } catch (error) {
    console.error("Error opening file dialog for info file:", error);
    message.error(`Failed to open file dialog: ${error instanceof Error ? error.message : String(error)}`);
  }
};

// 报告文件上传按钮点击处理程序
const handleUploadReportClick = async () => {
  if (!coverageStore.coverageInfo) {
    message.error("Please upload and process the Coverage Info file first.");
    return;
  }
  try {
    const selectedPath = await selectSingleFile({ // USE new utility
      filters: [{ name: 'Coverage Report JSON', extensions: ['json'] }],
      title: 'Select Coverage Report File (*.json)'
    });
    if (selectedPath) { // selectSingleFile returns string | null
      await coverageStore.processReportFile(selectedPath);
    } else {
      console.log("File selection cancelled or invalid path.");
    }
  } catch (error) {
    console.error("Error opening file dialog for report file:", error);
    message.error(`Failed to open file dialog: ${error instanceof Error ? error.message : String(error)}`);
  }
};

</script>

<template>
  <a-card>
    <a-row>
      <a-col :span="24">
        <a-space :size="24" align="start">
          <!-- Info File Section -->
          <a-space direction="vertical" align="center" :size="4">
            <a-space align="center">
              <a-tooltip title="Select Coverage Info File (*_coverage_info.json)">
                <a-button @click="handleUploadInfoClick" :loading="coverageStore.isLoadingInfo">
                  <template #icon>
                    <FileTextOutlined />
                  </template>
                  Upload Info
                </a-button>
              </a-tooltip>
              <a-tooltip title="Force re-parse the loaded info file">
                <a-button @click="coverageStore.reprocessInfoFile()"
                  :disabled="!coverageStore.originalInfoFilePath || coverageStore.isLoadingInfo" 
                  size="small"
                  type="text" 
                  shape="circle"
                  v-if="coverageStore.originalInfoFilePath">
                  <template #icon>
                    <ReloadOutlined />
                  </template>
                </a-button>
              </a-tooltip>
            </a-space>
            <div v-if="coverageStore.originalInfoFilePath && coverageStore.coverageInfo"
              style="color: green; text-align: center; font-size: 0.85em;">
              Loaded: {{ coverageStore.originalInfoFilePath.split(/[/\\]/).pop() }}
            </div>
          </a-space>

          <!-- Report File Section -->
          <a-space direction="vertical" align="center" :size="4">
            <a-space align="center">
              <a-tooltip title="Select Coverage Report File (*.json)">
                <a-button type="primary" @click="handleUploadReportClick" :loading="coverageStore.isLoadingReport"
                  :disabled="!coverageStore.coverageInfo || coverageStore.isLoadingReport || coverageStore.isLoadingInfo">
                  <template #icon>
                    <UploadOutlined />
                  </template>
                  Upload Report
                </a-button>
              </a-tooltip>
              <a-tooltip title="Force re-parse the loaded report file">
                <a-button @click="coverageStore.reprocessReportFile()"
                  :disabled="!coverageStore.originalReportFilePath || coverageStore.isLoadingReport || !coverageStore.coverageInfo"
                  size="small" 
                  type="text" 
                  shape="circle"
                  v-if="coverageStore.originalReportFilePath">
                  <template #icon>
                    <ReloadOutlined />
                  </template>
                </a-button>
              </a-tooltip>
            </a-space>
            <div v-if="coverageStore.originalReportFilePath && coverageStore.coverageReport"
              style="color: green; text-align: center; font-size: 0.85em;">
              Loaded: {{ coverageStore.originalReportFilePath.split(/[/\\]/).pop() }}
            </div>
          </a-space>
        </a-space>
      </a-col>
    </a-row>
  </a-card>
</template>
