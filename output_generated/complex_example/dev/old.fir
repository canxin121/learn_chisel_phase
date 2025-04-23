FIRRTL version 3.3.0
circuit ComplexExample :
  module SubModule : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 6:7]
    input clock : Clock @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 6:7]
    input reset : Reset @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 6:7]
    output io : { flip a : UInt<8>, flip b : UInt<8>, flip sel : UInt<2>, out : UInt<8>} @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 7:14]

    regreset stateReg : UInt<8>, clock, reset, UInt<8>(0h0) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 14:25]
    connect io.out, stateReg @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 17:10]
    wire nextState : UInt @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 18:30]
    connect nextState, stateReg @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 18:30]
    node _T = eq(UInt<1>(0h0), io.sel) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 20:18]
    when _T : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 20:18]
      node _nextState_T = add(io.a, io.b) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 22:25]
      node _nextState_T_1 = tail(_nextState_T, 1) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 22:25]
      connect nextState, _nextState_T_1 @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 22:17]
      connect io.out, io.a @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 23:14]
    else :
      node _T_1 = eq(UInt<1>(0h1), io.sel) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 20:18]
      when _T_1 : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 20:18]
        node _nextState_T_2 = sub(io.a, io.b) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 26:25]
        node _nextState_T_3 = tail(_nextState_T_2, 1) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 26:25]
        connect nextState, _nextState_T_3 @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 26:17]
        connect io.out, io.b @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 27:14]
      else :
        node _T_2 = eq(UInt<2>(0h2), io.sel) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 20:18]
        when _T_2 : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 20:18]
          node _nextState_T_4 = and(io.a, io.b) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 30:25]
          connect nextState, _nextState_T_4 @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 30:17]
          node _io_out_T = add(stateReg, UInt<1>(0h1)) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 31:26]
          node _io_out_T_1 = tail(_io_out_T, 1) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 31:26]
          connect io.out, _io_out_T_1 @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 31:14]
    connect stateReg, nextState @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\SubModule.scala 36:12]

  module AnotherSubModule : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 6:7]
    input clock : Clock @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 6:7]
    input reset : Reset @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 6:7]
    output io : { flip in : UInt<8>, out : UInt<8>} @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 7:14]

    regreset delayedIn : UInt, clock, reset, UInt<1>(0h0) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 12:26]
    connect delayedIn, io.in @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 12:26]
    connect io.out, UInt<1>(0h0) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 15:10]
    node _T = gt(io.in, UInt<7>(0h64)) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 17:14]
    when _T : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 17:23]
      node _io_out_T = add(delayedIn, UInt<1>(0h1)) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 18:25]
      node _io_out_T_1 = tail(_io_out_T, 1) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 18:25]
      connect io.out, _io_out_T_1 @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 18:12]
    else :
      connect io.out, delayedIn @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\AnotherSubModule.scala 20:12]


  module ComplexExample : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 6:7]
    input clock : Clock @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 6:7]
    input reset : UInt<1> @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 6:7]
    output io : { flip topInA : UInt<8>, flip topInB : UInt<8>, flip topSel : UInt<2>, topOut : UInt<8>} @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 7:14]

    inst sub of SubModule @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 14:19]
    connect sub.clock, clock
    connect sub.reset, reset
    inst anotherSub of AnotherSubModule @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 15:26]
    connect anotherSub.clock, clock
    connect anotherSub.reset, reset
    connect sub.io.a, io.topInA @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 18:12]
    connect sub.io.b, io.topInB @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 19:12]
    connect sub.io.sel, io.topSel @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 20:14]
    connect anotherSub.io.in, sub.io.out @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 23:20]
    connect io.topOut, anotherSub.io.out @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\ComplexExample.scala 26:13]
