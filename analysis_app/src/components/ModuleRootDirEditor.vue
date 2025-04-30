<script setup lang="ts">
import { ref, computed, reactive } from 'vue';
import { Collapse as ACollapse, CollapsePanel as ACollapsePanel, Table as ATable, Button as AButton, Input as AInput, Tooltip as ATooltip, Space as ASpace, message, Alert as AAlert, TableColumnsType } from 'ant-design-vue';
import type { Key } from 'ant-design-vue/es/table/interface';
import { FolderOpenOutlined, SaveOutlined } from '@ant-design/icons-vue';
import { useCoverageStore } from "../stores/coverageStore";
import { open } from '@tauri-apps/plugin-dialog';
// Import ModuleInfo and SourceFileIdentifier
import type { ModuleInfo, SourceFileIdentifier } from '../types/CoverageInfo';

const coverageStore = useCoverageStore();

// MODIFIED: Interface now represents a single source file entry
interface SourceFileTableItem {
    key: string; // Unique key: moduleName::relativePath
    moduleName: string;
    relativePath: string;
    rootDir: string | null;
}

const newRootDir = ref('');
// selectedRowKeys now stores the unique keys of selected SourceFileTableItem
const selectedRowKeys = ref<Key[]>([]);
const isApplying = ref(false);

// MODIFIED: Flatten moduleInfoMap into a list of source files
const tableData = computed((): SourceFileTableItem[] => {
    if (!coverageStore.coverageInfo?.moduleInfoMap) {
        return [];
    }
    const items: SourceFileTableItem[] = [];
    Object.entries(coverageStore.coverageInfo.moduleInfoMap).forEach(([moduleName, moduleInfo]: [string, ModuleInfo]) => {
        if (moduleInfo.sourceFiles) {
            Object.entries(moduleInfo.sourceFiles).forEach(([relativePath, sourceFileInfo]) => {
                items.push({
                    key: `${moduleName}::${relativePath}`, // Create unique key
                    moduleName: moduleName,
                    relativePath: relativePath,
                    rootDir: sourceFileInfo.rootDir ?? null,
                });
            });
        }
    });
    // Optional: Sort the items, e.g., by module name then relative path
    items.sort((a, b) => {
        if (a.moduleName !== b.moduleName) {
            return a.moduleName.localeCompare(b.moduleName);
        }
        return a.relativePath.localeCompare(b.relativePath);
    });
    return items;
});

// MODIFIED: Columns now reflect SourceFileTableItem
const columns: TableColumnsType<SourceFileTableItem> = [
    {
        title: 'Module Name',
        dataIndex: 'moduleName',
        key: 'moduleName',
        ellipsis: true,
        width: 200,
    },
    {
        title: 'Relative Path',
        dataIndex: 'relativePath',
        key: 'relativePath',
        ellipsis: true,
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

// MODIFIED: Apply logic now targets selected source files
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

    // Map selected keys (moduleName::relativePath) back to SourceFileIdentifier objects
    const identifiersToUpdate: SourceFileIdentifier[] = selectedRowKeys.value.map(key => {
        const [moduleName, relativePath] = String(key).split('::');
        return { moduleName, relativePath };
    }).filter(id => id.moduleName && id.relativePath); // Basic validation

    if (identifiersToUpdate.length !== selectedRowKeys.value.length) {
         console.warn("Some selected keys could not be parsed into identifiers:", selectedRowKeys.value);
         // Optionally inform the user
    }

    if (identifiersToUpdate.length === 0) {
        message.warn('No valid source file identifiers could be determined from selection.');
        isApplying.value = false;
        return;
    }


    try {
        // Call the updated store action with the list of identifiers
        await coverageStore.updateFileRootBatch(identifiersToUpdate, newRootDir.value);

        message.success(`Batch root directory update request processed successfully for ${identifiersToUpdate.length} source file(s).`);
        selectedRowKeys.value = []; // Clear selection on success
        newRootDir.value = ''; // Clear input on success

    } catch (error) {
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
    <a-collapse accordion>
        <a-collapse-panel key="1" header="Source File Root Directory Editor"> <!-- Changed header -->
            <a-space direction="vertical" style="width: 100%">
                <a-alert v-if="!coverageStore.originalInfoFilePath" type="warning"
                    message="Load a Coverage Info file to manage source file paths." show-icon />
                <template v-if="coverageStore.originalInfoFilePath">
                    <a-row :gutter="16" align="bottom">
                        <a-col flex="auto">
                            <a-tooltip
                                title="Enter the new root directory for the selected source file(s)."> <!-- Changed tooltip -->
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
                    <!-- Table uses updated columns and data -->
                    <a-table :dataSource="tableData" :columns="columns" :row-selection="rowSelection" size="small"
                        bordered :pagination="{ pageSize: 10, hideOnSinglePage: true }" :scroll="{ y: 300 }">
                        <template #bodyCell="{ column, text }">
                            <!-- Custom rendering for ellipsis with tooltip -->
                            <!-- MODIFIED: Check against new keys -->
                            <template v-if="column.key === 'moduleName' || column.key === 'relativePath' || column.key === 'rootDir'">
                                <a-tooltip :title="text">
                                    <span>{{ text || 'N/A' }}</span>
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
