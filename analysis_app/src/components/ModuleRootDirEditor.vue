<script setup lang="ts">
import { ref, computed, reactive } from 'vue';
import { Collapse as ACollapse, CollapsePanel as ACollapsePanel, Table as ATable, Button as AButton, Input as AInput, Tooltip as ATooltip, Space as ASpace, message, Alert as AAlert, TableColumnsType } from 'ant-design-vue';
import type { Key } from 'ant-design-vue/es/table/interface';
import { FolderOpenOutlined, SaveOutlined } from '@ant-design/icons-vue';
import { useCoverageStore } from "../stores/coverageStore";
import { open } from '@tauri-apps/plugin-dialog';
import type { ModuleInfo, SourceFileIdentifier } from '../types/CoverageInfo';

const coverageStore = useCoverageStore();

interface SourceFileTableItem {
    key: string; // 唯一键
    moduleName: string;
    relativePath: string;
    rootDir: string | null;
}

const newRootDir = ref(''); // 新根目录
const selectedRowKeys = ref<Key[]>([]); // 选中的行键
const isApplying = ref(false); // 应用状态

const tableData = computed((): SourceFileTableItem[] => {
    if (!coverageStore.coverageInfo?.moduleInfoMap) {
        return [];
    }
    const items: SourceFileTableItem[] = [];
    // 遍历模块
    Object.entries(coverageStore.coverageInfo.moduleInfoMap).forEach(([moduleName, moduleInfo]: [string, ModuleInfo]) => {
        if (moduleInfo.sourceFiles) {
            // 遍历文件
            Object.entries(moduleInfo.sourceFiles).forEach(([relativePath, sourceFileInfo]) => {
                items.push({
                    key: `${moduleName}::${relativePath}`, // 键
                    moduleName: moduleName,
                    relativePath: relativePath,
                    rootDir: sourceFileInfo.rootDir ?? null, // 根目录
                });
            });
        }
    });
    // 排序项目
    items.sort((a, b) => {
        if (a.moduleName !== b.moduleName) {
            return a.moduleName.localeCompare(b.moduleName);
        }
        return a.relativePath.localeCompare(b.relativePath);
    });
    return items;
});

const columns: TableColumnsType<SourceFileTableItem> = [
    {
        title: 'Module Name',
        dataIndex: 'moduleName',
        key: 'moduleName',
        ellipsis: true, // 省略号
        width: 200,
    },
    {
        title: 'Relative Path',
        dataIndex: 'relativePath',
        key: 'relativePath',
        ellipsis: true, // 省略号
    },
    {
        title: 'Current Root Dir',
        dataIndex: 'rootDir',
        key: 'rootDir',
        ellipsis: true, // 省略号
        customRender: ({ text }: { text: string | null }) => text || 'N/A', // 自定义渲染
    },
];

// 行选择配置
const rowSelection = reactive({
    selectedRowKeys: selectedRowKeys, // 选中键
    onChange: (keys: Key[]) => {
        selectedRowKeys.value = keys; // 更新选中键
    },
});

// 选择目录
const selectDirectory = async () => {
    try {
        const selected = await open({
            directory: true, // 目录
            multiple: false, // 单选
            title: 'Select New Root Directory', // 标题
        });
        if (selected && typeof selected === 'string') {
            newRootDir.value = selected; // 更新输入
        }
    } catch (err) {
        message.error(`Failed to open directory dialog: ${err}`);
        console.error("Error opening directory dialog:", err);
    }
};

// 应用新根目录
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

    // 映射键到标识符
    const identifiersToUpdate: SourceFileIdentifier[] = selectedRowKeys.value.map(key => {
        const [moduleName, relativePath] = String(key).split('::');
        return { moduleName, relativePath };
    }).filter(id => id.moduleName && id.relativePath); // 验证

    if (identifiersToUpdate.length !== selectedRowKeys.value.length) {
         console.warn("Some selected keys could not be parsed into identifiers:", selectedRowKeys.value);
    }

    if (identifiersToUpdate.length === 0) {
        message.warn('No valid source file identifiers could be determined from selection.');
        isApplying.value = false;
        return;
    }


    try {
        // 调用 store action
        await coverageStore.updateFileRootBatch(identifiersToUpdate, newRootDir.value);

        message.success(`Batch root directory update request processed successfully for ${identifiersToUpdate.length} source file(s).`);
        selectedRowKeys.value = []; // 清除选择
        newRootDir.value = ''; // 清除输入

    } catch (error) {
        message.error(`Batch root directory update request failed. See console or previous messages for details.`);
        console.error("Error during batch root directory update process:", error);
        // 清除选择
        // selectedRowKeys.value = [];
    } finally {
        isApplying.value = false;
    }
};
</script>
<template>
    <a-collapse accordion :defaultActiveKey="['1']">
        <a-collapse-panel key="1" header="Source File Root Directory Editor">
            <a-space direction="vertical" style="width: 100%">
                <!-- 未加载 info 文件警告 -->
                <a-alert v-if="!coverageStore.originalInfoFilePath" type="warning"
                    message="Load a Coverage Info file to manage source file paths." show-icon />
                <!-- 编辑器 -->
                <template v-if="coverageStore.originalInfoFilePath">
                    <a-row :gutter="16" align="bottom">
                        <a-col flex="auto">
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
                            <!-- 应用按钮 -->
                            <a-button type="primary" @click="applyNewRootDir" :loading="isApplying"
                                :disabled="selectedRowKeys.length === 0 || !newRootDir">
                                <template #icon>
                                    <SaveOutlined />
                                </template>
                                Apply to Selected ({{ selectedRowKeys.length }}) <!-- 选中数量 -->
                            </a-button>
                        </a-col>
                    </a-row>
                    <!-- 表格 -->
                    <a-table :dataSource="tableData" :columns="columns" :row-selection="rowSelection" size="small"
                        bordered :pagination="{ pageSize: 10, hideOnSinglePage: true }" :scroll="{ y: 300 }">
                        <template #bodyCell="{ column, text }">
                            <!-- 自定义渲染省略号列 -->
                            <template v-if="column.key === 'moduleName' || column.key === 'relativePath' || column.key === 'rootDir'">
                                <a-tooltip :title="text">
                                    <span>{{ text || 'N/A' }}</span>
                                </a-tooltip>
                            </template>
                            <!-- 其他列后备 -->
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
