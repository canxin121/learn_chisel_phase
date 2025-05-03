FIRRTL version 2.0.0
circuit MulDiv :
  module MulDiv :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip req : { flip ready : UInt<1>, valid : UInt<1>, bits : { fn : UInt<5>, dw : UInt<1>, in1 : UInt<64>, in2 : UInt<64>, tag : UInt<5>}}, flip kill : UInt<1>, resp : { flip ready : UInt<1>, valid : UInt<1>, bits : { data : UInt<64>, full_data : UInt<128>, tag : UInt<5>}}} @[src/main/scala/rocket/Multiplier.scala 45:14]
    output _mc : { _s0 : UInt<1>, _s1 : UInt<1>, _s10 : UInt<1>, _s11 : UInt<1>, _s12 : UInt<1>, _s13 : UInt<1>, _s14 : UInt<1>, _s2 : UInt<1>, _s3 : UInt<1>, _s4 : UInt<1>, _s5 : UInt<1>, _s6 : UInt<1>, _s7 : UInt<1>, _s8 : UInt<1>, _s9 : UInt<1>}
    output _cp : { _s0 : UInt<1>, _s1 : UInt<1>, _s10 : UInt<1>, _s2 : UInt<1>, _s3 : UInt<1>, _s4 : UInt<1>, _s5 : UInt<1>, _s6 : UInt<1>, _s7 : UInt<1>, _s8 : UInt<1>, _s9 : UInt<1>}
    output _rs : { _s0 : UInt<3>, _s1 : UInt<5>, _s10 : UInt<65>, _s11 : UInt<130>, _s2 : UInt<1>, _s3 : UInt<64>, _s4 : UInt<64>, _s5 : UInt<5>, _s6 : UInt<7>, _s7 : UInt<1>, _s8 : UInt<1>, _s9 : UInt<1>}

    wire _cp_prop_wire__s5 : UInt<1>
    wire _cp_prop_wire__s7 : UInt<1>
    wire _cp_prop_wire__s1 : UInt<1>
    wire _cp_prop_wire__s2 : UInt<1>
    wire _cp_prop_wire__s8 : UInt<1>
    _cp_prop_wire__s5 is invalid
    _cp_prop_wire__s7 is invalid
    _cp_prop_wire__s1 is invalid
    _cp_prop_wire__s2 is invalid
    _cp_prop_wire__s8 is invalid
    wire _mc_prop_wire__s5 : UInt<1>
    wire _mc_prop_wire__s8 : UInt<1>
    wire _mc_prop_wire__s10 : UInt<1>
    wire _mc_prop_wire__s6 : UInt<1>
    _mc_prop_wire__s5 is invalid
    _mc_prop_wire__s8 is invalid
    _mc_prop_wire__s10 is invalid
    _mc_prop_wire__s6 is invalid
    reg state : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[src/main/scala/rocket/Multiplier.scala 51:22]
    reg req : { fn : UInt<5>, dw : UInt<1>, in1 : UInt<64>, in2 : UInt<64>, tag : UInt<5>}, clock with :
      reset => (UInt<1>("h0"), req) @[src/main/scala/rocket/Multiplier.scala 53:16]
    reg count : UInt<7>, clock with :
      reset => (UInt<1>("h0"), count) @[src/main/scala/rocket/Multiplier.scala 54:18]
    reg neg_out : UInt<1>, clock with :
      reset => (UInt<1>("h0"), neg_out) @[src/main/scala/rocket/Multiplier.scala 57:20]
    reg isHi : UInt<1>, clock with :
      reset => (UInt<1>("h0"), isHi) @[src/main/scala/rocket/Multiplier.scala 58:17]
    reg resHi : UInt<1>, clock with :
      reset => (UInt<1>("h0"), resHi) @[src/main/scala/rocket/Multiplier.scala 59:18]
    reg divisor : UInt<65>, clock with :
      reset => (UInt<1>("h0"), divisor) @[src/main/scala/rocket/Multiplier.scala 60:20]
    reg remainder : UInt<130>, clock with :
      reset => (UInt<1>("h0"), remainder) @[src/main/scala/rocket/Multiplier.scala 61:22]
    wire decoded_plaInput : UInt<3> @[src/main/scala/chisel3/util/pla.scala 77:22]
    node decoded_invInputs = not(decoded_plaInput) @[src/main/scala/chisel3/util/pla.scala 78:21]
    wire decoded : UInt<4> @[src/main/scala/chisel3/util/pla.scala 81:23]
    node decoded_andMatrixInput_0 = bits(decoded_invInputs, 0, 0) @[src/main/scala/chisel3/util/pla.scala 91:29]
    node _decoded_T = andr(decoded_andMatrixInput_0) @[src/main/scala/chisel3/util/pla.scala 98:70]
    node decoded_andMatrixInput_0_1 = bits(decoded_invInputs, 2, 2) @[src/main/scala/chisel3/util/pla.scala 91:29]
    node _decoded_T_1 = andr(decoded_andMatrixInput_0_1) @[src/main/scala/chisel3/util/pla.scala 98:70]
    node decoded_andMatrixInput_0_2 = bits(decoded_invInputs, 1, 1) @[src/main/scala/chisel3/util/pla.scala 91:29]
    node decoded_andMatrixInput_1 = bits(decoded_invInputs, 2, 2) @[src/main/scala/chisel3/util/pla.scala 91:29]
    node _decoded_T_2 = cat(decoded_andMatrixInput_0_2, decoded_andMatrixInput_1) @[src/main/scala/chisel3/util/pla.scala 98:53]
    node _decoded_T_3 = andr(_decoded_T_2) @[src/main/scala/chisel3/util/pla.scala 98:70]
    node decoded_andMatrixInput_0_3 = bits(decoded_plaInput, 0, 0) @[src/main/scala/chisel3/util/pla.scala 90:45]
    node decoded_andMatrixInput_1_1 = bits(decoded_invInputs, 2, 2) @[src/main/scala/chisel3/util/pla.scala 91:29]
    node _decoded_T_4 = cat(decoded_andMatrixInput_0_3, decoded_andMatrixInput_1_1) @[src/main/scala/chisel3/util/pla.scala 98:53]
    node _decoded_T_5 = andr(_decoded_T_4) @[src/main/scala/chisel3/util/pla.scala 98:70]
    node decoded_andMatrixInput_0_4 = bits(decoded_plaInput, 1, 1) @[src/main/scala/chisel3/util/pla.scala 90:45]
    node _decoded_T_6 = andr(decoded_andMatrixInput_0_4) @[src/main/scala/chisel3/util/pla.scala 98:70]
    node decoded_andMatrixInput_0_5 = bits(decoded_invInputs, 0, 0) @[src/main/scala/chisel3/util/pla.scala 91:29]
    node decoded_andMatrixInput_1_2 = bits(decoded_plaInput, 2, 2) @[src/main/scala/chisel3/util/pla.scala 90:45]
    node _decoded_T_7 = cat(decoded_andMatrixInput_0_5, decoded_andMatrixInput_1_2) @[src/main/scala/chisel3/util/pla.scala 98:53]
    node _decoded_T_8 = andr(_decoded_T_7) @[src/main/scala/chisel3/util/pla.scala 98:70]
    node _decoded_orMatrixOutputs_T = cat(_decoded_T_3, _decoded_T_8) @[src/main/scala/chisel3/util/pla.scala 114:19]
    node _decoded_orMatrixOutputs_T_1 = orr(_decoded_orMatrixOutputs_T) @[src/main/scala/chisel3/util/pla.scala 114:36]
    node _decoded_orMatrixOutputs_T_2 = cat(_decoded_T, _decoded_T_3) @[src/main/scala/chisel3/util/pla.scala 114:19]
    node _decoded_orMatrixOutputs_T_3 = orr(_decoded_orMatrixOutputs_T_2) @[src/main/scala/chisel3/util/pla.scala 114:36]
    node _decoded_orMatrixOutputs_T_4 = cat(_decoded_T_5, _decoded_T_6) @[src/main/scala/chisel3/util/pla.scala 114:19]
    node _decoded_orMatrixOutputs_T_5 = orr(_decoded_orMatrixOutputs_T_4) @[src/main/scala/chisel3/util/pla.scala 114:36]
    node _decoded_orMatrixOutputs_T_6 = orr(_decoded_T_1) @[src/main/scala/chisel3/util/pla.scala 114:36]
    node decoded_orMatrixOutputs_lo = cat(_decoded_orMatrixOutputs_T_3, _decoded_orMatrixOutputs_T_1) @[src/main/scala/chisel3/util/pla.scala 102:36]
    node decoded_orMatrixOutputs_hi = cat(_decoded_orMatrixOutputs_T_6, _decoded_orMatrixOutputs_T_5) @[src/main/scala/chisel3/util/pla.scala 102:36]
    node decoded_orMatrixOutputs = cat(decoded_orMatrixOutputs_hi, decoded_orMatrixOutputs_lo) @[src/main/scala/chisel3/util/pla.scala 102:36]
    node _decoded_invMatrixOutputs_T = bits(decoded_orMatrixOutputs, 0, 0) @[src/main/scala/chisel3/util/pla.scala 124:31]
    node _decoded_invMatrixOutputs_T_1 = bits(decoded_orMatrixOutputs, 1, 1) @[src/main/scala/chisel3/util/pla.scala 124:31]
    node _decoded_invMatrixOutputs_T_2 = bits(decoded_orMatrixOutputs, 2, 2) @[src/main/scala/chisel3/util/pla.scala 124:31]
    node _decoded_invMatrixOutputs_T_3 = bits(decoded_orMatrixOutputs, 3, 3) @[src/main/scala/chisel3/util/pla.scala 124:31]
    node decoded_invMatrixOutputs_lo = cat(_decoded_invMatrixOutputs_T_1, _decoded_invMatrixOutputs_T) @[src/main/scala/chisel3/util/pla.scala 120:37]
    node decoded_invMatrixOutputs_hi = cat(_decoded_invMatrixOutputs_T_3, _decoded_invMatrixOutputs_T_2) @[src/main/scala/chisel3/util/pla.scala 120:37]
    node decoded_invMatrixOutputs = cat(decoded_invMatrixOutputs_hi, decoded_invMatrixOutputs_lo) @[src/main/scala/chisel3/util/pla.scala 120:37]
    decoded <= decoded_invMatrixOutputs @[src/main/scala/chisel3/util/pla.scala 129:13]
    decoded_plaInput <= io.req.bits.fn @[src/main/scala/chisel3/util/experimental/decode/decoder.scala 39:16]
    node _T = bits(decoded, 3, 3) @[src/main/scala/rocket/Decode.scala 50:77]
    node _T_1 = bits(decoded, 2, 2) @[src/main/scala/rocket/Decode.scala 50:77]
    node _T_2 = bits(decoded, 1, 1) @[src/main/scala/rocket/Decode.scala 50:77]
    node _T_3 = bits(decoded, 0, 0) @[src/main/scala/rocket/Decode.scala 50:77]
    node cmdMul = bits(_T, 0, 0) @[src/main/scala/rocket/Multiplier.scala 75:107]
    node cmdHi = bits(_T_1, 0, 0) @[src/main/scala/rocket/Multiplier.scala 75:107]
    node lhsSigned = bits(_T_2, 0, 0) @[src/main/scala/rocket/Multiplier.scala 75:107]
    node rhsSigned = bits(_T_3, 0, 0) @[src/main/scala/rocket/Multiplier.scala 75:107]
    node _T_4 = eq(io.req.bits.dw, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 78:60]
    node _T_5 = and(UInt<1>("h1"), _T_4) @[src/main/scala/rocket/Multiplier.scala 78:50]
    node _sign_T = bits(io.req.bits.in1, 31, 31) @[src/main/scala/rocket/Multiplier.scala 81:38]
    node _sign_T_1 = bits(io.req.bits.in1, 63, 63) @[src/main/scala/rocket/Multiplier.scala 81:48]
    node _sign_T_2 = mux(_T_5, _sign_T, _sign_T_1) @[src/main/scala/rocket/Multiplier.scala 81:29]
    node lhs_sign = and(lhsSigned, _sign_T_2) @[src/main/scala/rocket/Multiplier.scala 81:23]
    node _hi_T = bits(lhs_sign, 0, 0) @[src/main/scala/rocket/Multiplier.scala 82:29]
    node _hi_T_1 = mux(_hi_T, UInt<32>("hffffffff"), UInt<32>("h0")) @[src/main/scala/rocket/Multiplier.scala 82:29]
    node _hi_T_2 = bits(io.req.bits.in1, 63, 32) @[src/main/scala/rocket/Multiplier.scala 82:43]
    node hi = mux(_T_5, _hi_T_1, _hi_T_2) @[src/main/scala/rocket/Multiplier.scala 82:17]
    node _T_6 = bits(io.req.bits.in1, 31, 0) @[src/main/scala/rocket/Multiplier.scala 83:15]
    node lhs_in = cat(hi, _T_6) @[src/main/scala/rocket/Multiplier.scala 83:9]
    node _T_7 = eq(io.req.bits.dw, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 78:60]
    node _T_8 = and(UInt<1>("h1"), _T_7) @[src/main/scala/rocket/Multiplier.scala 78:50]
    node _sign_T_3 = bits(io.req.bits.in2, 31, 31) @[src/main/scala/rocket/Multiplier.scala 81:38]
    node _sign_T_4 = bits(io.req.bits.in2, 63, 63) @[src/main/scala/rocket/Multiplier.scala 81:48]
    node _sign_T_5 = mux(_T_8, _sign_T_3, _sign_T_4) @[src/main/scala/rocket/Multiplier.scala 81:29]
    node rhs_sign = and(rhsSigned, _sign_T_5) @[src/main/scala/rocket/Multiplier.scala 81:23]
    node _hi_T_3 = bits(rhs_sign, 0, 0) @[src/main/scala/rocket/Multiplier.scala 82:29]
    node _hi_T_4 = mux(_hi_T_3, UInt<32>("hffffffff"), UInt<32>("h0")) @[src/main/scala/rocket/Multiplier.scala 82:29]
    node _hi_T_5 = bits(io.req.bits.in2, 63, 32) @[src/main/scala/rocket/Multiplier.scala 82:43]
    node hi_1 = mux(_T_8, _hi_T_4, _hi_T_5) @[src/main/scala/rocket/Multiplier.scala 82:17]
    node _T_9 = bits(io.req.bits.in2, 31, 0) @[src/main/scala/rocket/Multiplier.scala 83:15]
    node rhs_in = cat(hi_1, _T_9) @[src/main/scala/rocket/Multiplier.scala 83:9]
    node _subtractor_T = bits(remainder, 128, 64) @[src/main/scala/rocket/Multiplier.scala 88:29]
    node _subtractor_T_1 = sub(_subtractor_T, divisor) @[src/main/scala/rocket/Multiplier.scala 88:37]
    node subtractor = tail(_subtractor_T_1, 1) @[src/main/scala/rocket/Multiplier.scala 88:37]
    node _result_T = bits(remainder, 128, 65) @[src/main/scala/rocket/Multiplier.scala 89:36]
    node _result_T_1 = bits(remainder, 63, 0) @[src/main/scala/rocket/Multiplier.scala 89:57]
    node result = mux(resHi, _result_T, _result_T_1) @[src/main/scala/rocket/Multiplier.scala 89:19]
    node _negated_remainder_T = sub(UInt<1>("h0"), result) @[src/main/scala/rocket/Multiplier.scala 90:27]
    node negated_remainder = tail(_negated_remainder_T, 1) @[src/main/scala/rocket/Multiplier.scala 90:27]
    node _T_10 = eq(state, UInt<3>("h1")) @[src/main/scala/rocket/Multiplier.scala 92:39]
    when _T_10 : @[src/main/scala/rocket/Multiplier.scala 92:57]
      node _T_11 = bits(remainder, 63, 63) @[src/main/scala/rocket/Multiplier.scala 93:20]
      _cp_prop_wire__s1 <= _T_11 @[src/main/scala/rocket/Multiplier.scala 93:20]
      when _T_11 : @[src/main/scala/rocket/Multiplier.scala 93:27]
        remainder <= negated_remainder @[src/main/scala/rocket/Multiplier.scala 94:17]
      node _T_12 = bits(divisor, 63, 63) @[src/main/scala/rocket/Multiplier.scala 96:18]
      _cp_prop_wire__s2 <= _T_12 @[src/main/scala/rocket/Multiplier.scala 96:18]
      when _T_12 : @[src/main/scala/rocket/Multiplier.scala 96:25]
        divisor <= subtractor @[src/main/scala/rocket/Multiplier.scala 97:15]
      state <= UInt<3>("h3") @[src/main/scala/rocket/Multiplier.scala 99:11]
    node _T_13 = eq(state, UInt<3>("h5")) @[src/main/scala/rocket/Multiplier.scala 101:39]
    when _T_13 : @[src/main/scala/rocket/Multiplier.scala 101:57]
      remainder <= negated_remainder @[src/main/scala/rocket/Multiplier.scala 102:15]
      state <= UInt<3>("h7") @[src/main/scala/rocket/Multiplier.scala 103:11]
      resHi <= UInt<1>("h0") @[src/main/scala/rocket/Multiplier.scala 104:11]
    node _T_14 = eq(state, UInt<3>("h2")) @[src/main/scala/rocket/Multiplier.scala 106:39]
    when _T_14 : @[src/main/scala/rocket/Multiplier.scala 106:50]
      node _mulReg_T = bits(remainder, 129, 65) @[src/main/scala/rocket/Multiplier.scala 107:31]
      node _mulReg_T_1 = bits(remainder, 63, 0) @[src/main/scala/rocket/Multiplier.scala 107:55]
      node mulReg = cat(_mulReg_T, _mulReg_T_1) @[src/main/scala/rocket/Multiplier.scala 107:21]
      node mplierSign = bits(remainder, 64, 64) @[src/main/scala/rocket/Multiplier.scala 108:31]
      node mplier = bits(mulReg, 63, 0) @[src/main/scala/rocket/Multiplier.scala 109:24]
      node _accum_T = bits(mulReg, 128, 64) @[src/main/scala/rocket/Multiplier.scala 110:23]
      node accum = asSInt(_accum_T) @[src/main/scala/rocket/Multiplier.scala 110:37]
      node mpcand = asSInt(divisor) @[src/main/scala/rocket/Multiplier.scala 111:26]
      node _prod_T = bits(mplier, 0, 0) @[src/main/scala/rocket/Multiplier.scala 112:38]
      node _prod_T_1 = cat(mplierSign, _prod_T) @[src/main/scala/rocket/Multiplier.scala 112:19]
      node _prod_T_2 = asSInt(_prod_T_1) @[src/main/scala/rocket/Multiplier.scala 112:60]
      node _prod_T_3 = mul(_prod_T_2, mpcand) @[src/main/scala/rocket/Multiplier.scala 112:67]
      node _prod_T_4 = add(_prod_T_3, accum) @[src/main/scala/rocket/Multiplier.scala 112:76]
      node _prod_T_5 = tail(_prod_T_4, 1) @[src/main/scala/rocket/Multiplier.scala 112:76]
      node prod = asSInt(_prod_T_5) @[src/main/scala/rocket/Multiplier.scala 112:76]
      node _nextMulReg_T = bits(mplier, 63, 1) @[src/main/scala/rocket/Multiplier.scala 113:38]
      node nextMulReg_hi = asUInt(prod) @[src/main/scala/rocket/Multiplier.scala 113:25]
      node nextMulReg = cat(nextMulReg_hi, _nextMulReg_T) @[src/main/scala/rocket/Multiplier.scala 113:25]
      node _nextMplierSign_T = eq(count, UInt<6>("h3e")) @[src/main/scala/rocket/Multiplier.scala 114:32]
      node nextMplierSign = and(_nextMplierSign_T, neg_out) @[src/main/scala/rocket/Multiplier.scala 114:61]
      node _eOutMask_T = mul(count, UInt<1>("h1")) @[src/main/scala/rocket/Multiplier.scala 116:54]
      node _eOutMask_T_1 = bits(_eOutMask_T, 5, 0) @[src/main/scala/rocket/Multiplier.scala 116:72]
      node _eOutMask_T_2 = dshr(asSInt(UInt<65>("h10000000000000000")), _eOutMask_T_1) @[src/main/scala/rocket/Multiplier.scala 116:44]
      node eOutMask = bits(_eOutMask_T_2, 63, 0) @[src/main/scala/rocket/Multiplier.scala 116:91]
      node _eOut_T = neq(count, UInt<6>("h3f")) @[src/main/scala/rocket/Multiplier.scala 117:45]
      node _eOut_T_1 = and(UInt<1>("h0"), _eOut_T) @[src/main/scala/rocket/Multiplier.scala 117:36]
      node _eOut_T_2 = neq(count, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 117:83]
      node _eOut_T_3 = and(_eOut_T_1, _eOut_T_2) @[src/main/scala/rocket/Multiplier.scala 117:74]
      node _eOut_T_4 = eq(isHi, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 118:7]
      node _eOut_T_5 = and(_eOut_T_3, _eOut_T_4) @[src/main/scala/rocket/Multiplier.scala 117:91]
      node _eOut_T_6 = not(eOutMask) @[src/main/scala/rocket/Multiplier.scala 118:26]
      node _eOut_T_7 = and(mplier, _eOut_T_6) @[src/main/scala/rocket/Multiplier.scala 118:24]
      node _eOut_T_8 = eq(_eOut_T_7, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 118:37]
      node eOut = and(_eOut_T_5, _eOut_T_8) @[src/main/scala/rocket/Multiplier.scala 118:13]
      _mc_prop_wire__s5 <= eOut @[src/main/scala/rocket/Multiplier.scala 118:13]
      node _eOutRes_T = mul(count, UInt<1>("h1")) @[src/main/scala/rocket/Multiplier.scala 119:46]
      node _eOutRes_T_1 = sub(UInt<7>("h40"), _eOutRes_T) @[src/main/scala/rocket/Multiplier.scala 119:38]
      node _eOutRes_T_2 = tail(_eOutRes_T_1, 1) @[src/main/scala/rocket/Multiplier.scala 119:38]
      node _eOutRes_T_3 = bits(_eOutRes_T_2, 5, 0) @[src/main/scala/rocket/Multiplier.scala 119:64]
      node eOutRes = dshr(mulReg, _eOutRes_T_3) @[src/main/scala/rocket/Multiplier.scala 119:27]
      node _nextMulReg1_T = bits(nextMulReg, 128, 64) @[src/main/scala/rocket/Multiplier.scala 120:37]
      node _nextMulReg1_T_1 = mux(eOut, eOutRes, nextMulReg) @[src/main/scala/rocket/Multiplier.scala 120:55]
      node _nextMulReg1_T_2 = bits(_nextMulReg1_T_1, 63, 0) @[src/main/scala/rocket/Multiplier.scala 120:82]
      node nextMulReg1 = cat(_nextMulReg1_T, _nextMulReg1_T_2) @[src/main/scala/rocket/Multiplier.scala 120:26]
      node _remainder_T = shr(nextMulReg1, 64) @[src/main/scala/rocket/Multiplier.scala 121:34]
      node _remainder_T_1 = bits(nextMulReg1, 63, 0) @[src/main/scala/rocket/Multiplier.scala 121:67]
      node remainder_hi = cat(_remainder_T, nextMplierSign) @[src/main/scala/rocket/Multiplier.scala 121:21]
      node _remainder_T_2 = cat(remainder_hi, _remainder_T_1) @[src/main/scala/rocket/Multiplier.scala 121:21]
      remainder <= _remainder_T_2 @[src/main/scala/rocket/Multiplier.scala 121:15]
      node _count_T = add(count, UInt<1>("h1")) @[src/main/scala/rocket/Multiplier.scala 123:20]
      node _count_T_1 = tail(_count_T, 1) @[src/main/scala/rocket/Multiplier.scala 123:20]
      count <= _count_T_1 @[src/main/scala/rocket/Multiplier.scala 123:11]
      node _T_15 = eq(count, UInt<6>("h3f")) @[src/main/scala/rocket/Multiplier.scala 124:25]
      node _T_16 = or(eOut, _T_15) @[src/main/scala/rocket/Multiplier.scala 124:16]
      _cp_prop_wire__s5 <= _T_16 @[src/main/scala/rocket/Multiplier.scala 124:16]
      when _T_16 : @[src/main/scala/rocket/Multiplier.scala 124:55]
        state <= UInt<3>("h6") @[src/main/scala/rocket/Multiplier.scala 125:13]
        resHi <= isHi @[src/main/scala/rocket/Multiplier.scala 126:13]
    node _T_17 = eq(state, UInt<3>("h3")) @[src/main/scala/rocket/Multiplier.scala 129:39]
    when _T_17 : @[src/main/scala/rocket/Multiplier.scala 129:50]
      node unrolls_less = bits(subtractor, 64, 64) @[src/main/scala/rocket/Multiplier.scala 133:28]
      _mc_prop_wire__s6 <= unrolls_less @[src/main/scala/rocket/Multiplier.scala 133:28]
      node _unrolls_T = bits(remainder, 127, 64) @[src/main/scala/rocket/Multiplier.scala 134:24]
      node _unrolls_T_1 = bits(subtractor, 63, 0) @[src/main/scala/rocket/Multiplier.scala 134:45]
      node _unrolls_T_2 = mux(unrolls_less, _unrolls_T, _unrolls_T_1) @[src/main/scala/rocket/Multiplier.scala 134:14]
      node _unrolls_T_3 = bits(remainder, 63, 0) @[src/main/scala/rocket/Multiplier.scala 134:58]
      node _unrolls_T_4 = eq(unrolls_less, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 134:67]
      node unrolls_hi = cat(_unrolls_T_2, _unrolls_T_3) @[src/main/scala/rocket/Multiplier.scala 134:10]
      node unrolls_0 = cat(unrolls_hi, _unrolls_T_4) @[src/main/scala/rocket/Multiplier.scala 134:10]
      remainder <= unrolls_0 @[src/main/scala/rocket/Multiplier.scala 137:15]
      node _T_18 = eq(count, UInt<7>("h40")) @[src/main/scala/rocket/Multiplier.scala 138:17]
      _cp_prop_wire__s7 <= _T_18 @[src/main/scala/rocket/Multiplier.scala 138:17]
      when _T_18 : @[src/main/scala/rocket/Multiplier.scala 138:42]
        node _state_T = mux(neg_out, UInt<3>("h5"), UInt<3>("h7")) @[src/main/scala/rocket/Multiplier.scala 139:19]
        state <= _state_T @[src/main/scala/rocket/Multiplier.scala 139:13]
        resHi <= isHi @[src/main/scala/rocket/Multiplier.scala 140:13]
      node _count_T_2 = add(count, UInt<1>("h1")) @[src/main/scala/rocket/Multiplier.scala 144:20]
      node _count_T_3 = tail(_count_T_2, 1) @[src/main/scala/rocket/Multiplier.scala 144:20]
      count <= _count_T_3 @[src/main/scala/rocket/Multiplier.scala 144:11]
      node _divby0_T = eq(count, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 146:24]
      node _divby0_T_1 = bits(subtractor, 64, 64) @[src/main/scala/rocket/Multiplier.scala 146:46]
      node _divby0_T_2 = eq(_divby0_T_1, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 146:35]
      node divby0 = and(_divby0_T, _divby0_T_2) @[src/main/scala/rocket/Multiplier.scala 146:32]
      node _T_19 = eq(isHi, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 159:21]
      node _T_20 = and(divby0, _T_19) @[src/main/scala/rocket/Multiplier.scala 159:18]
      _cp_prop_wire__s8 <= _T_20 @[src/main/scala/rocket/Multiplier.scala 159:18]
      when _T_20 : @[src/main/scala/rocket/Multiplier.scala 159:28]
        neg_out <= UInt<1>("h0") @[src/main/scala/rocket/Multiplier.scala 159:38]
    node _T_21 = and(io.resp.ready, io.resp.valid) @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
    node _T_22 = or(_T_21, io.kill) @[src/main/scala/rocket/Multiplier.scala 161:22]
    when _T_22 : @[src/main/scala/rocket/Multiplier.scala 161:34]
      state <= UInt<3>("h0") @[src/main/scala/rocket/Multiplier.scala 162:11]
    node _T_23 = and(io.req.ready, io.req.valid) @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
    when _T_23 : @[src/main/scala/rocket/Multiplier.scala 164:22]
      node _state_T_1 = or(lhs_sign, rhs_sign) @[src/main/scala/rocket/Multiplier.scala 165:46]
      _mc_prop_wire__s8 <= _state_T_1 @[src/main/scala/rocket/Multiplier.scala 165:46]
      node _state_T_2 = mux(_state_T_1, UInt<3>("h1"), UInt<3>("h3")) @[src/main/scala/rocket/Multiplier.scala 165:36]
      node _state_T_3 = mux(cmdMul, UInt<3>("h2"), _state_T_2) @[src/main/scala/rocket/Multiplier.scala 165:17]
      state <= _state_T_3 @[src/main/scala/rocket/Multiplier.scala 165:11]
      isHi <= cmdHi @[src/main/scala/rocket/Multiplier.scala 166:10]
      resHi <= UInt<1>("h0") @[src/main/scala/rocket/Multiplier.scala 167:11]
      node _count_T_4 = eq(io.req.bits.dw, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 78:60]
      node _count_T_5 = and(UInt<1>("h1"), _count_T_4) @[src/main/scala/rocket/Multiplier.scala 78:50]
      node _count_T_6 = and(cmdMul, _count_T_5) @[src/main/scala/rocket/Multiplier.scala 168:46]
      _mc_prop_wire__s10 <= _count_T_6 @[src/main/scala/rocket/Multiplier.scala 168:46]
      node _count_T_7 = mux(_count_T_6, UInt<6>("h20"), UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 168:38]
      count <= _count_T_7 @[src/main/scala/rocket/Multiplier.scala 168:11]
      node _neg_out_T = neq(lhs_sign, rhs_sign) @[src/main/scala/rocket/Multiplier.scala 169:46]
      node _neg_out_T_1 = mux(cmdHi, lhs_sign, _neg_out_T) @[src/main/scala/rocket/Multiplier.scala 169:19]
      neg_out <= _neg_out_T_1 @[src/main/scala/rocket/Multiplier.scala 169:13]
      node _divisor_T = cat(rhs_sign, rhs_in) @[src/main/scala/rocket/Multiplier.scala 170:19]
      divisor <= _divisor_T @[src/main/scala/rocket/Multiplier.scala 170:13]
      remainder <= lhs_in @[src/main/scala/rocket/Multiplier.scala 171:15]
      req <= io.req.bits @[src/main/scala/rocket/Multiplier.scala 172:9]
    node _outMul_T = xor(UInt<3>("h6"), UInt<3>("h7")) @[src/main/scala/rocket/Multiplier.scala 175:37]
    node _outMul_T_1 = and(state, _outMul_T) @[src/main/scala/rocket/Multiplier.scala 175:23]
    node _outMul_T_2 = not(UInt<3>("h7")) @[src/main/scala/rocket/Multiplier.scala 175:70]
    node _outMul_T_3 = and(UInt<3>("h6"), _outMul_T_2) @[src/main/scala/rocket/Multiplier.scala 175:68]
    node outMul = eq(_outMul_T_1, _outMul_T_3) @[src/main/scala/rocket/Multiplier.scala 175:52]
    node _loOut_T = eq(req.dw, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 78:60]
    node _loOut_T_1 = and(UInt<1>("h1"), _loOut_T) @[src/main/scala/rocket/Multiplier.scala 78:50]
    node _loOut_T_2 = and(UInt<1>("h1"), _loOut_T_1) @[src/main/scala/rocket/Multiplier.scala 176:30]
    node _loOut_T_3 = and(_loOut_T_2, outMul) @[src/main/scala/rocket/Multiplier.scala 176:48]
    node _loOut_T_4 = bits(result, 63, 32) @[src/main/scala/rocket/Multiplier.scala 176:65]
    node _loOut_T_5 = bits(result, 31, 0) @[src/main/scala/rocket/Multiplier.scala 176:82]
    node loOut = mux(_loOut_T_3, _loOut_T_4, _loOut_T_5) @[src/main/scala/rocket/Multiplier.scala 176:18]
    node _hiOut_T = eq(req.dw, UInt<1>("h0")) @[src/main/scala/rocket/Multiplier.scala 78:60]
    node _hiOut_T_1 = and(UInt<1>("h1"), _hiOut_T) @[src/main/scala/rocket/Multiplier.scala 78:50]
    node _hiOut_T_2 = bits(loOut, 31, 31) @[src/main/scala/rocket/Multiplier.scala 177:50]
    node _hiOut_T_3 = bits(_hiOut_T_2, 0, 0) @[src/main/scala/rocket/Multiplier.scala 177:39]
    node _hiOut_T_4 = mux(_hiOut_T_3, UInt<32>("hffffffff"), UInt<32>("h0")) @[src/main/scala/rocket/Multiplier.scala 177:39]
    node _hiOut_T_5 = bits(result, 63, 32) @[src/main/scala/rocket/Multiplier.scala 177:66]
    node hiOut = mux(_hiOut_T_1, _hiOut_T_4, _hiOut_T_5) @[src/main/scala/rocket/Multiplier.scala 177:18]
    io.resp.bits.tag <= req.tag @[src/main/scala/rocket/Multiplier.scala 178:20]
    node _io_resp_bits_data_T = cat(hiOut, loOut) @[src/main/scala/rocket/Multiplier.scala 180:27]
    io.resp.bits.data <= _io_resp_bits_data_T @[src/main/scala/rocket/Multiplier.scala 180:21]
    node _io_resp_bits_full_data_T = bits(remainder, 128, 65) @[src/main/scala/rocket/Multiplier.scala 181:42]
    node _io_resp_bits_full_data_T_1 = bits(remainder, 63, 0) @[src/main/scala/rocket/Multiplier.scala 181:63]
    node _io_resp_bits_full_data_T_2 = cat(_io_resp_bits_full_data_T, _io_resp_bits_full_data_T_1) @[src/main/scala/rocket/Multiplier.scala 181:32]
    io.resp.bits.full_data <= _io_resp_bits_full_data_T_2 @[src/main/scala/rocket/Multiplier.scala 181:26]
    node _io_resp_valid_T = eq(state, UInt<3>("h6")) @[src/main/scala/rocket/Multiplier.scala 182:27]
    node _io_resp_valid_T_1 = eq(state, UInt<3>("h7")) @[src/main/scala/rocket/Multiplier.scala 182:51]
    node _io_resp_valid_T_2 = or(_io_resp_valid_T, _io_resp_valid_T_1) @[src/main/scala/rocket/Multiplier.scala 182:42]
    io.resp.valid <= _io_resp_valid_T_2 @[src/main/scala/rocket/Multiplier.scala 182:17]
    node _io_req_ready_T = eq(state, UInt<3>("h0")) @[src/main/scala/rocket/Multiplier.scala 183:25]
    io.req.ready <= _io_req_ready_T @[src/main/scala/rocket/Multiplier.scala 183:16]
    _mc._s0 <= _T_5
    _mc._s1 <= _hi_T
    _mc._s2 <= _T_8
    _mc._s3 <= _hi_T_3
    _mc._s4 <= resHi
    _mc._s5 <= _mc_prop_wire__s5
    _mc._s6 <= _mc_prop_wire__s6
    _mc._s7 <= neg_out
    _mc._s8 <= _mc_prop_wire__s8
    _mc._s9 <= cmdMul
    _mc._s10 <= _mc_prop_wire__s10
    _mc._s11 <= cmdHi
    _mc._s12 <= _loOut_T_3
    _mc._s13 <= _hiOut_T_3
    _mc._s14 <= _hiOut_T_1
    _cp._s0 <= _T_10
    _cp._s1 <= _cp_prop_wire__s1
    _cp._s2 <= _cp_prop_wire__s2
    _cp._s3 <= _T_13
    _cp._s4 <= _T_14
    _cp._s5 <= _cp_prop_wire__s5
    _cp._s6 <= _T_17
    _cp._s7 <= _cp_prop_wire__s7
    _cp._s8 <= _cp_prop_wire__s8
    _cp._s9 <= _T_22
    _cp._s10 <= _T_23
    _rs._s0 <= state
    _rs._s1 <= req.fn
    _rs._s2 <= req.dw
    _rs._s3 <= req.in1
    _rs._s4 <= req.in2
    _rs._s5 <= req.tag
    _rs._s6 <= count
    _rs._s7 <= neg_out
    _rs._s8 <= isHi
    _rs._s9 <= resHi
    _rs._s10 <= divisor
    _rs._s11 <= remainder
