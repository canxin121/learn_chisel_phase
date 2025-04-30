import { defineStore } from 'pinia'
import { ref, computed } from 'vue'
import { message, type UploadFile } from 'ant-design-vue'
import { invoke } from '@tauri-apps/api/core';
import type { CoverageReport } from '../types/CoverageReport'
import { type CoverageInfo, parseCoverageInfo, rereadFilesWithNewRootBatch } from '../types/CoverageInfo'
import type { TreeNode } from '../types/TreeNode'
import { buildCoverageTrees } from '../utils/coverageUtils'
import { writeCoverageInfo } from '../utils/file'
export const useCoverageStore = defineStore('coverageStore', () => {
  const coverageReport = ref<CoverageReport | null>(null)
  const coverageInfo = ref<CoverageInfo | null>(null)
  const predicateTreeData = ref<TreeNode[]>([])
  const muxTreeData = ref<TreeNode[]>([])
  const registerTreeData = ref<TreeNode[]>([])
  const userDefinedRootDirs = ref<Record<string, string>>({})
  const originalInfoFilePath = ref<string | null>(null);
  const reportFileList = ref<UploadFile[]>([])
  const isLoadingReport = ref(false)
  const isLoadingInfo = ref(false)
  const activeTabKey = ref('predicates')
  const overallCoverage = computed(() => coverageReport.value?.summary?.overall_coverage_percent ?? 0)
  const totalBins = computed(() => coverageReport.value?.summary?.total_bins ?? 0)
  const hitBins = computed(() => coverageReport.value?.summary?.total_bins_hit ?? 0)
  const predicateStats = computed(() => {
    let total = 0
    let hit = 0
    coverageReport.value?.conditional_predicates.forEach(p => {
      total += p.bins_total
      hit += p.bins_hit
    })
    return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 }
  })
  const muxStats = computed(() => {
    let total = 0
    let hit = 0
    coverageReport.value?.mux_conditions.forEach(p => {
      total += p.bins_total
      hit += p.bins_hit
    })
    return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 }
  })
  const registerStats = computed(() => {
    let total = 0
    let hit = 0
    coverageReport.value?.register_coverage.forEach(p => {
      total += p.bins_total
      hit += p.bins_hit
    })
    return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 }
  })
  function rebuildTreesAndUpdateState() {
    if (coverageReport.value && coverageInfo.value?.instanceSignalMap) {
      try {
        console.log("Rebuilding coverage trees using report and backend's instanceSignalMap...");
        const trees = buildCoverageTrees(coverageReport.value, coverageInfo.value.instanceSignalMap);
        predicateTreeData.value = trees.predicates;
        muxTreeData.value = trees.mux;
        registerTreeData.value = trees.registers;
        console.log("Coverage trees rebuilt from instanceSignalMap.");
      } catch (error) {
        console.error("Error rebuilding coverage trees from instanceSignalMap:", error);
        message.error(`Failed to update coverage data view: ${error instanceof Error ? error.message : String(error)}`);
        predicateTreeData.value = [];
        muxTreeData.value = [];
        registerTreeData.value = [];
      }
    } else {
      predicateTreeData.value = [];
      muxTreeData.value = [];
      registerTreeData.value = [];
      if (!coverageReport.value) {
        console.log("Coverage report not loaded, clearing trees.");
      } else if (!coverageInfo.value?.instanceSignalMap) {
        console.log("Coverage info or instanceSignalMap not available, clearing trees.");
      }
    }
  }
  function processReportFile(file: File) {
    const isJson = file.type === 'application/json'
    if (!isJson) {
      message.error(`${file.name} 不是有效的 JSON 文件!`)
      return
    }
    isLoadingReport.value = true
    coverageReport.value = null
    predicateTreeData.value = []
    muxTreeData.value = []
    registerTreeData.value = []
    const reader = new FileReader()
    reader.onload = (e) => {
      try {
        const jsonContent = e.target?.result as string
        if (!jsonContent) {
          throw new Error("文件内容为空。")
        }
        const reportData: CoverageReport = JSON.parse(jsonContent)
        if (!reportData || !reportData.summary || !reportData.conditional_predicates ||
          !reportData.mux_conditions || !reportData.register_coverage) {
          throw new Error("无效的覆盖率报告结构。")
        }
        coverageReport.value = reportData
        message.success(`${file.name} 上传并解析成功!`)
        rebuildTreesAndUpdateState();
      } catch (error: any) {
        message.error(`解析 ${file.name} 失败: ${error.message || '无效的 JSON。'}`)
        coverageReport.value = null
        rebuildTreesAndUpdateState();
      } finally {
        reportFileList.value = []
        isLoadingReport.value = false
      }
    }
    reader.onerror = () => {
      message.error(`读取 ${file.name} 时出错。`)
      coverageReport.value = null
      rebuildTreesAndUpdateState();
      isLoadingReport.value = false
      reportFileList.value = []
    }
    reader.readAsText(file)
  }
  async function processInfoFile(filePath: string) {
    if (!filePath || !filePath.toLowerCase().endsWith('.json')) {
      message.error(`Invalid file path provided: ${filePath}`);
      return;
    }
    console.log("Storing original info file path:", filePath);
    originalInfoFilePath.value = filePath;
    isLoadingInfo.value = true;
    coverageInfo.value = null;
    userDefinedRootDirs.value = {};
    try {
      console.log(`Reading file content from: ${filePath}`);
      const jsonContent = await invoke<string>('read_file', { path: filePath });
      if (!jsonContent) {
        throw new Error("文件内容为空。");
      }
      const rawInfoData = JSON.parse(jsonContent);
      const processedInfoData = await parseCoverageInfo(rawInfoData);
      coverageInfo.value = processedInfoData;
      const fileName = filePath.split(/[\\/]/).pop() || filePath;
      message.success(`${fileName} 上传并处理成功!`)
      if (originalInfoFilePath.value && coverageInfo.value) {
        try {
          console.log(`Attempting to save processed info back to: ${originalInfoFilePath.value}`);
          await writeCoverageInfo(originalInfoFilePath.value, coverageInfo.value);
          message.info(`Coverage info automatically saved to ${originalInfoFilePath.value}.`, 3);
        } catch (saveError) {
          console.error("Failed to automatically save coverage info after processing:", saveError);
          message.error(`自动保存处理后的覆盖率信息失败: ${saveError instanceof Error ? saveError.message : String(saveError)}`, 5);
        }
      }
      rebuildTreesAndUpdateState();
    } catch (error: any) {
      const fileName = filePath.split(/[\\/]/).pop() || filePath;
      message.error(`处理 ${fileName} 失败: ${error instanceof Error ? error.message : String(error)}`)
      coverageInfo.value = null
      originalInfoFilePath.value = null;
      rebuildTreesAndUpdateState();
    } finally {
      isLoadingInfo.value = false;
    }
  }
  async function updateFileRootBatch(moduleKeys: string[], newRootDir: string) {
    if (!coverageInfo.value) {
      message.error("Coverage info not loaded.");
      return Promise.reject("Coverage info not loaded."); // Return a rejected promise
    }
    if (!originalInfoFilePath.value) {
      message.error("Cannot update root directory: Original file path is missing.");
      return Promise.reject("Original file path is missing."); // Return a rejected promise
    }
    if (moduleKeys.length === 0) {
        message.warn("No modules selected for root directory update.");
        return Promise.resolve(); // Nothing to do
    }

    const keysString = moduleKeys.length > 3 ? `${moduleKeys.slice(0, 3).join(', ')}...` : moduleKeys.join(', ');
    console.log(`Updating root directory for module keys [${keysString}] to "${newRootDir}"`);
    message.loading({ content: `Processing root directory change for ${moduleKeys.length} module(s)...`, key: 'updateRootBatch', duration: 0 });
    isLoadingInfo.value = true;

    // Update userDefinedRootDirs locally (optional, for immediate UI feedback if needed)
    moduleKeys.forEach(key => {
        userDefinedRootDirs.value[key] = newRootDir;
    });

    try {
      // Call the new batch command
      const updatedCoverageInfo = await rereadFilesWithNewRootBatch(
        coverageInfo.value,
        moduleKeys, // Pass the array of keys
        newRootDir
      );

      // Update the store with the single result from the batch operation
      coverageInfo.value = updatedCoverageInfo;

      message.success({ content: `Root directory updated and files re-processed for ${moduleKeys.length} module(s).`, key: 'updateRootBatch', duration: 3 });

      // Save back the updated info
      if (originalInfoFilePath.value && coverageInfo.value) {
        try {
          console.log(`Attempting to save updated info back to: ${originalInfoFilePath.value}`);
          await writeCoverageInfo(originalInfoFilePath.value, coverageInfo.value);
          message.info(`Coverage info automatically saved back to ${originalInfoFilePath.value}.`, 3);
        } catch (saveError) {
          console.error("Failed to automatically save coverage info after batch root update:", saveError);
          message.error(`自动保存更新后的覆盖率信息失败: ${saveError instanceof Error ? saveError.message : String(saveError)}`, 5);
        }
      }

      // Rebuild trees with the updated info
      rebuildTreesAndUpdateState();
      return Promise.resolve(); // Indicate success

    } catch (error) {
      console.error(`Error updating root directory via batch backend for keys [${keysString}]:`, error);
      message.error({ content: `Failed to update root directory: ${error instanceof Error ? error.message : String(error)}`, key: 'updateRootBatch', duration: 5 });
      // Optionally revert userDefinedRootDirs changes on error?
      // moduleKeys.forEach(key => { delete userDefinedRootDirs.value[key]; });
      return Promise.reject(error); // Indicate failure
    } finally {
      isLoadingInfo.value = false;
    }
  }
  return {
    coverageReport,
    coverageInfo,
    predicateTreeData,
    muxTreeData,
    registerTreeData,
    userDefinedRootDirs,
    originalInfoFilePath,
    reportFileList,
    isLoadingReport,
    isLoadingInfo,
    activeTabKey,
    overallCoverage,
    totalBins,
    hitBins,
    predicateStats,
    muxStats,
    registerStats,
    processReportFile,
    processInfoFile,
    updateFileRootBatch, // Export the renamed function
  }
})
