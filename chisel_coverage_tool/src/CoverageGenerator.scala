package firrtl
package ir

import firrtl.Utils.{BoolType} // Import necessary types

import scala.collection.mutable
import scala.io.Source
import java.nio.charset.StandardCharsets
import java.io.{InputStream, IOException} // 导入 InputStream
import scala.collection.mutable.ListBuffer // <-- 新增导入

// 导入 CoverageTool 中定义的 NameDictionaries
import firrtl.ir.NameDictionaries

object CoverageCollectorGenerator {

  // --- Helper Functions (Moved from CoverageTool) ---

  /** 辅助函数：转义 JSON 字符串中的特殊字符 */
  private def escapeJsonString(s: String): String = {
    s.replace("\\", "\\\\")
      .replace("\"", "\\\"")
      .replace("\b", "\\b")
      .replace("\f", "\\f")
      .replace("\n", "\\n")
      .replace("\r", "\\r")
      .replace("\t", "\\t")
  }

  /** 辅助数据结构，用于存储展开后的标量信号信息和其原始名称 */
  private case class FlattenedSignalData(
      originalName: String, // 原始（未展开）的信号名称
      scalarType: GroundType, // 展开后的标量类型
      info: Info // 原始的 Info
  )

  /** 递归地将向量/数组信号展开为标量信号数据 */
  private def flattenSignalInfo(
      originalName: String, // 传入原始名称
      fieldType: Type,
      originalInfo: Info
  ): Seq[FlattenedSignalData] = {
    val results = ListBuffer[FlattenedSignalData]()

    def run(currentType: Type): Unit = {
      currentType match {
        case VectorType(elementType, size) =>
          if (size > 0) {
            (0 until size).foreach { _ => // 递归处理每个元素，但结果共享原始名称
              run(elementType)
            }
          } // 零长度向量忽略
        case _: BundleType =>
          // 忽略 Bundle
          ()
        case groundType: GroundType =>
          // 基本情况：遇到标量类型，添加结果
          results += FlattenedSignalData(
            originalName = originalName, // 使用传入的原始名称
            scalarType = groundType,
            info = originalInfo
          )
        case otherType =>
          println(
            s"[WARN] Encountered unexpected type '${otherType.serialize}' for original field '$originalName' during flattening. Skipping."
          )
          ()
      }
    }

    run(fieldType)
    results.toList
  }

  // --- End of Moved Helper Functions ---

  /** Reads a resource file from the classpath. Assumes the resource is packaged
    * within the JAR.
    * @param resourcePath
    *   Path relative to the classpath root (e.g., "templates/my_template.txt")
    * @return
    *   The content of the file as a string.
    */
  private def readResource(resourcePath: String): String = {
    // 获取当前类的 ClassLoader
    val classLoader = getClass.getClassLoader
    // 从 ClassLoader 获取资源的 InputStream
    val inputStream: InputStream = classLoader.getResourceAsStream(resourcePath)

    if (inputStream == null) {
      throw new IOException(
        s"Cannot find resource '$resourcePath' on the classpath."
      )
    }

    try {
      // 使用 Source 读取 InputStream 内容
      Source
        .fromInputStream(inputStream, StandardCharsets.UTF_8.name())
        .mkString
    } finally {
      // 确保 InputStream 被关闭
      if (inputStream != null) inputStream.close()
    }
  }

  /** Escapes "__" sequences in signal names for C++ compatibility. Verilator
    * often uses "__" internally, so we replace it to avoid clashes.
    */
  def escapeSignalName(original: String): String = {
    // Replace all occurrences of "__" with "___05F" (triple underscore + hex for underscore)
    // Also escape potential quotes for JSON safety, although unlikely in FIRRTL names
    original.replace("__", "___05F").replace("\"", "\\\"")
  }

  /** Extracts the bit width from supported ground FIRRTL types. Throws an
    * exception for types that don't have a clear width in this context (like
    * Bundle).
    */
  private def getSignalWidth(tpe: Type): BigInt = tpe match {
    case UIntType(IntWidth(w)) => w
    case SIntType(IntWidth(w)) => w
    case AnalogType(IntWidth(w)) =>
      w // Note: Analog width might not always be meaningful for coverage? Keep for now.
    case ClockType | ResetType | AsyncResetType | BoolType =>
      BigInt(1) // Treat as 1-bit signals
    // --- 新增: 处理没有显式宽度的 UInt/SInt ---
    case _: UIntType =>
      println(
        s"[WARN] CoverageCollectorGenerator: Encountered UIntType without explicit width (${tpe.serialize}). Assuming width 1."
      )
      BigInt(1)
    case _: SIntType =>
      println(
        s"[WARN] CoverageCollectorGenerator: Encountered SIntType without explicit width (${tpe.serialize}). Assuming width 1."
      )
      BigInt(1)
    // --- 结束新增 ---
    case _ =>
      throw new IllegalArgumentException(
        s"CoverageCollectorGenerator: Cannot extract width from unsupported ground type: ${tpe.getClass.getName} (${tpe.serialize})"
      )
  }

  /** Recursively generates C++ emplace_back calls for register coverage points.
    * Handles nested VectorTypes by flattening them and appending indices.
    * Catches expected ground types and attempts to process them. Explicitly
    * ignores Bundles and warns on other unexpected types.
    *
    * @param baseSignalName
    *   The C++ base name for the signal (e.g., "_rs_Top_I_myVec"). Indices will
    *   be appended.
    * @param signalType
    *   The FIRRTL type of the signal or sub-signal.
    * @param sb
    *   The StringBuilder to append the C++ code to.
    * @param topModuleName
    *   The name of the top Verilator module (needed for pointer casting).
    * @return
    *   The number of individual (ground type) coverage points generated for
    *   this branch.
    */
  private def generateRegisterPointsRecursive(
      baseSignalName: String,
      signalType: Type,
      sb: StringBuilder,
      topModuleName: String // Name of the top Verilator module
  ): Int = {
    var pointsAdded = 0
    signalType match {
      // --- Case 1: VectorType (Recursive Step) ---
      case VectorType(elementType, size) =>
        if (size > 0) {
          for (i <- 0 until size) {
            val elementSignalName = s"${baseSignalName}_${i}" // Append index
            pointsAdded += generateRegisterPointsRecursive(
              elementSignalName,
              elementType,
              sb,
              topModuleName
            )
          }
        } else {
          sb.append(
            s"        // Note: Skipping zero-size vector '$baseSignalName'.\n"
          )
        }

      // --- Case 2: BundleType (Explicitly Ignored) ---
      case _: BundleType =>
        sb.append(
          s"""        // Warning: Skipping BundleType '$baseSignalName' encountered during register point generation. Register coverage applies to ground or vector-of-ground types.\n"""
        )

      // --- Case 3: Ground Types (Base Case) ---
      case groundType =>
        try {
          val width = getSignalWidth(groundType)
          val escapedName = escapeSignalName(
            baseSignalName
          ) // Escape before C++ insertion

          sb.append(
            // Use reinterpret_cast for the void* pointer
            s"""        register_points.emplace_back("${baseSignalName}", ${width.toInt}, reinterpret_cast<const void*>(&top->${escapedName}));\n"""
          )
          pointsAdded = 1

        } catch {
          case e: IllegalArgumentException =>
            sb.append(
              s"""        // Error generating coverage point for '$baseSignalName': Could not determine width for type '${groundType.serialize}'. ${e.getMessage}\n"""
            )
          case e: Exception =>
            sb.append(
              s"""        // Unexpected error generating coverage point for '$baseSignalName' with type '${groundType.serialize}': ${e.getMessage}\n"""
            )
        }
    }
    pointsAdded
  }

  /** Generates the content for `coverage_collector.h` (header-only). */
  def generateCoverageCollectorHeader(
      topModuleName: String,
      exportInfos: List[TopLevelExportInfo]
  ): String = {
    // 路径现在相对于 classpath 根目录
    val template = readResource(
      "templates/coverage_collector_header.template.h"
    )
    val emplaceBackSb = new StringBuilder

    // --- Generate Specific emplace_back Calls Based on exportInfos ---
    var condPointsCount = 0
    var muxPointsCount = 0
    var regPointsCount = 0

    exportInfos.foreach { info =>
      val portPrefix = info.portName
      if (portPrefix.startsWith("_cp")) {
        info.exportedSignals.foreach { signal =>
          if (
            signal.fieldtype != BoolType && signal.fieldtype != ClockType && signal.fieldtype != ResetType && signal.fieldtype != AsyncResetType
          ) {
            emplaceBackSb.append(
              f"""  // Warning: Expected Bool/Clock/Reset type for predicate '${signal.fieldName}', but got ${signal.fieldtype.serialize}. Assuming 1-bit (uint8_t*).\n"""
            )
          }
          val signalFullName = s"${portPrefix}_${signal.fieldName}"
          val escapedName = escapeSignalName(signalFullName)
          emplaceBackSb.append(
            s"""  try {
    condition_points.emplace_back("${signalFullName}", &top->${escapedName});
  } catch (...) {
    std::cerr << "Error adding cond point ${escapedName}" << std::endl;
  }
"""
          )
          condPointsCount += 1
        }
      } else if (portPrefix.startsWith("_mc")) {
        info.exportedSignals.foreach { signal =>
          if (
            signal.fieldtype != BoolType && signal.fieldtype != ClockType && signal.fieldtype != ResetType && signal.fieldtype != AsyncResetType
          ) {
            emplaceBackSb.append(
              f"""  // Warning: Expected Bool/Clock/Reset type for mux condition '${signal.fieldName}', but got ${signal.fieldtype.serialize}. Assuming 1-bit (uint8_t*).\n"""
            )
          }
          val signalFullName = s"${portPrefix}_${signal.fieldName}"
          val escapedName = escapeSignalName(signalFullName)
          emplaceBackSb.append(
            s"""  try {
    mux_condition_points.emplace_back("${signalFullName}", &top->${escapedName});
  } catch (...) {
    std::cerr << "Error adding mux point ${escapedName}" << std::endl;
  }
"""
          )
          muxPointsCount += 1
        }
      } else if (portPrefix.startsWith("_rs")) {
        info.exportedSignals.foreach { signal =>
          val initialSignalFullName = s"${portPrefix}_${signal.fieldName}"
          emplaceBackSb.append(
            s"  // Register signal: ${initialSignalFullName} (${signal.fieldtype.serialize})\n"
          )
          try {
            val pointsGenerated = generateRegisterPointsRecursive(
              initialSignalFullName,
              signal.fieldtype,
              emplaceBackSb, // Use the dedicated StringBuilder
              topModuleName
            )
            regPointsCount += pointsGenerated
          } catch {
            case e: Exception =>
              emplaceBackSb.append(
                s"  // FATAL ERROR during generation for ${initialSignalFullName}: ${e.getMessage}\n"
              )
          }
        }
      } else {
        emplaceBackSb.append(s"""
  // Warning: Encountered unrecognized export port type prefix for port name '${info.portName}' during coverage initialization. Associated signals (if any) are being ignored.
""")
      }
    }

    // Replace placeholders in the template
    template
      .replace("{{TOP_MODULE_NAME}}", topModuleName)
      .replace("{{EMPLACE_BACK_CALLS}}", emplaceBackSb.toString())
      .replace("{{COND_POINTS_COUNT}}", condPointsCount.toString)
      .replace("{{MUX_POINTS_COUNT}}", muxPointsCount.toString)
      .replace("{{REG_POINTS_COUNT}}", regPointsCount.toString)
  }

  // --- generateSimMain uses template ---
  /** Generates the content for `sim_main.cpp`. */
  def generateSimMain(topModuleName: String): String = {
    // 路径现在相对于 classpath 根目录
    val template = readResource("templates/sim_main.template.cpp")
    template.replace("{{TOP_MODULE_NAME}}", topModuleName)
  }

  // --- generateCoverageBashScript uses template ---
  def generateCoverageBashScript(topModuleName: String): String = {
    // 路径现在相对于 classpath 根目录
    val template = readResource("templates/coverage.template.bash")
    template.replace("{{TOP_MODULE_NAME}}", topModuleName)
  }

  // --- generateCoverageInfoJson (Moved from CoverageTool and made public) ---
  /** 生成包含 TopLevelExportInfo 和名称映射信息的 JSON 字符串
    *
    * @param topModuleName
    *   顶层模块名称
    * @param exportInfos
    *   端口和信号信息列表 (信号名是压缩后的)
    * @param nameDictionaries
    *   // <-- 修改参数类型 包含 mux, cond, reg 三个独立名称字典的结构
    * @return
    *   JSON 格式的字符串
    */
  def generateCoverageInfoJson(
      topModuleName: String,
      exportInfos: List[TopLevelExportInfo],
      nameDictionaries: NameDictionaries // <-- 修改参数类型
  ): String = {
    val portsJson = exportInfos
      .map { portInfo =>
        val (portTypeString, relevantDictionary) =
          portInfo.portName match { // <-- 根据端口名选择字典
            case "_cp" => ("cond_pred", nameDictionaries.cond)
            case "_mc" => ("mux_cond", nameDictionaries.mux)
            case "_rs" => ("register", nameDictionaries.reg)
            case other =>
              (
                escapeJsonString(other),
                Map.empty[String, String]
              ) // 未知端口类型，使用空字典
          }

        // 获取当前端口涉及的压缩信号名
        val portCompressedNames =
          portInfo.exportedSignals.map(_.fieldName).toSet

        // 过滤出当前端口相关的名称映射 (从对应的字典中过滤)
        val portSpecificNameDictionary =
          relevantDictionary.filter { // <-- 使用 relevantDictionary
            case (compressed, _) => portCompressedNames.contains(compressed)
          }

        // 生成当前端口的 nameMapping JSON 对象
        val nameMappingJson = portSpecificNameDictionary
          .map { case (compressed, original) =>
            s"""      "${escapeJsonString(compressed)}": "${escapeJsonString(
                original
              )}""""
          }
          .mkString(",\n")

        // 展开信号，保留压缩名称和原始名称
        val flattenedSignalsWithNames = portInfo.exportedSignals.flatMap {
          signal =>
            val compressedName = signal.fieldName
            // 从对应的字典查找原始名称
            val originalFullName =
              relevantDictionary.getOrElse( // <-- 使用 relevantDictionary
                compressedName, {
                  println(
                    s"[WARN] CoverageGenerator: Cannot find original name for compressed name '$compressedName' in ${portTypeString} dictionary. Using compressed name as original."
                  )
                  compressedName // Fallback
                }
              )
            val fullCompressedSignalName =
              s"${portInfo.portName}_$compressedName"

            // flattenSignalInfo 保持不变，因为它处理类型展开
            flattenSignalInfo(
              originalFullName, // 传递正确的原始名称
              signal.fieldtype,
              signal.info
            ).map { flatData =>
              (
                fullCompressedSignalName, // 完整压缩名 (带端口前缀)
                flatData.originalName, // 原始信号名 (来自字典)
                flatData.scalarType, // 展开后的类型
                flatData.info // 原始信息
              )
            }
        }

        // 生成信号 JSON (逻辑不变)
        val signalsJson = flattenedSignalsWithNames
          .sortBy(_._2) // 按原始名称排序
          .map { case (compName, origName, scalarType, info) =>
            s"""      {
               |        "compressed_name": "${escapeJsonString(compName)}",
               |        "type": "${escapeJsonString(scalarType.serialize)}",
               |        "info": "${escapeJsonString(info.serialize)}"
               |      }""".stripMargin
          }
          .mkString(",\n")

        // 构建端口的 JSON 对象 (逻辑不变)
        s"""    {
           |      "type": "$portTypeString",
           |      "signals": [
           |$signalsJson
           |      ],
           |      "name_mapping": {
           |$nameMappingJson
           |      }
           |    }""".stripMargin
      }
      .mkString(",\n")

    // 生成顶层 JSON 结构 (逻辑不变)
    s"""{
       |  "top_module_name": "${escapeJsonString(topModuleName)}",
       |  "exported_ports": [
       |$portsJson
       |  ]
       |}""".stripMargin
  }

} // End of CoverageCollectorGenerator object
