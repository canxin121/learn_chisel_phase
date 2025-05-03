import { defineStore } from 'pinia'
import { ref, computed } from 'vue'
import { message, type UploadFile } from 'ant-design-vue'
import { invoke } from '@tauri-apps/api/core';
import type { CoverageReport } from '../types/CoverageReport'
import { type CoverageInfo, parseCoverageInfo, rereadFilesWithNewRootBatch, type SourceFileIdentifier } from '../types/CoverageInfo'
import type { TreeNode } from '../types/TreeNode'
import { buildCoverageTrees } from '../utils/coverageUtils'
import { writeCoverageInfo } from '../utils/file'

// 定义导航目标的数据结构
interface NavigationTarget {
  signalKey: string; // 目标信号的唯一键
  instancePath: string[];
  sourceLocation: { filePath: string; line: number; column: number };
  moduleName: string;
}

// 定义覆盖率数据的 Pinia store
export const useCoverageStore = defineStore('coverageStore', () => {
  // --- State ---
  const coverageReport = ref<CoverageReport | null>(null) // 覆盖率报告
  const coverageInfo = ref<CoverageInfo | null>(null) // 覆盖率信息
  const predicateTreeData = ref<TreeNode[]>([]) // 条件谓词树
  const muxTreeData = ref<TreeNode[]>([]) // Mux 条件树
  const registerTreeData = ref<TreeNode[]>([]) // 寄存器覆盖树
  const userDefinedRootDirs = ref<Record<string, string>>({}) // 用户定义的模块根目录
  const originalInfoFilePath = ref<string | null>(null); // 原始 info 文件路径
  const reportFileList = ref<UploadFile[]>([]) // 报告文件列表
  const isLoadingReport = ref(false) // 报告加载状态
  const isLoadingInfo = ref(false) // 信息加载状态
  const activeTabKey = ref('predicates') // 当前活动选项卡
  const navigationTarget = ref<NavigationTarget | null>(null);

  // --- Computed ---
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


  // --- Actions ---
  function rebuildTreesAndUpdateState() {
    // 严格检查 report 和 info 是否都已加载
    if (coverageReport.value && coverageInfo.value?.instance_signal_tree) {
      try {
        console.log("Rebuilding coverage trees: Both report and info are available.");

        // 直接使用各 port 的 mapping 列表
        const trees = buildCoverageTrees(
            coverageReport.value,
            coverageInfo.value.instance_signal_tree,
            coverageInfo.value.exported_ports
        );
        predicateTreeData.value = trees.predicates;
        muxTreeData.value = trees.mux;
        registerTreeData.value = trees.registers;
        console.log("Coverage trees rebuilt successfully.");
      } catch (error) {
        console.error("Error rebuilding coverage trees:", error);
        message.error(`Failed to update coverage data view: ${error instanceof Error ? error.message : String(error)}`);
        // 清空树数据
        predicateTreeData.value = [];
        muxTreeData.value = [];
        registerTreeData.value = [];
      }
    } else {
      // 如果任一文件未加载，则清除树数据
      console.log("Clearing coverage trees: Report or Info (or its instance_signal_tree) is missing.");
      predicateTreeData.value = [];
      muxTreeData.value = [];
      registerTreeData.value = [];
      if (!coverageReport.value) {
        console.log("Reason: Coverage report not loaded.");
      }
      if (!coverageInfo.value) {
        console.log("Reason: Coverage info not loaded.");
      } else if (!coverageInfo.value.instance_signal_tree) {
        console.log("Reason: Coverage info loaded, but instance_signal_tree is missing.");
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
    // 清空旧报告和树数据
    coverageReport.value = null
    rebuildTreesAndUpdateState(); // 清空树

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
        // 只有在 info 文件也存在时才重建树
        if (coverageInfo.value) {
            rebuildTreesAndUpdateState();
        } else {
            console.log("Report processed, waiting for info file to rebuild trees.");
        }
      } catch (error: any) {
        message.error(`解析 ${file.name} 失败: ${error.message || '无效的 JSON。'}`)
        coverageReport.value = null // 确保失败时清空
        rebuildTreesAndUpdateState(); // 清空树
      } finally {
        reportFileList.value = [] // 清空上传列表
        isLoadingReport.value = false
      }
    }
    reader.onerror = () => {
      message.error(`读取 ${file.name} 时出错。`)
      coverageReport.value = null // 确保失败时清空
      rebuildTreesAndUpdateState(); // 清空树
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
    originalInfoFilePath.value = filePath; // 存储路径
    isLoadingInfo.value = true;
    // 清空旧 info 和树数据
    coverageInfo.value = null;
    userDefinedRootDirs.value = {}; // 清空根目录设置
    rebuildTreesAndUpdateState(); // 清空树

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

      // 只有在 report 文件也存在时才重建树
      if (coverageReport.value) {
          rebuildTreesAndUpdateState();
      } else {
          console.log("Info processed, waiting for report file to rebuild trees.");
      }
    } catch (error: any) {
      const fileName = filePath.split(/[\\/]/).pop() || filePath;
      message.error(`处理 ${fileName} 失败: ${error instanceof Error ? error.message : String(error)}`)
      coverageInfo.value = null // 确保失败时清空
      originalInfoFilePath.value = null; // 清除路径
      rebuildTreesAndUpdateState(); // 清空树
    } finally {
      isLoadingInfo.value = false;
    }
  }

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
        return Promise.resolve();
    }

    const count = sourceFileIdentifiers.length;
    const firstFileDesc = count > 0 ? `${sourceFileIdentifiers[0].module_name}/${sourceFileIdentifiers[0].relative_path}` : '';
    const logMsg = count > 1 ? `${firstFileDesc} and ${count - 1} other(s)` : firstFileDesc;

    console.log(`Updating root directory for source file(s) [${logMsg}] to "${newRootDir}"`);
    message.loading({ content: `Processing root directory change for ${count} source file(s)...`, key: 'updateRootBatch', duration: 0 });
    isLoadingInfo.value = true;

    try {
      const updatedCoverageInfo = await rereadFilesWithNewRootBatch(
        coverageInfo.value,
        sourceFileIdentifiers, // 标识符数组
        newRootDir
      );

      coverageInfo.value = updatedCoverageInfo;

      message.success({ content: `Root directory updated and files re-processed for ${count} source file(s).`, key: 'updateRootBatch', duration: 3 });

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

      // 根目录更新后，如果 report 也存在，则需要重建树
      if (coverageReport.value) {
          rebuildTreesAndUpdateState();
      } else {
          console.log("Info updated after root change, but report is missing. Trees not rebuilt yet.");
      }
      return Promise.resolve(); // 成功

    } catch (error) {
      console.error(`Error updating root directory via batch backend for files [${logMsg}]:`, error);
      message.error({ content: `Failed to update root directory: ${error instanceof Error ? error.message : String(error)}`, key: 'updateRootBatch', duration: 5 });
      return Promise.reject(error); // 失败
    } finally {
      isLoadingInfo.value = false;
    }
  }

  // 新增: 保存并更新 available_root_dirs
  async function saveAndUpdateAvailableRootDirs(newDirs: string[]) {
    if (!coverageInfo.value) {
      message.error("Coverage info not loaded. Cannot save available root directories.");
      return Promise.reject("Coverage info not loaded.");
    }
    if (!originalInfoFilePath.value) {
      message.error("Original info file path is missing. Cannot save available root directories.");
      return Promise.reject("Original info file path is missing.");
    }

    isLoadingInfo.value = true;
    message.loading({ content: 'Saving available root directories...', key: 'saveAvailableDirs', duration: 0 });

    try {
      // 1. 更新 store 中的 available_root_dirs
      coverageInfo.value.available_root_dirs = [...newDirs]; // 使用新数组确保响应性

      // 2. 调用 parseCoverageInfo (后端可能会使用更新后的 available_root_dirs)
      console.log("Calling parseCoverageInfo after updating available_root_dirs:", coverageInfo.value);
      const processedInfo = await parseCoverageInfo(coverageInfo.value);

      // 3. 将 parseCoverageInfo 的结果更新回 store
      coverageInfo.value = processedInfo;
      console.log("Updated coverageInfo from parseCoverageInfo:", coverageInfo.value);


      // 4. 将更新后的 coverageInfo 写回文件
      await writeCoverageInfo(originalInfoFilePath.value, coverageInfo.value);
      message.success({ content: 'Available root directories saved and info file updated.', key: 'saveAvailableDirs', duration: 3 });

      // 5. 重建树 (因为 coverageInfo 可能已更改)
      if (coverageReport.value) {
        rebuildTreesAndUpdateState();
      } else {
        console.log("Available root directories saved, but report is missing. Trees not rebuilt yet.");
      }
      return Promise.resolve();
    } catch (error) {
      console.error("Error saving available root directories:", error);
      message.error({ content: `Failed to save available root directories: ${error instanceof Error ? error.message : String(error)}`, key: 'saveAvailableDirs', duration: 5 });
      // 发生错误时，可能需要考虑是否回滚 coverageInfo.value.available_root_dirs
      // 但由于 parseCoverageInfo 也可能失败，状态可能已经不一致，最好提示用户重新加载
      return Promise.reject(error);
    } finally {
      isLoadingInfo.value = false;
    }
  }

  // 导航到源代码
  function navigateToSource(target: NavigationTarget) {
    console.log("Store: Setting navigation target:", target);
    navigationTarget.value = target;
  }

  // 清除导航目标
  function clearNavigationTarget() {
    console.log("Store: Clearing navigation target.");
    navigationTarget.value = null;
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
    navigationTarget, // 导航目标 state
    overallCoverage,
    totalBins,
    hitBins,
    predicateStats,
    muxStats,
    registerStats,
    processReportFile,
    processInfoFile,
    updateFileRootBatch,
    saveAndUpdateAvailableRootDirs, // 导出新 action
    navigateToSource, // 导航 action
    clearNavigationTarget, // 清除导航 action
  }
})
