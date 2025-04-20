package firrtl
package ir

import firrtl.Utils.{BoolType} // Import necessary types

import scala.collection.mutable
import scala.io.Source
import java.nio.charset.StandardCharsets
import java.io.{InputStream, IOException} // 导入 InputStream

object CoverageCollectorGenerator {

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
    *   The C++ base name for the signal (e.g., "_reg_signals_Top_I_myVec").
    *   Indices will be appended.
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
      if (portPrefix.startsWith("_cond_pred")) {
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
      } else if (portPrefix.startsWith("_mux_cond")) {
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
      } else if (portPrefix.startsWith("_reg_signals")) {
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
} // End of CoverageCollectorGenerator object
