FIRRTL version 2.0.0
circuit UART_rx :
  module UART_rx :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip i_serial_data : UInt<1>, o_rx_done : UInt<1>, o_data : UInt<8>} @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 10:14]
    output _cond_pred : { UART_rx__M__UART_rx__S___T : UInt<1>, UART_rx__M__UART_rx__S___T_1 : UInt<1>, UART_rx__M__UART_rx__S___T_10 : UInt<1>, UART_rx__M__UART_rx__S___T_11 : UInt<1>, UART_rx__M__UART_rx__S___T_2 : UInt<1>, UART_rx__M__UART_rx__S___T_3 : UInt<1>, UART_rx__M__UART_rx__S___T_4 : UInt<1>, UART_rx__M__UART_rx__S___T_5 : UInt<1>, UART_rx__M__UART_rx__S___T_6 : UInt<1>, UART_rx__M__UART_rx__S___T_8 : UInt<1>, UART_rx__M__UART_rx__S___T_9 : UInt<1>}
    output _reg_signals : { UART_rx__M__UART_rx__S__bitCnterReg : UInt<4>, UART_rx__M__UART_rx__S__clkCnterReg : UInt<9>, UART_rx__M__UART_rx__S__outDataReg : UInt<1>[8], UART_rx__M__UART_rx__S__outRxDoneReg : UInt<1>, UART_rx__M__UART_rx__S__serialDataReg : UInt<1>, UART_rx__M__UART_rx__S__serialDataReg_REG : UInt<1>, UART_rx__M__UART_rx__S__stateReg : UInt<2>}

    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_6 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_8 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_9 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_2 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_3 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_4 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_5 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_11 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_1 : UInt<1>
    wire _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_10 : UInt<1>
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_6 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_8 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_9 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_2 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_3 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_4 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_5 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_11 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_1 is invalid
    _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_10 is invalid
    reg clkCnterReg : UInt<9>, clock with :
      reset => (reset, UInt<9>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 23:28]
    reg bitCnterReg : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 24:28]
    wire _outDataReg_WIRE : UInt<1>[8] @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[0] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[1] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[2] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[3] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[4] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[5] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[6] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    _outDataReg_WIRE[7] <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 27:12]
    reg outDataReg : UInt<1>[8], clock with :
      reset => (reset, _outDataReg_WIRE) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 26:27]
    reg outRxDoneReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 29:29]
    reg stateReg : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 30:25]
    reg serialDataReg_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), serialDataReg_REG) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 33:38]
    serialDataReg_REG <= io.i_serial_data @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 33:38]
    reg serialDataReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), serialDataReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 33:30]
    serialDataReg <= serialDataReg_REG @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 33:30]
    node io_o_data_lo_lo = cat(outDataReg[1], outDataReg[0]) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:19]
    node io_o_data_lo_hi = cat(outDataReg[3], outDataReg[2]) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:19]
    node io_o_data_lo = cat(io_o_data_lo_hi, io_o_data_lo_lo) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:19]
    node io_o_data_hi_lo = cat(outDataReg[5], outDataReg[4]) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:19]
    node io_o_data_hi_hi = cat(outDataReg[7], outDataReg[6]) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:19]
    node io_o_data_hi = cat(io_o_data_hi_hi, io_o_data_hi_lo) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:19]
    node _io_o_data_T = cat(io_o_data_hi, io_o_data_lo) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:19]
    io.o_data <= _io_o_data_T @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 35:13]
    io.o_rx_done <= outRxDoneReg @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 36:16]
    node _T = eq(UInt<2>("h0"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
    when _T : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
      outRxDoneReg <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 40:20]
      clkCnterReg <= UInt<9>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 42:19]
      bitCnterReg <= UInt<4>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 43:19]
      node _T_1 = eq(serialDataReg, UInt<1>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 45:26]
      _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_1 <= _T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 45:26]
      when _T_1 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 45:39]
        stateReg <= UInt<2>("h1") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 46:18]
      else :
        stateReg <= UInt<2>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 48:18]
    else :
      node _T_2 = eq(UInt<2>("h1"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
      _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_2 <= _T_2 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
      when _T_2 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
        node _T_3 = lt(clkCnterReg, UInt<7>("h45")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 52:24]
        _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_3 <= _T_3 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 52:24]
        when _T_3 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 52:46]
          node _clkCnterReg_T = add(clkCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 53:36]
          node _clkCnterReg_T_1 = tail(_clkCnterReg_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 53:36]
          clkCnterReg <= _clkCnterReg_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 53:21]
          stateReg <= UInt<2>("h1") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 54:18]
        else :
          clkCnterReg <= UInt<9>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 57:21]
          node _T_4 = eq(serialDataReg, UInt<1>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 58:28]
          _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_4 <= _T_4 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 58:28]
          when _T_4 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 58:41]
            stateReg <= UInt<2>("h2") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 59:20]
          else :
            stateReg <= UInt<2>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 62:20]
      else :
        node _T_5 = eq(UInt<2>("h2"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
        _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_5 <= _T_5 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
        when _T_5 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
          node _T_6 = lt(clkCnterReg, UInt<8>("h8a")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 67:24]
          _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_6 <= _T_6 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 67:24]
          when _T_6 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 67:40]
            node _clkCnterReg_T_2 = add(clkCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 68:36]
            node _clkCnterReg_T_3 = tail(_clkCnterReg_T_2, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 68:36]
            clkCnterReg <= _clkCnterReg_T_3 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 68:21]
          else :
            clkCnterReg <= UInt<9>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 70:21]
            node _T_7 = bits(bitCnterReg, 2, 0)
            outDataReg[_T_7] <= serialDataReg @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 73:33]
            node _T_8 = lt(bitCnterReg, UInt<4>("h8")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 74:26]
            _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_8 <= _T_8 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 74:26]
            when _T_8 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 74:43]
              node _bitCnterReg_T = add(bitCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 75:38]
              node _bitCnterReg_T_1 = tail(_bitCnterReg_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 75:38]
              bitCnterReg <= _bitCnterReg_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 75:23]
            else :
              bitCnterReg <= UInt<4>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 77:23]
          node _T_9 = eq(bitCnterReg, UInt<4>("h8")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 80:24]
          _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_9 <= _T_9 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 80:24]
          when _T_9 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 80:43]
            stateReg <= UInt<2>("h3") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 81:18]
          else :
            stateReg <= UInt<2>("h2") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 83:18]
        else :
          node _T_10 = eq(UInt<2>("h3"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
          _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_10 <= _T_10 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
          when _T_10 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 38:20]
            node _T_11 = lt(clkCnterReg, UInt<8>("h8a")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 87:24]
            _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_11 <= _T_11 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 87:24]
            when _T_11 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 87:40]
              node _clkCnterReg_T_4 = add(clkCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 88:36]
              node _clkCnterReg_T_5 = tail(_clkCnterReg_T_4, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 88:36]
              clkCnterReg <= _clkCnterReg_T_5 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 88:21]
              stateReg <= UInt<2>("h3") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 89:18]
            else :
              clkCnterReg <= UInt<9>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 91:21]
              outRxDoneReg <= UInt<1>("h1") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 93:22]
              stateReg <= UInt<2>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 94:18]
    _cond_pred.UART_rx__M__UART_rx__S___T <= _T
    _cond_pred.UART_rx__M__UART_rx__S___T_1 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_1
    _cond_pred.UART_rx__M__UART_rx__S___T_10 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_10
    _cond_pred.UART_rx__M__UART_rx__S___T_11 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_11
    _cond_pred.UART_rx__M__UART_rx__S___T_2 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_2
    _cond_pred.UART_rx__M__UART_rx__S___T_3 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_3
    _cond_pred.UART_rx__M__UART_rx__S___T_4 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_4
    _cond_pred.UART_rx__M__UART_rx__S___T_5 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_5
    _cond_pred.UART_rx__M__UART_rx__S___T_6 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_6
    _cond_pred.UART_rx__M__UART_rx__S___T_8 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_8
    _cond_pred.UART_rx__M__UART_rx__S___T_9 <= _cond_pred_prop_wire_UART_rx__M__UART_rx__S___T_9
    _reg_signals.UART_rx__M__UART_rx__S__bitCnterReg <= bitCnterReg
    _reg_signals.UART_rx__M__UART_rx__S__clkCnterReg <= clkCnterReg
    _reg_signals.UART_rx__M__UART_rx__S__outDataReg <= outDataReg
    _reg_signals.UART_rx__M__UART_rx__S__outRxDoneReg <= outRxDoneReg
    _reg_signals.UART_rx__M__UART_rx__S__serialDataReg <= serialDataReg
    _reg_signals.UART_rx__M__UART_rx__S__serialDataReg_REG <= serialDataReg_REG
    _reg_signals.UART_rx__M__UART_rx__S__stateReg <= stateReg
