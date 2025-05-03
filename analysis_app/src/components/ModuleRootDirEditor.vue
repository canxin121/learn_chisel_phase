<script setup lang="ts">
import { ref, computed, reactive, watch } from 'vue';
import { Collapse as ACollapse, CollapsePanel as ACollapsePanel, Table as ATable, Button as AButton, Input as AInput, Tooltip as ATooltip, Space as ASpace, message, Alert as AAlert, TableColumnsType, Tag as ATag } from 'ant-design-vue';
import type { Key } from 'ant-design-vue/es/table/interface';
import { FolderOpenOutlined, SaveOutlined, PlusOutlined, DeleteOutlined } from '@ant-design/icons-vue';
import { useCoverageStore } from "../stores/coverageStore";
import { open } from '@tauri-apps/plugin-dialog';
import type { ModuleInfo, SourceFileIdentifier } from '../types/CoverageInfo';

const coverageStore = useCoverageStore();

interface SourceFileTableItem {
    key: string; // 唯一键
    moduleName: string;
    relativePath: string;
    root_dir: string | null;
}

const newRootDir = ref(''); // 新根目录
const selectedRowKeys = ref<Key[]>([]); // 选中的行键
const isApplying = ref(false); // 应用状态
const currentPageSize = ref(10); // 添加响应式的页面大小

// State for Available Root Dirs editor
const editableAvailableRootDirs = ref<string[]>([]);
const newAvailableRootDirInput = ref('');
const isSavingAvailableDirs = ref(false);
const activeCollapseKeys = ref<string[]>(['1']); // 默认展开第一个面板

watch(() => coverageStore.coverageInfo?.available_root_dirs, (newDirs) => {
    if (newDirs) {
        editableAvailableRootDirs.value = [...newDirs];
    } else {
        editableAvailableRootDirs.value = [];
    }
}, { immediate: true, deep: true });

const tableData = computed((): SourceFileTableItem[] => {
    if (!coverageStore.coverageInfo?.module_info_map) {
        return [];
    }
    const items: SourceFileTableItem[] = [];
    // 遍历模块
    Object.entries(coverageStore.coverageInfo.module_info_map).forEach(([moduleName, moduleInfo]: [string, ModuleInfo]) => {
        if (moduleInfo.source_files) {
            // 遍历文件
            Object.entries(moduleInfo.source_files).forEach(([relativePath, sourceFileInfo]) => {
                items.push({
                    key: `${moduleName}::${relativePath}`, // 键
                    moduleName: moduleName,
                    relativePath: relativePath,
                    root_dir: sourceFileInfo.root_dir ?? null, // 根目录
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
        dataIndex: 'root_dir',
        key: 'root_dir',
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

// 分页配置
const paginationConfig = computed(() => ({
    pageSize: currentPageSize.value,
    hideOnSinglePage: true,
    showSizeChanger: true, // 显示页面大小切换器
    pageSizeOptions: ['10', '20', '50', '100'], // 可选页面大小
    onChange: (_page: number, pageSize: number) => { // 处理页面大小变化
        currentPageSize.value = pageSize;
    },
    onShowSizeChange: (_current: number, size: number) => { // 处理页面大小变化 (兼容旧版或特定场景)
        currentPageSize.value = size;
    },
}));

// 选择目录
const selectDirectory = async (targetInput?: 'newRootDir' | 'newAvailableRootDir') => {
    try {
        const selected = await open({
            directory: true, // 目录
            multiple: false, // 单选
            title: targetInput === 'newAvailableRootDir' ? 'Select Available Root Directory' : 'Select New Root Directory', // 标题
        });
        if (selected && typeof selected === 'string') {
            if (targetInput === 'newAvailableRootDir') {
                newAvailableRootDirInput.value = selected;
            } else {
                newRootDir.value = selected; // 更新输入
            }
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
        // 修正属性名以匹配 SourceFileIdentifier
        return { module_name: moduleName, relative_path: relativePath };
    }).filter(id => id.module_name && id.relative_path); // 使用修正后的属性名验证

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

// --- Methods for Available Root Dirs ---
const handleAddAvailableRootDir = () => {
    const dirToAdd = newAvailableRootDirInput.value.trim();
    if (!dirToAdd) {
        message.warn('Directory path cannot be empty.');
        return;
    }
    if (editableAvailableRootDirs.value.includes(dirToAdd)) {
        message.warn('This directory already exists in the list.');
        return;
    }
    editableAvailableRootDirs.value.push(dirToAdd);
    newAvailableRootDirInput.value = ''; // 清空输入
};

const handleRemoveAvailableRootDir = (dirToRemove: string) => {
    editableAvailableRootDirs.value = editableAvailableRootDirs.value.filter(dir => dir !== dirToRemove);
};

const handleSaveAvailableRootDirs = async () => {
    isSavingAvailableDirs.value = true;
    try {
        await coverageStore.saveAndUpdateAvailableRootDirs(editableAvailableRootDirs.value);
        // store action 会显示成功消息
    } catch (error) {
        // store action 会显示错误消息
        console.error("Error in handleSaveAvailableRootDirs:", error);
    } finally {
        isSavingAvailableDirs.value = false;
    }
};
</script>
<template>
    <a-collapse v-model:activeKey="activeCollapseKeys" accordion>
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
                                <a-button @click="selectDirectory('newRootDir')">
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
                        bordered :pagination="paginationConfig" :scroll="{ y: 300 }">
                        <template #bodyCell="{ column, text }">
                            <!-- 自定义渲染省略号列 -->
                            <template v-if="column.key === 'moduleName' || column.key === 'relativePath' || column.key === 'root_dir'">
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

        <a-collapse-panel key="2" header="Manage Available Root Directories for Source File Discovery">
            <a-space direction="vertical" style="width: 100%">
                <a-alert v-if="!coverageStore.originalInfoFilePath" type="warning"
                    message="Load a Coverage Info file to manage its available root directories." show-icon />
                <template v-if="coverageStore.originalInfoFilePath && coverageStore.coverageInfo">
                    <a-row :gutter="16" align="middle">
                        <a-col flex="auto">
                            <a-input v-model:value="newAvailableRootDirInput"
                                placeholder="Enter or browse for a new available root directory path"
                                @keyup.enter="handleAddAvailableRootDir" />
                        </a-col>
                        <a-col flex="none">
                            <a-button @click="selectDirectory('newAvailableRootDir')">
                                <template #icon><FolderOpenOutlined /></template>
                                Browse
                            </a-button>
                        </a-col>
                        <a-col flex="none">
                            <a-button type="dashed" @click="handleAddAvailableRootDir" :disabled="!newAvailableRootDirInput.trim()">
                                <template #icon><PlusOutlined /></template>
                                Add Directory
                            </a-button>
                        </a-col>
                    </a-row>

                    <div style="margin-top: 10px; margin-bottom: 10px; max-height: 150px; overflow-y: auto; border: 1px solid #d9d9d9; padding: 8px; border-radius: 4px;">
                        <span v-if="editableAvailableRootDirs.length === 0" style="color: #888;">
                            No available root directories defined. Add directories that might contain your source files.
                        </span>
                        <a-tag v-for="dir in editableAvailableRootDirs" :key="dir" closable
                            @close="handleRemoveAvailableRootDir(dir)" 
                            style="margin-bottom: 4px; white-space: normal; height: auto; padding: 4px 8px; line-height: 1.5; display: block; background-color: #f0f0f0; border-color: #d9d9d9;">
                            <template #closeIcon><DeleteOutlined style="color: #888;"/></template>
                            {{ dir }}
                        </a-tag>
                    </div>

                    <a-button type="primary" @click="handleSaveAvailableRootDirs" :loading="isSavingAvailableDirs || coverageStore.isLoadingInfo">
                        <template #icon><SaveOutlined /></template>
                        Save Available Root Directories to Info File
                    </a-button>
                     <a-alert message="Saving will update the list of directories the tool searches for source files within the loaded .json info file. This is useful if source files are not found or their locations change." type="info" show-icon style="margin-top: 10px;"/>
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
