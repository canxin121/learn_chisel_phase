import { defineStore } from 'pinia'
import { ref, computed } from 'vue'
import { message, type UploadFile } from 'ant-design-vue'
import { invoke } from '@tauri-apps/api/core';
import type { CoverageReport } from '../types/CoverageReport'
import { type CoverageInfo, parseCoverageInfo, rereadFilesWithNewRootBatch, type SourceFileIdentifier } from '../types/CoverageInfo'
import type { TreeNode } from '../types/TreeNode'
import { buildCoverageTrees } from '../utils/coverageUtils'
import { writeCoverageInfo } from '../utils/file'

// 定义覆盖率数据的 Pinia store
export const useCoverageStore = defineStore('coverageStore', () => {
  // --- State ---
  const coverageReport = ref<CoverageReport | null>(null) // 存储解析后的覆盖率报告
  const coverageInfo = ref<CoverageInfo | null>(null) // 存储解析后的覆盖率信息
  const predicateTreeData = ref<TreeNode[]>([]) // 条件谓词的树形数据
  const muxTreeData = ref<TreeNode[]>([]) // Mux 条件的树形数据
  const registerTreeData = ref<TreeNode[]>([]) // 寄存器覆盖的树形数据
  const userDefinedRootDirs = ref<Record<string, string>>({}) // 用户定义的模块根目录 (可能已过时，因为根目录现在是文件级别的)
  const originalInfoFilePath = ref<string | null>(null); // 原始 info 文件的路径，用于保存
  const reportFileList = ref<UploadFile[]>([]) // Ant Design Upload 组件的文件列表 (用于报告)
  const isLoadingReport = ref(false) // 是否正在加载报告文件
  const isLoadingInfo = ref(false) // 是否正在加载信息文件
  const activeTabKey = ref('predicates') // CoverageDetails 中当前活动的选项卡

  // --- Computed ---
  // 总体覆盖率
  const overallCoverage = computed(() => coverageReport.value?.summary?.overall_coverage_percent ?? 0)
  // 总 bin 数
  const totalBins = computed(() => coverageReport.value?.summary?.total_bins ?? 0)
  // 命中 bin 数
  const hitBins = computed(() => coverageReport.value?.summary?.total_bins_hit ?? 0)
  // 条件谓词统计
  const predicateStats = computed(() => {
    let total = 0
    let hit = 0
    coverageReport.value?.conditional_predicates.forEach(p => {
      total += p.bins_total
      hit += p.bins_hit
    })
    return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 }
  })
  // Mux 条件统计
  const muxStats = computed(() => {
    let total = 0
    let hit = 0
    coverageReport.value?.mux_conditions.forEach(p => {
      total += p.bins_total
      hit += p.bins_hit
    })
    return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 }
  })
  // 寄存器统计
  const registerStats = computed(() => {
    let total = 0
    let hit = 0
    coverageReport.value?.register_coverage.forEach(p => {
      total += p.bins_total
      hit += p.bins_hit
    })
    return { total, hit, coverage: total > 0 ? (hit / total) * 100 : 0 }
  })

  // --- Actions ---
  // 重新构建覆盖率树并更新状态
  function rebuildTreesAndUpdateState() {
    if (coverageReport.value && coverageInfo.value?.instanceSignalMap) {
      try {
        console.log("Rebuilding coverage trees using report and backend's instanceSignalMap...");
        // 使用报告和信息文件中的实例/信号映射构建树
        const trees = buildCoverageTrees(coverageReport.value, coverageInfo.value.instanceSignalMap);
        predicateTreeData.value = trees.predicates;
        muxTreeData.value = trees.mux;
        registerTreeData.value = trees.registers;
        console.log("Coverage trees rebuilt from instanceSignalMap.");
      } catch (error) {
        console.error("Error rebuilding coverage trees from instanceSignalMap:", error);
        message.error(`Failed to update coverage data view: ${error instanceof Error ? error.message : String(error)}`);
        // 出错时清空树
        predicateTreeData.value = [];
        muxTreeData.value = [];
        registerTreeData.value = [];
      }
    } else {
      // 如果报告或信息不可用，清空树
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

  // 处理上传的覆盖率报告文件
  function processReportFile(file: File) {
    const isJson = file.type === 'application/json'
    if (!isJson) {
      message.error(`${file.name} 不是有效的 JSON 文件!`)
      return
    }
    isLoadingReport.value = true
    // 清空旧数据
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
        // 基本验证
        if (!reportData || !reportData.summary || !reportData.conditional_predicates ||
          !reportData.mux_conditions || !reportData.register_coverage) {
          throw new Error("无效的覆盖率报告结构。")
        }
        coverageReport.value = reportData
        message.success(`${file.name} 上传并解析成功!`)
        rebuildTreesAndUpdateState(); // 报告加载后重建树
      } catch (error: any) {
        message.error(`解析 ${file.name} 失败: ${error.message || '无效的 JSON。'}`)
        coverageReport.value = null
        rebuildTreesAndUpdateState(); // 解析失败也清空树
      } finally {
        reportFileList.value = [] // 清空上传列表
        isLoadingReport.value = false
      }
    }
    reader.onerror = () => {
      message.error(`读取 ${file.name} 时出错。`)
      coverageReport.value = null
      rebuildTreesAndUpdateState(); // 读取错误也清空树
      isLoadingReport.value = false
      reportFileList.value = []
    }
    reader.readAsText(file)
  }

  // 处理选择的覆盖率信息文件 (通过路径)
  async function processInfoFile(filePath: string) {
    if (!filePath || !filePath.toLowerCase().endsWith('.json')) {
      message.error(`Invalid file path provided: ${filePath}`);
      return;
    }
    console.log("Storing original info file path:", filePath);
    originalInfoFilePath.value = filePath; // 存储原始路径用于保存
    isLoadingInfo.value = true;
    // 清空旧数据
    coverageInfo.value = null;
    userDefinedRootDirs.value = {}; // 清空旧的根目录设置
    try {
      console.log(`Reading file content from: ${filePath}`);
      // 调用后端读取文件
      const jsonContent = await invoke<string>('read_file', { path: filePath });
      if (!jsonContent) {
        throw new Error("文件内容为空。");
      }
      const rawInfoData = JSON.parse(jsonContent);
      // 调用后端解析信息文件
      const processedInfoData = await parseCoverageInfo(rawInfoData);
      coverageInfo.value = processedInfoData;
      const fileName = filePath.split(/[\\/]/).pop() || filePath;
      message.success(`${fileName} 上传并处理成功!`)

      // 自动保存处理后的信息回原文件
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

      rebuildTreesAndUpdateState(); // 信息加载后重建树
    } catch (error: any) {
      const fileName = filePath.split(/[\\/]/).pop() || filePath;
      message.error(`处理 ${fileName} 失败: ${error instanceof Error ? error.message : String(error)}`)
      coverageInfo.value = null
      originalInfoFilePath.value = null; // 处理失败则清除路径
      rebuildTreesAndUpdateState(); // 处理失败也清空树
    } finally {
      isLoadingInfo.value = false;
    }
  }

  // 批量更新选定源文件的根目录
  async function updateFileRootBatch(sourceFileIdentifiers: SourceFileIdentifier[], newRootDir: string) {
    if (!coverageInfo.value) {
      message.error("Coverage info not loaded.");
      return Promise.reject("Coverage info not loaded.");
    }
    if (!originalInfoFilePath.value) {
      message.error("Cannot update root directory: Original file path is missing.");
      return Promise.reject("Original file path is missing.");
    }
    if (sourceFileIdentifiers.length === 0) {
        message.warn("No source files selected for root directory update.");
        return Promise.resolve(); // 无事可做
    }

    // 用于日志和消息的描述
    const count = sourceFileIdentifiers.length;
    const firstFileDesc = count > 0 ? `${sourceFileIdentifiers[0].moduleName}/${sourceFileIdentifiers[0].relativePath}` : '';
    const logMsg = count > 1 ? `${firstFileDesc} and ${count - 1} other(s)` : firstFileDesc;

    console.log(`Updating root directory for source file(s) [${logMsg}] to "${newRootDir}"`);
    message.loading({ content: `Processing root directory change for ${count} source file(s)...`, key: 'updateRootBatch', duration: 0 });
    isLoadingInfo.value = true;

    // 注意：userDefinedRootDirs 现在不太相关，因为根目录是文件级别的。
    // 我们可以更新它，但真实来源是 coverageInfo.value。

    try {
      // 调用更新后的批量命令，传入标识符列表
      const updatedCoverageInfo = await rereadFilesWithNewRootBatch(
        coverageInfo.value,
        sourceFileIdentifiers, // 传递标识符数组
        newRootDir
      );

      // 使用结果更新 store
      coverageInfo.value = updatedCoverageInfo;

      message.success({ content: `Root directory updated and files re-processed for ${count} source file(s).`, key: 'updateRootBatch', duration: 3 });

      // 保存回更新后的信息
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

      // 使用更新后的信息重建树
      rebuildTreesAndUpdateState();
      return Promise.resolve(); // 表示成功

    } catch (error) {
      console.error(`Error updating root directory via batch backend for files [${logMsg}]:`, error);
      message.error({ content: `Failed to update root directory: ${error instanceof Error ? error.message : String(error)}`, key: 'updateRootBatch', duration: 5 });
      return Promise.reject(error); // 表示失败
    } finally {
      isLoadingInfo.value = false;
    }
  }

  // 返回 state, getters, actions
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
    updateFileRootBatch, // 保持导出名称不变
  }
})
