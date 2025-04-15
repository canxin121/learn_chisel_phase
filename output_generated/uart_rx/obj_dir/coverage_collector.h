// --- BEGIN GENERATED coverage_collector.h (HEADER-ONLY) ---
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
#include "VUART_rx.h"

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
        os << "    {\n";
        os << "      \"name\": \"" << name << "\",\n"; // Name already escaped if needed by escapeSignalName
        os << "      \"hit_true\": " << std::boolalpha << hit_true << ",\n";
        os << "      \"hit_false\": " << std::boolalpha << hit_false << ",\n";
        os << "      \"bins_hit\": " << getHitBins() << ",\n";
        os << "      \"bins_total\": " << getTotalBins() << ",\n";
        os << "      \"coverage_percent\": " << std::fixed << std::setprecision(2) << get_hit_rate() * 100.0 << "\n";
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
        os << "    {\n";
        os << "      \"name\": \"" << name << "\",\n"; // Name already escaped
        os << "      \"width\": " << width << ",\n";
        os << "      \"bins_hit\": " << getHitBins() << ",\n";
        os << "      \"bins_total\": " << getTotalBins() << ",\n";
        // Use higher precision for JSON percentage
        double coverage = get_register_coverage();
        os << "      \"coverage_percent\": " << std::fixed << std::setprecision(std::numeric_limits<double>::max_digits10) << coverage * 100.0 << ",\n"; // Comma added here

        // --- Add detailed bit coverage ---
        os << "      \"bit_details\": [\n";
        for (int i = 0; i < width; ++i) {
            os << "        {\"bit\": " << i
               << ", \"hit_zero\": " << std::boolalpha << bit_coverage[i].hit_zero
               << ", \"hit_one\": " << std::boolalpha << bit_coverage[i].hit_one
               << ", \"covered\": " << std::boolalpha << bit_coverage[i].is_covered()
               << ", \"status\": \"" << bit_coverage[i].get_status_symbol() << "\""; // Added detailed status symbol
            // Add missing status only if not covered, for clarity
            if (!bit_coverage[i].is_covered()) {
                 os << ", \"missing\": \"" << bit_coverage[i].get_missing_status() << "\"";
            }
            os << "}";
            if (i < width - 1) os << ",";
            os << "\n";
        }
        os << "      ]\n";
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
    VUART_rx* dut_ptr = nullptr; // Store DUT pointer for updates

public:
    // Mark methods defined outside the class declaration as inline
    inline CoverageCollector(); // Constructor
    inline void initialize(VUART_rx* top); // Initialization method
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
inline void CoverageCollector::initialize(VUART_rx* top) {
    if (!top) {
        throw std::runtime_error("Error: DUT pointer is null in CoverageCollector::initialize.");
    }
    dut_ptr = top; // Store the pointer
    std::cout << "CoverageCollector: Initializing coverage points for VUART_rx..." << std::endl;

    condition_points.clear();
    mux_condition_points.clear();
    register_points.clear();

    // Reserve memory to potentially improve performance for large designs
    // (Sizes are just estimates, adjust if needed)
    // condition_points.reserve(1000);
    // mux_condition_points.reserve(1000);
    // register_points.reserve(500);


// --- BEGIN POPULATING COVERAGE POINTS ---
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_1", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_10", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_11", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_11); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_11" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_2", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_3", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_3); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_3" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_4", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_4); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_4" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_5", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_6", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_6); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_6" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_8", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_8); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_8" << std::endl; }
        try { condition_points.emplace_back("_cond_pred_UART_rx__I__local__I___T_9", &top->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_9); } catch(...) { std::cerr << "Error adding cond point _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_9" << std::endl; }
        // Register signal: _reg_signals_UART_rx__I__local__I__bitCnterReg (UInt<4>)
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__bitCnterReg", 4, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FbitCnterReg));
        // Register signal: _reg_signals_UART_rx__I__local__I__clkCnterReg (UInt<9>)
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__clkCnterReg", 9, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FclkCnterReg));
        // Register signal: _reg_signals_UART_rx__I__local__I__outDataReg (UInt<1>[8])
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_0", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_0));
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_1", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_1));
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_2", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_2));
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_3", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_3));
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_4", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_4));
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_5", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_5));
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_6", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_6));
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outDataReg_7", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_7));
        // Register signal: _reg_signals_UART_rx__I__local__I__outRxDoneReg (UInt<1>)
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__outRxDoneReg", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutRxDoneReg));
        // Register signal: _reg_signals_UART_rx__I__local__I__serialDataReg (UInt<1>)
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__serialDataReg", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg));
        // Register signal: _reg_signals_UART_rx__I__local__I__serialDataReg_REG (UInt<1>)
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__serialDataReg_REG", 1, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg_REG));
        // Register signal: _reg_signals_UART_rx__I__local__I__stateReg (UInt<2>)
        register_points.emplace_back("_reg_signals_UART_rx__I__local__I__stateReg", 2, reinterpret_cast<const void*>(&top->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FstateReg));

// --- END POPULATING COVERAGE POINTS ---

    initialized = true;
    std::cout << "CoverageCollector: Initialization complete." << std::endl;
    std::cout << "  - Conditionally Predicates Registered: " << 11 << " (target: " << condition_points.size() << ")" << std::endl;
    std::cout << "  - Mux Conditions Registered:         " << 0 << " (target: " << mux_condition_points.size() << ")" << std::endl;
    std::cout << "  - Register Coverage Points Registered: " << 14 << " (target: " << register_points.size() << ")" << std::endl; // Note: regPointsCount is after flattening
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
    std::cout << "\n--- Conditional Predicates (" << condition_points.size() << " points) ---" << std::endl;
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
    std::cout << "\n--- Mux Conditions (" << mux_condition_points.size() << " points) ---" << std::endl;
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
    std::cout << "\n--- Register Bit Coverage (" << register_points.size() << " points) ---" << std::endl;
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

    std::cout << "\n========================================================================================================" << std::endl; // Adjusted width
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

    outFile << "{\n"; // Start top-level JSON object

    // --- Summary Section ---
    outFile << "  \"summary\": {\n";
    outFile << "    \"overall_coverage_percent\": " << overallCoverage << ",\n";
    outFile << "    \"total_bins_hit\": " << hitBins << ",\n";
    outFile << "    \"total_bins\": " << totalBins << "\n";
    outFile << "  },\n"; // End summary object (note the comma)

    // --- Conditional Predicates Section ---
    outFile << "  \"conditional_predicates\": [\n";
    for (size_t i = 0; i < condition_points.size(); ++i) {
        condition_points[i].exportJson(outFile);
        if (i < condition_points.size() - 1) {
            outFile << ",\n"; // Add comma if not the last element
        } else {
            outFile << "\n"; // Just newline if last element
        }
    }
    outFile << "  ],\n"; // End conditional_predicates array (note the comma)

    // --- Mux Conditions Section ---
    outFile << "  \"mux_conditions\": [\n";
     for (size_t i = 0; i < mux_condition_points.size(); ++i) {
        mux_condition_points[i].exportJson(outFile);
        if (i < mux_condition_points.size() - 1) {
            outFile << ",\n";
        } else {
            outFile << "\n";
        }
    }
    outFile << "  ],\n"; // End mux_conditions array (note the comma)

    // --- Register Coverage Section ---
    outFile << "  \"register_coverage\": [\n";
    for (size_t i = 0; i < register_points.size(); ++i) {
        register_points[i].exportJson(outFile); // Includes "bit_details" array
         if (i < register_points.size() - 1) {
            outFile << ",\n";
        } else {
            outFile << "\n";
        }
    }
    outFile << "  ]\n"; // End register_coverage array (NO comma after the last section)

    outFile << "}\n"; // End top-level JSON object

    outFile.close();
    if (!outFile.good()) {
         std::cerr << "Warning: Potential error occurred while writing to JSON file '" << filename << "'." << std::endl;
    } else {
         std::cout << "CoverageCollector: Successfully exported JSON report to " << filename << std::endl;
    }
}


#endif // COVERAGE_COLLECTOR_H
// --- END GENERATED coverage_collector.h (HEADER-ONLY) ---
