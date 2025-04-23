import { createApp } from 'vue'
import { createPinia } from 'pinia'
import Antd from 'ant-design-vue'
import App from './App.vue'
import 'ant-design-vue/dist/reset.css'

// 创建 Pinia 实例
const pinia = createPinia()

// 创建应用实例并挂载
const app = createApp(App)

// 使用 Pinia
app.use(pinia)

// 使用 Ant Design Vue
app.use(Antd)

// 挂载应用
app.mount('#app')