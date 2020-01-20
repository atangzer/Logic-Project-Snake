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
    unisims_ver_m_00000000000236260522_2449448540_init();
    unisims_ver_m_00000000003510477262_2316096324_init();
    unisims_ver_m_00000000002123152668_0970595058_init();
    unisims_ver_m_00000000002123152668_3476364530_init();
    work_m_00000000003875427100_0398819312_init();
    work_m_00000000001548170619_3342488510_init();
    work_m_00000000000565730659_4200803963_init();
    work_m_00000000003650480178_2587104053_init();
    work_m_00000000001831460918_3272323980_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001831460918_3272323980");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
