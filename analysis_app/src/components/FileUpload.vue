<script setup lang="ts">
import { UploadOutlined, FileTextOutlined } from "@ant-design/icons-vue";
import { Tooltip as ATooltip, Space as ASpace, Button as AButton, Upload as AUpload, message } from 'ant-design-vue'; // 导入所需组件
import { useCoverageStore } from "../stores/coverageStore";
// 导入对话框 API
import { open } from '@tauri-apps/plugin-dialog';

// 使用 Pinia Store
const coverageStore = useCoverageStore();

// 报告文件 beforeUpload 处理程序
const beforeUploadReport = (file: File) => {
  const isJson = file.type === 'application/json';
  if (isJson) {
    console.log("FileUpload: Calling store.processReportFile for", file.name);
    coverageStore.processReportFile(file); // 处理文件
  } else {
    message.error(`${file.name} is not a valid JSON file!`);
  }
  return false; // 阻止上传
};

// Info 按钮点击处理程序
const handleUploadInfoClick = async () => {
  try {
    // 打开对话框
    const selectedPath = await open({
      multiple: false, // 单选
      filters: [{ // 过滤器
        name: 'Coverage Info JSON',
        extensions: ['json']
      }],
      title: 'Select Coverage Info File (*_coverage_info.json)' // 标题
    });

    // 检查路径
    if (selectedPath && typeof selectedPath === 'string') {
      console.log("FileUpload: Calling store.processInfoFile with path:", selectedPath);
      // 调用 store action
      await coverageStore.processInfoFile(selectedPath); // 传递路径
    } else {
      console.log("File selection cancelled or invalid path."); // 取消或无效
    }
  } catch (error) {
    console.error("Error opening file dialog:", error);
    message.error(`Failed to open file dialog: ${error instanceof Error ? error.message : String(error)}`);
  }
};

</script>

<template>
  <a-card>
    <a-row>
      <a-col :span="24">
        <a-space :size="16">
          <div>
            <a-tooltip title="Select Coverage Report File (*_coverage_report.json)">
              <!-- 报告文件上传 -->
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
              <!-- Info 文件上传按钮 -->
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
          </div>
        </a-space>
      </a-col>
    </a-row>
  </a-card>
</template>
