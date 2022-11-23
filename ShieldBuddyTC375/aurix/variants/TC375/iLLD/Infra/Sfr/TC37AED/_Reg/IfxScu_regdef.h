/**
 * \file IfxScu_regdef.h
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
 * \defgroup IfxSfr_Scu_Registers Scu Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Scu_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Scu_Registers
 * 
 * \defgroup IfxSfr_Scu_Registers_union Register unions
 * \ingroup IfxSfr_Scu_Registers
 * 
 * \defgroup IfxSfr_Scu_Registers_struct Memory map
 * \ingroup IfxSfr_Scu_Registers
 */
#ifndef IFXSCU_REGDEF_H
#define IFXSCU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Scu_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 00 */
typedef struct _Ifx_SCU_ACCEN00_Bits
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
} Ifx_SCU_ACCEN00_Bits;

/** \brief Access Enable Register 01 */
typedef struct _Ifx_SCU_ACCEN01_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SCU_ACCEN01_Bits;

/** \brief Access Enable Register 10 */
typedef struct _Ifx_SCU_ACCEN10_Bits
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
} Ifx_SCU_ACCEN10_Bits;

/** \brief Access Enable Register 11 */
typedef struct _Ifx_SCU_ACCEN11_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SCU_ACCEN11_Bits;

/** \brief Application Reset Disable Register */
typedef struct _Ifx_SCU_ARSTDIS_Bits
{
    Ifx_UReg_32Bit STM0DIS:1;         /**< \brief [0:0] STM0 Disable Reset - STM0DIS (rw) */
    Ifx_UReg_32Bit STM1DIS:1;         /**< \brief [1:1] STM1 Disable Reset - STM1DIS (rw) */
    Ifx_UReg_32Bit STM2DIS:1;         /**< \brief [2:2] STM2 Disable Reset - STM2DIS (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_SCU_ARSTDIS_Bits;

/** \brief CCU Clock Control Register 0 */
typedef struct _Ifx_SCU_CCUCON0_Bits
{
    Ifx_UReg_32Bit STMDIV:4;          /**< \brief [3:0] STM Divider Reload Value - STMDIV (rw) */
    Ifx_UReg_32Bit GTMDIV:4;          /**< \brief [7:4] GTM Divider Reload Value - GTMDIV (rw) */
    Ifx_UReg_32Bit SRIDIV:4;          /**< \brief [11:8] SRI Divider Reload Value - SRIDIV (rw) */
    Ifx_UReg_32Bit LPDIV:3;           /**< \brief [14:12] Low Power Divider Reload Value - LPDIV (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit SPBDIV:4;          /**< \brief [19:16] SPB Divider Reload Value - SPBDIV (rw) */
    Ifx_UReg_32Bit BBBDIV:4;          /**< \brief [23:20] BBB Divider Reload Value - BBBDIV (rw) */
    Ifx_UReg_32Bit FSIDIV:2;          /**< \brief [25:24] FSI Divider Reload Value - FSIDIV (rw) */
    Ifx_UReg_32Bit FSI2DIV:2;         /**< \brief [27:26] FSI2 Divider Reload Value - FSI2DIV (rw) */
    Ifx_UReg_32Bit CLKSEL:2;          /**< \brief [29:28] Clock Selection for Source - CLKSEL (rwh) */
    Ifx_UReg_32Bit UP:1;              /**< \brief [30:30] Update Request - UP (w) */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (rh) */
} Ifx_SCU_CCUCON0_Bits;

/** \brief CCU Clock Control Register 1 */
typedef struct _Ifx_SCU_CCUCON1_Bits
{
    Ifx_UReg_32Bit MCANDIV:4;         /**< \brief [3:0] MCAN Divider Reload Value - MCANDIV (rw) */
    Ifx_UReg_32Bit CLKSELMCAN:2;      /**< \brief [5:4] Clock Selection for MCAN - CLKSELMCAN (rw) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit PLL1DIVDIS:1;      /**< \brief [7:7] Divider Disable for fPLL1 - PLL1DIVDIS (rw) */
    Ifx_UReg_32Bit I2CDIV:4;          /**< \brief [11:8] I2C Divider Reload Value - I2CDIV (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit MSCDIV:4;          /**< \brief [19:16] MSC Divider Reload Value - MSCDIV (rw) */
    Ifx_UReg_32Bit CLKSELMSC:2;       /**< \brief [21:20] Clock Selection for MSC - CLKSELMSC (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit QSPIDIV:4;         /**< \brief [27:24] QSPI Divider Reload Value - QSPIDIV (rw) */
    Ifx_UReg_32Bit CLKSELQSPI:2;      /**< \brief [29:28] Clock Selection for QSPI - CLKSELQSPI (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (rh) */
} Ifx_SCU_CCUCON1_Bits;

/** \brief CCU Clock Control Register 2 */
typedef struct _Ifx_SCU_CCUCON2_Bits
{
    Ifx_UReg_32Bit ASCLINFDIV:4;      /**< \brief [3:0] ASCLIN Fast Divider Reload Value - ASCLINFDIV (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit ASCLINSDIV:4;      /**< \brief [11:8] ASCLIN Slow Divider Reload Value - ASCLINSDIV (rw) */
    Ifx_UReg_32Bit CLKSELASCLINS:2;    /**< \brief [13:12] Clock Selection for ASCLINS - CLKSELASCLINS (rw) */
    Ifx_UReg_32Bit reserved_14:10;    /**< \brief [23:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit ERAYPERON:1;       /**< \brief [25:25] Power Safe SwitchOff for ERAY Clock - ERAYPERON (rw) */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit reserved_27:4;     /**< \brief [30:27] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (rh) */
} Ifx_SCU_CCUCON2_Bits;

/** \brief CCU Clock Control Register 3 */
typedef struct _Ifx_SCU_CCUCON3_Bits
{
    Ifx_UReg_32Bit PLL0MONEN:1;       /**< \brief [0:0] PLL0 Clock Monitor Enable - PLL0MONEN (rw) */
    Ifx_UReg_32Bit PLL1MONEN:1;       /**< \brief [1:1] PLL1 Clock Monitor Enable - PLL1MONEN (rw) */
    Ifx_UReg_32Bit PLL2MONEN:1;       /**< \brief [2:2] PLL2 Clock Monitor Enable - PLL2MONEN (rw) */
    Ifx_UReg_32Bit SPBMONEN:1;        /**< \brief [3:3] SPB Clock Monitor Enable - SPBMONEN (rw) */
    Ifx_UReg_32Bit BACKMONEN:1;       /**< \brief [4:4] Backup Clock Monitor Enable - BACKMONEN (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit PLL0MONTST:1;      /**< \brief [8:8] PLL0 Clock Monitor Test - PLL0MONTST (rw) */
    Ifx_UReg_32Bit PLL1MONTST:1;      /**< \brief [9:9] PLL1 Clock Monitor Test - PLL1MONTST (rw) */
    Ifx_UReg_32Bit PLL2MONTST:1;      /**< \brief [10:10] PLL2 Clock Monitor Test - PLL2MONTST (rw) */
    Ifx_UReg_32Bit SPBMONTST:1;       /**< \brief [11:11] SPB Clock Monitor Test - SPBMONTST (rw) */
    Ifx_UReg_32Bit BACKMONTST:1;      /**< \brief [12:12] Backup Clock Monitor Test - BACKMONTST (rw) */
    Ifx_UReg_32Bit reserved_13:11;    /**< \brief [23:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit UP:1;              /**< \brief [30:30] Update Request - UP (w) */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (rh) */
} Ifx_SCU_CCUCON3_Bits;

/** \brief CCU Clock Control Register 4 */
typedef struct _Ifx_SCU_CCUCON4_Bits
{
    Ifx_UReg_32Bit LOTHR:12;          /**< \brief [11:0] Backup Clock Monitor Lower Threshold - LOTHR (rw) */
    Ifx_UReg_32Bit UPTHR:12;          /**< \brief [23:12] Backup Clock Monitor Upper Threshold - UPTHR (rw) */
    Ifx_UReg_32Bit MONEN:1;           /**< \brief [24:24] Backup Clock Monitor Enable - MONEN (rw) */
    Ifx_UReg_32Bit MONTST:1;          /**< \brief [25:25] Backup Clock Monitor Test - MONTST (rw) */
    Ifx_UReg_32Bit reserved_26:4;     /**< \brief [29:26] \internal Reserved */
    Ifx_UReg_32Bit UP:1;              /**< \brief [30:30] Update Request - UP (w) */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (rh) */
} Ifx_SCU_CCUCON4_Bits;

/** \brief CCU Clock Control Register 5 */
typedef struct _Ifx_SCU_CCUCON5_Bits
{
    Ifx_UReg_32Bit GETHDIV:4;         /**< \brief [3:0] GETH Divider Reload Value - GETHDIV (rw) */
    Ifx_UReg_32Bit MCANHDIV:4;        /**< \brief [7:4] MCANH Divider Reload Value - MCANHDIV (rw) */
    Ifx_UReg_32Bit reserved_8:4;      /**< \brief [11:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:18;    /**< \brief [29:12] \internal Reserved */
    Ifx_UReg_32Bit UP:1;              /**< \brief [30:30] Update Request - UP (w) */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (rh) */
} Ifx_SCU_CCUCON5_Bits;

/** \brief CCU Clock Control Register 6 */
typedef struct _Ifx_SCU_CCUCON6_Bits
{
    Ifx_UReg_32Bit CPU0DIV:6;         /**< \brief [5:0] CPU0 Divider Reload Value - CPU0DIV (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SCU_CCUCON6_Bits;

/** \brief CCU Clock Control Register 7 */
typedef struct _Ifx_SCU_CCUCON7_Bits
{
    Ifx_UReg_32Bit CPU1DIV:6;         /**< \brief [5:0] CPU1 Divider Reload Value - CPU1DIV (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SCU_CCUCON7_Bits;

/** \brief CCU Clock Control Register 8 */
typedef struct _Ifx_SCU_CCUCON8_Bits
{
    Ifx_UReg_32Bit CPU2DIV:6;         /**< \brief [5:0] CPU2 Divider Reload Value - CPU2DIV (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SCU_CCUCON8_Bits;

/** \brief Chip Identification Register */
typedef struct _Ifx_SCU_CHIPID_Bits
{
    Ifx_UReg_32Bit CHREV:6;           /**< \brief [5:0] Chip Revision Number - CHREV (r) */
    Ifx_UReg_32Bit CHTEC:2;           /**< \brief [7:6] Chip Family - CHTEC (r) */
    Ifx_UReg_32Bit CHPK:4;            /**< \brief [11:8] Chip Package - CHPK (rw) */
    Ifx_UReg_32Bit CHID:4;            /**< \brief [15:12] Chip Product - CHID (rw) */
    Ifx_UReg_32Bit EEA:1;             /**< \brief [16:16] Emulation or ADAS Extension Available - EEA (rh) */
    Ifx_UReg_32Bit UCODE:7;           /**< \brief [23:17] \xb5Code Version - UCODE (rw) */
    Ifx_UReg_32Bit FSIZE:4;           /**< \brief [27:24] Program Flash Size - FSIZE (rw) */
    Ifx_UReg_32Bit VART:3;            /**< \brief [30:28] Variant - VART (rw) */
    Ifx_UReg_32Bit SEC:1;             /**< \brief [31:31] Security Device Available - SEC (rw) */
} Ifx_SCU_CHIPID_Bits;

/** \brief Core Die Temperature Sensor Limit Register */
typedef struct _Ifx_SCU_DTSCLIM_Bits
{
    Ifx_UReg_32Bit LOWER:12;          /**< \brief [11:0] DTSC Lower Limit - LOWER (rw) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit BGPOK:1;           /**< \brief [13:13] DTSC Bandgap OK (rh) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [14:14] DTSC Enable (rw) */
    Ifx_UReg_32Bit LLU:1;             /**< \brief [15:15] DTSC Lower Limit Underflow - LLU (rwh) */
    Ifx_UReg_32Bit UPPER:12;          /**< \brief [27:16] DTSC Upper Limit - UPPER (rw) */
    Ifx_UReg_32Bit INTEN:1;           /**< \brief [28:28] DTSC Interrupt Enable (rw) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit INT:1;             /**< \brief [30:30] DTSC Interrupt status flag (rwh) */
    Ifx_UReg_32Bit UOF:1;             /**< \brief [31:31] DTSC Upper Limit Overflow - UOF (rwh) */
} Ifx_SCU_DTSCLIM_Bits;

/** \brief Core Die Temperature Sensor Status Register */
typedef struct _Ifx_SCU_DTSCSTAT_Bits
{
    Ifx_UReg_32Bit RESULT:12;         /**< \brief [11:0] Result of the DTSC Measurement - RESULT (rh) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_SCU_DTSCSTAT_Bits;

/** \brief ENDINIT Global Control Register 0 */
typedef struct _Ifx_SCU_EICON0_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit ENDINIT:1;       /**< \brief [1:1] End-of-Initialization Control Bit - ENDINIT (rwh) */
    Ifx_Strict_32Bit EPW:14;          /**< \brief [15:2] User-Definable ENDINIT Password Field - EPW (rwh) */
    Ifx_Strict_32Bit REL:16;          /**< \brief [31:16] Reload Value for the ENDINIT Timeout Counter - REL (r) */
} Ifx_SCU_EICON0_Bits;

/** \brief ENDINIT Global Control Register 1 */
typedef struct _Ifx_SCU_EICON1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit IR0:1;             /**< \brief [2:2] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit DR:1;              /**< \brief [3:3] Disable Request Control Bit - DR (rw) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit IR1:1;             /**< \brief [5:5] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SCU_EICON1_Bits;

/** \brief External Input Channel Register ${i} */
typedef struct _Ifx_SCU_EICR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit EXIS0:3;           /**< \brief [6:4] External Input Selection 0 - EXIS0 (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit FEN0:1;            /**< \brief [8:8] Falling Edge Enable 0 - FEN0 (rw) */
    Ifx_UReg_32Bit REN0:1;            /**< \brief [9:9] Rising Edge Enable 0 - REN0 (rw) */
    Ifx_UReg_32Bit LDEN0:1;           /**< \brief [10:10] Level Detection Enable 0 - LDEN0 (rw) */
    Ifx_UReg_32Bit EIEN0:1;           /**< \brief [11:11] External Input Enable 0 - EIEN0 (rw) */
    Ifx_UReg_32Bit INP0:3;            /**< \brief [14:12] Input Node Pointer - INP0 (rw) */
    Ifx_UReg_32Bit reserved_15:5;     /**< \brief [19:15] \internal Reserved */
    Ifx_UReg_32Bit EXIS1:3;           /**< \brief [22:20] External Input Selection 1 - EXIS1 (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit FEN1:1;            /**< \brief [24:24] Falling Edge Enable 1 - FEN1 (rw) */
    Ifx_UReg_32Bit REN1:1;            /**< \brief [25:25] Rising Edge Enable 1 - REN1 (rw) */
    Ifx_UReg_32Bit LDEN1:1;           /**< \brief [26:26] Level Detection Enable 1 - LDEN1 (rw) */
    Ifx_UReg_32Bit EIEN1:1;           /**< \brief [27:27] External Input Enable 1 - EIEN1 (rw) */
    Ifx_UReg_32Bit INP1:3;            /**< \brief [30:28] Input Node Pointer - INP1 (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SCU_EICR_Bits;

/** \brief External Input Filter Register */
typedef struct _Ifx_SCU_EIFILT_Bits
{
    Ifx_UReg_32Bit FILRQ0A:1;         /**< \brief [0:0] Filter Enable for REQ0A - FILRQ0A (rw) */
    Ifx_UReg_32Bit FILRQ5A:1;         /**< \brief [1:1] Filter Enable for REQ5A - FILRQ5A (rw) */
    Ifx_UReg_32Bit FILRQ2A:1;         /**< \brief [2:2] Filter Enable for REQ2A - FILRQ2A (rw) */
    Ifx_UReg_32Bit FILRQ3A:1;         /**< \brief [3:3] Filter Enable for REQ3A - FILRQ3A (rw) */
    Ifx_UReg_32Bit FILRQ0C:1;         /**< \brief [4:4] Filter Enable for REQ0C - FILRQ0C (rw) */
    Ifx_UReg_32Bit FILRQ1C:1;         /**< \brief [5:5] Filter Enable for REQ1C - FILRQ1C (rw) */
    Ifx_UReg_32Bit FILRQ3C:1;         /**< \brief [6:6] Filter Enable for REQ3C - FILRQ3C (rw) */
    Ifx_UReg_32Bit FILRQ2C:1;         /**< \brief [7:7] Filter Enable for REQ2C - FILRQ2C (rw) */
    Ifx_UReg_32Bit FILRQ4A:1;         /**< \brief [8:8] Filter Enable for REQ4A - FILRQ4A (rw) */
    Ifx_UReg_32Bit FILRQ6A:1;         /**< \brief [9:9] Filter Enable for REQ6A - FILRQ6A (rw) */
    Ifx_UReg_32Bit FILRQ1A:1;         /**< \brief [10:10] Filter Enable for REQ1A - FILRQ1A (rw) */
    Ifx_UReg_32Bit FILRQ7A:1;         /**< \brief [11:11] Filter Enable for REQ7A - FILRQ7A (rw) */
    Ifx_UReg_32Bit FILRQ6D:1;         /**< \brief [12:12] Filter Enable for REQ6D - FILRQ6D (rw) */
    Ifx_UReg_32Bit FILRQ4D:1;         /**< \brief [13:13] Filter Enable for REQ4D - FILRQ4D (rw) */
    Ifx_UReg_32Bit FILRQ2B:1;         /**< \brief [14:14] Filter Enable for REQ2B - FILRQ2B (rw) */
    Ifx_UReg_32Bit FILRQ3B:1;         /**< \brief [15:15] Filter Enable for REQ3B - FILRQ3B (rw) */
    Ifx_UReg_32Bit FILRQ7C:1;         /**< \brief [16:16] Filter Enable for REQ7C - FILRQ7C (rw) */
    Ifx_UReg_32Bit reserved_17:7;     /**< \brief [23:17] \internal Reserved */
    Ifx_UReg_32Bit FILTDIV:4;         /**< \brief [27:24] Digital Glitch Filter Clock Predivider - FILTDIV (rw) */
    Ifx_UReg_32Bit DEPTH:4;           /**< \brief [31:28] Digital Glitch Filter Depth - DEPTH (rw) */
} Ifx_SCU_EIFILT_Bits;

/** \brief External Input Flag Register */
typedef struct _Ifx_SCU_EIFR_Bits
{
    Ifx_UReg_32Bit INTF0:1;           /**< \brief [0:0] External Event Flag of Channel 0 - INTF0 (rh) */
    Ifx_UReg_32Bit INTF1:1;           /**< \brief [1:1] External Event Flag of Channel 1 - INTF1 (rh) */
    Ifx_UReg_32Bit INTF2:1;           /**< \brief [2:2] External Event Flag of Channel 2 - INTF2 (rh) */
    Ifx_UReg_32Bit INTF3:1;           /**< \brief [3:3] External Event Flag of Channel 3 - INTF3 (rh) */
    Ifx_UReg_32Bit INTF4:1;           /**< \brief [4:4] External Event Flag of Channel 4 - INTF4 (rh) */
    Ifx_UReg_32Bit INTF5:1;           /**< \brief [5:5] External Event Flag of Channel 5 - INTF5 (rh) */
    Ifx_UReg_32Bit INTF6:1;           /**< \brief [6:6] External Event Flag of Channel 6 - INTF6 (rh) */
    Ifx_UReg_32Bit INTF7:1;           /**< \brief [7:7] External Event Flag of Channel 7 - INTF7 (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_SCU_EIFR_Bits;

/** \brief ENDINIT Timeout Counter Status Register */
typedef struct _Ifx_SCU_EISR_Bits
{
    Ifx_UReg_32Bit AE:1;              /**< \brief [0:0] EICON0 Access Error Status Flag - AE (rh) */
    Ifx_UReg_32Bit OE:1;              /**< \brief [1:1] EI Timeout Overflow Error Status Flag - OE (rh) */
    Ifx_UReg_32Bit IS0:1;             /**< \brief [2:2] EI Timeout Input Clock Status - IS1,IS0 (rh) */
    Ifx_UReg_32Bit DS:1;              /**< \brief [3:3] EI Timeout Enable/Disable Status Flag - DS (rh) */
    Ifx_UReg_32Bit TO:1;              /**< \brief [4:4] EI Time-Out Mode Flag - TO (rh) */
    Ifx_UReg_32Bit IS1:1;             /**< \brief [5:5] EI Timeout Input Clock Status - IS1,IS0 (rh) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit TIM:16;            /**< \brief [31:16] Timer Value - TIM (rh) */
} Ifx_SCU_EISR_Bits;

/** \brief Emergency Stop Register */
typedef struct _Ifx_SCU_EMSR_Bits
{
    Ifx_UReg_32Bit POL:1;             /**< \brief [0:0] Input Polarity - POL (rw) */
    Ifx_UReg_32Bit MODE:1;            /**< \brief [1:1] Mode Selection - MODE (rw) */
    Ifx_UReg_32Bit ENON:1;            /**< \brief [2:2] Enable ON - ENON (rw) */
    Ifx_UReg_32Bit PSEL:1;            /**< \brief [3:3] PORT Select - PSEL (rw) */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit EMSF:1;            /**< \brief [16:16] Emergency Stop Flag - EMSF (rh) */
    Ifx_UReg_32Bit SEMSF:1;           /**< \brief [17:17] SMU Emergency Stop Flag - SEMSF (rh) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_SCU_EMSR_Bits;

/** \brief Emergency Stop Software set and clear register */
typedef struct _Ifx_SCU_EMSSW_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit EMSFM:2;           /**< \brief [25:24] Emergency Stop Flag Modification - EMSFM (w) */
    Ifx_UReg_32Bit SEMSFM:2;          /**< \brief [27:26] SMU Emergency Stop Flag Modification - SEMSFM (w) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_SCU_EMSSW_Bits;

/** \brief ESR${x} Input Configuration Register */
typedef struct _Ifx_SCU_ESRCFGX_ESRCFGX_Bits
{
    Ifx_UReg_32Bit reserved_0:7;      /**< \brief [6:0] \internal Reserved */
    Ifx_UReg_32Bit EDCON:2;           /**< \brief [8:7] Edge Detection Control - EDCON (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_SCU_ESRCFGX_ESRCFGX_Bits;

/** \brief ESR Output Configuration Register */
typedef struct _Ifx_SCU_ESROCFG_Bits
{
    Ifx_UReg_32Bit ARI:1;             /**< \brief [0:0] Application Reset Indicator - ARI (rh) */
    Ifx_UReg_32Bit ARC:1;             /**< \brief [1:1] Application Reset Indicator Clear - ARC (w) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SCU_ESROCFG_Bits;

/** \brief External Clock Control Register */
typedef struct _Ifx_SCU_EXTCON_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] External Clock Enable for EXTCLK0 - EN0 (rwh) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit SEL0:4;            /**< \brief [5:2] External Clock Select for EXTCLK0 - SEL0 (rwh) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [16:16] External Clock Enable for EXTCLK1 - EN1 (rwh) */
    Ifx_UReg_32Bit NSEL:1;            /**< \brief [17:17] Negation Selection - NSEL (rwh) */
    Ifx_UReg_32Bit SEL1:4;            /**< \brief [21:18] External Clock Select for EXTCLK1 - SEL1 (rwh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit DIV1:8;            /**< \brief [31:24] External Clock Divider for EXTCLK1 - DIV1 (rw) */
} Ifx_SCU_EXTCON_Bits;

/** \brief Fractional Divider Register */
typedef struct _Ifx_SCU_FDR_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit reserved_26:5;     /**< \brief [30:26] \internal Reserved */
    Ifx_UReg_32Bit DISCLK:1;          /**< \brief [31:31] Disable Clock - DISCLK (rwh) */
} Ifx_SCU_FDR_Bits;

/** \brief Flag Modification Register */
typedef struct _Ifx_SCU_FMR_Bits
{
    Ifx_UReg_32Bit FS0:1;             /**< \brief [0:0] Set Flag INTFx for Channel 0 - FS0 (w) */
    Ifx_UReg_32Bit FS1:1;             /**< \brief [1:1] Set Flag INTFx for Channel 1 - FS1 (w) */
    Ifx_UReg_32Bit FS2:1;             /**< \brief [2:2] Set Flag INTFx for Channel 2 - FS2 (w) */
    Ifx_UReg_32Bit FS3:1;             /**< \brief [3:3] Set Flag INTFx for Channel 3 - FS3 (w) */
    Ifx_UReg_32Bit FS4:1;             /**< \brief [4:4] Set Flag INTFx for Channel 4 - FS4 (w) */
    Ifx_UReg_32Bit FS5:1;             /**< \brief [5:5] Set Flag INTFx for Channel 5 - FS5 (w) */
    Ifx_UReg_32Bit FS6:1;             /**< \brief [6:6] Set Flag INTFx for Channel 6 - FS6 (w) */
    Ifx_UReg_32Bit FS7:1;             /**< \brief [7:7] Set Flag INTFx for Channel 7 - FS7 (w) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit FC0:1;             /**< \brief [16:16] Clear Flag INTFx for Channel 0 - FC0 (w) */
    Ifx_UReg_32Bit FC1:1;             /**< \brief [17:17] Clear Flag INTFx for Channel 1 - FC1 (w) */
    Ifx_UReg_32Bit FC2:1;             /**< \brief [18:18] Clear Flag INTFx for Channel 2 - FC2 (w) */
    Ifx_UReg_32Bit FC3:1;             /**< \brief [19:19] Clear Flag INTFx for Channel 3 - FC3 (w) */
    Ifx_UReg_32Bit FC4:1;             /**< \brief [20:20] Clear Flag INTFx for Channel 4 - FC4 (w) */
    Ifx_UReg_32Bit FC5:1;             /**< \brief [21:21] Clear Flag INTFx for Channel 5 - FC5 (w) */
    Ifx_UReg_32Bit FC6:1;             /**< \brief [22:22] Clear Flag INTFx for Channel 6 - FC6 (w) */
    Ifx_UReg_32Bit FC7:1;             /**< \brief [23:23] Clear Flag INTFx for Channel 7 - FC7 (w) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SCU_FMR_Bits;

/** \brief Identification Register */
typedef struct _Ifx_SCU_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUMBER:16;      /**< \brief [31:16] Module Number - MODNUMBER (r) */
} Ifx_SCU_ID_Bits;

/** \brief Flag Gating Register ${j} */
typedef struct _Ifx_SCU_IGCR_Bits
{
    Ifx_UReg_32Bit IPEN00:1;          /**< \brief [0:0] Flag Pattern Enable for Channel 0 - IPEN00 (rw) */
    Ifx_UReg_32Bit IPEN01:1;          /**< \brief [1:1] Flag Pattern Enable for Channel 0 - IPEN01 (rw) */
    Ifx_UReg_32Bit IPEN02:1;          /**< \brief [2:2] Flag Pattern Enable for Channel 0 - IPEN02 (rw) */
    Ifx_UReg_32Bit IPEN03:1;          /**< \brief [3:3] Flag Pattern Enable for Channel 0 - IPEN03 (rw) */
    Ifx_UReg_32Bit IPEN04:1;          /**< \brief [4:4] Flag Pattern Enable for Channel 0 - IPEN04 (rw) */
    Ifx_UReg_32Bit IPEN05:1;          /**< \brief [5:5] Flag Pattern Enable for Channel 0 - IPEN05 (rw) */
    Ifx_UReg_32Bit IPEN06:1;          /**< \brief [6:6] Flag Pattern Enable for Channel 0 - IPEN06 (rw) */
    Ifx_UReg_32Bit IPEN07:1;          /**< \brief [7:7] Flag Pattern Enable for Channel 0 - IPEN07 (rw) */
    Ifx_UReg_32Bit reserved_8:5;      /**< \brief [12:8] \internal Reserved */
    Ifx_UReg_32Bit GEEN0:1;           /**< \brief [13:13] Generate Event Enable 0 - GEEN0 (rw) */
    Ifx_UReg_32Bit IGP0:2;            /**< \brief [15:14] Interrupt Gating Pattern 0 - IGP0 (rw) */
    Ifx_UReg_32Bit IPEN10:1;          /**< \brief [16:16] Interrupt Pattern Enable for Channel 1 - IPEN10 (rw) */
    Ifx_UReg_32Bit IPEN11:1;          /**< \brief [17:17] Interrupt Pattern Enable for Channel 1 - IPEN11 (rw) */
    Ifx_UReg_32Bit IPEN12:1;          /**< \brief [18:18] Interrupt Pattern Enable for Channel 1 - IPEN12 (rw) */
    Ifx_UReg_32Bit IPEN13:1;          /**< \brief [19:19] Interrupt Pattern Enable for Channel 1 - IPEN13 (rw) */
    Ifx_UReg_32Bit IPEN14:1;          /**< \brief [20:20] Interrupt Pattern Enable for Channel 1 - IPEN14 (rw) */
    Ifx_UReg_32Bit IPEN15:1;          /**< \brief [21:21] Interrupt Pattern Enable for Channel 1 - IPEN15 (rw) */
    Ifx_UReg_32Bit IPEN16:1;          /**< \brief [22:22] Interrupt Pattern Enable for Channel 1 - IPEN16 (rw) */
    Ifx_UReg_32Bit IPEN17:1;          /**< \brief [23:23] Interrupt Pattern Enable for Channel 1 - IPEN17 (rw) */
    Ifx_UReg_32Bit reserved_24:5;     /**< \brief [28:24] \internal Reserved */
    Ifx_UReg_32Bit GEEN1:1;           /**< \brief [29:29] Generate Event Enable 1 - GEEN1 (rw) */
    Ifx_UReg_32Bit IGP1:2;            /**< \brief [31:30] Interrupt Gating Pattern 1 - IGP1 (rw) */
} Ifx_SCU_IGCR_Bits;

/** \brief ESR Input Register */
typedef struct _Ifx_SCU_IN_Bits
{
    Ifx_UReg_32Bit P0:1;              /**< \brief [0:0] Input Bit 0 - P0 (rh) */
    Ifx_UReg_32Bit P1:1;              /**< \brief [1:1] Input Bit 1 - P1 (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SCU_IN_Bits;

/** \brief Input/Output Control Register */
typedef struct _Ifx_SCU_IOCR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit PC0:4;             /**< \brief [7:4] Control for ESR0 Pin - PC0 (rw) */
    Ifx_UReg_32Bit reserved_8:4;      /**< \brief [11:8] \internal Reserved */
    Ifx_UReg_32Bit PC1:4;             /**< \brief [15:12] Control for ESR1 Pin - PC1 (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_IOCR_Bits;

/** \brief Logic BIST Control 0 Register */
typedef struct _Ifx_SCU_LBISTCTRL0_Bits
{
    Ifx_UReg_32Bit LBISTREQ:1;        /**< \brief [0:0] LBIST Request - LBISTREQ (w) */
    Ifx_UReg_32Bit LBISTRES:1;        /**< \brief [1:1] LBIST-Reset- LBISTRES (w) */
    Ifx_UReg_32Bit PATTERNS:18;       /**< \brief [19:2] LBIST Pattern Number - PATTERNS (rw) */
    Ifx_UReg_32Bit reserved_20:8;     /**< \brief [27:20] \internal Reserved */
    Ifx_UReg_32Bit LBISTDONE:1;       /**< \brief [28:28] LBIST Execution Indicator - LBISTDONE (rh) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit LBISTERRINJ:1;     /**< \brief [30:30] LBIST / Test-Mode Alarm Error Injection (rwh) */
    Ifx_UReg_32Bit LBISTREQRED:1;     /**< \brief [31:31] LBIST Request Redundancy (w) */
} Ifx_SCU_LBISTCTRL0_Bits;

/** \brief Logic BIST Control 1 Register */
typedef struct _Ifx_SCU_LBISTCTRL1_Bits
{
    Ifx_UReg_32Bit SEED:19;           /**< \brief [18:0] LBIST Seed - SEED (rw) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit SPLITSH:3;         /**< \brief [26:24] LBIST Split-Shift Selection - SPLITSH (rw) */
    Ifx_UReg_32Bit BODY:1;            /**< \brief [27:27] Body Application Indicator - BODY (rw) */
    Ifx_UReg_32Bit LBISTFREQU:4;      /**< \brief [31:28] LBIST Frequency Selection - LBISTFREQU (rw) */
} Ifx_SCU_LBISTCTRL1_Bits;

/** \brief Logic BIST Control 2 Register */
typedef struct _Ifx_SCU_LBISTCTRL2_Bits
{
    Ifx_UReg_32Bit LENGTH:12;         /**< \brief [11:0] LBIST Maximum Scan-Chain Length - LENGTH (rwh) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_SCU_LBISTCTRL2_Bits;

/** \brief Logic BIST Control 3 Register */
typedef struct _Ifx_SCU_LBISTCTRL3_Bits
{
    Ifx_UReg_32Bit SIGNATURE:32;      /**< \brief [31:0] LBIST Signature - SIGNATURE (rh) */
} Ifx_SCU_LBISTCTRL3_Bits;

/** \brief LCL CPU0 and CPU2 Control Register */
typedef struct _Ifx_SCU_LCLCON0_Bits
{
    Ifx_UReg_32Bit LS2:1;             /**< \brief [0:0] Lockstep Mode Status - LS2 (rh) */
    Ifx_UReg_32Bit reserved_1:14;     /**< \brief [14:1] \internal Reserved */
    Ifx_UReg_32Bit LSEN2:1;           /**< \brief [15:15] Lockstep Enable - LSEN2 (rw) */
    Ifx_UReg_32Bit LS0:1;             /**< \brief [16:16] Lockstep Mode Status - LS0 (rh) */
    Ifx_UReg_32Bit reserved_17:14;    /**< \brief [30:17] \internal Reserved */
    Ifx_UReg_32Bit LSEN0:1;           /**< \brief [31:31] Lockstep Enable - LSEN0 (rw) */
} Ifx_SCU_LCLCON0_Bits;

/** \brief LCL CPU1 and CPU3 Control Register */
typedef struct _Ifx_SCU_LCLCON1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:14;     /**< \brief [14:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit LS1:1;             /**< \brief [16:16] Lockstep Mode Status - LS1 (rh) */
    Ifx_UReg_32Bit reserved_17:14;    /**< \brief [30:17] \internal Reserved */
    Ifx_UReg_32Bit LSEN1:1;           /**< \brief [31:31] Lockstep Enable - LSEN1 (rw) */
} Ifx_SCU_LCLCON1_Bits;

/** \brief LCL Test Register */
typedef struct _Ifx_SCU_LCLTEST_Bits
{
    Ifx_UReg_32Bit LCLT0:1;           /**< \brief [0:0] LCL0 Lockstep Test - LCLT0 (w) */
    Ifx_UReg_32Bit LCLT1:1;           /**< \brief [1:1] LCL1 Lockstep Test - LCLT1 (w) */
    Ifx_UReg_32Bit LCLT2:1;           /**< \brief [2:2] LCL2 Lockstep Test - LCLT2 (w) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit PLCLT0:1;          /**< \brief [16:16] PFI0 Lockstep Test (w) */
    Ifx_UReg_32Bit PLCLT1:1;          /**< \brief [17:17] PFI1 Lockstep Test (w) */
    Ifx_UReg_32Bit PLCLT2:1;          /**< \brief [18:18] PFI2 Lockstep Test (w) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_SCU_LCLTEST_Bits;

/** \brief Manufacturer Identification Register */
typedef struct _Ifx_SCU_MANID_Bits
{
    Ifx_UReg_32Bit DEPT:5;            /**< \brief [4:0] Department Identification Number - DEPT (r) */
    Ifx_UReg_32Bit MANUF:11;          /**< \brief [15:5] Manufacturer Identification Number - MANUF (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_MANID_Bits;

/** \brief ESR Output Modification Register */
typedef struct _Ifx_SCU_OMR_Bits
{
    Ifx_UReg_32Bit PS0:1;             /**< \brief [0:0] ESRx Pin Set Bit 0 - PS0 (w) */
    Ifx_UReg_32Bit PS1:1;             /**< \brief [1:1] ESRx Pin Set Bit 1 - PS1 (w) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit PCL0:1;            /**< \brief [16:16] ESRx Pin Clear Bit 0 - PCL0 (w) */
    Ifx_UReg_32Bit PCL1:1;            /**< \brief [17:17] ESRx Pin Clear Bit 1 - PCL1 (w) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_SCU_OMR_Bits;

/** \brief OSC Control Register */
typedef struct _Ifx_SCU_OSCCON_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit PLLLV:1;           /**< \brief [1:1] Oscillator for PLL Valid Low Status Bit - PLLLV (rh) */
    Ifx_UReg_32Bit OSCRES:1;          /**< \brief [2:2] Oscillator Watchdog Reset - OSCRES (w) */
    Ifx_UReg_32Bit GAINSEL:2;         /**< \brief [4:3] Oscillator Gain Selection - GAINSEL (rw) */
    Ifx_UReg_32Bit MODE:2;            /**< \brief [6:5] Oscillator Mode - MODE (rw) */
    Ifx_UReg_32Bit SHBY:1;            /**< \brief [7:7] Shaper Bypass - SHBY (rw) */
    Ifx_UReg_32Bit PLLHV:1;           /**< \brief [8:8] Oscillator for PLL Valid High Status Bit - PLLHV (rh) */
    Ifx_UReg_32Bit HYSEN:1;           /**< \brief [9:9] Hysteresis Enable (rw) */
    Ifx_UReg_32Bit HYSCTL:2;          /**< \brief [11:10] Hysteresis Control (rw) */
    Ifx_UReg_32Bit AMPCTL:2;          /**< \brief [13:12] Amplitude Control (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit OSCVAL:5;          /**< \brief [20:16] OSC Frequency Value - OSCVAL (rw) */
    Ifx_UReg_32Bit reserved_21:2;     /**< \brief [22:21] \internal Reserved */
    Ifx_UReg_32Bit APREN:1;           /**< \brief [23:23] Amplitude Regulation Enable - APREN (rw) */
    Ifx_UReg_32Bit CAP0EN:1;          /**< \brief [24:24] Capacitance 0 Enable - CAP0EN (rw) */
    Ifx_UReg_32Bit CAP1EN:1;          /**< \brief [25:25] Capacitance 1 Enable - CAP1EN (rw) */
    Ifx_UReg_32Bit CAP2EN:1;          /**< \brief [26:26] Capacitance 2 Enable - CAP2EN (rw) */
    Ifx_UReg_32Bit CAP3EN:1;          /**< \brief [27:27] Capacitance 3 Enable - CAP3EN (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_SCU_OSCCON_Bits;

/** \brief ESR Output Register */
typedef struct _Ifx_SCU_OUT_Bits
{
    Ifx_UReg_32Bit P0:1;              /**< \brief [0:0] Output Bit 0 - P0 (rwh) */
    Ifx_UReg_32Bit P1:1;              /**< \brief [1:1] Output Bit 1 - P1 (rwh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SCU_OUT_Bits;

/** \brief Overlay Control Register */
typedef struct _Ifx_SCU_OVCCON_Bits
{
    Ifx_UReg_32Bit CSEL0:1;           /**< \brief [0:0] CPU Select 0 - CSEL0 (w) */
    Ifx_UReg_32Bit CSEL1:1;           /**< \brief [1:1] CPU Select 1 (If product has CPU1) - CSEL1 (w) */
    Ifx_UReg_32Bit CSEL2:1;           /**< \brief [2:2] CPU Select 2 (If product has CPU2) - CSEL2 (w) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit OVSTRT:1;          /**< \brief [16:16] Overlay Start - OVSTRT (w) */
    Ifx_UReg_32Bit OVSTP:1;           /**< \brief [17:17] Overlay Stop - OVSTP (w) */
    Ifx_UReg_32Bit DCINVAL:1;         /**< \brief [18:18] Data Cache Invalidate - DCINVAL (w) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit OVCONF:1;          /**< \brief [24:24] Overlay Configured - OVCONF (rw) */
    Ifx_UReg_32Bit POVCONF:1;         /**< \brief [25:25] Write Protection for OVCONF - POVCONF (w) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SCU_OVCCON_Bits;

/** \brief Overlay Enable Register */
typedef struct _Ifx_SCU_OVCENABLE_Bits
{
    Ifx_UReg_32Bit OVEN0:1;           /**< \brief [0:0] Overlay Enable 0 - OVEN0 (rw) */
    Ifx_UReg_32Bit OVEN1:1;           /**< \brief [1:1] Overlay Enable 1 (If product has CPU1) - OVEN1 (rw) */
    Ifx_UReg_32Bit OVEN2:1;           /**< \brief [2:2] Overlay Enable 2 (If product has CPU2) - OVEN2 (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SCU_OVCENABLE_Bits;

/** \brief Pad Disable Control Register */
typedef struct _Ifx_SCU_PDISC_Bits
{
    Ifx_UReg_32Bit PDIS0:1;           /**< \brief [0:0] Pad Disable for ESR Pin 0 - PDIS0 (rw) */
    Ifx_UReg_32Bit PDIS1:1;           /**< \brief [1:1] Pad Disable for ESR Pin 1 - PDIS1 (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SCU_PDISC_Bits;

/** \brief ESR Pad Driver Mode Register */
typedef struct _Ifx_SCU_PDR_Bits
{
    Ifx_UReg_32Bit PD0:2;             /**< \brief [1:0] Pad Driver Mode for ESR Pins 0 - PD0 (rw) */
    Ifx_UReg_32Bit PL0:2;             /**< \brief [3:2] Pad Level Selection for ESR Pins 0 - PL0 (rw) */
    Ifx_UReg_32Bit PD1:2;             /**< \brief [5:4] Pad Driver Mode for ESR Pins 1 - PD1 (rw) */
    Ifx_UReg_32Bit PL1:2;             /**< \brief [7:6] Pad Level Selection for ESR Pins 1 - PL1 (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_SCU_PDR_Bits;

/** \brief Pattern Detection Result Register */
typedef struct _Ifx_SCU_PDRR_Bits
{
    Ifx_UReg_32Bit PDR0:1;            /**< \brief [0:0] Pattern Detection Result of Channel 0 - PDR0 (rh) */
    Ifx_UReg_32Bit PDR1:1;            /**< \brief [1:1] Pattern Detection Result of Channel 1 - PDR1 (rh) */
    Ifx_UReg_32Bit PDR2:1;            /**< \brief [2:2] Pattern Detection Result of Channel 2 - PDR2 (rh) */
    Ifx_UReg_32Bit PDR3:1;            /**< \brief [3:3] Pattern Detection Result of Channel 3 - PDR3 (rh) */
    Ifx_UReg_32Bit PDR4:1;            /**< \brief [4:4] Pattern Detection Result of Channel 4 - PDR4 (rh) */
    Ifx_UReg_32Bit PDR5:1;            /**< \brief [5:5] Pattern Detection Result of Channel 5 - PDR5 (rh) */
    Ifx_UReg_32Bit PDR6:1;            /**< \brief [6:6] Pattern Detection Result of Channel 6 - PDR6 (rh) */
    Ifx_UReg_32Bit PDR7:1;            /**< \brief [7:7] Pattern Detection Result of Channel 7 - PDR7 (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_SCU_PDRR_Bits;

/** \brief Peripheral PLL Configuration 0 Register */
typedef struct _Ifx_SCU_PERPLLCON0_Bits
{
    Ifx_UReg_32Bit DIVBY:1;           /**< \brief [0:0] Divider Bypass - DIVBY (rw) */
    Ifx_UReg_32Bit reserved_1:8;      /**< \brief [8:1] \internal Reserved */
    Ifx_UReg_32Bit NDIV:7;            /**< \brief [15:9] N-Divider Value - NDIV (rw) */
    Ifx_UReg_32Bit PLLPWD:1;          /**< \brief [16:16] Peripheral PLL Power Saving Mode - PLLPWD (rw) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit RESLD:1;           /**< \brief [18:18] Restart DCO Lock Detection - RESLD (w) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit PDIV:3;            /**< \brief [26:24] P-Divider Value - PDIV (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_SCU_PERPLLCON0_Bits;

/** \brief Peripheral PLL Configuration 1 Register */
typedef struct _Ifx_SCU_PERPLLCON1_Bits
{
    Ifx_UReg_32Bit K2DIV:3;           /**< \brief [2:0] K2-Divider Value - K2DIV (rw) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit K3DIV:3;           /**< \brief [10:8] K3-Divider Value - K3DIV (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_SCU_PERPLLCON1_Bits;

/** \brief Peripheral PLL Status Register */
typedef struct _Ifx_SCU_PERPLLSTAT_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit PWDSTAT:1;         /**< \brief [1:1] Peripheral PLL Power-saving Mode Status - PWDSTAT (rh) */
    Ifx_UReg_32Bit LOCK:1;            /**< \brief [2:2] Peripheral PLL Lock Status - LOCK (rh) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit K3RDY:1;           /**< \brief [4:4] K3 Divider Ready Status - K3RDY (rh) */
    Ifx_UReg_32Bit K2RDY:1;           /**< \brief [5:5] K2 Divider Ready Status - K2RDY (rh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:25;     /**< \brief [31:7] \internal Reserved */
} Ifx_SCU_PERPLLSTAT_Bits;

/** \brief Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR0_Bits
{
    Ifx_UReg_32Bit REQSLP:2;          /**< \brief [1:0] Idle Mode and Sleep Mode Request - REQSLP (rwh) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit PMST:3;            /**< \brief [10:8] Power management Status - PMST (rh) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_SCU_PMCSR0_Bits;

/** \brief Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR1_Bits
{
    Ifx_UReg_32Bit REQSLP:2;          /**< \brief [1:0] Idle Mode and Sleep Mode Request - REQSLP (rwh) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit PMST:3;            /**< \brief [10:8] Power management Status - PMST (rh) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_SCU_PMCSR1_Bits;

/** \brief Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR2_Bits
{
    Ifx_UReg_32Bit REQSLP:2;          /**< \brief [1:0] Idle Mode and Sleep Mode Request - REQSLP (rwh) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit PMST:3;            /**< \brief [10:8] Power management Status - PMST (rh) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_SCU_PMCSR2_Bits;

/** \brief Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR3_Bits
{
    Ifx_UReg_32Bit REQSLP:2;          /**< \brief [1:0] Idle Mode and Sleep Mode Request - REQSLP (rwh) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit PMST:3;            /**< \brief [10:8] Power management Status - PMST (rh) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_SCU_PMCSR3_Bits;

/** \brief Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR4_Bits
{
    Ifx_UReg_32Bit REQSLP:2;          /**< \brief [1:0] Idle Mode and Sleep Mode Request - REQSLP (rwh) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit PMST:3;            /**< \brief [10:8] Power management Status - PMST (rh) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_SCU_PMCSR4_Bits;

/** \brief Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR5_Bits
{
    Ifx_UReg_32Bit REQSLP:2;          /**< \brief [1:0] Idle Mode and Sleep Mode Request - REQSLP (rwh) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit PMST:3;            /**< \brief [10:8] Power management Status - PMST (rh) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_SCU_PMCSR5_Bits;

/** \brief Power Management Status Register 0 */
typedef struct _Ifx_SCU_PMSTAT0_Bits
{
    Ifx_UReg_32Bit CPU0:1;            /**< \brief [0:0] CPU0 Status - CPU0 (rh) */
    Ifx_UReg_32Bit CPU1:1;            /**< \brief [1:1] CPU1 Status - CPU1 (rh) */
    Ifx_UReg_32Bit CPU2:1;            /**< \brief [2:2] CPU2 Status - CPU2 (rh) */
    Ifx_UReg_32Bit CPU3:1;            /**< \brief [3:3] CPU3 Status - CPU3 (rh) */
    Ifx_UReg_32Bit CPU4:1;            /**< \brief [4:4] CPU4 Status - CPU4 (rh) */
    Ifx_UReg_32Bit CPU5:1;            /**< \brief [5:5] CPU5 Status - CPU5 (rh) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit CPU0LS:1;          /**< \brief [16:16] CPU0LS Status - CPU0LS (rh) */
    Ifx_UReg_32Bit CPU1LS:1;          /**< \brief [17:17] CPU1LS Status - CPU1LS (rh) */
    Ifx_UReg_32Bit CPU2LS:1;          /**< \brief [18:18] CPU2LS Status - CPU2LS (rh) */
    Ifx_UReg_32Bit CPU3LS:1;          /**< \brief [19:19] CPU3LS Status - CPU3LS (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SCU_PMSTAT0_Bits;

/** \brief Standby and Wake-up Control Register 1 */
typedef struct _Ifx_SCU_PMSWCR1_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit CPUIDLSEL:3;       /**< \brief [10:8] CPU selection for Idle mode - CPUIDLSEL (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit IRADIS:1;          /**< \brief [12:12] Idle-Request-Acknowledge Sequence Disable - IRADIS (rw) */
    Ifx_UReg_32Bit reserved_13:11;    /**< \brief [23:13] \internal Reserved */
    Ifx_UReg_32Bit CPUSEL:3;          /**< \brief [26:24] CPU selection for Sleep and Standby mode - CPUSEL (rw) */
    Ifx_UReg_32Bit STBYEVEN:1;        /**< \brief [27:27] Standby Entry Event configuration enable - STBYEVEN (w) */
    Ifx_UReg_32Bit STBYEV:3;          /**< \brief [30:28] Standby Entry Event Configuration - STBYEV (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SCU_PMSWCR1_Bits;

/** \brief Power Management Transition Control and Status Register 0 */
typedef struct _Ifx_SCU_PMTRCSR0_Bits
{
    Ifx_UReg_32Bit LJTEN:1;           /**< \brief [0:0] Load Jump Timer Enable - LJTEN (rw) */
    Ifx_UReg_32Bit LJTOVEN:1;         /**< \brief [1:1] Load Jump Timer Overflow Enable - LJTOVEN (rw) */
    Ifx_UReg_32Bit LJTOVIEN:1;        /**< \brief [2:2] Load Jump Timer Overflow Interrupt Enable - LJTOVIEN (rw) */
    Ifx_UReg_32Bit LJTSTRT:1;         /**< \brief [3:3] Load Jump Timer Start - LJTSTRT (rwh) */
    Ifx_UReg_32Bit LJTSTP:1;          /**< \brief [4:4] Load Jump Timer Stop - LJTSTP (rw) */
    Ifx_UReg_32Bit LJTCLR:1;          /**< \brief [5:5] Load Jump Timer Clear - LJTCLR (w) */
    Ifx_UReg_32Bit reserved_6:6;      /**< \brief [11:6] \internal Reserved */
    Ifx_UReg_32Bit SDSTEP:4;          /**< \brief [15:12] Droop Voltage Step(vdroop_step_i) - SDSTEP (rw) */
    Ifx_UReg_32Bit VDTEN:1;           /**< \brief [16:16] Voltage Droop Timer Enable - VDTEN (rw) */
    Ifx_UReg_32Bit VDTOVEN:1;         /**< \brief [17:17] Voltage Droop Timer Overflow Enable - VDTOVEN (rw) */
    Ifx_UReg_32Bit VDTOVIEN:1;        /**< \brief [18:18] Voltage Droop Timer Overflow Interrupt Enable - VDTOVIEN (rw) */
    Ifx_UReg_32Bit VDTSTRT:1;         /**< \brief [19:19] Voltage Droop Timer Start - VDTSTRT (rwh) */
    Ifx_UReg_32Bit VDTSTP:1;          /**< \brief [20:20] Voltage Droop Timer Stop - VDTSTP (rw) */
    Ifx_UReg_32Bit VDTCLR:1;          /**< \brief [21:21] Voltage Droop Timer Clear - VDTCLR (w) */
    Ifx_UReg_32Bit reserved_22:7;     /**< \brief [28:22] \internal Reserved */
    Ifx_UReg_32Bit LPSLPEN:1;         /**< \brief [29:29] EVRC Low Power Mode activation on a Sleep Request - LPSLPEN (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SCU_PMTRCSR0_Bits;

/** \brief Power Management Transition Control and Status Register 1 */
typedef struct _Ifx_SCU_PMTRCSR1_Bits
{
    Ifx_UReg_32Bit LJTCV:16;          /**< \brief [15:0] Load Jump Timer Compare Setpoint Value - LJTCV (rw) */
    Ifx_UReg_32Bit VDTCV:10;          /**< \brief [25:16] Voltage Droop Timer Compare Setpoint Value - VDTCV (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SCU_PMTRCSR1_Bits;

/** \brief Power Management Transition Control and Status Register 2 */
typedef struct _Ifx_SCU_PMTRCSR2_Bits
{
    Ifx_UReg_32Bit LDJMPREQ:2;        /**< \brief [1:0] Load Jump Request - LDJMPREQ (rwh) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit LJTRUN:2;          /**< \brief [5:4] Load Jump Timer Run Status - LJTRUN (rh) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit LJTOV:1;           /**< \brief [8:8] Load Jump Timer Overflow Status - LJTOV (rh) */
    Ifx_UReg_32Bit reserved_9:3;      /**< \brief [11:9] \internal Reserved */
    Ifx_UReg_32Bit LJTOVCLR:1;        /**< \brief [12:12] Load Jump Timer Overflow Status Clear - LJTOVCLR (w) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit LJTCNT:16;         /**< \brief [31:16] Load Jump Timer Value - LJTCNT (rh) */
} Ifx_SCU_PMTRCSR2_Bits;

/** \brief Power Management Transition Control and Status Register 3 */
typedef struct _Ifx_SCU_PMTRCSR3_Bits
{
    Ifx_UReg_32Bit VDROOPREQ:2;       /**< \brief [1:0] Voltage Droop Request - VDROOPREQ (rwh) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit VDTRUN:2;          /**< \brief [5:4] Voltage Droop Timer Run Status - VDTRUN (rh) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit VDTOV:1;           /**< \brief [8:8] Voltage Droop Timer Overflow Status - VDTOV (rh) */
    Ifx_UReg_32Bit reserved_9:3;      /**< \brief [11:9] \internal Reserved */
    Ifx_UReg_32Bit VDTOVCLR:1;        /**< \brief [12:12] Voltage Droop Timer Overflow Status Clear - VDTOVCLR (w) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit VDTCNT:10;         /**< \brief [25:16] Voltage Droop Timer Value - VDTCNT (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SCU_PMTRCSR3_Bits;

/** \brief Reset Configuration Register */
typedef struct _Ifx_SCU_RSTCON_Bits
{
    Ifx_UReg_32Bit ESR0:2;            /**< \brief [1:0] ESR0 Reset Request Trigger Reset Configuration - ESR0 (rw) */
    Ifx_UReg_32Bit ESR1:2;            /**< \brief [3:2] ESR1 Reset Request Trigger Reset Configuration - ESR1 (rw) */
    Ifx_UReg_32Bit reserved_4:2;      /**< \brief [5:4] \internal Reserved */
    Ifx_UReg_32Bit SMU:2;             /**< \brief [7:6] SMU Reset Request Trigger Reset Configuration - SMU (rw) */
    Ifx_UReg_32Bit SW:2;              /**< \brief [9:8] SW Reset Request Trigger Reset Configuration - SW (rw) */
    Ifx_UReg_32Bit STM0:2;            /**< \brief [11:10] STM0 Reset Request Trigger Reset Configuration - STM0 (rw) */
    Ifx_UReg_32Bit STM1:2;            /**< \brief [13:12] STM1 Reset Request Trigger Reset Configuration (If Product has STM1) - STM1 (rw) */
    Ifx_UReg_32Bit STM2:2;            /**< \brief [15:14] STM2 Reset Request Trigger Reset Configuration (If Product has STM2) - STM2 (rw) */
    Ifx_UReg_32Bit reserved_16:2;     /**< \brief [17:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:2;     /**< \brief [19:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:2;     /**< \brief [21:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_SCU_RSTCON_Bits;

/** \brief Additional Reset Control Register */
typedef struct _Ifx_SCU_RSTCON2_Bits
{
    Ifx_UReg_32Bit FRTO:1;            /**< \brief [0:0] Force Reset Timeout - FRTO (rw) */
    Ifx_UReg_32Bit CLRC:1;            /**< \brief [1:1] Clear Cold Reset Status - CLRC (w) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit CSSX:6;            /**< \brief [12:7] CPU x Shutdown State Reached - CSSx (rh) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit USRINFO:16;        /**< \brief [31:16] User Information - USRINFO (rw) */
} Ifx_SCU_RSTCON2_Bits;

/** \brief Reset Configuration Register 3 */
typedef struct _Ifx_SCU_RSTCON3_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SCU_RSTCON3_Bits;

/** \brief Reset Status Register */
typedef struct _Ifx_SCU_RSTSTAT_Bits
{
    Ifx_UReg_32Bit ESR0:1;            /**< \brief [0:0] Reset Request Trigger Reset Status for ESR0 - ESR0 (rh) */
    Ifx_UReg_32Bit ESR1:1;            /**< \brief [1:1] Reset Request Trigger Reset Status for ESR1 - ESR1 (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit SMU:1;             /**< \brief [3:3] Reset Request Trigger Reset Status for SMU - SMU (rh) */
    Ifx_UReg_32Bit SW:1;              /**< \brief [4:4] Reset Request Trigger Reset Status for SW - SW (rh) */
    Ifx_UReg_32Bit STM0:1;            /**< \brief [5:5] Reset Request Trigger Reset Status for STM0 Compare Match - STM0 (rh) */
    Ifx_UReg_32Bit STM1:1;            /**< \brief [6:6] Reset Request Trigger Reset Status for STM1 Compare Match (If Product has STM1) - STM1 (rh) */
    Ifx_UReg_32Bit STM2:1;            /**< \brief [7:7] Reset Request Trigger Reset Status for STM2 Compare Match (If Product has STM2) - STM2 (rh) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit PORST:1;           /**< \brief [16:16] Reset Request Trigger Reset Status for PORST - PORST (rh) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit CB0:1;             /**< \brief [18:18] Reset Request Trigger Reset Status for Cerberus System Reset - CB0 (rh) */
    Ifx_UReg_32Bit CB1:1;             /**< \brief [19:19] Reset Request Trigger Reset Status for Cerberus Debug Reset - CB1 (rh) */
    Ifx_UReg_32Bit CB3:1;             /**< \brief [20:20] Reset Request Trigger Reset Status for Cerberus Application Reset - CB3 (rh) */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit EVRC:1;            /**< \brief [23:23] Reset Request Trigger Reset Status for EVRC - EVRC (rh) */
    Ifx_UReg_32Bit EVR33:1;           /**< \brief [24:24] Reset Request Trigger Reset Status for EVR33 - EVR33 (rh) */
    Ifx_UReg_32Bit SWD:1;             /**< \brief [25:25] Reset Request Trigger Reset Status for Supply Watchdog (SWD) - SWD (rh) */
    Ifx_UReg_32Bit HSMS:1;            /**< \brief [26:26] Reset Request Trigger Reset Status for HSM System Reset (HSM S) - HSMS (rh) */
    Ifx_UReg_32Bit HSMA:1;            /**< \brief [27:27] Reset Request Trigger Reset Status for HSM Application Reset (HSM A) - HSMA (rh) */
    Ifx_UReg_32Bit STBYR:1;           /**< \brief [28:28] Reset Request Trigger Reset Status for Standby Regulator Watchdog (STBYR) - STBYR (rh) */
    Ifx_UReg_32Bit LBPORST:1;         /**< \brief [29:29] LBIST termination due to PORST (rh) */
    Ifx_UReg_32Bit LBTERM:1;          /**< \brief [30:30] LBIST was properly terminated (rh) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SCU_RSTSTAT_Bits;

/** \brief Safety ENDINIT Control Register 0 */
typedef struct _Ifx_SCU_SEICON0_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit ENDINIT:1;       /**< \brief [1:1] End-of-Initialization Control Bit - ENDINIT (rwh) */
    Ifx_Strict_32Bit EPW:14;          /**< \brief [15:2] User-Definable Safety ENDINIT Password Field - EPW (rwh) */
    Ifx_Strict_32Bit REL:16;          /**< \brief [31:16] Reload Value for the Safety  ENDINIT Timeout Counter - REL (r) */
} Ifx_SCU_SEICON0_Bits;

/** \brief Safety ENDINIT Control Register 1 */
typedef struct _Ifx_SCU_SEICON1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit IR0:1;             /**< \brief [2:2] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit DR:1;              /**< \brief [3:3] Disable Request Control Bit - DR (rw) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit IR1:1;             /**< \brief [5:5] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SCU_SEICON1_Bits;

/** \brief Safety ENDINIT Timeout Status Register */
typedef struct _Ifx_SCU_SEISR_Bits
{
    Ifx_UReg_32Bit AE:1;              /**< \brief [0:0] SEICON0 Access Error Status Flag - AE (rh) */
    Ifx_UReg_32Bit OE:1;              /**< \brief [1:1] SEI Timeout Overflow Error Status Flag - OE (rh) */
    Ifx_UReg_32Bit IS0:1;             /**< \brief [2:2] SEI Timeout Input Clock Status - IS0, IS1 (rh) */
    Ifx_UReg_32Bit DS:1;              /**< \brief [3:3] SEI Enable/Disable Status Flag - DS (rh) */
    Ifx_UReg_32Bit TO:1;              /**< \brief [4:4] SEI Time-Out Mode Flag - TO (rh) */
    Ifx_UReg_32Bit IS1:1;             /**< \brief [5:5] SEI Timeout Input Clock Status - IS0, IS1 (rh) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit TIM:16;            /**< \brief [31:16] Timer Value - TIM (rh) */
} Ifx_SCU_SEISR_Bits;

/** \brief Start-up Configuration Register */
typedef struct _Ifx_SCU_STCON_Bits
{
    Ifx_UReg_32Bit reserved_0:13;     /**< \brief [12:0] \internal Reserved */
    Ifx_UReg_32Bit SFCBAE:1;          /**< \brief [13:13] Set Flash Config. Sector Access Enable - SFCBAE (w) */
    Ifx_UReg_32Bit CFCBAE:1;          /**< \brief [14:14] Clear Flash Config. Sector Access Enable - CFCBAE (w) */
    Ifx_UReg_32Bit STP:1;             /**< \brief [15:15] Start-up Protection Setting - STP (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_STCON_Bits;

/** \brief Start-up Memory Register 1 */
typedef struct _Ifx_SCU_STMEM1_Bits
{
    Ifx_UReg_32Bit MEM:32;            /**< \brief [31:0] Memory - MEM (rw) */
} Ifx_SCU_STMEM1_Bits;

/** \brief Start-up Memory Register 2 */
typedef struct _Ifx_SCU_STMEM2_Bits
{
    Ifx_UReg_32Bit MEM:32;            /**< \brief [31:0] Memory - MEM (rw) */
} Ifx_SCU_STMEM2_Bits;

/** \brief Start-up Memory Register 3 */
typedef struct _Ifx_SCU_STMEM3_Bits
{
    Ifx_UReg_32Bit MEM:32;            /**< \brief [31:0] Memory - MEM (rw) */
} Ifx_SCU_STMEM3_Bits;

/** \brief Start-up Memory Register 4 */
typedef struct _Ifx_SCU_STMEM4_Bits
{
    Ifx_UReg_32Bit MEM:32;            /**< \brief [31:0] Memory - MEM (rw) */
} Ifx_SCU_STMEM4_Bits;

/** \brief Start-up Memory Register 5 */
typedef struct _Ifx_SCU_STMEM5_Bits
{
    Ifx_UReg_32Bit MEM:32;            /**< \brief [31:0] Memory - MEM (rw) */
} Ifx_SCU_STMEM5_Bits;

/** \brief Start-up Memory Register 6 */
typedef struct _Ifx_SCU_STMEM6_Bits
{
    Ifx_UReg_32Bit MEM:32;            /**< \brief [31:0] Memory - MEM (rw) */
} Ifx_SCU_STMEM6_Bits;

/** \brief Start-up Status Register */
typedef struct _Ifx_SCU_STSTAT_Bits
{
    Ifx_UReg_32Bit HWCFG:8;           /**< \brief [7:0] Hardware Configuration Setting - HWCFG (rh) */
    Ifx_UReg_32Bit FTM:7;             /**< \brief [14:8] Firmware Test Setting - FTM (rh) */
    Ifx_UReg_32Bit MODE:1;            /**< \brief [15:15] MODE - MODE (rh) */
    Ifx_UReg_32Bit FCBAE:1;           /**< \brief [16:16] Flash Config. Sector Access Enable - FCBAE (rh) */
    Ifx_UReg_32Bit LUDIS:1;           /**< \brief [17:17] Latch Update Disable - LUDIS (rh) */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit TRSTL:1;           /**< \brief [19:19] TRSTL Status - TRSTL (rh) */
    Ifx_UReg_32Bit SPDEN:1;           /**< \brief [20:20] Single Pin DAP Mode Enable - SPDEN (rh) */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit RAMINT:1;          /**< \brief [24:24] RAM Content Security Integrity - RAMINT (rh) */
    Ifx_UReg_32Bit reserved_25:3;     /**< \brief [27:25] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_SCU_STSTAT_Bits;

/** \brief Alternate Address Control Register */
typedef struct _Ifx_SCU_SWAPCTRL_Bits
{
    Ifx_UReg_32Bit ADDRCFG:2;         /**< \brief [1:0] Address Configuration (rw) */
    Ifx_UReg_32Bit SPARE:14;          /**< \brief [15:2] Spare address configuration registers (rw) */
    Ifx_UReg_32Bit Reserved:16;       /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_SWAPCTRL_Bits;

/** \brief Software Reset Configuration Register */
typedef struct _Ifx_SCU_SWRSTCON_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit SWRSTREQ:1;        /**< \brief [1:1] Software Reset Request - SWRSTREQ (w) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_SWRSTCON_Bits;

/** \brief System Control Register */
typedef struct _Ifx_SCU_SYSCON_Bits
{
    Ifx_UReg_32Bit CCTRIG0:1;         /**< \brief [0:0] Capture Compare Trigger 0 - CCTRIG0 (rw) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit RAMINTM:2;         /**< \brief [3:2] RAM Integrity Modify - RAMINTM (w) */
    Ifx_UReg_32Bit SETLUDIS:1;        /**< \brief [4:4] Set Latch Update Disable - SETLUDIS (w) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit DDC:1;             /**< \brief [8:8] Disable DXCPL - DDC (rw) */
    Ifx_UReg_32Bit reserved_9:7;      /**< \brief [15:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_SYSCON_Bits;

/** \brief System PLL Configuration 0 Register */
typedef struct _Ifx_SCU_SYSPLLCON0_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit MODEN:1;           /**< \brief [2:2] Modulation Enable - MODEN (rw) */
    Ifx_UReg_32Bit reserved_3:6;      /**< \brief [8:3] \internal Reserved */
    Ifx_UReg_32Bit NDIV:7;            /**< \brief [15:9] N-Divider Value - NDIV (rw) */
    Ifx_UReg_32Bit PLLPWD:1;          /**< \brief [16:16] System PLL Power Saving Mode - PLLPWD (rw) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit RESLD:1;           /**< \brief [18:18] Restart DCO Lock Detection - RESLD (w) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit PDIV:3;            /**< \brief [26:24] P-Divider Value - PDIV (rw) */
    Ifx_UReg_32Bit reserved_27:3;     /**< \brief [29:27] \internal Reserved */
    Ifx_UReg_32Bit INSEL:2;           /**< \brief [31:30] Input Selection - INSEL (rw) */
} Ifx_SCU_SYSPLLCON0_Bits;

/** \brief System PLL Configuration 1 Register */
typedef struct _Ifx_SCU_SYSPLLCON1_Bits
{
    Ifx_UReg_32Bit K2DIV:3;           /**< \brief [2:0] K2-Divider Value - K2DIV (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_SCU_SYSPLLCON1_Bits;

/** \brief System PLL Configuration 2 Register */
typedef struct _Ifx_SCU_SYSPLLCON2_Bits
{
    Ifx_UReg_32Bit MODCFG:16;         /**< \brief [15:0] Modulation Configuration - MODCFG (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_SYSPLLCON2_Bits;

/** \brief System PLL Status Register */
typedef struct _Ifx_SCU_SYSPLLSTAT_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit PWDSTAT:1;         /**< \brief [1:1] System PLL Power-saving Mode Status - PWDSTAT (rh) */
    Ifx_UReg_32Bit LOCK:1;            /**< \brief [2:2] System PLL Lock Status - LOCK (rh) */
    Ifx_UReg_32Bit reserved_3:2;      /**< \brief [4:3] \internal Reserved */
    Ifx_UReg_32Bit K2RDY:1;           /**< \brief [5:5] K2 Divider Ready Status - K2RDY (rh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit MODRUN:1;          /**< \brief [7:7] Modulation Run - MODRUN (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_SCU_SYSPLLSTAT_Bits;

/** \brief Trap Clear Register */
typedef struct _Ifx_SCU_TRAPCLR_Bits
{
    Ifx_UReg_32Bit ESR0T:1;           /**< \brief [0:0] Clear Trap Request Flag ESR0T - ESR0T (w) */
    Ifx_UReg_32Bit ESR1T:1;           /**< \brief [1:1] Clear Trap Request Flag ESR1T - ESR1T (w) */
    Ifx_UReg_32Bit TRAP2:1;           /**< \brief [2:2] Clear Trap Request Flag TRAP2 - TRAP2 (w) */
    Ifx_UReg_32Bit SMUT:1;            /**< \brief [3:3] Clear Trap Request Flag SMUT - SMUT (w) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_SCU_TRAPCLR_Bits;

/** \brief Trap Disable Register 0 */
typedef struct _Ifx_SCU_TRAPDIS0_Bits
{
    Ifx_UReg_32Bit CPU0ESR0T:1;       /**< \brief [0:0] Disable Trap Request ESR0T on CPU0 - CPU0ESR0T (rw) */
    Ifx_UReg_32Bit CPU0ESR1T:1;       /**< \brief [1:1] Disable Trap Request ESR1T on CPU0 - CPU0ESR1T (rw) */
    Ifx_UReg_32Bit CPU0TRAP2T:1;      /**< \brief [2:2] Disable Trap Request TRAP2T on CPU0 - CPU0TRAP2T (rw) */
    Ifx_UReg_32Bit CPU0SMUT:1;        /**< \brief [3:3] Disable Trap Request SMUT on CPU0 - CPU0SMUT (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit CPU1ESR0T:1;       /**< \brief [8:8] Disable Trap Request ESR0T on CPU1 (If product has CPU1) - CPU1ESR0T (rw) */
    Ifx_UReg_32Bit CPU1ESR1T:1;       /**< \brief [9:9] Disable Trap Request ESR1T on CPU1 (If product has CPU1) - CPU1ESR1T (rw) */
    Ifx_UReg_32Bit CPU1TRAP2T:1;      /**< \brief [10:10] Disable Trap Request TRAP2T on CPU1 (If product has CPU1) - CPU1TRAP2T (rw) */
    Ifx_UReg_32Bit CPU1SMUT:1;        /**< \brief [11:11] Disable Trap Request SMUT on CPU1 (If product has CPU1) - CPU1SMUT (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit CPU2ESR0T:1;       /**< \brief [16:16] Disable Trap Request ESR0T on CPU2 (If product has CPU2) - CPU2ESR0T (rw) */
    Ifx_UReg_32Bit CPU2ESR1T:1;       /**< \brief [17:17] Disable Trap Request ESR1T on CPU2 (If product has CPU2) - CPU2ESR1T (rw) */
    Ifx_UReg_32Bit CPU2TRAP2T:1;      /**< \brief [18:18] Disable Trap Request TRAP2T on CPU2 (If product has CPU2) - CPU2TRAP2T (rw) */
    Ifx_UReg_32Bit CPU2SMUT:1;        /**< \brief [19:19] Disable Trap Request SMUT on CPU2 (If product has CPU2) - CPU2SMUT (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:4;     /**< \brief [27:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_SCU_TRAPDIS0_Bits;

/** \brief Trap Disable Register 1 */
typedef struct _Ifx_SCU_TRAPDIS1_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:4;      /**< \brief [11:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_TRAPDIS1_Bits;

/** \brief Trap Set Register */
typedef struct _Ifx_SCU_TRAPSET_Bits
{
    Ifx_UReg_32Bit ESR0T:1;           /**< \brief [0:0] Set Trap Request Flag ESR0T - ESR0T (w) */
    Ifx_UReg_32Bit ESR1T:1;           /**< \brief [1:1] Set Trap Request Flag ESR1T - ESR1T (w) */
    Ifx_UReg_32Bit TRAP2:1;           /**< \brief [2:2] Set Trap Request Flag TRAP2 - TRAP2 (w) */
    Ifx_UReg_32Bit SMUT:1;            /**< \brief [3:3] Set Trap Request Flag SMUT - SMUT (w) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_SCU_TRAPSET_Bits;

/** \brief Trap Status Register */
typedef struct _Ifx_SCU_TRAPSTAT_Bits
{
    Ifx_UReg_32Bit ESR0T:1;           /**< \brief [0:0] ESR0 Trap Request Flag - ESR0T (rh) */
    Ifx_UReg_32Bit ESR1T:1;           /**< \brief [1:1] ESR1 Trap Request Flag - ESR1T (rh) */
    Ifx_UReg_32Bit TRAP2:1;           /**< \brief [2:2] Trap Bit 2 Request Flag - TRAP2 (rh) */
    Ifx_UReg_32Bit SMUT:1;            /**< \brief [3:3] SMU Alarm Trap Request Flag - SMUT (rh) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_SCU_TRAPSTAT_Bits;

/** \brief CPU${y} WDT Control Register 0 */
typedef struct _Ifx_SCU_WDTCPU_CON0_Bits
{
    Ifx_Strict_32Bit ENDINIT:1;       /**< \brief [0:0] End-of-Initialization Control Bit - ENDINIT (rwh) */
    Ifx_Strict_32Bit LCK:1;           /**< \brief [1:1] Lock Bit to Control Access to WDTxCON0 - LCK (rwh) */
    Ifx_Strict_32Bit PW:14;           /**< \brief [15:2] User-Definable Password Field for Access to WDTxCON0 - PW (rwh) */
    Ifx_Strict_32Bit REL:16;          /**< \brief [31:16] Reload Value for the WDT (also Time Check Value) - REL (rw) */
} Ifx_SCU_WDTCPU_CON0_Bits;

/** \brief CPU${y} WDT Control Register 1 */
typedef struct _Ifx_SCU_WDTCPU_CON1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit IR0:1;             /**< \brief [2:2] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit DR:1;              /**< \brief [3:3] Disable Request Control Bit - DR (rw) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit IR1:1;             /**< \brief [5:5] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit UR:1;              /**< \brief [6:6] Unlock Restriction Request Control Bit - UR (rw) */
    Ifx_UReg_32Bit PAR:1;             /**< \brief [7:7] Password Auto-sequence Request Bit - PAR (rw) */
    Ifx_UReg_32Bit TCR:1;             /**< \brief [8:8] Counter Check Request Bit - TCR (rw) */
    Ifx_UReg_32Bit TCTR:7;            /**< \brief [15:9] Timer Check Tolerance Request - TCTR (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_WDTCPU_CON1_Bits;

/** \brief CPU${y} WDT Status Register */
typedef struct _Ifx_SCU_WDTCPU_SR_Bits
{
    Ifx_UReg_32Bit AE:1;              /**< \brief [0:0] Watchdog Access Error Status Flag - AE (rh) */
    Ifx_UReg_32Bit OE:1;              /**< \brief [1:1] Watchdog Overflow Error Status Flag - OE (rh) */
    Ifx_UReg_32Bit IS0:1;             /**< \brief [2:2] Watchdog Input Clock Status - IS1,IS0 (rh) */
    Ifx_UReg_32Bit DS:1;              /**< \brief [3:3] Watchdog Enable/Disable Status Flag - DS (rh) */
    Ifx_UReg_32Bit TO:1;              /**< \brief [4:4] Watchdog Time-Out Mode Flag - TO (rh) */
    Ifx_UReg_32Bit IS1:1;             /**< \brief [5:5] Watchdog Input Clock Status - IS1,IS0 (rh) */
    Ifx_UReg_32Bit US:1;              /**< \brief [6:6] SMU Unlock Restriction Status Flag - US (rh) */
    Ifx_UReg_32Bit PAS:1;             /**< \brief [7:7] Password Auto-sequence Status Flag - PAS (rh) */
    Ifx_UReg_32Bit TCS:1;             /**< \brief [8:8] Timer Check Status Flag - TCS (rh) */
    Ifx_UReg_32Bit TCT:7;             /**< \brief [15:9] Timer Check Tolerance - TCT (rh) */
    Ifx_UReg_32Bit TIM:16;            /**< \brief [31:16] Timer Value - TIM (rh) */
} Ifx_SCU_WDTCPU_SR_Bits;

/** \brief Safety WDT Control Register 0 */
typedef struct _Ifx_SCU_WDTS_CON0_Bits
{
    Ifx_Strict_32Bit ENDINIT:1;       /**< \brief [0:0] End-of-Initialization Control Bit - ENDINIT (rwh) */
    Ifx_Strict_32Bit LCK:1;           /**< \brief [1:1] Lock Bit to Control Access to WDTxCON0 - LCK (rwh) */
    Ifx_Strict_32Bit PW:14;           /**< \brief [15:2] User-Definable Password Field for Access to WDTxCON0 - PW (rwh) */
    Ifx_Strict_32Bit REL:16;          /**< \brief [31:16] Reload Value for the WDT (also Time Check Value) - REL (rw) */
} Ifx_SCU_WDTS_CON0_Bits;

/** \brief Safety WDT Control Register 1 */
typedef struct _Ifx_SCU_WDTS_CON1_Bits
{
    Ifx_UReg_32Bit CLRIRF:1;          /**< \brief [0:0] Clear Internal Reset Flag - CLRIRF (rwh) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit IR0:1;             /**< \brief [2:2] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit DR:1;              /**< \brief [3:3] Disable Request Control Bit - DR (rw) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit IR1:1;             /**< \brief [5:5] Input Frequency Request Control - IR1,IR0 (rw) */
    Ifx_UReg_32Bit UR:1;              /**< \brief [6:6] Unlock Restriction Request Control Bit - UR (rw) */
    Ifx_UReg_32Bit PAR:1;             /**< \brief [7:7] Password Auto-sequence Request Bit - PAR (rw) */
    Ifx_UReg_32Bit TCR:1;             /**< \brief [8:8] Counter Check Request Bit - TCR (rw) */
    Ifx_UReg_32Bit TCTR:7;            /**< \brief [15:9] Timer Check Tolerance Request - TCTR (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SCU_WDTS_CON1_Bits;

/** \brief Safety WDT Status Register */
typedef struct _Ifx_SCU_WDTS_SR_Bits
{
    Ifx_UReg_32Bit AE:1;              /**< \brief [0:0] Watchdog Access Error Status Flag - AE (rh) */
    Ifx_UReg_32Bit OE:1;              /**< \brief [1:1] Watchdog Overflow Error Status Flag - OE (rh) */
    Ifx_UReg_32Bit IS0:1;             /**< \brief [2:2] Watchdog Input Clock Status - IS1,IS0 (rh) */
    Ifx_UReg_32Bit DS:1;              /**< \brief [3:3] Watchdog Enable/Disable Status Flag - DS (rh) */
    Ifx_UReg_32Bit TO:1;              /**< \brief [4:4] Watchdog Time-Out Mode Flag - TO (rh) */
    Ifx_UReg_32Bit IS1:1;             /**< \brief [5:5] Watchdog Input Clock Status - IS1,IS0 (rh) */
    Ifx_UReg_32Bit US:1;              /**< \brief [6:6] SMU Unlock Restriction Status Flag - US (rh) */
    Ifx_UReg_32Bit PAS:1;             /**< \brief [7:7] Password Auto-sequence Status Flag - PAS (rh) */
    Ifx_UReg_32Bit TCS:1;             /**< \brief [8:8] Timer Check Status Flag - TCS (rh) */
    Ifx_UReg_32Bit TCT:7;             /**< \brief [15:9] Timer Check Tolerance - TCT (rh) */
    Ifx_UReg_32Bit TIM:16;            /**< \brief [31:16] Timer Value - TIM (rh) */
} Ifx_SCU_WDTS_SR_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_scu_Registers_union
 * \{   */
/** \brief Access Enable Register 00   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ACCEN00_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_ACCEN00;

/** \brief Access Enable Register 01   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ACCEN01_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_ACCEN01;

/** \brief Access Enable Register 10   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ACCEN10_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_ACCEN10;

/** \brief Access Enable Register 11   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ACCEN11_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_ACCEN11;

/** \brief Application Reset Disable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ARSTDIS_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_ARSTDIS;

/** \brief CCU Clock Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON0_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON0;

/** \brief CCU Clock Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON1_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON1;

/** \brief CCU Clock Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON2_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON2;

/** \brief CCU Clock Control Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON3_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON3;

/** \brief CCU Clock Control Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON4_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON4;

/** \brief CCU Clock Control Register 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON5_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON5;

/** \brief CCU Clock Control Register 6   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON6_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON6;

/** \brief CCU Clock Control Register 7   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON7_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON7;

/** \brief CCU Clock Control Register 8   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CCUCON8_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_CCUCON8;

/** \brief Chip Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_CHIPID_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_CHIPID;

/** \brief Core Die Temperature Sensor Limit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_DTSCLIM_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_DTSCLIM;

/** \brief Core Die Temperature Sensor Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_DTSCSTAT_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_DTSCSTAT;

/** \brief ENDINIT Global Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EICON0_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_EICON0;

/** \brief ENDINIT Global Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EICON1_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_EICON1;

/** \brief External Input Channel Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EICR_Bits B;              /**< \brief Bitfield access */
} Ifx_SCU_EICR;

/** \brief External Input Filter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EIFILT_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_EIFILT;

/** \brief External Input Flag Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EIFR_Bits B;              /**< \brief Bitfield access */
} Ifx_SCU_EIFR;

/** \brief ENDINIT Timeout Counter Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EISR_Bits B;              /**< \brief Bitfield access */
} Ifx_SCU_EISR;

/** \brief Emergency Stop Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EMSR_Bits B;              /**< \brief Bitfield access */
} Ifx_SCU_EMSR;

/** \brief Emergency Stop Software set and clear register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EMSSW_Bits B;             /**< \brief Bitfield access */
} Ifx_SCU_EMSSW;

/** \brief ESR${x} Input Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ESRCFGX_ESRCFGX_Bits B;    /**< \brief Bitfield access */
} Ifx_SCU_ESRCFGX_ESRCFGX;

/** \brief ESR Output Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ESROCFG_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_ESROCFG;

/** \brief External Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_EXTCON_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_EXTCON;

/** \brief Fractional Divider Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_FDR_Bits B;               /**< \brief Bitfield access */
} Ifx_SCU_FDR;

/** \brief Flag Modification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_FMR_Bits B;               /**< \brief Bitfield access */
} Ifx_SCU_FMR;

/** \brief Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_SCU_ID;

/** \brief Flag Gating Register ${j}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_IGCR_Bits B;              /**< \brief Bitfield access */
} Ifx_SCU_IGCR;

/** \brief ESR Input Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_IN_Bits B;                /**< \brief Bitfield access */
} Ifx_SCU_IN;

/** \brief Input/Output Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_IOCR_Bits B;              /**< \brief Bitfield access */
} Ifx_SCU_IOCR;

/** \brief Logic BIST Control 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_LBISTCTRL0_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_LBISTCTRL0;

/** \brief Logic BIST Control 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_LBISTCTRL1_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_LBISTCTRL1;

/** \brief Logic BIST Control 2 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_LBISTCTRL2_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_LBISTCTRL2;

/** \brief Logic BIST Control 3 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_LBISTCTRL3_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_LBISTCTRL3;

/** \brief LCL CPU0 and CPU2 Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_LCLCON0_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_LCLCON0;

/** \brief LCL CPU1 and CPU3 Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_LCLCON1_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_LCLCON1;

/** \brief LCL Test Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_LCLTEST_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_LCLTEST;

/** \brief Manufacturer Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_MANID_Bits B;             /**< \brief Bitfield access */
} Ifx_SCU_MANID;

/** \brief ESR Output Modification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_OMR_Bits B;               /**< \brief Bitfield access */
} Ifx_SCU_OMR;

/** \brief OSC Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_OSCCON_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_OSCCON;

/** \brief ESR Output Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_OUT_Bits B;               /**< \brief Bitfield access */
} Ifx_SCU_OUT;

/** \brief Overlay Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_OVCCON_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_OVCCON;

/** \brief Overlay Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_OVCENABLE_Bits B;         /**< \brief Bitfield access */
} Ifx_SCU_OVCENABLE;

/** \brief Pad Disable Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PDISC_Bits B;             /**< \brief Bitfield access */
} Ifx_SCU_PDISC;

/** \brief ESR Pad Driver Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PDR_Bits B;               /**< \brief Bitfield access */
} Ifx_SCU_PDR;

/** \brief Pattern Detection Result Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PDRR_Bits B;              /**< \brief Bitfield access */
} Ifx_SCU_PDRR;

/** \brief Peripheral PLL Configuration 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PERPLLCON0_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_PERPLLCON0;

/** \brief Peripheral PLL Configuration 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PERPLLCON1_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_PERPLLCON1;

/** \brief Peripheral PLL Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PERPLLSTAT_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_PERPLLSTAT;

/** \brief Power Management Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMCSR0_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_PMCSR0;

/** \brief Power Management Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMCSR1_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_PMCSR1;

/** \brief Power Management Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMCSR2_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_PMCSR2;

/** \brief Power Management Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMCSR3_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_PMCSR3;

/** \brief Power Management Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMCSR4_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_PMCSR4;

/** \brief Power Management Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMCSR5_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_PMCSR5;

/** \brief Power Management Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMSTAT0_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_PMSTAT0;

/** \brief Standby and Wake-up Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMSWCR1_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_PMSWCR1;

/** \brief Power Management Transition Control and Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMTRCSR0_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_PMTRCSR0;

/** \brief Power Management Transition Control and Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMTRCSR1_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_PMTRCSR1;

/** \brief Power Management Transition Control and Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMTRCSR2_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_PMTRCSR2;

/** \brief Power Management Transition Control and Status Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_PMTRCSR3_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_PMTRCSR3;

/** \brief Reset Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_RSTCON_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_RSTCON;

/** \brief Additional Reset Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_RSTCON2_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_RSTCON2;

/** \brief Reset Configuration Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_RSTCON3_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_RSTCON3;

/** \brief Reset Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_RSTSTAT_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_RSTSTAT;

/** \brief Safety ENDINIT Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SEICON0_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_SEICON0;

/** \brief Safety ENDINIT Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SEICON1_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_SEICON1;

/** \brief Safety ENDINIT Timeout Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SEISR_Bits B;             /**< \brief Bitfield access */
} Ifx_SCU_SEISR;

/** \brief Start-up Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STCON_Bits B;             /**< \brief Bitfield access */
} Ifx_SCU_STCON;

/** \brief Start-up Memory Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STMEM1_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_STMEM1;

/** \brief Start-up Memory Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STMEM2_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_STMEM2;

/** \brief Start-up Memory Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STMEM3_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_STMEM3;

/** \brief Start-up Memory Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STMEM4_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_STMEM4;

/** \brief Start-up Memory Register 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STMEM5_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_STMEM5;

/** \brief Start-up Memory Register 6   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STMEM6_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_STMEM6;

/** \brief Start-up Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_STSTAT_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_STSTAT;

/** \brief Alternate Address Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SWAPCTRL_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_SWAPCTRL;

/** \brief Software Reset Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SWRSTCON_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_SWRSTCON;

/** \brief System Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SYSCON_Bits B;            /**< \brief Bitfield access */
} Ifx_SCU_SYSCON;

/** \brief System PLL Configuration 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SYSPLLCON0_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_SYSPLLCON0;

/** \brief System PLL Configuration 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SYSPLLCON1_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_SYSPLLCON1;

/** \brief System PLL Configuration 2 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SYSPLLCON2_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_SYSPLLCON2;

/** \brief System PLL Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_SYSPLLSTAT_Bits B;        /**< \brief Bitfield access */
} Ifx_SCU_SYSPLLSTAT;

/** \brief Trap Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_TRAPCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_TRAPCLR;

/** \brief Trap Disable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_TRAPDIS0_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_TRAPDIS0;

/** \brief Trap Disable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_TRAPDIS1_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_TRAPDIS1;

/** \brief Trap Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_TRAPSET_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_TRAPSET;

/** \brief Trap Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_TRAPSTAT_Bits B;          /**< \brief Bitfield access */
} Ifx_SCU_TRAPSTAT;

/** \brief CPU${y} WDT Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_WDTCPU_CON0_Bits B;       /**< \brief Bitfield access */
} Ifx_SCU_WDTCPU_CON0;

/** \brief CPU${y} WDT Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_WDTCPU_CON1_Bits B;       /**< \brief Bitfield access */
} Ifx_SCU_WDTCPU_CON1;

/** \brief CPU${y} WDT Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_WDTCPU_SR_Bits B;         /**< \brief Bitfield access */
} Ifx_SCU_WDTCPU_SR;

/** \brief Safety WDT Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_WDTS_CON0_Bits B;         /**< \brief Bitfield access */
} Ifx_SCU_WDTS_CON0;

/** \brief Safety WDT Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_WDTS_CON1_Bits B;         /**< \brief Bitfield access */
} Ifx_SCU_WDTS_CON1;

/** \brief Safety WDT Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SCU_WDTS_SR_Bits B;           /**< \brief Bitfield access */
} Ifx_SCU_WDTS_SR;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Scu_ESRCFGx_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ESRCFGX object */
typedef volatile struct _Ifx_SCU_ESRCFGX
{
       Ifx_SCU_ESRCFGX_ESRCFGX             ESRCFGX;                /**< \brief 0, ESR${x} Input Configuration Register*/
} Ifx_SCU_ESRCFGX;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Scu_WDTCPU_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief WDTCPU object */
typedef volatile struct _Ifx_SCU_WDTCPU
{
       Ifx_SCU_WDTCPU_CON0                 CON0;                   /**< \brief 0, */
       Ifx_SCU_WDTCPU_CON1                 CON1;                   /**< \brief 4, */
       Ifx_SCU_WDTCPU_SR                   SR;                     /**< \brief 8, */
} Ifx_SCU_WDTCPU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Scu_WDTS_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief WDTS object */
typedef volatile struct _Ifx_SCU_WDTS
{
       Ifx_SCU_WDTS_CON0                   CON0;                   /**< \brief 0, Safety WDT Control Register 0*/
       Ifx_SCU_WDTS_CON1                   CON1;                   /**< \brief 4, Safety WDT Control Register 1*/
       Ifx_SCU_WDTS_SR                     SR;                     /**< \brief 8, Safety WDT Status Register*/
} Ifx_SCU_WDTS;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Scu_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief SCU object */
typedef volatile struct _Ifx_SCU
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_SCU_ID                          ID;                     /**< \brief 8, Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_SCU_OSCCON                      OSCCON;                 /**< \brief 10, OSC Control Register*/
       Ifx_SCU_SYSPLLSTAT                  SYSPLLSTAT;             /**< \brief 14, System PLL Status Register*/
       Ifx_SCU_SYSPLLCON0                  SYSPLLCON0;             /**< \brief 18, System PLL Configuration 0 Register*/
       Ifx_SCU_SYSPLLCON1                  SYSPLLCON1;             /**< \brief 1C, System PLL Configuration 1 Register*/
       Ifx_SCU_SYSPLLCON2                  SYSPLLCON2;             /**< \brief 20, System PLL Configuration 2 Register*/
       Ifx_SCU_PERPLLSTAT                  PERPLLSTAT;             /**< \brief 24, Peripheral PLL Status Register*/
       Ifx_SCU_PERPLLCON0                  PERPLLCON0;             /**< \brief 28, Peripheral PLL Configuration 0 Register*/
       Ifx_SCU_PERPLLCON1                  PERPLLCON1;             /**< \brief 2C, Peripheral PLL Configuration 1 Register*/
       Ifx_SCU_CCUCON0                     CCUCON0;                /**< \brief 30, CCU Clock Control Register 0*/
       Ifx_SCU_CCUCON1                     CCUCON1;                /**< \brief 34, CCU Clock Control Register 1*/
       Ifx_SCU_FDR                         FDR;                    /**< \brief 38, Fractional Divider Register*/
       Ifx_SCU_EXTCON                      EXTCON;                 /**< \brief 3C, External Clock Control Register*/
       Ifx_SCU_CCUCON2                     CCUCON2;                /**< \brief 40, CCU Clock Control Register 2*/
       Ifx_SCU_CCUCON3                     CCUCON3;                /**< \brief 44, CCU Clock Control Register 3*/
       Ifx_SCU_CCUCON4                     CCUCON4;                /**< \brief 48, CCU Clock Control Register 4*/
       Ifx_SCU_CCUCON5                     CCUCON5;                /**< \brief 4C, CCU Clock Control Register 5*/
       Ifx_SCU_RSTSTAT                     RSTSTAT;                /**< \brief 50, */
       Ifx_UReg_8Bit                       reserved_54[4];         /**< \brief 54, \internal Reserved */
       Ifx_SCU_RSTCON                      RSTCON;                 /**< \brief 58, */
       Ifx_SCU_ARSTDIS                     ARSTDIS;                /**< \brief 5C, */
       Ifx_SCU_SWRSTCON                    SWRSTCON;               /**< \brief 60, */
       Ifx_SCU_RSTCON2                     RSTCON2;                /**< \brief 64, */
       Ifx_SCU_RSTCON3                     RSTCON3;                /**< \brief 68, */
       Ifx_UReg_8Bit                       reserved_6C[4];         /**< \brief 6C, \internal Reserved */
       Ifx_SCU_ESRCFGX                     ESRCFGX[2];             /**< \brief 70, ESR${x} Input Configuration Register*/
       Ifx_SCU_ESROCFG                     ESROCFG;                /**< \brief 78, ESR Output Configuration Register*/
       Ifx_SCU_SYSCON                      SYSCON;                 /**< \brief 7C, System Control Register*/
       Ifx_SCU_CCUCON6                     CCUCON6;                /**< \brief 80, CCU Clock Control Register 6*/
       Ifx_SCU_CCUCON7                     CCUCON7;                /**< \brief 84, CCU Clock Control Register 7*/
       Ifx_SCU_CCUCON8                     CCUCON8;                /**< \brief 88, CCU Clock Control Register 8*/
       Ifx_UReg_8Bit                       reserved_8C[16];        /**< \brief 8C, \internal Reserved */
       Ifx_SCU_PDR                         PDR;                    /**< \brief 9C, ESR Pad Driver Mode Register*/
       Ifx_SCU_IOCR                        IOCR;                   /**< \brief A0, Input/Output Control Register*/
       Ifx_SCU_OUT                         OUT;                    /**< \brief A4, ESR Output Register*/
       Ifx_SCU_OMR                         OMR;                    /**< \brief A8, ESR Output Modification Register*/
       Ifx_SCU_IN                          IN;                     /**< \brief AC, ESR Input Register*/
       Ifx_UReg_8Bit                       reserved_B0[16];        /**< \brief B0, \internal Reserved */
       Ifx_SCU_STSTAT                      STSTAT;                 /**< \brief C0, */
       Ifx_SCU_STCON                       STCON;                  /**< \brief C4, Start-up Configuration Register*/
       Ifx_SCU_PMCSR0                      PMCSR0;                 /**< \brief C8, Power Management Control and Status Register*/
       Ifx_SCU_PMCSR1                      PMCSR1;                 /**< \brief CC, Power Management Control and Status Register*/
       Ifx_SCU_PMCSR2                      PMCSR2;                 /**< \brief D0, Power Management Control and Status Register*/
       Ifx_SCU_PMCSR3                      PMCSR3;                 /**< \brief D4, Power Management Control and Status Register*/
       Ifx_SCU_PMCSR4                      PMCSR4;                 /**< \brief D8, Power Management Control and Status Register*/
       Ifx_SCU_PMCSR5                      PMCSR5;                 /**< \brief DC, Power Management Control and Status Register*/
       Ifx_UReg_8Bit                       reserved_E0[4];         /**< \brief E0, \internal Reserved */
       Ifx_SCU_PMSTAT0                     PMSTAT0;                /**< \brief E4, Power Management Status Register 0*/
       Ifx_SCU_PMSWCR1                     PMSWCR1;                /**< \brief E8, Standby and Wake-up Control Register 1*/
       Ifx_UReg_8Bit                       reserved_EC[16];        /**< \brief EC, \internal Reserved */
       Ifx_SCU_EMSR                        EMSR;                   /**< \brief FC, Emergency Stop Register*/
       Ifx_SCU_EMSSW                       EMSSW;                  /**< \brief 100, Emergency Stop Software set and clear register*/
       Ifx_SCU_DTSCSTAT                    DTSCSTAT;               /**< \brief 104, Core Die Temperature Sensor Status Register*/
       Ifx_SCU_DTSCLIM                     DTSCLIM;                /**< \brief 108, Core Die Temperature Sensor Limit Register*/
       Ifx_UReg_8Bit                       reserved_10C[20];       /**< \brief 10C, \internal Reserved */
       Ifx_SCU_TRAPDIS1                    TRAPDIS1;               /**< \brief 120, Trap Disable Register 1*/
       Ifx_SCU_TRAPSTAT                    TRAPSTAT;               /**< \brief 124, Trap Status Register*/
       Ifx_SCU_TRAPSET                     TRAPSET;                /**< \brief 128, Trap Set Register*/
       Ifx_SCU_TRAPCLR                     TRAPCLR;                /**< \brief 12C, Trap Clear Register*/
       Ifx_SCU_TRAPDIS0                    TRAPDIS0;               /**< \brief 130, Trap Disable Register 0*/
       Ifx_SCU_LCLCON0                     LCLCON0;                /**< \brief 134, LCL CPU0 and CPU2 Control Register*/
       Ifx_SCU_LCLCON1                     LCLCON1;                /**< \brief 138, LCL CPU1 and CPU3 Control Register*/
       Ifx_SCU_LCLTEST                     LCLTEST;                /**< \brief 13C, LCL Test Register*/
       Ifx_SCU_CHIPID                      CHIPID;                 /**< \brief 140, Chip Identification Register*/
       Ifx_SCU_MANID                       MANID;                  /**< \brief 144, Manufacturer Identification Register*/
       Ifx_UReg_8Bit                       reserved_148[4];        /**< \brief 148, \internal Reserved */
       Ifx_SCU_SWAPCTRL                    SWAPCTRL;               /**< \brief 14C, Alternate Address Control Register*/
       Ifx_UReg_8Bit                       reserved_150[20];       /**< \brief 150, \internal Reserved */
       Ifx_SCU_LBISTCTRL0                  LBISTCTRL0;             /**< \brief 164, Logic BIST Control 0 Register*/
       Ifx_SCU_LBISTCTRL1                  LBISTCTRL1;             /**< \brief 168, Logic BIST Control 1 Register*/
       Ifx_SCU_LBISTCTRL2                  LBISTCTRL2;             /**< \brief 16C, Logic BIST Control 2 Register*/
       Ifx_SCU_LBISTCTRL3                  LBISTCTRL3;             /**< \brief 170, Logic BIST Control 3 Register*/
       Ifx_UReg_8Bit                       reserved_174[16];       /**< \brief 174, \internal Reserved */
       Ifx_SCU_STMEM1                      STMEM1;                 /**< \brief 184, Start-up Memory Register 1*/
       Ifx_SCU_STMEM2                      STMEM2;                 /**< \brief 188, Start-up Memory Register 2*/
       Ifx_SCU_PDISC                       PDISC;                  /**< \brief 18C, Pad Disable Control Register*/
       Ifx_UReg_8Bit                       reserved_190[8];        /**< \brief 190, \internal Reserved */
       Ifx_SCU_PMTRCSR0                    PMTRCSR0;               /**< \brief 198, Power Management Transition Control and Status Register 0*/
       Ifx_SCU_PMTRCSR1                    PMTRCSR1;               /**< \brief 19C, Power Management Transition Control and Status Register 1*/
       Ifx_SCU_PMTRCSR2                    PMTRCSR2;               /**< \brief 1A0, Power Management Transition Control and Status Register 2*/
       Ifx_SCU_PMTRCSR3                    PMTRCSR3;               /**< \brief 1A4, Power Management Transition Control and Status Register 3*/
       Ifx_UReg_8Bit                       reserved_1A8[24];       /**< \brief 1A8, \internal Reserved */
       Ifx_SCU_STMEM3                      STMEM3;                 /**< \brief 1C0, Start-up Memory Register 3*/
       Ifx_SCU_STMEM4                      STMEM4;                 /**< \brief 1C4, Start-up Memory Register 4*/
       Ifx_SCU_STMEM5                      STMEM5;                 /**< \brief 1C8, Start-up Memory Register 5*/
       Ifx_SCU_STMEM6                      STMEM6;                 /**< \brief 1CC, Start-up Memory Register 6*/
       Ifx_UReg_8Bit                       reserved_1D0[16];       /**< \brief 1D0, \internal Reserved */
       Ifx_SCU_OVCENABLE                   OVCENABLE;              /**< \brief 1E0, Overlay Enable Register*/
       Ifx_SCU_OVCCON                      OVCCON;                 /**< \brief 1E4, Overlay Control Register*/
       Ifx_UReg_8Bit                       reserved_1E8[36];       /**< \brief 1E8, \internal Reserved */
       Ifx_SCU_EIFILT                      EIFILT;                 /**< \brief 20C, External Input Filter Register*/
       Ifx_SCU_EICR                        EICR[4];                /**< \brief 210, External Input Channel Register ${i}*/
       Ifx_SCU_EIFR                        EIFR;                   /**< \brief 220, External Input Flag Register*/
       Ifx_SCU_FMR                         FMR;                    /**< \brief 224, Flag Modification Register*/
       Ifx_SCU_PDRR                        PDRR;                   /**< \brief 228, Pattern Detection Result Register*/
       Ifx_SCU_IGCR                        IGCR[4];                /**< \brief 22C, Flag Gating Register ${j}*/
       Ifx_UReg_8Bit                       reserved_23C[16];       /**< \brief 23C, \internal Reserved */
       Ifx_SCU_WDTCPU                      WDTCPU[6];              /**< \brief 24C, */
       Ifx_UReg_8Bit                       reserved_294[8];        /**< \brief 294, \internal Reserved */
       Ifx_SCU_EICON0                      EICON0;                 /**< \brief 29C, ENDINIT Global Control Register 0*/
       Ifx_SCU_EICON1                      EICON1;                 /**< \brief 2A0, ENDINIT Global Control Register 1*/
       Ifx_SCU_EISR                        EISR;                   /**< \brief 2A4, ENDINIT Timeout Counter Status Register*/
       Ifx_SCU_WDTS                        WDTS;                   /**< \brief 2A8, Safety WDT Status Register*/
       Ifx_SCU_SEICON0                     SEICON0;                /**< \brief 2B4, Safety ENDINIT Control Register 0*/
       Ifx_SCU_SEICON1                     SEICON1;                /**< \brief 2B8, Safety ENDINIT Control Register 1*/
       Ifx_SCU_SEISR                       SEISR;                  /**< \brief 2BC, Safety ENDINIT Timeout Status Register*/
       Ifx_UReg_8Bit                       reserved_2C0[304];      /**< \brief 2C0, \internal Reserved */
       Ifx_SCU_ACCEN11                     ACCEN11;                /**< \brief 3F0, Access Enable Register 11*/
       Ifx_SCU_ACCEN10                     ACCEN10;                /**< \brief 3F4, Access Enable Register 10*/
       Ifx_SCU_ACCEN01                     ACCEN01;                /**< \brief 3F8, Access Enable Register 01*/
       Ifx_SCU_ACCEN00                     ACCEN00;                /**< \brief 3FC, Access Enable Register 00*/
} Ifx_SCU;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXSCU_REGDEF_H */
