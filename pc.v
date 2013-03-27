`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:37:33 02/24/2013 
// Design Name: 
// Module Name:    pc 
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
module pc(
    input clock,
	 input [10:0] siguiente_pc,
    input enable_pc,
	 output [10:0] pc_actual
	 );
	 
	reg [10:0] pc_aux = 10'b00000_00000;
	always @(posedge clock)
	begin
		if(enable_pc)
			pc_aux = siguiente_pc;
	end
	
	assign pc_actual = pc_aux;

endmodule
