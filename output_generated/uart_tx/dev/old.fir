FIRRTL version 2.0.0
circuit UART_tx :
  module UART_tx :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip i_tx_trig : UInt<1>, flip i_data : UInt<8>, o_tx_busy : UInt<1>, o_tx_done : UInt<1>, o_serial_data : UInt<1>} @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 105:14]

    reg clkCnterReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 120:28]
    reg bitCnterReg : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 121:28]
    reg inDataReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 123:26]
    reg outDataReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 124:27]
    reg outTxBusyReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 125:29]
    reg outTxDoneReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 126:29]
    reg stateReg : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 127:25]
    io.o_serial_data <= outDataReg @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 129:20]
    io.o_tx_busy <= outTxBusyReg @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 130:16]
    io.o_tx_done <= outTxDoneReg @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 131:16]
    node _outTxBusyReg_T = neq(stateReg, UInt<2>("h0")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 132:28]
    outTxBusyReg <= _outTxBusyReg_T @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 132:16]
    node _T = eq(UInt<2>("h0"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
    when _T : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
      outTxDoneReg <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 136:20]
      clkCnterReg <= UInt<8>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 138:19]
      bitCnterReg <= UInt<4>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 139:19]
      node _T_1 = eq(io.i_tx_trig, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 141:25]
      when _T_1 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 141:37]
        outDataReg <= UInt<1>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 142:20]
        inDataReg <= io.i_data @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 144:19]
        stateReg <= UInt<2>("h1") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 145:18]
      else :
        stateReg <= UInt<2>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 147:18]
    else :
      node _T_2 = eq(UInt<2>("h1"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
      when _T_2 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
        node _T_3 = lt(clkCnterReg, UInt<7>("h56")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 151:24]
        when _T_3 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 151:40]
          node _clkCnterReg_T = add(clkCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 152:36]
          node _clkCnterReg_T_1 = tail(_clkCnterReg_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 152:36]
          clkCnterReg <= _clkCnterReg_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 152:21]
          stateReg <= UInt<2>("h1") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 153:18]
        else :
          clkCnterReg <= UInt<8>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 155:21]
          node _bitCnterReg_T = add(bitCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 156:36]
          node _bitCnterReg_T_1 = tail(_bitCnterReg_T, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 156:36]
          bitCnterReg <= _bitCnterReg_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 156:21]
          node _outDataReg_T = dshr(inDataReg, bitCnterReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 158:32]
          node _outDataReg_T_1 = bits(_outDataReg_T, 0, 0) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 158:32]
          outDataReg <= _outDataReg_T_1 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 158:20]
          stateReg <= UInt<2>("h2") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 159:18]
      else :
        node _T_4 = eq(UInt<2>("h2"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
        when _T_4 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
          node _T_5 = lt(clkCnterReg, UInt<7>("h56")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 163:24]
          when _T_5 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 163:40]
            node _clkCnterReg_T_2 = add(clkCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 164:36]
            node _clkCnterReg_T_3 = tail(_clkCnterReg_T_2, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 164:36]
            clkCnterReg <= _clkCnterReg_T_3 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 164:21]
            stateReg <= UInt<2>("h2") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 165:18]
          else :
            clkCnterReg <= UInt<8>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 167:21]
            node _T_6 = lt(bitCnterReg, UInt<4>("h8")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 168:26]
            when _T_6 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 168:43]
              node _outDataReg_T_2 = dshr(inDataReg, bitCnterReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 170:34]
              node _outDataReg_T_3 = bits(_outDataReg_T_2, 0, 0) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 170:34]
              outDataReg <= _outDataReg_T_3 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 170:22]
              node _bitCnterReg_T_2 = add(bitCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 171:38]
              node _bitCnterReg_T_3 = tail(_bitCnterReg_T_2, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 171:38]
              bitCnterReg <= _bitCnterReg_T_3 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 171:23]
              stateReg <= UInt<2>("h2") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 172:20]
            else :
              bitCnterReg <= UInt<4>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 174:23]
              outDataReg <= UInt<1>("h1") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 176:22]
              stateReg <= UInt<2>("h3") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 177:20]
        else :
          node _T_7 = eq(UInt<2>("h3"), stateReg) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
          when _T_7 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 134:20]
            node _T_8 = lt(clkCnterReg, UInt<7>("h56")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 182:24]
            when _T_8 : @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 182:40]
              node _clkCnterReg_T_4 = add(clkCnterReg, UInt<1>("h1")) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 183:36]
              node _clkCnterReg_T_5 = tail(_clkCnterReg_T_4, 1) @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 183:36]
              clkCnterReg <= _clkCnterReg_T_5 @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 183:21]
              stateReg <= UInt<2>("h3") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 184:18]
            else :
              clkCnterReg <= UInt<8>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 186:21]
              outTxDoneReg <= UInt<1>("h1") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 187:22]
              stateReg <= UInt<2>("h0") @[D:\\projs\\fuzz\\chisel_coverage_tool\\chisel_coverage_tool\\src\\modules\\Uart.scala 188:18]

