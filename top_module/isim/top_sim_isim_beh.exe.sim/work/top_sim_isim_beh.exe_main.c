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
    work_m_00000000000110523180_1415287226_init();
    unisims_ver_m_00000000000236260522_2449448540_init();
    unisims_ver_m_00000000003510477262_2316096324_init();
    unisims_ver_m_00000000002123152668_0970595058_init();
    unisims_ver_m_00000000002123152668_3476364530_init();
    work_m_00000000003875427100_0398819312_init();
    work_m_00000000001548170619_3342488510_init();
    unisims_ver_m_00000000000924517765_3125220529_init();
    unisims_ver_m_00000000002549801008_4245414866_init();
    work_m_00000000003695994837_1504613743_init();
    work_m_00000000001788328879_1948963925_init();
    work_m_00000000002219675890_0300755204_init();
    unisims_ver_m_00000000003149700083_1668249201_init();
    work_m_00000000003016884818_0640932150_init();
    work_m_00000000000460721591_3114136509_init();
    work_m_00000000000842069459_3087691015_init();
    work_m_00000000003317013505_2981896492_init();
    work_m_00000000001056205748_3977879909_init();
    work_m_00000000001138737368_1518070077_init();
    work_m_00000000000246456450_0850856313_init();
    work_m_00000000001055190740_3736896131_init();
    work_m_00000000000565730659_4200803963_init();
    work_m_00000000003650480178_2587104053_init();
    work_m_00000000000337969108_4212637783_init();
    work_m_00000000003461790487_2408152067_init();
    work_m_00000000001079936168_2927406752_init();
    work_m_00000000000540576535_3948475007_init();
    unisims_ver_m_00000000001762375489_3501834183_init();
    work_m_00000000002488955057_1673633989_init();
    work_m_00000000003293597218_0483102307_init();
    work_m_00000000003570506799_0209574480_init();
    work_m_00000000000018685778_3324729380_init();
    work_m_00000000003285952365_2858095548_init();
    work_m_00000000000000917375_3764455684_init();
    unisims_ver_m_00000000001162476414_1323117156_init();
    work_m_00000000001385501744_2995682845_init();
    work_m_00000000000053980618_1376570345_init();
    work_m_00000000002985833626_1411027795_init();
    work_m_00000000003024856046_3823007873_init();
    work_m_00000000000684807181_2668991232_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000684807181_2668991232");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}