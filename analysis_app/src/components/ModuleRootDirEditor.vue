<script setup lang="ts">
import { ref, computed, reactive } from 'vue';
import { Collapse as ACollapse, CollapsePanel as ACollapsePanel, Table as ATable, Button as AButton, Input as AInput, Tooltip as ATooltip, Space as ASpace, message, Alert as AAlert, TableColumnsType } from 'ant-design-vue';
import type { Key } from 'ant-design-vue/es/table/interface';
import { FolderOpenOutlined, SaveOutlined } from '@ant-design/icons-vue';
import { useCoverageStore } from "../stores/coverageStore";
import { open } from '@tauri-apps/plugin-dialog';
// 导入 ModuleInfo 和 SourceFileIdentifier
import type { ModuleInfo, SourceFileIdentifier } from '../types/CoverageInfo';

const coverageStore = useCoverageStore();

// 修改：接口现在表示单个源文件条目
interface SourceFileTableItem {
    key: string; // 唯一键: moduleName::relativePath
    moduleName: string;
    relativePath: string;
    rootDir: string | null;
}

const newRootDir = ref(''); // 输入的新根目录
// selectedRowKeys 现在存储选定的 SourceFileTableItem 的唯一键
const selectedRowKeys = ref<Key[]>([]); // 表格中选中的行键
const isApplying = ref(false); // 是否正在应用新的根目录

// 修改：将 moduleInfoMap 扁平化为源文件列表
const tableData = computed((): SourceFileTableItem[] => {
    if (!coverageStore.coverageInfo?.moduleInfoMap) {
        return [];
    }
    const items: SourceFileTableItem[] = [];
    // 遍历模块信息映射
    Object.entries(coverageStore.coverageInfo.moduleInfoMap).forEach(([moduleName, moduleInfo]: [string, ModuleInfo]) => {
        if (moduleInfo.sourceFiles) {
            // 遍历模块内的源文件
            Object.entries(moduleInfo.sourceFiles).forEach(([relativePath, sourceFileInfo]) => {
                items.push({
                    key: `${moduleName}::${relativePath}`, // 创建唯一键
                    moduleName: moduleName,
                    relativePath: relativePath,
                    rootDir: sourceFileInfo.rootDir ?? null, // 获取当前根目录
                });
            });
        }
    });
    // 可选：对项目进行排序，例如按模块名称然后按相对路径
    items.sort((a, b) => {
        if (a.moduleName !== b.moduleName) {
            return a.moduleName.localeCompare(b.moduleName);
        }
        return a.relativePath.localeCompare(b.relativePath);
    });
    return items;
});

// 修改：列现在反映 SourceFileTableItem
const columns: TableColumnsType<SourceFileTableItem> = [
    {
        title: 'Module Name',
        dataIndex: 'moduleName',
        key: 'moduleName',
        ellipsis: true, // 启用省略号
        width: 200,
    },
    {
        title: 'Relative Path',
        dataIndex: 'relativePath',
        key: 'relativePath',
        ellipsis: true, // 启用省略号
    },
    {
        title: 'Current Root Dir',
        dataIndex: 'rootDir',
        key: 'rootDir',
        ellipsis: true, // 启用省略号
        // 自定义渲染以显示 'N/A'
        customRender: ({ text }: { text: string | null }) => text || 'N/A',
    },
];

// 表格行选择配置
const rowSelection = reactive({
    selectedRowKeys: selectedRowKeys, // 绑定选中的键
    onChange: (keys: Key[]) => {
        selectedRowKeys.value = keys; // 更新选中的键
    },
});

// 打开目录选择对话框
const selectDirectory = async () => {
    try {
        const selected = await open({
            directory: true, // 只允许选择目录
            multiple: false, // 只允许选择一个
            title: 'Select New Root Directory', // 对话框标题
        });
        if (selected && typeof selected === 'string') {
            newRootDir.value = selected; // 更新输入框的值
        }
    } catch (err) {
        message.error(`Failed to open directory dialog: ${err}`);
        console.error("Error opening directory dialog:", err);
    }
};

// 修改：应用逻辑现在针对选定的源文件
// 应用新的根目录到选定的源文件
const applyNewRootDir = async () => {
    if (selectedRowKeys.value.length === 0) {
        message.warn('Please select at least one source file to update.');
        return;
    }
    if (!newRootDir.value) {
        message.warn('Please enter or select a new root directory.');
        return;
    }
    isApplying.value = true;

    // 将选定的键 (moduleName::relativePath) 映射回 SourceFileIdentifier 对象
    const identifiersToUpdate: SourceFileIdentifier[] = selectedRowKeys.value.map(key => {
        const [moduleName, relativePath] = String(key).split('::');
        return { moduleName, relativePath };
    }).filter(id => id.moduleName && id.relativePath); // 基本验证

    if (identifiersToUpdate.length !== selectedRowKeys.value.length) {
         console.warn("Some selected keys could not be parsed into identifiers:", selectedRowKeys.value);
         // 可选地通知用户
    }

    if (identifiersToUpdate.length === 0) {
        message.warn('No valid source file identifiers could be determined from selection.');
        isApplying.value = false;
        return;
    }


    try {
        // 调用更新后的 store action，传入标识符列表
        await coverageStore.updateFileRootBatch(identifiersToUpdate, newRootDir.value);

        message.success(`Batch root directory update request processed successfully for ${identifiersToUpdate.length} source file(s).`);
        selectedRowKeys.value = []; // 成功后清除选择
        newRootDir.value = ''; // 成功后清除输入

    } catch (error) {
        message.error(`Batch root directory update request failed. See console or previous messages for details.`);
        console.error("Error during batch root directory update process:", error);
        // 决定是否在失败时清除选择
        // selectedRowKeys.value = [];
    } finally {
        isApplying.value = false;
    }
};
</script>
<template>
    <!-- 添加 defaultActiveKey 属性 -->
    <a-collapse accordion :defaultActiveKey="['1']">
        <!-- 修改了标题 -->
        <a-collapse-panel key="1" header="Source File Root Directory Editor">
            <a-space direction="vertical" style="width: 100%">
                <!-- 如果未加载 info 文件，显示警告 -->
                <a-alert v-if="!coverageStore.originalInfoFilePath" type="warning"
                    message="Load a Coverage Info file to manage source file paths." show-icon />
                <!-- 如果已加载 info 文件，显示编辑器 -->
                <template v-if="coverageStore.originalInfoFilePath">
                    <a-row :gutter="16" align="bottom">
                        <a-col flex="auto">
                            <!-- 修改了 tooltip -->
                            <a-tooltip
                                title="Enter the new root directory for the selected source file(s).">
                                <a-input v-model:value="newRootDir" placeholder="Enter New Root Directory Path"
                                    style="width: 100%" />
                            </a-tooltip>
                        </a-col>
                        <a-col flex="none">
                            <a-tooltip title="Browse for Root Directory">
                                <a-button @click="selectDirectory">
                                    <template #icon>
                                        <FolderOpenOutlined />
                                    </template>
                                    Browse
                                </a-button>
                            </a-tooltip>
                        </a-col>
                        <a-col flex="none">
                            <!-- 应用按钮，禁用条件：未选择行或未输入新路径 -->
                            <a-button type="primary" @click="applyNewRootDir" :loading="isApplying"
                                :disabled="selectedRowKeys.length === 0 || !newRootDir">
                                <template #icon>
                                    <SaveOutlined />
                                </template>
                                <!-- 显示选中数量 -->
                                Apply to Selected ({{ selectedRowKeys.length }})
                            </a-button>
                        </a-col>
                    </a-row>
                    <!-- 表格使用更新后的列和数据 -->
                    <a-table :dataSource="tableData" :columns="columns" :row-selection="rowSelection" size="small"
                        bordered :pagination="{ pageSize: 10, hideOnSinglePage: true }" :scroll="{ y: 300 }">
                        <template #bodyCell="{ column, text }">
                            <!-- 对需要省略号的列进行自定义渲染并添加 tooltip -->
                            <!-- 修改：检查新的键 -->
                            <template v-if="column.key === 'moduleName' || column.key === 'relativePath' || column.key === 'rootDir'">
                                <a-tooltip :title="text">
                                    <span>{{ text || 'N/A' }}</span>
                                </a-tooltip>
                            </template>
                            <!-- 如果需要，为其他列提供后备 -->
                            <template v-else>
                                {{ text }}
                            </template>
                        </template>
                    </a-table>
                </template>
            </a-space>
        </a-collapse-panel>
    </a-collapse>
</template>
<style scoped>
.ant-table-wrapper {
    margin-top: 16px;
}

/* 确保表格单元格能优雅地处理长文本 */
:deep(.ant-table-cell) {
    white-space: nowrap;
    overflow: hidden;
    text-overflow: ellipsis;
}

/* 为操作按钮添加一些间距 */
.ant-row {
    margin-bottom: 10px;
}
</style>
