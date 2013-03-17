`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:42:30 03/03/2013 
// Design Name: 
// Module Name:    registers 
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
module registers(
    input [4:0] read_addr_a,
    input [4:0] read_addr_b,
    input [4:0] write_address,
    input [31:0]write_data,
    input reg_write, //0 to read, 1 to write.
    output reg [31:0] data_a,
    output reg [31:0] data_b
    );
	 
	 reg [31:0] registers [31:0];
	 
	 always @*
	 begin
		
		if(reg_write)
		begin
			registers[write_address] = write_data;
		end
		
		else
		begin
			data_a = registers[read_addr_a];
			data_b = registers[read_addr_b];
		end
		
	 end
	 
endmodule
