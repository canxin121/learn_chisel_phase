<script setup lang="ts">
import { ref, computed, reactive } from 'vue';
// Import Collapse and CollapsePanel
import { Collapse as ACollapse, CollapsePanel as ACollapsePanel, Table as ATable, Button as AButton, Input as AInput, Tooltip as ATooltip, Space as ASpace, message, Alert as AAlert } from 'ant-design-vue';
import type { Key } from 'ant-design-vue/es/table/interface';
import { FolderOpenOutlined, SaveOutlined } from '@ant-design/icons-vue';
import { useCoverageStore } from "../stores/coverageStore";
import { open } from '@tauri-apps/plugin-dialog';
const coverageStore = useCoverageStore();
interface ModuleTableItem {
    key: string;
    moduleName: string;
    filePath: string | null;
    rootDir: string | null;
}
const newRootDir = ref('');
const selectedRowKeys = ref<Key[]>([]);
const isApplying = ref(false);
const tableData = computed((): ModuleTableItem[] => {
    if (!coverageStore.coverageInfo?.moduleInfoMap) {
        return [];
    }
    return Object.entries(coverageStore.coverageInfo.moduleInfoMap).map(([moduleName, info]) => ({
        key: moduleName,
        moduleName: moduleName,
        filePath: info.filePath,
        rootDir: info.rootDir,
    }));
});
const columns = [
    {
        title: 'Module Name',
        dataIndex: 'moduleName',
        key: 'moduleName',
        ellipsis: true,
    },
    {
        title: 'Current File Path',
        dataIndex: 'filePath',
        key: 'filePath',
        ellipsis: true,
        customRender: ({ text }: { text: string | null }) => text || 'N/A',
    },
    {
        title: 'Current Root Dir',
        dataIndex: 'rootDir',
        key: 'rootDir',
        ellipsis: true,
        customRender: ({ text }: { text: string | null }) => text || 'N/A',
    },
];
const rowSelection = reactive({
    selectedRowKeys: selectedRowKeys,
    onChange: (keys: Key[]) => {
        selectedRowKeys.value = keys;
    },
});
const selectDirectory = async () => {
    try {
        const selected = await open({
            directory: true,
            multiple: false,
            title: 'Select New Root Directory',
        });
        if (selected && typeof selected === 'string') {
            newRootDir.value = selected;
        }
    } catch (err) {
        message.error(`Failed to open directory dialog: ${err}`);
        console.error("Error opening directory dialog:", err);
    }
};
const applyNewRootDir = async () => {
    if (selectedRowKeys.value.length === 0) {
        message.warn('Please select at least one module to update.');
        return;
    }
    if (!newRootDir.value) {
        message.warn('Please enter or select a new root directory.');
        return;
    }
    isApplying.value = true;
    // Ensure keys are strings before passing to the store function
    const modulesToUpdate = selectedRowKeys.value.map(String);

    try {
        // Call the renamed batch update action in the store
        await coverageStore.updateFileRootBatch(modulesToUpdate, newRootDir.value);

        // Success handling is now mostly within the store action,
        // but we still clear local state here on success.
        message.success(`Batch root directory update request processed successfully for ${modulesToUpdate.length} module(s).`); // Simplified message
        selectedRowKeys.value = [];
        newRootDir.value = '';

    } catch (error) {
        // Error handling is also mostly within the store action.
        // We might just log it here or rely on the store's message.
        message.error(`Batch root directory update request failed. See console or previous messages for details.`);
        console.error("Error during batch root directory update process:", error);
        // Decide whether to clear selection on failure
        // selectedRowKeys.value = [];
    } finally {
        isApplying.value = false;
    }
};
</script>
<template>
    <!-- Replace ACard with ACollapse and ACollapsePanel -->
    <a-collapse accordion>
        <a-collapse-panel key="1" header="Module Root Directory Editor">
            <a-space direction="vertical" style="width: 100%">
                <a-alert v-if="!coverageStore.originalInfoFilePath" type="warning"
                    message="Load a Coverage Info file to manage module source paths." show-icon />
                <template v-if="coverageStore.originalInfoFilePath">
                    <a-row :gutter="16" align="bottom">
                        <a-col flex="auto">
                            <a-tooltip
                                title="Enter the new root directory containing the source files for the selected modules.">
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
                            <a-button type="primary" @click="applyNewRootDir" :loading="isApplying"
                                :disabled="selectedRowKeys.length === 0 || !newRootDir">
                                <template #icon>
                                    <SaveOutlined />
                                </template>
                                Apply to Selected ({{ selectedRowKeys.length }})
                            </a-button>
                        </a-col>
                    </a-row>
                    <a-table :dataSource="tableData" :columns="columns" :row-selection="rowSelection" size="small"
                        bordered :pagination="{ pageSize: 10, hideOnSinglePage: true }" :scroll="{ y: 300 }">
                        <template #bodyCell="{ column, text }">
                            <!-- Custom rendering for ellipsis with tooltip -->
                            <template v-if="column.key === 'filePath' || column.key === 'rootDir'">
                                <a-tooltip :title="text">
                                    <!-- Display the text directly, or 'N/A' if null/undefined -->
                                    <span>{{ text || 'N/A' }}</span>
                                </a-tooltip>
                            </template>
                            <template v-else-if="column.key === 'moduleName'">
                                <a-tooltip :title="text">
                                    <span>{{ text }}</span>
                                </a-tooltip>
                            </template>
                            <!-- Fallback for other columns if needed -->
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

/* Ensure table cells handle long text gracefully */
:deep(.ant-table-cell) {
    white-space: nowrap;
    overflow: hidden;
    text-overflow: ellipsis;
}

/* Add some spacing for the action buttons */
.ant-row {
    margin-bottom: 10px;
}
</style>
