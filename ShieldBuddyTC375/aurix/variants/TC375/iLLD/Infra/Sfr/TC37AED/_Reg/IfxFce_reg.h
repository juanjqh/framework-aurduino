/**
 * \file IfxFce_reg.h
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
 * \defgroup IfxSfr_Fce_Registers_Cfg Fce address
 * \ingroup IfxSfr_Fce_Registers
 * 
 * \defgroup IfxSfr_Fce_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Fce_Registers_Cfg
 *
 * \defgroup IfxSfr_Fce_Registers_Cfg_Fce 2-FCE
 * \ingroup IfxSfr_Fce_Registers_Cfg
 *
 *
 */
#ifndef IFXFCE_REG_H
#define IFXFCE_REG_H 1
/******************************************************************************/
#include "IfxFce_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Fce_Registers_Cfg_BaseAddress
 * \{  */

/** \brief FCE object */
#define MODULE_FCE /*lint --e(923, 9078)*/ ((*(Ifx_FCE*)0xF0000000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Fce_Registers_Cfg_Fce
 * \{  */
/** \brief 0, Clock Control Register */
#define FCE_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_CLC*)0xF0000000u)

/** \brief 8, Module Identification Register */
#define FCE_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_ID*)0xF0000008u)

/** \brief 20, Channels Status Register */
#define FCE_CHSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_CHSTS*)0xF0000020u)

/** \brief EC, Kernel Reset Status Clear Register */
#define FCE_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_KRSTCLR*)0xF00000ECu)

/** \brief F0, Kernel Reset Register 1 */
#define FCE_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_KRST1*)0xF00000F0u)

/** \brief F4, Kernel Reset Register 0 */
#define FCE_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_KRST0*)0xF00000F4u)

/** \brief F8, Access Enable Register 1 */
#define FCE_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_ACCEN1*)0xF00000F8u)

/** \brief FC, Access Enable Register 0 */
#define FCE_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_ACCEN0*)0xF00000FCu)

/** \brief 100, Input Register 0 */
#define FCE_IN0_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF0000100u)
/** Alias (User Manual Name) for FCE_IN0_IR.
* To use register names with standard convension, please use FCE_IN0_IR.
*/
#define FCE_IR0 (FCE_IN0_IR)

/** \brief 104, CRC Result Register 0 */
#define FCE_IN0_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF0000104u)
/** Alias (User Manual Name) for FCE_IN0_RES.
* To use register names with standard convension, please use FCE_IN0_RES.
*/
#define FCE_RES0 (FCE_IN0_RES)

/** \brief 108, CRC Configuration Register 0 */
#define FCE_IN0_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF0000108u)
/** Alias (User Manual Name) for FCE_IN0_CFG.
* To use register names with standard convension, please use FCE_IN0_CFG.
*/
#define FCE_CFG0 (FCE_IN0_CFG)

/** \brief 10C, CRC Status Register 0 */
#define FCE_IN0_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF000010Cu)
/** Alias (User Manual Name) for FCE_IN0_STS.
* To use register names with standard convension, please use FCE_IN0_STS.
*/
#define FCE_STS0 (FCE_IN0_STS)

/** \brief 110, CRC Length Register 0 */
#define FCE_IN0_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF0000110u)
/** Alias (User Manual Name) for FCE_IN0_LENGTH.
* To use register names with standard convension, please use FCE_IN0_LENGTH.
*/
#define FCE_LENGTH0 (FCE_IN0_LENGTH)

/** \brief 114, CRC Check Register 0 */
#define FCE_IN0_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF0000114u)
/** Alias (User Manual Name) for FCE_IN0_CHECK.
* To use register names with standard convension, please use FCE_IN0_CHECK.
*/
#define FCE_CHECK0 (FCE_IN0_CHECK)

/** \brief 118, CRC Regsister 0 */
#define FCE_IN0_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF0000118u)
/** Alias (User Manual Name) for FCE_IN0_CRC.
* To use register names with standard convension, please use FCE_IN0_CRC.
*/
#define FCE_CRC0 (FCE_IN0_CRC)

/** \brief 11C, CRC Test Register 0 */
#define FCE_IN0_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF000011Cu)
/** Alias (User Manual Name) for FCE_IN0_CTR.
* To use register names with standard convension, please use FCE_IN0_CTR.
*/
#define FCE_CTR0 (FCE_IN0_CTR)

/** \brief 120, Input Register 1 */
#define FCE_IN1_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF0000120u)
/** Alias (User Manual Name) for FCE_IN1_IR.
* To use register names with standard convension, please use FCE_IN1_IR.
*/
#define FCE_IR1 (FCE_IN1_IR)

/** \brief 124, CRC Result Register 1 */
#define FCE_IN1_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF0000124u)
/** Alias (User Manual Name) for FCE_IN1_RES.
* To use register names with standard convension, please use FCE_IN1_RES.
*/
#define FCE_RES1 (FCE_IN1_RES)

/** \brief 128, CRC Configuration Register 1 */
#define FCE_IN1_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF0000128u)
/** Alias (User Manual Name) for FCE_IN1_CFG.
* To use register names with standard convension, please use FCE_IN1_CFG.
*/
#define FCE_CFG1 (FCE_IN1_CFG)

/** \brief 12C, CRC Status Register 1 */
#define FCE_IN1_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF000012Cu)
/** Alias (User Manual Name) for FCE_IN1_STS.
* To use register names with standard convension, please use FCE_IN1_STS.
*/
#define FCE_STS1 (FCE_IN1_STS)

/** \brief 130, CRC Length Register 1 */
#define FCE_IN1_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF0000130u)
/** Alias (User Manual Name) for FCE_IN1_LENGTH.
* To use register names with standard convension, please use FCE_IN1_LENGTH.
*/
#define FCE_LENGTH1 (FCE_IN1_LENGTH)

/** \brief 134, CRC Check Register 1 */
#define FCE_IN1_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF0000134u)
/** Alias (User Manual Name) for FCE_IN1_CHECK.
* To use register names with standard convension, please use FCE_IN1_CHECK.
*/
#define FCE_CHECK1 (FCE_IN1_CHECK)

/** \brief 138, CRC Regsister 1 */
#define FCE_IN1_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF0000138u)
/** Alias (User Manual Name) for FCE_IN1_CRC.
* To use register names with standard convension, please use FCE_IN1_CRC.
*/
#define FCE_CRC1 (FCE_IN1_CRC)

/** \brief 13C, CRC Test Register 1 */
#define FCE_IN1_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF000013Cu)
/** Alias (User Manual Name) for FCE_IN1_CTR.
* To use register names with standard convension, please use FCE_IN1_CTR.
*/
#define FCE_CTR1 (FCE_IN1_CTR)

/** \brief 140, Input Register 2 */
#define FCE_IN2_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF0000140u)
/** Alias (User Manual Name) for FCE_IN2_IR.
* To use register names with standard convension, please use FCE_IN2_IR.
*/
#define FCE_IR2 (FCE_IN2_IR)

/** \brief 144, CRC Result Register 2 */
#define FCE_IN2_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF0000144u)
/** Alias (User Manual Name) for FCE_IN2_RES.
* To use register names with standard convension, please use FCE_IN2_RES.
*/
#define FCE_RES2 (FCE_IN2_RES)

/** \brief 148, CRC Configuration Register 2 */
#define FCE_IN2_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF0000148u)
/** Alias (User Manual Name) for FCE_IN2_CFG.
* To use register names with standard convension, please use FCE_IN2_CFG.
*/
#define FCE_CFG2 (FCE_IN2_CFG)

/** \brief 14C, CRC Status Register 2 */
#define FCE_IN2_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF000014Cu)
/** Alias (User Manual Name) for FCE_IN2_STS.
* To use register names with standard convension, please use FCE_IN2_STS.
*/
#define FCE_STS2 (FCE_IN2_STS)

/** \brief 150, CRC Length Register 2 */
#define FCE_IN2_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF0000150u)
/** Alias (User Manual Name) for FCE_IN2_LENGTH.
* To use register names with standard convension, please use FCE_IN2_LENGTH.
*/
#define FCE_LENGTH2 (FCE_IN2_LENGTH)

/** \brief 154, CRC Check Register 2 */
#define FCE_IN2_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF0000154u)
/** Alias (User Manual Name) for FCE_IN2_CHECK.
* To use register names with standard convension, please use FCE_IN2_CHECK.
*/
#define FCE_CHECK2 (FCE_IN2_CHECK)

/** \brief 158, CRC Regsister 2 */
#define FCE_IN2_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF0000158u)
/** Alias (User Manual Name) for FCE_IN2_CRC.
* To use register names with standard convension, please use FCE_IN2_CRC.
*/
#define FCE_CRC2 (FCE_IN2_CRC)

/** \brief 15C, CRC Test Register 2 */
#define FCE_IN2_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF000015Cu)
/** Alias (User Manual Name) for FCE_IN2_CTR.
* To use register names with standard convension, please use FCE_IN2_CTR.
*/
#define FCE_CTR2 (FCE_IN2_CTR)

/** \brief 160, Input Register 3 */
#define FCE_IN3_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF0000160u)
/** Alias (User Manual Name) for FCE_IN3_IR.
* To use register names with standard convension, please use FCE_IN3_IR.
*/
#define FCE_IR3 (FCE_IN3_IR)

/** \brief 164, CRC Result Register 3 */
#define FCE_IN3_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF0000164u)
/** Alias (User Manual Name) for FCE_IN3_RES.
* To use register names with standard convension, please use FCE_IN3_RES.
*/
#define FCE_RES3 (FCE_IN3_RES)

/** \brief 168, CRC Configuration Register 3 */
#define FCE_IN3_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF0000168u)
/** Alias (User Manual Name) for FCE_IN3_CFG.
* To use register names with standard convension, please use FCE_IN3_CFG.
*/
#define FCE_CFG3 (FCE_IN3_CFG)

/** \brief 16C, CRC Status Register 3 */
#define FCE_IN3_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF000016Cu)
/** Alias (User Manual Name) for FCE_IN3_STS.
* To use register names with standard convension, please use FCE_IN3_STS.
*/
#define FCE_STS3 (FCE_IN3_STS)

/** \brief 170, CRC Length Register 3 */
#define FCE_IN3_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF0000170u)
/** Alias (User Manual Name) for FCE_IN3_LENGTH.
* To use register names with standard convension, please use FCE_IN3_LENGTH.
*/
#define FCE_LENGTH3 (FCE_IN3_LENGTH)

/** \brief 174, CRC Check Register 3 */
#define FCE_IN3_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF0000174u)
/** Alias (User Manual Name) for FCE_IN3_CHECK.
* To use register names with standard convension, please use FCE_IN3_CHECK.
*/
#define FCE_CHECK3 (FCE_IN3_CHECK)

/** \brief 178, CRC Regsister 3 */
#define FCE_IN3_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF0000178u)
/** Alias (User Manual Name) for FCE_IN3_CRC.
* To use register names with standard convension, please use FCE_IN3_CRC.
*/
#define FCE_CRC3 (FCE_IN3_CRC)

/** \brief 17C, CRC Test Register 3 */
#define FCE_IN3_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF000017Cu)
/** Alias (User Manual Name) for FCE_IN3_CTR.
* To use register names with standard convension, please use FCE_IN3_CTR.
*/
#define FCE_CTR3 (FCE_IN3_CTR)

/** \brief 180, Input Register 4 */
#define FCE_IN4_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF0000180u)
/** Alias (User Manual Name) for FCE_IN4_IR.
* To use register names with standard convension, please use FCE_IN4_IR.
*/
#define FCE_IR4 (FCE_IN4_IR)

/** \brief 184, CRC Result Register 4 */
#define FCE_IN4_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF0000184u)
/** Alias (User Manual Name) for FCE_IN4_RES.
* To use register names with standard convension, please use FCE_IN4_RES.
*/
#define FCE_RES4 (FCE_IN4_RES)

/** \brief 188, CRC Configuration Register 4 */
#define FCE_IN4_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF0000188u)
/** Alias (User Manual Name) for FCE_IN4_CFG.
* To use register names with standard convension, please use FCE_IN4_CFG.
*/
#define FCE_CFG4 (FCE_IN4_CFG)

/** \brief 18C, CRC Status Register 4 */
#define FCE_IN4_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF000018Cu)
/** Alias (User Manual Name) for FCE_IN4_STS.
* To use register names with standard convension, please use FCE_IN4_STS.
*/
#define FCE_STS4 (FCE_IN4_STS)

/** \brief 190, CRC Length Register 4 */
#define FCE_IN4_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF0000190u)
/** Alias (User Manual Name) for FCE_IN4_LENGTH.
* To use register names with standard convension, please use FCE_IN4_LENGTH.
*/
#define FCE_LENGTH4 (FCE_IN4_LENGTH)

/** \brief 194, CRC Check Register 4 */
#define FCE_IN4_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF0000194u)
/** Alias (User Manual Name) for FCE_IN4_CHECK.
* To use register names with standard convension, please use FCE_IN4_CHECK.
*/
#define FCE_CHECK4 (FCE_IN4_CHECK)

/** \brief 198, CRC Regsister 4 */
#define FCE_IN4_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF0000198u)
/** Alias (User Manual Name) for FCE_IN4_CRC.
* To use register names with standard convension, please use FCE_IN4_CRC.
*/
#define FCE_CRC4 (FCE_IN4_CRC)

/** \brief 19C, CRC Test Register 4 */
#define FCE_IN4_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF000019Cu)
/** Alias (User Manual Name) for FCE_IN4_CTR.
* To use register names with standard convension, please use FCE_IN4_CTR.
*/
#define FCE_CTR4 (FCE_IN4_CTR)

/** \brief 1A0, Input Register 5 */
#define FCE_IN5_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF00001A0u)
/** Alias (User Manual Name) for FCE_IN5_IR.
* To use register names with standard convension, please use FCE_IN5_IR.
*/
#define FCE_IR5 (FCE_IN5_IR)

/** \brief 1A4, CRC Result Register 5 */
#define FCE_IN5_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF00001A4u)
/** Alias (User Manual Name) for FCE_IN5_RES.
* To use register names with standard convension, please use FCE_IN5_RES.
*/
#define FCE_RES5 (FCE_IN5_RES)

/** \brief 1A8, CRC Configuration Register 5 */
#define FCE_IN5_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF00001A8u)
/** Alias (User Manual Name) for FCE_IN5_CFG.
* To use register names with standard convension, please use FCE_IN5_CFG.
*/
#define FCE_CFG5 (FCE_IN5_CFG)

/** \brief 1AC, CRC Status Register 5 */
#define FCE_IN5_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF00001ACu)
/** Alias (User Manual Name) for FCE_IN5_STS.
* To use register names with standard convension, please use FCE_IN5_STS.
*/
#define FCE_STS5 (FCE_IN5_STS)

/** \brief 1B0, CRC Length Register 5 */
#define FCE_IN5_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF00001B0u)
/** Alias (User Manual Name) for FCE_IN5_LENGTH.
* To use register names with standard convension, please use FCE_IN5_LENGTH.
*/
#define FCE_LENGTH5 (FCE_IN5_LENGTH)

/** \brief 1B4, CRC Check Register 5 */
#define FCE_IN5_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF00001B4u)
/** Alias (User Manual Name) for FCE_IN5_CHECK.
* To use register names with standard convension, please use FCE_IN5_CHECK.
*/
#define FCE_CHECK5 (FCE_IN5_CHECK)

/** \brief 1B8, CRC Regsister 5 */
#define FCE_IN5_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF00001B8u)
/** Alias (User Manual Name) for FCE_IN5_CRC.
* To use register names with standard convension, please use FCE_IN5_CRC.
*/
#define FCE_CRC5 (FCE_IN5_CRC)

/** \brief 1BC, CRC Test Register 5 */
#define FCE_IN5_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF00001BCu)
/** Alias (User Manual Name) for FCE_IN5_CTR.
* To use register names with standard convension, please use FCE_IN5_CTR.
*/
#define FCE_CTR5 (FCE_IN5_CTR)

/** \brief 1C0, Input Register 6 */
#define FCE_IN6_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF00001C0u)
/** Alias (User Manual Name) for FCE_IN6_IR.
* To use register names with standard convension, please use FCE_IN6_IR.
*/
#define FCE_IR6 (FCE_IN6_IR)

/** \brief 1C4, CRC Result Register 6 */
#define FCE_IN6_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF00001C4u)
/** Alias (User Manual Name) for FCE_IN6_RES.
* To use register names with standard convension, please use FCE_IN6_RES.
*/
#define FCE_RES6 (FCE_IN6_RES)

/** \brief 1C8, CRC Configuration Register 6 */
#define FCE_IN6_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF00001C8u)
/** Alias (User Manual Name) for FCE_IN6_CFG.
* To use register names with standard convension, please use FCE_IN6_CFG.
*/
#define FCE_CFG6 (FCE_IN6_CFG)

/** \brief 1CC, CRC Status Register 6 */
#define FCE_IN6_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF00001CCu)
/** Alias (User Manual Name) for FCE_IN6_STS.
* To use register names with standard convension, please use FCE_IN6_STS.
*/
#define FCE_STS6 (FCE_IN6_STS)

/** \brief 1D0, CRC Length Register 6 */
#define FCE_IN6_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF00001D0u)
/** Alias (User Manual Name) for FCE_IN6_LENGTH.
* To use register names with standard convension, please use FCE_IN6_LENGTH.
*/
#define FCE_LENGTH6 (FCE_IN6_LENGTH)

/** \brief 1D4, CRC Check Register 6 */
#define FCE_IN6_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF00001D4u)
/** Alias (User Manual Name) for FCE_IN6_CHECK.
* To use register names with standard convension, please use FCE_IN6_CHECK.
*/
#define FCE_CHECK6 (FCE_IN6_CHECK)

/** \brief 1D8, CRC Regsister 6 */
#define FCE_IN6_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF00001D8u)
/** Alias (User Manual Name) for FCE_IN6_CRC.
* To use register names with standard convension, please use FCE_IN6_CRC.
*/
#define FCE_CRC6 (FCE_IN6_CRC)

/** \brief 1DC, CRC Test Register 6 */
#define FCE_IN6_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF00001DCu)
/** Alias (User Manual Name) for FCE_IN6_CTR.
* To use register names with standard convension, please use FCE_IN6_CTR.
*/
#define FCE_CTR6 (FCE_IN6_CTR)

/** \brief 1E0, Input Register 7 */
#define FCE_IN7_IR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_IR*)0xF00001E0u)
/** Alias (User Manual Name) for FCE_IN7_IR.
* To use register names with standard convension, please use FCE_IN7_IR.
*/
#define FCE_IR7 (FCE_IN7_IR)

/** \brief 1E4, CRC Result Register 7 */
#define FCE_IN7_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_RES*)0xF00001E4u)
/** Alias (User Manual Name) for FCE_IN7_RES.
* To use register names with standard convension, please use FCE_IN7_RES.
*/
#define FCE_RES7 (FCE_IN7_RES)

/** \brief 1E8, CRC Configuration Register 7 */
#define FCE_IN7_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CFG*)0xF00001E8u)
/** Alias (User Manual Name) for FCE_IN7_CFG.
* To use register names with standard convension, please use FCE_IN7_CFG.
*/
#define FCE_CFG7 (FCE_IN7_CFG)

/** \brief 1EC, CRC Status Register 7 */
#define FCE_IN7_STS /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_STS*)0xF00001ECu)
/** Alias (User Manual Name) for FCE_IN7_STS.
* To use register names with standard convension, please use FCE_IN7_STS.
*/
#define FCE_STS7 (FCE_IN7_STS)

/** \brief 1F0, CRC Length Register 7 */
#define FCE_IN7_LENGTH /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_LENGTH*)0xF00001F0u)
/** Alias (User Manual Name) for FCE_IN7_LENGTH.
* To use register names with standard convension, please use FCE_IN7_LENGTH.
*/
#define FCE_LENGTH7 (FCE_IN7_LENGTH)

/** \brief 1F4, CRC Check Register 7 */
#define FCE_IN7_CHECK /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CHECK*)0xF00001F4u)
/** Alias (User Manual Name) for FCE_IN7_CHECK.
* To use register names with standard convension, please use FCE_IN7_CHECK.
*/
#define FCE_CHECK7 (FCE_IN7_CHECK)

/** \brief 1F8, CRC Regsister 7 */
#define FCE_IN7_CRC /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CRC*)0xF00001F8u)
/** Alias (User Manual Name) for FCE_IN7_CRC.
* To use register names with standard convension, please use FCE_IN7_CRC.
*/
#define FCE_CRC7 (FCE_IN7_CRC)

/** \brief 1FC, CRC Test Register 7 */
#define FCE_IN7_CTR /*lint --e(923, 9078)*/ (*(volatile Ifx_FCE_IN_CTR*)0xF00001FCu)
/** Alias (User Manual Name) for FCE_IN7_CTR.
* To use register names with standard convension, please use FCE_IN7_CTR.
*/
#define FCE_CTR7 (FCE_IN7_CTR)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXFCE_REG_H */
