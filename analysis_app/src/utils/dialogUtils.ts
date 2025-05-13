import { open, type DialogFilter } from '@tauri-apps/plugin-dialog';

interface SingleFileOptions {
  filters?: DialogFilter[];
  defaultPath?: string;
  title?: string;
}

/**
 * Opens a dialog to select a single file.
 * @param options Configuration for the file dialog.
 * @returns A promise that resolves to the path of the selected file, or null if no file was selected.
 */
export async function selectSingleFile(options: SingleFileOptions): Promise<string | null> {
  const result = await open({
    ...options,
    multiple: false,
    directory: false,
  });
  if (Array.isArray(result)) {
    // Should not happen with multiple: false, but handle defensively
    return result.length > 0 ? result[0] : null;
  }
  return result; // string | null
}

interface SingleDirectoryOptions {
  defaultPath?: string;
  title?: string;
  recursive?: boolean; // Note: recursive is for tauri-plugin-fs, not dialog standard. Dialog's directory picker is inherently for a single dir.
}

/**
 * Opens a dialog to select a single directory.
 * @param options Configuration for the directory dialog.
 * @returns A promise that resolves to the path of the selected directory, or null if no directory was selected.
 */
export async function selectSingleDirectory(options: SingleDirectoryOptions): Promise<string | null> {
  const result = await open({
    ...options,
    multiple: false,
    directory: true,
  });
  if (Array.isArray(result)) {
    // Should not happen with multiple: false, but handle defensively
    return result.length > 0 ? result[0] : null;
  }
  return result; // string | null
}
