`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:25:29 02/25/2013 
// Design Name: 
// Module Name:    fetch 
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
module instruction_fetch(
    input [10:0] pc_salto,
    input clock,
	 input salto_sel,
    input if_flush,
	 input pc_write,
    input if_id_write,
    output [10:0] pc,
    output [32:0] instruccion
    );
	
	wire [10:0] pc_siguiente;
	wire [10:0] pc_actual;
	wire [10:0] pc_incrementado;
	wire [32:0] inst;
	
mux u_mux_fetch (
    .incremento(pc_incrementado), 
    .salto(pc_salto), 
    .sel(salto_sel), 
    .value(pc_siguiente)
    );

pc u_pc (
    .clock(clock), 
    .siguiente_pc(pc_siguiente),
	 .enable_pc(pc_write),
    .pc_actual(pc_actual)
    );

inst_mem u_inst_mem (
    .addr(pc_actual), 
    .clock(clock), 
    .inst(inst)
    );
	 
if_id_reg u_if_id_reg (
    .entrada(inst),
	 .enable_if_id(if_id_write),
	 .flush(if_flush),
    .clock(clock), 
    .salida(instruccion)
    );

sumador u_sumador (
    .pc_actual(pc_actual), 
    .pc_incrementado(pc_incrementado)
    );
	 
endmodule
