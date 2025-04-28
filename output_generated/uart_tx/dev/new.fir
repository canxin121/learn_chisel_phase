FIRRTL version 2.0.0
circuit UART_tx :
  module UART_tx :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip i_tx_trig : UInt<1>, flip i_data : UInt<8>, o_tx_busy : UInt<1>, o_tx_done : UInt<1>, o_serial_data : UInt<1>} @[chisel_coverage_tool/src/modules/Uart.scala 105:14]
    output _cond_pred : { UART_tx__I__local__I___T : UInt<1>, UART_tx__I__local__I___T_1 : UInt<1>, UART_tx__I__local__I___T_2 : UInt<1>, UART_tx__I__local__I___T_3 : UInt<1>, UART_tx__I__local__I___T_4 : UInt<1>, UART_tx__I__local__I___T_5 : UInt<1>, UART_tx__I__local__I___T_6 : UInt<1>, UART_tx__I__local__I___T_7 : UInt<1>, UART_tx__I__local__I___T_8 : UInt<1>}
    output _reg_signals : { UART_tx__I__local__I__bitCnterReg : UInt<4>, UART_tx__I__local__I__clkCnterReg : UInt<8>, UART_tx__I__local__I__inDataReg : UInt<8>, UART_tx__I__local__I__outDataReg : UInt<1>, UART_tx__I__local__I__outTxBusyReg : UInt<1>, UART_tx__I__local__I__outTxDoneReg : UInt<1>, UART_tx__I__local__I__stateReg : UInt<2>}

    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_6 : UInt<1>
    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_7 : UInt<1>
    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_8 : UInt<1>
    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_2 : UInt<1>
    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_3 : UInt<1>
    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_4 : UInt<1>
    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_5 : UInt<1>
    wire _cond_pred_prop_wire_UART_tx__I__local__I___T_1 : UInt<1>
    _cond_pred_prop_wire_UART_tx__I__local__I___T_6 is invalid
    _cond_pred_prop_wire_UART_tx__I__local__I___T_7 is invalid
    _cond_pred_prop_wire_UART_tx__I__local__I___T_8 is invalid
    _cond_pred_prop_wire_UART_tx__I__local__I___T_2 is invalid
    _cond_pred_prop_wire_UART_tx__I__local__I___T_3 is invalid
    _cond_pred_prop_wire_UART_tx__I__local__I___T_4 is invalid
    _cond_pred_prop_wire_UART_tx__I__local__I___T_5 is invalid
    _cond_pred_prop_wire_UART_tx__I__local__I___T_1 is invalid
    reg clkCnterReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[chisel_coverage_tool/src/modules/Uart.scala 120:28]
    reg bitCnterReg : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[chisel_coverage_tool/src/modules/Uart.scala 121:28]
    reg inDataReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[chisel_coverage_tool/src/modules/Uart.scala 123:26]
    reg outDataReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Uart.scala 124:27]
    reg outTxBusyReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[chisel_coverage_tool/src/modules/Uart.scala 125:29]
    reg outTxDoneReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[chisel_coverage_tool/src/modules/Uart.scala 126:29]
    reg stateReg : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[chisel_coverage_tool/src/modules/Uart.scala 127:25]
    io.o_serial_data <= outDataReg @[chisel_coverage_tool/src/modules/Uart.scala 129:20]
    io.o_tx_busy <= outTxBusyReg @[chisel_coverage_tool/src/modules/Uart.scala 130:16]
    io.o_tx_done <= outTxDoneReg @[chisel_coverage_tool/src/modules/Uart.scala 131:16]
    node _outTxBusyReg_T = neq(stateReg, UInt<2>("h0")) @[chisel_coverage_tool/src/modules/Uart.scala 132:28]
    outTxBusyReg <= _outTxBusyReg_T @[chisel_coverage_tool/src/modules/Uart.scala 132:16]
    node _T = eq(UInt<2>("h0"), stateReg) @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
    when _T : @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
      outTxDoneReg <= UInt<1>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 136:20]
      clkCnterReg <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 138:19]
      bitCnterReg <= UInt<4>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 139:19]
      node _T_1 = eq(io.i_tx_trig, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Uart.scala 141:25]
      _cond_pred_prop_wire_UART_tx__I__local__I___T_1 <= _T_1 @[chisel_coverage_tool/src/modules/Uart.scala 141:25]
      when _T_1 : @[chisel_coverage_tool/src/modules/Uart.scala 141:37]
        outDataReg <= UInt<1>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 142:20]
        inDataReg <= io.i_data @[chisel_coverage_tool/src/modules/Uart.scala 144:19]
        stateReg <= UInt<2>("h1") @[chisel_coverage_tool/src/modules/Uart.scala 145:18]
      else :
        stateReg <= UInt<2>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 147:18]
    else :
      node _T_2 = eq(UInt<2>("h1"), stateReg) @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
      _cond_pred_prop_wire_UART_tx__I__local__I___T_2 <= _T_2 @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
      when _T_2 : @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
        node _T_3 = lt(clkCnterReg, UInt<7>("h56")) @[chisel_coverage_tool/src/modules/Uart.scala 151:24]
        _cond_pred_prop_wire_UART_tx__I__local__I___T_3 <= _T_3 @[chisel_coverage_tool/src/modules/Uart.scala 151:24]
        when _T_3 : @[chisel_coverage_tool/src/modules/Uart.scala 151:40]
          node _clkCnterReg_T = add(clkCnterReg, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Uart.scala 152:36]
          node _clkCnterReg_T_1 = tail(_clkCnterReg_T, 1) @[chisel_coverage_tool/src/modules/Uart.scala 152:36]
          clkCnterReg <= _clkCnterReg_T_1 @[chisel_coverage_tool/src/modules/Uart.scala 152:21]
          stateReg <= UInt<2>("h1") @[chisel_coverage_tool/src/modules/Uart.scala 153:18]
        else :
          clkCnterReg <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 155:21]
          node _bitCnterReg_T = add(bitCnterReg, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Uart.scala 156:36]
          node _bitCnterReg_T_1 = tail(_bitCnterReg_T, 1) @[chisel_coverage_tool/src/modules/Uart.scala 156:36]
          bitCnterReg <= _bitCnterReg_T_1 @[chisel_coverage_tool/src/modules/Uart.scala 156:21]
          node _outDataReg_T = dshr(inDataReg, bitCnterReg) @[chisel_coverage_tool/src/modules/Uart.scala 158:32]
          node _outDataReg_T_1 = bits(_outDataReg_T, 0, 0) @[chisel_coverage_tool/src/modules/Uart.scala 158:32]
          outDataReg <= _outDataReg_T_1 @[chisel_coverage_tool/src/modules/Uart.scala 158:20]
          stateReg <= UInt<2>("h2") @[chisel_coverage_tool/src/modules/Uart.scala 159:18]
      else :
        node _T_4 = eq(UInt<2>("h2"), stateReg) @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
        _cond_pred_prop_wire_UART_tx__I__local__I___T_4 <= _T_4 @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
        when _T_4 : @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
          node _T_5 = lt(clkCnterReg, UInt<7>("h56")) @[chisel_coverage_tool/src/modules/Uart.scala 163:24]
          _cond_pred_prop_wire_UART_tx__I__local__I___T_5 <= _T_5 @[chisel_coverage_tool/src/modules/Uart.scala 163:24]
          when _T_5 : @[chisel_coverage_tool/src/modules/Uart.scala 163:40]
            node _clkCnterReg_T_2 = add(clkCnterReg, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Uart.scala 164:36]
            node _clkCnterReg_T_3 = tail(_clkCnterReg_T_2, 1) @[chisel_coverage_tool/src/modules/Uart.scala 164:36]
            clkCnterReg <= _clkCnterReg_T_3 @[chisel_coverage_tool/src/modules/Uart.scala 164:21]
            stateReg <= UInt<2>("h2") @[chisel_coverage_tool/src/modules/Uart.scala 165:18]
          else :
            clkCnterReg <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 167:21]
            node _T_6 = lt(bitCnterReg, UInt<4>("h8")) @[chisel_coverage_tool/src/modules/Uart.scala 168:26]
            _cond_pred_prop_wire_UART_tx__I__local__I___T_6 <= _T_6 @[chisel_coverage_tool/src/modules/Uart.scala 168:26]
            when _T_6 : @[chisel_coverage_tool/src/modules/Uart.scala 168:43]
              node _outDataReg_T_2 = dshr(inDataReg, bitCnterReg) @[chisel_coverage_tool/src/modules/Uart.scala 170:34]
              node _outDataReg_T_3 = bits(_outDataReg_T_2, 0, 0) @[chisel_coverage_tool/src/modules/Uart.scala 170:34]
              outDataReg <= _outDataReg_T_3 @[chisel_coverage_tool/src/modules/Uart.scala 170:22]
              node _bitCnterReg_T_2 = add(bitCnterReg, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Uart.scala 171:38]
              node _bitCnterReg_T_3 = tail(_bitCnterReg_T_2, 1) @[chisel_coverage_tool/src/modules/Uart.scala 171:38]
              bitCnterReg <= _bitCnterReg_T_3 @[chisel_coverage_tool/src/modules/Uart.scala 171:23]
              stateReg <= UInt<2>("h2") @[chisel_coverage_tool/src/modules/Uart.scala 172:20]
            else :
              bitCnterReg <= UInt<4>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 174:23]
              outDataReg <= UInt<1>("h1") @[chisel_coverage_tool/src/modules/Uart.scala 176:22]
              stateReg <= UInt<2>("h3") @[chisel_coverage_tool/src/modules/Uart.scala 177:20]
        else :
          node _T_7 = eq(UInt<2>("h3"), stateReg) @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
          _cond_pred_prop_wire_UART_tx__I__local__I___T_7 <= _T_7 @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
          when _T_7 : @[chisel_coverage_tool/src/modules/Uart.scala 134:20]
            node _T_8 = lt(clkCnterReg, UInt<7>("h56")) @[chisel_coverage_tool/src/modules/Uart.scala 182:24]
            _cond_pred_prop_wire_UART_tx__I__local__I___T_8 <= _T_8 @[chisel_coverage_tool/src/modules/Uart.scala 182:24]
            when _T_8 : @[chisel_coverage_tool/src/modules/Uart.scala 182:40]
              node _clkCnterReg_T_4 = add(clkCnterReg, UInt<1>("h1")) @[chisel_coverage_tool/src/modules/Uart.scala 183:36]
              node _clkCnterReg_T_5 = tail(_clkCnterReg_T_4, 1) @[chisel_coverage_tool/src/modules/Uart.scala 183:36]
              clkCnterReg <= _clkCnterReg_T_5 @[chisel_coverage_tool/src/modules/Uart.scala 183:21]
              stateReg <= UInt<2>("h3") @[chisel_coverage_tool/src/modules/Uart.scala 184:18]
            else :
              clkCnterReg <= UInt<8>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 186:21]
              outTxDoneReg <= UInt<1>("h1") @[chisel_coverage_tool/src/modules/Uart.scala 187:22]
              stateReg <= UInt<2>("h0") @[chisel_coverage_tool/src/modules/Uart.scala 188:18]
    _cond_pred.UART_tx__I__local__I___T <= _T
    _cond_pred.UART_tx__I__local__I___T_1 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_1
    _cond_pred.UART_tx__I__local__I___T_2 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_2
    _cond_pred.UART_tx__I__local__I___T_3 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_3
    _cond_pred.UART_tx__I__local__I___T_4 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_4
    _cond_pred.UART_tx__I__local__I___T_5 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_5
    _cond_pred.UART_tx__I__local__I___T_6 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_6
    _cond_pred.UART_tx__I__local__I___T_7 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_7
    _cond_pred.UART_tx__I__local__I___T_8 <= _cond_pred_prop_wire_UART_tx__I__local__I___T_8
    _reg_signals.UART_tx__I__local__I__bitCnterReg <= bitCnterReg
    _reg_signals.UART_tx__I__local__I__clkCnterReg <= clkCnterReg
    _reg_signals.UART_tx__I__local__I__inDataReg <= inDataReg
    _reg_signals.UART_tx__I__local__I__outDataReg <= outDataReg
    _reg_signals.UART_tx__I__local__I__outTxBusyReg <= outTxBusyReg
    _reg_signals.UART_tx__I__local__I__outTxDoneReg <= outTxDoneReg
    _reg_signals.UART_tx__I__local__I__stateReg <= stateReg
