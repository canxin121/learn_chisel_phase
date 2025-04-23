<script setup lang="ts">
import { useCoverageStore } from "../stores/coverageStore";

// 使用 Pinia Store 替代 props
const coverageStore = useCoverageStore();
</script>

<template>
  <a-card v-if="coverageStore.coverageReport" title="Overall Coverage Summary">
    <a-row :gutter="16">
      <a-col :span="4">
        <a-statistic title="Overall" :value="coverageStore.overallCoverage" :precision="2" suffix="%" />
      </a-col>
      <a-col :span="4">
        <a-statistic title="Conditional Predicates" :value="coverageStore.predicateStats.coverage" :precision="1" suffix="%" />
      </a-col>
      <a-col :span="4">
        <a-statistic title="Mux Conditions" :value="coverageStore.muxStats.coverage" :precision="1" suffix="%" />
      </a-col>
      <a-col :span="4">
        <a-statistic title="Register Bits" :value="coverageStore.registerStats.coverage" :precision="1" suffix="%" />
      </a-col>
      <a-col :span="4">
        <a-statistic title="Total Hit Bins" :value="coverageStore.hitBins" />
      </a-col>
      <a-col :span="4">
        <a-statistic title="Total Bins" :value="coverageStore.totalBins" />
      </a-col>
    </a-row>
  </a-card>
</template>
