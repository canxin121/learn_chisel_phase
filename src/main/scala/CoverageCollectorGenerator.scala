package firrtl
package ir

import firrtl.Utils.{BoolType} // Import necessary types

import scala.collection.mutable

object CoverageCollectorGenerator {

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
      exportInfos: List[TopLevelExportInfo] // List of exported signals/ports
  ): String = {
    val sb = new StringBuilder
    // --- C++ Header Start ---
    sb.append(s"""// --- BEGIN GENERATED coverage_collector.h (HEADER-ONLY) ---
#ifndef COVERAGE_COLLECTOR_H
#define COVERAGE_COLLECTOR_H

#include <vector>
#include <string>
#include <cstdint> // For fixed-width integers
#include <iostream> // For warnings/output
#include <iomanip>  // For report formatting
#include <utility>  // For std::move
#include <algorithm> // For std::max
#include <stdexcept> // For std::runtime_error
#include <fstream>   // For file output (JSON export)
#include <limits>    // For numeric_limits (JSON precision)
#include <sstream>   // For string stream (used in detailed report)

// Include Verilator header for DUT access
#include "V${topModuleName}.h"

// Forward declaration for CoverageCollector if needed by structs (not strictly necessary here)
// class CoverageCollector;

// --- Helper Struct: Condition/Mux Coverage Point ---
struct ConditionCoveragePoint {
    std::string name;
    bool hit_true;
    bool hit_false;
    const uint8_t* signal_ptr; // Pointer to 1-bit signal (CData -> uint8_t)

    // Constructor
    ConditionCoveragePoint(std::string n, const uint8_t* ptr)
        : name(std::move(n)), hit_true(false), hit_false(false), signal_ptr(ptr) {
         if (!signal_ptr) {
             std::cerr << "Warning: ConditionCoveragePoint '" << name << "' created with null signal pointer." << std::endl;
         }
    }

    void update() {
        if (!signal_ptr) return;
        if (*signal_ptr) {
            hit_true = true;
        } else {
            hit_false = true;
        }
    }

    double get_hit_rate() const {
        double hits = (hit_true ? 1.0 : 0.0) + (hit_false ? 1.0 : 0.0);
        return hits / 2.0;
    }

    void print_status(const char* type_prefix = "[Cond]") const {
        std::cout << "  " << type_prefix << " " << std::left << std::setw(60) << name << ": ";
        std::cout << (hit_true ? "HIT_TRUE " : "NOT_TRUE ") << " | ";
        std::cout << (hit_false ? "HIT_FALSE" : "NOT_FALSE");
        std::cout << " (" << std::fixed << std::setprecision(1) << get_hit_rate() * 100.0 << "%)" << std::endl;
    }

    int getTotalBins() const { return 2; }
    int getHitBins() const { return (hit_true ? 1 : 0) + (hit_false ? 1 : 0); }

    // Method to export this point as a JSON object string (helper for exportJson)
    void exportJson(std::ostream& os) const {
        os << "    {\\n";
        os << "      \\\"name\\\": \\\"" << name << "\\\",\\n"; // Name already escaped if needed by escapeSignalName
        os << "      \\\"hit_true\\\": " << std::boolalpha << hit_true << ",\\n";
        os << "      \\\"hit_false\\\": " << std::boolalpha << hit_false << ",\\n";
        os << "      \\\"bins_hit\\\": " << getHitBins() << ",\\n";
        os << "      \\\"bins_total\\\": " << getTotalBins() << ",\\n";
        os << "      \\\"coverage_percent\\\": " << std::fixed << std::setprecision(2) << get_hit_rate() * 100.0 << "\\n";
        os << "    }";
    }
};

// --- Helper Struct: Register Bit Coverage ---
struct RegisterBitCoverage {
    bool hit_zero = false;
    bool hit_one = false;

    void update(bool current_value) {
        if (current_value) {
            hit_one = true;
        } else {
            hit_zero = true;
        }
    }

    bool is_covered() const { return hit_zero && hit_one; }
    double get_coverage() const { return (hit_zero ? 0.5 : 0.0) + (hit_one ? 0.5 : 0.0); }

    // Helper to describe missing coverage for a bit
    std::string get_missing_status() const {
        if (is_covered()) return ""; // Should not be called if covered
        if (!hit_zero && !hit_one) return "MISSING_BOTH"; // Should be rare after init
        if (!hit_zero) return "MISSING_0";
        if (!hit_one) return "MISSING_1";
        return ""; // Should not happen
    }

    // Returns a short symbol representing the coverage status (e.g., "ZO", "Z!", "!O")
    std::string get_status_symbol() const {
        if (is_covered()) return "ZO";
        if (!hit_zero && !hit_one) return "!!";
        if (!hit_zero) return "!O";
        if (!hit_one) return "Z!";
        return "??"; // Error case
    }
};

// --- Helper Struct: Register Coverage Point ---
struct RegisterCoveragePoint {
    std::string name;
    int width;
    std::vector<RegisterBitCoverage> bit_coverage;
    const void* signal_ptr; // Generic pointer to register data

    RegisterCoveragePoint(std::string n, int w, const void* ptr)
        : name(std::move(n)), width(w), signal_ptr(ptr) {
        if (w > 0) {
            bit_coverage.resize(w);
        } else {
             std::cerr << "Warning: RegisterCoveragePoint '" << name << "' created with non-positive width " << w << std::endl;
             width = 0;
        }
         if (!signal_ptr) {
             std::cerr << "Warning: RegisterCoveragePoint '" << name << "' created with null signal pointer." << std::endl;
         }
    }

    // Update bit coverage based on the current value of the register
    void update() {
        if (!signal_ptr || width <= 0 || width != bit_coverage.size()) {
            return; // Safety checks
        }

        try {
            uint64_t current_value_64 = 0;
            bool value_extracted_simple = true;

            // Handle common widths directly for performance
            if (width <= 8) {
                current_value_64 = *(static_cast<const uint8_t*>(signal_ptr));
            } else if (width <= 16) {
                current_value_64 = *(static_cast<const uint16_t*>(signal_ptr));
            } else if (width <= 32) {
                current_value_64 = *(static_cast<const uint32_t*>(signal_ptr));
            } else if (width <= 64) {
                current_value_64 = *(static_cast<const uint64_t*>(signal_ptr));
            } else {
                value_extracted_simple = false; // Need VlWide handling
            }

            if (value_extracted_simple) {
                for (int i = 0; i < width; ++i) {
                    bool bit_value = (current_value_64 >> i) & 1;
                    bit_coverage[i].update(bit_value);
                }
            } else {
                // Handling for Wider Signals (VlWide - typically array of uint32_t)
                const int num_words = (width + 31) / 32;
                const uint32_t* words = static_cast<const uint32_t*>(signal_ptr);
                for (int i = 0; i < width; ++i) {
                    int word_index = i / 32;
                    int bit_in_word = i % 32;
                    if (word_index < num_words) {
                        bool bit_value = (words[word_index] >> bit_in_word) & 1;
                        bit_coverage[i].update(bit_value);
                    } else {
                         std::cerr << "Error: Calculated word_index out of bounds for VlWide access in RegisterCoveragePoint: " << name << ", bit " << i << std::endl;
                    }
                }
            }
        } catch (const std::exception& e) {
            std::cerr << "Error during RegisterCoveragePoint::update() for '" << name << "': " << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Unknown error during RegisterCoveragePoint::update() for '" << name << "'" << std::endl;
        }
    }

    // Calculate the overall coverage percentage for this register
    double get_register_coverage() const {
        if (width <= 0) return 0.0;
        int hits = getHitBins();
        int bins = getTotalBins();
        return (bins > 0) ? (static_cast<double>(hits) / bins) : 0.0;
    }

    // Print the status of this register point to the console
    void print_status() const {
         // --- Print Overall Status ---
         std::cout << "  [Reg]  " << std::left << std::setw(60) << name << " (Width: " << std::setw(3) << width << "): ";
         double coverage = get_register_coverage();
         std::cout << std::fixed << std::setprecision(1) << coverage * 100.0 << "%"
                   << " (" << getHitBins() << "/" << getTotalBins() << " bins)" << std::endl;

         // --- Add detailed report ONLY for partially covered registers ---
         if (coverage < 1.0 && width > 0) { // Also check width > 0 for safety
             std::cout << "    Details (Uncovered Bits):" << std::endl;
             std::stringstream details_ss; // Use a stringstream to build the details line

             std::string current_status = "";    // Status of the current range being tracked
             int current_range_start = -1; // Start index of the current range (-1 means no active range)

             for (int i = 0; i < width; ++i) {
                 bool is_covered = bit_coverage[i].is_covered();
                 // Get status ONLY if not covered, otherwise empty string
                 std::string status = is_covered ? "" : bit_coverage[i].get_missing_status();

                 if (!is_covered) {
                     // --- Current bit 'i' is NOT covered ---
                     if (current_range_start == -1) {
                         // Start a new range of uncovered bits
                         current_range_start = i;
                         current_status = status;
                     } else if (status != current_status) {
                         // Status changed, ending the previous range (which ended at i-1).
                         // Print the completed range.
                         details_ss << "Bit";
                         if (i - 1 > current_range_start) { // Check if range has more than one bit
                             details_ss << "s " << current_range_start << "-" << (i - 1);
                         } else { // Single bit range
                             details_ss << " " << current_range_start;
                         }
                         details_ss << " " << current_status << "; "; // Add status and separator

                         // Start the new range at the current bit 'i'
                         current_range_start = i;
                         current_status = status;
                     }
                     // else: status is the same as current_status, range continues. Do nothing.

                 } else {
                     // --- Current bit 'i' IS covered ---
                     if (current_range_start != -1) {
                         // We were in an uncovered range, and it just ended at bit i-1.
                         // Print the completed range.
                         details_ss << "Bit";
                         if (i - 1 > current_range_start) { // Check if range has more than one bit
                             details_ss << "s " << current_range_start << "-" << (i - 1);
                         } else { // Single bit range
                             details_ss << " " << current_range_start;
                         }
                         details_ss << " " << current_status << "; "; // Add status and separator

                         // Reset range tracking
                         current_range_start = -1;
                         current_status = "";
                     }
                     // else: No uncovered range was active. Do nothing.
                 }
             } // --- End of for loop ---

             // --- After the loop ---
             // Check if an uncovered range was active right up to the last bit (width-1)
             if (current_range_start != -1) {
                 // Print the final range (which ended at width-1).
                 details_ss << "Bit";
                 if (width - 1 > current_range_start) { // Check if range has more than one bit
                     details_ss << "s " << current_range_start << "-" << (width - 1);
                 } else { // Single bit range
                     details_ss << " " << current_range_start;
                 }
                 details_ss << " " << current_status << ";"; // Add status and separator (no trailing space needed)
             }

             // Print the constructed details string
             std::cout << "      " << details_ss.str() << std::endl;
         }
         // --- End detailed report ---
    }

    // Get the total number of coverage bins (0/1 for each bit)
    int getTotalBins() const { return std::max(0, width * 2); }

    // Get the number of coverage bins that have been hit
    int getHitBins() const {
        int hits = 0;
        for (const auto& bit_cov : bit_coverage) {
            if (bit_cov.hit_zero) hits++;
            if (bit_cov.hit_one) hits++;
        }
        return hits;
    }

     // Export this register point's coverage data as a JSON object string
     void exportJson(std::ostream& os) const {
        os << "    {\\n";
        os << "      \\\"name\\\": \\\"" << name << "\\\",\\n"; // Name already escaped
        os << "      \\\"width\\\": " << width << ",\\n";
        os << "      \\\"bins_hit\\\": " << getHitBins() << ",\\n";
        os << "      \\\"bins_total\\\": " << getTotalBins() << ",\\n";
        // Use higher precision for JSON percentage
        double coverage = get_register_coverage();
        os << "      \\\"coverage_percent\\\": " << std::fixed << std::setprecision(std::numeric_limits<double>::max_digits10) << coverage * 100.0 << ",\\n"; // Comma added here

        // --- Add detailed bit coverage ---
        os << "      \\\"bit_details\\\": [\\n";
        for (int i = 0; i < width; ++i) {
            os << "        {\\\"bit\\\": " << i
               << ", \\\"hit_zero\\\": " << std::boolalpha << bit_coverage[i].hit_zero
               << ", \\\"hit_one\\\": " << std::boolalpha << bit_coverage[i].hit_one
               << ", \\\"covered\\\": " << std::boolalpha << bit_coverage[i].is_covered()
               << ", \\\"status\\\": \\\"" << bit_coverage[i].get_status_symbol() << "\\\""; // Added detailed status symbol
            // Add missing status only if not covered, for clarity
            if (!bit_coverage[i].is_covered()) {
                 os << ", \\\"missing\\\": \\\"" << bit_coverage[i].get_missing_status() << "\\\"";
            }
            os << "}";
            if (i < width - 1) os << ",";
            os << "\\n";
        }
        os << "      ]\\n";
        // --- End detailed bit coverage ---
        os << "    }"; // No comma needed after the last field in the object
    }
};

// --- Main Coverage Collector Class Declaration ---
class CoverageCollector {
private:
    std::vector<ConditionCoveragePoint> condition_points;
    std::vector<ConditionCoveragePoint> mux_condition_points;
    std::vector<RegisterCoveragePoint>  register_points;
    bool initialized = false;
    V${topModuleName}* dut_ptr = nullptr; // Store DUT pointer for updates

public:
    // Mark methods defined outside the class declaration as inline
    inline CoverageCollector(); // Constructor
    inline void initialize(V${topModuleName}* top); // Initialization method
    inline void update(); // Update method
    inline void report() const; // Report generation method (console)
    inline void exportJson(const std::string& filename) const;

private:
    // Helper to calculate summary stats (used by report and exportJson)
    inline void calculateOverallStats(int& totalBins, int& hitBins, double& overallCoverage) const;
};

// --- Implementation of CoverageCollector methods ---

// Constructor
inline CoverageCollector::CoverageCollector() = default;

// Initialization method - discovers and registers coverage points
inline void CoverageCollector::initialize(V${topModuleName}* top) {
    if (!top) {
        throw std::runtime_error("Error: DUT pointer is null in CoverageCollector::initialize.");
    }
    dut_ptr = top; // Store the pointer
    std::cout << "CoverageCollector: Initializing coverage points for V${topModuleName}..." << std::endl;

    condition_points.clear();
    mux_condition_points.clear();
    register_points.clear();

    // Reserve memory to potentially improve performance for large designs
    // (Sizes are just estimates, adjust if needed)
    // condition_points.reserve(1000);
    // mux_condition_points.reserve(1000);
    // register_points.reserve(500);


// --- BEGIN POPULATING COVERAGE POINTS ---
""")

    // --- Generate Specific emplace_back Calls Based on exportInfos ---
    var condPointsCount = 0
    var muxPointsCount = 0
    var regPointsCount = 0

    exportInfos.foreach { info =>
      val portPrefix =
        info.portName // Use the full port name as the base for signals
      if (portPrefix.startsWith("_cond_pred")) {
        // sb.append("        // --- Initializing Conditionally Predicate points --- \n") // Redundant comment
        info.exportedSignals.foreach { signal =>
          // Use ground type check helper or similar logic
          if (
            signal.fieldtype != BoolType && signal.fieldtype != ClockType && signal.fieldtype != ResetType && signal.fieldtype != AsyncResetType
          ) {
            sb.append(
              f"""        // Warning: Expected Bool/Clock/Reset type for predicate '${signal.fieldName}', but got ${signal.fieldtype.serialize}. Assuming 1-bit (uint8_t*).\n"""
            )
          }
          // Construct full hierarchical name as Verilator exports it
          val signalFullName = s"${portPrefix}_${signal.fieldName}"
          val escapedName = escapeSignalName(signalFullName)
          // Use top-> prefix for access in C++
          sb.append(
            s"""        try { condition_points.emplace_back("${signalFullName}", &top->${escapedName}); } catch(...) { std::cerr << "Error adding cond point ${escapedName}" << std::endl; }\n"""
          )
          condPointsCount += 1
        }
      } else if (portPrefix.startsWith("_mux_cond")) {
        // sb.append("        // --- Initializing Mux Condition points --- \n") // Redundant comment
        info.exportedSignals.foreach { signal =>
          if (
            signal.fieldtype != BoolType && signal.fieldtype != ClockType && signal.fieldtype != ResetType && signal.fieldtype != AsyncResetType
          ) {
            sb.append(
              f"""        // Warning: Expected Bool/Clock/Reset type for mux condition '${signal.fieldName}', but got ${signal.fieldtype.serialize}. Assuming 1-bit (uint8_t*).\n"""
            )
          }
          val signalFullName = s"${portPrefix}_${signal.fieldName}"
          val escapedName = escapeSignalName(signalFullName)
          sb.append(
            s"""        try { mux_condition_points.emplace_back("${signalFullName}", &top->${escapedName}); } catch(...) { std::cerr << "Error adding mux point ${escapedName}" << std::endl; }\n"""
          )
          muxPointsCount += 1
        }
      } else if (portPrefix.startsWith("_reg_signals")) {
        // sb.append("        // --- Initializing Register points --- \n") // Redundant comment
        info.exportedSignals.foreach { signal =>
          // The base name for recursion should include the port prefix
          val initialSignalFullName = s"${portPrefix}_${signal.fieldName}"
          // Wrap recursive call in try-catch for robustness during generation itself
          // (generateRegisterPointsRecursive already catches some internal errors)
          sb.append(
            s"        // Register signal: ${initialSignalFullName} (${signal.fieldtype.serialize})\n"
          )
          try {
            val pointsGenerated = generateRegisterPointsRecursive(
              initialSignalFullName, // Use the name Verilator will expose
              signal.fieldtype,
              sb,
              topModuleName // Pass topModuleName here
            )
            regPointsCount += pointsGenerated
          } catch {
            case e: Exception =>
              sb.append(
                s"        // FATAL ERROR during generation for ${initialSignalFullName}: ${e.getMessage}\n"
              )
          }
        }
      } else {
        sb.append(s"""
        // Warning: Encountered unrecognized export port type prefix for port name '${info.portName}' during coverage initialization. Associated signals (if any) are being ignored.
""")
      }
    }

    // --- Finish Initialization Block ---
    sb.append(s"""
// --- END POPULATING COVERAGE POINTS ---

    initialized = true;
    std::cout << "CoverageCollector: Initialization complete." << std::endl;
    std::cout << "  - Conditionally Predicates Registered: " << ${condPointsCount} << " (target: " << condition_points.size() << ")" << std::endl;
    std::cout << "  - Mux Conditions Registered:         " << ${muxPointsCount} << " (target: " << mux_condition_points.size() << ")" << std::endl;
    std::cout << "  - Register Coverage Points Registered: " << ${regPointsCount} << " (target: " << register_points.size() << ")" << std::endl; // Note: regPointsCount is after flattening
    std::cout << "----------------------------------------" << std::endl;
}

// Update method - called each cycle to update coverage status
inline void CoverageCollector::update() {
    if (!initialized || !dut_ptr) return; // Check dut_ptr too
    // No need to pass dut_ptr to individual update methods as they use stored signal_ptr
    try {
        for (auto& point : condition_points) { point.update(); }
        for (auto& point : mux_condition_points) { point.update(); }
        for (auto& point : register_points) { point.update(); }
    } catch (const std::exception& e) {
         std::cerr << "Error during CoverageCollector::update(): " << e.what() << std::endl;
    } catch (...) {
         std::cerr << "Unknown error during CoverageCollector::update()" << std::endl;
    }
}

// Helper to calculate overall statistics across all point types
inline void CoverageCollector::calculateOverallStats(int& totalBins, int& hitBins, double& overallCoverage) const {
    int totalCondBins = 0, hitCondBins = 0;
    for(const auto& point : condition_points) {
        totalCondBins += point.getTotalBins();
        hitCondBins += point.getHitBins();
    }

    int totalMuxBins = 0, hitMuxBins = 0;
    for(const auto& point : mux_condition_points) {
        totalMuxBins += point.getTotalBins();
        hitMuxBins += point.getHitBins();
    }

    int totalRegBins = 0, hitRegBins = 0;
    for(const auto& point : register_points) {
        totalRegBins += point.getTotalBins();
        hitRegBins += point.getHitBins();
    }

    totalBins = totalCondBins + totalMuxBins + totalRegBins;
    hitBins = hitCondBins + hitMuxBins + hitRegBins;
    overallCoverage = (totalBins > 0) ? static_cast<double>(hitBins) / totalBins * 100.0 : 0.0;
}


// Report method - prints the coverage report to the console
inline void CoverageCollector::report() const {
    if (!initialized) {
        std::cout << "CoverageCollector: Not initialized, cannot generate report." << std::endl;
        return;
    }
    std::cout << std::endl;
    std::cout << "========================================================================================================" << std::endl; // Adjusted width slightly
    std::cout << "                                Coverage Report (Console)                                               " << std::endl;
    std::cout << "========================================================================================================" << std::endl;
    size_t total_points = condition_points.size() + mux_condition_points.size() + register_points.size();
    std::cout << "Total Coverage Points Initialized: " << total_points << std::endl;

    // Conditional Predicates Report
    int totalCondBins = 0, hitCondBins = 0;
    std::cout << "\\n--- Conditional Predicates (" << condition_points.size() << " points) ---" << std::endl;
    if (condition_points.empty()) {
        std::cout << "  (No predicate points registered)" << std::endl;
    } else {
        for(const auto& point : condition_points) {
            point.print_status("[Pred]");
            totalCondBins += point.getTotalBins();
            hitCondBins += point.getHitBins();
        }
    }
    double condCoverage = (totalCondBins > 0) ? static_cast<double>(hitCondBins) / totalCondBins * 100.0 : 0.0;
    std::cout << "Predicate Coverage Summary: " << std::fixed << std::setprecision(1) << condCoverage << "% (" << hitCondBins << "/" << totalCondBins << " bins hit)" << std::endl;

    // Mux Conditions Report
    int totalMuxBins = 0, hitMuxBins = 0;
    std::cout << "\\n--- Mux Conditions (" << mux_condition_points.size() << " points) ---" << std::endl;
    if (mux_condition_points.empty()) {
         std::cout << "  (No mux condition points registered)" << std::endl;
    } else {
         for(const auto& point : mux_condition_points) {
            point.print_status("[MuxC]");
            totalMuxBins += point.getTotalBins();
            hitMuxBins += point.getHitBins();
        }
    }
    double muxCoverage = (totalMuxBins > 0) ? static_cast<double>(hitMuxBins) / totalMuxBins * 100.0 : 0.0;
     std::cout << "Mux Condition Coverage Summary: " << std::fixed << std::setprecision(1) << muxCoverage << "% (" << hitMuxBins << "/" << totalMuxBins << " bins hit)" << std::endl;

    // Register Bit Coverage Report
    int totalRegBins = 0, hitRegBins = 0;
    std::cout << "\\n--- Register Bit Coverage (" << register_points.size() << " points) ---" << std::endl;
     if (register_points.empty()) {
         std::cout << "  (No register points registered)" << std::endl;
     } else {
         for(const auto& point : register_points) {
             point.print_status(); // Includes detail if partially covered
             totalRegBins += point.getTotalBins();
             hitRegBins += point.getHitBins();
         }
     }
     double regCoverage = (totalRegBins > 0) ? static_cast<double>(hitRegBins) / totalRegBins * 100.0 : 0.0;
     std::cout << "Register Bit Coverage Summary: " << std::fixed << std::setprecision(1) << regCoverage << "% (" << hitRegBins << "/" << totalRegBins << " bins hit)" << std::endl;

    // Overall Summary using helper
    int totalBins = 0, hitBins = 0;
    double overallCoverage = 0.0;
    calculateOverallStats(totalBins, hitBins, overallCoverage); // Calculate summary stats

    std::cout << "\\n========================================================================================================" << std::endl; // Adjusted width
    std::cout << "Overall Coverage Summary: " << std::fixed << std::setprecision(1) << overallCoverage << "% (" << hitBins << "/" << totalBins << " total bins hit)" << std::endl;
    std::cout << "========================================================================================================" << std::endl; // Adjusted width
    std::cout << std::endl;
}


// Export JSON method - writes the coverage report to a JSON file
inline void CoverageCollector::exportJson(const std::string& filename) const {
     if (!initialized) {
        std::cerr << "CoverageCollector: Not initialized, cannot export JSON report." << std::endl;
        return;
    }

    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open file '" << filename << "' for writing JSON report." << std::endl;
        return;
    }

    std::cout << "CoverageCollector: Exporting coverage data to JSON file: " << filename << std::endl;

    // Calculate overall stats first
    int totalBins = 0, hitBins = 0;
    double overallCoverage = 0.0;
    calculateOverallStats(totalBins, hitBins, overallCoverage);

    // Set precision for floating point numbers in JSON
    outFile << std::fixed << std::setprecision(std::numeric_limits<double>::max_digits10);

    outFile << "{\\n"; // Start top-level JSON object

    // --- Summary Section ---
    outFile << "  \\\"summary\\\": {\\n";
    outFile << "    \\\"overall_coverage_percent\\\": " << overallCoverage << ",\\n";
    outFile << "    \\\"total_bins_hit\\\": " << hitBins << ",\\n";
    outFile << "    \\\"total_bins\\\": " << totalBins << "\\n";
    outFile << "  },\\n"; // End summary object (note the comma)

    // --- Conditional Predicates Section ---
    outFile << "  \\\"conditional_predicates\\\": [\\n";
    for (size_t i = 0; i < condition_points.size(); ++i) {
        condition_points[i].exportJson(outFile);
        if (i < condition_points.size() - 1) {
            outFile << ",\\n"; // Add comma if not the last element
        } else {
            outFile << "\\n"; // Just newline if last element
        }
    }
    outFile << "  ],\\n"; // End conditional_predicates array (note the comma)

    // --- Mux Conditions Section ---
    outFile << "  \\\"mux_conditions\\\": [\\n";
     for (size_t i = 0; i < mux_condition_points.size(); ++i) {
        mux_condition_points[i].exportJson(outFile);
        if (i < mux_condition_points.size() - 1) {
            outFile << ",\\n";
        } else {
            outFile << "\\n";
        }
    }
    outFile << "  ],\\n"; // End mux_conditions array (note the comma)

    // --- Register Coverage Section ---
    outFile << "  \\\"register_coverage\\\": [\\n";
    for (size_t i = 0; i < register_points.size(); ++i) {
        register_points[i].exportJson(outFile); // Includes "bit_details" array
         if (i < register_points.size() - 1) {
            outFile << ",\\n";
        } else {
            outFile << "\\n";
        }
    }
    outFile << "  ]\\n"; // End register_coverage array (NO comma after the last section)

    outFile << "}\\n"; // End top-level JSON object

    outFile.close();
    if (!outFile.good()) {
         std::cerr << "Warning: Potential error occurred while writing to JSON file '" << filename << "'." << std::endl;
    } else {
         std::cout << "CoverageCollector: Successfully exported JSON report to " << filename << std::endl;
    }
}


#endif // COVERAGE_COLLECTOR_H
// --- END GENERATED coverage_collector.h (HEADER-ONLY) ---
""")
    sb.toString()
  }

  // --- generateSimMain remains unchanged ---
  /** Generates the content for `sim_main.cpp`. */
  def generateSimMain(topModuleName: String): String = {
    val sb = new StringBuilder
    sb.append(s"""// --- BEGIN GENERATED sim_main.cpp ---
#include <iostream>
#include <memory>       // For std::unique_ptr
#include <string>       // For std::string (used by exportJson filename)

// Include Verilator core headers
#include "verilated.h"
#include "verilated_vcd_c.h" // For VCD tracing

// Include DUT header
#include "V${topModuleName}.h"

// Include our Coverage Collector header
#include "coverage_collector.h"

// Global simulation time variable required by Verilator for sc_time_stamp()
vluint64_t global_time = 0;

// sc_time_stamp function (required by Verilator)
double sc_time_stamp() {
    return global_time; // Return current simulation time
}

// --- Simulation Main Function ---
int main(int argc, char **argv) {
    // Initialize Verilator context
    std::unique_ptr<VerilatedContext> contextp = std::make_unique<VerilatedContext>();
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true); // Enable VCD tracing

    // Create VCD trace object
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();

    // Instantiate DUT
    std::unique_ptr<V${topModuleName}> top;
    try {
        top = std::make_unique<V${topModuleName}>(contextp.get(), "DUT");
    } catch (const std::exception& e) {
         std::cerr << "FATAL ERROR: Failed to instantiate DUT V${topModuleName}: " << e.what() << std::endl;
         return 1;
    } catch (...) {
         std::cerr << "FATAL ERROR: Unknown error during DUT V${topModuleName} instantiation." << std::endl;
         return 1;
    }


    // Setup VCD tracing
    top->trace(tfp.get(), 99); // Trace 99 levels deep
    try {
        tfp->open("waveform.vcd"); // Open VCD file
        std::cout << "VCD tracing enabled, dumping to waveform.vcd" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Warning: Failed to open VCD file waveform.vcd: " << e.what() << std::endl;
        tfp.reset(); // Disable tracing if open failed
    }


    // Simulation settings
    vluint64_t sim_time_steps = 0;
    // Allow overriding max simulation time
    vluint64_t max_sim_time_steps = 10000;

    // Create and initialize Coverage Collector
    CoverageCollector coverage_collector;
    try {
        coverage_collector.initialize(top.get());
    } catch (const std::exception& e) {
        std::cerr << "Fatal Error during CoverageCollector initialization: " << e.what() << std::endl;
        if (tfp) { tfp->close(); } // tfp managed by unique_ptr
        return 1; // Exit on initialization failure
    }

    std::cout << "Starting simulation (MAX_SIM_TIME_STEPS = " << max_sim_time_steps << ")" << std::endl;

    // --- Simulation Loop ---
    top->reset = 1; // Assert reset
    top->clock = 0; // Initialize clock

    try { // Wrap simulation loop in try-catch
        while (sim_time_steps < max_sim_time_steps && !contextp->gotFinish()) {

            // --- Time Management ---
            // Manage time explicitly for clock edges
            contextp->time(sim_time_steps * 10 + 0); // Time for falling edge (e.g., use a 10 unit clock period)
            global_time = contextp->time(); // Update global time

            // --- Reset Logic ---
            if (sim_time_steps < 5) { // Keep reset for 5 clock cycles (arbitrary number)
                top->reset = 1;
            } else if (sim_time_steps == 5) {
                top->reset = 0; // De-assert reset
                std::cout << "[" << global_time << "] Releasing reset" << std::endl;
            } else {
                top->reset = 0;
            }

            // --- Stimulus Generation (User Placeholder) ---
            // TODO: Add stimulus generation logic here based on sim_time_steps or global_time
            // Example: Toggle an input every 20 steps after reset release
            // if (top->reset == 0 && (sim_time_steps % 20 == 0)) {
            //    // Assuming an input 'io_some_input' exists and is bool/CData
            //    // top->io_some_input = !top->io_some_input;
            // }

            // --- Clock Toggle and Evaluation ---
            top->clock = 0;       // Falling edge
            top->eval();          // Evaluate combinational logic
            if (tfp) tfp->dump(global_time); // Dump VCD at falling edge

            // --- Coverage Update ---
            // No internal try-catch needed here as update() has one
            coverage_collector.update();

            // Advance time for rising edge
            contextp->time(sim_time_steps * 10 + 5); // Time for rising edge (mid-period)
            global_time = contextp->time();

            top->clock = 1;       // Rising edge
            top->eval();          // Evaluate sequential logic and combinational logic again
            if (tfp) tfp->dump(global_time); // Dump VCD at rising edge


            sim_time_steps++; // Increment logical time step count
        }
    } catch (const std::exception& e) {
        std::cerr << "FATAL ERROR during simulation loop @ time " << global_time << ": " << e.what() << std::endl;
        if (tfp) { tfp->close(); }
        return 1; // Indicate simulation error
    } catch (...) {
         std::cerr << "FATAL ERROR: Unknown exception during simulation loop @ time " << global_time << "." << std::endl;
         if (tfp) { tfp->close(); }
         return 1; // Indicate simulation error
    }

    // Set final time for waveform dump if needed
    if (!contextp->gotFinish()) { // Avoid setting time if $$finish already occurred
        contextp->time(sim_time_steps * 10);
        global_time = contextp->time();
    }


    std::cout << "Simulation finished @ sim_time_steps = " << sim_time_steps
              << " (Verilator time = " << global_time << ")" << std::endl;

    // --- Finalization ---
    try {
        top->final(); // Final model cleanup
    } catch (const std::exception& e) {
         std::cerr << "Warning: Exception during top->final(): " << e.what() << std::endl;
    }


    // Close VCD trace file
    if (tfp) {
       try {
            tfp->close();
       } catch (const std::exception& e) {
            std::cerr << "Warning: Exception during VCD trace close: " << e.what() << std::endl;
       }
    }

    // Generate and Print Coverage Report (Console)
    try {
        coverage_collector.report();
    } catch (const std::exception& e) {
         std::cerr << "Error during console coverage report generation: " << e.what() << std::endl;
    }

    // Export Coverage Report to JSON File
    try {
        coverage_collector.exportJson("coverage_report.json");
    } catch (const std::exception& e) {
         std::cerr << "Error during JSON coverage report export: " << e.what() << std::endl;
    }

    // Check for Verilator errors or $$finish
    if (contextp->gotFinish()) {
       std::cout << "Verilator simulation stopped by $$finish" << std::endl;
    }

    return 0;
}
// --- END GENERATED sim_main.cpp ---
""")
    sb.toString()
  }

  def generateCoverageBashScript(topModuleName: String): String = {
    s"""#!/bin/bash

# Default top module name, overridden by command line argument if provided
DEFAULT_TOP_MODULE="${topModuleName}"

show_help() {
    echo "Usage: $$0 {generate|run|help} [TopModule]"
    echo "  generate: Run verilator to generate C++ code (compiles DUT)."
    echo "            Requires .sv and sim_main.cpp in the current directory."
    echo "            Creates obj_dir."
    echo "  run:      Build (if needed) and execute the simulation."
    echo "            Requires obj_dir to exist (run generate first)."
    echo "            Runs the executable from within obj_dir."
    echo "  help:     Show this help message."
    echo "  [TopModule]: Optional. The name of the top module (default: $$DEFAULT_TOP_MODULE)."
    echo "             Must match the .sv filename (e.g., MyModule for MyModule.sv)."
}

# Function to run Verilator for code generation
generate_step() {
    local module_name=$$1
    echo "--- Generating C++ simulation sources for $$module_name ---"

    # Check if required source files exist
    if [ ! -f "$$module_name.sv" ]; then
        echo "Error: SystemVerilog file '$${module_name}.sv' not found in current directory."
        exit 1
    fi
     # Check for sim_main.cpp inside obj_dir, as it's now placed there
    if [ ! -f "obj_dir/sim_main.cpp" ]; then
        echo "Error: C++ testbench 'obj_dir/sim_main.cpp' not found."
        echo "       Ensure it was generated correctly in the 'obj_dir' subdirectory."
        exit 1
    fi
     # Check for coverage_collector.h inside obj_dir
    if [ ! -f "obj_dir/coverage_collector.h" ]; then
        echo "Error: Coverage header 'obj_dir/coverage_collector.h' not found."
        echo "       Ensure it was generated correctly in the 'obj_dir' subdirectory."
        exit 1
    fi


    # Run Verilator:
    # --cc: Generate C++ output
    # --trace: Enable waveform tracing (VCD)
    # <module_name>.sv: Input Verilog/SystemVerilog file
    # --exe sim_main.cpp: Link with this C++ file to create executable
    # --timing: Enable timing simulation features if needed (may require more setup)
    # -Iobj_dir: Tell Verilator to look for includes (like coverage_collector.h) in obj_dir
    # --top-module <module_name>: Explicitly specify the top module
    # --Mdir obj_dir: Specify the output directory for generated files
    # sim_main.cpp path needs to be relative to the execution directory (where this script runs)
    verilator --cc --trace $${module_name}.sv --exe obj_dir/sim_main.cpp --timing -Iobj_dir --top-module $${module_name} --Mdir obj_dir

    local verilator_status=$$?
    if [ $$verilator_status -ne 0 ]; then
        echo "Error: Verilator C++ code generation failed for $$module_name (Exit code: $$verilator_status)."
        exit 1
    fi
    echo "--- Verilator C++ generation complete for $$module_name (Output in obj_dir) ---"
}

# Function to build the executable using make
build_step() {
    local module_name=$$1
    echo "--- Building simulation executable for $$module_name ---"

    # Check if obj_dir exists (should be created by generate_step)
    if [ ! -d "obj_dir" ]; then
        echo "Error: Output directory 'obj_dir' not found."
        echo "       Run the 'generate' step first or ensure Verilator ran successfully."
        exit 1
    fi
    # Check if the Verilator makefile exists in obj_dir
    if [ ! -f "obj_dir/V$${module_name}.mk" ]; then
        echo "Error: Verilator makefile 'obj_dir/V$${module_name}.mk' not found."
        echo "       Ensure the 'generate' step completed successfully."
        exit 1
    fi

    # Change into obj_dir to run make
    pushd obj_dir > /dev/null
    if [ $$? -ne 0 ]; then
        echo "Error: Failed to change directory to obj_dir."
        exit 1
    fi

    # Run make using the Verilator-generated makefile
    # The target is typically V<module_name>
    echo "Running make in obj_dir..."
    make -f V$${module_name}.mk V$${module_name}
    local make_status=$$?

    # Change back to the original directory
    popd > /dev/null

    if [ $$make_status -ne 0 ]; then
        echo "Error: Build process (make) failed for $$module_name (Exit code: $$make_status)."
        exit 1
    fi
    echo "--- Build complete for $$module_name (Executable in obj_dir) ---"
}

# Function to run the simulation executable
run_step() {
    local module_name=$$1
    # Ensure the executable is built before running
    build_step "$$module_name"

    echo "--- Running simulation for $$module_name ---"
    local executable_path_win="obj_dir/V$${module_name}.exe"
    local executable_path_nix="obj_dir/V$${module_name}"

    # Check if the executable exists (either .exe for Windows or no extension for Linux/macOS)
    if [ ! -f "$$executable_path_nix" ] && [ ! -f "$$executable_path_win" ]; then
        echo "Error: Simulation executable V$${module_name} (or .exe) not found in obj_dir after build."
        echo "       Ensure the 'build' step completed successfully."
        exit 1
    fi

    # Change into obj_dir to run the simulation
    # This is often necessary because the executable might expect related files (like VCD) there
    pushd obj_dir > /dev/null
    if [ $$? -ne 0 ]; then
        echo "Error: Failed to change directory to obj_dir for execution."
        exit 1
    fi

    echo "Executing simulation..."
    local run_status=0
    if [ -f "V$${module_name}.exe" ]; then
        ./V$${module_name}.exe
        run_status=$$?
    elif [ -f "V$${module_name}" ]; then
        ./V$${module_name}
        run_status=$$?
    else
        # This case should ideally not be reached due to the check above
        echo "Internal Error: Could not find executable V$${module_name} or V$${module_name}.exe inside obj_dir."
        run_status=1
    fi

    # Change back to the original directory
    popd > /dev/null

    if [ $$run_status -ne 0 ]; then
        echo "Error: Simulation run failed for $$module_name (Exit code: $$run_status)."
        # Optionally exit here, or let the script continue to report completion status
        exit 1
    fi
    echo "--- Simulation run complete for $$module_name ---"
    echo "--- Coverage report generated: coverage_report.json ---"
    echo "--- Waveform file generated: obj_dir/waveform.vcd ---"

}

# --- Main Script Logic ---

# Get action (generate, run, help) and optional top module name from arguments
ACTION=$$1
# Use provided TopModule name, otherwise use the default
TOP_MODULE=$${2:-$$DEFAULT_TOP_MODULE}

# Validate action
if [ -z "$$ACTION" ] || [ "$$ACTION" == "help" ]; then
    show_help
    exit 0
fi

# Execute the requested action
case "$$ACTION" in
    generate)
        generate_step "$$TOP_MODULE"
        ;;
    run)
        run_step "$$TOP_MODULE"
        ;;
    *)
        echo "Error: Invalid action '$$ACTION'."
        show_help
        exit 1
        ;;
esac

echo "--- Action '$$ACTION' completed successfully for $$TOP_MODULE ---"
exit 0

"""
  }
} // End of CoverageCollectorGenerator object
