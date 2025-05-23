// Generated by CIRCT firtool-1.43.0
module SubModule(
  input        clock,
               reset,
  input  [7:0] io_a,
               io_b,
  input  [1:0] io_sel,
  output [7:0] io_out,
  output       _cp__s0,
               _cp__s1,
               _cp__s2,
  output [7:0] _rs__s0
);

  reg  [7:0]      stateReg;
  wire [3:0][7:0] _GEN = {{stateReg}, {stateReg + 8'h1}, {io_b}, {io_a}};
  always @(posedge clock) begin
    if (reset)
      stateReg <= 8'h0;
    else begin
      automatic logic [3:0][7:0] _GEN_0 =
        {{stateReg}, {io_a & io_b}, {io_a - io_b}, {io_a + io_b}};
      stateReg <= _GEN_0[io_sel];
    end
  end // always @(posedge)
  assign io_out = _GEN[io_sel];
  assign _cp__s0 = io_sel == 2'h0;
  assign _cp__s1 = io_sel == 2'h1;
  assign _cp__s2 = io_sel == 2'h2;
  assign _rs__s0 = stateReg;
endmodule

module AnotherSubModule(
  input        clock,
               reset,
  input  [7:0] io_in,
  output [7:0] io_out,
  output       _cp__s3,
  output [7:0] _rs__s1
);

  reg  [7:0] delayedIn;
  wire       _GEN = io_in > 8'h64;
  always @(posedge clock) begin
    if (reset)
      delayedIn <= 8'h0;
    else
      delayedIn <= io_in;
  end // always @(posedge)
  assign io_out = _GEN ? delayedIn + 8'h1 : delayedIn;
  assign _cp__s3 = _GEN;
  assign _rs__s1 = delayedIn;
endmodule

module ComplexExample(
  input        clock,
               reset,
  input  [7:0] io_topInA,
               io_topInB,
  input  [1:0] io_topSel,
  output [7:0] io_topOut,
  output       _mc__s0,
               _mc__s1,
               _cp__s0,
               _cp__s1,
               _cp__s2,
               _cp__s3,
               _cp__s4,
               _cp__s5,
               _cp__s6,
               _cp__s7,
  output [7:0] _rs__s0,
               _rs__s1
);

  wire [7:0]      _anotherSub_io_out;
  wire [7:0]      _sub_io_out;
  wire [3:0][7:0] _GEN =
    {{8'h0}, {io_topInA + io_topInB}, {_sub_io_out}, {_anotherSub_io_out}};
  SubModule sub (
    .clock   (clock),
    .reset   (reset),
    .io_a    (io_topSel[0] ? io_topInB : io_topInA),
    .io_b    (io_topSel[1] ? io_topInA : io_topInB),
    .io_sel  (io_topSel),
    .io_out  (_sub_io_out),
    ._cp__s0 (_cp__s0),
    ._cp__s1 (_cp__s1),
    ._cp__s2 (_cp__s2),
    ._rs__s0 (_rs__s0)
  );
  AnotherSubModule anotherSub (
    .clock   (clock),
    .reset   (reset),
    .io_in   (io_topSel[0] ? _sub_io_out : io_topInA),
    .io_out  (_anotherSub_io_out),
    ._cp__s3 (_cp__s3),
    ._rs__s1 (_rs__s1)
  );
  assign io_topOut = _GEN[io_topSel];
  assign _mc__s0 = io_topSel[0];
  assign _mc__s1 = io_topSel[0];
  assign _cp__s4 = io_topSel[1];
  assign _cp__s5 = io_topSel == 2'h0;
  assign _cp__s6 = io_topSel == 2'h1;
  assign _cp__s7 = io_topSel == 2'h2;
endmodule

