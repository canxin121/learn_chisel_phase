<script setup lang="ts">
import { UploadOutlined, FileTextOutlined } from "@ant-design/icons-vue";
import { Tooltip as ATooltip, Space as ASpace, Button as AButton, Upload as AUpload, message } from 'ant-design-vue'; // 导入所需组件
import { useCoverageStore } from "../stores/coverageStore";
// 导入 Tauri 对话框 API
import { open } from '@tauri-apps/plugin-dialog';

// 使用 Pinia Store 替代 props
const coverageStore = useCoverageStore();

// 报告文件的 beforeUpload 处理程序 (保持不变)
const beforeUploadReport = (file: File) => {
  const isJson = file.type === 'application/json';
  if (isJson) {
    console.log("FileUpload: Calling store.processReportFile for", file.name);
    coverageStore.processReportFile(file); // 调用 store action 处理文件
  } else {
    message.error(`${file.name} is not a valid JSON file!`);
  }
  return false; // 阻止默认上传行为
};

// 新增：Info 按钮的点击处理程序，使用 Tauri 对话框
const handleUploadInfoClick = async () => {
  try {
    // 打开文件选择对话框
    const selectedPath = await open({
      multiple: false, // 只允许选择单个文件
      filters: [{ // 文件过滤器
        name: 'Coverage Info JSON',
        extensions: ['json']
      }],
      title: 'Select Coverage Info File (*_coverage_info.json)' // 对话框标题
    });

    // 如果用户选择了文件并且路径有效
    if (selectedPath && typeof selectedPath === 'string') {
      console.log("FileUpload: Calling store.processInfoFile with path:", selectedPath);
      // 使用文件路径调用 store action
      await coverageStore.processInfoFile(selectedPath); // 传递路径字符串
    } else {
      console.log("File selection cancelled or invalid path."); // 用户取消或路径无效
    }
  } catch (error) {
    console.error("Error opening file dialog:", error);
    message.error(`Failed to open file dialog: ${error instanceof Error ? error.message : String(error)}`);
  }
};

// beforeUploadInfo 不再需要，因为我们使用了对话框
/*
const beforeUploadInfo = (file: File) => {
  // ... (此逻辑被 handleUploadInfoClick 替换) ...
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
              <!-- 保留 a-upload 用于报告文件 -->
              <a-upload :file-list="coverageStore.reportFileList" :before-upload="beforeUploadReport" accept=".json">
                <a-button type="primary" :loading="coverageStore.isLoadingReport">
                  <template #icon>
                    <UploadOutlined />
                  </template>
                  Upload Report
                </a-button>
              </a-upload>
            </a-tooltip>
            <!-- 报告加载成功提示 -->
            <div v-if="coverageStore.coverageReport" style="margin-top: 8px; color: green; text-align: center;">
              Report Loaded
            </div>
          </div>

          <div>
            <a-tooltip title="Select Coverage Info File (*_coverage_info.json) (Optional)">
              <!-- 将 a-upload 替换为触发对话框的 a-button -->
              <a-button @click="handleUploadInfoClick" :loading="coverageStore.isLoadingInfo">
                <template #icon>
                  <FileTextOutlined />
                </template>
                Upload Info (Optional)
              </a-button>
            </a-tooltip>
            <!-- 信息加载成功提示 -->
            <div v-if="coverageStore.coverageInfo" style="margin-top: 8px; color: green; text-align: center;">
              Info Loaded
            </div>
          </div>
        </a-space>
      </a-col>
    </a-row>
  </a-card>
</template>
