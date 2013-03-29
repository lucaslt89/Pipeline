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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002427358024_1260470467_init();
    work_m_00000000001002208886_3415651129_init();
    work_m_00000000002160924898_0833183191_init();
    work_m_00000000002325735333_3375560057_init();
    work_m_00000000000055788121_3945777025_init();
    work_m_00000000002000140320_1716543551_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002000140320_1716543551");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
