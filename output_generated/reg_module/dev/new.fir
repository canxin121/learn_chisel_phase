FIRRTL version 2.0.0
circuit RegModule :
  module RegModule :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip sel : UInt<1>, out : UInt<8>[3][2]} @[chisel_coverage_tool/src/modules/Reg.scala 7:14]
    output _cp : { _s0 : UInt<1>}
    output _rs : { _s0 : UInt<8>, _s1 : UInt<8>, _s10 : UInt<8>, _s11 : UInt<8>, _s2 : UInt<8>, _s3 : UInt<8>, _s4 : UInt<8>, _s5 : UInt<8>, _s6 : UInt<8>, _s7 : UInt<8>, _s8 : UInt<8>, _s9 : UInt<8>}

    wire _reg_prop_wire__s5 : UInt<8>
    wire _reg_prop_wire__s2 : UInt<8>
    wire _reg_prop_wire__s4 : UInt<8>
    wire _reg_prop_wire__s1 : UInt<8>
    wire _reg_prop_wire__s3 : UInt<8>
    wire _reg_prop_wire__s7 : UInt<8>
    wire _reg_prop_wire__s9 : UInt<8>
    wire _reg_prop_wire__s6 : UInt<8>
    wire _reg_prop_wire__s11 : UInt<8>
    wire _reg_prop_wire__s8 : UInt<8>
    wire _reg_prop_wire__s10 : UInt<8>
    wire _reg_prop_wire__s0 : UInt<8>
    _reg_prop_wire__s5 is invalid
    _reg_prop_wire__s2 is invalid
    _reg_prop_wire__s4 is invalid
    _reg_prop_wire__s1 is invalid
    _reg_prop_wire__s3 is invalid
    _reg_prop_wire__s7 is invalid
    _reg_prop_wire__s9 is invalid
    _reg_prop_wire__s6 is invalid
    _reg_prop_wire__s11 is invalid
    _reg_prop_wire__s8 is invalid
    _reg_prop_wire__s10 is invalid
    _reg_prop_wire__s0 is invalid
    node _T = eq(io.sel, UInt<1>("h0")) @[chisel_coverage_tool/src/modules/Reg.scala 13:15]
    when _T : @[chisel_coverage_tool/src/modules/Reg.scala 13:24]
      wire _regA_WIRE : UInt<8>[3] @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      _regA_WIRE[0] <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      _regA_WIRE[1] <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      _regA_WIRE[2] <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      wire _regA_WIRE_1 : UInt<8>[3] @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      _regA_WIRE_1[0] <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      _regA_WIRE_1[1] <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      _regA_WIRE_1[2] <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Reg.scala 15:55]
      wire _regA_WIRE_2 : UInt<8>[3][2] @[chisel_coverage_tool/src/modules/Reg.scala 15:39]
      _regA_WIRE_2[0] <= _regA_WIRE @[chisel_coverage_tool/src/modules/Reg.scala 15:39]
      _regA_WIRE_2[1] <= _regA_WIRE_1 @[chisel_coverage_tool/src/modules/Reg.scala 15:39]
      reg regA : UInt<8>[3][2], clock with :
        reset => (reset, _regA_WIRE_2) @[chisel_coverage_tool/src/modules/Reg.scala 15:23]
      _reg_prop_wire__s5 <= regA[1][2] @[chisel_coverage_tool/src/modules/Reg.scala 15:23]
      _reg_prop_wire__s2 <= regA[0][2] @[chisel_coverage_tool/src/modules/Reg.scala 15:23]
      _reg_prop_wire__s4 <= regA[1][1] @[chisel_coverage_tool/src/modules/Reg.scala 15:23]
      _reg_prop_wire__s1 <= regA[0][1] @[chisel_coverage_tool/src/modules/Reg.scala 15:23]
      _reg_prop_wire__s3 <= regA[1][0] @[chisel_coverage_tool/src/modules/Reg.scala 15:23]
      _reg_prop_wire__s0 <= regA[0][0] @[chisel_coverage_tool/src/modules/Reg.scala 15:23]
      node _regA_0_0_T = add(regA[0][0], UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Reg.scala 17:30]
      node _regA_0_0_T_1 = tail(_regA_0_0_T, 1) @[chisel_coverage_tool/src/modules/Reg.scala 17:30]
      regA[0][0] <= _regA_0_0_T_1 @[chisel_coverage_tool/src/modules/Reg.scala 17:16]
      io.out <= regA @[chisel_coverage_tool/src/modules/Reg.scala 18:12]
    else :
      wire _regB_WIRE : UInt<8>[3] @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      _regB_WIRE[0] <= UInt<8>("h64") @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      _regB_WIRE[1] <= UInt<8>("h65") @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      _regB_WIRE[2] <= UInt<8>("h66") @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      wire _regB_WIRE_1 : UInt<8>[3] @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      _regB_WIRE_1[0] <= UInt<8>("h6e") @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      _regB_WIRE_1[1] <= UInt<8>("h6f") @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      _regB_WIRE_1[2] <= UInt<8>("h70") @[chisel_coverage_tool/src/modules/Reg.scala 24:16]
      wire _regB_WIRE_2 : UInt<8>[3][2] @[chisel_coverage_tool/src/modules/Reg.scala 23:14]
      _regB_WIRE_2[0] <= _regB_WIRE @[chisel_coverage_tool/src/modules/Reg.scala 23:14]
      _regB_WIRE_2[1] <= _regB_WIRE_1 @[chisel_coverage_tool/src/modules/Reg.scala 23:14]
      reg regB : UInt<8>[3][2], clock with :
        reset => (reset, _regB_WIRE_2) @[chisel_coverage_tool/src/modules/Reg.scala 22:23]
      _reg_prop_wire__s7 <= regB[0][1] @[chisel_coverage_tool/src/modules/Reg.scala 22:23]
      _reg_prop_wire__s9 <= regB[1][0] @[chisel_coverage_tool/src/modules/Reg.scala 22:23]
      _reg_prop_wire__s6 <= regB[0][0] @[chisel_coverage_tool/src/modules/Reg.scala 22:23]
      _reg_prop_wire__s11 <= regB[1][2] @[chisel_coverage_tool/src/modules/Reg.scala 22:23]
      _reg_prop_wire__s8 <= regB[0][2] @[chisel_coverage_tool/src/modules/Reg.scala 22:23]
      _reg_prop_wire__s10 <= regB[1][1] @[chisel_coverage_tool/src/modules/Reg.scala 22:23]
      node _regB_1_2_T = sub(regB[1][2], UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Reg.scala 28:30]
      node _regB_1_2_T_1 = tail(_regB_1_2_T, 1) @[chisel_coverage_tool/src/modules/Reg.scala 28:30]
      regB[1][2] <= _regB_1_2_T_1 @[chisel_coverage_tool/src/modules/Reg.scala 28:16]
      io.out <= regB @[chisel_coverage_tool/src/modules/Reg.scala 29:12]
    _cp._s0 <= _T
    _rs._s0 <= _reg_prop_wire__s0
    _rs._s1 <= _reg_prop_wire__s1
    _rs._s2 <= _reg_prop_wire__s2
    _rs._s3 <= _reg_prop_wire__s3
    _rs._s4 <= _reg_prop_wire__s4
    _rs._s5 <= _reg_prop_wire__s5
    _rs._s6 <= _reg_prop_wire__s6
    _rs._s7 <= _reg_prop_wire__s7
    _rs._s8 <= _reg_prop_wire__s8
    _rs._s9 <= _reg_prop_wire__s9
    _rs._s10 <= _reg_prop_wire__s10
    _rs._s11 <= _reg_prop_wire__s11
