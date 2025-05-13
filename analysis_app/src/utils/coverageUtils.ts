import type { CSSProperties } from 'vue';

// --- 常量 ---
const CondPrefix = "_cp_";
const MuxPrefix = "_mc_";
const RegPrefix = "_rs_";

// --- 解析 ---
// 简化 parseSignalName 以仅提取类型和基础名称
export function parseCompressedName(compressedName: string): { type: 'predicate' | 'mux' | 'register' | 'unknown'; baseName: string } {
  if (typeof compressedName !== 'string' || !compressedName) {
    console.warn(`[coverageUtils] parseCompressedName called with invalid name:`, compressedName);
    return { type: 'unknown', baseName: "INVALID_COMPRESSED_NAME" };
  }

  let name = compressedName;
  let type: 'predicate' | 'mux' | 'register' | 'unknown' = 'unknown';

  if (name.startsWith(CondPrefix)) {
    name = name.substring(CondPrefix.length);
    type = 'predicate';
  } else if (name.startsWith(MuxPrefix)) {
    name = name.substring(MuxPrefix.length);
    type = 'mux';
  } else if (name.startsWith(RegPrefix)) {
    name = name.substring(RegPrefix.length);
    type = 'register';
  } else {
    console.warn(`[coverageUtils] parseCompressedName: Unknown prefix for name: ${compressedName}`);
  }

  const baseName = name;

  return { type, baseName };
}

// --- 格式化函数 ---
export const formatCoverage = (coverage?: number): string => {
  if (coverage === undefined || coverage === null) return "-";
  return `${coverage.toFixed(1)}%`;
};
export const formatPercent = (value?: number): string => {
  if (value === undefined || value === null) return '-';
  return `${value.toFixed(1)}%`;
};
export const formatCount = (value?: number): string => {
  if (value === undefined || value === null) return '-';
  if (value >= 1e9) return (value / 1e9).toFixed(1) + 'G';
  if (value >= 1e6) return (value / 1e6).toFixed(1) + 'M';
  if (value >= 1e3) return (value / 1e3).toFixed(1) + 'k';
  return value.toString();
};

// --- 样式函数 ---
export const getNodeStyle = (coverage?: number): CSSProperties => {
  if (coverage === undefined || coverage === null || coverage === 100) {
    return {};
  }
  let color = '';
  if (coverage < 50) color = 'hsl(0, 80%, 50%)';
  else if (coverage < 80) color = 'hsl(39, 100%, 50%)';
  else color = 'hsl(60, 80%, 45%)';
  return { color: color, fontWeight: 'bold' };
};
export const getConditionTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
export const getBitTagColor = (hit: boolean | undefined): string => {
  return hit === true ? 'success' : 'error';
};
