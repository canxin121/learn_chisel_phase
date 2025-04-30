// --- BEGIN GENERATED coverage_collector.h (HEADER-ONLY) ---
#ifndef COVERAGE_COLLECTOR_H
#define COVERAGE_COLLECTOR_H

#include <algorithm> // For std::max
#include <cstdint>   // For fixed-width integers
#include <fstream>   // For file output (JSON export)
#include <iomanip>   // For report formatting
#include <iostream>  // For warnings/output
#include <limits>    // For std::numeric_limits (JSON precision)
#include <sstream>   // For string stream (used in detailed report)
#include <stdexcept> // For std::runtime_error
#include <string>
#include <utility> // For std::move
#include <vector>

// Include Verilator header for DUT access
#include "VRocketALU.h"

// --- Helper Struct: Condition/Mux Coverage Point ---
struct ConditionCoveragePoint {
  std::string name;
  uint64_t count_true = 0;
  uint64_t count_false = 0;
  const uint8_t *signal_ptr; // Pointer to 1-bit signal (CData -> uint8_t)

  ConditionCoveragePoint(std::string n, const uint8_t *ptr)
      : name(std::move(n)), signal_ptr(ptr) {
    if (!signal_ptr) {
      std::cerr << "Warning: ConditionCoveragePoint '" << name
                << "' created with null signal pointer." << std::endl;
    }
  }

  void update() {
    if (!signal_ptr)
      return;
    if (*signal_ptr) {
      count_true++;
    } else {
      count_false++;
    }
  }

  bool hit_true() const { return count_true > 0; }
  bool hit_false() const { return count_false > 0; }

  double get_true_proportion() const {
    uint64_t total_count = count_true + count_false;
    return (total_count > 0) ? static_cast<double>(count_true) / total_count
                             : 0.0;
  }

  double get_false_proportion() const {
    uint64_t total_count = count_true + count_false;
    return (total_count > 0) ? static_cast<double>(count_false) / total_count
                             : 0.0;
  }

  double get_hit_rate() const {
    double hits = (hit_true() ? 1.0 : 0.0) + (hit_false() ? 1.0 : 0.0);
    return hits / 2.0;
  }

  void print_status(const char *type_prefix = "[Cond]") const {
    uint64_t total_count = count_true + count_false;
    std::cout << "  " << type_prefix << " " << std::left << std::setw(60)
              << name << ": ";
    std::cout << "T:" << count_true << " (" << std::fixed
              << std::setprecision(1) << get_true_proportion() * 100.0
              << "%) | ";
    std::cout << "F:" << count_false << " (" << std::fixed
              << std::setprecision(1) << get_false_proportion() * 100.0 << "%)";
    std::cout << " | Bins Hit: " << getHitBins() << "/2" << " (" << std::fixed
              << std::setprecision(1) << get_hit_rate() * 100.0 << "%)"
              << std::endl;
  }

  int getTotalBins() const { return 2; }
  int getHitBins() const {
    return (hit_true() ? 1 : 0) + (hit_false() ? 1 : 0);
  }

  void exportJson(std::ostream &os) const {
    uint64_t total_count = count_true + count_false;
    double true_perc = (total_count > 0) ? static_cast<double>(count_true) /
                                               total_count * 100.0
                                         : 0.0;
    double false_perc = (total_count > 0) ? static_cast<double>(count_false) /
                                                total_count * 100.0
                                          : 0.0;

    os << "    {\n"; // Note: Escaped backslashes removed for template clarity
    os << "      \"name\": \"" << name << "\",\n";
    os << "      \"hit_true\": " << std::boolalpha << hit_true() << ",\n";
    os << "      \"hit_false\": " << std::boolalpha << hit_false() << ",\n";
    os << "      \"count_true\": " << count_true << ",\n";
    os << "      \"count_false\": " << count_false << ",\n";
    os << "      \"total_updates\": " << total_count << ",\n";
    os << "      \"true_percentage\": " << std::fixed << std::setprecision(2)
       << true_perc << ",\n";
    os << "      \"false_percentage\": " << std::fixed << std::setprecision(2)
       << false_perc << ",\n";
    os << "      \"bins_hit\": " << getHitBins() << ",\n";
    os << "      \"bins_total\": " << getTotalBins() << ",\n";
    os << "      \"coverage_percent\": " << std::fixed << std::setprecision(2)
       << get_hit_rate() * 100.0 << "\n";
    os << "    }";
  }
};

// --- Helper Struct: Register Bit Coverage ---
struct RegisterBitCoverage {
  uint64_t count_zero = 0;
  uint64_t count_one = 0;

  void update(bool current_value) {
    if (current_value) {
      count_one++;
    } else {
      count_zero++;
    }
  }

  bool hit_zero() const { return count_zero > 0; }
  bool hit_one() const { return count_one > 0; }

  bool is_covered() const { return hit_zero() && hit_one(); }

  double get_coverage() const {
    return (hit_zero() ? 0.5 : 0.0) + (hit_one() ? 0.5 : 0.0);
  }

  std::string get_missing_status() const {
    if (is_covered())
      return "";
    if (!hit_zero() && !hit_one())
      return "MISSING_BOTH";
    if (!hit_zero())
      return "MISSING_0";
    if (!hit_one())
      return "MISSING_1";
    return "";
  }

  std::string get_status_symbol() const {
    if (is_covered())
      return "ZO";
    if (!hit_zero() && !hit_one())
      return "!!";
    if (!hit_zero())
      return "!O";
    if (!hit_one())
      return "Z!";
    return "??";
  }
};

// --- Helper Struct: Register Coverage Point ---
struct RegisterCoveragePoint {
  std::string name;
  int width;
  std::vector<RegisterBitCoverage> bit_coverage;
  const void *signal_ptr;

  RegisterCoveragePoint(std::string n, int w, const void *ptr)
      : name(std::move(n)), width(w), signal_ptr(ptr) {
    if (w > 0) {
      bit_coverage.resize(w);
    } else {
      std::cerr << "Warning: RegisterCoveragePoint '" << name
                << "' created with non-positive width " << w << std::endl;
      width = 0;
    }
    if (!signal_ptr) {
      std::cerr << "Warning: RegisterCoveragePoint '" << name
                << "' created with null signal pointer." << std::endl;
    }
  }

  void update() {
    if (!signal_ptr || width <= 0 || width != bit_coverage.size()) {
      return;
    }

    try {
      uint64_t current_value_64 = 0;
      bool value_extracted_simple = true;

      if (width <= 8) {
        current_value_64 = *(static_cast<const uint8_t *>(signal_ptr));
      } else if (width <= 16) {
        current_value_64 = *(static_cast<const uint16_t *>(signal_ptr));
      } else if (width <= 32) {
        current_value_64 = *(static_cast<const uint32_t *>(signal_ptr));
      } else if (width <= 64) {
        current_value_64 = *(static_cast<const uint64_t *>(signal_ptr));
      } else {
        value_extracted_simple = false;
      }

      if (value_extracted_simple) {
        for (int i = 0; i < width; ++i) {
          bool bit_value = (current_value_64 >> i) & 1;
          bit_coverage[i].update(bit_value);
        }
      } else {
        const int num_words = (width + 31) / 32;
        const uint32_t *words = static_cast<const uint32_t *>(signal_ptr);
        for (int i = 0; i < width; ++i) {
          int word_index = i / 32;
          int bit_in_word = i % 32;
          if (word_index < num_words) {
            bool bit_value = (words[word_index] >> bit_in_word) & 1;
            bit_coverage[i].update(bit_value);
          } else {
            std::cerr << "Error: Calculated word_index out of bounds for "
                         "VlWide access in RegisterCoveragePoint: "
                      << name << ", bit " << i << std::endl;
          }
        }
      }
    } catch (const std::exception &e) {
      std::cerr << "Error during RegisterCoveragePoint::update() for '" << name
                << "': " << e.what() << std::endl;
    } catch (...) {
      std::cerr << "Unknown error during RegisterCoveragePoint::update() for '"
                << name << "'" << std::endl;
    }
  }

  double get_register_coverage() const {
    if (width <= 0)
      return 0.0;
    int hits = getHitBins();
    int bins = getTotalBins();
    return (bins > 0) ? (static_cast<double>(hits) / bins) : 0.0;
  }

  void print_status() const {
    std::cout << "  [Reg]  " << std::left << std::setw(60) << name
              << " (Width: " << std::setw(3) << width << "): ";
    double coverage = get_register_coverage();
    std::cout << std::fixed << std::setprecision(1) << coverage * 100.0 << "%"
              << " (" << getHitBins() << "/" << getTotalBins() << " bins)"
              << std::endl;

    if (width > 0) {
      std::cout << "    Bit Details (Status C0/C1 %0/%1):" << std::endl;
      for (int i = 0; i < width; ++i) {
        const auto &bit = bit_coverage[i];
        uint64_t total_updates = bit.count_zero + bit.count_one;
        double zero_perc = (total_updates > 0)
                               ? static_cast<double>(bit.count_zero) /
                                     total_updates * 100.0
                               : 0.0;
        double one_perc = (total_updates > 0)
                              ? static_cast<double>(bit.count_one) /
                                    total_updates * 100.0
                              : 0.0;
        std::string status_symbol = bit.get_status_symbol();
        bool is_covered = bit.is_covered();

        std::cout << "      Bit " << std::setw(3) << i << ": "
                  << std::setw(3) << status_symbol << " "
                  << "C0:" << std::setw(6) << bit.count_zero << " "
                  << "C1:" << std::setw(6) << bit.count_one << " ("
                  << std::fixed << std::setprecision(1) << std::setw(5)
                  << zero_perc << "%/" << std::fixed << std::setprecision(1)
                  << std::setw(5) << one_perc << "%)";

        if (!is_covered) {
          std::cout << " [" << bit.get_missing_status() << "]";
        }
        std::cout << std::endl;
      }
    }
  }

  int getTotalBins() const { return std::max(0, width * 2); }

  int getHitBins() const {
    int hits = 0;
    for (const auto &bit_cov : bit_coverage) {
      if (bit_cov.hit_zero())
        hits++;
      if (bit_cov.hit_one())
        hits++;
    }
    return hits;
  }

  void exportJson(std::ostream &os) const {
    os << "    {\n"; // Note: Escaped backslashes removed for template clarity
    os << "      \"name\": \"" << name << "\",\n";
    os << "      \"width\": " << width << ",\n";
    os << "      \"bins_hit\": " << getHitBins() << ",\n";
    os << "      \"bins_total\": " << getTotalBins() << ",\n";
    double coverage = get_register_coverage();
    os << "      \"coverage_percent\": " << std::fixed
       << std::setprecision(std::numeric_limits<double>::max_digits10)
       << coverage * 100.0 << ",\n";

    os << "      \"bit_details\": [\n";
    for (int i = 0; i < width; ++i) {
      uint64_t bit_total_updates =
          bit_coverage[i].count_zero + bit_coverage[i].count_one;
      double zero_perc = (bit_total_updates > 0)
                             ? static_cast<double>(bit_coverage[i].count_zero) /
                                   bit_total_updates * 100.0
                             : 0.0;
      double one_perc = (bit_total_updates > 0)
                            ? static_cast<double>(bit_coverage[i].count_one) /
                                  bit_total_updates * 100.0
                            : 0.0;

      os << "        {\"bit\": " << i << ", \"hit_zero\": " << std::boolalpha
         << bit_coverage[i].hit_zero() << ", \"hit_one\": " << std::boolalpha
         << bit_coverage[i].hit_one()
         << ", \"count_zero\": " << bit_coverage[i].count_zero
         << ", \"count_one\": " << bit_coverage[i].count_one
         << ", \"total_updates\": " << bit_total_updates
         << ", \"zero_percentage\": " << std::fixed << std::setprecision(2)
         << zero_perc << ", \"one_percentage\": " << std::fixed
         << std::setprecision(2) << one_perc
         << ", \"covered\": " << std::boolalpha << bit_coverage[i].is_covered()
         << ", \"status\": \"" << bit_coverage[i].get_status_symbol() << "\"";
      if (!bit_coverage[i].is_covered()) {
        os << ", \"missing\": \"" << bit_coverage[i].get_missing_status()
           << "\"";
      }
      os << "}";
      if (i < width - 1)
        os << ",";
      os << "\n";
    }
    os << "      ]\n";
    os << "    }";
  }
};

// --- Main Coverage Collector Class Declaration ---
class CoverageCollector {
private:
  std::vector<ConditionCoveragePoint> condition_points;
  std::vector<ConditionCoveragePoint> mux_condition_points;
  std::vector<RegisterCoveragePoint> register_points;
  bool initialized = false;
  VRocketALU *dut_ptr = nullptr;

public:
  inline CoverageCollector();
  inline void initialize(VRocketALU *top);
  inline void update();
  inline void report() const;
  inline void exportJson(const std::string &filename) const;

private:
  inline void calculateOverallStats(int &totalBins, int &hitBins,
                                    double &overallCoverage) const;
};

// --- Implementation of CoverageCollector methods ---

inline CoverageCollector::CoverageCollector() = default;

inline void CoverageCollector::initialize(VRocketALU *top) {
  if (!top) {
    throw std::runtime_error(
        "Error: DUT pointer is null in CoverageCollector::initialize.");
  }
  dut_ptr = top;
  std::cout << "CoverageCollector: Initializing coverage points for VRocketALU..."
            << std::endl;

  condition_points.clear();
  mux_condition_points.clear();
  register_points.clear();

  // --- Placeholder for dynamically generated emplace_back calls ---
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___bext_mask_T_1", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___in2_inv_T", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___io_cmp_out_T_2", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___io_out_T_1", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___logic_T_14", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___logic_T_6", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_1", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_10", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_13", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_16", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_19", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_22", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_4", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___orcb_T_7", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___out_T", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___out_T_2", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_1", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_10", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_11", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_12", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_13", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_14", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_15", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_16", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_17", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_18", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_19", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_20", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_21", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_22", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_23", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_24", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_25", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_26", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_27", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_28", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_29", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_30", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_31", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_32", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_33", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_34", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_35", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_36", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_37", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_38", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_39", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_40", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_41", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_42", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_43", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_44", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_45", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_46", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_47", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_48", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_49", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_5", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_50", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_51", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_52", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_53", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_54", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_55", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_56", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_57", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_58", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_59", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_6", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_60", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_61", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_62", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_63", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_64", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_65", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_66", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_67", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_68", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_69", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_7", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_8", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___popc_in_T_9", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___rot_shamt_T", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___rotin_T", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___rotout_T", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___rotout_T_2", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___shin_T_7", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___shin_hi_32_T_3", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___shin_hi_T", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___shout_T_4", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___shout_T_6", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___slt_T_2", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___slt_T_4", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___tz_in_T_116", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___tz_in_T_118", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___tz_in_T_120", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___unary_T_12", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___unary_T_14", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___unary_T_16", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___unary_T_18", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___unary_T_20", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___unary_T_3", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S___unary_T_8", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8" << std::endl;
  }
  try {
    mux_condition_points.emplace_back("_mux_cond_RocketALU__M__RocketALU__S__io__s__cmp_out", &top->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out);
  } catch (...) {
    std::cerr << "Error adding mux point _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out" << std::endl;
  }
  try {
    condition_points.emplace_back("_cond_pred_RocketALU__M__RocketALU__S___T_1", &top->_cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1);
  } catch (...) {
    std::cerr << "Error adding cond point _cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1" << std::endl;
  }

  // --- End of generated emplace_back calls ---

  initialized = true;
  std::cout << "CoverageCollector: Initialization complete." << std::endl;
  std::cout << "  - Conditionally Predicates Registered: " << 1
            << " (target: " << condition_points.size() << ")" << std::endl;
  std::cout << "  - Mux Conditions Registered:         " << 105
            << " (target: " << mux_condition_points.size() << ")" << std::endl;
  std::cout << "  - Register Coverage Points Registered: " << 0
            << " (target: " << register_points.size() << ")" << std::endl;
  std::cout << "----------------------------------------" << std::endl;
}

inline void CoverageCollector::update() {
  if (!initialized || !dut_ptr)
    return;
  try {
    for (auto &point : condition_points) {
      point.update();
    }
    for (auto &point : mux_condition_points) {
      point.update();
    }
    for (auto &point : register_points) {
      point.update();
    }
  } catch (const std::exception &e) {
    std::cerr << "Error during CoverageCollector::update(): " << e.what()
              << std::endl;
  } catch (...) {
    std::cerr << "Unknown error during CoverageCollector::update()"
              << std::endl;
  }
}

inline void
CoverageCollector::calculateOverallStats(int &totalBins, int &hitBins,
                                         double &overallCoverage) const {
  int totalCondBins = 0, hitCondBins = 0;
  for (const auto &point : condition_points) {
    totalCondBins += point.getTotalBins();
    hitCondBins += point.getHitBins();
  }

  int totalMuxBins = 0, hitMuxBins = 0;
  for (const auto &point : mux_condition_points) {
    totalMuxBins += point.getTotalBins();
    hitMuxBins += point.getHitBins();
  }

  int totalRegBins = 0, hitRegBins = 0;
  for (const auto &point : register_points) {
    totalRegBins += point.getTotalBins();
    hitRegBins += point.getHitBins();
  }

  totalBins = totalCondBins + totalMuxBins + totalRegBins;
  hitBins = hitCondBins + hitMuxBins + hitRegBins;
  overallCoverage =
      (totalBins > 0) ? static_cast<double>(hitBins) / totalBins * 100.0 : 0.0;
}

inline void CoverageCollector::report() const {
  if (!initialized) {
    std::cout << "CoverageCollector: Not initialized, cannot generate report."
              << std::endl;
    return;
  }
  std::cout << std::endl;
  std::cout << "==============================================================="
               "========================================="
            << std::endl;
  std::cout << "                                Coverage Report (Console)      "
               "                                         "
            << std::endl;
  std::cout << "==============================================================="
               "========================================="
            << std::endl;
  size_t total_points = condition_points.size() + mux_condition_points.size() +
                        register_points.size();
  std::cout << "Total Coverage Points Initialized: " << total_points
            << std::endl;

  int totalCondBins = 0, hitCondBins = 0;
  std::cout << "\n--- Conditional Predicates (" << condition_points.size()
            << " points) ---" << std::endl;
  if (condition_points.empty()) {
    std::cout << "  (No predicate points registered)" << std::endl;
  } else {
    for (const auto &point : condition_points) {
      point.print_status("[Pred]");
      totalCondBins += point.getTotalBins();
      hitCondBins += point.getHitBins();
    }
  }
  double condCoverage = (totalCondBins > 0) ? static_cast<double>(hitCondBins) /
                                                  totalCondBins * 100.0
                                            : 0.0;
  std::cout << "Predicate Coverage Summary: " << std::fixed
            << std::setprecision(1) << condCoverage << "% (" << hitCondBins
            << "/" << totalCondBins << " bins hit)" << std::endl;

  int totalMuxBins = 0, hitMuxBins = 0;
  std::cout << "\n--- Mux Conditions (" << mux_condition_points.size()
            << " points) ---" << std::endl;
  if (mux_condition_points.empty()) {
    std::cout << "  (No mux condition points registered)" << std::endl;
  } else {
    for (const auto &point : mux_condition_points) {
      point.print_status("[MuxC]");
      totalMuxBins += point.getTotalBins();
      hitMuxBins += point.getHitBins();
    }
  }
  double muxCoverage = (totalMuxBins > 0) ? static_cast<double>(hitMuxBins) /
                                                totalMuxBins * 100.0
                                          : 0.0;
  std::cout << "Mux Condition Coverage Summary: " << std::fixed
            << std::setprecision(1) << muxCoverage << "% (" << hitMuxBins << "/"
            << totalMuxBins << " bins hit)" << std::endl;

  int totalRegBins = 0, hitRegBins = 0;
  std::cout << "\n--- Register Bit Coverage (" << register_points.size()
            << " points) ---" << std::endl;
  if (register_points.empty()) {
    std::cout << "  (No register points registered)" << std::endl;
  } else {
    for (const auto &point : register_points) {
      point.print_status();
      totalRegBins += point.getTotalBins();
      hitRegBins += point.getHitBins();
    }
  }
  double regCoverage = (totalRegBins > 0) ? static_cast<double>(hitRegBins) /
                                                totalRegBins * 100.0
                                          : 0.0;
  std::cout << "Register Bit Coverage Summary: " << std::fixed
            << std::setprecision(1) << regCoverage << "% (" << hitRegBins << "/"
            << totalRegBins << " bins hit)" << std::endl;

  int totalBins = 0, hitBins = 0;
  double overallCoverage = 0.0;
  calculateOverallStats(totalBins, hitBins, overallCoverage);

  std::cout << "\n============================================================="
               "==========================================="
            << std::endl;
  std::cout << "Overall Coverage Summary: " << std::fixed
            << std::setprecision(1) << overallCoverage << "% (" << hitBins
            << "/" << totalBins << " total bins hit)" << std::endl;
  std::cout << "==============================================================="
               "========================================="
            << std::endl;
  std::cout << std::endl;
}

inline void CoverageCollector::exportJson(const std::string &filename) const {
  if (!initialized) {
    std::cerr
        << "CoverageCollector: Not initialized, cannot export JSON report."
        << std::endl;
    return;
  }

  std::ofstream outFile(filename);
  if (!outFile.is_open()) {
    std::cerr << "Error: Could not open file '" << filename
              << "' for writing JSON report." << std::endl;
    return;
  }

  std::cout << "CoverageCollector: Exporting coverage data to JSON file: "
            << filename << std::endl;

  int totalBins = 0, hitBins = 0;
  double overallCoverage = 0.0;
  calculateOverallStats(totalBins, hitBins, overallCoverage);

  outFile << std::fixed
          << std::setprecision(std::numeric_limits<double>::max_digits10);

  outFile << "{\n"; // Note: Escaped backslashes removed for template clarity

  outFile << "  \"summary\": {\n";
  outFile << "    \"overall_coverage_percent\": " << overallCoverage << ",\n";
  outFile << "    \"total_bins_hit\": " << hitBins << ",\n";
  outFile << "    \"total_bins\": " << totalBins << "\n";
  outFile << "  },\n";

  outFile << "  \"conditional_predicates\": [\n";
  for (size_t i = 0; i < condition_points.size(); ++i) {
    condition_points[i].exportJson(outFile);
    if (i < condition_points.size() - 1) {
      outFile << ",\n";
    } else {
      outFile << "\n";
    }
  }
  outFile << "  ],\n";

  outFile << "  \"mux_conditions\": [\n";
  for (size_t i = 0; i < mux_condition_points.size(); ++i) {
    mux_condition_points[i].exportJson(outFile);
    if (i < mux_condition_points.size() - 1) {
      outFile << ",\n";
    } else {
      outFile << "\n";
    }
  }
  outFile << "  ],\n";

  outFile << "  \"register_coverage\": [\n";
  for (size_t i = 0; i < register_points.size(); ++i) {
    register_points[i].exportJson(outFile);
    if (i < register_points.size() - 1) {
      outFile << ",\n";
    } else {
      outFile << "\n";
    }
  }
  outFile << "  ]\n"; // Note: No trailing comma for the last section

  outFile << "}\n";

  outFile.close();
  if (!outFile.good()) {
    std::cerr
        << "Warning: Potential error occurred while writing to JSON file '"
        << filename << "'." << std::endl;
  } else {
    std::cout << "CoverageCollector: Successfully exported JSON report to "
              << filename << std::endl;
  }
}

#endif // COVERAGE_COLLECTOR_H
// --- END GENERATED coverage_collector.h (HEADER-ONLY) ---
