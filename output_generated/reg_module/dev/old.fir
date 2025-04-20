FIRRTL version 3.3.0
circuit RegModule :
  module RegModule : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 6:7]
    input clock : Clock @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 6:7]
    input reset : UInt<1> @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 6:7]
    output io : { flip sel : UInt<1>, out : UInt<8>} @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 7:14]

    connect io.out, UInt<1>(0h0) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 12:10]
    node _T = eq(io.sel, UInt<1>(0h0)) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 14:15]
    when _T : @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 14:24]
      regreset regA : UInt<8>, clock, reset, UInt<8>(0h0) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 15:23]
      node _regA_T = add(regA, UInt<1>(0h1)) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 16:18]
      node _regA_T_1 = tail(_regA_T, 1) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 16:18]
      connect regA, _regA_T_1 @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 16:10]
      connect io.out, regA @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 17:12]
    else :
      regreset regB : UInt<8>, clock, reset, UInt<8>(0h64) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 19:23]
      node _regB_T = sub(regB, UInt<1>(0h1)) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 20:18]
      node _regB_T_1 = tail(_regB_T, 1) @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 20:18]
      connect regB, _regB_T_1 @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 20:10]
      connect io.out, regB @[D:\\projs\\fuzz\\learn_chisel_phase\\src\\main\\scala\\modules\\Reg.scala 21:12]

