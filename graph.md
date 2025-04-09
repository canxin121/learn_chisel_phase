graph TD
    subgraph MuxCondPropagator 流程
        direction LR

        A("transform(电路)") --> B["获取内部条件(ModuleInternalCondsMapProvider)"];
        B --> C["构建模块映射(名称 -> DefModule)"];
        C --> D["初始化缓存(模块实例 -> 结果)"];
        D --> E["预计算顶层名称(用于中间线检查)"];
        E --> F["启动递归:processModule(主模块, [主模块])"];

        subgraph processModule
            direction TB
            G["processModule(模块名, 实例路径)"] --> H{"缓存命中?(模块名, 实例路径)"};
            H -- 是 --> I["返回缓存结果"];
            H -- 否 --> J["获取模块定义"];
            J --> K{"模块类型?"};
            K -- Module/DefClass --> L["调用 transformModule(模块, ..., processModule)"];
            K -- ExtModule/IntModule --> M["创建默认结果(无条件)"];
            K -- 其他/未找到 --> N["错误: 未知/未找到"];
            L --> O["缓存结果"];
            M --> O;
            O --> P["返回新结果"];
            I --> Q((结束 processModule));
            P --> Q;
        end

        subgraph transformModule
            direction TB
            TM_Start["transformModule(...)"] --> TM1["收集本地条件源"];
            TM1 --> TM2["处理子实例(递归调用 processModule, 收集子条件源)"];
            TM2 --> TM3["合并本地和子条件源"];
            TM3 --> TM4{"发现任何条件?"};
            TM4 -- 否 --> TM_RetUnchanged["返回 ModuleTransformResult(原模块, None)"];
            TM4 -- 是 --> TM5["构建输出 Bundle 类型"];
            TM5 --> TM6["创建新输出端口 (_mux_cond)"];
            TM6 --> TM7["更新模块端口列表"];
            TM7 --> TM8["识别需中间线的本地条件(对照顶层名称检查)"];
            TM8 --> TM9["生成中间线定义 (DefWire)"];
            TM9 --> TM10["生成中间线默认连接 (Connect to 0)"];
            TM10 --> TM11["修改 Body: 添加连接(Node -> 中间线)"];
            TM11 --> TM12["生成最终输出端口连接(源 -> 输出端口字段)"];
            TM12 --> TM13["组装最终模块 Body(线 + 默认 + 修改后 Body + 输出连接)"];
            TM13 --> TM14["创建转换后的模块定义"];
            TM14 --> TM_RetTransformed["返回 ModuleTransformResult(转换后模块, Some(端口信息))"];
            TM_RetUnchanged --> TM_End((结束 transformModule));
            TM_RetTransformed --> TM_End;
        end

        F --> G;  
        L --> TM_Start;

        Q --> S{递归结束?}; 
        S -- 是 --> T["从缓存收集最终模块定义"];
        T --> U["包含未处理的原始模块"];
        U --> V["构建最终电路(包含转换后模块)"];
        V --> W["返回转换后的电路"];

        N --- Z((错误退出));
    end