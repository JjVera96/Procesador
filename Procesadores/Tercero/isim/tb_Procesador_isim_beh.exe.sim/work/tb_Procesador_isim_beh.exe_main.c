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

char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *STD_STANDARD;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    work_a_1991350011_3212880686_init();
    work_a_1003314168_1560206399_init();
    work_a_1707665227_3212880686_init();
    work_a_4079509972_3212880686_init();
    work_a_0542593727_3212880686_init();
    work_a_0072473951_3212880686_init();
    work_a_0728318883_3212880686_init();
    work_a_2455020893_3212880686_init();
    work_a_1321637904_3212880686_init();
    work_a_2166523021_3212880686_init();
    work_a_0992986323_3212880686_init();
    work_a_0290344353_3212880686_init();
    work_a_0934014609_3212880686_init();
    work_a_3961274036_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_3261551314_3212880686_init();
    work_a_3863512822_3212880686_init();
    work_a_4289116073_2372691052_init();


    xsi_register_tops("work_a_4289116073_2372691052");

    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_STANDARD = xsi_get_engine_memory("std_standard");

    return xsi_run_simulation(argc, argv);

}
