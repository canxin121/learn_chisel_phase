FIRRTL version 3.3.0
circuit ComplexExample :
  module SubModule : @[chisel_coverage_tool/src/modules/SubModule.scala 6:7]
    input clock : Clock @[chisel_coverage_tool/src/modules/SubModule.scala 6:7]
    input reset : Reset @[chisel_coverage_tool/src/modules/SubModule.scala 6:7]
    output io : { flip a : UInt<8>, flip b : UInt<8>, flip sel : UInt<2>, out : UInt<8>} @[chisel_coverage_tool/src/modules/SubModule.scala 7:14]

    regreset stateReg : UInt<8>, clock, reset, UInt<8>(0h0) @[chisel_coverage_tool/src/modules/SubModule.scala 14:25]
    connect io.out, stateReg @[chisel_coverage_tool/src/modules/SubModule.scala 17:10]
    wire nextState : UInt @[chisel_coverage_tool/src/modules/SubModule.scala 18:30]
    connect nextState, stateReg @[chisel_coverage_tool/src/modules/SubModule.scala 18:30]
    node _T = eq(UInt<1>(0h0), io.sel) @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
    when _T : @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
      node _nextState_T = add(io.a, io.b) @[chisel_coverage_tool/src/modules/SubModule.scala 22:25]
      node _nextState_T_1 = tail(_nextState_T, 1) @[chisel_coverage_tool/src/modules/SubModule.scala 22:25]
      connect nextState, _nextState_T_1 @[chisel_coverage_tool/src/modules/SubModule.scala 22:17]
      connect io.out, io.a @[chisel_coverage_tool/src/modules/SubModule.scala 23:14]
    else :
      node _T_1 = eq(UInt<1>(0h1), io.sel) @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
      when _T_1 : @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
        node _nextState_T_2 = sub(io.a, io.b) @[chisel_coverage_tool/src/modules/SubModule.scala 26:25]
        node _nextState_T_3 = tail(_nextState_T_2, 1) @[chisel_coverage_tool/src/modules/SubModule.scala 26:25]
        connect nextState, _nextState_T_3 @[chisel_coverage_tool/src/modules/SubModule.scala 26:17]
        connect io.out, io.b @[chisel_coverage_tool/src/modules/SubModule.scala 27:14]
      else :
        node _T_2 = eq(UInt<2>(0h2), io.sel) @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
        when _T_2 : @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
          node _nextState_T_4 = and(io.a, io.b) @[chisel_coverage_tool/src/modules/SubModule.scala 30:25]
          connect nextState, _nextState_T_4 @[chisel_coverage_tool/src/modules/SubModule.scala 30:17]
          node _io_out_T = add(stateReg, UInt<1>(0h1)) @[chisel_coverage_tool/src/modules/SubModule.scala 31:26]
          node _io_out_T_1 = tail(_io_out_T, 1) @[chisel_coverage_tool/src/modules/SubModule.scala 31:26]
          connect io.out, _io_out_T_1 @[chisel_coverage_tool/src/modules/SubModule.scala 31:14]
    connect stateReg, nextState @[chisel_coverage_tool/src/modules/SubModule.scala 36:12]

  module AnotherSubModule : @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 6:7]
    input clock : Clock @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 6:7]
    input reset : Reset @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 6:7]
    output io : { flip in : UInt<8>, out : UInt<8>} @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 7:14]

    regreset delayedIn : UInt, clock, reset, UInt<1>(0h0) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 12:26]
    connect delayedIn, io.in @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 12:26]
    connect io.out, UInt<1>(0h0) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 15:10]
    node _T = gt(io.in, UInt<7>(0h64)) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 17:14]
    when _T : @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 17:23]
      node _io_out_T = add(delayedIn, UInt<1>(0h1)) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 18:25]
      node _io_out_T_1 = tail(_io_out_T, 1) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 18:25]
      connect io.out, _io_out_T_1 @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 18:12]
    else :
      connect io.out, delayedIn @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 20:12]


  module ComplexExample : @[chisel_coverage_tool/src/modules/ComplexExample.scala 6:7]
    input clock : Clock @[chisel_coverage_tool/src/modules/ComplexExample.scala 6:7]
    input reset : UInt<1> @[chisel_coverage_tool/src/modules/ComplexExample.scala 6:7]
    output io : { flip topInA : UInt<8>, flip topInB : UInt<8>, flip topSel : UInt<2>, topOut : UInt<8>} @[chisel_coverage_tool/src/modules/ComplexExample.scala 7:14]

    inst sub of SubModule @[chisel_coverage_tool/src/modules/ComplexExample.scala 14:19]
    connect sub.clock, clock
    connect sub.reset, reset
    inst anotherSub of AnotherSubModule @[chisel_coverage_tool/src/modules/ComplexExample.scala 15:26]
    connect anotherSub.clock, clock
    connect anotherSub.reset, reset
    connect sub.io.a, io.topInA @[chisel_coverage_tool/src/modules/ComplexExample.scala 18:12]
    connect sub.io.b, io.topInB @[chisel_coverage_tool/src/modules/ComplexExample.scala 19:12]
    connect sub.io.sel, io.topSel @[chisel_coverage_tool/src/modules/ComplexExample.scala 20:14]
    connect anotherSub.io.in, sub.io.out @[chisel_coverage_tool/src/modules/ComplexExample.scala 23:20]
    connect io.topOut, anotherSub.io.out @[chisel_coverage_tool/src/modules/ComplexExample.scala 26:13]
