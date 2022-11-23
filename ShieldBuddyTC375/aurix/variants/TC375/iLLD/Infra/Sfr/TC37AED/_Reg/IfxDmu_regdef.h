/**
 * \file IfxDmu_regdef.h
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
 * \defgroup IfxSfr_Dmu_Registers Dmu Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Dmu_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Dmu_Registers
 * 
 * \defgroup IfxSfr_Dmu_Registers_union Register unions
 * \ingroup IfxSfr_Dmu_Registers
 * 
 * \defgroup IfxSfr_Dmu_Registers_struct Memory map
 * \ingroup IfxSfr_Dmu_Registers
 */
#ifndef IFXDMU_REGDEF_H
#define IFXDMU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Dmu_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_DMU_HF_ACCEN0_Bits
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
} Ifx_DMU_HF_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_DMU_HF_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_DMU_HF_ACCEN1_Bits;

/** \brief Cranking Control Register */
typedef struct _Ifx_DMU_HF_CCONTROL_Bits
{
    Ifx_UReg_32Bit CRANKING:2;        /**< \brief [1:0] Cranking Mode Control - CRANKING (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_DMU_HF_CCONTROL_Bits;

/** \brief Clear Error Register */
typedef struct _Ifx_DMU_HF_CLRE_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit CSQER:1;           /**< \brief [1:1] Clear Command Sequence Error - CSQER (w) */
    Ifx_UReg_32Bit CPROER:1;          /**< \brief [2:2] Clear Protection Error - CPROER (w) */
    Ifx_UReg_32Bit CPVER:1;           /**< \brief [3:3] Clear Program Verify Error - CPVER (w) */
    Ifx_UReg_32Bit CEVER:1;           /**< \brief [4:4] Clear Erase Verify Error - CEVER (w) */
    Ifx_UReg_32Bit CADER:1;           /**< \brief [5:5] Clear SRI Bus Address ECC Error - CADER (w) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_DMU_HF_CLRE_Bits;

/** \brief Flash Confirm Status Register 0 */
typedef struct _Ifx_DMU_HF_CONFIRM0_Bits
{
    Ifx_UReg_32Bit PROINBMHD0O:2;     /**< \brief [1:0] UCB_BMHD0_ORIG Confirmation - PROINBMHD0O (rh) */
    Ifx_UReg_32Bit PROINBMHD1O:2;     /**< \brief [3:2] UCB_BMHD1_ORIG Confirmation - PROINBMHD1O (rh) */
    Ifx_UReg_32Bit PROINBMHD2O:2;     /**< \brief [5:4] UCB_BMHD2_ORIG Confirmation - PROINBMHD2O (rh) */
    Ifx_UReg_32Bit PROINBMHD3O:2;     /**< \brief [7:6] UCB_BMHD3_ORIG Confirmation - PROINBMHD3O (rh) */
    Ifx_UReg_32Bit reserved_8:2;      /**< \brief [9:8] \internal Reserved */
    Ifx_UReg_32Bit PROINUSER:2;       /**< \brief [11:10] UCB_USER Confirmation - PROINUSER (rh) */
    Ifx_UReg_32Bit PROINTEST:2;       /**< \brief [13:12] UCB_TEST Confirmation - PROINTEST (rh) */
    Ifx_UReg_32Bit PROINHSMCFG:2;     /**< \brief [15:14] UCB_HSMCFG Confirmation - PROINHSMCFG (rh) */
    Ifx_UReg_32Bit PROINBMHD0C:2;     /**< \brief [17:16] UCB_BMHD0_COPY Confirmation - PROINBMHD0C (rh) */
    Ifx_UReg_32Bit PROINBMHD1C:2;     /**< \brief [19:18] UCB_BMHD1_COPY Confirmation - PROINBMHD1C (rh) */
    Ifx_UReg_32Bit PROINBMHD2C:2;     /**< \brief [21:20] UCB_BMHD2_COPY Confirmation - PROINBMHD2C (rh) */
    Ifx_UReg_32Bit PROINBMHD3C:2;     /**< \brief [23:22] UCB_BMHD3_COPY Confirmation - PROINBMHD3C (rh) */
    Ifx_UReg_32Bit PROINREDSEC:2;     /**< \brief [25:24] UCB_REDSEC Confirmation - PROINREDSEC (rh) */
    Ifx_UReg_32Bit reserved_26:4;     /**< \brief [29:26] \internal Reserved */
    Ifx_UReg_32Bit PROINSRT:2;        /**< \brief [31:30] UCB_RETEST Confirmation - PROINSRT (rh) */
} Ifx_DMU_HF_CONFIRM0_Bits;

/** \brief Flash Confirm Status Register 1 */
typedef struct _Ifx_DMU_HF_CONFIRM1_Bits
{
    Ifx_UReg_32Bit PROINPO:2;         /**< \brief [1:0] UCB_PFLASH_ORIG Confirmation - PROINPO (rh) */
    Ifx_UReg_32Bit PROINDO:2;         /**< \brief [3:2] UCB_DFLASH_ORIG Confirmation - PROINDO (rh) */
    Ifx_UReg_32Bit PROINDBGO:2;       /**< \brief [5:4] UCB_DBG_ORIG Confirmation - PROINDBGO (rh) */
    Ifx_UReg_32Bit PROINHSMO:2;       /**< \brief [7:6] UCB_HSM_ORIG Confirmation - PROINHSMO (rh) */
    Ifx_UReg_32Bit PROINHSMCOTP0O:2;    /**< \brief [9:8] UCB_HSMCOTP0_ORIG Protection - PROINHSMCOTP0O (rh) */
    Ifx_UReg_32Bit PROINHSMCOTP1O:2;    /**< \brief [11:10] UCB_HSMCOTP1_ORIG Protection - PROINHSMCOTP1O (rh) */
    Ifx_UReg_32Bit PROINECO:2;        /**< \brief [13:12] UCB_ECPRIO_ORIG Confirmation - PROINECO (rh) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit PROINPC:2;         /**< \brief [17:16] UCB_PFLASH_COPY Confirmation - PROINPC (rh) */
    Ifx_UReg_32Bit PROINDC:2;         /**< \brief [19:18] UCB_DFLASH_COPY Confirmation - PROINDC (rh) */
    Ifx_UReg_32Bit PROINDBGC:2;       /**< \brief [21:20] UCB_DBG_COPY Interface Confirmation - PROINDBGC (rh) */
    Ifx_UReg_32Bit PROINHSMC:2;       /**< \brief [23:22] UCB_HSM_COPY Confirmation - PROINHSMC (rh) */
    Ifx_UReg_32Bit PROINHSMCOTP0C:2;    /**< \brief [25:24] UCB_HSMCOTP0_COPY Protection - PROINHSMCOTP0C (rh) */
    Ifx_UReg_32Bit PROINHSMCOTP1C:2;    /**< \brief [27:26] UCB_HSMCOTP1_COPY Protection - PROINHSMCOTP1C (rh) */
    Ifx_UReg_32Bit PROINECC:2;        /**< \brief [29:28] UCB_ECPRIO_COPY Confirmation - PROINECC (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_DMU_HF_CONFIRM1_Bits;

/** \brief Flash Confirm Status Register 2 */
typedef struct _Ifx_DMU_HF_CONFIRM2_Bits
{
    Ifx_UReg_32Bit PROINOTP0O:2;      /**< \brief [1:0] UCB_OTP0_ORIG Confirmation - PROINOTP0O (rh) */
    Ifx_UReg_32Bit PROINOTP1O:2;      /**< \brief [3:2] UCB_OTP1_ORIG Confirmation - PROINOTP1O (rh) */
    Ifx_UReg_32Bit PROINOTP2O:2;      /**< \brief [5:4] UCB_OTP2_ORIG Confirmation - PROINOTP2O (rh) */
    Ifx_UReg_32Bit PROINOTP3O:2;      /**< \brief [7:6] UCB_OTP3_ORIG Confirmation - PROINOTP3O (rh) */
    Ifx_UReg_32Bit PROINOTP4O:2;      /**< \brief [9:8] UCB_OTP4_ORIG Confirmation - PROINOTP4O (rh) */
    Ifx_UReg_32Bit PROINOTP5O:2;      /**< \brief [11:10] UCB_OTP5_ORIG Confirmation - PROINOTP5O (rh) */
    Ifx_UReg_32Bit PROINOTP6O:2;      /**< \brief [13:12] UCB_OTP6_ORIG Confirmation - PROINOTP6O (rh) */
    Ifx_UReg_32Bit PROINOTP7O:2;      /**< \brief [15:14] UCB_OTP7_ORIG Confirmation - PROINOTP7O (rh) */
    Ifx_UReg_32Bit PROINOTP0C:2;      /**< \brief [17:16] UCB_OTP0_COPY Confirmation - PROINOTP0C (rh) */
    Ifx_UReg_32Bit PROINOTP1C:2;      /**< \brief [19:18] UCB_OTP1_COPY Confirmation - PROINOTP1C (rh) */
    Ifx_UReg_32Bit PROINOTP2C:2;      /**< \brief [21:20] UCB_OTP2_COPY Confirmation - PROINOTP2C (rh) */
    Ifx_UReg_32Bit PROINOTP3C:2;      /**< \brief [23:22] UCB_OTP3_COPY Confirmation - PROINOTP3C (rh) */
    Ifx_UReg_32Bit PROINOTP4C:2;      /**< \brief [25:24] UCB_OTP4_COPY Confirmation - PROINOTP4C (rh) */
    Ifx_UReg_32Bit PROINOTP5C:2;      /**< \brief [27:26] UCB_OTP5_COPY Confirmation - PROINOTP5C (rh) */
    Ifx_UReg_32Bit PROINOTP6C:2;      /**< \brief [29:28] UCB_OTP6_COPY Confirmation - PROINOTP6C (rh) */
    Ifx_UReg_32Bit PROINOTP7C:2;      /**< \brief [31:30] UCB_OTP7_COPY Confirmation - PROINOTP7C (rh) */
} Ifx_DMU_HF_CONFIRM2_Bits;

/** \brief Flash Control Register */
typedef struct _Ifx_DMU_HF_CONTROL_Bits
{
    Ifx_UReg_32Bit reserved_0:3;      /**< \brief [2:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit FSIENPE:2;         /**< \brief [5:4] Enable Program/Erase - FSIENPE (rw) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit WSERRINJ:1;        /**< \brief [7:7] PFlash Wait State ECC error injection - WSERRINJ (rw) */
    Ifx_UReg_32Bit DDFP:1;            /**< \brief [8:8] Disable Read from PFLASH - DDFP (rwh) */
    Ifx_UReg_32Bit DDFD:1;            /**< \brief [9:9] Disable Data Fetch from DF0_EEPROM - DDFD (rwh) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit CPROG:1;           /**< \brief [16:16] Clear Programming State - CPROG (w) */
    Ifx_UReg_32Bit CERASE:1;          /**< \brief [17:17] Clear Erase State - CERASE (w) */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_DMU_HF_CONTROL_Bits;

/** \brief DFLASH Wait Cycle Register */
typedef struct _Ifx_DMU_HF_DWAIT_Bits
{
    Ifx_UReg_32Bit RFLASH:8;          /**< \brief [7:0] Operation Mode - RFLASH (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit RECC:3;            /**< \brief [18:16] Operation Mode - RECC (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_DMU_HF_DWAIT_Bits;

/** \brief DF0 ECC Control Register */
typedef struct _Ifx_DMU_HF_ECCC_Bits
{
    Ifx_UReg_32Bit CLR:2;             /**< \brief [1:0] Clear ECC status bits - CLR (w) */
    Ifx_UReg_32Bit reserved_2:26;     /**< \brief [27:2] \internal Reserved */
    Ifx_UReg_32Bit ECCCORDIS:2;       /**< \brief [29:28] Host Command Interface ECC Correction Disable - ECCCORDIS (rw) */
    Ifx_UReg_32Bit TRAPDIS:2;         /**< \brief [31:30] Host Command Interface Uncorrectable ECC Bit Error Trap Disable - TRAPDIS (rw) */
} Ifx_DMU_HF_ECCC_Bits;

/** \brief DF0 ECC Read Register */
typedef struct _Ifx_DMU_HF_ECCR_Bits
{
    Ifx_UReg_32Bit RCODE:22;          /**< \brief [21:0] Error Correction Read Code - RCODE (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_DMU_HF_ECCR_Bits;

/** \brief DF0 ECC Status Register */
typedef struct _Ifx_DMU_HF_ECCS_Bits
{
    Ifx_UReg_32Bit ERR1:1;            /**< \brief [0:0] Read Access Single Bit ECC Error - ERR1 (rh) */
    Ifx_UReg_32Bit ERR2:1;            /**< \brief [1:1] Read Access Double Bit ECC Error - ERR2 (rh) */
    Ifx_UReg_32Bit ERR3:1;            /**< \brief [2:2] Read Access Triple Bit ECC Error - ERR3 (rh) */
    Ifx_UReg_32Bit ERRM:1;            /**< \brief [3:3] Read Access Multi-bit ECC Error - ERRM (rh) */
    Ifx_UReg_32Bit reserved_4:3;      /**< \brief [6:4] \internal Reserved */
    Ifx_UReg_32Bit ERRANY:1;          /**< \brief [7:7] Any Read Access ECC Error - ERRANY (rh) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [8:8] Reserved - RES (r) */
    Ifx_UReg_32Bit BLANKA:1;          /**< \brief [9:9] Read Access Blank Analog - BLANKA (rh) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit AER1:1;            /**< \brief [16:16] Accumulated Single Bit ECC Errors - AER1 (rh) */
    Ifx_UReg_32Bit AER2:1;            /**< \brief [17:17] Accumulated Double Bit ECC Errors - AER2 (rh) */
    Ifx_UReg_32Bit AER3:1;            /**< \brief [18:18] Accumulated Triple Bit ECC Errors - AER3 (rh) */
    Ifx_UReg_32Bit AERM:1;            /**< \brief [19:19] Accumulated Multi-bit ECC Errors - AERM (rh) */
    Ifx_UReg_32Bit reserved_20:3;     /**< \brief [22:20] \internal Reserved */
    Ifx_UReg_32Bit AERANY:1;          /**< \brief [23:23] Accumulated Any Read Access ECC Error - AERANY (rh) */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit ABLANKA:1;         /**< \brief [25:25] Accumulated Blank Analog - ABLANKA (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_DMU_HF_ECCS_Bits;

/** \brief DF0 ECC Write Register */
typedef struct _Ifx_DMU_HF_ECCW_Bits
{
    Ifx_UReg_32Bit WCODE:22;          /**< \brief [21:0] Error Correction Write Code - WCODE (rw) */
    Ifx_UReg_32Bit reserved_22:6;     /**< \brief [27:22] \internal Reserved */
    Ifx_UReg_32Bit PECENCDIS:2;       /**< \brief [29:28] PFLASH ECC Encoding Disable - PECENCDIS (rw) */
    Ifx_UReg_32Bit DECENCDIS:2;       /**< \brief [31:30] DFLASH ECC Encoding Disable - DECENCDIS (rw) */
} Ifx_DMU_HF_ECCW_Bits;

/** \brief Enable Error Interrupt Control Register */
typedef struct _Ifx_DMU_HF_EER_Bits
{
    Ifx_UReg_32Bit OPERM:1;           /**< \brief [0:0] Operation Error Interrupt Mask - OPERM (rw) */
    Ifx_UReg_32Bit SQERM:1;           /**< \brief [1:1] Command Sequence Error Interrupt Mask - SQERM (rw) */
    Ifx_UReg_32Bit PROERM:1;          /**< \brief [2:2] Protection Error Interrupt Mask - PROERM (rw) */
    Ifx_UReg_32Bit PVERM:1;           /**< \brief [3:3] Program Verify Error Interrupt Mask - PVERM (rw) */
    Ifx_UReg_32Bit EVERM:1;           /**< \brief [4:4] Erase Verify Error Interrupt Mask - EVERM (rw) */
    Ifx_UReg_32Bit reserved_5:26;     /**< \brief [30:5] \internal Reserved */
    Ifx_UReg_32Bit EOBM:1;            /**< \brief [31:31] End of Busy Interrupt Mask - EOBM (rw) */
} Ifx_DMU_HF_EER_Bits;

/** \brief Error Status Register */
typedef struct _Ifx_DMU_HF_ERRSR_Bits
{
    Ifx_UReg_32Bit OPER:1;            /**< \brief [0:0] Flash Operation Error - OPER (rh) */
    Ifx_UReg_32Bit SQER:1;            /**< \brief [1:1] Command Sequence Error - SQER (rh) */
    Ifx_UReg_32Bit PROER:1;           /**< \brief [2:2] Protection Error - PROER (rh) */
    Ifx_UReg_32Bit PVER:1;            /**< \brief [3:3] Program Verify Error - PVER (rh) */
    Ifx_UReg_32Bit EVER:1;            /**< \brief [4:4] Erase Verify Error - EVER (rh) */
    Ifx_UReg_32Bit ADER:1;            /**< \brief [5:5] SRI Bus Address ECC Error - ADER (rh) */
    Ifx_UReg_32Bit ORIER:1;           /**< \brief [6:6] Original Error - ORIER (rh) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_DMU_HF_ERRSR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_DMU_HF_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:8;      /**< \brief [23:16] Module Number Value - MOD_NUMBER (r) */
    Ifx_UReg_32Bit FLASH_REV:8;       /**< \brief [31:24] Flash Revision - FLASH_REV (r) */
} Ifx_DMU_HF_ID_Bits;

/** \brief Margin Control Register */
typedef struct _Ifx_DMU_HF_MARGIN_Bits
{
    Ifx_UReg_32Bit SELD0:2;           /**< \brief [1:0] DF0 Margin Read Selection - SELD0 (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit HMARGIN:1;         /**< \brief [8:8] Hard Margin Selection - HMARGIN (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_DMU_HF_MARGIN_Bits;

/** \brief Flash Operation Register */
typedef struct _Ifx_DMU_HF_OPERATION_Bits
{
    Ifx_UReg_32Bit PROG:1;            /**< \brief [0:0] Programming State - PROG (rh) */
    Ifx_UReg_32Bit ERASE:1;           /**< \brief [1:1] Erase State - ERASE (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:3;      /**< \brief [10:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_DMU_HF_OPERATION_Bits;

/** \brief Power Control Register */
typedef struct _Ifx_DMU_HF_PCONTROL_Bits
{
    Ifx_UReg_32Bit SLEEP:2;           /**< \brief [1:0] Sleep Mode Control - SLEEP (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit IDLE:2;            /**< \brief [9:8] Dynamic Idle Enable - IDLE (w) */
    Ifx_UReg_32Bit DEMAND:2;          /**< \brief [11:10] Demand Enable - DEMAND (w) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit ESLDIS:2;          /**< \brief [17:16] External Sleep Mode Request Disable - ESLDIS (rw) */
    Ifx_UReg_32Bit reserved_18:12;    /**< \brief [29:18] \internal Reserved */
    Ifx_UReg_32Bit PR5V:2;            /**< \brief [31:30] Programming Supply 5V - PR5V (rw) */
} Ifx_DMU_HF_PCONTROL_Bits;

/** \brief Debug Interface Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONDBG_Bits
{
    Ifx_UReg_32Bit OCDSDIS:1;         /**< \brief [0:0] OCDS Disabled - OCDSDIS (rh) */
    Ifx_UReg_32Bit DBGIFLCK:1;        /**< \brief [1:1] Debug Interface Locked - DBGIFLCK (rh) */
    Ifx_UReg_32Bit EDM:2;             /**< \brief [3:2] Entered Debug Mode - EDM (rh) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit TIC:4;             /**< \brief [11:8] Tool Interface Control - TIC (rh) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_DMU_HF_PROCONDBG_Bits;

/** \brief DFLASH Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONDF_Bits
{
    Ifx_UReg_32Bit L:1;               /**< \brief [0:0] DF0_EEPROM Locked for Write Protection - L (rh) */
    Ifx_UReg_32Bit reserved_1:2;      /**< \brief [2:1] \internal Reserved */
    Ifx_UReg_32Bit HYSEN:1;           /**< \brief [3:3] Hysteresis enable (rh) */
    Ifx_UReg_32Bit HYSCTL:2;          /**< \brief [5:4] Hysteresis Control (rh) */
    Ifx_UReg_32Bit AMPCTL:2;          /**< \brief [7:6] Amplitude Control (rh) */
    Ifx_UReg_32Bit OSCCFG:1;          /**< \brief [8:8] OSC Configuration by SSW - OSCCFG (rh) */
    Ifx_UReg_32Bit MODE:2;            /**< \brief [10:9] OSC Mode - MODE (rh) */
    Ifx_UReg_32Bit APREN:1;           /**< \brief [11:11] OSC Amplitude Regulation Enable - APREN (rh) */
    Ifx_UReg_32Bit CAP0EN:1;          /**< \brief [12:12] OSC Capacitance 0 Enable (x=0-3) - CAP0EN (rh) */
    Ifx_UReg_32Bit CAP1EN:1;          /**< \brief [13:13] OSC Capacitance 1 Enable (x=0-3) - CAP1EN (rh) */
    Ifx_UReg_32Bit CAP2EN:1;          /**< \brief [14:14] OSC Capacitance 2 Enable (x=0-3) - CAP2EN (rh) */
    Ifx_UReg_32Bit CAP3EN:1;          /**< \brief [15:15] OSC Capacitance 3 Enable (x=0-3) - CAP3EN (rh) */
    Ifx_UReg_32Bit ESR0CNT:12;        /**< \brief [27:16] ESR0 Prolongation Counter - ESR0CNT (rh) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit RPRO:1;            /**< \brief [31:31] Read Protection Configuration - RPRO (rh) */
} Ifx_DMU_HF_PROCONDF_Bits;

/** \brief PFLASH Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONPF_Bits
{
    Ifx_UReg_32Bit reserved_0:31;     /**< \brief [30:0] \internal Reserved */
    Ifx_UReg_32Bit RPRO:1;            /**< \brief [31:31] Read Protection Configuration - RPRO (rh) */
} Ifx_DMU_HF_PROCONPF_Bits;

/** \brief RAM Configuration */
typedef struct _Ifx_DMU_HF_PROCONRAM_Bits
{
    Ifx_UReg_32Bit RAMIN:2;           /**< \brief [1:0] RAM Initialization by SSW Control - RAMIN (rh) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit RAMINSEL:6;        /**< \brief [21:16] RAM Initialization Selection - RAMINSEL (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit LMUINSEL:7;        /**< \brief [30:24] LMU Initialization Selection - LMUINSEL (rh) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_DMU_HF_PROCONRAM_Bits;

/** \brief Tuning Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONTP_Bits
{
    Ifx_UReg_32Bit TP:1;              /**< \brief [0:0] Tuning Protection - TP (rh) */
    Ifx_UReg_32Bit reserved_1:7;      /**< \brief [7:1] \internal Reserved */
    Ifx_UReg_32Bit BML:2;             /**< \brief [9:8] Boot Mode Lock - BML (rh) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit SWAPEN:2;          /**< \brief [17:16] Enable SOTA mode - SWAPEN (rh) */
    Ifx_UReg_32Bit CPU0DDIS0:1;       /**< \brief [18:18] Disable direct LPB access (rh) */
    Ifx_UReg_32Bit CPU1DDIS1:1;       /**< \brief [19:19] Disable direct LPB access (rh) */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_DMU_HF_PROCONTP_Bits;

/** \brief DF0 User Mode Control */
typedef struct _Ifx_DMU_HF_PROCONUSR_Bits
{
    Ifx_UReg_32Bit MODE:2;            /**< \brief [1:0] DF0 User Mode Control - MODE (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_DMU_HF_PROCONUSR_Bits;

/** \brief Flash Protection Status Register */
typedef struct _Ifx_DMU_HF_PROTECT_Bits
{
    Ifx_UReg_32Bit PRODISP:1;         /**< \brief [0:0] PFLASH Protection Disabled - PRODISP (rh) */
    Ifx_UReg_32Bit PRODISD:1;         /**< \brief [1:1] DFLASH Protection Disabled - PRODISD (rh) */
    Ifx_UReg_32Bit PRODISDBG:1;       /**< \brief [2:2] Debug Interface Password Protection Disabled - PRODISDBG (rh) */
    Ifx_UReg_32Bit PRODISEC:1;        /**< \brief [3:3] Erase Counter Priority Protection Disabled - PRODISEC (rh) */
    Ifx_UReg_32Bit PRODISBMHD:1;      /**< \brief [4:4] BMHD Protection Disabled - PRODISBMHD (rh) */
    Ifx_UReg_32Bit PRODISSWAP:1;      /**< \brief [5:5] UCB_SWAP protection Disabled - PRODISSWAP (rh) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit PRODISP00:1;       /**< \brief [8:8] Program Flash Protection Disable PRODISP0 (rh) */
    Ifx_UReg_32Bit PRODISP11:1;       /**< \brief [9:9] Program Flash Protection Disable PRODISP1 (rh) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:10;    /**< \brief [23:14] \internal Reserved */
    Ifx_UReg_32Bit SRT:1;             /**< \brief [24:24] Secure Retest Password Protection Disabled - SRT (rh) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_DMU_HF_PROTECT_Bits;

/** \brief Power Status Register */
typedef struct _Ifx_DMU_HF_PSTATUS_Bits
{
    Ifx_UReg_32Bit SLEEP:1;           /**< \brief [0:0] Sleep Mode - SLEEP (rh) */
    Ifx_UReg_32Bit IDLE:1;            /**< \brief [1:1] Dynamic Idle - IDLE (rh) */
    Ifx_UReg_32Bit DEMAND:1;          /**< \brief [2:2] Demand - DEMAND (rh) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_DMU_HF_PSTATUS_Bits;

/** \brief PFLASH Wait Cycle Register */
typedef struct _Ifx_DMU_HF_PWAIT_Bits
{
    Ifx_UReg_32Bit RFLASH:6;          /**< \brief [5:0] Operation Mode - RFLASH (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit RECC:3;            /**< \brief [10:8] Operation Mode - RECC (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit CFLASH:6;          /**< \brief [21:16] Cranking Mode - CFLASH (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit CECC:3;            /**< \brief [26:24] Cranking Mode - CECC (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_DMU_HF_PWAIT_Bits;

/** \brief Flash Status Register */
typedef struct _Ifx_DMU_HF_STATUS_Bits
{
    Ifx_UReg_32Bit D0BUSY:1;          /**< \brief [0:0] Data Flash Bank 0 Busy - D0BUSY (rh) */
    Ifx_UReg_32Bit D1BUSY:1;          /**< \brief [1:1] Data Flash Bank 1 Busy - D1BUSY (rh) */
    Ifx_UReg_32Bit P0BUSY:1;          /**< \brief [2:2] Program Flash PF0BUSY - P0BUSY (rh) */
    Ifx_UReg_32Bit P1BUSY:1;          /**< \brief [3:3] Program Flash PF1BUSY - P1BUSY (rh) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:1;     /**< \brief [16:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit DFPAGE:1;          /**< \brief [20:20] Data Flash in Page Mode - DFPAGE (rh) */
    Ifx_UReg_32Bit PFPAGE:1;          /**< \brief [21:21] Program Flash in Page Mode - PFPAGE (rh) */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:2;     /**< \brief [25:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_DMU_HF_STATUS_Bits;

/** \brief Suspend Control Register */
typedef struct _Ifx_DMU_HF_SUSPEND_Bits
{
    Ifx_UReg_32Bit REQ:1;             /**< \brief [0:0] Suspend Request - REQ (rwh) */
    Ifx_UReg_32Bit CLR:1;             /**< \brief [1:1] Suspend Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit SPND:1;            /**< \brief [16:16] Flash Operation Suspended - SPND (rh) */
    Ifx_UReg_32Bit ERR:1;             /**< \brief [17:17] Suspend Error - ERR (rh) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_DMU_HF_SUSPEND_Bits;

/** \brief PFLASH Bank ${i} Erase Counter Priority configuration 0 */
typedef struct _Ifx_DMU_HP_ECPRIO_P0_Bits
{
    Ifx_UReg_32Bit S0L:1;             /**< \brief [0:0] PFLASH p Sector 0 Erase Counter priority - S0L (rh) */
    Ifx_UReg_32Bit S1L:1;             /**< \brief [1:1] PFLASH p Sector 1 Erase Counter priority - S1L (rh) */
    Ifx_UReg_32Bit S2L:1;             /**< \brief [2:2] PFLASH p Sector 2 Erase Counter priority - S2L (rh) */
    Ifx_UReg_32Bit S3L:1;             /**< \brief [3:3] PFLASH p Sector 3 Erase Counter priority - S3L (rh) */
    Ifx_UReg_32Bit S4L:1;             /**< \brief [4:4] PFLASH p Sector 4 Erase Counter priority - S4L (rh) */
    Ifx_UReg_32Bit S5L:1;             /**< \brief [5:5] PFLASH p Sector 5 Erase Counter priority - S5L (rh) */
    Ifx_UReg_32Bit S6L:1;             /**< \brief [6:6] PFLASH p Sector 6 Erase Counter priority - S6L (rh) */
    Ifx_UReg_32Bit S7L:1;             /**< \brief [7:7] PFLASH p Sector 7 Erase Counter priority - S7L (rh) */
    Ifx_UReg_32Bit S8L:1;             /**< \brief [8:8] PFLASH p Sector 8 Erase Counter priority - S8L (rh) */
    Ifx_UReg_32Bit S9L:1;             /**< \brief [9:9] PFLASH p Sector 9 Erase Counter priority - S9L (rh) */
    Ifx_UReg_32Bit S10L:1;            /**< \brief [10:10] PFLASH p Sector 10 Erase Counter priority - S10L (rh) */
    Ifx_UReg_32Bit S11L:1;            /**< \brief [11:11] PFLASH p Sector 11 Erase Counter priority - S11L (rh) */
    Ifx_UReg_32Bit S12L:1;            /**< \brief [12:12] PFLASH p Sector 12 Erase Counter priority - S12L (rh) */
    Ifx_UReg_32Bit S13L:1;            /**< \brief [13:13] PFLASH p Sector 13 Erase Counter priority - S13L (rh) */
    Ifx_UReg_32Bit S14L:1;            /**< \brief [14:14] PFLASH p Sector 14 Erase Counter priority - S14L (rh) */
    Ifx_UReg_32Bit S15L:1;            /**< \brief [15:15] PFLASH p Sector 15 Erase Counter priority - S15L (rh) */
    Ifx_UReg_32Bit S16L:1;            /**< \brief [16:16] PFLASH p Sector 16 Erase Counter priority - S16L (rh) */
    Ifx_UReg_32Bit S17L:1;            /**< \brief [17:17] PFLASH p Sector 17 Erase Counter priority - S17L (rh) */
    Ifx_UReg_32Bit S18L:1;            /**< \brief [18:18] PFLASH p Sector 18 Erase Counter priority - S18L (rh) */
    Ifx_UReg_32Bit S19L:1;            /**< \brief [19:19] PFLASH p Sector 19 Erase Counter priority - S19L (rh) */
    Ifx_UReg_32Bit S20L:1;            /**< \brief [20:20] PFLASH p Sector 20 Erase Counter priority - S20L (rh) */
    Ifx_UReg_32Bit S21L:1;            /**< \brief [21:21] PFLASH p Sector 21 Erase Counter priority - S21L (rh) */
    Ifx_UReg_32Bit S22L:1;            /**< \brief [22:22] PFLASH p Sector 22 Erase Counter priority - S22L (rh) */
    Ifx_UReg_32Bit S23L:1;            /**< \brief [23:23] PFLASH p Sector 23 Erase Counter priority - S23L (rh) */
    Ifx_UReg_32Bit S24L:1;            /**< \brief [24:24] PFLASH p Sector 24 Erase Counter priority - S24L (rh) */
    Ifx_UReg_32Bit S25L:1;            /**< \brief [25:25] PFLASH p Sector 25 Erase Counter priority - S25L (rh) */
    Ifx_UReg_32Bit S26L:1;            /**< \brief [26:26] PFLASH p Sector 26 Erase Counter priority - S26L (rh) */
    Ifx_UReg_32Bit S27L:1;            /**< \brief [27:27] PFLASH p Sector 27 Erase Counter priority - S27L (rh) */
    Ifx_UReg_32Bit S28L:1;            /**< \brief [28:28] PFLASH p Sector 28 Erase Counter priority - S28L (rh) */
    Ifx_UReg_32Bit S29L:1;            /**< \brief [29:29] PFLASH p Sector 29 Erase Counter priority - S29L (rh) */
    Ifx_UReg_32Bit S30L:1;            /**< \brief [30:30] PFLASH p Sector 30 Erase Counter priority - S30L (rh) */
    Ifx_UReg_32Bit S31L:1;            /**< \brief [31:31] PFLASH p Sector 31 Erase Counter priority - S31L (rh) */
} Ifx_DMU_HP_ECPRIO_P0_Bits;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 1 */
typedef struct _Ifx_DMU_HP_ECPRIO_P1_Bits
{
    Ifx_UReg_32Bit S32L:1;            /**< \brief [0:0] PFLASH p Sector 32 Erase Counter priority - S32L (rh) */
    Ifx_UReg_32Bit S33L:1;            /**< \brief [1:1] PFLASH p Sector 33 Erase Counter priority - S33L (rh) */
    Ifx_UReg_32Bit S34L:1;            /**< \brief [2:2] PFLASH p Sector 34 Erase Counter priority - S34L (rh) */
    Ifx_UReg_32Bit S35L:1;            /**< \brief [3:3] PFLASH p Sector 35 Erase Counter priority - S35L (rh) */
    Ifx_UReg_32Bit S36L:1;            /**< \brief [4:4] PFLASH p Sector 36 Erase Counter priority - S36L (rh) */
    Ifx_UReg_32Bit S37L:1;            /**< \brief [5:5] PFLASH p Sector 37 Erase Counter priority - S37L (rh) */
    Ifx_UReg_32Bit S38L:1;            /**< \brief [6:6] PFLASH p Sector 38 Erase Counter priority - S38L (rh) */
    Ifx_UReg_32Bit S39L:1;            /**< \brief [7:7] PFLASH p Sector 39 Erase Counter priority - S39L (rh) */
    Ifx_UReg_32Bit S40L:1;            /**< \brief [8:8] PFLASH p Sector 40 Erase Counter priority - S40L (rh) */
    Ifx_UReg_32Bit S41L:1;            /**< \brief [9:9] PFLASH p Sector 41 Erase Counter priority - S41L (rh) */
    Ifx_UReg_32Bit S42L:1;            /**< \brief [10:10] PFLASH p Sector 42 Erase Counter priority - S42L (rh) */
    Ifx_UReg_32Bit S43L:1;            /**< \brief [11:11] PFLASH p Sector 43 Erase Counter priority - S43L (rh) */
    Ifx_UReg_32Bit S44L:1;            /**< \brief [12:12] PFLASH p Sector 44 Erase Counter priority - S44L (rh) */
    Ifx_UReg_32Bit S45L:1;            /**< \brief [13:13] PFLASH p Sector 45 Erase Counter priority - S45L (rh) */
    Ifx_UReg_32Bit S46L:1;            /**< \brief [14:14] PFLASH p Sector 46 Erase Counter priority - S46L (rh) */
    Ifx_UReg_32Bit S47L:1;            /**< \brief [15:15] PFLASH p Sector 47 Erase Counter priority - S47L (rh) */
    Ifx_UReg_32Bit S48L:1;            /**< \brief [16:16] PFLASH p Sector 48 Erase Counter priority - S48L (rh) */
    Ifx_UReg_32Bit S49L:1;            /**< \brief [17:17] PFLASH p Sector 49 Erase Counter priority - S49L (rh) */
    Ifx_UReg_32Bit S50L:1;            /**< \brief [18:18] PFLASH p Sector 50 Erase Counter priority - S50L (rh) */
    Ifx_UReg_32Bit S51L:1;            /**< \brief [19:19] PFLASH p Sector 51 Erase Counter priority - S51L (rh) */
    Ifx_UReg_32Bit S52L:1;            /**< \brief [20:20] PFLASH p Sector 52 Erase Counter priority - S52L (rh) */
    Ifx_UReg_32Bit S53L:1;            /**< \brief [21:21] PFLASH p Sector 53 Erase Counter priority - S53L (rh) */
    Ifx_UReg_32Bit S54L:1;            /**< \brief [22:22] PFLASH p Sector 54 Erase Counter priority - S54L (rh) */
    Ifx_UReg_32Bit S55L:1;            /**< \brief [23:23] PFLASH p Sector 55 Erase Counter priority - S55L (rh) */
    Ifx_UReg_32Bit S56L:1;            /**< \brief [24:24] PFLASH p Sector 56 Erase Counter priority - S56L (rh) */
    Ifx_UReg_32Bit S57L:1;            /**< \brief [25:25] PFLASH p Sector 57 Erase Counter priority - S57L (rh) */
    Ifx_UReg_32Bit S58L:1;            /**< \brief [26:26] PFLASH p Sector 58 Erase Counter priority - S58L (rh) */
    Ifx_UReg_32Bit S59L:1;            /**< \brief [27:27] PFLASH p Sector 59 Erase Counter priority - S59L (rh) */
    Ifx_UReg_32Bit S60L:1;            /**< \brief [28:28] PFLASH p Sector 60 Erase Counter priority - S60L (rh) */
    Ifx_UReg_32Bit S61L:1;            /**< \brief [29:29] PFLASH p Sector 61 Erase Counter priority - S61L (rh) */
    Ifx_UReg_32Bit S62L:1;            /**< \brief [30:30] PFLASH p Sector 62 Erase Counter priority - S62L (rh) */
    Ifx_UReg_32Bit S63L:1;            /**< \brief [31:31] PFLASH p Sector 63 Erase Counter priority - S63L (rh) */
} Ifx_DMU_HP_ECPRIO_P1_Bits;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 2 */
typedef struct _Ifx_DMU_HP_ECPRIO_P2_Bits
{
    Ifx_UReg_32Bit S64L:1;            /**< \brief [0:0] PFLASH p Sector 64 Erase Counter priority - S64L (rh) */
    Ifx_UReg_32Bit S65L:1;            /**< \brief [1:1] PFLASH p Sector 65 Erase Counter priority - S65L (rh) */
    Ifx_UReg_32Bit S66L:1;            /**< \brief [2:2] PFLASH p Sector 66 Erase Counter priority - S66L (rh) */
    Ifx_UReg_32Bit S67L:1;            /**< \brief [3:3] PFLASH p Sector 67 Erase Counter priority - S67L (rh) */
    Ifx_UReg_32Bit S68L:1;            /**< \brief [4:4] PFLASH p Sector 68 Erase Counter priority - S68L (rh) */
    Ifx_UReg_32Bit S69L:1;            /**< \brief [5:5] PFLASH p Sector 69 Erase Counter priority - S69L (rh) */
    Ifx_UReg_32Bit S70L:1;            /**< \brief [6:6] PFLASH p Sector 70 Erase Counter priority - S70L (rh) */
    Ifx_UReg_32Bit S71L:1;            /**< \brief [7:7] PFLASH p Sector 71 Erase Counter priority - S71L (rh) */
    Ifx_UReg_32Bit S72L:1;            /**< \brief [8:8] PFLASH p Sector 72 Erase Counter priority - S72L (rh) */
    Ifx_UReg_32Bit S73L:1;            /**< \brief [9:9] PFLASH p Sector 73 Erase Counter priority - S73L (rh) */
    Ifx_UReg_32Bit S74L:1;            /**< \brief [10:10] PFLASH p Sector 74 Erase Counter priority - S74L (rh) */
    Ifx_UReg_32Bit S75L:1;            /**< \brief [11:11] PFLASH p Sector 75 Erase Counter priority - S75L (rh) */
    Ifx_UReg_32Bit S76L:1;            /**< \brief [12:12] PFLASH p Sector 76 Erase Counter priority - S76L (rh) */
    Ifx_UReg_32Bit S77L:1;            /**< \brief [13:13] PFLASH p Sector 77 Erase Counter priority - S77L (rh) */
    Ifx_UReg_32Bit S78L:1;            /**< \brief [14:14] PFLASH p Sector 78 Erase Counter priority - S78L (rh) */
    Ifx_UReg_32Bit S79L:1;            /**< \brief [15:15] PFLASH p Sector 79 Erase Counter priority - S79L (rh) */
    Ifx_UReg_32Bit S80L:1;            /**< \brief [16:16] PFLASH p Sector 80 Erase Counter priority - S80L (rh) */
    Ifx_UReg_32Bit S81L:1;            /**< \brief [17:17] PFLASH p Sector 81 Erase Counter priority - S81L (rh) */
    Ifx_UReg_32Bit S82L:1;            /**< \brief [18:18] PFLASH p Sector 82 Erase Counter priority - S82L (rh) */
    Ifx_UReg_32Bit S83L:1;            /**< \brief [19:19] PFLASH p Sector 83 Erase Counter priority - S83L (rh) */
    Ifx_UReg_32Bit S84L:1;            /**< \brief [20:20] PFLASH p Sector 84 Erase Counter priority - S84L (rh) */
    Ifx_UReg_32Bit S85L:1;            /**< \brief [21:21] PFLASH p Sector 85 Erase Counter priority - S85L (rh) */
    Ifx_UReg_32Bit S86L:1;            /**< \brief [22:22] PFLASH p Sector 86 Erase Counter priority - S86L (rh) */
    Ifx_UReg_32Bit S87L:1;            /**< \brief [23:23] PFLASH p Sector 87 Erase Counter priority - S87L (rh) */
    Ifx_UReg_32Bit S88L:1;            /**< \brief [24:24] PFLASH p Sector 88 Erase Counter priority - S88L (rh) */
    Ifx_UReg_32Bit S89L:1;            /**< \brief [25:25] PFLASH p Sector 89 Erase Counter priority - S89L (rh) */
    Ifx_UReg_32Bit S90L:1;            /**< \brief [26:26] PFLASH p Sector 90 Erase Counter priority - S90L (rh) */
    Ifx_UReg_32Bit S91L:1;            /**< \brief [27:27] PFLASH p Sector 91 Erase Counter priority - S91L (rh) */
    Ifx_UReg_32Bit S92L:1;            /**< \brief [28:28] PFLASH p Sector 92 Erase Counter priority - S92L (rh) */
    Ifx_UReg_32Bit S93L:1;            /**< \brief [29:29] PFLASH p Sector 93 Erase Counter priority - S93L (rh) */
    Ifx_UReg_32Bit S94L:1;            /**< \brief [30:30] PFLASH p Sector 94 Erase Counter priority - S94L (rh) */
    Ifx_UReg_32Bit S95L:1;            /**< \brief [31:31] PFLASH p Sector 95 Erase Counter priority - S95L (rh) */
} Ifx_DMU_HP_ECPRIO_P2_Bits;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 3 */
typedef struct _Ifx_DMU_HP_ECPRIO_P3_Bits
{
    Ifx_UReg_32Bit S96L:1;            /**< \brief [0:0] PFLASH p Sector 96 Erase Counter priority - S96L (rh) */
    Ifx_UReg_32Bit S97L:1;            /**< \brief [1:1] PFLASH p Sector 97 Erase Counter priority - S97L (rh) */
    Ifx_UReg_32Bit S98L:1;            /**< \brief [2:2] PFLASH p Sector 98 Erase Counter priority - S98L (rh) */
    Ifx_UReg_32Bit S99L:1;            /**< \brief [3:3] PFLASH p Sector 99 Erase Counter priority - S99L (rh) */
    Ifx_UReg_32Bit S100L:1;           /**< \brief [4:4] PFLASH p Sector 100 Erase Counter priority - S100L (rh) */
    Ifx_UReg_32Bit S101L:1;           /**< \brief [5:5] PFLASH p Sector 101 Erase Counter priority - S101L (rh) */
    Ifx_UReg_32Bit S102L:1;           /**< \brief [6:6] PFLASH p Sector 102 Erase Counter priority - S102L (rh) */
    Ifx_UReg_32Bit S103L:1;           /**< \brief [7:7] PFLASH p Sector 103 Erase Counter priority - S103L (rh) */
    Ifx_UReg_32Bit S104L:1;           /**< \brief [8:8] PFLASH p Sector 104 Erase Counter priority - S104L (rh) */
    Ifx_UReg_32Bit S105L:1;           /**< \brief [9:9] PFLASH p Sector 105 Erase Counter priority - S105L (rh) */
    Ifx_UReg_32Bit S106L:1;           /**< \brief [10:10] PFLASH p Sector 106 Erase Counter priority - S106L (rh) */
    Ifx_UReg_32Bit S107L:1;           /**< \brief [11:11] PFLASH p Sector 107 Erase Counter priority - S107L (rh) */
    Ifx_UReg_32Bit S108L:1;           /**< \brief [12:12] PFLASH p Sector 108 Erase Counter priority - S108L (rh) */
    Ifx_UReg_32Bit S109L:1;           /**< \brief [13:13] PFLASH p Sector 109 Erase Counter priority - S109L (rh) */
    Ifx_UReg_32Bit S110L:1;           /**< \brief [14:14] PFLASH p Sector 110 Erase Counter priority - S110L (rh) */
    Ifx_UReg_32Bit S111L:1;           /**< \brief [15:15] PFLASH p Sector 111 Erase Counter priority - S111L (rh) */
    Ifx_UReg_32Bit S112L:1;           /**< \brief [16:16] PFLASH p Sector 112 Erase Counter priority - S112L (rh) */
    Ifx_UReg_32Bit S113L:1;           /**< \brief [17:17] PFLASH p Sector 113 Erase Counter priority - S113L (rh) */
    Ifx_UReg_32Bit S114L:1;           /**< \brief [18:18] PFLASH p Sector 114 Erase Counter priority - S114L (rh) */
    Ifx_UReg_32Bit S115L:1;           /**< \brief [19:19] PFLASH p Sector 115 Erase Counter priority - S115L (rh) */
    Ifx_UReg_32Bit S116L:1;           /**< \brief [20:20] PFLASH p Sector 116 Erase Counter priority - S116L (rh) */
    Ifx_UReg_32Bit S117L:1;           /**< \brief [21:21] PFLASH p Sector 117 Erase Counter priority - S117L (rh) */
    Ifx_UReg_32Bit S118L:1;           /**< \brief [22:22] PFLASH p Sector 118 Erase Counter priority - S118L (rh) */
    Ifx_UReg_32Bit S119L:1;           /**< \brief [23:23] PFLASH p Sector 119 Erase Counter priority - S119L (rh) */
    Ifx_UReg_32Bit S120L:1;           /**< \brief [24:24] PFLASH p Sector 120 Erase Counter priority - S120L (rh) */
    Ifx_UReg_32Bit S121L:1;           /**< \brief [25:25] PFLASH p Sector 121 Erase Counter priority - S121L (rh) */
    Ifx_UReg_32Bit S122L:1;           /**< \brief [26:26] PFLASH p Sector 122 Erase Counter priority - S122L (rh) */
    Ifx_UReg_32Bit S123L:1;           /**< \brief [27:27] PFLASH p Sector 123 Erase Counter priority - S123L (rh) */
    Ifx_UReg_32Bit S124L:1;           /**< \brief [28:28] PFLASH p Sector 124 Erase Counter priority - S124L (rh) */
    Ifx_UReg_32Bit S125L:1;           /**< \brief [29:29] PFLASH p Sector 125 Erase Counter priority - S125L (rh) */
    Ifx_UReg_32Bit S126L:1;           /**< \brief [30:30] PFLASH p Sector 126 Erase Counter priority - S126L (rh) */
    Ifx_UReg_32Bit S127L:1;           /**< \brief [31:31] PFLASH p Sector 127 Erase Counter priority - S127L (rh) */
} Ifx_DMU_HP_ECPRIO_P3_Bits;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 4 */
typedef struct _Ifx_DMU_HP_ECPRIO_P4_Bits
{
    Ifx_UReg_32Bit S128L:1;           /**< \brief [0:0] PFLASH p Sector 128 Erase Counter priority - S128L (rh) */
    Ifx_UReg_32Bit S129L:1;           /**< \brief [1:1] PFLASH p Sector 129 Erase Counter priority - S129L (rh) */
    Ifx_UReg_32Bit S130L:1;           /**< \brief [2:2] PFLASH p Sector 130 Erase Counter priority - S130L (rh) */
    Ifx_UReg_32Bit S131L:1;           /**< \brief [3:3] PFLASH p Sector 131 Erase Counter priority - S131L (rh) */
    Ifx_UReg_32Bit S132L:1;           /**< \brief [4:4] PFLASH p Sector 132 Erase Counter priority - S132L (rh) */
    Ifx_UReg_32Bit S133L:1;           /**< \brief [5:5] PFLASH p Sector 133 Erase Counter priority - S133L (rh) */
    Ifx_UReg_32Bit S134L:1;           /**< \brief [6:6] PFLASH p Sector 134 Erase Counter priority - S134L (rh) */
    Ifx_UReg_32Bit S135L:1;           /**< \brief [7:7] PFLASH p Sector 135 Erase Counter priority - S135L (rh) */
    Ifx_UReg_32Bit S136L:1;           /**< \brief [8:8] PFLASH p Sector 136 Erase Counter priority - S136L (rh) */
    Ifx_UReg_32Bit S137L:1;           /**< \brief [9:9] PFLASH p Sector 137 Erase Counter priority - S137L (rh) */
    Ifx_UReg_32Bit S138L:1;           /**< \brief [10:10] PFLASH p Sector 138 Erase Counter priority - S138L (rh) */
    Ifx_UReg_32Bit S139L:1;           /**< \brief [11:11] PFLASH p Sector 139 Erase Counter priority - S139L (rh) */
    Ifx_UReg_32Bit S140L:1;           /**< \brief [12:12] PFLASH p Sector 140 Erase Counter priority - S140L (rh) */
    Ifx_UReg_32Bit S141L:1;           /**< \brief [13:13] PFLASH p Sector 141 Erase Counter priority - S141L (rh) */
    Ifx_UReg_32Bit S142L:1;           /**< \brief [14:14] PFLASH p Sector 142 Erase Counter priority - S142L (rh) */
    Ifx_UReg_32Bit S143L:1;           /**< \brief [15:15] PFLASH p Sector 143 Erase Counter priority - S143L (rh) */
    Ifx_UReg_32Bit S144L:1;           /**< \brief [16:16] PFLASH p Sector 144 Erase Counter priority - S144L (rh) */
    Ifx_UReg_32Bit S145L:1;           /**< \brief [17:17] PFLASH p Sector 145 Erase Counter priority - S145L (rh) */
    Ifx_UReg_32Bit S146L:1;           /**< \brief [18:18] PFLASH p Sector 146 Erase Counter priority - S146L (rh) */
    Ifx_UReg_32Bit S147L:1;           /**< \brief [19:19] PFLASH p Sector 147 Erase Counter priority - S147L (rh) */
    Ifx_UReg_32Bit S148L:1;           /**< \brief [20:20] PFLASH p Sector 148 Erase Counter priority - S148L (rh) */
    Ifx_UReg_32Bit S149L:1;           /**< \brief [21:21] PFLASH p Sector 149 Erase Counter priority - S149L (rh) */
    Ifx_UReg_32Bit S150L:1;           /**< \brief [22:22] PFLASH p Sector 150 Erase Counter priority - S150L (rh) */
    Ifx_UReg_32Bit S151L:1;           /**< \brief [23:23] PFLASH p Sector 151 Erase Counter priority - S151L (rh) */
    Ifx_UReg_32Bit S152L:1;           /**< \brief [24:24] PFLASH p Sector 152 Erase Counter priority - S152L (rh) */
    Ifx_UReg_32Bit S153L:1;           /**< \brief [25:25] PFLASH p Sector 153 Erase Counter priority - S153L (rh) */
    Ifx_UReg_32Bit S154L:1;           /**< \brief [26:26] PFLASH p Sector 154 Erase Counter priority - S154L (rh) */
    Ifx_UReg_32Bit S155L:1;           /**< \brief [27:27] PFLASH p Sector 155 Erase Counter priority - S155L (rh) */
    Ifx_UReg_32Bit S156L:1;           /**< \brief [28:28] PFLASH p Sector 156 Erase Counter priority - S156L (rh) */
    Ifx_UReg_32Bit S157L:1;           /**< \brief [29:29] PFLASH p Sector 157 Erase Counter priority - S157L (rh) */
    Ifx_UReg_32Bit S158L:1;           /**< \brief [30:30] PFLASH p Sector 158 Erase Counter priority - S158L (rh) */
    Ifx_UReg_32Bit S159L:1;           /**< \brief [31:31] PFLASH p Sector 159 Erase Counter priority - S159L (rh) */
} Ifx_DMU_HP_ECPRIO_P4_Bits;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 5 */
typedef struct _Ifx_DMU_HP_ECPRIO_P5_Bits
{
    Ifx_UReg_32Bit S160L:1;           /**< \brief [0:0] PFLASH p Sector 160 Erase Counter priority - S160L (rh) */
    Ifx_UReg_32Bit S161L:1;           /**< \brief [1:1] PFLASH p Sector 161 Erase Counter priority - S161L (rh) */
    Ifx_UReg_32Bit S162L:1;           /**< \brief [2:2] PFLASH p Sector 162 Erase Counter priority - S162L (rh) */
    Ifx_UReg_32Bit S163L:1;           /**< \brief [3:3] PFLASH p Sector 163 Erase Counter priority - S163L (rh) */
    Ifx_UReg_32Bit S164L:1;           /**< \brief [4:4] PFLASH p Sector 164 Erase Counter priority - S164L (rh) */
    Ifx_UReg_32Bit S165L:1;           /**< \brief [5:5] PFLASH p Sector 165 Erase Counter priority - S165L (rh) */
    Ifx_UReg_32Bit S166L:1;           /**< \brief [6:6] PFLASH p Sector 166 Erase Counter priority - S166L (rh) */
    Ifx_UReg_32Bit S167L:1;           /**< \brief [7:7] PFLASH p Sector 167 Erase Counter priority - S167L (rh) */
    Ifx_UReg_32Bit S168L:1;           /**< \brief [8:8] PFLASH p Sector 168 Erase Counter priority - S168L (rh) */
    Ifx_UReg_32Bit S169L:1;           /**< \brief [9:9] PFLASH p Sector 169 Erase Counter priority - S169L (rh) */
    Ifx_UReg_32Bit S170L:1;           /**< \brief [10:10] PFLASH p Sector 170 Erase Counter priority - S170L (rh) */
    Ifx_UReg_32Bit S171L:1;           /**< \brief [11:11] PFLASH p Sector 171 Erase Counter priority - S171L (rh) */
    Ifx_UReg_32Bit S172L:1;           /**< \brief [12:12] PFLASH p Sector 172 Erase Counter priority - S172L (rh) */
    Ifx_UReg_32Bit S173L:1;           /**< \brief [13:13] PFLASH p Sector 173 Erase Counter priority - S173L (rh) */
    Ifx_UReg_32Bit S174L:1;           /**< \brief [14:14] PFLASH p Sector 174 Erase Counter priority - S174L (rh) */
    Ifx_UReg_32Bit S175L:1;           /**< \brief [15:15] PFLASH p Sector 175 Erase Counter priority - S175L (rh) */
    Ifx_UReg_32Bit S176L:1;           /**< \brief [16:16] PFLASH p Sector 176 Erase Counter priority - S176L (rh) */
    Ifx_UReg_32Bit S177L:1;           /**< \brief [17:17] PFLASH p Sector 177 Erase Counter priority - S177L (rh) */
    Ifx_UReg_32Bit S178L:1;           /**< \brief [18:18] PFLASH p Sector 178 Erase Counter priority - S178L (rh) */
    Ifx_UReg_32Bit S179L:1;           /**< \brief [19:19] PFLASH p Sector 179 Erase Counter priority - S179L (rh) */
    Ifx_UReg_32Bit S180L:1;           /**< \brief [20:20] PFLASH p Sector 180 Erase Counter priority - S180L (rh) */
    Ifx_UReg_32Bit S181L:1;           /**< \brief [21:21] PFLASH p Sector 181 Erase Counter priority - S181L (rh) */
    Ifx_UReg_32Bit S182L:1;           /**< \brief [22:22] PFLASH p Sector 182 Erase Counter priority - S182L (rh) */
    Ifx_UReg_32Bit S183L:1;           /**< \brief [23:23] PFLASH p Sector 183 Erase Counter priority - S183L (rh) */
    Ifx_UReg_32Bit S184L:1;           /**< \brief [24:24] PFLASH p Sector 184 Erase Counter priority - S184L (rh) */
    Ifx_UReg_32Bit S185L:1;           /**< \brief [25:25] PFLASH p Sector 185 Erase Counter priority - S185L (rh) */
    Ifx_UReg_32Bit S186L:1;           /**< \brief [26:26] PFLASH p Sector 186 Erase Counter priority - S186L (rh) */
    Ifx_UReg_32Bit S187L:1;           /**< \brief [27:27] PFLASH p Sector 187 Erase Counter priority - S187L (rh) */
    Ifx_UReg_32Bit S188L:1;           /**< \brief [28:28] PFLASH p Sector 188 Erase Counter priority - S188L (rh) */
    Ifx_UReg_32Bit S189L:1;           /**< \brief [29:29] PFLASH p Sector 189 Erase Counter priority - S189L (rh) */
    Ifx_UReg_32Bit S190L:1;           /**< \brief [30:30] PFLASH p Sector 190 Erase Counter priority - S190L (rh) */
    Ifx_UReg_32Bit S191L:1;           /**< \brief [31:31] PFLASH p Sector 191 Erase Counter priority - S191L (rh) */
} Ifx_DMU_HP_ECPRIO_P5_Bits;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 0 */
typedef struct _Ifx_DMU_HP_PROCON_OTP0_Bits
{
    Ifx_UReg_32Bit S0ROM:1;           /**< \brief [0:0] PFLASH p Sector 0 Locked for Forever - S0ROM (rh) */
    Ifx_UReg_32Bit S1ROM:1;           /**< \brief [1:1] PFLASH p Sector 1 Locked for Forever - S1ROM (rh) */
    Ifx_UReg_32Bit S2ROM:1;           /**< \brief [2:2] PFLASH p Sector 2 Locked for Forever - S2ROM (rh) */
    Ifx_UReg_32Bit S3ROM:1;           /**< \brief [3:3] PFLASH p Sector 3 Locked for Forever - S3ROM (rh) */
    Ifx_UReg_32Bit S4ROM:1;           /**< \brief [4:4] PFLASH p Sector 4 Locked for Forever - S4ROM (rh) */
    Ifx_UReg_32Bit S5ROM:1;           /**< \brief [5:5] PFLASH p Sector 5 Locked for Forever - S5ROM (rh) */
    Ifx_UReg_32Bit S6ROM:1;           /**< \brief [6:6] PFLASH p Sector 6 Locked for Forever - S6ROM (rh) */
    Ifx_UReg_32Bit S7ROM:1;           /**< \brief [7:7] PFLASH p Sector 7 Locked for Forever - S7ROM (rh) */
    Ifx_UReg_32Bit S8ROM:1;           /**< \brief [8:8] PFLASH p Sector 8 Locked for Forever - S8ROM (rh) */
    Ifx_UReg_32Bit S9ROM:1;           /**< \brief [9:9] PFLASH p Sector 9 Locked for Forever - S9ROM (rh) */
    Ifx_UReg_32Bit S10ROM:1;          /**< \brief [10:10] PFLASH p Sector 10 Locked for Forever - S10ROM (rh) */
    Ifx_UReg_32Bit S11ROM:1;          /**< \brief [11:11] PFLASH p Sector 11 Locked for Forever - S11ROM (rh) */
    Ifx_UReg_32Bit S12ROM:1;          /**< \brief [12:12] PFLASH p Sector 12 Locked for Forever - S12ROM (rh) */
    Ifx_UReg_32Bit S13ROM:1;          /**< \brief [13:13] PFLASH p Sector 13 Locked for Forever - S13ROM (rh) */
    Ifx_UReg_32Bit S14ROM:1;          /**< \brief [14:14] PFLASH p Sector 14 Locked for Forever - S14ROM (rh) */
    Ifx_UReg_32Bit S15ROM:1;          /**< \brief [15:15] PFLASH p Sector 15 Locked for Forever - S15ROM (rh) */
    Ifx_UReg_32Bit S16ROM:1;          /**< \brief [16:16] PFLASH p Sector 16 Locked for Forever - S16ROM (rh) */
    Ifx_UReg_32Bit S17ROM:1;          /**< \brief [17:17] PFLASH p Sector 17 Locked for Forever - S17ROM (rh) */
    Ifx_UReg_32Bit S18ROM:1;          /**< \brief [18:18] PFLASH p Sector 18 Locked for Forever - S18ROM (rh) */
    Ifx_UReg_32Bit S19ROM:1;          /**< \brief [19:19] PFLASH p Sector 19 Locked for Forever - S19ROM (rh) */
    Ifx_UReg_32Bit S20ROM:1;          /**< \brief [20:20] PFLASH p Sector 20 Locked for Forever - S20ROM (rh) */
    Ifx_UReg_32Bit S21ROM:1;          /**< \brief [21:21] PFLASH p Sector 21 Locked for Forever - S21ROM (rh) */
    Ifx_UReg_32Bit S22ROM:1;          /**< \brief [22:22] PFLASH p Sector 22 Locked for Forever - S22ROM (rh) */
    Ifx_UReg_32Bit S23ROM:1;          /**< \brief [23:23] PFLASH p Sector 23 Locked for Forever - S23ROM (rh) */
    Ifx_UReg_32Bit S24ROM:1;          /**< \brief [24:24] PFLASH p Sector 24 Locked for Forever - S24ROM (rh) */
    Ifx_UReg_32Bit S25ROM:1;          /**< \brief [25:25] PFLASH p Sector 25 Locked for Forever - S25ROM (rh) */
    Ifx_UReg_32Bit S26ROM:1;          /**< \brief [26:26] PFLASH p Sector 26 Locked for Forever - S26ROM (rh) */
    Ifx_UReg_32Bit S27ROM:1;          /**< \brief [27:27] PFLASH p Sector 27 Locked for Forever - S27ROM (rh) */
    Ifx_UReg_32Bit S28ROM:1;          /**< \brief [28:28] PFLASH p Sector 28 Locked for Forever - S28ROM (rh) */
    Ifx_UReg_32Bit S29ROM:1;          /**< \brief [29:29] PFLASH p Sector 29 Locked for Forever - S29ROM (rh) */
    Ifx_UReg_32Bit S30ROM:1;          /**< \brief [30:30] PFLASH p Sector 30 Locked for Forever - S30ROM (rh) */
    Ifx_UReg_32Bit S31ROM:1;          /**< \brief [31:31] PFLASH p Sector 31 Locked for Forever - S31ROM (rh) */
} Ifx_DMU_HP_PROCON_OTP0_Bits;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 1 */
typedef struct _Ifx_DMU_HP_PROCON_OTP1_Bits
{
    Ifx_UReg_32Bit S32ROM:1;          /**< \brief [0:0] PFLASH p Sector 32 Locked for Forever - S32ROM (rh) */
    Ifx_UReg_32Bit S33ROM:1;          /**< \brief [1:1] PFLASH p Sector 33 Locked for Forever - S33ROM (rh) */
    Ifx_UReg_32Bit S34ROM:1;          /**< \brief [2:2] PFLASH p Sector 34 Locked for Forever - S34ROM (rh) */
    Ifx_UReg_32Bit S35ROM:1;          /**< \brief [3:3] PFLASH p Sector 35 Locked for Forever - S35ROM (rh) */
    Ifx_UReg_32Bit S36ROM:1;          /**< \brief [4:4] PFLASH p Sector 36 Locked for Forever - S36ROM (rh) */
    Ifx_UReg_32Bit S37ROM:1;          /**< \brief [5:5] PFLASH p Sector 37 Locked for Forever - S37ROM (rh) */
    Ifx_UReg_32Bit S38ROM:1;          /**< \brief [6:6] PFLASH p Sector 38 Locked for Forever - S38ROM (rh) */
    Ifx_UReg_32Bit S39ROM:1;          /**< \brief [7:7] PFLASH p Sector 39 Locked for Forever - S39ROM (rh) */
    Ifx_UReg_32Bit S40ROM:1;          /**< \brief [8:8] PFLASH p Sector 40 Locked for Forever - S40ROM (rh) */
    Ifx_UReg_32Bit S41ROM:1;          /**< \brief [9:9] PFLASH p Sector 41 Locked for Forever - S41ROM (rh) */
    Ifx_UReg_32Bit S42ROM:1;          /**< \brief [10:10] PFLASH p Sector 42 Locked for Forever - S42ROM (rh) */
    Ifx_UReg_32Bit S43ROM:1;          /**< \brief [11:11] PFLASH p Sector 43 Locked for Forever - S43ROM (rh) */
    Ifx_UReg_32Bit S44ROM:1;          /**< \brief [12:12] PFLASH p Sector 44 Locked for Forever - S44ROM (rh) */
    Ifx_UReg_32Bit S45ROM:1;          /**< \brief [13:13] PFLASH p Sector 45 Locked for Forever - S45ROM (rh) */
    Ifx_UReg_32Bit S46ROM:1;          /**< \brief [14:14] PFLASH p Sector 46 Locked for Forever - S46ROM (rh) */
    Ifx_UReg_32Bit S47ROM:1;          /**< \brief [15:15] PFLASH p Sector 47 Locked for Forever - S47ROM (rh) */
    Ifx_UReg_32Bit S48ROM:1;          /**< \brief [16:16] PFLASH p Sector 48 Locked for Forever - S48ROM (rh) */
    Ifx_UReg_32Bit S49ROM:1;          /**< \brief [17:17] PFLASH p Sector 49 Locked for Forever - S49ROM (rh) */
    Ifx_UReg_32Bit S50ROM:1;          /**< \brief [18:18] PFLASH p Sector 50 Locked for Forever - S50ROM (rh) */
    Ifx_UReg_32Bit S51ROM:1;          /**< \brief [19:19] PFLASH p Sector 51 Locked for Forever - S51ROM (rh) */
    Ifx_UReg_32Bit S52ROM:1;          /**< \brief [20:20] PFLASH p Sector 52 Locked for Forever - S52ROM (rh) */
    Ifx_UReg_32Bit S53ROM:1;          /**< \brief [21:21] PFLASH p Sector 53 Locked for Forever - S53ROM (rh) */
    Ifx_UReg_32Bit S54ROM:1;          /**< \brief [22:22] PFLASH p Sector 54 Locked for Forever - S54ROM (rh) */
    Ifx_UReg_32Bit S55ROM:1;          /**< \brief [23:23] PFLASH p Sector 55 Locked for Forever - S55ROM (rh) */
    Ifx_UReg_32Bit S56ROM:1;          /**< \brief [24:24] PFLASH p Sector 56 Locked for Forever - S56ROM (rh) */
    Ifx_UReg_32Bit S57ROM:1;          /**< \brief [25:25] PFLASH p Sector 57 Locked for Forever - S57ROM (rh) */
    Ifx_UReg_32Bit S58ROM:1;          /**< \brief [26:26] PFLASH p Sector 58 Locked for Forever - S58ROM (rh) */
    Ifx_UReg_32Bit S59ROM:1;          /**< \brief [27:27] PFLASH p Sector 59 Locked for Forever - S59ROM (rh) */
    Ifx_UReg_32Bit S60ROM:1;          /**< \brief [28:28] PFLASH p Sector 60 Locked for Forever - S60ROM (rh) */
    Ifx_UReg_32Bit S61ROM:1;          /**< \brief [29:29] PFLASH p Sector 61 Locked for Forever - S61ROM (rh) */
    Ifx_UReg_32Bit S62ROM:1;          /**< \brief [30:30] PFLASH p Sector 62 Locked for Forever - S62ROM (rh) */
    Ifx_UReg_32Bit S63ROM:1;          /**< \brief [31:31] PFLASH p Sector 63 Locked for Forever - S63ROM (rh) */
} Ifx_DMU_HP_PROCON_OTP1_Bits;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 2 */
typedef struct _Ifx_DMU_HP_PROCON_OTP2_Bits
{
    Ifx_UReg_32Bit S64ROM:1;          /**< \brief [0:0] PFLASH p Sector 64 Locked for Forever - S64ROM (rh) */
    Ifx_UReg_32Bit S65ROM:1;          /**< \brief [1:1] PFLASH p Sector 65 Locked for Forever - S65ROM (rh) */
    Ifx_UReg_32Bit S66ROM:1;          /**< \brief [2:2] PFLASH p Sector 66 Locked for Forever - S66ROM (rh) */
    Ifx_UReg_32Bit S67ROM:1;          /**< \brief [3:3] PFLASH p Sector 67 Locked for Forever - S67ROM (rh) */
    Ifx_UReg_32Bit S68ROM:1;          /**< \brief [4:4] PFLASH p Sector 68 Locked for Forever - S68ROM (rh) */
    Ifx_UReg_32Bit S69ROM:1;          /**< \brief [5:5] PFLASH p Sector 69 Locked for Forever - S69ROM (rh) */
    Ifx_UReg_32Bit S70ROM:1;          /**< \brief [6:6] PFLASH p Sector 70 Locked for Forever - S70ROM (rh) */
    Ifx_UReg_32Bit S71ROM:1;          /**< \brief [7:7] PFLASH p Sector 71 Locked for Forever - S71ROM (rh) */
    Ifx_UReg_32Bit S72ROM:1;          /**< \brief [8:8] PFLASH p Sector 72 Locked for Forever - S72ROM (rh) */
    Ifx_UReg_32Bit S73ROM:1;          /**< \brief [9:9] PFLASH p Sector 73 Locked for Forever - S73ROM (rh) */
    Ifx_UReg_32Bit S74ROM:1;          /**< \brief [10:10] PFLASH p Sector 74 Locked for Forever - S74ROM (rh) */
    Ifx_UReg_32Bit S75ROM:1;          /**< \brief [11:11] PFLASH p Sector 75 Locked for Forever - S75ROM (rh) */
    Ifx_UReg_32Bit S76ROM:1;          /**< \brief [12:12] PFLASH p Sector 76 Locked for Forever - S76ROM (rh) */
    Ifx_UReg_32Bit S77ROM:1;          /**< \brief [13:13] PFLASH p Sector 77 Locked for Forever - S77ROM (rh) */
    Ifx_UReg_32Bit S78ROM:1;          /**< \brief [14:14] PFLASH p Sector 78 Locked for Forever - S78ROM (rh) */
    Ifx_UReg_32Bit S79ROM:1;          /**< \brief [15:15] PFLASH p Sector 79 Locked for Forever - S79ROM (rh) */
    Ifx_UReg_32Bit S80ROM:1;          /**< \brief [16:16] PFLASH p Sector 80 Locked for Forever - S80ROM (rh) */
    Ifx_UReg_32Bit S81ROM:1;          /**< \brief [17:17] PFLASH p Sector 81 Locked for Forever - S81ROM (rh) */
    Ifx_UReg_32Bit S82ROM:1;          /**< \brief [18:18] PFLASH p Sector 82 Locked for Forever - S82ROM (rh) */
    Ifx_UReg_32Bit S83ROM:1;          /**< \brief [19:19] PFLASH p Sector 83 Locked for Forever - S83ROM (rh) */
    Ifx_UReg_32Bit S84ROM:1;          /**< \brief [20:20] PFLASH p Sector 84 Locked for Forever - S84ROM (rh) */
    Ifx_UReg_32Bit S85ROM:1;          /**< \brief [21:21] PFLASH p Sector 85 Locked for Forever - S85ROM (rh) */
    Ifx_UReg_32Bit S86ROM:1;          /**< \brief [22:22] PFLASH p Sector 86 Locked for Forever - S86ROM (rh) */
    Ifx_UReg_32Bit S87ROM:1;          /**< \brief [23:23] PFLASH p Sector 87 Locked for Forever - S87ROM (rh) */
    Ifx_UReg_32Bit S88ROM:1;          /**< \brief [24:24] PFLASH p Sector 88 Locked for Forever - S88ROM (rh) */
    Ifx_UReg_32Bit S89ROM:1;          /**< \brief [25:25] PFLASH p Sector 89 Locked for Forever - S89ROM (rh) */
    Ifx_UReg_32Bit S90ROM:1;          /**< \brief [26:26] PFLASH p Sector 90 Locked for Forever - S90ROM (rh) */
    Ifx_UReg_32Bit S91ROM:1;          /**< \brief [27:27] PFLASH p Sector 91 Locked for Forever - S91ROM (rh) */
    Ifx_UReg_32Bit S92ROM:1;          /**< \brief [28:28] PFLASH p Sector 92 Locked for Forever - S92ROM (rh) */
    Ifx_UReg_32Bit S93ROM:1;          /**< \brief [29:29] PFLASH p Sector 93 Locked for Forever - S93ROM (rh) */
    Ifx_UReg_32Bit S94ROM:1;          /**< \brief [30:30] PFLASH p Sector 94 Locked for Forever - S94ROM (rh) */
    Ifx_UReg_32Bit S95ROM:1;          /**< \brief [31:31] PFLASH p Sector 95 Locked for Forever - S95ROM (rh) */
} Ifx_DMU_HP_PROCON_OTP2_Bits;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 3 */
typedef struct _Ifx_DMU_HP_PROCON_OTP3_Bits
{
    Ifx_UReg_32Bit S96ROM:1;          /**< \brief [0:0] PFLASH p Sector 96 Locked for Forever - S96ROM (rh) */
    Ifx_UReg_32Bit S97ROM:1;          /**< \brief [1:1] PFLASH p Sector 97 Locked for Forever - S97ROM (rh) */
    Ifx_UReg_32Bit S98ROM:1;          /**< \brief [2:2] PFLASH p Sector 98 Locked for Forever - S98ROM (rh) */
    Ifx_UReg_32Bit S99ROM:1;          /**< \brief [3:3] PFLASH p Sector 99 Locked for Forever - S99ROM (rh) */
    Ifx_UReg_32Bit S100ROM:1;         /**< \brief [4:4] PFLASH p Sector 100 Locked for Forever - S100ROM (rh) */
    Ifx_UReg_32Bit S101ROM:1;         /**< \brief [5:5] PFLASH p Sector 101 Locked for Forever - S101ROM (rh) */
    Ifx_UReg_32Bit S102ROM:1;         /**< \brief [6:6] PFLASH p Sector 102 Locked for Forever - S102ROM (rh) */
    Ifx_UReg_32Bit S103ROM:1;         /**< \brief [7:7] PFLASH p Sector 103 Locked for Forever - S103ROM (rh) */
    Ifx_UReg_32Bit S104ROM:1;         /**< \brief [8:8] PFLASH p Sector 104 Locked for Forever - S104ROM (rh) */
    Ifx_UReg_32Bit S105ROM:1;         /**< \brief [9:9] PFLASH p Sector 105 Locked for Forever - S105ROM (rh) */
    Ifx_UReg_32Bit S106ROM:1;         /**< \brief [10:10] PFLASH p Sector 106 Locked for Forever - S106ROM (rh) */
    Ifx_UReg_32Bit S107ROM:1;         /**< \brief [11:11] PFLASH p Sector 107 Locked for Forever - S107ROM (rh) */
    Ifx_UReg_32Bit S108ROM:1;         /**< \brief [12:12] PFLASH p Sector 108 Locked for Forever - S108ROM (rh) */
    Ifx_UReg_32Bit S109ROM:1;         /**< \brief [13:13] PFLASH p Sector 109 Locked for Forever - S109ROM (rh) */
    Ifx_UReg_32Bit S110ROM:1;         /**< \brief [14:14] PFLASH p Sector 110 Locked for Forever - S110ROM (rh) */
    Ifx_UReg_32Bit S111ROM:1;         /**< \brief [15:15] PFLASH p Sector 111 Locked for Forever - S111ROM (rh) */
    Ifx_UReg_32Bit S112ROM:1;         /**< \brief [16:16] PFLASH p Sector 112 Locked for Forever - S112ROM (rh) */
    Ifx_UReg_32Bit S113ROM:1;         /**< \brief [17:17] PFLASH p Sector 113 Locked for Forever - S113ROM (rh) */
    Ifx_UReg_32Bit S114ROM:1;         /**< \brief [18:18] PFLASH p Sector 114 Locked for Forever - S114ROM (rh) */
    Ifx_UReg_32Bit S115ROM:1;         /**< \brief [19:19] PFLASH p Sector 115 Locked for Forever - S115ROM (rh) */
    Ifx_UReg_32Bit S116ROM:1;         /**< \brief [20:20] PFLASH p Sector 116 Locked for Forever - S116ROM (rh) */
    Ifx_UReg_32Bit S117ROM:1;         /**< \brief [21:21] PFLASH p Sector 117 Locked for Forever - S117ROM (rh) */
    Ifx_UReg_32Bit S118ROM:1;         /**< \brief [22:22] PFLASH p Sector 118 Locked for Forever - S118ROM (rh) */
    Ifx_UReg_32Bit S119ROM:1;         /**< \brief [23:23] PFLASH p Sector 119 Locked for Forever - S119ROM (rh) */
    Ifx_UReg_32Bit S120ROM:1;         /**< \brief [24:24] PFLASH p Sector 120 Locked for Forever - S120ROM (rh) */
    Ifx_UReg_32Bit S121ROM:1;         /**< \brief [25:25] PFLASH p Sector 121 Locked for Forever - S121ROM (rh) */
    Ifx_UReg_32Bit S122ROM:1;         /**< \brief [26:26] PFLASH p Sector 122 Locked for Forever - S122ROM (rh) */
    Ifx_UReg_32Bit S123ROM:1;         /**< \brief [27:27] PFLASH p Sector 123 Locked for Forever - S123ROM (rh) */
    Ifx_UReg_32Bit S124ROM:1;         /**< \brief [28:28] PFLASH p Sector 124 Locked for Forever - S124ROM (rh) */
    Ifx_UReg_32Bit S125ROM:1;         /**< \brief [29:29] PFLASH p Sector 125 Locked for Forever - S125ROM (rh) */
    Ifx_UReg_32Bit S126ROM:1;         /**< \brief [30:30] PFLASH p Sector 126 Locked for Forever - S126ROM (rh) */
    Ifx_UReg_32Bit S127ROM:1;         /**< \brief [31:31] PFLASH p Sector 127 Locked for Forever - S127ROM (rh) */
} Ifx_DMU_HP_PROCON_OTP3_Bits;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 4 */
typedef struct _Ifx_DMU_HP_PROCON_OTP4_Bits
{
    Ifx_UReg_32Bit S128ROM:1;         /**< \brief [0:0] PFLASH p Sector 128 Locked for Forever - S128ROM (rh) */
    Ifx_UReg_32Bit S129ROM:1;         /**< \brief [1:1] PFLASH p Sector 129 Locked for Forever - S129ROM (rh) */
    Ifx_UReg_32Bit S130ROM:1;         /**< \brief [2:2] PFLASH p Sector 130 Locked for Forever - S130ROM (rh) */
    Ifx_UReg_32Bit S131ROM:1;         /**< \brief [3:3] PFLASH p Sector 131 Locked for Forever - S131ROM (rh) */
    Ifx_UReg_32Bit S132ROM:1;         /**< \brief [4:4] PFLASH p Sector 132 Locked for Forever - S132ROM (rh) */
    Ifx_UReg_32Bit S133ROM:1;         /**< \brief [5:5] PFLASH p Sector 133 Locked for Forever - S133ROM (rh) */
    Ifx_UReg_32Bit S134ROM:1;         /**< \brief [6:6] PFLASH p Sector 134 Locked for Forever - S134ROM (rh) */
    Ifx_UReg_32Bit S135ROM:1;         /**< \brief [7:7] PFLASH p Sector 135 Locked for Forever - S135ROM (rh) */
    Ifx_UReg_32Bit S136ROM:1;         /**< \brief [8:8] PFLASH p Sector 136 Locked for Forever - S136ROM (rh) */
    Ifx_UReg_32Bit S137ROM:1;         /**< \brief [9:9] PFLASH p Sector 137 Locked for Forever - S137ROM (rh) */
    Ifx_UReg_32Bit S138ROM:1;         /**< \brief [10:10] PFLASH p Sector 138 Locked for Forever - S138ROM (rh) */
    Ifx_UReg_32Bit S139ROM:1;         /**< \brief [11:11] PFLASH p Sector 139 Locked for Forever - S139ROM (rh) */
    Ifx_UReg_32Bit S140ROM:1;         /**< \brief [12:12] PFLASH p Sector 140 Locked for Forever - S140ROM (rh) */
    Ifx_UReg_32Bit S141ROM:1;         /**< \brief [13:13] PFLASH p Sector 141 Locked for Forever - S141ROM (rh) */
    Ifx_UReg_32Bit S142ROM:1;         /**< \brief [14:14] PFLASH p Sector 142 Locked for Forever - S142ROM (rh) */
    Ifx_UReg_32Bit S143ROM:1;         /**< \brief [15:15] PFLASH p Sector 143 Locked for Forever - S143ROM (rh) */
    Ifx_UReg_32Bit S144ROM:1;         /**< \brief [16:16] PFLASH p Sector 144 Locked for Forever - S144ROM (rh) */
    Ifx_UReg_32Bit S145ROM:1;         /**< \brief [17:17] PFLASH p Sector 145 Locked for Forever - S145ROM (rh) */
    Ifx_UReg_32Bit S146ROM:1;         /**< \brief [18:18] PFLASH p Sector 146 Locked for Forever - S146ROM (rh) */
    Ifx_UReg_32Bit S147ROM:1;         /**< \brief [19:19] PFLASH p Sector 147 Locked for Forever - S147ROM (rh) */
    Ifx_UReg_32Bit S148ROM:1;         /**< \brief [20:20] PFLASH p Sector 148 Locked for Forever - S148ROM (rh) */
    Ifx_UReg_32Bit S149ROM:1;         /**< \brief [21:21] PFLASH p Sector 149 Locked for Forever - S149ROM (rh) */
    Ifx_UReg_32Bit S150ROM:1;         /**< \brief [22:22] PFLASH p Sector 150 Locked for Forever - S150ROM (rh) */
    Ifx_UReg_32Bit S151ROM:1;         /**< \brief [23:23] PFLASH p Sector 151 Locked for Forever - S151ROM (rh) */
    Ifx_UReg_32Bit S152ROM:1;         /**< \brief [24:24] PFLASH p Sector 152 Locked for Forever - S152ROM (rh) */
    Ifx_UReg_32Bit S153ROM:1;         /**< \brief [25:25] PFLASH p Sector 153 Locked for Forever - S153ROM (rh) */
    Ifx_UReg_32Bit S154ROM:1;         /**< \brief [26:26] PFLASH p Sector 154 Locked for Forever - S154ROM (rh) */
    Ifx_UReg_32Bit S155ROM:1;         /**< \brief [27:27] PFLASH p Sector 155 Locked for Forever - S155ROM (rh) */
    Ifx_UReg_32Bit S156ROM:1;         /**< \brief [28:28] PFLASH p Sector 156 Locked for Forever - S156ROM (rh) */
    Ifx_UReg_32Bit S157ROM:1;         /**< \brief [29:29] PFLASH p Sector 157 Locked for Forever - S157ROM (rh) */
    Ifx_UReg_32Bit S158ROM:1;         /**< \brief [30:30] PFLASH p Sector 158 Locked for Forever - S158ROM (rh) */
    Ifx_UReg_32Bit S159ROM:1;         /**< \brief [31:31] PFLASH p Sector 159 Locked for Forever - S159ROM (rh) */
} Ifx_DMU_HP_PROCON_OTP4_Bits;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 5 */
typedef struct _Ifx_DMU_HP_PROCON_OTP5_Bits
{
    Ifx_UReg_32Bit S160ROM:1;         /**< \brief [0:0] PFLASH p Sector 160 Locked for Forever - S160ROM (rh) */
    Ifx_UReg_32Bit S161ROM:1;         /**< \brief [1:1] PFLASH p Sector 161 Locked for Forever - S161ROM (rh) */
    Ifx_UReg_32Bit S162ROM:1;         /**< \brief [2:2] PFLASH p Sector 162 Locked for Forever - S162ROM (rh) */
    Ifx_UReg_32Bit S163ROM:1;         /**< \brief [3:3] PFLASH p Sector 163 Locked for Forever - S163ROM (rh) */
    Ifx_UReg_32Bit S164ROM:1;         /**< \brief [4:4] PFLASH p Sector 164 Locked for Forever - S164ROM (rh) */
    Ifx_UReg_32Bit S165ROM:1;         /**< \brief [5:5] PFLASH p Sector 165 Locked for Forever - S165ROM (rh) */
    Ifx_UReg_32Bit S166ROM:1;         /**< \brief [6:6] PFLASH p Sector 166 Locked for Forever - S166ROM (rh) */
    Ifx_UReg_32Bit S167ROM:1;         /**< \brief [7:7] PFLASH p Sector 167 Locked for Forever - S167ROM (rh) */
    Ifx_UReg_32Bit S168ROM:1;         /**< \brief [8:8] PFLASH p Sector 168 Locked for Forever - S168ROM (rh) */
    Ifx_UReg_32Bit S169ROM:1;         /**< \brief [9:9] PFLASH p Sector 169 Locked for Forever - S169ROM (rh) */
    Ifx_UReg_32Bit S170ROM:1;         /**< \brief [10:10] PFLASH p Sector 170 Locked for Forever - S170ROM (rh) */
    Ifx_UReg_32Bit S171ROM:1;         /**< \brief [11:11] PFLASH p Sector 171 Locked for Forever - S171ROM (rh) */
    Ifx_UReg_32Bit S172ROM:1;         /**< \brief [12:12] PFLASH p Sector 172 Locked for Forever - S172ROM (rh) */
    Ifx_UReg_32Bit S173ROM:1;         /**< \brief [13:13] PFLASH p Sector 173 Locked for Forever - S173ROM (rh) */
    Ifx_UReg_32Bit S174ROM:1;         /**< \brief [14:14] PFLASH p Sector 174 Locked for Forever - S174ROM (rh) */
    Ifx_UReg_32Bit S175ROM:1;         /**< \brief [15:15] PFLASH p Sector 175 Locked for Forever - S175ROM (rh) */
    Ifx_UReg_32Bit S176ROM:1;         /**< \brief [16:16] PFLASH p Sector 176 Locked for Forever - S176ROM (rh) */
    Ifx_UReg_32Bit S177ROM:1;         /**< \brief [17:17] PFLASH p Sector 177 Locked for Forever - S177ROM (rh) */
    Ifx_UReg_32Bit S178ROM:1;         /**< \brief [18:18] PFLASH p Sector 178 Locked for Forever - S178ROM (rh) */
    Ifx_UReg_32Bit S179ROM:1;         /**< \brief [19:19] PFLASH p Sector 179 Locked for Forever - S179ROM (rh) */
    Ifx_UReg_32Bit S180ROM:1;         /**< \brief [20:20] PFLASH p Sector 180 Locked for Forever - S180ROM (rh) */
    Ifx_UReg_32Bit S181ROM:1;         /**< \brief [21:21] PFLASH p Sector 181 Locked for Forever - S181ROM (rh) */
    Ifx_UReg_32Bit S182ROM:1;         /**< \brief [22:22] PFLASH p Sector 182 Locked for Forever - S182ROM (rh) */
    Ifx_UReg_32Bit S183ROM:1;         /**< \brief [23:23] PFLASH p Sector 183 Locked for Forever - S183ROM (rh) */
    Ifx_UReg_32Bit S184ROM:1;         /**< \brief [24:24] PFLASH p Sector 184 Locked for Forever - S184ROM (rh) */
    Ifx_UReg_32Bit S185ROM:1;         /**< \brief [25:25] PFLASH p Sector 185 Locked for Forever - S185ROM (rh) */
    Ifx_UReg_32Bit S186ROM:1;         /**< \brief [26:26] PFLASH p Sector 186 Locked for Forever - S186ROM (rh) */
    Ifx_UReg_32Bit S187ROM:1;         /**< \brief [27:27] PFLASH p Sector 187 Locked for Forever - S187ROM (rh) */
    Ifx_UReg_32Bit S188ROM:1;         /**< \brief [28:28] PFLASH p Sector 188 Locked for Forever - S188ROM (rh) */
    Ifx_UReg_32Bit S189ROM:1;         /**< \brief [29:29] PFLASH p Sector 189 Locked for Forever - S189ROM (rh) */
    Ifx_UReg_32Bit S190ROM:1;         /**< \brief [30:30] PFLASH p Sector 190 Locked for Forever - S190ROM (rh) */
    Ifx_UReg_32Bit S191ROM:1;         /**< \brief [31:31] PFLASH p Sector 191 Locked for Forever - S191ROM (rh) */
} Ifx_DMU_HP_PROCON_OTP5_Bits;

/** \brief PFLASH Bank ${i} Protection Configuration 0 */
typedef struct _Ifx_DMU_HP_PROCON_P0_Bits
{
    Ifx_UReg_32Bit S0L:1;             /**< \brief [0:0] PFLASH p Sector 0 Locked for Write Protection - S0L (rh) */
    Ifx_UReg_32Bit S1L:1;             /**< \brief [1:1] PFLASH p Sector 1 Locked for Write Protection - S1L (rh) */
    Ifx_UReg_32Bit S2L:1;             /**< \brief [2:2] PFLASH p Sector 2 Locked for Write Protection - S2L (rh) */
    Ifx_UReg_32Bit S3L:1;             /**< \brief [3:3] PFLASH p Sector 3 Locked for Write Protection - S3L (rh) */
    Ifx_UReg_32Bit S4L:1;             /**< \brief [4:4] PFLASH p Sector 4 Locked for Write Protection - S4L (rh) */
    Ifx_UReg_32Bit S5L:1;             /**< \brief [5:5] PFLASH p Sector 5 Locked for Write Protection - S5L (rh) */
    Ifx_UReg_32Bit S6L:1;             /**< \brief [6:6] PFLASH p Sector 6 Locked for Write Protection - S6L (rh) */
    Ifx_UReg_32Bit S7L:1;             /**< \brief [7:7] PFLASH p Sector 7 Locked for Write Protection - S7L (rh) */
    Ifx_UReg_32Bit S8L:1;             /**< \brief [8:8] PFLASH p Sector 8 Locked for Write Protection - S8L (rh) */
    Ifx_UReg_32Bit S9L:1;             /**< \brief [9:9] PFLASH p Sector 9 Locked for Write Protection - S9L (rh) */
    Ifx_UReg_32Bit S10L:1;            /**< \brief [10:10] PFLASH p Sector 10 Locked for Write Protection - S10L (rh) */
    Ifx_UReg_32Bit S11L:1;            /**< \brief [11:11] PFLASH p Sector 11 Locked for Write Protection - S11L (rh) */
    Ifx_UReg_32Bit S12L:1;            /**< \brief [12:12] PFLASH p Sector 12 Locked for Write Protection - S12L (rh) */
    Ifx_UReg_32Bit S13L:1;            /**< \brief [13:13] PFLASH p Sector 13 Locked for Write Protection - S13L (rh) */
    Ifx_UReg_32Bit S14L:1;            /**< \brief [14:14] PFLASH p Sector 14 Locked for Write Protection - S14L (rh) */
    Ifx_UReg_32Bit S15L:1;            /**< \brief [15:15] PFLASH p Sector 15 Locked for Write Protection - S15L (rh) */
    Ifx_UReg_32Bit S16L:1;            /**< \brief [16:16] PFLASH p Sector 16 Locked for Write Protection - S16L (rh) */
    Ifx_UReg_32Bit S17L:1;            /**< \brief [17:17] PFLASH p Sector 17 Locked for Write Protection - S17L (rh) */
    Ifx_UReg_32Bit S18L:1;            /**< \brief [18:18] PFLASH p Sector 18 Locked for Write Protection - S18L (rh) */
    Ifx_UReg_32Bit S19L:1;            /**< \brief [19:19] PFLASH p Sector 19 Locked for Write Protection - S19L (rh) */
    Ifx_UReg_32Bit S20L:1;            /**< \brief [20:20] PFLASH p Sector 20 Locked for Write Protection - S20L (rh) */
    Ifx_UReg_32Bit S21L:1;            /**< \brief [21:21] PFLASH p Sector 21 Locked for Write Protection - S21L (rh) */
    Ifx_UReg_32Bit S22L:1;            /**< \brief [22:22] PFLASH p Sector 22 Locked for Write Protection - S22L (rh) */
    Ifx_UReg_32Bit S23L:1;            /**< \brief [23:23] PFLASH p Sector 23 Locked for Write Protection - S23L (rh) */
    Ifx_UReg_32Bit S24L:1;            /**< \brief [24:24] PFLASH p Sector 24 Locked for Write Protection - S24L (rh) */
    Ifx_UReg_32Bit S25L:1;            /**< \brief [25:25] PFLASH p Sector 25 Locked for Write Protection - S25L (rh) */
    Ifx_UReg_32Bit S26L:1;            /**< \brief [26:26] PFLASH p Sector 26 Locked for Write Protection - S26L (rh) */
    Ifx_UReg_32Bit S27L:1;            /**< \brief [27:27] PFLASH p Sector 27 Locked for Write Protection - S27L (rh) */
    Ifx_UReg_32Bit S28L:1;            /**< \brief [28:28] PFLASH p Sector 28 Locked for Write Protection - S28L (rh) */
    Ifx_UReg_32Bit S29L:1;            /**< \brief [29:29] PFLASH p Sector 29 Locked for Write Protection - S29L (rh) */
    Ifx_UReg_32Bit S30L:1;            /**< \brief [30:30] PFLASH p Sector 30 Locked for Write Protection - S30L (rh) */
    Ifx_UReg_32Bit S31L:1;            /**< \brief [31:31] PFLASH p Sector 31 Locked for Write Protection - S31L (rh) */
} Ifx_DMU_HP_PROCON_P0_Bits;

/** \brief PFLASH Bank ${i} Protection Configuration 1 */
typedef struct _Ifx_DMU_HP_PROCON_P1_Bits
{
    Ifx_UReg_32Bit S32L:1;            /**< \brief [0:0] PFLASH p Sector 32 Locked for Write Protection - S32L (rh) */
    Ifx_UReg_32Bit S33L:1;            /**< \brief [1:1] PFLASH p Sector 33 Locked for Write Protection - S33L (rh) */
    Ifx_UReg_32Bit S34L:1;            /**< \brief [2:2] PFLASH p Sector 34 Locked for Write Protection - S34L (rh) */
    Ifx_UReg_32Bit S35L:1;            /**< \brief [3:3] PFLASH p Sector 35 Locked for Write Protection - S35L (rh) */
    Ifx_UReg_32Bit S36L:1;            /**< \brief [4:4] PFLASH p Sector 36 Locked for Write Protection - S36L (rh) */
    Ifx_UReg_32Bit S37L:1;            /**< \brief [5:5] PFLASH p Sector 37 Locked for Write Protection - S37L (rh) */
    Ifx_UReg_32Bit S38L:1;            /**< \brief [6:6] PFLASH p Sector 38 Locked for Write Protection - S38L (rh) */
    Ifx_UReg_32Bit S39L:1;            /**< \brief [7:7] PFLASH p Sector 39 Locked for Write Protection - S39L (rh) */
    Ifx_UReg_32Bit S40L:1;            /**< \brief [8:8] PFLASH p Sector 40 Locked for Write Protection - S40L (rh) */
    Ifx_UReg_32Bit S41L:1;            /**< \brief [9:9] PFLASH p Sector 41 Locked for Write Protection - S41L (rh) */
    Ifx_UReg_32Bit S42L:1;            /**< \brief [10:10] PFLASH p Sector 42 Locked for Write Protection - S42L (rh) */
    Ifx_UReg_32Bit S43L:1;            /**< \brief [11:11] PFLASH p Sector 43 Locked for Write Protection - S43L (rh) */
    Ifx_UReg_32Bit S44L:1;            /**< \brief [12:12] PFLASH p Sector 44 Locked for Write Protection - S44L (rh) */
    Ifx_UReg_32Bit S45L:1;            /**< \brief [13:13] PFLASH p Sector 45 Locked for Write Protection - S45L (rh) */
    Ifx_UReg_32Bit S46L:1;            /**< \brief [14:14] PFLASH p Sector 46 Locked for Write Protection - S46L (rh) */
    Ifx_UReg_32Bit S47L:1;            /**< \brief [15:15] PFLASH p Sector 47 Locked for Write Protection - S47L (rh) */
    Ifx_UReg_32Bit S48L:1;            /**< \brief [16:16] PFLASH p Sector 48 Locked for Write Protection - S48L (rh) */
    Ifx_UReg_32Bit S49L:1;            /**< \brief [17:17] PFLASH p Sector 49 Locked for Write Protection - S49L (rh) */
    Ifx_UReg_32Bit S50L:1;            /**< \brief [18:18] PFLASH p Sector 50 Locked for Write Protection - S50L (rh) */
    Ifx_UReg_32Bit S51L:1;            /**< \brief [19:19] PFLASH p Sector 51 Locked for Write Protection - S51L (rh) */
    Ifx_UReg_32Bit S52L:1;            /**< \brief [20:20] PFLASH p Sector 52 Locked for Write Protection - S52L (rh) */
    Ifx_UReg_32Bit S53L:1;            /**< \brief [21:21] PFLASH p Sector 53 Locked for Write Protection - S53L (rh) */
    Ifx_UReg_32Bit S54L:1;            /**< \brief [22:22] PFLASH p Sector 54 Locked for Write Protection - S54L (rh) */
    Ifx_UReg_32Bit S55L:1;            /**< \brief [23:23] PFLASH p Sector 55 Locked for Write Protection - S55L (rh) */
    Ifx_UReg_32Bit S56L:1;            /**< \brief [24:24] PFLASH p Sector 56 Locked for Write Protection - S56L (rh) */
    Ifx_UReg_32Bit S57L:1;            /**< \brief [25:25] PFLASH p Sector 57 Locked for Write Protection - S57L (rh) */
    Ifx_UReg_32Bit S58L:1;            /**< \brief [26:26] PFLASH p Sector 58 Locked for Write Protection - S58L (rh) */
    Ifx_UReg_32Bit S59L:1;            /**< \brief [27:27] PFLASH p Sector 59 Locked for Write Protection - S59L (rh) */
    Ifx_UReg_32Bit S60L:1;            /**< \brief [28:28] PFLASH p Sector 60 Locked for Write Protection - S60L (rh) */
    Ifx_UReg_32Bit S61L:1;            /**< \brief [29:29] PFLASH p Sector 61 Locked for Write Protection - S61L (rh) */
    Ifx_UReg_32Bit S62L:1;            /**< \brief [30:30] PFLASH p Sector 62 Locked for Write Protection - S62L (rh) */
    Ifx_UReg_32Bit S63L:1;            /**< \brief [31:31] PFLASH p Sector 63 Locked for Write Protection - S63L (rh) */
} Ifx_DMU_HP_PROCON_P1_Bits;

/** \brief PFLASH Bank ${i} Protection Configuration 2 */
typedef struct _Ifx_DMU_HP_PROCON_P2_Bits
{
    Ifx_UReg_32Bit S64L:1;            /**< \brief [0:0] PFLASH p Sector 64 Locked for Write Protection - S64L (rh) */
    Ifx_UReg_32Bit S65L:1;            /**< \brief [1:1] PFLASH p Sector 65 Locked for Write Protection - S65L (rh) */
    Ifx_UReg_32Bit S66L:1;            /**< \brief [2:2] PFLASH p Sector 66 Locked for Write Protection - S66L (rh) */
    Ifx_UReg_32Bit S67L:1;            /**< \brief [3:3] PFLASH p Sector 67 Locked for Write Protection - S67L (rh) */
    Ifx_UReg_32Bit S68L:1;            /**< \brief [4:4] PFLASH p Sector 68 Locked for Write Protection - S68L (rh) */
    Ifx_UReg_32Bit S69L:1;            /**< \brief [5:5] PFLASH p Sector 69 Locked for Write Protection - S69L (rh) */
    Ifx_UReg_32Bit S70L:1;            /**< \brief [6:6] PFLASH p Sector 70 Locked for Write Protection - S70L (rh) */
    Ifx_UReg_32Bit S71L:1;            /**< \brief [7:7] PFLASH p Sector 71 Locked for Write Protection - S71L (rh) */
    Ifx_UReg_32Bit S72L:1;            /**< \brief [8:8] PFLASH p Sector 72 Locked for Write Protection - S72L (rh) */
    Ifx_UReg_32Bit S73L:1;            /**< \brief [9:9] PFLASH p Sector 73 Locked for Write Protection - S73L (rh) */
    Ifx_UReg_32Bit S74L:1;            /**< \brief [10:10] PFLASH p Sector 74 Locked for Write Protection - S74L (rh) */
    Ifx_UReg_32Bit S75L:1;            /**< \brief [11:11] PFLASH p Sector 75 Locked for Write Protection - S75L (rh) */
    Ifx_UReg_32Bit S76L:1;            /**< \brief [12:12] PFLASH p Sector 76 Locked for Write Protection - S76L (rh) */
    Ifx_UReg_32Bit S77L:1;            /**< \brief [13:13] PFLASH p Sector 77 Locked for Write Protection - S77L (rh) */
    Ifx_UReg_32Bit S78L:1;            /**< \brief [14:14] PFLASH p Sector 78 Locked for Write Protection - S78L (rh) */
    Ifx_UReg_32Bit S79L:1;            /**< \brief [15:15] PFLASH p Sector 79 Locked for Write Protection - S79L (rh) */
    Ifx_UReg_32Bit S80L:1;            /**< \brief [16:16] PFLASH p Sector 80 Locked for Write Protection - S80L (rh) */
    Ifx_UReg_32Bit S81L:1;            /**< \brief [17:17] PFLASH p Sector 81 Locked for Write Protection - S81L (rh) */
    Ifx_UReg_32Bit S82L:1;            /**< \brief [18:18] PFLASH p Sector 82 Locked for Write Protection - S82L (rh) */
    Ifx_UReg_32Bit S83L:1;            /**< \brief [19:19] PFLASH p Sector 83 Locked for Write Protection - S83L (rh) */
    Ifx_UReg_32Bit S84L:1;            /**< \brief [20:20] PFLASH p Sector 84 Locked for Write Protection - S84L (rh) */
    Ifx_UReg_32Bit S85L:1;            /**< \brief [21:21] PFLASH p Sector 85 Locked for Write Protection - S85L (rh) */
    Ifx_UReg_32Bit S86L:1;            /**< \brief [22:22] PFLASH p Sector 86 Locked for Write Protection - S86L (rh) */
    Ifx_UReg_32Bit S87L:1;            /**< \brief [23:23] PFLASH p Sector 87 Locked for Write Protection - S87L (rh) */
    Ifx_UReg_32Bit S88L:1;            /**< \brief [24:24] PFLASH p Sector 88 Locked for Write Protection - S88L (rh) */
    Ifx_UReg_32Bit S89L:1;            /**< \brief [25:25] PFLASH p Sector 89 Locked for Write Protection - S89L (rh) */
    Ifx_UReg_32Bit S90L:1;            /**< \brief [26:26] PFLASH p Sector 90 Locked for Write Protection - S90L (rh) */
    Ifx_UReg_32Bit S91L:1;            /**< \brief [27:27] PFLASH p Sector 91 Locked for Write Protection - S91L (rh) */
    Ifx_UReg_32Bit S92L:1;            /**< \brief [28:28] PFLASH p Sector 92 Locked for Write Protection - S92L (rh) */
    Ifx_UReg_32Bit S93L:1;            /**< \brief [29:29] PFLASH p Sector 93 Locked for Write Protection - S93L (rh) */
    Ifx_UReg_32Bit S94L:1;            /**< \brief [30:30] PFLASH p Sector 94 Locked for Write Protection - S94L (rh) */
    Ifx_UReg_32Bit S95L:1;            /**< \brief [31:31] PFLASH p Sector 95 Locked for Write Protection - S95L (rh) */
} Ifx_DMU_HP_PROCON_P2_Bits;

/** \brief PFLASH Bank ${i} Protection Configuration 3 */
typedef struct _Ifx_DMU_HP_PROCON_P3_Bits
{
    Ifx_UReg_32Bit S96L:1;            /**< \brief [0:0] PFLASH p Sector 96 Locked for Write Protection - S96L (rh) */
    Ifx_UReg_32Bit S97L:1;            /**< \brief [1:1] PFLASH p Sector 97 Locked for Write Protection - S97L (rh) */
    Ifx_UReg_32Bit S98L:1;            /**< \brief [2:2] PFLASH p Sector 98 Locked for Write Protection - S98L (rh) */
    Ifx_UReg_32Bit S99L:1;            /**< \brief [3:3] PFLASH p Sector 99 Locked for Write Protection - S99L (rh) */
    Ifx_UReg_32Bit S100L:1;           /**< \brief [4:4] PFLASH p Sector 100 Locked for Write Protection - S100L (rh) */
    Ifx_UReg_32Bit S101L:1;           /**< \brief [5:5] PFLASH p Sector 101 Locked for Write Protection - S101L (rh) */
    Ifx_UReg_32Bit S102L:1;           /**< \brief [6:6] PFLASH p Sector 102 Locked for Write Protection - S102L (rh) */
    Ifx_UReg_32Bit S103L:1;           /**< \brief [7:7] PFLASH p Sector 103 Locked for Write Protection - S103L (rh) */
    Ifx_UReg_32Bit S104L:1;           /**< \brief [8:8] PFLASH p Sector 104 Locked for Write Protection - S104L (rh) */
    Ifx_UReg_32Bit S105L:1;           /**< \brief [9:9] PFLASH p Sector 105 Locked for Write Protection - S105L (rh) */
    Ifx_UReg_32Bit S106L:1;           /**< \brief [10:10] PFLASH p Sector 106 Locked for Write Protection - S106L (rh) */
    Ifx_UReg_32Bit S107L:1;           /**< \brief [11:11] PFLASH p Sector 107 Locked for Write Protection - S107L (rh) */
    Ifx_UReg_32Bit S108L:1;           /**< \brief [12:12] PFLASH p Sector 108 Locked for Write Protection - S108L (rh) */
    Ifx_UReg_32Bit S109L:1;           /**< \brief [13:13] PFLASH p Sector 109 Locked for Write Protection - S109L (rh) */
    Ifx_UReg_32Bit S110L:1;           /**< \brief [14:14] PFLASH p Sector 110 Locked for Write Protection - S110L (rh) */
    Ifx_UReg_32Bit S111L:1;           /**< \brief [15:15] PFLASH p Sector 111 Locked for Write Protection - S111L (rh) */
    Ifx_UReg_32Bit S112L:1;           /**< \brief [16:16] PFLASH p Sector 112 Locked for Write Protection - S112L (rh) */
    Ifx_UReg_32Bit S113L:1;           /**< \brief [17:17] PFLASH p Sector 113 Locked for Write Protection - S113L (rh) */
    Ifx_UReg_32Bit S114L:1;           /**< \brief [18:18] PFLASH p Sector 114 Locked for Write Protection - S114L (rh) */
    Ifx_UReg_32Bit S115L:1;           /**< \brief [19:19] PFLASH p Sector 115 Locked for Write Protection - S115L (rh) */
    Ifx_UReg_32Bit S116L:1;           /**< \brief [20:20] PFLASH p Sector 116 Locked for Write Protection - S116L (rh) */
    Ifx_UReg_32Bit S117L:1;           /**< \brief [21:21] PFLASH p Sector 117 Locked for Write Protection - S117L (rh) */
    Ifx_UReg_32Bit S118L:1;           /**< \brief [22:22] PFLASH p Sector 118 Locked for Write Protection - S118L (rh) */
    Ifx_UReg_32Bit S119L:1;           /**< \brief [23:23] PFLASH p Sector 119 Locked for Write Protection - S119L (rh) */
    Ifx_UReg_32Bit S120L:1;           /**< \brief [24:24] PFLASH p Sector 120 Locked for Write Protection - S120L (rh) */
    Ifx_UReg_32Bit S121L:1;           /**< \brief [25:25] PFLASH p Sector 121 Locked for Write Protection - S121L (rh) */
    Ifx_UReg_32Bit S122L:1;           /**< \brief [26:26] PFLASH p Sector 122 Locked for Write Protection - S122L (rh) */
    Ifx_UReg_32Bit S123L:1;           /**< \brief [27:27] PFLASH p Sector 123 Locked for Write Protection - S123L (rh) */
    Ifx_UReg_32Bit S124L:1;           /**< \brief [28:28] PFLASH p Sector 124 Locked for Write Protection - S124L (rh) */
    Ifx_UReg_32Bit S125L:1;           /**< \brief [29:29] PFLASH p Sector 125 Locked for Write Protection - S125L (rh) */
    Ifx_UReg_32Bit S126L:1;           /**< \brief [30:30] PFLASH p Sector 126 Locked for Write Protection - S126L (rh) */
    Ifx_UReg_32Bit S127L:1;           /**< \brief [31:31] PFLASH p Sector 127 Locked for Write Protection - S127L (rh) */
} Ifx_DMU_HP_PROCON_P3_Bits;

/** \brief PFLASH Bank ${i} Protection Configuration 4 */
typedef struct _Ifx_DMU_HP_PROCON_P4_Bits
{
    Ifx_UReg_32Bit S128L:1;           /**< \brief [0:0] PFLASH p Sector 128 Locked for Write Protection - S128L (rh) */
    Ifx_UReg_32Bit S129L:1;           /**< \brief [1:1] PFLASH p Sector 129 Locked for Write Protection - S129L (rh) */
    Ifx_UReg_32Bit S130L:1;           /**< \brief [2:2] PFLASH p Sector 130 Locked for Write Protection - S130L (rh) */
    Ifx_UReg_32Bit S131L:1;           /**< \brief [3:3] PFLASH p Sector 131 Locked for Write Protection - S131L (rh) */
    Ifx_UReg_32Bit S132L:1;           /**< \brief [4:4] PFLASH p Sector 132 Locked for Write Protection - S132L (rh) */
    Ifx_UReg_32Bit S133L:1;           /**< \brief [5:5] PFLASH p Sector 133 Locked for Write Protection - S133L (rh) */
    Ifx_UReg_32Bit S134L:1;           /**< \brief [6:6] PFLASH p Sector 134 Locked for Write Protection - S134L (rh) */
    Ifx_UReg_32Bit S135L:1;           /**< \brief [7:7] PFLASH p Sector 135 Locked for Write Protection - S135L (rh) */
    Ifx_UReg_32Bit S136L:1;           /**< \brief [8:8] PFLASH p Sector 136 Locked for Write Protection - S136L (rh) */
    Ifx_UReg_32Bit S137L:1;           /**< \brief [9:9] PFLASH p Sector 137 Locked for Write Protection - S137L (rh) */
    Ifx_UReg_32Bit S138L:1;           /**< \brief [10:10] PFLASH p Sector 138 Locked for Write Protection - S138L (rh) */
    Ifx_UReg_32Bit S139L:1;           /**< \brief [11:11] PFLASH p Sector 139 Locked for Write Protection - S139L (rh) */
    Ifx_UReg_32Bit S140L:1;           /**< \brief [12:12] PFLASH p Sector 140 Locked for Write Protection - S140L (rh) */
    Ifx_UReg_32Bit S141L:1;           /**< \brief [13:13] PFLASH p Sector 141 Locked for Write Protection - S141L (rh) */
    Ifx_UReg_32Bit S142L:1;           /**< \brief [14:14] PFLASH p Sector 142 Locked for Write Protection - S142L (rh) */
    Ifx_UReg_32Bit S143L:1;           /**< \brief [15:15] PFLASH p Sector 143 Locked for Write Protection - S143L (rh) */
    Ifx_UReg_32Bit S144L:1;           /**< \brief [16:16] PFLASH p Sector 144 Locked for Write Protection - S144L (rh) */
    Ifx_UReg_32Bit S145L:1;           /**< \brief [17:17] PFLASH p Sector 145 Locked for Write Protection - S145L (rh) */
    Ifx_UReg_32Bit S146L:1;           /**< \brief [18:18] PFLASH p Sector 146 Locked for Write Protection - S146L (rh) */
    Ifx_UReg_32Bit S147L:1;           /**< \brief [19:19] PFLASH p Sector 147 Locked for Write Protection - S147L (rh) */
    Ifx_UReg_32Bit S148L:1;           /**< \brief [20:20] PFLASH p Sector 148 Locked for Write Protection - S148L (rh) */
    Ifx_UReg_32Bit S149L:1;           /**< \brief [21:21] PFLASH p Sector 149 Locked for Write Protection - S149L (rh) */
    Ifx_UReg_32Bit S150L:1;           /**< \brief [22:22] PFLASH p Sector 150 Locked for Write Protection - S150L (rh) */
    Ifx_UReg_32Bit S151L:1;           /**< \brief [23:23] PFLASH p Sector 151 Locked for Write Protection - S151L (rh) */
    Ifx_UReg_32Bit S152L:1;           /**< \brief [24:24] PFLASH p Sector 152 Locked for Write Protection - S152L (rh) */
    Ifx_UReg_32Bit S153L:1;           /**< \brief [25:25] PFLASH p Sector 153 Locked for Write Protection - S153L (rh) */
    Ifx_UReg_32Bit S154L:1;           /**< \brief [26:26] PFLASH p Sector 154 Locked for Write Protection - S154L (rh) */
    Ifx_UReg_32Bit S155L:1;           /**< \brief [27:27] PFLASH p Sector 155 Locked for Write Protection - S155L (rh) */
    Ifx_UReg_32Bit S156L:1;           /**< \brief [28:28] PFLASH p Sector 156 Locked for Write Protection - S156L (rh) */
    Ifx_UReg_32Bit S157L:1;           /**< \brief [29:29] PFLASH p Sector 157 Locked for Write Protection - S157L (rh) */
    Ifx_UReg_32Bit S158L:1;           /**< \brief [30:30] PFLASH p Sector 158 Locked for Write Protection - S158L (rh) */
    Ifx_UReg_32Bit S159L:1;           /**< \brief [31:31] PFLASH p Sector 159 Locked for Write Protection - S159L (rh) */
} Ifx_DMU_HP_PROCON_P4_Bits;

/** \brief PFLASH Bank ${i} Protection Configuration 5 */
typedef struct _Ifx_DMU_HP_PROCON_P5_Bits
{
    Ifx_UReg_32Bit S160L:1;           /**< \brief [0:0] PFLASH p Sector 160 Locked for Write Protection - S160L (rh) */
    Ifx_UReg_32Bit S161L:1;           /**< \brief [1:1] PFLASH p Sector 161 Locked for Write Protection - S161L (rh) */
    Ifx_UReg_32Bit S162L:1;           /**< \brief [2:2] PFLASH p Sector 162 Locked for Write Protection - S162L (rh) */
    Ifx_UReg_32Bit S163L:1;           /**< \brief [3:3] PFLASH p Sector 163 Locked for Write Protection - S163L (rh) */
    Ifx_UReg_32Bit S164L:1;           /**< \brief [4:4] PFLASH p Sector 164 Locked for Write Protection - S164L (rh) */
    Ifx_UReg_32Bit S165L:1;           /**< \brief [5:5] PFLASH p Sector 165 Locked for Write Protection - S165L (rh) */
    Ifx_UReg_32Bit S166L:1;           /**< \brief [6:6] PFLASH p Sector 166 Locked for Write Protection - S166L (rh) */
    Ifx_UReg_32Bit S167L:1;           /**< \brief [7:7] PFLASH p Sector 167 Locked for Write Protection - S167L (rh) */
    Ifx_UReg_32Bit S168L:1;           /**< \brief [8:8] PFLASH p Sector 168 Locked for Write Protection - S168L (rh) */
    Ifx_UReg_32Bit S169L:1;           /**< \brief [9:9] PFLASH p Sector 169 Locked for Write Protection - S169L (rh) */
    Ifx_UReg_32Bit S170L:1;           /**< \brief [10:10] PFLASH p Sector 170 Locked for Write Protection - S170L (rh) */
    Ifx_UReg_32Bit S171L:1;           /**< \brief [11:11] PFLASH p Sector 171 Locked for Write Protection - S171L (rh) */
    Ifx_UReg_32Bit S172L:1;           /**< \brief [12:12] PFLASH p Sector 172 Locked for Write Protection - S172L (rh) */
    Ifx_UReg_32Bit S173L:1;           /**< \brief [13:13] PFLASH p Sector 173 Locked for Write Protection - S173L (rh) */
    Ifx_UReg_32Bit S174L:1;           /**< \brief [14:14] PFLASH p Sector 174 Locked for Write Protection - S174L (rh) */
    Ifx_UReg_32Bit S175L:1;           /**< \brief [15:15] PFLASH p Sector 175 Locked for Write Protection - S175L (rh) */
    Ifx_UReg_32Bit S176L:1;           /**< \brief [16:16] PFLASH p Sector 176 Locked for Write Protection - S176L (rh) */
    Ifx_UReg_32Bit S177L:1;           /**< \brief [17:17] PFLASH p Sector 177 Locked for Write Protection - S177L (rh) */
    Ifx_UReg_32Bit S178L:1;           /**< \brief [18:18] PFLASH p Sector 178 Locked for Write Protection - S178L (rh) */
    Ifx_UReg_32Bit S179L:1;           /**< \brief [19:19] PFLASH p Sector 179 Locked for Write Protection - S179L (rh) */
    Ifx_UReg_32Bit S180L:1;           /**< \brief [20:20] PFLASH p Sector 180 Locked for Write Protection - S180L (rh) */
    Ifx_UReg_32Bit S181L:1;           /**< \brief [21:21] PFLASH p Sector 181 Locked for Write Protection - S181L (rh) */
    Ifx_UReg_32Bit S182L:1;           /**< \brief [22:22] PFLASH p Sector 182 Locked for Write Protection - S182L (rh) */
    Ifx_UReg_32Bit S183L:1;           /**< \brief [23:23] PFLASH p Sector 183 Locked for Write Protection - S183L (rh) */
    Ifx_UReg_32Bit S184L:1;           /**< \brief [24:24] PFLASH p Sector 184 Locked for Write Protection - S184L (rh) */
    Ifx_UReg_32Bit S185L:1;           /**< \brief [25:25] PFLASH p Sector 185 Locked for Write Protection - S185L (rh) */
    Ifx_UReg_32Bit S186L:1;           /**< \brief [26:26] PFLASH p Sector 186 Locked for Write Protection - S186L (rh) */
    Ifx_UReg_32Bit S187L:1;           /**< \brief [27:27] PFLASH p Sector 187 Locked for Write Protection - S187L (rh) */
    Ifx_UReg_32Bit S188L:1;           /**< \brief [28:28] PFLASH p Sector 188 Locked for Write Protection - S188L (rh) */
    Ifx_UReg_32Bit S189L:1;           /**< \brief [29:29] PFLASH p Sector 189 Locked for Write Protection - S189L (rh) */
    Ifx_UReg_32Bit S190L:1;           /**< \brief [30:30] PFLASH p Sector 190 Locked for Write Protection - S190L (rh) */
    Ifx_UReg_32Bit S191L:1;           /**< \brief [31:31] PFLASH p Sector 191 Locked for Write Protection - S191L (rh) */
} Ifx_DMU_HP_PROCON_P5_Bits;

/** \brief PFLASH Bank ${i} WOP Configuration 0 */
typedef struct _Ifx_DMU_HP_PROCON_WOP0_Bits
{
    Ifx_UReg_32Bit S0WOP:1;           /**< \brief [0:0] PFLASH p Sector 0 Configured for Write-Once Protection - S0WOP (rh) */
    Ifx_UReg_32Bit S1WOP:1;           /**< \brief [1:1] PFLASH p Sector 1 Configured for Write-Once Protection - S1WOP (rh) */
    Ifx_UReg_32Bit S2WOP:1;           /**< \brief [2:2] PFLASH p Sector 2 Configured for Write-Once Protection - S2WOP (rh) */
    Ifx_UReg_32Bit S3WOP:1;           /**< \brief [3:3] PFLASH p Sector 3 Configured for Write-Once Protection - S3WOP (rh) */
    Ifx_UReg_32Bit S4WOP:1;           /**< \brief [4:4] PFLASH p Sector 4 Configured for Write-Once Protection - S4WOP (rh) */
    Ifx_UReg_32Bit S5WOP:1;           /**< \brief [5:5] PFLASH p Sector 5 Configured for Write-Once Protection - S5WOP (rh) */
    Ifx_UReg_32Bit S6WOP:1;           /**< \brief [6:6] PFLASH p Sector 6 Configured for Write-Once Protection - S6WOP (rh) */
    Ifx_UReg_32Bit S7WOP:1;           /**< \brief [7:7] PFLASH p Sector 7 Configured for Write-Once Protection - S7WOP (rh) */
    Ifx_UReg_32Bit S8WOP:1;           /**< \brief [8:8] PFLASH p Sector 8 Configured for Write-Once Protection - S8WOP (rh) */
    Ifx_UReg_32Bit S9WOP:1;           /**< \brief [9:9] PFLASH p Sector 9 Configured for Write-Once Protection - S9WOP (rh) */
    Ifx_UReg_32Bit S10WOP:1;          /**< \brief [10:10] PFLASH p Sector 10 Configured for Write-Once Protection - S10WOP (rh) */
    Ifx_UReg_32Bit S11WOP:1;          /**< \brief [11:11] PFLASH p Sector 11 Configured for Write-Once Protection - S11WOP (rh) */
    Ifx_UReg_32Bit S12WOP:1;          /**< \brief [12:12] PFLASH p Sector 12 Configured for Write-Once Protection - S12WOP (rh) */
    Ifx_UReg_32Bit S13WOP:1;          /**< \brief [13:13] PFLASH p Sector 13 Configured for Write-Once Protection - S13WOP (rh) */
    Ifx_UReg_32Bit S14WOP:1;          /**< \brief [14:14] PFLASH p Sector 14 Configured for Write-Once Protection - S14WOP (rh) */
    Ifx_UReg_32Bit S15WOP:1;          /**< \brief [15:15] PFLASH p Sector 15 Configured for Write-Once Protection - S15WOP (rh) */
    Ifx_UReg_32Bit S16WOP:1;          /**< \brief [16:16] PFLASH p Sector 16 Configured for Write-Once Protection - S16WOP (rh) */
    Ifx_UReg_32Bit S17WOP:1;          /**< \brief [17:17] PFLASH p Sector 17 Configured for Write-Once Protection - S17WOP (rh) */
    Ifx_UReg_32Bit S18WOP:1;          /**< \brief [18:18] PFLASH p Sector 18 Configured for Write-Once Protection - S18WOP (rh) */
    Ifx_UReg_32Bit S19WOP:1;          /**< \brief [19:19] PFLASH p Sector 19 Configured for Write-Once Protection - S19WOP (rh) */
    Ifx_UReg_32Bit S20WOP:1;          /**< \brief [20:20] PFLASH p Sector 20 Configured for Write-Once Protection - S20WOP (rh) */
    Ifx_UReg_32Bit S21WOP:1;          /**< \brief [21:21] PFLASH p Sector 21 Configured for Write-Once Protection - S21WOP (rh) */
    Ifx_UReg_32Bit S22WOP:1;          /**< \brief [22:22] PFLASH p Sector 22 Configured for Write-Once Protection - S22WOP (rh) */
    Ifx_UReg_32Bit S23WOP:1;          /**< \brief [23:23] PFLASH p Sector 23 Configured for Write-Once Protection - S23WOP (rh) */
    Ifx_UReg_32Bit S24WOP:1;          /**< \brief [24:24] PFLASH p Sector 24 Configured for Write-Once Protection - S24WOP (rh) */
    Ifx_UReg_32Bit S25WOP:1;          /**< \brief [25:25] PFLASH p Sector 25 Configured for Write-Once Protection - S25WOP (rh) */
    Ifx_UReg_32Bit S26WOP:1;          /**< \brief [26:26] PFLASH p Sector 26 Configured for Write-Once Protection - S26WOP (rh) */
    Ifx_UReg_32Bit S27WOP:1;          /**< \brief [27:27] PFLASH p Sector 27 Configured for Write-Once Protection - S27WOP (rh) */
    Ifx_UReg_32Bit S28WOP:1;          /**< \brief [28:28] PFLASH p Sector 28 Configured for Write-Once Protection - S28WOP (rh) */
    Ifx_UReg_32Bit S29WOP:1;          /**< \brief [29:29] PFLASH p Sector 29 Configured for Write-Once Protection - S29WOP (rh) */
    Ifx_UReg_32Bit S30WOP:1;          /**< \brief [30:30] PFLASH p Sector 30 Configured for Write-Once Protection - S30WOP (rh) */
    Ifx_UReg_32Bit S31WOP:1;          /**< \brief [31:31] PFLASH p Sector 31 Configured for Write-Once Protection - S31WOP (rh) */
} Ifx_DMU_HP_PROCON_WOP0_Bits;

/** \brief PFLASH Bank ${i} WOP Configuration 1 */
typedef struct _Ifx_DMU_HP_PROCON_WOP1_Bits
{
    Ifx_UReg_32Bit S32WOP:1;          /**< \brief [0:0] PFLASH p Sector 32 Configured for Write-Once Protection - S32WOP (rh) */
    Ifx_UReg_32Bit S33WOP:1;          /**< \brief [1:1] PFLASH p Sector 33 Configured for Write-Once Protection - S33WOP (rh) */
    Ifx_UReg_32Bit S34WOP:1;          /**< \brief [2:2] PFLASH p Sector 34 Configured for Write-Once Protection - S34WOP (rh) */
    Ifx_UReg_32Bit S35WOP:1;          /**< \brief [3:3] PFLASH p Sector 35 Configured for Write-Once Protection - S35WOP (rh) */
    Ifx_UReg_32Bit S36WOP:1;          /**< \brief [4:4] PFLASH p Sector 36 Configured for Write-Once Protection - S36WOP (rh) */
    Ifx_UReg_32Bit S37WOP:1;          /**< \brief [5:5] PFLASH p Sector 37 Configured for Write-Once Protection - S37WOP (rh) */
    Ifx_UReg_32Bit S38WOP:1;          /**< \brief [6:6] PFLASH p Sector 38 Configured for Write-Once Protection - S38WOP (rh) */
    Ifx_UReg_32Bit S39WOP:1;          /**< \brief [7:7] PFLASH p Sector 39 Configured for Write-Once Protection - S39WOP (rh) */
    Ifx_UReg_32Bit S40WOP:1;          /**< \brief [8:8] PFLASH p Sector 40 Configured for Write-Once Protection - S40WOP (rh) */
    Ifx_UReg_32Bit S41WOP:1;          /**< \brief [9:9] PFLASH p Sector 41 Configured for Write-Once Protection - S41WOP (rh) */
    Ifx_UReg_32Bit S42WOP:1;          /**< \brief [10:10] PFLASH p Sector 42 Configured for Write-Once Protection - S42WOP (rh) */
    Ifx_UReg_32Bit S43WOP:1;          /**< \brief [11:11] PFLASH p Sector 43 Configured for Write-Once Protection - S43WOP (rh) */
    Ifx_UReg_32Bit S44WOP:1;          /**< \brief [12:12] PFLASH p Sector 44 Configured for Write-Once Protection - S44WOP (rh) */
    Ifx_UReg_32Bit S45WOP:1;          /**< \brief [13:13] PFLASH p Sector 45 Configured for Write-Once Protection - S45WOP (rh) */
    Ifx_UReg_32Bit S46WOP:1;          /**< \brief [14:14] PFLASH p Sector 46 Configured for Write-Once Protection - S46WOP (rh) */
    Ifx_UReg_32Bit S47WOP:1;          /**< \brief [15:15] PFLASH p Sector 47 Configured for Write-Once Protection - S47WOP (rh) */
    Ifx_UReg_32Bit S48WOP:1;          /**< \brief [16:16] PFLASH p Sector 48 Configured for Write-Once Protection - S48WOP (rh) */
    Ifx_UReg_32Bit S49WOP:1;          /**< \brief [17:17] PFLASH p Sector 49 Configured for Write-Once Protection - S49WOP (rh) */
    Ifx_UReg_32Bit S50WOP:1;          /**< \brief [18:18] PFLASH p Sector 50 Configured for Write-Once Protection - S50WOP (rh) */
    Ifx_UReg_32Bit S51WOP:1;          /**< \brief [19:19] PFLASH p Sector 51 Configured for Write-Once Protection - S51WOP (rh) */
    Ifx_UReg_32Bit S52WOP:1;          /**< \brief [20:20] PFLASH p Sector 52 Configured for Write-Once Protection - S52WOP (rh) */
    Ifx_UReg_32Bit S53WOP:1;          /**< \brief [21:21] PFLASH p Sector 53 Configured for Write-Once Protection - S53WOP (rh) */
    Ifx_UReg_32Bit S54WOP:1;          /**< \brief [22:22] PFLASH p Sector 54 Configured for Write-Once Protection - S54WOP (rh) */
    Ifx_UReg_32Bit S55WOP:1;          /**< \brief [23:23] PFLASH p Sector 55 Configured for Write-Once Protection - S55WOP (rh) */
    Ifx_UReg_32Bit S56WOP:1;          /**< \brief [24:24] PFLASH p Sector 56 Configured for Write-Once Protection - S56WOP (rh) */
    Ifx_UReg_32Bit S57WOP:1;          /**< \brief [25:25] PFLASH p Sector 57 Configured for Write-Once Protection - S57WOP (rh) */
    Ifx_UReg_32Bit S58WOP:1;          /**< \brief [26:26] PFLASH p Sector 58 Configured for Write-Once Protection - S58WOP (rh) */
    Ifx_UReg_32Bit S59WOP:1;          /**< \brief [27:27] PFLASH p Sector 59 Configured for Write-Once Protection - S59WOP (rh) */
    Ifx_UReg_32Bit S60WOP:1;          /**< \brief [28:28] PFLASH p Sector 60 Configured for Write-Once Protection - S60WOP (rh) */
    Ifx_UReg_32Bit S61WOP:1;          /**< \brief [29:29] PFLASH p Sector 61 Configured for Write-Once Protection - S61WOP (rh) */
    Ifx_UReg_32Bit S62WOP:1;          /**< \brief [30:30] PFLASH p Sector 62 Configured for Write-Once Protection - S62WOP (rh) */
    Ifx_UReg_32Bit S63WOP:1;          /**< \brief [31:31] PFLASH p Sector 63 Configured for Write-Once Protection - S63WOP (rh) */
} Ifx_DMU_HP_PROCON_WOP1_Bits;

/** \brief PFLASH Bank ${i} WOP Configuration 2 */
typedef struct _Ifx_DMU_HP_PROCON_WOP2_Bits
{
    Ifx_UReg_32Bit S64WOP:1;          /**< \brief [0:0] PFLASH p Sector 64 Configured for Write-Once Protection - S64WOP (rh) */
    Ifx_UReg_32Bit S65WOP:1;          /**< \brief [1:1] PFLASH p Sector 65 Configured for Write-Once Protection - S65WOP (rh) */
    Ifx_UReg_32Bit S66WOP:1;          /**< \brief [2:2] PFLASH p Sector 66 Configured for Write-Once Protection - S66WOP (rh) */
    Ifx_UReg_32Bit S67WOP:1;          /**< \brief [3:3] PFLASH p Sector 67 Configured for Write-Once Protection - S67WOP (rh) */
    Ifx_UReg_32Bit S68WOP:1;          /**< \brief [4:4] PFLASH p Sector 68 Configured for Write-Once Protection - S68WOP (rh) */
    Ifx_UReg_32Bit S69WOP:1;          /**< \brief [5:5] PFLASH p Sector 69 Configured for Write-Once Protection - S69WOP (rh) */
    Ifx_UReg_32Bit S70WOP:1;          /**< \brief [6:6] PFLASH p Sector 70 Configured for Write-Once Protection - S70WOP (rh) */
    Ifx_UReg_32Bit S71WOP:1;          /**< \brief [7:7] PFLASH p Sector 71 Configured for Write-Once Protection - S71WOP (rh) */
    Ifx_UReg_32Bit S72WOP:1;          /**< \brief [8:8] PFLASH p Sector 72 Configured for Write-Once Protection - S72WOP (rh) */
    Ifx_UReg_32Bit S73WOP:1;          /**< \brief [9:9] PFLASH p Sector 73 Configured for Write-Once Protection - S73WOP (rh) */
    Ifx_UReg_32Bit S74WOP:1;          /**< \brief [10:10] PFLASH p Sector 74 Configured for Write-Once Protection - S74WOP (rh) */
    Ifx_UReg_32Bit S75WOP:1;          /**< \brief [11:11] PFLASH p Sector 75 Configured for Write-Once Protection - S75WOP (rh) */
    Ifx_UReg_32Bit S76WOP:1;          /**< \brief [12:12] PFLASH p Sector 76 Configured for Write-Once Protection - S76WOP (rh) */
    Ifx_UReg_32Bit S77WOP:1;          /**< \brief [13:13] PFLASH p Sector 77 Configured for Write-Once Protection - S77WOP (rh) */
    Ifx_UReg_32Bit S78WOP:1;          /**< \brief [14:14] PFLASH p Sector 78 Configured for Write-Once Protection - S78WOP (rh) */
    Ifx_UReg_32Bit S79WOP:1;          /**< \brief [15:15] PFLASH p Sector 79 Configured for Write-Once Protection - S79WOP (rh) */
    Ifx_UReg_32Bit S80WOP:1;          /**< \brief [16:16] PFLASH p Sector 80 Configured for Write-Once Protection - S80WOP (rh) */
    Ifx_UReg_32Bit S81WOP:1;          /**< \brief [17:17] PFLASH p Sector 81 Configured for Write-Once Protection - S81WOP (rh) */
    Ifx_UReg_32Bit S82WOP:1;          /**< \brief [18:18] PFLASH p Sector 82 Configured for Write-Once Protection - S82WOP (rh) */
    Ifx_UReg_32Bit S83WOP:1;          /**< \brief [19:19] PFLASH p Sector 83 Configured for Write-Once Protection - S83WOP (rh) */
    Ifx_UReg_32Bit S84WOP:1;          /**< \brief [20:20] PFLASH p Sector 84 Configured for Write-Once Protection - S84WOP (rh) */
    Ifx_UReg_32Bit S85WOP:1;          /**< \brief [21:21] PFLASH p Sector 85 Configured for Write-Once Protection - S85WOP (rh) */
    Ifx_UReg_32Bit S86WOP:1;          /**< \brief [22:22] PFLASH p Sector 86 Configured for Write-Once Protection - S86WOP (rh) */
    Ifx_UReg_32Bit S87WOP:1;          /**< \brief [23:23] PFLASH p Sector 87 Configured for Write-Once Protection - S87WOP (rh) */
    Ifx_UReg_32Bit S88WOP:1;          /**< \brief [24:24] PFLASH p Sector 88 Configured for Write-Once Protection - S88WOP (rh) */
    Ifx_UReg_32Bit S89WOP:1;          /**< \brief [25:25] PFLASH p Sector 89 Configured for Write-Once Protection - S89WOP (rh) */
    Ifx_UReg_32Bit S90WOP:1;          /**< \brief [26:26] PFLASH p Sector 90 Configured for Write-Once Protection - S90WOP (rh) */
    Ifx_UReg_32Bit S91WOP:1;          /**< \brief [27:27] PFLASH p Sector 91 Configured for Write-Once Protection - S91WOP (rh) */
    Ifx_UReg_32Bit S92WOP:1;          /**< \brief [28:28] PFLASH p Sector 92 Configured for Write-Once Protection - S92WOP (rh) */
    Ifx_UReg_32Bit S93WOP:1;          /**< \brief [29:29] PFLASH p Sector 93 Configured for Write-Once Protection - S93WOP (rh) */
    Ifx_UReg_32Bit S94WOP:1;          /**< \brief [30:30] PFLASH p Sector 94 Configured for Write-Once Protection - S94WOP (rh) */
    Ifx_UReg_32Bit S95WOP:1;          /**< \brief [31:31] PFLASH p Sector 95 Configured for Write-Once Protection - S95WOP (rh) */
} Ifx_DMU_HP_PROCON_WOP2_Bits;

/** \brief PFLASH Bank ${i} WOP Configuration 3 */
typedef struct _Ifx_DMU_HP_PROCON_WOP3_Bits
{
    Ifx_UReg_32Bit S96WOP:1;          /**< \brief [0:0] PFLASH p Sector 96 Configured for Write-Once Protection - S96WOP (rh) */
    Ifx_UReg_32Bit S97WOP:1;          /**< \brief [1:1] PFLASH p Sector 97 Configured for Write-Once Protection - S97WOP (rh) */
    Ifx_UReg_32Bit S98WOP:1;          /**< \brief [2:2] PFLASH p Sector 98 Configured for Write-Once Protection - S98WOP (rh) */
    Ifx_UReg_32Bit S99WOP:1;          /**< \brief [3:3] PFLASH p Sector 99 Configured for Write-Once Protection - S99WOP (rh) */
    Ifx_UReg_32Bit S100WOP:1;         /**< \brief [4:4] PFLASH p Sector 100 Configured for Write-Once Protection - S100WOP (rh) */
    Ifx_UReg_32Bit S101WOP:1;         /**< \brief [5:5] PFLASH p Sector 101 Configured for Write-Once Protection - S101WOP (rh) */
    Ifx_UReg_32Bit S102WOP:1;         /**< \brief [6:6] PFLASH p Sector 102 Configured for Write-Once Protection - S102WOP (rh) */
    Ifx_UReg_32Bit S103WOP:1;         /**< \brief [7:7] PFLASH p Sector 103 Configured for Write-Once Protection - S103WOP (rh) */
    Ifx_UReg_32Bit S104WOP:1;         /**< \brief [8:8] PFLASH p Sector 104 Configured for Write-Once Protection - S104WOP (rh) */
    Ifx_UReg_32Bit S105WOP:1;         /**< \brief [9:9] PFLASH p Sector 105 Configured for Write-Once Protection - S105WOP (rh) */
    Ifx_UReg_32Bit S106WOP:1;         /**< \brief [10:10] PFLASH p Sector 106 Configured for Write-Once Protection - S106WOP (rh) */
    Ifx_UReg_32Bit S107WOP:1;         /**< \brief [11:11] PFLASH p Sector 107 Configured for Write-Once Protection - S107WOP (rh) */
    Ifx_UReg_32Bit S108WOP:1;         /**< \brief [12:12] PFLASH p Sector 108 Configured for Write-Once Protection - S108WOP (rh) */
    Ifx_UReg_32Bit S109WOP:1;         /**< \brief [13:13] PFLASH p Sector 109 Configured for Write-Once Protection - S109WOP (rh) */
    Ifx_UReg_32Bit S110WOP:1;         /**< \brief [14:14] PFLASH p Sector 110 Configured for Write-Once Protection - S110WOP (rh) */
    Ifx_UReg_32Bit S111WOP:1;         /**< \brief [15:15] PFLASH p Sector 111 Configured for Write-Once Protection - S111WOP (rh) */
    Ifx_UReg_32Bit S112WOP:1;         /**< \brief [16:16] PFLASH p Sector 112 Configured for Write-Once Protection - S112WOP (rh) */
    Ifx_UReg_32Bit S113WOP:1;         /**< \brief [17:17] PFLASH p Sector 113 Configured for Write-Once Protection - S113WOP (rh) */
    Ifx_UReg_32Bit S114WOP:1;         /**< \brief [18:18] PFLASH p Sector 114 Configured for Write-Once Protection - S114WOP (rh) */
    Ifx_UReg_32Bit S115WOP:1;         /**< \brief [19:19] PFLASH p Sector 115 Configured for Write-Once Protection - S115WOP (rh) */
    Ifx_UReg_32Bit S116WOP:1;         /**< \brief [20:20] PFLASH p Sector 116 Configured for Write-Once Protection - S116WOP (rh) */
    Ifx_UReg_32Bit S117WOP:1;         /**< \brief [21:21] PFLASH p Sector 117 Configured for Write-Once Protection - S117WOP (rh) */
    Ifx_UReg_32Bit S118WOP:1;         /**< \brief [22:22] PFLASH p Sector 118 Configured for Write-Once Protection - S118WOP (rh) */
    Ifx_UReg_32Bit S119WOP:1;         /**< \brief [23:23] PFLASH p Sector 119 Configured for Write-Once Protection - S119WOP (rh) */
    Ifx_UReg_32Bit S120WOP:1;         /**< \brief [24:24] PFLASH p Sector 120 Configured for Write-Once Protection - S120WOP (rh) */
    Ifx_UReg_32Bit S121WOP:1;         /**< \brief [25:25] PFLASH p Sector 121 Configured for Write-Once Protection - S121WOP (rh) */
    Ifx_UReg_32Bit S122WOP:1;         /**< \brief [26:26] PFLASH p Sector 122 Configured for Write-Once Protection - S122WOP (rh) */
    Ifx_UReg_32Bit S123WOP:1;         /**< \brief [27:27] PFLASH p Sector 123 Configured for Write-Once Protection - S123WOP (rh) */
    Ifx_UReg_32Bit S124WOP:1;         /**< \brief [28:28] PFLASH p Sector 124 Configured for Write-Once Protection - S124WOP (rh) */
    Ifx_UReg_32Bit S125WOP:1;         /**< \brief [29:29] PFLASH p Sector 125 Configured for Write-Once Protection - S125WOP (rh) */
    Ifx_UReg_32Bit S126WOP:1;         /**< \brief [30:30] PFLASH p Sector 126 Configured for Write-Once Protection - S126WOP (rh) */
    Ifx_UReg_32Bit S127WOP:1;         /**< \brief [31:31] PFLASH p Sector 127 Configured for Write-Once Protection - S127WOP (rh) */
} Ifx_DMU_HP_PROCON_WOP3_Bits;

/** \brief PFLASH Bank ${i} WOP Configuration 4 */
typedef struct _Ifx_DMU_HP_PROCON_WOP4_Bits
{
    Ifx_UReg_32Bit S128WOP:1;         /**< \brief [0:0] PFLASH p Sector 128 Configured for Write-Once Protection - S128WOP (rh) */
    Ifx_UReg_32Bit S129WOP:1;         /**< \brief [1:1] PFLASH p Sector 129 Configured for Write-Once Protection - S129WOP (rh) */
    Ifx_UReg_32Bit S130WOP:1;         /**< \brief [2:2] PFLASH p Sector 130 Configured for Write-Once Protection - S130WOP (rh) */
    Ifx_UReg_32Bit S131WOP:1;         /**< \brief [3:3] PFLASH p Sector 131 Configured for Write-Once Protection - S131WOP (rh) */
    Ifx_UReg_32Bit S132WOP:1;         /**< \brief [4:4] PFLASH p Sector 132 Configured for Write-Once Protection - S132WOP (rh) */
    Ifx_UReg_32Bit S133WOP:1;         /**< \brief [5:5] PFLASH p Sector 133 Configured for Write-Once Protection - S133WOP (rh) */
    Ifx_UReg_32Bit S134WOP:1;         /**< \brief [6:6] PFLASH p Sector 134 Configured for Write-Once Protection - S134WOP (rh) */
    Ifx_UReg_32Bit S135WOP:1;         /**< \brief [7:7] PFLASH p Sector 135 Configured for Write-Once Protection - S135WOP (rh) */
    Ifx_UReg_32Bit S136WOP:1;         /**< \brief [8:8] PFLASH p Sector 136 Configured for Write-Once Protection - S136WOP (rh) */
    Ifx_UReg_32Bit S137WOP:1;         /**< \brief [9:9] PFLASH p Sector 137 Configured for Write-Once Protection - S137WOP (rh) */
    Ifx_UReg_32Bit S138WOP:1;         /**< \brief [10:10] PFLASH p Sector 138 Configured for Write-Once Protection - S138WOP (rh) */
    Ifx_UReg_32Bit S139WOP:1;         /**< \brief [11:11] PFLASH p Sector 139 Configured for Write-Once Protection - S139WOP (rh) */
    Ifx_UReg_32Bit S140WOP:1;         /**< \brief [12:12] PFLASH p Sector 140 Configured for Write-Once Protection - S140WOP (rh) */
    Ifx_UReg_32Bit S141WOP:1;         /**< \brief [13:13] PFLASH p Sector 141 Configured for Write-Once Protection - S141WOP (rh) */
    Ifx_UReg_32Bit S142WOP:1;         /**< \brief [14:14] PFLASH p Sector 142 Configured for Write-Once Protection - S142WOP (rh) */
    Ifx_UReg_32Bit S143WOP:1;         /**< \brief [15:15] PFLASH p Sector 143 Configured for Write-Once Protection - S143WOP (rh) */
    Ifx_UReg_32Bit S144WOP:1;         /**< \brief [16:16] PFLASH p Sector 144 Configured for Write-Once Protection - S144WOP (rh) */
    Ifx_UReg_32Bit S145WOP:1;         /**< \brief [17:17] PFLASH p Sector 145 Configured for Write-Once Protection - S145WOP (rh) */
    Ifx_UReg_32Bit S146WOP:1;         /**< \brief [18:18] PFLASH p Sector 146 Configured for Write-Once Protection - S146WOP (rh) */
    Ifx_UReg_32Bit S147WOP:1;         /**< \brief [19:19] PFLASH p Sector 147 Configured for Write-Once Protection - S147WOP (rh) */
    Ifx_UReg_32Bit S148WOP:1;         /**< \brief [20:20] PFLASH p Sector 148 Configured for Write-Once Protection - S148WOP (rh) */
    Ifx_UReg_32Bit S149WOP:1;         /**< \brief [21:21] PFLASH p Sector 149 Configured for Write-Once Protection - S149WOP (rh) */
    Ifx_UReg_32Bit S150WOP:1;         /**< \brief [22:22] PFLASH p Sector 150 Configured for Write-Once Protection - S150WOP (rh) */
    Ifx_UReg_32Bit S151WOP:1;         /**< \brief [23:23] PFLASH p Sector 151 Configured for Write-Once Protection - S151WOP (rh) */
    Ifx_UReg_32Bit S152WOP:1;         /**< \brief [24:24] PFLASH p Sector 152 Configured for Write-Once Protection - S152WOP (rh) */
    Ifx_UReg_32Bit S153WOP:1;         /**< \brief [25:25] PFLASH p Sector 153 Configured for Write-Once Protection - S153WOP (rh) */
    Ifx_UReg_32Bit S154WOP:1;         /**< \brief [26:26] PFLASH p Sector 154 Configured for Write-Once Protection - S154WOP (rh) */
    Ifx_UReg_32Bit S155WOP:1;         /**< \brief [27:27] PFLASH p Sector 155 Configured for Write-Once Protection - S155WOP (rh) */
    Ifx_UReg_32Bit S156WOP:1;         /**< \brief [28:28] PFLASH p Sector 156 Configured for Write-Once Protection - S156WOP (rh) */
    Ifx_UReg_32Bit S157WOP:1;         /**< \brief [29:29] PFLASH p Sector 157 Configured for Write-Once Protection - S157WOP (rh) */
    Ifx_UReg_32Bit S158WOP:1;         /**< \brief [30:30] PFLASH p Sector 158 Configured for Write-Once Protection - S158WOP (rh) */
    Ifx_UReg_32Bit S159WOP:1;         /**< \brief [31:31] PFLASH p Sector 159 Configured for Write-Once Protection - S159WOP (rh) */
} Ifx_DMU_HP_PROCON_WOP4_Bits;

/** \brief PFLASH Bank ${i} WOP Configuration 5 */
typedef struct _Ifx_DMU_HP_PROCON_WOP5_Bits
{
    Ifx_UReg_32Bit S160WOP:1;         /**< \brief [0:0] PFLASH p Sector 160 Configured for Write-Once Protection - S160WOP (rh) */
    Ifx_UReg_32Bit S161WOP:1;         /**< \brief [1:1] PFLASH p Sector 161 Configured for Write-Once Protection - S161WOP (rh) */
    Ifx_UReg_32Bit S162WOP:1;         /**< \brief [2:2] PFLASH p Sector 162 Configured for Write-Once Protection - S162WOP (rh) */
    Ifx_UReg_32Bit S163WOP:1;         /**< \brief [3:3] PFLASH p Sector 163 Configured for Write-Once Protection - S163WOP (rh) */
    Ifx_UReg_32Bit S164WOP:1;         /**< \brief [4:4] PFLASH p Sector 164 Configured for Write-Once Protection - S164WOP (rh) */
    Ifx_UReg_32Bit S165WOP:1;         /**< \brief [5:5] PFLASH p Sector 165 Configured for Write-Once Protection - S165WOP (rh) */
    Ifx_UReg_32Bit S166WOP:1;         /**< \brief [6:6] PFLASH p Sector 166 Configured for Write-Once Protection - S166WOP (rh) */
    Ifx_UReg_32Bit S167WOP:1;         /**< \brief [7:7] PFLASH p Sector 167 Configured for Write-Once Protection - S167WOP (rh) */
    Ifx_UReg_32Bit S168WOP:1;         /**< \brief [8:8] PFLASH p Sector 168 Configured for Write-Once Protection - S168WOP (rh) */
    Ifx_UReg_32Bit S169WOP:1;         /**< \brief [9:9] PFLASH p Sector 169 Configured for Write-Once Protection - S169WOP (rh) */
    Ifx_UReg_32Bit S170WOP:1;         /**< \brief [10:10] PFLASH p Sector 170 Configured for Write-Once Protection - S170WOP (rh) */
    Ifx_UReg_32Bit S171WOP:1;         /**< \brief [11:11] PFLASH p Sector 171 Configured for Write-Once Protection - S171WOP (rh) */
    Ifx_UReg_32Bit S172WOP:1;         /**< \brief [12:12] PFLASH p Sector 172 Configured for Write-Once Protection - S172WOP (rh) */
    Ifx_UReg_32Bit S173WOP:1;         /**< \brief [13:13] PFLASH p Sector 173 Configured for Write-Once Protection - S173WOP (rh) */
    Ifx_UReg_32Bit S174WOP:1;         /**< \brief [14:14] PFLASH p Sector 174 Configured for Write-Once Protection - S174WOP (rh) */
    Ifx_UReg_32Bit S175WOP:1;         /**< \brief [15:15] PFLASH p Sector 175 Configured for Write-Once Protection - S175WOP (rh) */
    Ifx_UReg_32Bit S176WOP:1;         /**< \brief [16:16] PFLASH p Sector 176 Configured for Write-Once Protection - S176WOP (rh) */
    Ifx_UReg_32Bit S177WOP:1;         /**< \brief [17:17] PFLASH p Sector 177 Configured for Write-Once Protection - S177WOP (rh) */
    Ifx_UReg_32Bit S178WOP:1;         /**< \brief [18:18] PFLASH p Sector 178 Configured for Write-Once Protection - S178WOP (rh) */
    Ifx_UReg_32Bit S179WOP:1;         /**< \brief [19:19] PFLASH p Sector 179 Configured for Write-Once Protection - S179WOP (rh) */
    Ifx_UReg_32Bit S180WOP:1;         /**< \brief [20:20] PFLASH p Sector 180 Configured for Write-Once Protection - S180WOP (rh) */
    Ifx_UReg_32Bit S181WOP:1;         /**< \brief [21:21] PFLASH p Sector 181 Configured for Write-Once Protection - S181WOP (rh) */
    Ifx_UReg_32Bit S182WOP:1;         /**< \brief [22:22] PFLASH p Sector 182 Configured for Write-Once Protection - S182WOP (rh) */
    Ifx_UReg_32Bit S183WOP:1;         /**< \brief [23:23] PFLASH p Sector 183 Configured for Write-Once Protection - S183WOP (rh) */
    Ifx_UReg_32Bit S184WOP:1;         /**< \brief [24:24] PFLASH p Sector 184 Configured for Write-Once Protection - S184WOP (rh) */
    Ifx_UReg_32Bit S185WOP:1;         /**< \brief [25:25] PFLASH p Sector 185 Configured for Write-Once Protection - S185WOP (rh) */
    Ifx_UReg_32Bit S186WOP:1;         /**< \brief [26:26] PFLASH p Sector 186 Configured for Write-Once Protection - S186WOP (rh) */
    Ifx_UReg_32Bit S187WOP:1;         /**< \brief [27:27] PFLASH p Sector 187 Configured for Write-Once Protection - S187WOP (rh) */
    Ifx_UReg_32Bit S188WOP:1;         /**< \brief [28:28] PFLASH p Sector 188 Configured for Write-Once Protection - S188WOP (rh) */
    Ifx_UReg_32Bit S189WOP:1;         /**< \brief [29:29] PFLASH p Sector 189 Configured for Write-Once Protection - S189WOP (rh) */
    Ifx_UReg_32Bit S190WOP:1;         /**< \brief [30:30] PFLASH p Sector 190 Configured for Write-Once Protection - S190WOP (rh) */
    Ifx_UReg_32Bit S191WOP:1;         /**< \brief [31:31] PFLASH p Sector 191 Configured for Write-Once Protection - S191WOP (rh) */
} Ifx_DMU_HP_PROCON_WOP5_Bits;

/** \brief HSM Clear Error Register */
typedef struct _Ifx_DMU_SF_CLRE_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit CSQER:1;           /**< \brief [1:1] Clear Command Sequence Error - CSQER (w) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit CPVER:1;           /**< \brief [3:3] Clear Program Verify Error - CPVER (w) */
    Ifx_UReg_32Bit CEVER:1;           /**< \brief [4:4] Clear Erase Verify Error - CEVER (w) */
    Ifx_UReg_32Bit reserved_5:27;     /**< \brief [31:5] \internal Reserved */
} Ifx_DMU_SF_CLRE_Bits;

/** \brief HSM Flash Configuration Register */
typedef struct _Ifx_DMU_SF_CONTROL_Bits
{
    Ifx_UReg_32Bit LCKHSMUCB:2;       /**< \brief [1:0] Lock Access to UCB_HSMCFG - LCKHSMUCB (rwh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit CPROG:1;           /**< \brief [16:16] Clear Programming State - CPROG (w) */
    Ifx_UReg_32Bit CERASE:1;          /**< \brief [17:17] Clear Erase State - CERASE (w) */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_DMU_SF_CONTROL_Bits;

/** \brief HSM DF1 ECC Control Register */
typedef struct _Ifx_DMU_SF_ECCC_Bits
{
    Ifx_UReg_32Bit CLR:2;             /**< \brief [1:0] Clear ECC status bits - CLR (w) */
    Ifx_UReg_32Bit reserved_2:26;     /**< \brief [27:2] \internal Reserved */
    Ifx_UReg_32Bit ECCCORDIS:2;       /**< \brief [29:28] HSM Command Interface ECC Correction Disable - ECCCORDIS (rw) */
    Ifx_UReg_32Bit TRAPDIS:2;         /**< \brief [31:30] HSM Command Interface Uncorrectable ECC Bit Error Trap Disable - TRAPDIS (rw) */
} Ifx_DMU_SF_ECCC_Bits;

/** \brief HSM DF1 ECC Read Register */
typedef struct _Ifx_DMU_SF_ECCR_Bits
{
    Ifx_UReg_32Bit RCODE:22;          /**< \brief [21:0] Error Correction Read Code - RCODE (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_DMU_SF_ECCR_Bits;

/** \brief HSM DF1 ECC Status Register */
typedef struct _Ifx_DMU_SF_ECCS_Bits
{
    Ifx_UReg_32Bit ERR1:1;            /**< \brief [0:0] Read Access Single Bit ECC Error - ERR1 (rh) */
    Ifx_UReg_32Bit ERR2:1;            /**< \brief [1:1] Read Access Double Bit ECC Error - ERR2 (rh) */
    Ifx_UReg_32Bit ERR3:1;            /**< \brief [2:2] Read Access Triple Bit ECC Error - ERR3 (rh) */
    Ifx_UReg_32Bit ERRM:1;            /**< \brief [3:3] Read Access Multi-bit ECC Error - ERRM (rh) */
    Ifx_UReg_32Bit reserved_4:3;      /**< \brief [6:4] \internal Reserved */
    Ifx_UReg_32Bit ERRANY:1;          /**< \brief [7:7] Any Read Access ECC Error - ERRANY (rh) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit BLANKA:1;          /**< \brief [9:9] Read Access Blank Analog - BLANKA (rh) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit AER1:1;            /**< \brief [16:16] Accumulated Single Bit ECC Errors - AER1 (rh) */
    Ifx_UReg_32Bit AER2:1;            /**< \brief [17:17] Accumulated Double Bit ECC Errors - AER2 (rh) */
    Ifx_UReg_32Bit AER3:1;            /**< \brief [18:18] Accumulated Triple Bit ECC Errors - AER3 (rh) */
    Ifx_UReg_32Bit AERM:1;            /**< \brief [19:19] Accumulated Multi-bit ECC Errors - AERM (rh) */
    Ifx_UReg_32Bit reserved_20:3;     /**< \brief [22:20] \internal Reserved */
    Ifx_UReg_32Bit AERANY:1;          /**< \brief [23:23] Accumulated Any Read Access ECC Error - AERANY (rh) */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit ABLANKA:1;         /**< \brief [25:25] Accumulated Blank Analog - ABLANKA (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_DMU_SF_ECCS_Bits;

/** \brief HSM DF1 ECC Write Register */
typedef struct _Ifx_DMU_SF_ECCW_Bits
{
    Ifx_UReg_32Bit WCODE:22;          /**< \brief [21:0] Error Correction Write Code - WCODE (rw) */
    Ifx_UReg_32Bit reserved_22:8;     /**< \brief [29:22] \internal Reserved */
    Ifx_UReg_32Bit ECCENCDIS:2;       /**< \brief [31:30] ECC Encoding Disable - ECCENCDIS (rw) */
} Ifx_DMU_SF_ECCW_Bits;

/** \brief HSM Enable Error Interrupt Control Register */
typedef struct _Ifx_DMU_SF_EER_Bits
{
    Ifx_UReg_32Bit OPERM:1;           /**< \brief [0:0] Operation Error Interrupt Mask - OPERM (rw) */
    Ifx_UReg_32Bit SQERM:1;           /**< \brief [1:1] Command Sequence Error Interrupt Mask - SQERM (rw) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit PVERM:1;           /**< \brief [3:3] Program Verify Error Interrupt Mask - PVERM (rw) */
    Ifx_UReg_32Bit EVERM:1;           /**< \brief [4:4] Erase Verify Error Interrupt Mask - EVERM (rw) */
    Ifx_UReg_32Bit reserved_5:26;     /**< \brief [30:5] \internal Reserved */
    Ifx_UReg_32Bit EOBM:1;            /**< \brief [31:31] End of Busy Interrupt Mask - EOBM (rw) */
} Ifx_DMU_SF_EER_Bits;

/** \brief HSM Error Status Register */
typedef struct _Ifx_DMU_SF_ERRSR_Bits
{
    Ifx_UReg_32Bit OPER:1;            /**< \brief [0:0] Flash Operation Error - OPER (rh) */
    Ifx_UReg_32Bit SQER:1;            /**< \brief [1:1] Command Sequence Error - SQER (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit PVER:1;            /**< \brief [3:3] Program Verify Error - PVER (rh) */
    Ifx_UReg_32Bit EVER:1;            /**< \brief [4:4] Erase Verify Error - EVER (rh) */
    Ifx_UReg_32Bit reserved_5:27;     /**< \brief [31:5] \internal Reserved */
} Ifx_DMU_SF_ERRSR_Bits;

/** \brief HSM DF1 Margin Control Register */
typedef struct _Ifx_DMU_SF_MARGIN_Bits
{
    Ifx_UReg_32Bit SELD1:2;           /**< \brief [1:0] DF1 Margin Read Selection - SELD1 (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit HMARGIN:1;         /**< \brief [8:8] Hard Margin Selection - HMARGIN (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_DMU_SF_MARGIN_Bits;

/** \brief HSM Flash Operation Register */
typedef struct _Ifx_DMU_SF_OPERATION_Bits
{
    Ifx_UReg_32Bit PROG:1;            /**< \brief [0:0] Programming State - PROG (rh) */
    Ifx_UReg_32Bit ERASE:1;           /**< \brief [1:1] Erase State - ERASE (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_DMU_SF_OPERATION_Bits;

/** \brief HSM DF1 User Mode Control */
typedef struct _Ifx_DMU_SF_PROCONUSR_Bits
{
    Ifx_UReg_32Bit MODE:2;            /**< \brief [1:0] DF1 User Mode Control - MODE (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_DMU_SF_PROCONUSR_Bits;

/** \brief HSM Flash Status Register */
typedef struct _Ifx_DMU_SF_STATUS_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit D1BUSY:1;          /**< \brief [1:1] Data Flash Bank 1 Busy - D1BUSY (rh) */
    Ifx_UReg_32Bit reserved_2:18;     /**< \brief [19:2] \internal Reserved */
    Ifx_UReg_32Bit DFPAGE:1;          /**< \brief [20:20] Data Flash in Page Mode - DFPAGE (rh) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_DMU_SF_STATUS_Bits;

/** \brief HSM Suspend Control Register */
typedef struct _Ifx_DMU_SF_SUSPEND_Bits
{
    Ifx_UReg_32Bit REQ:1;             /**< \brief [0:0] Suspend Request - REQ (rwh) */
    Ifx_UReg_32Bit CLR:1;             /**< \brief [1:1] Suspend Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit SPND:1;            /**< \brief [16:16] Flash Operation Suspended - SPND (rh) */
    Ifx_UReg_32Bit ERR:1;             /**< \brief [17:17] Suspend Error - ERR (rh) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_DMU_SF_SUSPEND_Bits;

/** \brief HSM Interface Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSM_Bits
{
    Ifx_UReg_32Bit HSMDBGDIS:1;       /**< \brief [0:0] HSM Debug Disable - HSMDBGDIS (rh) */
    Ifx_UReg_32Bit DBGIFLCK:1;        /**< \brief [1:1] Debug Interface Locked - DBGIFLCK (rh) */
    Ifx_UReg_32Bit TSTIFLCK:1;        /**< \brief [2:2] Test Interface Locked - TSTIFLCK (rh) */
    Ifx_UReg_32Bit HSMTSTDIS:1;       /**< \brief [3:3] HSM Test Disable - HSMTSTDIS (rh) */
    Ifx_UReg_32Bit HSMTRDIS:2;        /**< \brief [5:4] HSM Trace Disable - HSMTRDIS (rh) */
    Ifx_UReg_32Bit HSMTRTYPE:1;       /**< \brief [6:6] HSM Type of Trace - HSMTRTYPE (rh) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_DMU_SP_PROCONHSM_Bits;

/** \brief HSM Code Boot Sector */
typedef struct _Ifx_DMU_SP_PROCONHSMCBS_Bits
{
    Ifx_UReg_32Bit BOOTSEL0:6;        /**< \brief [5:0] Boot Sector Selection - BOOTSEL0 (rh) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit BOOTSEL1:6;        /**< \brief [13:8] Boot Sector Selection - BOOTSEL1 (rh) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit BOOTSEL2:6;        /**< \brief [21:16] Boot Sector Selection - BOOTSEL2 (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit BOOTSEL3:6;        /**< \brief [29:24] Boot Sector Selection - BOOTSEL3 (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_DMU_SP_PROCONHSMCBS_Bits;

/** \brief HSM Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCFG_Bits
{
    Ifx_UReg_32Bit HSMBOOTEN:1;       /**< \brief [0:0] HSM Boot Enable - HSMBOOTEN (rh) */
    Ifx_UReg_32Bit SSWWAIT:1;         /**< \brief [1:1] SSW Wait - SSWWAIT (rh) */
    Ifx_UReg_32Bit HSMDX:1;           /**< \brief [2:2] HSM Data Sectors Exclusive - HSMDX (rh) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit HSMRAMKEEP:2;      /**< \brief [5:4] HSM RAM Clear - HSMRAMKEEP (rh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit HSMENPINS:2;       /**< \brief [8:7] Enable HSM Forcing of Pins HSM1/2 - HSMENPINS (rh) */
    Ifx_UReg_32Bit HSMENRES:2;        /**< \brief [10:9] Enable HSM Triggering Resets - HSMENRES (rh) */
    Ifx_UReg_32Bit DESTDBG:2;         /**< \brief [12:11] Destructive Debug Entry - DESTDBG (rh) */
    Ifx_UReg_32Bit BLKFLAN:1;         /**< \brief [13:13] Block Flash Analysis - BLKFLAN (rh) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_DMU_SP_PROCONHSMCFG_Bits;

/** \brief HSM Code OTP Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCOTP0_Bits
{
    Ifx_UReg_32Bit HSM0ROM:1;         /**< \brief [0:0] PFLASH Sector 0 HSM Code Locked Forever - HSM0ROM (rh) */
    Ifx_UReg_32Bit HSM1ROM:1;         /**< \brief [1:1] PFLASH Sector 1 HSM Code Locked Forever - HSM1ROM (rh) */
    Ifx_UReg_32Bit HSM2ROM:1;         /**< \brief [2:2] PFLASH Sector 2 HSM Code Locked Forever - HSM2ROM (rh) */
    Ifx_UReg_32Bit HSM3ROM:1;         /**< \brief [3:3] PFLASH Sector 3 HSM Code Locked Forever - HSM3ROM (rh) */
    Ifx_UReg_32Bit HSM4ROM:1;         /**< \brief [4:4] PFLASH Sector 4 HSM Code Locked Forever - HSM4ROM (rh) */
    Ifx_UReg_32Bit HSM5ROM:1;         /**< \brief [5:5] PFLASH Sector 5 HSM Code Locked Forever - HSM5ROM (rh) */
    Ifx_UReg_32Bit HSM6ROM:1;         /**< \brief [6:6] PFLASH Sector 6 HSM Code Locked Forever - HSM6ROM (rh) */
    Ifx_UReg_32Bit HSM7ROM:1;         /**< \brief [7:7] PFLASH Sector 7 HSM Code Locked Forever - HSM7ROM (rh) */
    Ifx_UReg_32Bit HSM8ROM:1;         /**< \brief [8:8] PFLASH Sector 8 HSM Code Locked Forever - HSM8ROM (rh) */
    Ifx_UReg_32Bit HSM9ROM:1;         /**< \brief [9:9] PFLASH Sector 9 HSM Code Locked Forever - HSM9ROM (rh) */
    Ifx_UReg_32Bit HSM10ROM:1;        /**< \brief [10:10] PFLASH Sector 10 HSM Code Locked Forever - HSM10ROM (rh) */
    Ifx_UReg_32Bit HSM11ROM:1;        /**< \brief [11:11] PFLASH Sector 11 HSM Code Locked Forever - HSM11ROM (rh) */
    Ifx_UReg_32Bit HSM12ROM:1;        /**< \brief [12:12] PFLASH Sector 12 HSM Code Locked Forever - HSM12ROM (rh) */
    Ifx_UReg_32Bit HSM13ROM:1;        /**< \brief [13:13] PFLASH Sector 13 HSM Code Locked Forever - HSM13ROM (rh) */
    Ifx_UReg_32Bit HSM14ROM:1;        /**< \brief [14:14] PFLASH Sector 14 HSM Code Locked Forever - HSM14ROM (rh) */
    Ifx_UReg_32Bit HSM15ROM:1;        /**< \brief [15:15] PFLASH Sector 15 HSM Code Locked Forever - HSM15ROM (rh) */
    Ifx_UReg_32Bit HSM16ROM:1;        /**< \brief [16:16] PFLASH Sector 16 HSM Code Locked Forever - HSM16ROM (rh) */
    Ifx_UReg_32Bit HSM17ROM:1;        /**< \brief [17:17] PFLASH Sector 17 HSM Code Locked Forever - HSM17ROM (rh) */
    Ifx_UReg_32Bit HSM18ROM:1;        /**< \brief [18:18] PFLASH Sector 18 HSM Code Locked Forever - HSM18ROM (rh) */
    Ifx_UReg_32Bit HSM19ROM:1;        /**< \brief [19:19] PFLASH Sector 19 HSM Code Locked Forever - HSM19ROM (rh) */
    Ifx_UReg_32Bit HSM20ROM:1;        /**< \brief [20:20] PFLASH Sector 20 HSM Code Locked Forever - HSM20ROM (rh) */
    Ifx_UReg_32Bit HSM21ROM:1;        /**< \brief [21:21] PFLASH Sector 21 HSM Code Locked Forever - HSM21ROM (rh) */
    Ifx_UReg_32Bit HSM22ROM:1;        /**< \brief [22:22] PFLASH Sector 22 HSM Code Locked Forever - HSM22ROM (rh) */
    Ifx_UReg_32Bit HSM23ROM:1;        /**< \brief [23:23] PFLASH Sector 23 HSM Code Locked Forever - HSM23ROM (rh) */
    Ifx_UReg_32Bit HSM24ROM:1;        /**< \brief [24:24] PFLASH Sector 24 HSM Code Locked Forever - HSM24ROM (rh) */
    Ifx_UReg_32Bit HSM25ROM:1;        /**< \brief [25:25] PFLASH Sector 25 HSM Code Locked Forever - HSM25ROM (rh) */
    Ifx_UReg_32Bit HSM26ROM:1;        /**< \brief [26:26] PFLASH Sector 26 HSM Code Locked Forever - HSM26ROM (rh) */
    Ifx_UReg_32Bit HSM27ROM:1;        /**< \brief [27:27] PFLASH Sector 27 HSM Code Locked Forever - HSM27ROM (rh) */
    Ifx_UReg_32Bit HSM28ROM:1;        /**< \brief [28:28] PFLASH Sector 28 HSM Code Locked Forever - HSM28ROM (rh) */
    Ifx_UReg_32Bit HSM29ROM:1;        /**< \brief [29:29] PFLASH Sector 29 HSM Code Locked Forever - HSM29ROM (rh) */
    Ifx_UReg_32Bit HSM30ROM:1;        /**< \brief [30:30] PFLASH Sector 30 HSM Code Locked Forever - HSM30ROM (rh) */
    Ifx_UReg_32Bit HSM31ROM:1;        /**< \brief [31:31] PFLASH Sector 31 HSM Code Locked Forever - HSM31ROM (rh) */
} Ifx_DMU_SP_PROCONHSMCOTP0_Bits;

/** \brief HSM Code OTP Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCOTP1_Bits
{
    Ifx_UReg_32Bit HSM32ROM:1;        /**< \brief [0:0] PFLASH Sector 32 HSM Code Locked Forever - HSM32ROM (rh) */
    Ifx_UReg_32Bit HSM33ROM:1;        /**< \brief [1:1] PFLASH Sector 33 HSM Code Locked Forever - HSM33ROM (rh) */
    Ifx_UReg_32Bit HSM34ROM:1;        /**< \brief [2:2] PFLASH Sector 34 HSM Code Locked Forever - HSM34ROM (rh) */
    Ifx_UReg_32Bit HSM35ROM:1;        /**< \brief [3:3] PFLASH Sector 35 HSM Code Locked Forever - HSM35ROM (rh) */
    Ifx_UReg_32Bit HSM36ROM:1;        /**< \brief [4:4] PFLASH Sector 36 HSM Code Locked Forever - HSM36ROM (rh) */
    Ifx_UReg_32Bit HSM37ROM:1;        /**< \brief [5:5] PFLASH Sector 37 HSM Code Locked Forever - HSM37ROM (rh) */
    Ifx_UReg_32Bit HSM38ROM:1;        /**< \brief [6:6] PFLASH Sector 38 HSM Code Locked Forever - HSM38ROM (rh) */
    Ifx_UReg_32Bit HSM39ROM:1;        /**< \brief [7:7] PFLASH Sector 39 HSM Code Locked Forever - HSM39ROM (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_DMU_SP_PROCONHSMCOTP1_Bits;

/** \brief HSM Code Exclusive Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCX0_Bits
{
    Ifx_UReg_32Bit HSM0X:1;           /**< \brief [0:0] PFLASH Sector 0 HSM Code Exclusive - HSM0X (rh) */
    Ifx_UReg_32Bit HSM1X:1;           /**< \brief [1:1] PFLASH Sector 1 HSM Code Exclusive - HSM1X (rh) */
    Ifx_UReg_32Bit HSM2X:1;           /**< \brief [2:2] PFLASH Sector 2 HSM Code Exclusive - HSM2X (rh) */
    Ifx_UReg_32Bit HSM3X:1;           /**< \brief [3:3] PFLASH Sector 3 HSM Code Exclusive - HSM3X (rh) */
    Ifx_UReg_32Bit HSM4X:1;           /**< \brief [4:4] PFLASH Sector 4 HSM Code Exclusive - HSM4X (rh) */
    Ifx_UReg_32Bit HSM5X:1;           /**< \brief [5:5] PFLASH Sector 5 HSM Code Exclusive - HSM5X (rh) */
    Ifx_UReg_32Bit HSM6X:1;           /**< \brief [6:6] PFLASH Sector 6 HSM Code Exclusive - HSM6X (rh) */
    Ifx_UReg_32Bit HSM7X:1;           /**< \brief [7:7] PFLASH Sector 7 HSM Code Exclusive - HSM7X (rh) */
    Ifx_UReg_32Bit HSM8X:1;           /**< \brief [8:8] PFLASH Sector 8 HSM Code Exclusive - HSM8X (rh) */
    Ifx_UReg_32Bit HSM9X:1;           /**< \brief [9:9] PFLASH Sector 9 HSM Code Exclusive - HSM9X (rh) */
    Ifx_UReg_32Bit HSM10X:1;          /**< \brief [10:10] PFLASH Sector 10 HSM Code Exclusive - HSM10X (rh) */
    Ifx_UReg_32Bit HSM11X:1;          /**< \brief [11:11] PFLASH Sector 11 HSM Code Exclusive - HSM11X (rh) */
    Ifx_UReg_32Bit HSM12X:1;          /**< \brief [12:12] PFLASH Sector 12 HSM Code Exclusive - HSM12X (rh) */
    Ifx_UReg_32Bit HSM13X:1;          /**< \brief [13:13] PFLASH Sector 13 HSM Code Exclusive - HSM13X (rh) */
    Ifx_UReg_32Bit HSM14X:1;          /**< \brief [14:14] PFLASH Sector 14 HSM Code Exclusive - HSM14X (rh) */
    Ifx_UReg_32Bit HSM15X:1;          /**< \brief [15:15] PFLASH Sector 15 HSM Code Exclusive - HSM15X (rh) */
    Ifx_UReg_32Bit HSM16X:1;          /**< \brief [16:16] PFLASH Sector 16 HSM Code Exclusive - HSM16X (rh) */
    Ifx_UReg_32Bit HSM17X:1;          /**< \brief [17:17] PFLASH Sector 17 HSM Code Exclusive - HSM17X (rh) */
    Ifx_UReg_32Bit HSM18X:1;          /**< \brief [18:18] PFLASH Sector 18 HSM Code Exclusive - HSM18X (rh) */
    Ifx_UReg_32Bit HSM19X:1;          /**< \brief [19:19] PFLASH Sector 19 HSM Code Exclusive - HSM19X (rh) */
    Ifx_UReg_32Bit HSM20X:1;          /**< \brief [20:20] PFLASH Sector 20 HSM Code Exclusive - HSM20X (rh) */
    Ifx_UReg_32Bit HSM21X:1;          /**< \brief [21:21] PFLASH Sector 21 HSM Code Exclusive - HSM21X (rh) */
    Ifx_UReg_32Bit HSM22X:1;          /**< \brief [22:22] PFLASH Sector 22 HSM Code Exclusive - HSM22X (rh) */
    Ifx_UReg_32Bit HSM23X:1;          /**< \brief [23:23] PFLASH Sector 23 HSM Code Exclusive - HSM23X (rh) */
    Ifx_UReg_32Bit HSM24X:1;          /**< \brief [24:24] PFLASH Sector 24 HSM Code Exclusive - HSM24X (rh) */
    Ifx_UReg_32Bit HSM25X:1;          /**< \brief [25:25] PFLASH Sector 25 HSM Code Exclusive - HSM25X (rh) */
    Ifx_UReg_32Bit HSM26X:1;          /**< \brief [26:26] PFLASH Sector 26 HSM Code Exclusive - HSM26X (rh) */
    Ifx_UReg_32Bit HSM27X:1;          /**< \brief [27:27] PFLASH Sector 27 HSM Code Exclusive - HSM27X (rh) */
    Ifx_UReg_32Bit HSM28X:1;          /**< \brief [28:28] PFLASH Sector 28 HSM Code Exclusive - HSM28X (rh) */
    Ifx_UReg_32Bit HSM29X:1;          /**< \brief [29:29] PFLASH Sector 29 HSM Code Exclusive - HSM29X (rh) */
    Ifx_UReg_32Bit HSM30X:1;          /**< \brief [30:30] PFLASH Sector 30 HSM Code Exclusive - HSM30X (rh) */
    Ifx_UReg_32Bit HSM31X:1;          /**< \brief [31:31] PFLASH Sector 31 HSM Code Exclusive - HSM31X (rh) */
} Ifx_DMU_SP_PROCONHSMCX0_Bits;

/** \brief HSM Code Exclusive Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCX1_Bits
{
    Ifx_UReg_32Bit HSM32X:1;          /**< \brief [0:0] PFLASH Sector 32 HSM Code Exclusive - HSM32X (rh) */
    Ifx_UReg_32Bit HSM33X:1;          /**< \brief [1:1] PFLASH Sector 33 HSM Code Exclusive - HSM33X (rh) */
    Ifx_UReg_32Bit HSM34X:1;          /**< \brief [2:2] PFLASH Sector 34 HSM Code Exclusive - HSM34X (rh) */
    Ifx_UReg_32Bit HSM35X:1;          /**< \brief [3:3] PFLASH Sector 35 HSM Code Exclusive - HSM35X (rh) */
    Ifx_UReg_32Bit HSM36X:1;          /**< \brief [4:4] PFLASH Sector 36 HSM Code Exclusive - HSM36X (rh) */
    Ifx_UReg_32Bit HSM37X:1;          /**< \brief [5:5] PFLASH Sector 37 HSM Code Exclusive - HSM37X (rh) */
    Ifx_UReg_32Bit HSM38X:1;          /**< \brief [6:6] PFLASH Sector 38 HSM Code Exclusive - HSM38X (rh) */
    Ifx_UReg_32Bit HSM39X:1;          /**< \brief [7:7] PFLASH Sector 39 HSM Code Exclusive - HSM39X (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_DMU_SP_PROCONHSMCX1_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_dmu_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ACCEN0_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_HF_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ACCEN1_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_HF_ACCEN1;

/** \brief Cranking Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_CCONTROL_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_CCONTROL;

/** \brief Clear Error Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_CLRE_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_HF_CLRE;

/** \brief Flash Confirm Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_CONFIRM0_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_CONFIRM0;

/** \brief Flash Confirm Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_CONFIRM1_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_CONFIRM1;

/** \brief Flash Confirm Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_CONFIRM2_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_CONFIRM2;

/** \brief Flash Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_CONTROL_Bits B;        /**< \brief Bitfield access */
} Ifx_DMU_HF_CONTROL;

/** \brief DFLASH Wait Cycle Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_DWAIT_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HF_DWAIT;

/** \brief DF0 ECC Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ECCC_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCC;

/** \brief DF0 ECC Read Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ECCR_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCR;

/** \brief DF0 ECC Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ECCS_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCS;

/** \brief DF0 ECC Write Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ECCW_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCW;

/** \brief Enable Error Interrupt Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_EER_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HF_EER;

/** \brief Error Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ERRSR_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HF_ERRSR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_ID_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_ID;

/** \brief Margin Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_MARGIN_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_HF_MARGIN;

/** \brief Flash Operation Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_OPERATION_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HF_OPERATION;

/** \brief Power Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PCONTROL_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_PCONTROL;

/** \brief Debug Interface Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PROCONDBG_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONDBG;

/** \brief DFLASH Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PROCONDF_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONDF;

/** \brief PFLASH Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PROCONPF_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONPF;

/** \brief RAM Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PROCONRAM_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONRAM;

/** \brief Tuning Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PROCONTP_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONTP;

/** \brief DF0 User Mode Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PROCONUSR_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONUSR;

/** \brief Flash Protection Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PROTECT_Bits B;        /**< \brief Bitfield access */
} Ifx_DMU_HF_PROTECT;

/** \brief Power Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PSTATUS_Bits B;        /**< \brief Bitfield access */
} Ifx_DMU_HF_PSTATUS;

/** \brief PFLASH Wait Cycle Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_PWAIT_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HF_PWAIT;

/** \brief Flash Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_STATUS_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_HF_STATUS;

/** \brief Suspend Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HF_SUSPEND_Bits B;        /**< \brief Bitfield access */
} Ifx_DMU_HF_SUSPEND;

/** \brief PFLASH Bank ${i} Erase Counter Priority configuration 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_ECPRIO_P0_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_ECPRIO_P0;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_ECPRIO_P1_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_ECPRIO_P1;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_ECPRIO_P2_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_ECPRIO_P2;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_ECPRIO_P3_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_ECPRIO_P3;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_ECPRIO_P4_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_ECPRIO_P4;

/** \brief PFLASH Bank ${i} Erase Counter Priority Configuration 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_ECPRIO_P5_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_ECPRIO_P5;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP0_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP0;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP1_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP1;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP2_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP2;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP3_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP3;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP4_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP4;

/** \brief PFLASH Bank ${i} OTP Protection Configuration 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP5_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP5;

/** \brief PFLASH Bank ${i} Protection Configuration 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P0_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P0;

/** \brief PFLASH Bank ${i} Protection Configuration 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P1_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P1;

/** \brief PFLASH Bank ${i} Protection Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P2_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P2;

/** \brief PFLASH Bank ${i} Protection Configuration 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P3_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P3;

/** \brief PFLASH Bank ${i} Protection Configuration 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P4_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P4;

/** \brief PFLASH Bank ${i} Protection Configuration 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P5_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P5;

/** \brief PFLASH Bank ${i} WOP Configuration 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP0_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP0;

/** \brief PFLASH Bank ${i} WOP Configuration 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP1_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP1;

/** \brief PFLASH Bank ${i} WOP Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP2_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP2;

/** \brief PFLASH Bank ${i} WOP Configuration 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP3_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP3;

/** \brief PFLASH Bank ${i} WOP Configuration 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP4_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP4;

/** \brief PFLASH Bank ${i} WOP Configuration 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP5_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP5;

/** \brief HSM Clear Error Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_CLRE_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_SF_CLRE;

/** \brief HSM Flash Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_CONTROL_Bits B;        /**< \brief Bitfield access */
} Ifx_DMU_SF_CONTROL;

/** \brief HSM DF1 ECC Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_ECCC_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCC;

/** \brief HSM DF1 ECC Read Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_ECCR_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCR;

/** \brief HSM DF1 ECC Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_ECCS_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCS;

/** \brief HSM DF1 ECC Write Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_ECCW_Bits B;           /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCW;

/** \brief HSM Enable Error Interrupt Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_EER_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_SF_EER;

/** \brief HSM Error Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_ERRSR_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_SF_ERRSR;

/** \brief HSM DF1 Margin Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_MARGIN_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_SF_MARGIN;

/** \brief HSM Flash Operation Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_OPERATION_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_SF_OPERATION;

/** \brief HSM DF1 User Mode Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_PROCONUSR_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_SF_PROCONUSR;

/** \brief HSM Flash Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_STATUS_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_SF_STATUS;

/** \brief HSM Suspend Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SF_SUSPEND_Bits B;        /**< \brief Bitfield access */
} Ifx_DMU_SF_SUSPEND;

/** \brief HSM Interface Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSM_Bits B;      /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSM;

/** \brief HSM Code Boot Sector   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCBS_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCBS;

/** \brief HSM Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCFG_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCFG;

/** \brief HSM Code OTP Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCOTP0_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCOTP0;

/** \brief HSM Code OTP Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCOTP1_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCOTP1;

/** \brief HSM Code Exclusive Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCX0_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCX0;

/** \brief HSM Code Exclusive Protection Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCX1_Bits B;    /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCX1;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Dmu_HP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief HP object */
typedef volatile struct _Ifx_DMU_HP
{
       Ifx_DMU_HP_PROCON_P0                PROCON_P0;              /**< \brief 0, PFLASH Bank ${i} Protection Configuration 0*/
       Ifx_DMU_HP_PROCON_P1                PROCON_P1;              /**< \brief 4, PFLASH Bank ${i} Protection Configuration 1*/
       Ifx_DMU_HP_PROCON_P2                PROCON_P2;              /**< \brief 8, PFLASH Bank ${i} Protection Configuration 2*/
       Ifx_DMU_HP_PROCON_P3                PROCON_P3;              /**< \brief C, PFLASH Bank ${i} Protection Configuration 3*/
       Ifx_DMU_HP_PROCON_P4                PROCON_P4;              /**< \brief 10, PFLASH Bank ${i} Protection Configuration 4*/
       Ifx_DMU_HP_PROCON_P5                PROCON_P5;              /**< \brief 14, PFLASH Bank ${i} Protection Configuration 5*/
       Ifx_UReg_8Bit                       reserved_18[40];        /**< \brief 18, \internal Reserved */
       Ifx_DMU_HP_PROCON_OTP0              PROCON_OTP0;            /**< \brief 40, PFLASH Bank ${i} OTP Protection Configuration 0*/
       Ifx_DMU_HP_PROCON_OTP1              PROCON_OTP1;            /**< \brief 44, PFLASH Bank ${i} OTP Protection Configuration 1*/
       Ifx_DMU_HP_PROCON_OTP2              PROCON_OTP2;            /**< \brief 48, PFLASH Bank ${i} OTP Protection Configuration 2*/
       Ifx_DMU_HP_PROCON_OTP3              PROCON_OTP3;            /**< \brief 4C, PFLASH Bank ${i} OTP Protection Configuration 3*/
       Ifx_DMU_HP_PROCON_OTP4              PROCON_OTP4;            /**< \brief 50, PFLASH Bank ${i} OTP Protection Configuration 4*/
       Ifx_DMU_HP_PROCON_OTP5              PROCON_OTP5;            /**< \brief 54, PFLASH Bank ${i} OTP Protection Configuration 5*/
       Ifx_UReg_8Bit                       reserved_58[40];        /**< \brief 58, \internal Reserved */
       Ifx_DMU_HP_PROCON_WOP0              PROCON_WOP0;            /**< \brief 80, PFLASH Bank ${i} WOP Configuration 0*/
       Ifx_DMU_HP_PROCON_WOP1              PROCON_WOP1;            /**< \brief 84, PFLASH Bank ${i} WOP Configuration 1*/
       Ifx_DMU_HP_PROCON_WOP2              PROCON_WOP2;            /**< \brief 88, PFLASH Bank ${i} WOP Configuration 2*/
       Ifx_DMU_HP_PROCON_WOP3              PROCON_WOP3;            /**< \brief 8C, PFLASH Bank ${i} WOP Configuration 3*/
       Ifx_DMU_HP_PROCON_WOP4              PROCON_WOP4;            /**< \brief 90, PFLASH Bank ${i} WOP Configuration 4*/
       Ifx_DMU_HP_PROCON_WOP5              PROCON_WOP5;            /**< \brief 94, PFLASH Bank ${i} WOP Configuration 5*/
       Ifx_UReg_8Bit                       reserved_98[8];         /**< \brief 98, \internal Reserved */
       Ifx_DMU_HP_ECPRIO_P0                ECPRIO_P0;              /**< \brief A0, PFLASH Bank ${i} Erase Counter Priority configuration 0*/
       Ifx_DMU_HP_ECPRIO_P1                ECPRIO_P1;              /**< \brief A4, PFLASH Bank ${i} Erase Counter Priority Configuration 1*/
       Ifx_DMU_HP_ECPRIO_P2                ECPRIO_P2;              /**< \brief A8, PFLASH Bank ${i} Erase Counter Priority Configuration 2*/
       Ifx_DMU_HP_ECPRIO_P3                ECPRIO_P3;              /**< \brief AC, PFLASH Bank ${i} Erase Counter Priority Configuration 3*/
       Ifx_DMU_HP_ECPRIO_P4                ECPRIO_P4;              /**< \brief B0, PFLASH Bank ${i} Erase Counter Priority Configuration 4*/
       Ifx_DMU_HP_ECPRIO_P5                ECPRIO_P5;              /**< \brief B4, PFLASH Bank ${i} Erase Counter Priority Configuration 5*/
       Ifx_UReg_8Bit                       reserved_B8[72];        /**< \brief B8, \internal Reserved */
} Ifx_DMU_HP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Dmu_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief DMU object */
typedef volatile struct _Ifx_DMU
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_DMU_HF_ID                       HF_ID;                  /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_DMU_HF_STATUS                   HF_STATUS;              /**< \brief 10, Flash Status Register*/
       Ifx_DMU_HF_CONTROL                  HF_CONTROL;             /**< \brief 14, Flash Control Register*/
       Ifx_DMU_HF_OPERATION                HF_OPERATION;           /**< \brief 18, Flash Operation Register*/
       Ifx_DMU_HF_PROTECT                  HF_PROTECT;             /**< \brief 1C, Flash Protection Status Register*/
       Ifx_DMU_HF_CONFIRM0                 HF_CONFIRM0;            /**< \brief 20, Flash Confirm Status Register 0*/
       Ifx_DMU_HF_CONFIRM1                 HF_CONFIRM1;            /**< \brief 24, Flash Confirm Status Register 1*/
       Ifx_DMU_HF_CONFIRM2                 HF_CONFIRM2;            /**< \brief 28, Flash Confirm Status Register 2*/
       Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, \internal Reserved */
       Ifx_DMU_HF_EER                      HF_EER;                 /**< \brief 30, Enable Error Interrupt Control Register*/
       Ifx_DMU_HF_ERRSR                    HF_ERRSR;               /**< \brief 34, Error Status Register*/
       Ifx_DMU_HF_CLRE                     HF_CLRE;                /**< \brief 38, Clear Error Register*/
       Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, \internal Reserved */
       Ifx_DMU_HF_ECCR                     HF_ECCR;                /**< \brief 40, DF0 ECC Read Register*/
       Ifx_DMU_HF_ECCS                     HF_ECCS;                /**< \brief 44, DF0 ECC Status Register*/
       Ifx_DMU_HF_ECCC                     HF_ECCC;                /**< \brief 48, DF0 ECC Control Register*/
       Ifx_DMU_HF_ECCW                     HF_ECCW;                /**< \brief 4C, DF0 ECC Write Register*/
       Ifx_DMU_HF_CCONTROL                 HF_CCONTROL;            /**< \brief 50, Cranking Control Register*/
       Ifx_UReg_8Bit                       reserved_54[12];        /**< \brief 54, \internal Reserved */
       Ifx_DMU_HF_PSTATUS                  HF_PSTATUS;             /**< \brief 60, Power Status Register*/
       Ifx_DMU_HF_PCONTROL                 HF_PCONTROL;            /**< \brief 64, Power Control Register*/
       Ifx_DMU_HF_PWAIT                    HF_PWAIT;               /**< \brief 68, PFLASH Wait Cycle Register*/
       Ifx_DMU_HF_DWAIT                    HF_DWAIT;               /**< \brief 6C, DFLASH Wait Cycle Register*/
       Ifx_UReg_8Bit                       reserved_70[4];         /**< \brief 70, \internal Reserved */
       Ifx_DMU_HF_PROCONUSR                HF_PROCONUSR;           /**< \brief 74, DF0 User Mode Control*/
       Ifx_UReg_8Bit                       reserved_78[8];         /**< \brief 78, \internal Reserved */
       Ifx_DMU_HF_PROCONPF                 HF_PROCONPF;            /**< \brief 80, PFLASH Protection Configuration*/
       Ifx_DMU_HF_PROCONTP                 HF_PROCONTP;            /**< \brief 84, Tuning Protection Configuration*/
       Ifx_DMU_HF_PROCONDF                 HF_PROCONDF;            /**< \brief 88, DFLASH Protection Configuration*/
       Ifx_DMU_HF_PROCONRAM                HF_PROCONRAM;           /**< \brief 8C, RAM Configuration*/
       Ifx_DMU_HF_PROCONDBG                HF_PROCONDBG;           /**< \brief 90, Debug Interface Protection Configuration*/
       Ifx_UReg_8Bit                       reserved_94[92];        /**< \brief 94, \internal Reserved */
       Ifx_DMU_HF_SUSPEND                  HF_SUSPEND;             /**< \brief F0, Suspend Control Register*/
       Ifx_DMU_HF_MARGIN                   HF_MARGIN;              /**< \brief F4, Margin Control Register*/
       Ifx_DMU_HF_ACCEN1                   HF_ACCEN1;              /**< \brief F8, Access Enable Register 1*/
       Ifx_DMU_HF_ACCEN0                   HF_ACCEN0;              /**< \brief FC, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_100[65280];    /**< \brief 100, \internal Reserved */
       Ifx_DMU_HP                          HP[2];                  /**< \brief 10000, */
       Ifx_UReg_8Bit                       reserved_10200[65040];    /**< \brief 10200, \internal Reserved */
       Ifx_DMU_SF_STATUS                   SF_STATUS;              /**< \brief 20010, HSM Flash Status Register*/
       Ifx_DMU_SF_CONTROL                  SF_CONTROL;             /**< \brief 20014, HSM Flash Configuration Register*/
       Ifx_DMU_SF_OPERATION                SF_OPERATION;           /**< \brief 20018, HSM Flash Operation Register*/
       Ifx_UReg_8Bit                       reserved_2001C[20];     /**< \brief 2001C, \internal Reserved */
       Ifx_DMU_SF_EER                      SF_EER;                 /**< \brief 20030, HSM Enable Error Interrupt Control Register*/
       Ifx_DMU_SF_ERRSR                    SF_ERRSR;               /**< \brief 20034, HSM Error Status Register*/
       Ifx_DMU_SF_CLRE                     SF_CLRE;                /**< \brief 20038, HSM Clear Error Register*/
       Ifx_UReg_8Bit                       reserved_2003C[4];      /**< \brief 2003C, \internal Reserved */
       Ifx_DMU_SF_ECCR                     SF_ECCR;                /**< \brief 20040, HSM DF1 ECC Read Register*/
       Ifx_DMU_SF_ECCS                     SF_ECCS;                /**< \brief 20044, HSM DF1 ECC Status Register*/
       Ifx_DMU_SF_ECCC                     SF_ECCC;                /**< \brief 20048, HSM DF1 ECC Control Register*/
       Ifx_DMU_SF_ECCW                     SF_ECCW;                /**< \brief 2004C, HSM DF1 ECC Write Register*/
       Ifx_UReg_8Bit                       reserved_20050[36];     /**< \brief 20050, \internal Reserved */
       Ifx_DMU_SF_PROCONUSR                SF_PROCONUSR;           /**< \brief 20074, HSM DF1 User Mode Control*/
       Ifx_UReg_8Bit                       reserved_20078[112];    /**< \brief 20078, \internal Reserved */
       Ifx_DMU_SF_SUSPEND                  SF_SUSPEND;             /**< \brief 200E8, HSM Suspend Control Register*/
       Ifx_DMU_SF_MARGIN                   SF_MARGIN;              /**< \brief 200EC, HSM DF1 Margin Control Register*/
       Ifx_UReg_8Bit                       reserved_200F0[65296];    /**< \brief 200F0, \internal Reserved */
       Ifx_DMU_SP_PROCONHSMCFG             SP_PROCONHSMCFG;        /**< \brief 30000, HSM Protection Configuration*/
       Ifx_DMU_SP_PROCONHSMCBS             SP_PROCONHSMCBS;        /**< \brief 30004, HSM Code Boot Sector*/
       Ifx_DMU_SP_PROCONHSMCX0             SP_PROCONHSMCX0;        /**< \brief 30008, HSM Code Exclusive Protection Configuration*/
       Ifx_DMU_SP_PROCONHSMCX1             SP_PROCONHSMCX1;        /**< \brief 3000C, HSM Code Exclusive Protection Configuration*/
       Ifx_DMU_SP_PROCONHSMCOTP0           SP_PROCONHSMCOTP0;      /**< \brief 30010, HSM Code OTP Protection Configuration*/
       Ifx_DMU_SP_PROCONHSMCOTP1           SP_PROCONHSMCOTP1;      /**< \brief 30014, HSM Code OTP Protection Configuration*/
       Ifx_UReg_8Bit                       reserved_30018[40];     /**< \brief 30018, \internal Reserved */
       Ifx_DMU_SP_PROCONHSM                SP_PROCONHSM;           /**< \brief 30040, HSM Interface Protection Configuration*/
       Ifx_UReg_8Bit                       reserved_30044[65468];    /**< \brief 30044, \internal Reserved */
} Ifx_DMU;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXDMU_REGDEF_H */
