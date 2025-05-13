import { defineStore } from 'pinia';
import { ref, computed } from 'vue';
import { message } from 'ant-design-vue';
import { readFile } from '../utils/file'; // 确保这个工具函数存在且能用
import type { CoverageInfo, ParsedCoverageInfo, SourceFileIdentifier, InstanceSignalTree, SignalInfo } from '../types/CoverageInfo'; // Added InstanceSignalTree, SignalInfo
import { parseCoverageInfo, rereadFilesWithNewRootBatch, updateAvailableRootDirs } from '../types/CoverageInfo';
import type { ParsedCoverageReport } from '../types/CoverageReport'; // Added CoverageReport
import { parseCoverageReportWithCoverageInfo } from '../types/CoverageReport';

export interface NavigationTarget {
  signalKey: string; // compressed_name of the signal
  instancePath: string; // Hierarchical path to the instance e.g. "Top.Sub.Leaf" or "Top__I__Sub"
  sourceLocation: { filePath: string; line: number; column: number };
  moduleName: string; // Module type of the instance in instancePath
  signalOriginName?: string; // origin_name of the signal, for display or finer highlighting
}

export const useCoverageStore = defineStore('coverageStore', () => {
  const coverageInfo = ref<ParsedCoverageInfo | null>(null);
  const coverageReport = ref<ParsedCoverageReport | null>(null);
  const originalInfoFilePath = ref<string | null>(null);
  const originalReportFilePath = ref<string | null>(null);

  const isLoadingInfo = ref(false);
  const isLoadingReport = ref(false);

  const activeTabKey = ref('predicates');
  const navigationTarget = ref<NavigationTarget | null>(null);

  // Helper to read and parse JSON file
  async function readAndParseJsonFile<T>(filePath: string): Promise<T> {
    try {
      const content = await readFile(filePath); // readFile from utils/file.ts
      return JSON.parse(content) as T;
    } catch (error: any) {
      console.error(`Error reading or parsing JSON file ${filePath}:`, error);
      throw new Error(`Failed to read/parse ${filePath}: ${error.message || String(error)}`);
    }
  }

  async function processInfoFile(filePath: string, forceReparse = false) {
    isLoadingInfo.value = true;
    try {
      if (!forceReparse) {
        try {
          // 尝试读取并检查是否已解析
          const loadedInfo = await readAndParseJsonFile<ParsedCoverageInfo>(filePath);
          // ParsedCoverageInfo 要求 instance_signal_tree 存在
          if (loadedInfo.instance_signal_tree && loadedInfo.top_module_name && loadedInfo.exported_ports) {
            coverageInfo.value = loadedInfo;
            originalInfoFilePath.value = filePath;
            coverageReport.value = null; // 重置报告
            originalReportFilePath.value = null;
            message.success("覆盖率信息文件已加载 (已解析)。");
            isLoadingInfo.value = false;
            return; // 跳过后端解析
          }
        } catch (e) {
          console.warn("预检查：信息文件未处于已解析状态或预检查读取期间出错。继续完整解析。", e);
        }
      }

      // 完整解析（强制或预检查失败/跳过）
      await parseCoverageInfo(filePath); // 后端命令
      const newInfo = await readAndParseJsonFile<ParsedCoverageInfo>(filePath); // 重新读取
      coverageInfo.value = newInfo;
      originalInfoFilePath.value = filePath;
      coverageReport.value = null;
      originalReportFilePath.value = null;
      message.success(forceReparse ? "覆盖率信息文件已重新处理。" : "覆盖率信息文件处理成功。");
    } catch (error: any) {
      console.error("处理信息文件时出错:", error);
      message.error(`处理覆盖率信息文件失败: ${error.message || String(error)}`);
      coverageInfo.value = null;
      originalInfoFilePath.value = null;
      coverageReport.value = null;
      originalReportFilePath.value = null;
    } finally {
      isLoadingInfo.value = false;
    }
  }

  async function processReportFile(filePath: string, forceReparse = false) {
    if (!originalInfoFilePath.value) {
      message.error("请先处理覆盖率信息文件。");
      return;
    }
    isLoadingReport.value = true;
    try {
      if (!forceReparse) {
        try {
          // 尝试读取并检查是否已解析
          const loadedReport = await readAndParseJsonFile<ParsedCoverageReport>(filePath);
          // ParsedCoverageReport 要求这些树结构存在
          if (loadedReport.conditional_coverage_tree &&
            loadedReport.mux_condition_tree &&
            loadedReport.register_coverage_tree) {
            coverageReport.value = loadedReport;
            originalReportFilePath.value = filePath;
            message.success("覆盖率报告文件已加载 (已解析)。");
            isLoadingReport.value = false;
            return; // 跳过后端解析
          }
        } catch (e) {
          console.warn("预检查：报告文件未处于已解析状态或预检查读取期间出错。继续完整解析。", e);
        }
      }

      // 完整解析（强制或预检查失败/跳过）
      await parseCoverageReportWithCoverageInfo(filePath, originalInfoFilePath.value); // 后端命令
      const newReport = await readAndParseJsonFile<ParsedCoverageReport>(filePath); // 重新读取
      coverageReport.value = newReport;
      originalReportFilePath.value = filePath;
      message.success(forceReparse ? "覆盖率报告文件已重新处理。" : "覆盖率报告文件处理成功。");
    } catch (error: any) {
      console.error("处理报告文件时出错:", error);
      message.error(`处理覆盖率报告文件失败: ${error.message || String(error)}`);
      coverageReport.value = null;
      originalReportFilePath.value = null;
    } finally {
      isLoadingReport.value = false;
    }
  }

  async function updateCoverageInfoWithNewRoots(sourceFileIdentifiers: SourceFileIdentifier[], newRootDir: string) {
    if (!originalInfoFilePath.value) {
      console.error("Cannot update root dirs: Coverage info file path not set.");
      message.error("无法更新根目录：未设置覆盖率信息文件路径。");
      return;
    }
    isLoadingInfo.value = true;
    try {
      // Backend command modifies the info file on disk
      await rereadFilesWithNewRootBatch(originalInfoFilePath.value, sourceFileIdentifiers, newRootDir);
      // Re-read the modified info file
      const updatedInfo = await readAndParseJsonFile<ParsedCoverageInfo>(originalInfoFilePath.value);
      coverageInfo.value = updatedInfo;
      message.success("根目录已更新，文件已重新加载。");
      console.log(`Coverage info with updated roots re-read from ${originalInfoFilePath.value}`);
    } catch (error: any) {
      console.error("使用新根目录更新覆盖信息时出错:", error);
      message.error(`使用新根目录更新覆盖信息失败: ${error.message || String(error)}`);
      // Optionally, reload the previous state or handle error more gracefully
    } finally {
      isLoadingInfo.value = false;
    }
  }

  const saveAndUpdateAvailableRootDirs = async (newRootDirs: string[]) => {
    if (!originalInfoFilePath.value) {
      console.error("Cannot update available root dirs, originalInfoFilePath is not set.");
      message.error("无法更新可用根目录：未设置覆盖率信息文件路径。");
      return;
    }
    isLoadingInfo.value = true;
    try {
      await updateAvailableRootDirs(originalInfoFilePath.value, newRootDirs);
      const updatedInfo = await readAndParseJsonFile<ParsedCoverageInfo>(originalInfoFilePath.value);
      coverageInfo.value = updatedInfo;
      message.success('可用根目录已成功更新并保存到信息文件。');
    } catch (error: any) {
      console.error("Error saving available root directories:", error);
      message.error(`保存可用根目录失败: ${error.message || String(error)}`);
    } finally {
      isLoadingInfo.value = false;
    }
  };

  const reprocessInfoFile = async () => {
    if (!originalInfoFilePath.value) {
      message.warn("没有信息文件可重新处理。");
      return;
    }
    await processInfoFile(originalInfoFilePath.value, true);
  };

  const reprocessReportFile = async () => {
    if (!originalReportFilePath.value) {
      message.warn("没有报告文件可重新处理。");
      return;
    }
    if (!coverageInfo.value) { // 检查 coverageInfo 是否已加载
      message.error("信息文件数据未加载，无法重新处理报告文件。");
      return;
    }
    await processReportFile(originalReportFilePath.value, true);
  };

  const overallCoverage = computed(() => coverageReport.value?.summary?.overall_coverage_percent ?? 0);
  const hitBins = computed(() => coverageReport.value?.summary?.total_bins_hit ?? 0);
  const totalBins = computed(() => coverageReport.value?.summary?.total_bins ?? 0);

  const predicateStats = computed(() => {
    if (!coverageReport.value || !coverageReport.value.conditional_predicates) return { count: 0, coverage: 0 };
    const points = coverageReport.value.conditional_predicates;
    const total = points.length;
    if (total === 0) return { count: 0, coverage: 0 };
    const sumCoverage = points.reduce((sum, p) => sum + p.coverage_percent, 0);
    return { count: total, coverage: sumCoverage / total };
  });

  const muxStats = computed(() => {
    if (!coverageReport.value || !coverageReport.value.mux_conditions) return { count: 0, coverage: 0 };
    const points = coverageReport.value.mux_conditions;
    const total = points.length;
    if (total === 0) return { count: 0, coverage: 0 };
    const sumCoverage = points.reduce((sum, p) => sum + p.coverage_percent, 0);
    return { count: total, coverage: sumCoverage / total };
  });

  const registerStats = computed(() => {
    if (!coverageReport.value || !coverageReport.value.register_coverage) return { count: 0, coverage: 0 };
    const points = coverageReport.value.register_coverage;
    const total = points.length;
    if (total === 0) return { count: 0, coverage: 0 };
    const sumCoverage = points.reduce((sum, p) => sum + p.coverage_percent, 0);
    return { count: total, coverage: sumCoverage / total };
  });

  function navigateToSource(target: NavigationTarget) { // Use NavigationTarget directly
    navigationTarget.value = target;
  }

  function clearNavigationTarget() {
    navigationTarget.value = null;
  }

  function findSignalInfoRecursive(instanceNode: InstanceSignalTree | undefined, compressedName: string): SignalInfo | undefined {
    if (!instanceNode) return undefined;
    const signal = instanceNode.signals.find(s => s.compressed_name === compressedName);
    if (signal) return signal;
    for (const subInstance of instanceNode.sub_instances) {
      const foundInSub = findSignalInfoRecursive(subInstance, compressedName);
      if (foundInSub) return foundInSub;
    }
    return undefined;
  }

  const getSignalInfoByCompressedName = (compressedName: string): SignalInfo | undefined => {
    if (!coverageInfo.value || !coverageInfo.value.instance_signal_tree) {
      return undefined;
    }
    return findSignalInfoRecursive(coverageInfo.value.instance_signal_tree, compressedName);
  };

  return {
    coverageInfo,
    coverageReport,
    originalInfoFilePath,
    originalReportFilePath,
    isLoadingInfo,
    isLoadingReport,
    processInfoFile,
    processReportFile,
    reprocessInfoFile,
    reprocessReportFile,
    updateCoverageInfoWithNewRoots,
    saveAndUpdateAvailableRootDirs,
    overallCoverage,
    hitBins,
    totalBins,
    predicateStats,
    muxStats,
    registerStats,
    activeTabKey,
    navigationTarget,
    navigateToSource,
    clearNavigationTarget, // Added
    getSignalInfoByCompressedName, // Added
  };
});

// Helper function to resolve the actual file path
export function resolveActualFilePath(
  relativePath: string,
  coverageInfoData: CoverageInfo | null // Pass the entire coverageInfo object
): string | undefined {
  if (!coverageInfoData || !coverageInfoData.source_file_info_map) return undefined;

  // Get the specific file info using the relative path
  const fileInfo = coverageInfoData.source_file_info_map[relativePath];

  if (!fileInfo) return undefined; // File info not found for this path

  if (fileInfo.root_dir && fileInfo.content && !fileInfo.content.startsWith("Error:")) {
    // If a specific root_dir is already set and content is valid, use it
    return `${fileInfo.root_dir}/${relativePath}`.replace(/\\/g, '/');
  }

  // Fallback: try available_root_dirs if root_dir is not set or content is an error
  if (coverageInfoData.available_root_dirs) {
    for (const root of coverageInfoData.available_root_dirs) {
      const potentialPath = `${root}/${relativePath}`.replace(/\\/g, '/');
      if (fileInfo.root_dir === root) return potentialPath;
    }
    if (fileInfo.root_dir && coverageInfoData.available_root_dirs.includes(fileInfo.root_dir)) {
      return `${fileInfo.root_dir}/${relativePath}`.replace(/\\/g, '/');
    }
  }
  return undefined;
}
