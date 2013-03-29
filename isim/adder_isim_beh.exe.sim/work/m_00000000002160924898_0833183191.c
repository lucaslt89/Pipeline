/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Practicos Arquitectura/Pipeline/Adder.v";



static void Initial_27_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = (t0 + 1208U);
    t3 = *((char **)t1);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t2, 32, t3, 32);
    t1 = (t0 + 1608);
    xsi_vlogvar_assign_value(t1, t4, 0, 0, 32);

LAB1:    return;
}


extern void work_m_00000000002160924898_0833183191_init()
{
	static char *pe[] = {(void *)Initial_27_0};
	xsi_register_didat("work_m_00000000002160924898_0833183191", "isim/adder_isim_beh.exe.sim/work/m_00000000002160924898_0833183191.didat");
	xsi_register_executes(pe);
}
