import { defineStore } from 'pinia'
import { ref, computed } from 'vue'
import { message, type UploadFile } from 'ant-design-vue'
// 导入 Tauri invoke API
import { invoke } from '@tauri-apps/api/core'

import type { CoverageReport } from '../types/CoverageReport'
import type { CoverageInfo } from '../types/CoverageInfo'
import type { TreeNode } from '../types/TreeNode'
import { buildCoverageTrees } from '../utils/coverageUtils'

export const useCoverageStore = defineStore('coverageStore', () => {
  // --- 状态 ---
  const coverageReport = ref<CoverageReport | null>(null)
  const coverageInfo = ref<CoverageInfo | null>(null)
  const predicateTreeData = ref<TreeNode[]>([])
  const muxTreeData = ref<TreeNode[]>([])
  const registerTreeData = ref<TreeNode[]>([])

  // 新增：用户定义的根目录映射
  const userDefinedRootDirs = ref<Record<string, string>>({})

  // 文件上传状态
  const reportFileList = ref<UploadFile[]>([])
  const infoFileList = ref<UploadFile[]>([])
  const isLoadingReport = ref(false)
  const isLoadingInfo = ref(false)

  // 源码查看器状态
  const selectedSourcePath = ref<string | null>(null)
  const selectedSourceContent = ref<string | null>(null)
  const highlightLine = ref<number | null>(null)
  const activeTabKey = ref('predicates')
  const selectionTrigger = ref<number>(0) // 新增：用于触发 watcher

  // --- 计算属性 ---
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

  // --- 动作 ---

  // Helper to rebuild trees and potentially update selection
  function rebuildTreesAndUpdateState() {
    if (coverageReport.value && coverageInfo.value) {
      try {
        console.log("Rebuilding coverage trees...");
        const trees = buildCoverageTrees(coverageReport.value, coverageInfo.value);
        predicateTreeData.value = trees.predicates;
        muxTreeData.value = trees.mux;
        registerTreeData.value = trees.registers;
        console.log("Coverage trees rebuilt.");

        // Check if the currently selected source file path still exists
        if (selectedSourcePath.value && coverageInfo.value?.sourceFiles && !coverageInfo.value.sourceFiles[selectedSourcePath.value]) {
          console.log(`Selected source path "${selectedSourcePath.value}" no longer exists after update. Clearing selection.`);
          selectedSourcePath.value = null;
          selectedSourceContent.value = null;
          highlightLine.value = null;
        } else if (selectedSourcePath.value && coverageInfo.value?.sourceFiles) {
          // Refresh content in case it changed (e.g., from error to content)
          selectedSourceContent.value = coverageInfo.value.sourceFiles[selectedSourcePath.value];
          console.log(`Refreshed content for "${selectedSourcePath.value}".`);
        }

      } catch (error) {
        console.error("Error rebuilding coverage trees:", error);
        message.error(`Failed to update coverage data view: ${error instanceof Error ? error.message : String(error)}`);
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
    // 重置依赖状态
    predicateTreeData.value = []
    muxTreeData.value = []
    registerTreeData.value = []
    selectedSourcePath.value = null
    selectedSourceContent.value = null
    highlightLine.value = null

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

        // 构建树数据
        rebuildTreesAndUpdateState(); // Use helper
      } catch (error: any) {
        message.error(`解析 ${file.name} 失败: ${error.message || '无效的 JSON。'}`)
        coverageReport.value = null
      } finally {
        reportFileList.value = []
        isLoadingReport.value = false
      }
    }

    reader.onerror = () => {
      message.error(`读取 ${file.name} 时出错。`)
      coverageReport.value = null
      isLoadingReport.value = false
      reportFileList.value = []
    }

    reader.readAsText(file)
  }

  async function processInfoFile(file: File) {
    const isJson = file.type === 'application/json'
    if (!isJson) {
      message.error(`${file.name} 不是有效的 JSON 文件!`)
      return
    }

    isLoadingInfo.value = true
    coverageInfo.value = null
    // 重置用户定义的根目录
    userDefinedRootDirs.value = {}
    // 重置依赖状态
    selectedSourcePath.value = null
    selectedSourceContent.value = null
    highlightLine.value = null

    const reader = new FileReader()
    reader.onload = async (e) => {
      try {
        const jsonContent = e.target?.result as string
        if (!jsonContent) {
          throw new Error("文件内容为空。")
        }

        const rawInfoData = JSON.parse(jsonContent)
        const processedInfoData: CoverageInfo = await invoke("parse_coverage_info", { coverageInfo: rawInfoData });
        coverageInfo.value = processedInfoData
        message.success(`${file.name} 上传并处理成功!`)

        // 如果报告已加载，则重建树
        rebuildTreesAndUpdateState(); // Use helper

      } catch (error: any) {
        message.error(`处理 ${file.name} 失败: ${error instanceof Error ? error.message : String(error)}`)
        coverageInfo.value = null
      } finally {
        infoFileList.value = []
        isLoadingInfo.value = false
      }
    }

    reader.onerror = () => {
      message.error(`读取 ${file.name} 时出错。`)
      coverageInfo.value = null
      isLoadingInfo.value = false
      infoFileList.value = []
    }

    reader.readAsText(file)
  }

  // 修改：更新文件的根目录，调用后端处理文件重读
  async function updateFileRoot(filePathKey: string, newRootDir: string) {
    if (!coverageInfo.value) {
      message.error("Coverage info not loaded.");
      return;
    }
    console.log(`Updating root directory for "${filePathKey}" to "${newRootDir}"`);
    message.loading({ content: `Processing root directory change for ${filePathKey}...`, key: 'updateRoot' });

    // 更新用户定义的根目录映射 (用于 UI)
    userDefinedRootDirs.value[filePathKey] = newRootDir;

    try {
      // 调用后端命令来处理文件重读和更新 CoverageInfo
      const updatedCoverageInfo: CoverageInfo = await invoke("reread_file_with_new_root", {
        coverageInfo: coverageInfo.value, // Pass current state
        filePathKey: filePathKey,
        newRootDir: newRootDir
      });

      // 使用后端返回的更新后的 CoverageInfo 更新 store
      coverageInfo.value = updatedCoverageInfo;

      message.success({ content: `Root directory updated and file re-processed for ${filePathKey}.`, key: 'updateRoot', duration: 3 });

      // 重建树并更新状态
      rebuildTreesAndUpdateState();

    } catch (error) {
      console.error(`Error updating root directory via backend for "${filePathKey}":`, error);
      message.error({ content: `Failed to update root directory: ${error instanceof Error ? error.message : String(error)}`, key: 'updateRoot', duration: 5 });
    }
  }

  function selectNode(nodeData: TreeNode) {
    selectionTrigger.value++; // 更新触发器以强制 watcher 运行
    if (nodeData.sourceLocation) {
      if (coverageInfo.value?.sourceFiles) {
        const { filePath, line } = nodeData.sourceLocation
        const sourceCode = coverageInfo.value.sourceFiles[filePath]

        if (sourceCode !== undefined) {
          selectedSourcePath.value = filePath
          selectedSourceContent.value = sourceCode
          highlightLine.value = line
          console.log(`Selected node: ${nodeData.key}, Source: ${filePath}:${line}`); // Added log
        } else {
          message.warning(`覆盖率信息中找不到 ${filePath} 的源代码。`)
          selectedSourcePath.value = filePath
          selectedSourceContent.value = `// 覆盖率信息文件中未提供"${filePath}"的源代码。`
          highlightLine.value = null
        }
      } else {
        message.error("未加载覆盖率信息文件（包含源代码映射）或文件缺失。")
        selectedSourcePath.value = nodeData.sourceLocation.filePath
        selectedSourceContent.value = `// 未加载覆盖率信息文件或缺少"${nodeData.sourceLocation.filePath}"的源代码。`
        highlightLine.value = null
      }
    } else {
      // 如果节点没有源位置，可以选择清除当前选择或保持不变
      // selectedSourcePath.value = null;
      // selectedSourceContent.value = null;
      // highlightLine.value = null;
    }
  }

  return {
    // 状态
    coverageReport,
    coverageInfo,
    predicateTreeData,
    muxTreeData,
    registerTreeData,
    userDefinedRootDirs, // 导出新状态
    reportFileList,
    infoFileList,
    isLoadingReport,
    isLoadingInfo,
    selectedSourcePath,
    selectedSourceContent,
    highlightLine,
    activeTabKey,
    selectionTrigger, // 导出触发器

    // 计算属性
    overallCoverage,
    totalBins,
    hitBins,
    predicateStats,
    muxStats,
    registerStats,

    // 动作
    processReportFile,
    processInfoFile,
    updateFileRoot, // 导出新动作
    selectNode
  }
})
