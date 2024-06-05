module regfile( input clk,
                input logic WE3,
                input [4:0] A1, A2, A3,
                input [31:0] D3,

                output [31:0] D1, D2
);
    reg [31:0] regs[31:0] /*verilator public*/;
    always @(negedge clk)
        begin
            if (WE3) regs[A3] <= D3;
        end
    assign D1 = (A1 != 0) ? regs[A1] : 0;
    assign D2 = (A2 != 0) ? regs[A2] : 0;
endmodule
