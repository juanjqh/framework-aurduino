/**
 * \file IfxLmu_dam_reg.h
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
 * \defgroup IfxSfr_Lmu_dam_Registers_Cfg Lmu_dam address
 * \ingroup IfxSfr_Lmu_dam_Registers
 * 
 * \defgroup IfxSfr_Lmu_dam_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Lmu_dam_Registers_Cfg
 *
 * \defgroup IfxSfr_Lmu_dam_Registers_Cfg_Dam0 2-DAM0
 * \ingroup IfxSfr_Lmu_dam_Registers_Cfg
 *
 *
 */
#ifndef IFXLMU_DAM_REG_H
#define IFXLMU_DAM_REG_H 1
/******************************************************************************/
#include "IfxLmu_dam_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Lmu_dam_Registers_Cfg_BaseAddress
 * \{  */

/** \brief LMU_DAM object */
#define MODULE_DAM0 /*lint --e(923, 9078)*/ ((*(Ifx_LMU_DAM*)0xF8500000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Lmu_dam_Registers_Cfg_Dam0
 * \{  */
/** \brief 0, DAM Clock Control Register */
#define DAM0_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_CLC*)0xF8500000u)

/** \brief 8, DAM Module ID Register */
#define DAM0_MODID /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_MODID*)0xF8500008u)

/** \brief 10, DAM Access Enable Register 0 */
#define DAM0_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_ACCEN0*)0xF8500010u)

/** \brief 14, DAM Access Enable Register 1 */
#define DAM0_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_ACCEN1*)0xF8500014u)

/** \brief 20, DAM Memory Control Register */
#define DAM0_MEMCON /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_MEMCON*)0xF8500020u)

/** \brief 50, DAM Region Lower Address Register */
#define DAM0_RGN0_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF8500050u)
/** Alias (User Manual Name) for DAM0_RGN0_LA.
* To use register names with standard convension, please use DAM0_RGN0_LA.
*/
#define DAM0_RGNLA0 (DAM0_RGN0_LA)

/** \brief 54, DAM Region Upper Address Register */
#define DAM0_RGN0_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF8500054u)
/** Alias (User Manual Name) for DAM0_RGN0_UA.
* To use register names with standard convension, please use DAM0_RGN0_UA.
*/
#define DAM0_RGNUA0 (DAM0_RGN0_UA)

/** \brief 58, DAM Region Write Enable Register A */
#define DAM0_RGN0_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF8500058u)
/** Alias (User Manual Name) for DAM0_RGN0_ACCENA.
* To use register names with standard convension, please use DAM0_RGN0_ACCENA.
*/
#define DAM0_RGNACCENWA0 (DAM0_RGN0_ACCENA)

/** \brief 5C, DAM Region Write Enable Register B */
#define DAM0_RGN0_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF850005Cu)
/** Alias (User Manual Name) for DAM0_RGN0_ACCENB.
* To use register names with standard convension, please use DAM0_RGN0_ACCENB.
*/
#define DAM0_RGNACCENWB0 (DAM0_RGN0_ACCENB)

/** \brief 60, DAM Region Lower Address Register */
#define DAM0_RGN1_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF8500060u)
/** Alias (User Manual Name) for DAM0_RGN1_LA.
* To use register names with standard convension, please use DAM0_RGN1_LA.
*/
#define DAM0_RGNLA1 (DAM0_RGN1_LA)

/** \brief 64, DAM Region Upper Address Register */
#define DAM0_RGN1_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF8500064u)
/** Alias (User Manual Name) for DAM0_RGN1_UA.
* To use register names with standard convension, please use DAM0_RGN1_UA.
*/
#define DAM0_RGNUA1 (DAM0_RGN1_UA)

/** \brief 68, DAM Region Write Enable Register A */
#define DAM0_RGN1_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF8500068u)
/** Alias (User Manual Name) for DAM0_RGN1_ACCENA.
* To use register names with standard convension, please use DAM0_RGN1_ACCENA.
*/
#define DAM0_RGNACCENWA1 (DAM0_RGN1_ACCENA)

/** \brief 6C, DAM Region Write Enable Register B */
#define DAM0_RGN1_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF850006Cu)
/** Alias (User Manual Name) for DAM0_RGN1_ACCENB.
* To use register names with standard convension, please use DAM0_RGN1_ACCENB.
*/
#define DAM0_RGNACCENWB1 (DAM0_RGN1_ACCENB)

/** \brief 70, DAM Region Lower Address Register */
#define DAM0_RGN2_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF8500070u)
/** Alias (User Manual Name) for DAM0_RGN2_LA.
* To use register names with standard convension, please use DAM0_RGN2_LA.
*/
#define DAM0_RGNLA2 (DAM0_RGN2_LA)

/** \brief 74, DAM Region Upper Address Register */
#define DAM0_RGN2_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF8500074u)
/** Alias (User Manual Name) for DAM0_RGN2_UA.
* To use register names with standard convension, please use DAM0_RGN2_UA.
*/
#define DAM0_RGNUA2 (DAM0_RGN2_UA)

/** \brief 78, DAM Region Write Enable Register A */
#define DAM0_RGN2_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF8500078u)
/** Alias (User Manual Name) for DAM0_RGN2_ACCENA.
* To use register names with standard convension, please use DAM0_RGN2_ACCENA.
*/
#define DAM0_RGNACCENWA2 (DAM0_RGN2_ACCENA)

/** \brief 7C, DAM Region Write Enable Register B */
#define DAM0_RGN2_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF850007Cu)
/** Alias (User Manual Name) for DAM0_RGN2_ACCENB.
* To use register names with standard convension, please use DAM0_RGN2_ACCENB.
*/
#define DAM0_RGNACCENWB2 (DAM0_RGN2_ACCENB)

/** \brief 80, DAM Region Lower Address Register */
#define DAM0_RGN3_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF8500080u)
/** Alias (User Manual Name) for DAM0_RGN3_LA.
* To use register names with standard convension, please use DAM0_RGN3_LA.
*/
#define DAM0_RGNLA3 (DAM0_RGN3_LA)

/** \brief 84, DAM Region Upper Address Register */
#define DAM0_RGN3_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF8500084u)
/** Alias (User Manual Name) for DAM0_RGN3_UA.
* To use register names with standard convension, please use DAM0_RGN3_UA.
*/
#define DAM0_RGNUA3 (DAM0_RGN3_UA)

/** \brief 88, DAM Region Write Enable Register A */
#define DAM0_RGN3_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF8500088u)
/** Alias (User Manual Name) for DAM0_RGN3_ACCENA.
* To use register names with standard convension, please use DAM0_RGN3_ACCENA.
*/
#define DAM0_RGNACCENWA3 (DAM0_RGN3_ACCENA)

/** \brief 8C, DAM Region Write Enable Register B */
#define DAM0_RGN3_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF850008Cu)
/** Alias (User Manual Name) for DAM0_RGN3_ACCENB.
* To use register names with standard convension, please use DAM0_RGN3_ACCENB.
*/
#define DAM0_RGNACCENWB3 (DAM0_RGN3_ACCENB)

/** \brief 90, DAM Region Lower Address Register */
#define DAM0_RGN4_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF8500090u)
/** Alias (User Manual Name) for DAM0_RGN4_LA.
* To use register names with standard convension, please use DAM0_RGN4_LA.
*/
#define DAM0_RGNLA4 (DAM0_RGN4_LA)

/** \brief 94, DAM Region Upper Address Register */
#define DAM0_RGN4_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF8500094u)
/** Alias (User Manual Name) for DAM0_RGN4_UA.
* To use register names with standard convension, please use DAM0_RGN4_UA.
*/
#define DAM0_RGNUA4 (DAM0_RGN4_UA)

/** \brief 98, DAM Region Write Enable Register A */
#define DAM0_RGN4_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF8500098u)
/** Alias (User Manual Name) for DAM0_RGN4_ACCENA.
* To use register names with standard convension, please use DAM0_RGN4_ACCENA.
*/
#define DAM0_RGNACCENWA4 (DAM0_RGN4_ACCENA)

/** \brief 9C, DAM Region Write Enable Register B */
#define DAM0_RGN4_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF850009Cu)
/** Alias (User Manual Name) for DAM0_RGN4_ACCENB.
* To use register names with standard convension, please use DAM0_RGN4_ACCENB.
*/
#define DAM0_RGNACCENWB4 (DAM0_RGN4_ACCENB)

/** \brief A0, DAM Region Lower Address Register */
#define DAM0_RGN5_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF85000A0u)
/** Alias (User Manual Name) for DAM0_RGN5_LA.
* To use register names with standard convension, please use DAM0_RGN5_LA.
*/
#define DAM0_RGNLA5 (DAM0_RGN5_LA)

/** \brief A4, DAM Region Upper Address Register */
#define DAM0_RGN5_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF85000A4u)
/** Alias (User Manual Name) for DAM0_RGN5_UA.
* To use register names with standard convension, please use DAM0_RGN5_UA.
*/
#define DAM0_RGNUA5 (DAM0_RGN5_UA)

/** \brief A8, DAM Region Write Enable Register A */
#define DAM0_RGN5_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF85000A8u)
/** Alias (User Manual Name) for DAM0_RGN5_ACCENA.
* To use register names with standard convension, please use DAM0_RGN5_ACCENA.
*/
#define DAM0_RGNACCENWA5 (DAM0_RGN5_ACCENA)

/** \brief AC, DAM Region Write Enable Register B */
#define DAM0_RGN5_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF85000ACu)
/** Alias (User Manual Name) for DAM0_RGN5_ACCENB.
* To use register names with standard convension, please use DAM0_RGN5_ACCENB.
*/
#define DAM0_RGNACCENWB5 (DAM0_RGN5_ACCENB)

/** \brief B0, DAM Region Lower Address Register */
#define DAM0_RGN6_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF85000B0u)
/** Alias (User Manual Name) for DAM0_RGN6_LA.
* To use register names with standard convension, please use DAM0_RGN6_LA.
*/
#define DAM0_RGNLA6 (DAM0_RGN6_LA)

/** \brief B4, DAM Region Upper Address Register */
#define DAM0_RGN6_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF85000B4u)
/** Alias (User Manual Name) for DAM0_RGN6_UA.
* To use register names with standard convension, please use DAM0_RGN6_UA.
*/
#define DAM0_RGNUA6 (DAM0_RGN6_UA)

/** \brief B8, DAM Region Write Enable Register A */
#define DAM0_RGN6_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF85000B8u)
/** Alias (User Manual Name) for DAM0_RGN6_ACCENA.
* To use register names with standard convension, please use DAM0_RGN6_ACCENA.
*/
#define DAM0_RGNACCENWA6 (DAM0_RGN6_ACCENA)

/** \brief BC, DAM Region Write Enable Register B */
#define DAM0_RGN6_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF85000BCu)
/** Alias (User Manual Name) for DAM0_RGN6_ACCENB.
* To use register names with standard convension, please use DAM0_RGN6_ACCENB.
*/
#define DAM0_RGNACCENWB6 (DAM0_RGN6_ACCENB)

/** \brief C0, DAM Region Lower Address Register */
#define DAM0_RGN7_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_LA*)0xF85000C0u)
/** Alias (User Manual Name) for DAM0_RGN7_LA.
* To use register names with standard convension, please use DAM0_RGN7_LA.
*/
#define DAM0_RGNLA7 (DAM0_RGN7_LA)

/** \brief C4, DAM Region Upper Address Register */
#define DAM0_RGN7_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_UA*)0xF85000C4u)
/** Alias (User Manual Name) for DAM0_RGN7_UA.
* To use register names with standard convension, please use DAM0_RGN7_UA.
*/
#define DAM0_RGNUA7 (DAM0_RGN7_UA)

/** \brief C8, DAM Region Write Enable Register A */
#define DAM0_RGN7_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENA*)0xF85000C8u)
/** Alias (User Manual Name) for DAM0_RGN7_ACCENA.
* To use register names with standard convension, please use DAM0_RGN7_ACCENA.
*/
#define DAM0_RGNACCENWA7 (DAM0_RGN7_ACCENA)

/** \brief CC, DAM Region Write Enable Register B */
#define DAM0_RGN7_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGN_ACCENB*)0xF85000CCu)
/** Alias (User Manual Name) for DAM0_RGN7_ACCENB.
* To use register names with standard convension, please use DAM0_RGN7_ACCENB.
*/
#define DAM0_RGNACCENWB7 (DAM0_RGN7_ACCENB)

/** \brief D8, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN0_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF85000D8u)
/** Alias (User Manual Name) for DAM0_RGNACCEN0_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN0_RA.
*/
#define DAM0_RGNACCENRA0 (DAM0_RGNACCEN0_RA)

/** \brief DC, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN0_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF85000DCu)
/** Alias (User Manual Name) for DAM0_RGNACCEN0_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN0_RB.
*/
#define DAM0_RGNACCENRB0 (DAM0_RGNACCEN0_RB)

/** \brief E8, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN1_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF85000E8u)
/** Alias (User Manual Name) for DAM0_RGNACCEN1_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN1_RA.
*/
#define DAM0_RGNACCENRA1 (DAM0_RGNACCEN1_RA)

/** \brief EC, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN1_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF85000ECu)
/** Alias (User Manual Name) for DAM0_RGNACCEN1_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN1_RB.
*/
#define DAM0_RGNACCENRB1 (DAM0_RGNACCEN1_RB)

/** \brief F8, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN2_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF85000F8u)
/** Alias (User Manual Name) for DAM0_RGNACCEN2_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN2_RA.
*/
#define DAM0_RGNACCENRA2 (DAM0_RGNACCEN2_RA)

/** \brief FC, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN2_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF85000FCu)
/** Alias (User Manual Name) for DAM0_RGNACCEN2_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN2_RB.
*/
#define DAM0_RGNACCENRB2 (DAM0_RGNACCEN2_RB)

/** \brief 108, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN3_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF8500108u)
/** Alias (User Manual Name) for DAM0_RGNACCEN3_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN3_RA.
*/
#define DAM0_RGNACCENRA3 (DAM0_RGNACCEN3_RA)

/** \brief 10C, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN3_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF850010Cu)
/** Alias (User Manual Name) for DAM0_RGNACCEN3_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN3_RB.
*/
#define DAM0_RGNACCENRB3 (DAM0_RGNACCEN3_RB)

/** \brief 118, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN4_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF8500118u)
/** Alias (User Manual Name) for DAM0_RGNACCEN4_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN4_RA.
*/
#define DAM0_RGNACCENRA4 (DAM0_RGNACCEN4_RA)

/** \brief 11C, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN4_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF850011Cu)
/** Alias (User Manual Name) for DAM0_RGNACCEN4_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN4_RB.
*/
#define DAM0_RGNACCENRB4 (DAM0_RGNACCEN4_RB)

/** \brief 128, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN5_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF8500128u)
/** Alias (User Manual Name) for DAM0_RGNACCEN5_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN5_RA.
*/
#define DAM0_RGNACCENRA5 (DAM0_RGNACCEN5_RA)

/** \brief 12C, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN5_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF850012Cu)
/** Alias (User Manual Name) for DAM0_RGNACCEN5_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN5_RB.
*/
#define DAM0_RGNACCENRB5 (DAM0_RGNACCEN5_RB)

/** \brief 138, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN6_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF8500138u)
/** Alias (User Manual Name) for DAM0_RGNACCEN6_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN6_RA.
*/
#define DAM0_RGNACCENRA6 (DAM0_RGNACCEN6_RA)

/** \brief 13C, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN6_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF850013Cu)
/** Alias (User Manual Name) for DAM0_RGNACCEN6_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN6_RB.
*/
#define DAM0_RGNACCENRB6 (DAM0_RGNACCEN6_RB)

/** \brief 148, DAM Region Read Enable Register A */
#define DAM0_RGNACCEN7_RA /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RA*)0xF8500148u)
/** Alias (User Manual Name) for DAM0_RGNACCEN7_RA.
* To use register names with standard convension, please use DAM0_RGNACCEN7_RA.
*/
#define DAM0_RGNACCENRA7 (DAM0_RGNACCEN7_RA)

/** \brief 14C, DAM Region Read Enable Register B */
#define DAM0_RGNACCEN7_RB /*lint --e(923, 9078)*/ (*(volatile Ifx_LMU_DAM_RGNACCEN_RB*)0xF850014Cu)
/** Alias (User Manual Name) for DAM0_RGNACCEN7_RB.
* To use register names with standard convension, please use DAM0_RGNACCEN7_RB.
*/
#define DAM0_RGNACCENRB7 (DAM0_RGNACCEN7_RB)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXLMU_DAM_REG_H */
