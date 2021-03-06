
#ifndef _ACC_CONFIG_H_
#define _ACC_CONFIG_H_

/* Constants determined by the CL */
/* a set of register offsets; this CL has only one */
/* these register addresses should match the addresses in */
/* /aws-fpga/hdk/cl/examples/common/cl_common_defines.vh */

#define HELLO_WORLD_REG_ADDR UINT64_C(0x0)

#define DDR_SH_ADDR_0_0 UINT64_C(0xE01000000)
#define DDR_SH_ADDR_0_1 UINT64_C(0xE01001000)
#define DDR_SH_ADDR_0_2 UINT64_C(0xE01002000)
#define DDR_SH_ADDR_0_3 UINT64_C(0xE01003000)
#define DDR_SH_ADDR_0_4 UINT64_C(0xE01004000)
#define DDR_SH_ADDR_0_5 UINT64_C(0xE01005000)
#define DDR_SH_ADDR_0_6 UINT64_C(0xE01006000)
#define DDR_SH_ADDR_0_7 UINT64_C(0xE01007000)
#define DDR_SH_ADDR_0_8 UINT64_C(0xE01008000)
#define DDR_SH_ADDR_0_9 UINT64_C(0xE01009000)
#define DDR_SH_ADDR_0_10 UINT64_C(0xE0100A000)
#define DDR_SH_ADDR_0_11 UINT64_C(0xE0100B000)
#define DDR_SH_ADDR_0_12 UINT64_C(0xE0100C000)
#define DDR_SH_ADDR_0_13 UINT64_C(0xE0100D000)
#define DDR_SH_ADDR_0_14 UINT64_C(0xE0100E000)
#define DDR_SH_ADDR_0_15 UINT64_C(0xE0100F000)
#define DDR_SH_ADDR_0_16 UINT64_C(0xE01010000)
#define DDR_SH_ADDR_0_17 UINT64_C(0xE01011000)
#define DDR_SH_ADDR_0_18 UINT64_C(0xE01012000)
#define DDR_SH_ADDR_0_19 UINT64_C(0xE01013000)
#define DDR_SH_ADDR_0_20 UINT64_C(0xE01014000)
#define DDR_SH_ADDR_0_21 UINT64_C(0xE01015000)
#define DDR_SH_ADDR_0_22 UINT64_C(0xE01016000)
#define DDR_SH_ADDR_0_23 UINT64_C(0xE01017000)
#define DDR_SH_ADDR_0_24 UINT64_C(0xE01018000)
#define DDR_SH_ADDR_0_25 UINT64_C(0xE01019000)
#define DDR_SH_ADDR_0_26 UINT64_C(0xE0101A000)
#define DDR_SH_ADDR_0_27 UINT64_C(0xE0101B000)
#define DDR_SH_ADDR_0_28 UINT64_C(0xE0101C000)
#define DDR_SH_ADDR_0_29 UINT64_C(0xE0101D000)
#define DDR_SH_ADDR_0_30 UINT64_C(0xE0101E000)
#define DDR_SH_ADDR_0_31 UINT64_C(0xE0101F000)

#define DDR_SH_ADDR_1_0 UINT64_C(0xE01100000)
#define DDR_SH_ADDR_1_1 UINT64_C(0xE01101000)
#define DDR_SH_ADDR_1_2 UINT64_C(0xE01102000)
#define DDR_SH_ADDR_1_3 UINT64_C(0xE01103000)
#define DDR_SH_ADDR_1_4 UINT64_C(0xE01104000)
#define DDR_SH_ADDR_1_5 UINT64_C(0xE01105000)
#define DDR_SH_ADDR_1_6 UINT64_C(0xE01106000)
#define DDR_SH_ADDR_1_7 UINT64_C(0xE01107000)
#define DDR_SH_ADDR_1_8 UINT64_C(0xE01108000)
#define DDR_SH_ADDR_1_9 UINT64_C(0xE01109000)
#define DDR_SH_ADDR_1_10 UINT64_C(0xE0110A000)
#define DDR_SH_ADDR_1_11 UINT64_C(0xE0110B000)
#define DDR_SH_ADDR_1_12 UINT64_C(0xE0110C000)
#define DDR_SH_ADDR_1_13 UINT64_C(0xE0110D000)
#define DDR_SH_ADDR_1_14 UINT64_C(0xE0110E000)
#define DDR_SH_ADDR_1_15 UINT64_C(0xE0110F000)
#define DDR_SH_ADDR_1_16 UINT64_C(0xE01110000)
#define DDR_SH_ADDR_1_17 UINT64_C(0xE01111000)
#define DDR_SH_ADDR_1_18 UINT64_C(0xE01112000)
#define DDR_SH_ADDR_1_19 UINT64_C(0xE01113000)
#define DDR_SH_ADDR_1_20 UINT64_C(0xE01114000)
#define DDR_SH_ADDR_1_21 UINT64_C(0xE01115000)
#define DDR_SH_ADDR_1_22 UINT64_C(0xE01116000)
#define DDR_SH_ADDR_1_23 UINT64_C(0xE01117000)
#define DDR_SH_ADDR_1_24 UINT64_C(0xE01118000)
#define DDR_SH_ADDR_1_25 UINT64_C(0xE01119000)
#define DDR_SH_ADDR_1_26 UINT64_C(0xE0111A000)
#define DDR_SH_ADDR_1_27 UINT64_C(0xE0111B000)
#define DDR_SH_ADDR_1_28 UINT64_C(0xE0111C000)
#define DDR_SH_ADDR_1_29 UINT64_C(0xE0111D000)
#define DDR_SH_ADDR_1_30 UINT64_C(0xE0111E000)
#define DDR_SH_ADDR_1_31 UINT64_C(0xE0111F000)

#define DDR_SH_ADDR_2_0 UINT64_C(0xE01200000)
#define DDR_SH_ADDR_2_1 UINT64_C(0xE01201000)
#define DDR_SH_ADDR_2_2 UINT64_C(0xE01202000)
#define DDR_SH_ADDR_2_3 UINT64_C(0xE01203000)
#define DDR_SH_ADDR_2_4 UINT64_C(0xE01204000)
#define DDR_SH_ADDR_2_5 UINT64_C(0xE01205000)
#define DDR_SH_ADDR_2_6 UINT64_C(0xE01206000)
#define DDR_SH_ADDR_2_7 UINT64_C(0xE01207000)
#define DDR_SH_ADDR_2_8 UINT64_C(0xE01208000)
#define DDR_SH_ADDR_2_9 UINT64_C(0xE01209000)
#define DDR_SH_ADDR_2_10 UINT64_C(0xE0120A000)
#define DDR_SH_ADDR_2_11 UINT64_C(0xE0120B000)
#define DDR_SH_ADDR_2_12 UINT64_C(0xE0120C000)
#define DDR_SH_ADDR_2_13 UINT64_C(0xE0120D000)
#define DDR_SH_ADDR_2_14 UINT64_C(0xE0120E000)
#define DDR_SH_ADDR_2_15 UINT64_C(0xE0120F000)
#define DDR_SH_ADDR_2_16 UINT64_C(0xE01210000)
#define DDR_SH_ADDR_2_17 UINT64_C(0xE01211000)
#define DDR_SH_ADDR_2_18 UINT64_C(0xE01212000)
#define DDR_SH_ADDR_2_19 UINT64_C(0xE01213000)
#define DDR_SH_ADDR_2_20 UINT64_C(0xE01214000)
#define DDR_SH_ADDR_2_21 UINT64_C(0xE01215000)
#define DDR_SH_ADDR_2_22 UINT64_C(0xE01216000)
#define DDR_SH_ADDR_2_23 UINT64_C(0xE01217000)
#define DDR_SH_ADDR_2_24 UINT64_C(0xE01218000)
#define DDR_SH_ADDR_2_25 UINT64_C(0xE01219000)
#define DDR_SH_ADDR_2_26 UINT64_C(0xE0121A000)
#define DDR_SH_ADDR_2_27 UINT64_C(0xE0121B000)
#define DDR_SH_ADDR_2_28 UINT64_C(0xE0121C000)
#define DDR_SH_ADDR_2_29 UINT64_C(0xE0121D000)
#define DDR_SH_ADDR_2_30 UINT64_C(0xE0121E000)
#define DDR_SH_ADDR_2_31 UINT64_C(0xE0121F000)

#define DDR_SH_ADDR_3_0 UINT64_C(0xE01300000)
#define DDR_SH_ADDR_3_1 UINT64_C(0xE01301000)
#define DDR_SH_ADDR_3_2 UINT64_C(0xE01302000)
#define DDR_SH_ADDR_3_3 UINT64_C(0xE01303000)
#define DDR_SH_ADDR_3_4 UINT64_C(0xE01304000)
#define DDR_SH_ADDR_3_5 UINT64_C(0xE01305000)
#define DDR_SH_ADDR_3_6 UINT64_C(0xE01306000)
#define DDR_SH_ADDR_3_7 UINT64_C(0xE01307000)
#define DDR_SH_ADDR_3_8 UINT64_C(0xE01308000)
#define DDR_SH_ADDR_3_9 UINT64_C(0xE01309000)
#define DDR_SH_ADDR_3_10 UINT64_C(0xE0130A000)
#define DDR_SH_ADDR_3_11 UINT64_C(0xE0130B000)
#define DDR_SH_ADDR_3_12 UINT64_C(0xE0130C000)
#define DDR_SH_ADDR_3_13 UINT64_C(0xE0130D000)
#define DDR_SH_ADDR_3_14 UINT64_C(0xE0130E000)
#define DDR_SH_ADDR_3_15 UINT64_C(0xE0130F000)
#define DDR_SH_ADDR_3_16 UINT64_C(0xE01310000)
#define DDR_SH_ADDR_3_17 UINT64_C(0xE01311000)
#define DDR_SH_ADDR_3_18 UINT64_C(0xE01312000)
#define DDR_SH_ADDR_3_19 UINT64_C(0xE01313000)
#define DDR_SH_ADDR_3_20 UINT64_C(0xE01314000)
#define DDR_SH_ADDR_3_21 UINT64_C(0xE01315000)
#define DDR_SH_ADDR_3_22 UINT64_C(0xE01316000)
#define DDR_SH_ADDR_3_23 UINT64_C(0xE01317000)
#define DDR_SH_ADDR_3_24 UINT64_C(0xE01318000)
#define DDR_SH_ADDR_3_25 UINT64_C(0xE01319000)
#define DDR_SH_ADDR_3_26 UINT64_C(0xE0131A000)
#define DDR_SH_ADDR_3_27 UINT64_C(0xE0131B000)
#define DDR_SH_ADDR_3_28 UINT64_C(0xE0131C000)
#define DDR_SH_ADDR_3_29 UINT64_C(0xE0131D000)
#define DDR_SH_ADDR_3_30 UINT64_C(0xE0131E000)
#define DDR_SH_ADDR_3_31 UINT64_C(0xE0131F000)

#define DDR_SH_ADDR_4_0 UINT64_C(0xE01400000)
#define DDR_SH_ADDR_4_1 UINT64_C(0xE01401000)
#define DDR_SH_ADDR_4_2 UINT64_C(0xE01402000)
#define DDR_SH_ADDR_4_3 UINT64_C(0xE01403000)
#define DDR_SH_ADDR_4_4 UINT64_C(0xE01404000)
#define DDR_SH_ADDR_4_5 UINT64_C(0xE01405000)
#define DDR_SH_ADDR_4_6 UINT64_C(0xE01406000)
#define DDR_SH_ADDR_4_7 UINT64_C(0xE01407000)
#define DDR_SH_ADDR_4_8 UINT64_C(0xE01408000)
#define DDR_SH_ADDR_4_9 UINT64_C(0xE01409000)
#define DDR_SH_ADDR_4_10 UINT64_C(0xE0140A000)
#define DDR_SH_ADDR_4_11 UINT64_C(0xE0140B000)
#define DDR_SH_ADDR_4_12 UINT64_C(0xE0140C000)
#define DDR_SH_ADDR_4_13 UINT64_C(0xE0140D000)
#define DDR_SH_ADDR_4_14 UINT64_C(0xE0140E000)
#define DDR_SH_ADDR_4_15 UINT64_C(0xE0140F000)
#define DDR_SH_ADDR_4_16 UINT64_C(0xE01410000)
#define DDR_SH_ADDR_4_17 UINT64_C(0xE01411000)
#define DDR_SH_ADDR_4_18 UINT64_C(0xE01412000)
#define DDR_SH_ADDR_4_19 UINT64_C(0xE01413000)
#define DDR_SH_ADDR_4_20 UINT64_C(0xE01414000)
#define DDR_SH_ADDR_4_21 UINT64_C(0xE01415000)
#define DDR_SH_ADDR_4_22 UINT64_C(0xE01416000)
#define DDR_SH_ADDR_4_23 UINT64_C(0xE01417000)
#define DDR_SH_ADDR_4_24 UINT64_C(0xE01418000)
#define DDR_SH_ADDR_4_25 UINT64_C(0xE01419000)
#define DDR_SH_ADDR_4_26 UINT64_C(0xE0141A000)
#define DDR_SH_ADDR_4_27 UINT64_C(0xE0141B000)
#define DDR_SH_ADDR_4_28 UINT64_C(0xE0141C000)
#define DDR_SH_ADDR_4_29 UINT64_C(0xE0141D000)
#define DDR_SH_ADDR_4_30 UINT64_C(0xE0141E000)
#define DDR_SH_ADDR_4_31 UINT64_C(0xE0141F000)

#define DDR_SH_ADDR_5_0 UINT64_C(0xE01500000)
#define DDR_SH_ADDR_5_1 UINT64_C(0xE01501000)
#define DDR_SH_ADDR_5_2 UINT64_C(0xE01502000)
#define DDR_SH_ADDR_5_3 UINT64_C(0xE01503000)
#define DDR_SH_ADDR_5_4 UINT64_C(0xE01504000)
#define DDR_SH_ADDR_5_5 UINT64_C(0xE01505000)
#define DDR_SH_ADDR_5_6 UINT64_C(0xE01506000)
#define DDR_SH_ADDR_5_7 UINT64_C(0xE01507000)
#define DDR_SH_ADDR_5_8 UINT64_C(0xE01508000)
#define DDR_SH_ADDR_5_9 UINT64_C(0xE01509000)
#define DDR_SH_ADDR_5_10 UINT64_C(0xE0150A000)
#define DDR_SH_ADDR_5_11 UINT64_C(0xE0150B000)
#define DDR_SH_ADDR_5_12 UINT64_C(0xE0150C000)
#define DDR_SH_ADDR_5_13 UINT64_C(0xE0150D000)
#define DDR_SH_ADDR_5_14 UINT64_C(0xE0150E000)
#define DDR_SH_ADDR_5_15 UINT64_C(0xE0150F000)
#define DDR_SH_ADDR_5_16 UINT64_C(0xE01510000)
#define DDR_SH_ADDR_5_17 UINT64_C(0xE01511000)
#define DDR_SH_ADDR_5_18 UINT64_C(0xE01512000)
#define DDR_SH_ADDR_5_19 UINT64_C(0xE01513000)
#define DDR_SH_ADDR_5_20 UINT64_C(0xE01514000)
#define DDR_SH_ADDR_5_21 UINT64_C(0xE01515000)
#define DDR_SH_ADDR_5_22 UINT64_C(0xE01516000)
#define DDR_SH_ADDR_5_23 UINT64_C(0xE01517000)
#define DDR_SH_ADDR_5_24 UINT64_C(0xE01518000)
#define DDR_SH_ADDR_5_25 UINT64_C(0xE01519000)
#define DDR_SH_ADDR_5_26 UINT64_C(0xE0151A000)
#define DDR_SH_ADDR_5_27 UINT64_C(0xE0151B000)
#define DDR_SH_ADDR_5_28 UINT64_C(0xE0151C000)
#define DDR_SH_ADDR_5_29 UINT64_C(0xE0151D000)
#define DDR_SH_ADDR_5_30 UINT64_C(0xE0151E000)
#define DDR_SH_ADDR_5_31 UINT64_C(0xE0151F000)

#define DDR_SH_ADDR_6_0 UINT64_C(0xE01600000)
#define DDR_SH_ADDR_6_1 UINT64_C(0xE01601000)
#define DDR_SH_ADDR_6_2 UINT64_C(0xE01602000)
#define DDR_SH_ADDR_6_3 UINT64_C(0xE01603000)
#define DDR_SH_ADDR_6_4 UINT64_C(0xE01604000)
#define DDR_SH_ADDR_6_5 UINT64_C(0xE01605000)
#define DDR_SH_ADDR_6_6 UINT64_C(0xE01606000)
#define DDR_SH_ADDR_6_7 UINT64_C(0xE01607000)
#define DDR_SH_ADDR_6_8 UINT64_C(0xE01608000)
#define DDR_SH_ADDR_6_9 UINT64_C(0xE01609000)
#define DDR_SH_ADDR_6_10 UINT64_C(0xE0160A000)
#define DDR_SH_ADDR_6_11 UINT64_C(0xE0160B000)
#define DDR_SH_ADDR_6_12 UINT64_C(0xE0160C000)
#define DDR_SH_ADDR_6_13 UINT64_C(0xE0160D000)
#define DDR_SH_ADDR_6_14 UINT64_C(0xE0160E000)
#define DDR_SH_ADDR_6_15 UINT64_C(0xE0160F000)
#define DDR_SH_ADDR_6_16 UINT64_C(0xE01610000)
#define DDR_SH_ADDR_6_17 UINT64_C(0xE01611000)
#define DDR_SH_ADDR_6_18 UINT64_C(0xE01612000)
#define DDR_SH_ADDR_6_19 UINT64_C(0xE01613000)
#define DDR_SH_ADDR_6_20 UINT64_C(0xE01614000)
#define DDR_SH_ADDR_6_21 UINT64_C(0xE01615000)
#define DDR_SH_ADDR_6_22 UINT64_C(0xE01616000)
#define DDR_SH_ADDR_6_23 UINT64_C(0xE01617000)
#define DDR_SH_ADDR_6_24 UINT64_C(0xE01618000)
#define DDR_SH_ADDR_6_25 UINT64_C(0xE01619000)
#define DDR_SH_ADDR_6_26 UINT64_C(0xE0161A000)
#define DDR_SH_ADDR_6_27 UINT64_C(0xE0161B000)
#define DDR_SH_ADDR_6_28 UINT64_C(0xE0161C000)
#define DDR_SH_ADDR_6_29 UINT64_C(0xE0161D000)
#define DDR_SH_ADDR_6_30 UINT64_C(0xE0161E000)
#define DDR_SH_ADDR_6_31 UINT64_C(0xE0161F000)

#define DDR_SH_ADDR_7_0 UINT64_C(0xE01700000)
#define DDR_SH_ADDR_7_1 UINT64_C(0xE01701000)
#define DDR_SH_ADDR_7_2 UINT64_C(0xE01702000)
#define DDR_SH_ADDR_7_3 UINT64_C(0xE01703000)
#define DDR_SH_ADDR_7_4 UINT64_C(0xE01704000)
#define DDR_SH_ADDR_7_5 UINT64_C(0xE01705000)
#define DDR_SH_ADDR_7_6 UINT64_C(0xE01706000)
#define DDR_SH_ADDR_7_7 UINT64_C(0xE01707000)
#define DDR_SH_ADDR_7_8 UINT64_C(0xE01708000)
#define DDR_SH_ADDR_7_9 UINT64_C(0xE01709000)
#define DDR_SH_ADDR_7_10 UINT64_C(0xE0170A000)
#define DDR_SH_ADDR_7_11 UINT64_C(0xE0170B000)
#define DDR_SH_ADDR_7_12 UINT64_C(0xE0170C000)
#define DDR_SH_ADDR_7_13 UINT64_C(0xE0170D000)
#define DDR_SH_ADDR_7_14 UINT64_C(0xE0170E000)
#define DDR_SH_ADDR_7_15 UINT64_C(0xE0170F000)
#define DDR_SH_ADDR_7_16 UINT64_C(0xE01710000)
#define DDR_SH_ADDR_7_17 UINT64_C(0xE01711000)
#define DDR_SH_ADDR_7_18 UINT64_C(0xE01712000)
#define DDR_SH_ADDR_7_19 UINT64_C(0xE01713000)
#define DDR_SH_ADDR_7_20 UINT64_C(0xE01714000)
#define DDR_SH_ADDR_7_21 UINT64_C(0xE01715000)
#define DDR_SH_ADDR_7_22 UINT64_C(0xE01716000)
#define DDR_SH_ADDR_7_23 UINT64_C(0xE01717000)
#define DDR_SH_ADDR_7_24 UINT64_C(0xE01718000)
#define DDR_SH_ADDR_7_25 UINT64_C(0xE01719000)
#define DDR_SH_ADDR_7_26 UINT64_C(0xE0171A000)
#define DDR_SH_ADDR_7_27 UINT64_C(0xE0171B000)
#define DDR_SH_ADDR_7_28 UINT64_C(0xE0171C000)
#define DDR_SH_ADDR_7_29 UINT64_C(0xE0171D000)
#define DDR_SH_ADDR_7_30 UINT64_C(0xE0171E000)
#define DDR_SH_ADDR_7_31 UINT64_C(0xE0171F000)
#define DDR_SH_ADDR_2 UINT64_C(0xE01100000)
#define DDR_SH_ADDR_3 UINT64_C(0xE01200000)
#define DDR_SH_ADDR_4 UINT64_C(0xE01300000)
#define DDR_SH_ADDR_5 UINT64_C(0xE01400000)
#define DDR_SH_ADDR_6 UINT64_C(0xE01500000)
#define DDR_SH_ADDR_7 UINT64_C(0xE01600000)
#define DDR_SH_ADDR_8 UINT64_C(0xE01700000)

#define DDR_B_ADDR_1 UINT64_C(0xD02000000)
#define DDR_B_ADDR_2 UINT64_C(0xD02100000)
#define DDR_B_ADDR_3 UINT64_C(0xD02200000)
#define DDR_B_ADDR_4 UINT64_C(0xD02300000)
#define DDR_B_ADDR_5 UINT64_C(0xD02400000)
#define DDR_B_ADDR_6 UINT64_C(0xD02500000)
#define DDR_B_ADDR_7 UINT64_C(0xD02600000)
#define DDR_B_ADDR_8 UINT64_C(0xD02700000)

#define DDR_A_ADDR_1 UINT64_C(0xC02000000)
#define DDR_A_ADDR_2 UINT64_C(0xC02100000)
#define DDR_A_ADDR_3 UINT64_C(0xC02200000)
#define DDR_A_ADDR_4 UINT64_C(0xC02300000)
#define DDR_A_ADDR_5 UINT64_C(0xC02400000)
#define DDR_A_ADDR_6 UINT64_C(0xC02500000)
#define DDR_A_ADDR_7 UINT64_C(0xC02600000)
#define DDR_A_ADDR_8 UINT64_C(0xC02700000)

#define HELLO_WORLD_REG_ADDR_CONTROL UINT64_C(0x00)
#define HELLO_WORLD_REG_ADDR_STATUS UINT64_C(0x04)

#define HELLO_WORLD_REG_ADDR_SRC_MSB_ADDR UINT64_C(0x1C)
#define HELLO_WORLD_REG_ADDR_DST_MSB_ADDR UINT64_C(0x24)

#define HELLO_WORLD_REG_ADDR_SRC_ADDR UINT64_C(0x18)
#define HELLO_WORLD_REG_ADDR_DST_ADDR UINT64_C(0x20)
#define HELLO_WORLD_REG_ADDR_BYTES UINT64_C(0x28)


//BRAM PCIS address offset
// conv weight port --axi_bram_ctrl_19 [0xC800_0000,0xC800_4000) (256k)
#define CONV_W_BRAM_PCIS_0_0 UINT64_C(0x02200000)
#define CONV_W_BRAM_PCIS_0_1 UINT64_C(0x02201000)
#define CONV_W_BRAM_PCIS_0_2 UINT64_C(0x02202000)
#define CONV_W_BRAM_PCIS_0_3 UINT64_C(0x02203000)
#define CONV_W_BRAM_PCIS_0_4 UINT64_C(0x02204000)
#define CONV_W_BRAM_PCIS_0_5 UINT64_C(0x02205000)
#define CONV_W_BRAM_PCIS_0_6 UINT64_C(0x02206000)
#define CONV_W_BRAM_PCIS_0_7 UINT64_C(0x02207000)
#define CONV_W_BRAM_PCIS_0_8 UINT64_C(0x02208000)
#define CONV_W_BRAM_PCIS_0_9 UINT64_C(0x02209000)
#define CONV_W_BRAM_PCIS_0_10 UINT64_C(0x0220A000)
#define CONV_W_BRAM_PCIS_0_11 UINT64_C(0x0220B000)
#define CONV_W_BRAM_PCIS_0_12 UINT64_C(0x0220C000)
#define CONV_W_BRAM_PCIS_0_13 UINT64_C(0x0220D000)
#define CONV_W_BRAM_PCIS_0_14 UINT64_C(0x0220E000)
#define CONV_W_BRAM_PCIS_0_15 UINT64_C(0x0220F000)
#define CONV_W_BRAM_PCIS_0_16 UINT64_C(0x02210000)
#define CONV_W_BRAM_PCIS_0_17 UINT64_C(0x02211000)
#define CONV_W_BRAM_PCIS_0_18 UINT64_C(0x02212000)
#define CONV_W_BRAM_PCIS_0_19 UINT64_C(0x02213000)
#define CONV_W_BRAM_PCIS_0_20 UINT64_C(0x02214000)
#define CONV_W_BRAM_PCIS_0_21 UINT64_C(0x02215000)
#define CONV_W_BRAM_PCIS_0_22 UINT64_C(0x02216000)
#define CONV_W_BRAM_PCIS_0_23 UINT64_C(0x02217000)
#define CONV_W_BRAM_PCIS_0_24 UINT64_C(0x02218000)
#define CONV_W_BRAM_PCIS_0_25 UINT64_C(0x02219000)
#define CONV_W_BRAM_PCIS_0_26 UINT64_C(0x0221A000)
#define CONV_W_BRAM_PCIS_0_27 UINT64_C(0x0221B000)
#define CONV_W_BRAM_PCIS_0_28 UINT64_C(0x0221C000)
#define CONV_W_BRAM_PCIS_0_29 UINT64_C(0x0221D000)
#define CONV_W_BRAM_PCIS_0_30 UINT64_C(0x0221E000)
#define CONV_W_BRAM_PCIS_0_31 UINT64_C(0x0221F000)

#define CONV_W_BRAM_PCIS_1_0 UINT64_C(0x06020000)
#define CONV_W_BRAM_PCIS_1_1 UINT64_C(0x06021000)
#define CONV_W_BRAM_PCIS_1_2 UINT64_C(0x06022000)
#define CONV_W_BRAM_PCIS_1_3 UINT64_C(0x06023000)
#define CONV_W_BRAM_PCIS_1_4 UINT64_C(0x06024000)
#define CONV_W_BRAM_PCIS_1_5 UINT64_C(0x06025000)
#define CONV_W_BRAM_PCIS_1_6 UINT64_C(0x06026000)
#define CONV_W_BRAM_PCIS_1_7 UINT64_C(0x06027000)
#define CONV_W_BRAM_PCIS_1_8 UINT64_C(0x06028000)
#define CONV_W_BRAM_PCIS_1_9 UINT64_C(0x06029000)
#define CONV_W_BRAM_PCIS_1_10 UINT64_C(0x0602A000)
#define CONV_W_BRAM_PCIS_1_11 UINT64_C(0x0602B000)
#define CONV_W_BRAM_PCIS_1_12 UINT64_C(0x0602C000)
#define CONV_W_BRAM_PCIS_1_13 UINT64_C(0x0602D000)
#define CONV_W_BRAM_PCIS_1_14 UINT64_C(0x0602E000)
#define CONV_W_BRAM_PCIS_1_15 UINT64_C(0x0602F000)
#define CONV_W_BRAM_PCIS_1_16 UINT64_C(0x06030000)
#define CONV_W_BRAM_PCIS_1_17 UINT64_C(0x06031000)
#define CONV_W_BRAM_PCIS_1_18 UINT64_C(0x06032000)
#define CONV_W_BRAM_PCIS_1_19 UINT64_C(0x06033000)
#define CONV_W_BRAM_PCIS_1_20 UINT64_C(0x06034000)
#define CONV_W_BRAM_PCIS_1_21 UINT64_C(0x06035000)
#define CONV_W_BRAM_PCIS_1_22 UINT64_C(0x06036000)
#define CONV_W_BRAM_PCIS_1_23 UINT64_C(0x06037000)
#define CONV_W_BRAM_PCIS_1_24 UINT64_C(0x06038000)
#define CONV_W_BRAM_PCIS_1_25 UINT64_C(0x06039000)
#define CONV_W_BRAM_PCIS_1_26 UINT64_C(0x0603A000)
#define CONV_W_BRAM_PCIS_1_27 UINT64_C(0x0603B000)
#define CONV_W_BRAM_PCIS_1_28 UINT64_C(0x0603C000)
#define CONV_W_BRAM_PCIS_1_29 UINT64_C(0x0603D000)
#define CONV_W_BRAM_PCIS_1_30 UINT64_C(0x0603E000)
#define CONV_W_BRAM_PCIS_1_31 UINT64_C(0x0603F000)

#define CONV_W_BRAM_PCIS_2_0 UINT64_C(0x02040000)
#define CONV_W_BRAM_PCIS_2_1 UINT64_C(0x02041000)
#define CONV_W_BRAM_PCIS_2_2 UINT64_C(0x02042000)
#define CONV_W_BRAM_PCIS_2_3 UINT64_C(0x02043000)
#define CONV_W_BRAM_PCIS_2_4 UINT64_C(0x02044000)
#define CONV_W_BRAM_PCIS_2_5 UINT64_C(0x02045000)
#define CONV_W_BRAM_PCIS_2_6 UINT64_C(0x02046000)
#define CONV_W_BRAM_PCIS_2_7 UINT64_C(0x02047000)
#define CONV_W_BRAM_PCIS_2_8 UINT64_C(0x02048000)
#define CONV_W_BRAM_PCIS_2_9 UINT64_C(0x02049000)
#define CONV_W_BRAM_PCIS_2_10 UINT64_C(0x0204A000)
#define CONV_W_BRAM_PCIS_2_11 UINT64_C(0x0204B000)
#define CONV_W_BRAM_PCIS_2_12 UINT64_C(0x0204C000)
#define CONV_W_BRAM_PCIS_2_13 UINT64_C(0x0204D000)
#define CONV_W_BRAM_PCIS_2_14 UINT64_C(0x0204E000)
#define CONV_W_BRAM_PCIS_2_15 UINT64_C(0x0204F000)
#define CONV_W_BRAM_PCIS_2_16 UINT64_C(0x02050000)
#define CONV_W_BRAM_PCIS_2_17 UINT64_C(0x02051000)
#define CONV_W_BRAM_PCIS_2_18 UINT64_C(0x02052000)
#define CONV_W_BRAM_PCIS_2_19 UINT64_C(0x02053000)
#define CONV_W_BRAM_PCIS_2_20 UINT64_C(0x02054000)
#define CONV_W_BRAM_PCIS_2_21 UINT64_C(0x02055000)
#define CONV_W_BRAM_PCIS_2_22 UINT64_C(0x02056000)
#define CONV_W_BRAM_PCIS_2_23 UINT64_C(0x02057000)
#define CONV_W_BRAM_PCIS_2_24 UINT64_C(0x02058000)
#define CONV_W_BRAM_PCIS_2_25 UINT64_C(0x02059000)
#define CONV_W_BRAM_PCIS_2_26 UINT64_C(0x0205A000)
#define CONV_W_BRAM_PCIS_2_27 UINT64_C(0x0205B000)
#define CONV_W_BRAM_PCIS_2_28 UINT64_C(0x0205C000)
#define CONV_W_BRAM_PCIS_2_29 UINT64_C(0x0205D000)
#define CONV_W_BRAM_PCIS_2_30 UINT64_C(0x0205E000)
#define CONV_W_BRAM_PCIS_2_31 UINT64_C(0x0205F000)

#define CONV_W_BRAM_PCIS_3_0 UINT64_C(0x02060000)
#define CONV_W_BRAM_PCIS_3_1 UINT64_C(0x02061000)
#define CONV_W_BRAM_PCIS_3_2 UINT64_C(0x02062000)
#define CONV_W_BRAM_PCIS_3_3 UINT64_C(0x02063000)
#define CONV_W_BRAM_PCIS_3_4 UINT64_C(0x02064000)
#define CONV_W_BRAM_PCIS_3_5 UINT64_C(0x02065000)
#define CONV_W_BRAM_PCIS_3_6 UINT64_C(0x02066000)
#define CONV_W_BRAM_PCIS_3_7 UINT64_C(0x02067000)
#define CONV_W_BRAM_PCIS_3_8 UINT64_C(0x02068000)
#define CONV_W_BRAM_PCIS_3_9 UINT64_C(0x02069000)
#define CONV_W_BRAM_PCIS_3_10 UINT64_C(0x0206A000)
#define CONV_W_BRAM_PCIS_3_11 UINT64_C(0x0206B000)
#define CONV_W_BRAM_PCIS_3_12 UINT64_C(0x0206C000)
#define CONV_W_BRAM_PCIS_3_13 UINT64_C(0x0206D000)
#define CONV_W_BRAM_PCIS_3_14 UINT64_C(0x0206E000)
#define CONV_W_BRAM_PCIS_3_15 UINT64_C(0x0206F000)
#define CONV_W_BRAM_PCIS_3_16 UINT64_C(0x02070000)
#define CONV_W_BRAM_PCIS_3_17 UINT64_C(0x02071000)
#define CONV_W_BRAM_PCIS_3_18 UINT64_C(0x02072000)
#define CONV_W_BRAM_PCIS_3_19 UINT64_C(0x02073000)
#define CONV_W_BRAM_PCIS_3_20 UINT64_C(0x02074000)
#define CONV_W_BRAM_PCIS_3_21 UINT64_C(0x02075000)
#define CONV_W_BRAM_PCIS_3_22 UINT64_C(0x02076000)
#define CONV_W_BRAM_PCIS_3_23 UINT64_C(0x02077000)
#define CONV_W_BRAM_PCIS_3_24 UINT64_C(0x02078000)
#define CONV_W_BRAM_PCIS_3_25 UINT64_C(0x02079000)
#define CONV_W_BRAM_PCIS_3_26 UINT64_C(0x0207A000)
#define CONV_W_BRAM_PCIS_3_27 UINT64_C(0x0207B000)
#define CONV_W_BRAM_PCIS_3_28 UINT64_C(0x0207C000)
#define CONV_W_BRAM_PCIS_3_29 UINT64_C(0x0207D000)
#define CONV_W_BRAM_PCIS_3_30 UINT64_C(0x0207E000)
#define CONV_W_BRAM_PCIS_3_31 UINT64_C(0x0207F000)

#define CONV_W_BRAM_PCIS_4_0 UINT64_C(0x02080000)
#define CONV_W_BRAM_PCIS_4_1 UINT64_C(0x02081000)
#define CONV_W_BRAM_PCIS_4_2 UINT64_C(0x02082000)
#define CONV_W_BRAM_PCIS_4_3 UINT64_C(0x02083000)
#define CONV_W_BRAM_PCIS_4_4 UINT64_C(0x02084000)
#define CONV_W_BRAM_PCIS_4_5 UINT64_C(0x02085000)
#define CONV_W_BRAM_PCIS_4_6 UINT64_C(0x02086000)
#define CONV_W_BRAM_PCIS_4_7 UINT64_C(0x02087000)
#define CONV_W_BRAM_PCIS_4_8 UINT64_C(0x02088000)
#define CONV_W_BRAM_PCIS_4_9 UINT64_C(0x02089000)
#define CONV_W_BRAM_PCIS_4_10 UINT64_C(0x0208A000)
#define CONV_W_BRAM_PCIS_4_11 UINT64_C(0x0208B000)
#define CONV_W_BRAM_PCIS_4_12 UINT64_C(0x0208C000)
#define CONV_W_BRAM_PCIS_4_13 UINT64_C(0x0208D000)
#define CONV_W_BRAM_PCIS_4_14 UINT64_C(0x0208E000)
#define CONV_W_BRAM_PCIS_4_15 UINT64_C(0x0208F000)
#define CONV_W_BRAM_PCIS_4_16 UINT64_C(0x02090000)
#define CONV_W_BRAM_PCIS_4_17 UINT64_C(0x02091000)
#define CONV_W_BRAM_PCIS_4_18 UINT64_C(0x02092000)
#define CONV_W_BRAM_PCIS_4_19 UINT64_C(0x02093000)
#define CONV_W_BRAM_PCIS_4_20 UINT64_C(0x02094000)
#define CONV_W_BRAM_PCIS_4_21 UINT64_C(0x02095000)
#define CONV_W_BRAM_PCIS_4_22 UINT64_C(0x02096000)
#define CONV_W_BRAM_PCIS_4_23 UINT64_C(0x02057000)
#define CONV_W_BRAM_PCIS_4_24 UINT64_C(0x02098000)
#define CONV_W_BRAM_PCIS_4_25 UINT64_C(0x02099000)
#define CONV_W_BRAM_PCIS_4_26 UINT64_C(0x0209A000)
#define CONV_W_BRAM_PCIS_4_27 UINT64_C(0x0209B000)
#define CONV_W_BRAM_PCIS_4_28 UINT64_C(0x0209C000)
#define CONV_W_BRAM_PCIS_4_29 UINT64_C(0x0209D000)
#define CONV_W_BRAM_PCIS_4_30 UINT64_C(0x0209E000)
#define CONV_W_BRAM_PCIS_4_31 UINT64_C(0x0209F000)

#define CONV_W_BRAM_PCIS_5_0 UINT64_C(0x020A0000)
#define CONV_W_BRAM_PCIS_5_1 UINT64_C(0x020A1000)
#define CONV_W_BRAM_PCIS_5_2 UINT64_C(0x020A2000)
#define CONV_W_BRAM_PCIS_5_3 UINT64_C(0x020A3000)
#define CONV_W_BRAM_PCIS_5_4 UINT64_C(0x020A4000)
#define CONV_W_BRAM_PCIS_5_5 UINT64_C(0x020A5000)
#define CONV_W_BRAM_PCIS_5_6 UINT64_C(0x020A6000)
#define CONV_W_BRAM_PCIS_5_7 UINT64_C(0x020A7000)
#define CONV_W_BRAM_PCIS_5_8 UINT64_C(0x020A8000)
#define CONV_W_BRAM_PCIS_5_9 UINT64_C(0x020A9000)
#define CONV_W_BRAM_PCIS_5_10 UINT64_C(0x020AA000)
#define CONV_W_BRAM_PCIS_5_11 UINT64_C(0x020AB000)
#define CONV_W_BRAM_PCIS_5_12 UINT64_C(0x020AC000)
#define CONV_W_BRAM_PCIS_5_13 UINT64_C(0x020AD000)
#define CONV_W_BRAM_PCIS_5_14 UINT64_C(0x020AE000)
#define CONV_W_BRAM_PCIS_5_15 UINT64_C(0x020AF000)
#define CONV_W_BRAM_PCIS_5_16 UINT64_C(0x020B0000)
#define CONV_W_BRAM_PCIS_5_17 UINT64_C(0x020B1000)
#define CONV_W_BRAM_PCIS_5_18 UINT64_C(0x020B2000)
#define CONV_W_BRAM_PCIS_5_19 UINT64_C(0x020B3000)
#define CONV_W_BRAM_PCIS_5_20 UINT64_C(0x020B4000)
#define CONV_W_BRAM_PCIS_5_21 UINT64_C(0x020B5000)
#define CONV_W_BRAM_PCIS_5_22 UINT64_C(0x020B6000)
#define CONV_W_BRAM_PCIS_5_23 UINT64_C(0x020B7000)
#define CONV_W_BRAM_PCIS_5_24 UINT64_C(0x020B8000)
#define CONV_W_BRAM_PCIS_5_25 UINT64_C(0x020B9000)
#define CONV_W_BRAM_PCIS_5_26 UINT64_C(0x020BA000)
#define CONV_W_BRAM_PCIS_5_27 UINT64_C(0x020BB000)
#define CONV_W_BRAM_PCIS_5_28 UINT64_C(0x020BC000)
#define CONV_W_BRAM_PCIS_5_29 UINT64_C(0x020BD000)
#define CONV_W_BRAM_PCIS_5_30 UINT64_C(0x020BE000)
#define CONV_W_BRAM_PCIS_5_31 UINT64_C(0x020BF000)

#define CONV_W_BRAM_PCIS_6_0 UINT64_C(0x020C0000)
#define CONV_W_BRAM_PCIS_6_1 UINT64_C(0x020C1000)
#define CONV_W_BRAM_PCIS_6_2 UINT64_C(0x020C2000)
#define CONV_W_BRAM_PCIS_6_3 UINT64_C(0x020C3000)
#define CONV_W_BRAM_PCIS_6_4 UINT64_C(0x020C4000)
#define CONV_W_BRAM_PCIS_6_5 UINT64_C(0x020C5000)
#define CONV_W_BRAM_PCIS_6_6 UINT64_C(0x020C6000)
#define CONV_W_BRAM_PCIS_6_7 UINT64_C(0x020C7000)
#define CONV_W_BRAM_PCIS_6_8 UINT64_C(0x020C8000)
#define CONV_W_BRAM_PCIS_6_9 UINT64_C(0x020C9000)
#define CONV_W_BRAM_PCIS_6_10 UINT64_C(0x020CA000)
#define CONV_W_BRAM_PCIS_6_11 UINT64_C(0x020CB000)
#define CONV_W_BRAM_PCIS_6_12 UINT64_C(0x020CC000)
#define CONV_W_BRAM_PCIS_6_13 UINT64_C(0x020CD000)
#define CONV_W_BRAM_PCIS_6_14 UINT64_C(0x020CE000)
#define CONV_W_BRAM_PCIS_6_15 UINT64_C(0x020CF000)
#define CONV_W_BRAM_PCIS_6_16 UINT64_C(0x020D0000)
#define CONV_W_BRAM_PCIS_6_17 UINT64_C(0x020D1000)
#define CONV_W_BRAM_PCIS_6_18 UINT64_C(0x020D2000)
#define CONV_W_BRAM_PCIS_6_19 UINT64_C(0x020D3000)
#define CONV_W_BRAM_PCIS_6_20 UINT64_C(0x020D4000)
#define CONV_W_BRAM_PCIS_6_21 UINT64_C(0x020D5000)
#define CONV_W_BRAM_PCIS_6_22 UINT64_C(0x020D6000)
#define CONV_W_BRAM_PCIS_6_23 UINT64_C(0x020D7000)
#define CONV_W_BRAM_PCIS_6_24 UINT64_C(0x020D8000)
#define CONV_W_BRAM_PCIS_6_25 UINT64_C(0x020D9000)
#define CONV_W_BRAM_PCIS_6_26 UINT64_C(0x020DA000)
#define CONV_W_BRAM_PCIS_6_27 UINT64_C(0x020DB000)
#define CONV_W_BRAM_PCIS_6_28 UINT64_C(0x020DC000)
#define CONV_W_BRAM_PCIS_6_29 UINT64_C(0x020DD000)
#define CONV_W_BRAM_PCIS_6_30 UINT64_C(0x020DE000)
#define CONV_W_BRAM_PCIS_6_31 UINT64_C(0x020DF000)

#define CONV_W_BRAM_PCIS_7_0 UINT64_C(0x020E0000)
#define CONV_W_BRAM_PCIS_7_1 UINT64_C(0x020E1000)
#define CONV_W_BRAM_PCIS_7_2 UINT64_C(0x020E2000)
#define CONV_W_BRAM_PCIS_7_3 UINT64_C(0x020E3000)
#define CONV_W_BRAM_PCIS_7_4 UINT64_C(0x020E4000)
#define CONV_W_BRAM_PCIS_7_5 UINT64_C(0x020E5000)
#define CONV_W_BRAM_PCIS_7_6 UINT64_C(0x020E6000)
#define CONV_W_BRAM_PCIS_7_7 UINT64_C(0x020E7000)
#define CONV_W_BRAM_PCIS_7_8 UINT64_C(0x020E8000)
#define CONV_W_BRAM_PCIS_7_9 UINT64_C(0x020E9000)
#define CONV_W_BRAM_PCIS_7_10 UINT64_C(0x020EA000)
#define CONV_W_BRAM_PCIS_7_11 UINT64_C(0x020EB000)
#define CONV_W_BRAM_PCIS_7_12 UINT64_C(0x020EC000)
#define CONV_W_BRAM_PCIS_7_13 UINT64_C(0x020ED000)
#define CONV_W_BRAM_PCIS_7_14 UINT64_C(0x020EE000)
#define CONV_W_BRAM_PCIS_7_15 UINT64_C(0x020EF000)
#define CONV_W_BRAM_PCIS_7_16 UINT64_C(0x020F0000)
#define CONV_W_BRAM_PCIS_7_17 UINT64_C(0x020F1000)
#define CONV_W_BRAM_PCIS_7_18 UINT64_C(0x020F2000)
#define CONV_W_BRAM_PCIS_7_19 UINT64_C(0x020F3000)
#define CONV_W_BRAM_PCIS_7_20 UINT64_C(0x020F4000)
#define CONV_W_BRAM_PCIS_7_21 UINT64_C(0x020F5000)
#define CONV_W_BRAM_PCIS_7_22 UINT64_C(0x020F6000)
#define CONV_W_BRAM_PCIS_7_23 UINT64_C(0x020F7000)
#define CONV_W_BRAM_PCIS_7_24 UINT64_C(0x020F8000)
#define CONV_W_BRAM_PCIS_7_25 UINT64_C(0x020F9000)
#define CONV_W_BRAM_PCIS_7_26 UINT64_C(0x020FA000)
#define CONV_W_BRAM_PCIS_7_27 UINT64_C(0x020FB000)
#define CONV_W_BRAM_PCIS_7_28 UINT64_C(0x020FC000)
#define CONV_W_BRAM_PCIS_7_29 UINT64_C(0x020FD000)
#define CONV_W_BRAM_PCIS_7_30 UINT64_C(0x020FE000)
#define CONV_W_BRAM_PCIS_7_31 UINT64_C(0x020FF000)
// conv bias port --axi_bram_ctrl_20{0xCA00_0000,0xCA00_1000) (4k)
#define CONV_B_BRAM_PCIS UINT64_C(0xC0000000)
// temp out 0 1 port --axi_bram_ctrl_3->10 [0xC200_0000, 0xC204_0000) 8 bram controller (32k/per)
#define BUF_IN_0_0 UINT64_C(0x02000000)
#define BUF_IN_0_1 UINT64_C(0x02001000)
#define BUF_IN_0_2 UINT64_C(0x02002000)
#define BUF_IN_0_3 UINT64_C(0x02003000)
#define BUF_IN_0_4 UINT64_C(0x02004000)
#define BUF_IN_0_5 UINT64_C(0x02005000)
#define BUF_IN_0_6 UINT64_C(0x02006000)
#define BUF_IN_0_7 UINT64_C(0x02007000)

#define BUF_IN_1_0 UINT64_C(0x02008000)
#define BUF_IN_1_1 UINT64_C(0x02009000)
#define BUF_IN_1_2 UINT64_C(0x0200A000)
#define BUF_IN_1_3 UINT64_C(0x0200B000)
#define BUF_IN_1_4 UINT64_C(0x0200C000)
#define BUF_IN_1_5 UINT64_C(0x0200D000)
#define BUF_IN_1_6 UINT64_C(0x0200E000)
#define BUF_IN_1_7 UINT64_C(0x0200F000)
// temp out 1 1 port --axi_bram_ctrl_11->18 [0xC600_0000, 0xC600_8000) 8 bram controller (4k/per)
#define BUF_OUT_1_0 UINT64_C(0x02100000)
#define BUF_OUT_1_1 UINT64_C(0x02101000)
#define BUF_OUT_1_2 UINT64_C(0x02102000)
#define BUF_OUT_1_3 UINT64_C(0x02103000)
#define BUF_OUT_1_4 UINT64_C(0x02104000)
#define BUF_OUT_1_5 UINT64_C(0x02105000)
#define BUF_OUT_1_6 UINT64_C(0x02106000)
#define BUF_OUT_1_7 UINT64_C(0x02107000)
#define BUF_OUT_1_8 UINT64_C(0x02108000)
#define BUF_OUT_1_9 UINT64_C(0x02109000)
#define BUF_OUT_1_10 UINT64_C(0x0210A000)
#define BUF_OUT_1_11 UINT64_C(0x0210B000)
#define BUF_OUT_1_12 UINT64_C(0x0210C000)
#define BUF_OUT_1_13 UINT64_C(0x0210D000)
#define BUF_OUT_1_14 UINT64_C(0x0210E000)
#define BUF_OUT_1_15 UINT64_C(0x0210F000)

#define BUF_OUT_2_0 UINT64_C(0x04020000)
#define BUF_OUT_2_1 UINT64_C(0x04021000)
#define BUF_OUT_2_2 UINT64_C(0x04022000)
#define BUF_OUT_2_3 UINT64_C(0x04023000)
#define BUF_OUT_2_4 UINT64_C(0x04024000)
#define BUF_OUT_2_5 UINT64_C(0x04025000)
#define BUF_OUT_2_6 UINT64_C(0x04026000)
#define BUF_OUT_2_7 UINT64_C(0x04027000)
#define BUF_OUT_2_8 UINT64_C(0x04028000)
#define BUF_OUT_2_9 UINT64_C(0x04029000)
#define BUF_OUT_2_10 UINT64_C(0x0402A000)
#define BUF_OUT_2_11 UINT64_C(0x0402B000)
#define BUF_OUT_2_12 UINT64_C(0x0402C000)
#define BUF_OUT_2_13 UINT64_C(0x0402D000)
#define BUF_OUT_2_14 UINT64_C(0x0402E000)
#define BUF_OUT_2_15 UINT64_C(0x0402F000)
// ctrl_cmd_in_port -- axi_bram_ctrl_0 (4k)
//#define CTRL_PARAMS UINT64_C(0x00400000)
// conv_param_in_port -- axi_bram_ctrl_1 (4k)
#define CONV_CORE_PARAM UINT64_C(0xC2000000)
//// pool_param_in_port_a -- axi_bram_ctrl_2 (4k)
#define POOL_CORE_PARAM UINT64_C(0xC4000000)

#endif

