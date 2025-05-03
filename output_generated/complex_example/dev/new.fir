FIRRTL version 2.0.0
circuit ComplexExample :
  module SubModule :
    input clock : Clock
    input reset : Reset
    output io : { flip a : UInt<8>, flip b : UInt<8>, flip sel : UInt<2>, out : UInt<8>} @[chisel_coverage_tool/src/modules/SubModule.scala 7:14]
    output _cond_pred : { ComplexExample__I__sub__M__SubModule__S___T : UInt<1>, ComplexExample__I__sub__M__SubModule__S___T_1 : UInt<1>, ComplexExample__I__sub__M__SubModule__S___T_2 : UInt<1>}
    output _reg_signals : { ComplexExample__I__sub__M__SubModule__S__stateReg : UInt<8>}

    wire _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_2 : UInt<1>
    wire _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_1 : UInt<1>
    _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_2 is invalid
    _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_1 is invalid
    reg stateReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[chisel_coverage_tool/src/modules/SubModule.scala 14:25]
    io.out <= stateReg @[chisel_coverage_tool/src/modules/SubModule.scala 17:10]
    wire nextState : UInt @[chisel_coverage_tool/src/modules/SubModule.scala 18:30]
    nextState <= stateReg @[chisel_coverage_tool/src/modules/SubModule.scala 18:30]
    node _T = eq(UInt<1>("h0"), io.sel) @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
    when _T : @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
      node _nextState_T = add(io.a, io.b) @[chisel_coverage_tool/src/modules/SubModule.scala 22:25]
      node _nextState_T_1 = tail(_nextState_T, 1) @[chisel_coverage_tool/src/modules/SubModule.scala 22:25]
      nextState <= _nextState_T_1 @[chisel_coverage_tool/src/modules/SubModule.scala 22:17]
      io.out <= io.a @[chisel_coverage_tool/src/modules/SubModule.scala 23:14]
    else :
      node _T_1 = eq(UInt<1>("h1"), io.sel) @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
      _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_1 <= _T_1 @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
      when _T_1 : @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
        node _nextState_T_2 = sub(io.a, io.b) @[chisel_coverage_tool/src/modules/SubModule.scala 26:25]
        node _nextState_T_3 = tail(_nextState_T_2, 1) @[chisel_coverage_tool/src/modules/SubModule.scala 26:25]
        nextState <= _nextState_T_3 @[chisel_coverage_tool/src/modules/SubModule.scala 26:17]
        io.out <= io.b @[chisel_coverage_tool/src/modules/SubModule.scala 27:14]
      else :
        node _T_2 = eq(UInt<2>("h2"), io.sel) @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
        _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_2 <= _T_2 @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
        when _T_2 : @[chisel_coverage_tool/src/modules/SubModule.scala 20:18]
          node _nextState_T_4 = and(io.a, io.b) @[chisel_coverage_tool/src/modules/SubModule.scala 30:25]
          nextState <= _nextState_T_4 @[chisel_coverage_tool/src/modules/SubModule.scala 30:17]
          node _io_out_T = add(stateReg, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/SubModule.scala 31:26]
          node _io_out_T_1 = tail(_io_out_T, 1) @[chisel_coverage_tool/src/modules/SubModule.scala 31:26]
          io.out <= _io_out_T_1 @[chisel_coverage_tool/src/modules/SubModule.scala 31:14]
    stateReg <= nextState @[chisel_coverage_tool/src/modules/SubModule.scala 36:12]
    _cond_pred.ComplexExample__I__sub__M__SubModule__S___T <= _T
    _cond_pred.ComplexExample__I__sub__M__SubModule__S___T_1 <= _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_1
    _cond_pred.ComplexExample__I__sub__M__SubModule__S___T_2 <= _cond_pred_prop_wire_ComplexExample__I__sub__M__SubModule__S___T_2
    _reg_signals.ComplexExample__I__sub__M__SubModule__S__stateReg <= stateReg

  module AnotherSubModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>} @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 7:14]
    output _cond_pred : { ComplexExample__I__anotherSub__M__AnotherSubModule__S___T : UInt<1>}
    output _reg_signals : { ComplexExample__I__anotherSub__M__AnotherSubModule__S__delayedIn : UInt}

    reg delayedIn : UInt, clock with :
      reset => (reset, UInt<1>("h0")) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 12:26]
    delayedIn <= io.in @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 12:26]
    io.out <= UInt<1>("h0") @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 15:10]
    node _T = gt(io.in, UInt<7>("h64")) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 17:14]
    when _T : @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 17:23]
      node _io_out_T = add(delayedIn, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 18:25]
      node _io_out_T_1 = tail(_io_out_T, 1) @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 18:25]
      io.out <= _io_out_T_1 @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 18:12]
    else :
      io.out <= delayedIn @[chisel_coverage_tool/src/modules/AnotherSubModule.scala 20:12]
    _cond_pred.ComplexExample__I__anotherSub__M__AnotherSubModule__S___T <= _T
    _reg_signals.ComplexExample__I__anotherSub__M__AnotherSubModule__S__delayedIn <= delayedIn

  module ComplexExample :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip topInA : UInt<8>, flip topInB : UInt<8>, flip topSel : UInt<2>, topOut : UInt<8>} @[chisel_coverage_tool/src/modules/ComplexExample.scala 7:14]
    output _mux_cond : { ComplexExample__M__ComplexExample__S___anotherSub_io_in_T : UInt<1>, ComplexExample__M__ComplexExample__S___sub_io_a_T : UInt<1>}
    output _cond_pred : { ComplexExample__I__anotherSub__M__AnotherSubModule__S___T : UInt<1>, ComplexExample__I__sub__M__SubModule__S___T : UInt<1>, ComplexExample__I__sub__M__SubModule__S___T_1 : UInt<1>, ComplexExample__I__sub__M__SubModule__S___T_2 : UInt<1>, ComplexExample__M__ComplexExample__S___T : UInt<1>, ComplexExample__M__ComplexExample__S___T_1 : UInt<1>, ComplexExample__M__ComplexExample__S___T_2 : UInt<1>, ComplexExample__M__ComplexExample__S___T_3 : UInt<1>}
    output _reg_signals : { ComplexExample__I__anotherSub__M__AnotherSubModule__S__delayedIn : UInt, ComplexExample__I__sub__M__SubModule__S__stateReg : UInt<8>}

    wire _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_2 : UInt<1>
    wire _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_3 : UInt<1>
    _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_2 is invalid
    _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_3 is invalid
    inst sub of SubModule @[chisel_coverage_tool/src/modules/ComplexExample.scala 14:19]
    sub.clock <= clock
    sub.reset <= reset
    inst anotherSub of AnotherSubModule @[chisel_coverage_tool/src/modules/ComplexExample.scala 15:26]
    anotherSub.clock <= clock
    anotherSub.reset <= reset
    node _sub_io_a_T = bits(io.topSel, 0, 0) @[chisel_coverage_tool/src/modules/ComplexExample.scala 18:28]
    node _sub_io_a_T_1 = mux(_sub_io_a_T, io.topInB, io.topInA) @[chisel_coverage_tool/src/modules/ComplexExample.scala 18:18]
    sub.io.a <= _sub_io_a_T_1 @[chisel_coverage_tool/src/modules/ComplexExample.scala 18:12]
    sub.io.b <= io.topInB @[chisel_coverage_tool/src/modules/ComplexExample.scala 21:12]
    node _T = bits(io.topSel, 1, 1) @[chisel_coverage_tool/src/modules/ComplexExample.scala 22:17]
    when _T : @[chisel_coverage_tool/src/modules/ComplexExample.scala 22:22]
      sub.io.b <= io.topInA @[chisel_coverage_tool/src/modules/ComplexExample.scala 23:14]
    sub.io.sel <= io.topSel @[chisel_coverage_tool/src/modules/ComplexExample.scala 27:14]
    node _anotherSub_io_in_T = bits(io.topSel, 0, 0) @[chisel_coverage_tool/src/modules/ComplexExample.scala 30:36]
    node _anotherSub_io_in_T_1 = mux(_anotherSub_io_in_T, sub.io.out, io.topInA) @[chisel_coverage_tool/src/modules/ComplexExample.scala 30:26]
    anotherSub.io.in <= _anotherSub_io_in_T_1 @[chisel_coverage_tool/src/modules/ComplexExample.scala 30:20]
    node _T_1 = eq(io.topSel, UInt<1>("h0")) @[chisel_coverage_tool/src/modules/ComplexExample.scala 33:18]
    when _T_1 : @[chisel_coverage_tool/src/modules/ComplexExample.scala 33:27]
      io.topOut <= anotherSub.io.out @[chisel_coverage_tool/src/modules/ComplexExample.scala 34:15]
    else :
      node _T_2 = eq(io.topSel, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/ComplexExample.scala 35:24]
      _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_2 <= _T_2 @[chisel_coverage_tool/src/modules/ComplexExample.scala 35:24]
      when _T_2 : @[chisel_coverage_tool/src/modules/ComplexExample.scala 35:33]
        io.topOut <= sub.io.out @[chisel_coverage_tool/src/modules/ComplexExample.scala 36:15]
      else :
        node _T_3 = eq(io.topSel, UInt<2>("h2")) @[chisel_coverage_tool/src/modules/ComplexExample.scala 37:24]
        _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_3 <= _T_3 @[chisel_coverage_tool/src/modules/ComplexExample.scala 37:24]
        when _T_3 : @[chisel_coverage_tool/src/modules/ComplexExample.scala 37:33]
          node _io_topOut_T = add(io.topInA, io.topInB) @[chisel_coverage_tool/src/modules/ComplexExample.scala 38:28]
          node _io_topOut_T_1 = tail(_io_topOut_T, 1) @[chisel_coverage_tool/src/modules/ComplexExample.scala 38:28]
          io.topOut <= _io_topOut_T_1 @[chisel_coverage_tool/src/modules/ComplexExample.scala 38:15]
        else :
          io.topOut <= UInt<1>("h0") @[chisel_coverage_tool/src/modules/ComplexExample.scala 40:15]
    _mux_cond.ComplexExample__M__ComplexExample__S___anotherSub_io_in_T <= _anotherSub_io_in_T
    _mux_cond.ComplexExample__M__ComplexExample__S___sub_io_a_T <= _sub_io_a_T
    _cond_pred.ComplexExample__I__anotherSub__M__AnotherSubModule__S___T <= anotherSub._cond_pred.ComplexExample__I__anotherSub__M__AnotherSubModule__S___T
    _cond_pred.ComplexExample__I__sub__M__SubModule__S___T <= sub._cond_pred.ComplexExample__I__sub__M__SubModule__S___T
    _cond_pred.ComplexExample__I__sub__M__SubModule__S___T_1 <= sub._cond_pred.ComplexExample__I__sub__M__SubModule__S___T_1
    _cond_pred.ComplexExample__I__sub__M__SubModule__S___T_2 <= sub._cond_pred.ComplexExample__I__sub__M__SubModule__S___T_2
    _cond_pred.ComplexExample__M__ComplexExample__S___T <= _T
    _cond_pred.ComplexExample__M__ComplexExample__S___T_1 <= _T_1
    _cond_pred.ComplexExample__M__ComplexExample__S___T_2 <= _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_2
    _cond_pred.ComplexExample__M__ComplexExample__S___T_3 <= _cond_pred_prop_wire_ComplexExample__M__ComplexExample__S___T_3
    _reg_signals.ComplexExample__I__anotherSub__M__AnotherSubModule__S__delayedIn <= anotherSub._reg_signals.ComplexExample__I__anotherSub__M__AnotherSubModule__S__delayedIn
    _reg_signals.ComplexExample__I__sub__M__SubModule__S__stateReg <= sub._reg_signals.ComplexExample__I__sub__M__SubModule__S__stateReg
