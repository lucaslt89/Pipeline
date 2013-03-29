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
    work_m_00000000002725674584_1323274903_init();
    work_m_00000000003277980835_3383896982_init();
    work_m_00000000003108495163_2990559060_init();
    work_m_00000000001477550749_3200543613_init();
    work_m_00000000001145244808_3547657738_init();
    work_m_00000000003433773699_3032547478_init();
    work_m_00000000000006640537_0891418390_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000006640537_0891418390");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
