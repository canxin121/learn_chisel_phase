FIRRTL version 2.0.0
circuit ComplexExample :
  module SubModule :
    input clock : Clock
    input reset : Reset
    output io : { flip a : UInt<8>, flip b : UInt<8>, flip sel : UInt<2>, out : UInt<8>} @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 7:14]

    reg stateReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 14:25]
    io.out <= stateReg @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 17:10]
    wire nextState : UInt @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 18:30]
    nextState <= stateReg @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 18:30]
    node _T = eq(UInt<1>("h0"), io.sel) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 20:18]
    when _T : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 20:18]
      node _nextState_T = add(io.a, io.b) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 22:25]
      node _nextState_T_1 = tail(_nextState_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 22:25]
      nextState <= _nextState_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 22:17]
      io.out <= io.a @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 23:14]
    else :
      node _T_1 = eq(UInt<1>("h1"), io.sel) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 20:18]
      when _T_1 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 20:18]
        node _nextState_T_2 = sub(io.a, io.b) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 26:25]
        node _nextState_T_3 = tail(_nextState_T_2, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 26:25]
        nextState <= _nextState_T_3 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 26:17]
        io.out <= io.b @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 27:14]
      else :
        node _T_2 = eq(UInt<2>("h2"), io.sel) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 20:18]
        when _T_2 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 20:18]
          node _nextState_T_4 = and(io.a, io.b) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 30:25]
          nextState <= _nextState_T_4 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 30:17]
          node _io_out_T = add(stateReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 31:26]
          node _io_out_T_1 = tail(_io_out_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 31:26]
          io.out <= _io_out_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 31:14]
    stateReg <= nextState @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\SubModule.scala 36:12]

  module AnotherSubModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>} @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 7:14]

    reg delayedIn : UInt, clock with :
      reset => (reset, UInt<1>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 12:26]
    delayedIn <= io.in @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 12:26]
    io.out <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 15:10]
    node _T = gt(io.in, UInt<7>("h64")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 17:14]
    when _T : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 17:23]
      node _io_out_T = add(delayedIn, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 18:25]
      node _io_out_T_1 = tail(_io_out_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 18:25]
      io.out <= _io_out_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 18:12]
    else :
      io.out <= delayedIn @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\AnotherSubModule.scala 20:12]


  module ComplexExample :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip topInA : UInt<8>, flip topInB : UInt<8>, flip topSel : UInt<2>, topOut : UInt<8>} @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 7:14]

    inst sub of SubModule @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 14:19]
    sub.clock <= clock
    sub.reset <= reset
    inst anotherSub of AnotherSubModule @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 15:26]
    anotherSub.clock <= clock
    anotherSub.reset <= reset
    node _sub_io_a_T = bits(io.topSel, 0, 0) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 18:28]
    node _sub_io_a_T_1 = mux(_sub_io_a_T, io.topInB, io.topInA) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 18:18]
    sub.io.a <= _sub_io_a_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 18:12]
    sub.io.b <= io.topInB @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 21:12]
    node _T = bits(io.topSel, 1, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 22:17]
    when _T : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 22:22]
      sub.io.b <= io.topInA @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 23:14]
    sub.io.sel <= io.topSel @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 27:14]
    node _anotherSub_io_in_T = bits(io.topSel, 0, 0) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 30:36]
    node _anotherSub_io_in_T_1 = mux(_anotherSub_io_in_T, sub.io.out, io.topInA) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 30:26]
    anotherSub.io.in <= _anotherSub_io_in_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 30:20]
    node _T_1 = eq(io.topSel, UInt<1>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 33:18]
    when _T_1 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 33:27]
      io.topOut <= anotherSub.io.out @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 34:15]
    else :
      node _T_2 = eq(io.topSel, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 35:24]
      when _T_2 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 35:33]
        io.topOut <= sub.io.out @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 36:15]
      else :
        node _T_3 = eq(io.topSel, UInt<2>("h2")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 37:24]
        when _T_3 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 37:33]
          node _io_topOut_T = add(io.topInA, io.topInB) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 38:28]
          node _io_topOut_T_1 = tail(_io_topOut_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 38:28]
          io.topOut <= _io_topOut_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 38:15]
        else :
          io.topOut <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\ComplexExample.scala 40:15]

