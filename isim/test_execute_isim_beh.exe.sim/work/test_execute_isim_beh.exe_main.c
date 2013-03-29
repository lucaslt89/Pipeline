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
    work_m_00000000000461477544_0992745401_init();
    work_m_00000000002540920527_3695056692_init();
    work_m_00000000002070251587_2725559894_init();
    work_m_00000000002428935760_2812866862_init();
    work_m_00000000000574780088_1576882168_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000574780088_1576882168");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
