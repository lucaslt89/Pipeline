`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:02:52 02/25/2013 
// Design Name: 
// Module Name:    if_id 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module if_id_reg(
    input [31:0] entrada,
	 input clock,
    input enable_if_id,
	 input flush,
	 output [31:0] salida
	 );
	
	reg  [31:0] out;
	
	always @(posedge clock)
	begin
		if(enable_if_id)
		begin
			if(flush)
				out = 32'b00000_00000_00000_00000_00000_00000_00; //nop
			else
				out = entrada;
		end	
	end
	
	assign salida = out;
	
endmodule
