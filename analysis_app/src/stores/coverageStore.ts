import { defineStore } from 'pinia'
import { ref, computed } from 'vue'
import { message, type UploadFile } from 'ant-design-vue'

import type { CoverageReport } from '../types/CoverageReport'
import type { CoverageInfo, } from '../types/CoverageInfo'
import { parseCoverageInfo } from '../types/CoverageInfo'
import type { TreeNode } from '../types/TreeNode'
import { buildCoverageTrees } from '../utils/coverageUtils'

export const useCoverageStore = defineStore('coverageStore', () => {
  // --- 状态 ---
  const coverageReport = ref<CoverageReport | null>(null)
  const coverageInfo = ref<CoverageInfo | null>(null)
  const predicateTreeData = ref<TreeNode[]>([])
  const muxTreeData = ref<TreeNode[]>([])
  const registerTreeData = ref<TreeNode[]>([])

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
        if (coverageReport.value) {
          try {
            const trees = buildCoverageTrees(coverageReport.value, coverageInfo.value)
            predicateTreeData.value = trees.predicates
            muxTreeData.value = trees.mux
            registerTreeData.value = trees.registers
          } catch (error) {
            console.error("构建覆盖率树时出错:", error)
            message.error(`处理覆盖率数据失败: ${error instanceof Error ? error.message : String(error)}`)
            predicateTreeData.value = []
            muxTreeData.value = []
            registerTreeData.value = []
          }
        }
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
        const processedInfoData = await parseCoverageInfo(rawInfoData)
        coverageInfo.value = processedInfoData
        message.success(`${file.name} 上传并处理成功!`)

        // 如果报告已加载，则重建树
        if (coverageReport.value) {
          try {
            const trees = buildCoverageTrees(coverageReport.value, coverageInfo.value)
            predicateTreeData.value = trees.predicates
            muxTreeData.value = trees.mux
            registerTreeData.value = trees.registers
          } catch (error) {
            console.error("构建覆盖率树时出错:", error)
            message.error(`处理覆盖率数据失败: ${error instanceof Error ? error.message : String(error)}`)
          }
        }
      } catch (error: any) {
        message.error(`处理 ${file.name} 失败: ${error.message || '处理信息出错。'}`)
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
    selectNode
  }
})
