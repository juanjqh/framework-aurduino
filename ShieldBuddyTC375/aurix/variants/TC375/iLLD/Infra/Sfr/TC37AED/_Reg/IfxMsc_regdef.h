/**
 * \file IfxMsc_regdef.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37XED_TS_V2.5.1.R0
 * Specification: TC3xx Target Specification.V2.5.1
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxSfr_Msc_Registers Msc Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Msc_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Msc_Registers
 * 
 * \defgroup IfxSfr_Msc_Registers_union Register unions
 * \ingroup IfxSfr_Msc_Registers
 * 
 * \defgroup IfxSfr_Msc_Registers_struct Memory map
 * \ingroup IfxSfr_Msc_Registers
 */
#ifndef IFXMSC_REGDEF_H
#define IFXMSC_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Msc_Registers_Bitfields
 * \{  */
/** \brief Asynchronous Block Configuration Register */
typedef struct _Ifx_MSC_ABC_Bits
{
    Ifx_UReg_32Bit LOW:4;             /**< \brief [3:0] Duration of the Low Phase of the Shift Clock - LOW (rw) */
    Ifx_UReg_32Bit HIGH:4;            /**< \brief [7:4] Duration of the High Phase of the Shift Clock - HIGH (rw) */
    Ifx_UReg_32Bit OIP:2;             /**< \brief [9:8] Overflow Interrupt Node Pointer - OIP (rw) */
    Ifx_UReg_32Bit OASR:1;            /**< \brief [10:10] Overflow Alternate Service Request - OASR (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit OVF:1;             /**< \brief [12:12] Overflow Flag - OVF (r) */
    Ifx_UReg_32Bit OFM:2;             /**< \brief [14:13] Overflow Flag Modify - OFM (w) */
    Ifx_UReg_32Bit OIE:1;             /**< \brief [15:15] Overflow Interrupt Enable - OIE (rw) */
    Ifx_UReg_32Bit NDA:3;             /**< \brief [18:16] N Divider ABRA - NDA (rw) */
    Ifx_UReg_32Bit UIP:2;             /**< \brief [20:19] Underflow Interrupt Node Pointer - UIP (rw) */
    Ifx_UReg_32Bit UASR:1;            /**< \brief [21:21] Underflow Alternate Service Request - UASR (rw) */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit UNF:1;             /**< \brief [23:23] Underflow Flag - UNF (r) */
    Ifx_UReg_32Bit UFM:2;             /**< \brief [25:24] Underflow Flag Modify - UFM (w) */
    Ifx_UReg_32Bit UIE:1;             /**< \brief [26:26] Underflow Interrupt Enable - UIE (rw) */
    Ifx_UReg_32Bit CLKSEL:3;          /**< \brief [29:27] Clock Select - CLKSEL (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit ABB:1;             /**< \brief [31:31] Asynchronous Block Bypass - ABB (rw) */
} Ifx_MSC_ABC_Bits;

/** \brief Access Enable Register 0 */
typedef struct _Ifx_MSC_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID 0 - EN0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID 1 - EN1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID 2 - EN2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID 3 - EN3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID 4 - EN4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID 5 - EN5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID 6 - EN6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID 7 - EN7 (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID 8 - EN8 (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID 9 - EN9 (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID 10 - EN10 (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID 11 - EN11 (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID 12 - EN12 (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID 13 - EN13 (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID 14 - EN14 (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID 15 - EN15 (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID 16 - EN16 (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID 17 - EN17 (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID 18 - EN18 (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID 19 - EN19 (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID 20 - EN20 (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID 21 - EN21 (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID 22 - EN22 (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID 23 - EN23 (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID 24 - EN24 (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID 25 - EN25 (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID 26 - EN26 (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID 27 - EN27 (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID 28 - EN28 (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID 29 - EN29 (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID 30 - EN30 (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID 31 - EN31 (rw) */
} Ifx_MSC_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_MSC_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_MSC_ACCEN1_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_MSC_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_MSC_CLC_Bits;

/** \brief Downstream Command Register */
typedef struct _Ifx_MSC_DC_Bits
{
    Ifx_UReg_32Bit DCL:16;            /**< \brief [15:0] Downstream Command for SRL Shift Register - DCL (rw) */
    Ifx_UReg_32Bit DCH:16;            /**< \brief [31:16] Downstream Command for SRH Shift Register - DCH (rw) */
} Ifx_MSC_DC_Bits;

/** \brief Downstream Command Extension Register */
typedef struct _Ifx_MSC_DCE_Bits
{
    Ifx_UReg_32Bit DCEH:32;           /**< \brief [31:0] Downstream Command Extension for SRH Shift Register - DCEH (rw) */
} Ifx_MSC_DCE_Bits;

/** \brief Downstream Command Mirror Register */
typedef struct _Ifx_MSC_DCM_Bits
{
    Ifx_UReg_32Bit DCLM:16;           /**< \brief [15:0] Downstream Command Mirror of the DC.DCL Bit Field - DCLM (w) */
    Ifx_UReg_32Bit DCHM:16;           /**< \brief [31:16] Downstream Command Mirror of the DC.DCH Bit Field - DCHM (w) */
} Ifx_MSC_DCM_Bits;

/** \brief Downstream Data Register */
typedef struct _Ifx_MSC_DD_Bits
{
    Ifx_UReg_32Bit DDL:16;            /**< \brief [15:0] Downstream Data for SRL Shift Register - DDL (rw) */
    Ifx_UReg_32Bit DDH:16;            /**< \brief [31:16] Downstream Data for SRH Shift Register - DDH (rw) */
} Ifx_MSC_DD_Bits;

/** \brief Downstream Data Extension Register */
typedef struct _Ifx_MSC_DDE_Bits
{
    Ifx_UReg_32Bit DDLE:16;           /**< \brief [15:0] Downstream Data Extension for SRL Shift Register - DDLE (rw) */
    Ifx_UReg_32Bit DDHE:16;           /**< \brief [31:16] Downstream Data Extension for SRH Shift Register - DDHE (rw) */
} Ifx_MSC_DDE_Bits;

/** \brief Downstream Data Mirror Register */
typedef struct _Ifx_MSC_DDM_Bits
{
    Ifx_UReg_32Bit DDLM:16;           /**< \brief [15:0] Downstream Data Mirror for SRL Shift Register - DDLM (w) */
    Ifx_UReg_32Bit DDHM:16;           /**< \brief [31:16] Downstream Data Mirror for SRH Shift Register - DDHM (w) */
} Ifx_MSC_DDM_Bits;

/** \brief Downstream Control Register */
typedef struct _Ifx_MSC_DSC_Bits
{
    Ifx_UReg_32Bit TM:1;              /**< \brief [0:0] Transmission Mode - TM (rw) */
    Ifx_UReg_32Bit CP:1;              /**< \brief [1:1] Command Pending - CP (rh) */
    Ifx_UReg_32Bit DP:1;              /**< \brief [2:2] Data Pending - DP (rh) */
    Ifx_UReg_32Bit NDBL:5;            /**< \brief [7:3] Number of SRL Bits Shifted at Data Frames - NDBL (rw) */
    Ifx_UReg_32Bit NDBH:5;            /**< \brief [12:8] Number of SRH Bits Shifted at Data Frames - NDBH (rw) */
    Ifx_UReg_32Bit ENSELL:1;          /**< \brief [13:13] Enable SRL Active Phase Selection Bit - ENSELL (rw) */
    Ifx_UReg_32Bit ENSELH:1;          /**< \brief [14:14] Enable SRH Active Phase Selection Bit - ENSELH (rw) */
    Ifx_UReg_32Bit DSDIS:1;           /**< \brief [15:15] Downstream Disable - DSDIS (rh) */
    Ifx_UReg_32Bit NBC:6;             /**< \brief [21:16] Number of Bits Shifted at Command Frames - NBC (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit PPD:5;             /**< \brief [28:24] Passive Phase Length at Data Frames - PPD (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_MSC_DSC_Bits;

/** \brief Downstream Control Enhanced Register 1 */
typedef struct _Ifx_MSC_DSCE_Bits
{
    Ifx_UReg_32Bit NDBHE:1;           /**< \brief [0:0] Number of SRH Bits Shifted at Data Frames Extension - NDBHE (rw) */
    Ifx_UReg_32Bit NDBLE:1;           /**< \brief [1:1] Number of SRL Bits Shifted at Data Frames Extension - NDBLE (rw) */
    Ifx_UReg_32Bit reserved_2:12;     /**< \brief [13:2] \internal Reserved */
    Ifx_UReg_32Bit EXEN:1;            /**< \brief [14:14] Extension Enable - EXEN (rw) */
    Ifx_UReg_32Bit CCF:1;             /**< \brief [15:15] Command-Command Flag - CCF (rh) */
    Ifx_UReg_32Bit INJENP0:1;         /**< \brief [16:16] Injection Enable of the Pin 0 Signal - INJENP0 (rw) */
    Ifx_UReg_32Bit INJPOSP0:6;        /**< \brief [22:17] Injection Position of the Pin 0 Signal - INJPOSP0 (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit INJENP1:1;         /**< \brief [24:24] Injection Enable of the Pin 1 Signal - INJENP1 (rw) */
    Ifx_UReg_32Bit INJPOSP1:6;        /**< \brief [30:25] Injection Position of the Pin 1 Signal - INJPOSP1 (rw) */
    Ifx_UReg_32Bit CDCM:1;            /**< \brief [31:31] Command-Data-Command in Data Repetition Mode - CDCM (rw) */
} Ifx_MSC_DSCE_Bits;

/** \brief Downstream Select Data Source High Register */
typedef struct _Ifx_MSC_DSDSH_Bits
{
    Ifx_UReg_32Bit SH0:2;             /**< \brief [1:0] Select Source for SRH - SH0 (rw) */
    Ifx_UReg_32Bit SH1:2;             /**< \brief [3:2] Select Source for SRH - SH1 (rw) */
    Ifx_UReg_32Bit SH2:2;             /**< \brief [5:4] Select Source for SRH - SH2 (rw) */
    Ifx_UReg_32Bit SH3:2;             /**< \brief [7:6] Select Source for SRH - SH3 (rw) */
    Ifx_UReg_32Bit SH4:2;             /**< \brief [9:8] Select Source for SRH - SH4 (rw) */
    Ifx_UReg_32Bit SH5:2;             /**< \brief [11:10] Select Source for SRH - SH5 (rw) */
    Ifx_UReg_32Bit SH6:2;             /**< \brief [13:12] Select Source for SRH - SH6 (rw) */
    Ifx_UReg_32Bit SH7:2;             /**< \brief [15:14] Select Source for SRH - SH7 (rw) */
    Ifx_UReg_32Bit SH8:2;             /**< \brief [17:16] Select Source for SRH - SH8 (rw) */
    Ifx_UReg_32Bit SH9:2;             /**< \brief [19:18] Select Source for SRH - SH9 (rw) */
    Ifx_UReg_32Bit SH10:2;            /**< \brief [21:20] Select Source for SRH - SH10 (rw) */
    Ifx_UReg_32Bit SH11:2;            /**< \brief [23:22] Select Source for SRH - SH11 (rw) */
    Ifx_UReg_32Bit SH12:2;            /**< \brief [25:24] Select Source for SRH - SH12 (rw) */
    Ifx_UReg_32Bit SH13:2;            /**< \brief [27:26] Select Source for SRH - SH13 (rw) */
    Ifx_UReg_32Bit SH14:2;            /**< \brief [29:28] Select Source for SRH - SH14 (rw) */
    Ifx_UReg_32Bit SH15:2;            /**< \brief [31:30] Select Source for SRH - SH15 (rw) */
} Ifx_MSC_DSDSH_Bits;

/** \brief Downstream Select Data Source High Extension Register */
typedef struct _Ifx_MSC_DSDSHE_Bits
{
    Ifx_UReg_32Bit SH16:2;            /**< \brief [1:0] Select Source for SRH - SH16 (rw) */
    Ifx_UReg_32Bit SH17:2;            /**< \brief [3:2] Select Source for SRH - SH17 (rw) */
    Ifx_UReg_32Bit SH18:2;            /**< \brief [5:4] Select Source for SRH - SH18 (rw) */
    Ifx_UReg_32Bit SH19:2;            /**< \brief [7:6] Select Source for SRH - SH19 (rw) */
    Ifx_UReg_32Bit SH20:2;            /**< \brief [9:8] Select Source for SRH - SH20 (rw) */
    Ifx_UReg_32Bit SH21:2;            /**< \brief [11:10] Select Source for SRH - SH21 (rw) */
    Ifx_UReg_32Bit SH22:2;            /**< \brief [13:12] Select Source for SRH - SH22 (rw) */
    Ifx_UReg_32Bit SH23:2;            /**< \brief [15:14] Select Source for SRH - SH23 (rw) */
    Ifx_UReg_32Bit SH24:2;            /**< \brief [17:16] Select Source for SRH - SH24 (rw) */
    Ifx_UReg_32Bit SH25:2;            /**< \brief [19:18] Select Source for SRH - SH25 (rw) */
    Ifx_UReg_32Bit SH26:2;            /**< \brief [21:20] Select Source for SRH - SH26 (rw) */
    Ifx_UReg_32Bit SH27:2;            /**< \brief [23:22] Select Source for SRH - SH27 (rw) */
    Ifx_UReg_32Bit SH28:2;            /**< \brief [25:24] Select Source for SRH - SH28 (rw) */
    Ifx_UReg_32Bit SH29:2;            /**< \brief [27:26] Select Source for SRH - SH29 (rw) */
    Ifx_UReg_32Bit SH30:2;            /**< \brief [29:28] Select Source for SRH - SH30 (rw) */
    Ifx_UReg_32Bit SH31:2;            /**< \brief [31:30] Select Source for SRH - SH31 (rw) */
} Ifx_MSC_DSDSHE_Bits;

/** \brief Downstream Select Data Source Low Register */
typedef struct _Ifx_MSC_DSDSL_Bits
{
    Ifx_UReg_32Bit SL0:2;             /**< \brief [1:0] Select Source for SRL - SL0 (rw) */
    Ifx_UReg_32Bit SL1:2;             /**< \brief [3:2] Select Source for SRL - SL1 (rw) */
    Ifx_UReg_32Bit SL2:2;             /**< \brief [5:4] Select Source for SRL - SL2 (rw) */
    Ifx_UReg_32Bit SL3:2;             /**< \brief [7:6] Select Source for SRL - SL3 (rw) */
    Ifx_UReg_32Bit SL4:2;             /**< \brief [9:8] Select Source for SRL - SL4 (rw) */
    Ifx_UReg_32Bit SL5:2;             /**< \brief [11:10] Select Source for SRL - SL5 (rw) */
    Ifx_UReg_32Bit SL6:2;             /**< \brief [13:12] Select Source for SRL - SL6 (rw) */
    Ifx_UReg_32Bit SL7:2;             /**< \brief [15:14] Select Source for SRL - SL7 (rw) */
    Ifx_UReg_32Bit SL8:2;             /**< \brief [17:16] Select Source for SRL - SL8 (rw) */
    Ifx_UReg_32Bit SL9:2;             /**< \brief [19:18] Select Source for SRL - SL9 (rw) */
    Ifx_UReg_32Bit SL10:2;            /**< \brief [21:20] Select Source for SRL - SL10 (rw) */
    Ifx_UReg_32Bit SL11:2;            /**< \brief [23:22] Select Source for SRL - SL11 (rw) */
    Ifx_UReg_32Bit SL12:2;            /**< \brief [25:24] Select Source for SRL - SL12 (rw) */
    Ifx_UReg_32Bit SL13:2;            /**< \brief [27:26] Select Source for SRL - SL13 (rw) */
    Ifx_UReg_32Bit SL14:2;            /**< \brief [29:28] Select Source for SRL - SL14 (rw) */
    Ifx_UReg_32Bit SL15:2;            /**< \brief [31:30] Select Source for SRL - SL15 (rw) */
} Ifx_MSC_DSDSL_Bits;

/** \brief Downstream Select Data Source Low Extension Register */
typedef struct _Ifx_MSC_DSDSLE_Bits
{
    Ifx_UReg_32Bit SL16:2;            /**< \brief [1:0] Select Source for SRL - SL16 (rw) */
    Ifx_UReg_32Bit SL17:2;            /**< \brief [3:2] Select Source for SRL - SL17 (rw) */
    Ifx_UReg_32Bit SL18:2;            /**< \brief [5:4] Select Source for SRL - SL18 (rw) */
    Ifx_UReg_32Bit SL19:2;            /**< \brief [7:6] Select Source for SRL - SL19 (rw) */
    Ifx_UReg_32Bit SL20:2;            /**< \brief [9:8] Select Source for SRL - SL20 (rw) */
    Ifx_UReg_32Bit SL21:2;            /**< \brief [11:10] Select Source for SRL - SL21 (rw) */
    Ifx_UReg_32Bit SL22:2;            /**< \brief [13:12] Select Source for SRL - SL22 (rw) */
    Ifx_UReg_32Bit SL23:2;            /**< \brief [15:14] Select Source for SRL - SL23 (rw) */
    Ifx_UReg_32Bit SL24:2;            /**< \brief [17:16] Select Source for SRL - SL24 (rw) */
    Ifx_UReg_32Bit SL25:2;            /**< \brief [19:18] Select Source for SRL - SL25 (rw) */
    Ifx_UReg_32Bit SL26:2;            /**< \brief [21:20] Select Source for SRL - SL26 (rw) */
    Ifx_UReg_32Bit SL27:2;            /**< \brief [23:22] Select Source for SRL - SL27 (rw) */
    Ifx_UReg_32Bit SL28:2;            /**< \brief [25:24] Select Source for SRL - SL28 (rw) */
    Ifx_UReg_32Bit SL29:2;            /**< \brief [27:26] Select Source for SRL - SL29 (rw) */
    Ifx_UReg_32Bit SL30:2;            /**< \brief [29:28] Select Source for SRL - SL30 (rw) */
    Ifx_UReg_32Bit SL31:2;            /**< \brief [31:30] Select Source for SRL - SL31 (rw) */
} Ifx_MSC_DSDSLE_Bits;

/** \brief Downstream Status Register */
typedef struct _Ifx_MSC_DSS_Bits
{
    Ifx_UReg_32Bit PFC:4;             /**< \brief [3:0] Passive Time Frame Counter - PFC (rh) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit NPTF:4;            /**< \brief [11:8] Number Of Passive Time Frames - NPTF (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit DC:8;              /**< \brief [23:16] Downstream Counter - DC (rh) */
    Ifx_UReg_32Bit DFA:1;             /**< \brief [24:24] Data Frame Active - DFA (rh) */
    Ifx_UReg_32Bit CFA:1;             /**< \brief [25:25] Command Frame Active - CFA (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_MSC_DSS_Bits;

/** \brief Downstream Timing Extension Register */
typedef struct _Ifx_MSC_DSTE_Bits
{
    Ifx_UReg_32Bit PPDE:2;            /**< \brief [1:0] Passive Phase Length at Data Frames Extension - PPDE (rw) */
    Ifx_UReg_32Bit PPCE:6;            /**< \brief [7:2] Passive Phase Length at Control Frames Extension - PPCE (rw) */
    Ifx_UReg_32Bit NDD:4;             /**< \brief [11:8] N Divider Downstream - NDD (rw) */
    Ifx_UReg_32Bit PPCEM:1;           /**< \brief [12:12] PPCE Extension Bit on the MSB Side - PPCEM (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit FM:1;              /**< \brief [16:16] Fast Mode - FM (rw) */
    Ifx_UReg_32Bit reserved_17:11;    /**< \brief [27:17] \internal Reserved */
    Ifx_UReg_32Bit CX:1;              /**< \brief [28:28] Command Extension Mode - CX (rw) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit UL1:1;             /**< \brief [31:31] Unlock CX and FM for one write access - UL1 (w) */
} Ifx_MSC_DSTE_Bits;

/** \brief Emergency Stop Register */
typedef struct _Ifx_MSC_ESR_Bits
{
    Ifx_UReg_32Bit ENL0:1;            /**< \brief [0:0] Emergency Stop Enable for Bit 0 in SRL - ENL0 (rw) */
    Ifx_UReg_32Bit ENL1:1;            /**< \brief [1:1] Emergency Stop Enable for Bit 1 in SRL - ENL1 (rw) */
    Ifx_UReg_32Bit ENL2:1;            /**< \brief [2:2] Emergency Stop Enable for Bit 2 in SRL - ENL2 (rw) */
    Ifx_UReg_32Bit ENL3:1;            /**< \brief [3:3] Emergency Stop Enable for Bit 3 in SRL - ENL3 (rw) */
    Ifx_UReg_32Bit ENL4:1;            /**< \brief [4:4] Emergency Stop Enable for Bit 4 in SRL - ENL4 (rw) */
    Ifx_UReg_32Bit ENL5:1;            /**< \brief [5:5] Emergency Stop Enable for Bit 5 in SRL - ENL5 (rw) */
    Ifx_UReg_32Bit ENL6:1;            /**< \brief [6:6] Emergency Stop Enable for Bit 6 in SRL - ENL6 (rw) */
    Ifx_UReg_32Bit ENL7:1;            /**< \brief [7:7] Emergency Stop Enable for Bit 7 in SRL - ENL7 (rw) */
    Ifx_UReg_32Bit ENL8:1;            /**< \brief [8:8] Emergency Stop Enable for Bit 8 in SRL - ENL8 (rw) */
    Ifx_UReg_32Bit ENL9:1;            /**< \brief [9:9] Emergency Stop Enable for Bit 9 in SRL - ENL9 (rw) */
    Ifx_UReg_32Bit ENL10:1;           /**< \brief [10:10] Emergency Stop Enable for Bit 10 in SRL - ENL10 (rw) */
    Ifx_UReg_32Bit ENL11:1;           /**< \brief [11:11] Emergency Stop Enable for Bit 11 in SRL - ENL11 (rw) */
    Ifx_UReg_32Bit ENL12:1;           /**< \brief [12:12] Emergency Stop Enable for Bit 12 in SRL - ENL12 (rw) */
    Ifx_UReg_32Bit ENL13:1;           /**< \brief [13:13] Emergency Stop Enable for Bit 13 in SRL - ENL13 (rw) */
    Ifx_UReg_32Bit ENL14:1;           /**< \brief [14:14] Emergency Stop Enable for Bit 14 in SRL - ENL14 (rw) */
    Ifx_UReg_32Bit ENL15:1;           /**< \brief [15:15] Emergency Stop Enable for Bit 15 in SRL - ENL15 (rw) */
    Ifx_UReg_32Bit ENH0:1;            /**< \brief [16:16] Emergency Stop Enable for Bit 0 in SRH - ENH0 (rw) */
    Ifx_UReg_32Bit ENH1:1;            /**< \brief [17:17] Emergency Stop Enable for Bit 1 in SRH - ENH1 (rw) */
    Ifx_UReg_32Bit ENH2:1;            /**< \brief [18:18] Emergency Stop Enable for Bit 2 in SRH - ENH2 (rw) */
    Ifx_UReg_32Bit ENH3:1;            /**< \brief [19:19] Emergency Stop Enable for Bit 3 in SRH - ENH3 (rw) */
    Ifx_UReg_32Bit ENH4:1;            /**< \brief [20:20] Emergency Stop Enable for Bit 4 in SRH - ENH4 (rw) */
    Ifx_UReg_32Bit ENH5:1;            /**< \brief [21:21] Emergency Stop Enable for Bit 5 in SRH - ENH5 (rw) */
    Ifx_UReg_32Bit ENH6:1;            /**< \brief [22:22] Emergency Stop Enable for Bit 6 in SRH - ENH6 (rw) */
    Ifx_UReg_32Bit ENH7:1;            /**< \brief [23:23] Emergency Stop Enable for Bit 7 in SRH - ENH7 (rw) */
    Ifx_UReg_32Bit ENH8:1;            /**< \brief [24:24] Emergency Stop Enable for Bit 8 in SRH - ENH8 (rw) */
    Ifx_UReg_32Bit ENH9:1;            /**< \brief [25:25] Emergency Stop Enable for Bit 9 in SRH - ENH9 (rw) */
    Ifx_UReg_32Bit ENH10:1;           /**< \brief [26:26] Emergency Stop Enable for Bit 10 in SRH - ENH10 (rw) */
    Ifx_UReg_32Bit ENH11:1;           /**< \brief [27:27] Emergency Stop Enable for Bit 11 in SRH - ENH11 (rw) */
    Ifx_UReg_32Bit ENH12:1;           /**< \brief [28:28] Emergency Stop Enable for Bit 12 in SRH - ENH12 (rw) */
    Ifx_UReg_32Bit ENH13:1;           /**< \brief [29:29] Emergency Stop Enable for Bit 13 in SRH - ENH13 (rw) */
    Ifx_UReg_32Bit ENH14:1;           /**< \brief [30:30] Emergency Stop Enable for Bit 14 in SRH - ENH14 (rw) */
    Ifx_UReg_32Bit ENH15:1;           /**< \brief [31:31] Emergency Stop Enable for Bit 15 in SRH - ENH15 (rw) */
} Ifx_MSC_ESR_Bits;

/** \brief Emergency Stop Extension Register */
typedef struct _Ifx_MSC_ESRE_Bits
{
    Ifx_UReg_32Bit ENL16:1;           /**< \brief [0:0] Emergency Stop Enable for Bit 16 in SRL - ENL16 (rw) */
    Ifx_UReg_32Bit ENL17:1;           /**< \brief [1:1] Emergency Stop Enable for Bit 17 in SRL - ENL17 (rw) */
    Ifx_UReg_32Bit ENL18:1;           /**< \brief [2:2] Emergency Stop Enable for Bit 18 in SRL - ENL18 (rw) */
    Ifx_UReg_32Bit ENL19:1;           /**< \brief [3:3] Emergency Stop Enable for Bit 19 in SRL - ENL19 (rw) */
    Ifx_UReg_32Bit ENL20:1;           /**< \brief [4:4] Emergency Stop Enable for Bit 20 in SRL - ENL20 (rw) */
    Ifx_UReg_32Bit ENL21:1;           /**< \brief [5:5] Emergency Stop Enable for Bit 21 in SRL - ENL21 (rw) */
    Ifx_UReg_32Bit ENL22:1;           /**< \brief [6:6] Emergency Stop Enable for Bit 22 in SRL - ENL22 (rw) */
    Ifx_UReg_32Bit ENL23:1;           /**< \brief [7:7] Emergency Stop Enable for Bit 23 in SRL - ENL23 (rw) */
    Ifx_UReg_32Bit ENL24:1;           /**< \brief [8:8] Emergency Stop Enable for Bit 24 in SRL - ENL24 (rw) */
    Ifx_UReg_32Bit ENL25:1;           /**< \brief [9:9] Emergency Stop Enable for Bit 25 in SRL - ENL25 (rw) */
    Ifx_UReg_32Bit ENL26:1;           /**< \brief [10:10] Emergency Stop Enable for Bit 26 in SRL - ENL26 (rw) */
    Ifx_UReg_32Bit ENL27:1;           /**< \brief [11:11] Emergency Stop Enable for Bit 27 in SRL - ENL27 (rw) */
    Ifx_UReg_32Bit ENL28:1;           /**< \brief [12:12] Emergency Stop Enable for Bit 28 in SRL - ENL28 (rw) */
    Ifx_UReg_32Bit ENL29:1;           /**< \brief [13:13] Emergency Stop Enable for Bit 29 in SRL - ENL29 (rw) */
    Ifx_UReg_32Bit ENL30:1;           /**< \brief [14:14] Emergency Stop Enable for Bit 30 in SRL - ENL30 (rw) */
    Ifx_UReg_32Bit ENL31:1;           /**< \brief [15:15] Emergency Stop Enable for Bit 31 in SRL - ENL31 (rw) */
    Ifx_UReg_32Bit ENH16:1;           /**< \brief [16:16] Emergency Stop Enable for Bit 16 in SRH - ENH16 (rw) */
    Ifx_UReg_32Bit ENH17:1;           /**< \brief [17:17] Emergency Stop Enable for Bit 17 in SRH - ENH17 (rw) */
    Ifx_UReg_32Bit ENH18:1;           /**< \brief [18:18] Emergency Stop Enable for Bit 18 in SRH - ENH18 (rw) */
    Ifx_UReg_32Bit ENH19:1;           /**< \brief [19:19] Emergency Stop Enable for Bit 19 in SRH - ENH19 (rw) */
    Ifx_UReg_32Bit ENH20:1;           /**< \brief [20:20] Emergency Stop Enable for Bit 20 in SRH - ENH20 (rw) */
    Ifx_UReg_32Bit ENH21:1;           /**< \brief [21:21] Emergency Stop Enable for Bit 21 in SRH - ENH21 (rw) */
    Ifx_UReg_32Bit ENH22:1;           /**< \brief [22:22] Emergency Stop Enable for Bit 22 in SRH - ENH22 (rw) */
    Ifx_UReg_32Bit ENH23:1;           /**< \brief [23:23] Emergency Stop Enable for Bit 23 in SRH - ENH23 (rw) */
    Ifx_UReg_32Bit ENH24:1;           /**< \brief [24:24] Emergency Stop Enable for Bit 24 in SRH - ENH24 (rw) */
    Ifx_UReg_32Bit ENH25:1;           /**< \brief [25:25] Emergency Stop Enable for Bit 25 in SRH - ENH25 (rw) */
    Ifx_UReg_32Bit ENH26:1;           /**< \brief [26:26] Emergency Stop Enable for Bit 26 in SRH - ENH26 (rw) */
    Ifx_UReg_32Bit ENH27:1;           /**< \brief [27:27] Emergency Stop Enable for Bit 27 in SRH - ENH27 (rw) */
    Ifx_UReg_32Bit ENH28:1;           /**< \brief [28:28] Emergency Stop Enable for Bit 28 in SRH - ENH28 (rw) */
    Ifx_UReg_32Bit ENH29:1;           /**< \brief [29:29] Emergency Stop Enable for Bit 29 in SRH - ENH29 (rw) */
    Ifx_UReg_32Bit ENH30:1;           /**< \brief [30:30] Emergency Stop Enable for Bit 30 in SRH - ENH30 (rw) */
    Ifx_UReg_32Bit ENH31:1;           /**< \brief [31:31] Emergency Stop Enable for Bit 31 in SRH - ENH31 (rw) */
} Ifx_MSC_ESRE_Bits;

/** \brief Fractional Divider Register */
typedef struct _Ifx_MSC_FDR_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:2;     /**< \brief [13:12] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit reserved_26:2;     /**< \brief [27:26] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit ENHW:1;            /**< \brief [30:30] Enable Hardware Clock Control - ENHW (rw) */
    Ifx_UReg_32Bit DISCLK:1;          /**< \brief [31:31] Disable Clock - DISCLK (rwh) */
} Ifx_MSC_FDR_Bits;

/** \brief Interrupt Control Register */
typedef struct _Ifx_MSC_ICR_Bits
{
    Ifx_UReg_32Bit EDIP:2;            /**< \brief [1:0] Data Frame Interrupt Node Pointer - EDIP (rw) */
    Ifx_UReg_32Bit EDIE:2;            /**< \brief [3:2] Data Frame Interrupt Enable - EDIE (rw) */
    Ifx_UReg_32Bit ECIP:2;            /**< \brief [5:4] Command Frame Interrupt Node Pointer - ECIP (rw) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit ECIE:1;            /**< \brief [7:7] Command Frame Interrupt Enable - ECIE (rw) */
    Ifx_UReg_32Bit TFIP:2;            /**< \brief [9:8] Time Frame Interrupt Pointer - TFIP (rw) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit TFIE:1;            /**< \brief [11:11] Time Frame Interrupt Enable - TFIE (rw) */
    Ifx_UReg_32Bit RDIP:2;            /**< \brief [13:12] Receive Data Interrupt Pointer - RDIP (rw) */
    Ifx_UReg_32Bit RDIE:2;            /**< \brief [15:14] Receive Data Interrupt Enable - RDIE (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MSC_ICR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_MSC_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUM:16;         /**< \brief [31:16] Module Number Value - MODNUM (r) */
} Ifx_MSC_ID_Bits;

/** \brief Interrupt Set Clear Register */
typedef struct _Ifx_MSC_ISC_Bits
{
    Ifx_UReg_32Bit CDEDI:1;           /**< \brief [0:0] Clear DEDI Flag - CDEDI (w) */
    Ifx_UReg_32Bit CDECI:1;           /**< \brief [1:1] Clear DECI Flag - CDECI (w) */
    Ifx_UReg_32Bit CDTFI:1;           /**< \brief [2:2] Clear DTFI Flag - CDTFI (w) */
    Ifx_UReg_32Bit CURDI:1;           /**< \brief [3:3] Clear URDI Flag - CURDI (w) */
    Ifx_UReg_32Bit CDP:1;             /**< \brief [4:4] Clear DP Flag - CDP (w) */
    Ifx_UReg_32Bit CCP:1;             /**< \brief [5:5] Clear CP Flag - CCP (w) */
    Ifx_UReg_32Bit CDDIS:1;           /**< \brief [6:6] Clear DSDIS Flag - CDDIS (w) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit SDEDI:1;           /**< \brief [16:16] Set DEDI Flag - SDEDI (w) */
    Ifx_UReg_32Bit SDECI:1;           /**< \brief [17:17] Set DECI Flag - SDECI (w) */
    Ifx_UReg_32Bit SDTFI:1;           /**< \brief [18:18] Set DTFI Flag - SDTFI (w) */
    Ifx_UReg_32Bit SURDI:1;           /**< \brief [19:19] Set URDI Flag - SURDI (w) */
    Ifx_UReg_32Bit SDP:1;             /**< \brief [20:20] Set DP Bit - SDP (w) */
    Ifx_UReg_32Bit SCP:1;             /**< \brief [21:21] Set CP Flag - SCP (w) */
    Ifx_UReg_32Bit SDDIS:1;           /**< \brief [22:22] Set DSDIS Flag - SDDIS (w) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_MSC_ISC_Bits;

/** \brief Interrupt Status Register */
typedef struct _Ifx_MSC_ISR_Bits
{
    Ifx_UReg_32Bit DEDI:1;            /**< \brief [0:0] Data Frame Interrupt Flag - DEDI (rh) */
    Ifx_UReg_32Bit DECI:1;            /**< \brief [1:1] Command Frame Interrupt Flag - DECI (rh) */
    Ifx_UReg_32Bit DTFI:1;            /**< \brief [2:2] Time Frame Interrupt Flag - DTFI (rh) */
    Ifx_UReg_32Bit URDI:1;            /**< \brief [3:3] Receive Data Interrupt Flag - URDI (rh) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_MSC_ISR_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_MSC_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_MSC_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_MSC_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_MSC_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_MSC_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_MSC_KRSTCLR_Bits;

/** \brief Output Control Register */
typedef struct _Ifx_MSC_OCR_Bits
{
    Ifx_UReg_32Bit CLP:1;             /**< \brief [0:0] FCLP Line Polarity - CLP (rw) */
    Ifx_UReg_32Bit SLP:1;             /**< \brief [1:1] SOP Line Polarity - SLP (rw) */
    Ifx_UReg_32Bit CSLP:1;            /**< \brief [2:2] Chip Selection Lines Polarity - CSLP (rw) */
    Ifx_UReg_32Bit ILP:1;             /**< \brief [3:3] SDI Line Polarity - ILP (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit CLKCTRL:1;         /**< \brief [8:8] Clock Control - CLKCTRL (rw) */
    Ifx_UReg_32Bit CSL:2;             /**< \brief [10:9] Chip Enable Selection for ENL - CSL (rw) */
    Ifx_UReg_32Bit CSH:2;             /**< \brief [12:11] Chip Enable Selection for ENH - CSH (rw) */
    Ifx_UReg_32Bit CSC:2;             /**< \brief [14:13] Chip Enable Selection for ENC - CSC (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit SDISEL:3;          /**< \brief [18:16] Serial Data Input Selection - SDISEL (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_MSC_OCR_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_MSC_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_MSC_OCS_Bits;

/** \brief Upstream Data Register ${x} */
typedef struct _Ifx_MSC_UD_Bits
{
    Ifx_UReg_32Bit DATA:8;            /**< \brief [7:0] Received Data - DATA (rh) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit V:1;               /**< \brief [16:16] Valid Bit - V (rh) */
    Ifx_UReg_32Bit P:1;               /**< \brief [17:17] Parity Bit - P (rh) */
    Ifx_UReg_32Bit C:1;               /**< \brief [18:18] Clear Bit - C (w) */
    Ifx_UReg_32Bit LABF:2;            /**< \brief [20:19] Lower Address Bit Field - LABF (rh) */
    Ifx_UReg_32Bit IPF:1;             /**< \brief [21:21] Internal Parity Flag - IPF (rh) */
    Ifx_UReg_32Bit PERR:1;            /**< \brief [22:22] Parity Error - PERR (rh) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_MSC_UD_Bits;

/** \brief Upstream Control Enhanced Register 1 */
typedef struct _Ifx_MSC_USCE_Bits
{
    Ifx_UReg_32Bit USTOPRE:4;         /**< \brief [3:0] Upstream Time-out Prescaler - USTOPRE (rw) */
    Ifx_UReg_32Bit USTOVAL:4;         /**< \brief [7:4] Upstream Time-out Value - USTOVAL (rw) */
    Ifx_UReg_32Bit USTOEN:1;          /**< \brief [8:8] Upstream Time-out Interrupt Enable - USTOEN (rw) */
    Ifx_UReg_32Bit USTF:1;            /**< \brief [9:9] Upstream Time-out Flag - USTF (rh) */
    Ifx_UReg_32Bit USTC:1;            /**< \brief [10:10] Upstream Time-out Clear - USTC (w) */
    Ifx_UReg_32Bit USTS:1;            /**< \brief [11:11] Upstream Time-out Set - USTS (w) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit UTASR:1;           /**< \brief [13:13] Upstream Time-out Alternate Service Request - UTASR (rw) */
    Ifx_UReg_32Bit USTOIP:2;          /**< \brief [15:14] Upstream Time-out Interrupt Node Pointer - USTOIP (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MSC_USCE_Bits;

/** \brief Upstream Status Register */
typedef struct _Ifx_MSC_USR_Bits
{
    Ifx_UReg_32Bit UFT:1;             /**< \brief [0:0] Upstream Channel Frame Type - UFT (rw) */
    Ifx_UReg_32Bit URR:3;             /**< \brief [3:1] Upstream Channel Receiving Rate - URR (rw) */
    Ifx_UReg_32Bit PCTR:1;            /**< \brief [4:4] Parity Control - PCTR (rw) */
    Ifx_UReg_32Bit SRDC:1;            /**< \brief [5:5] Service Request Delay Control - SRDC (rw) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit UC:5;              /**< \brief [20:16] Upstream Counter - UC (rh) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MSC_USR_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_msc_Registers_union
 * \{   */
/** \brief Asynchronous Block Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ABC_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_ABC;

/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_MSC_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_MSC_ACCEN1;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_CLC;

/** \brief Downstream Command Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DC_Bits B;                /**< \brief Bitfield access */
} Ifx_MSC_DC;

/** \brief Downstream Command Extension Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DCE_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_DCE;

/** \brief Downstream Command Mirror Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DCM_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_DCM;

/** \brief Downstream Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DD_Bits B;                /**< \brief Bitfield access */
} Ifx_MSC_DD;

/** \brief Downstream Data Extension Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DDE_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_DDE;

/** \brief Downstream Data Mirror Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DDM_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_DDM;

/** \brief Downstream Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSC_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_DSC;

/** \brief Downstream Control Enhanced Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSCE_Bits B;              /**< \brief Bitfield access */
} Ifx_MSC_DSCE;

/** \brief Downstream Select Data Source High Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSDSH_Bits B;             /**< \brief Bitfield access */
} Ifx_MSC_DSDSH;

/** \brief Downstream Select Data Source High Extension Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSDSHE_Bits B;            /**< \brief Bitfield access */
} Ifx_MSC_DSDSHE;

/** \brief Downstream Select Data Source Low Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSDSL_Bits B;             /**< \brief Bitfield access */
} Ifx_MSC_DSDSL;

/** \brief Downstream Select Data Source Low Extension Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSDSLE_Bits B;            /**< \brief Bitfield access */
} Ifx_MSC_DSDSLE;

/** \brief Downstream Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSS_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_DSS;

/** \brief Downstream Timing Extension Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_DSTE_Bits B;              /**< \brief Bitfield access */
} Ifx_MSC_DSTE;

/** \brief Emergency Stop Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ESR_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_ESR;

/** \brief Emergency Stop Extension Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ESRE_Bits B;              /**< \brief Bitfield access */
} Ifx_MSC_ESRE;

/** \brief Fractional Divider Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_FDR_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_FDR;

/** \brief Interrupt Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ICR_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_ICR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_MSC_ID;

/** \brief Interrupt Set Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ISC_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_ISC;

/** \brief Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_ISR_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_ISR;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_MSC_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_MSC_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_MSC_KRSTCLR;

/** \brief Output Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_OCR_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_OCR;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_OCS_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_OCS;

/** \brief Upstream Data Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_UD_Bits B;                /**< \brief Bitfield access */
} Ifx_MSC_UD;

/** \brief Upstream Control Enhanced Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_USCE_Bits B;              /**< \brief Bitfield access */
} Ifx_MSC_USCE;

/** \brief Upstream Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MSC_USR_Bits B;               /**< \brief Bitfield access */
} Ifx_MSC_USR;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Msc_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief MSC object */
typedef volatile struct _Ifx_MSC
{
       Ifx_MSC_CLC                         CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_MSC_ID                          ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_MSC_FDR                         FDR;                    /**< \brief C, Fractional Divider Register*/
       Ifx_MSC_USR                         USR;                    /**< \brief 10, Upstream Status Register*/
       Ifx_MSC_DSC                         DSC;                    /**< \brief 14, Downstream Control Register*/
       Ifx_MSC_DSS                         DSS;                    /**< \brief 18, Downstream Status Register*/
       Ifx_MSC_DD                          DD;                     /**< \brief 1C, Downstream Data Register*/
       Ifx_MSC_DC                          DC;                     /**< \brief 20, Downstream Command Register*/
       Ifx_MSC_DSDSL                       DSDSL;                  /**< \brief 24, Downstream Select Data Source Low Register*/
       Ifx_MSC_DSDSH                       DSDSH;                  /**< \brief 28, Downstream Select Data Source High Register*/
       Ifx_MSC_ESR                         ESR;                    /**< \brief 2C, Emergency Stop Register*/
       Ifx_MSC_UD                          UD[4];                  /**< \brief 30, Upstream Data Register ${x}*/
       Ifx_MSC_ICR                         ICR;                    /**< \brief 40, Interrupt Control Register*/
       Ifx_MSC_ISR                         ISR;                    /**< \brief 44, Interrupt Status Register*/
       Ifx_MSC_ISC                         ISC;                    /**< \brief 48, Interrupt Set Clear Register*/
       Ifx_MSC_OCR                         OCR;                    /**< \brief 4C, Output Control Register*/
       Ifx_UReg_8Bit                       reserved_50[8];         /**< \brief 50, \internal Reserved */
       Ifx_MSC_DSCE                        DSCE;                   /**< \brief 58, Downstream Control Enhanced Register 1*/
       Ifx_MSC_USCE                        USCE;                   /**< \brief 5C, Upstream Control Enhanced Register 1*/
       Ifx_MSC_DSDSLE                      DSDSLE;                 /**< \brief 60, Downstream Select Data Source Low Extension Register*/
       Ifx_MSC_DSDSHE                      DSDSHE;                 /**< \brief 64, Downstream Select Data Source High Extension Register*/
       Ifx_MSC_ESRE                        ESRE;                   /**< \brief 68, Emergency Stop Extension Register*/
       Ifx_MSC_DSTE                        DSTE;                   /**< \brief 6C, Downstream Timing Extension Register*/
       Ifx_MSC_DDM                         DDM;                    /**< \brief 70, Downstream Data Mirror Register*/
       Ifx_MSC_DDE                         DDE;                    /**< \brief 74, Downstream Data Extension Register*/
       Ifx_MSC_DCM                         DCM;                    /**< \brief 78, Downstream Command Mirror Register*/
       Ifx_MSC_DCE                         DCE;                    /**< \brief 7C, Downstream Command Extension Register*/
       Ifx_MSC_ABC                         ABC;                    /**< \brief 80, Asynchronous Block Configuration Register*/
       Ifx_UReg_8Bit                       reserved_84[100];       /**< \brief 84, \internal Reserved */
       Ifx_MSC_OCS                         OCS;                    /**< \brief E8, OCDS Control and Status*/
       Ifx_MSC_KRSTCLR                     KRSTCLR;                /**< \brief EC, Kernel Reset Status Clear Register*/
       Ifx_MSC_KRST1                       KRST1;                  /**< \brief F0, Kernel Reset Register 1*/
       Ifx_MSC_KRST0                       KRST0;                  /**< \brief F4, Kernel Reset Register 0*/
       Ifx_MSC_ACCEN1                      ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_MSC_ACCEN0                      ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
} Ifx_MSC;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXMSC_REGDEF_H */
