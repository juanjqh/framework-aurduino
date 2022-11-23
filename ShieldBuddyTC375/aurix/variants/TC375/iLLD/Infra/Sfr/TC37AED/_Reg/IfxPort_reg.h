/**
 * \file IfxPort_reg.h
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
 * \defgroup IfxSfr_P_Registers_Cfg P address
 * \ingroup IfxSfr_P_Registers
 * 
 * \defgroup IfxSfr_P_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P00 2-P00
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P01 2-P01
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P02 2-P02
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P10 2-P10
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P11 2-P11
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P12 2-P12
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P13 2-P13
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P14 2-P14
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P15 2-P15
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P20 2-P20
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P21 2-P21
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P22 2-P22
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P23 2-P23
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P32 2-P32
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P33 2-P33
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P34 2-P34
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 * \defgroup IfxSfr_P_Registers_Cfg_P40 2-P40
 * \ingroup IfxSfr_P_Registers_Cfg
 *
 *
 */
#ifndef IFXPORT_REG_H
#define IFXPORT_REG_H 1
/******************************************************************************/
#include "IfxPort_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_P_Registers_Cfg_BaseAddress
 * \{  */

/** \brief P object */
#define MODULE_P00 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003A000u))
#define MODULE_P01 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003A100u))
#define MODULE_P02 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003A200u))
#define MODULE_P10 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003AA00u))
#define MODULE_P11 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003AB00u))
#define MODULE_P12 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003AC00u))
#define MODULE_P13 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003AD00u))
#define MODULE_P14 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003AE00u))
#define MODULE_P15 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003AF00u))
#define MODULE_P20 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003B400u))
#define MODULE_P21 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003B500u))
#define MODULE_P22 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003B600u))
#define MODULE_P23 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003B700u))
#define MODULE_P32 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003C000u))
#define MODULE_P33 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003C100u))
#define MODULE_P34 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003C200u))
#define MODULE_P40 /*lint --e(923, 9078)*/ ((*(Ifx_P*)0xF003C800u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P00
 * \{  */
/** \brief 0, Port 00 Output Register */
#define P00_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003A000u)

/** \brief 4, Port 00 Output Modification Register */
#define P00_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003A004u)

/** \brief 8, Port 00 Identification Register */
#define P00_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003A008u)

/** \brief 10, Port 00 Input/Output Control Register 0 */
#define P00_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003A010u)

/** \brief 14, Port 00 Input/Output Control Register 4 */
#define P00_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003A014u)

/** \brief 18, Port 00 Input/Output Control Register 8 */
#define P00_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003A018u)

/** \brief 1C, Port 00 Input/Output Control Register 12 */
#define P00_IOCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR12*)0xF003A01Cu)

/** \brief 24, Port 00 Input Register */
#define P00_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003A024u)

/** \brief 40, Port 00 Pad Driver Mode Register 0 */
#define P00_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003A040u)

/** \brief 44, Port 00 Pad Driver Mode Register 1 */
#define P00_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003A044u)

/** \brief 50, Port 00 Emergency Stop Register */
#define P00_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003A050u)

/** \brief 60, Port 00 Pin Function Decision Control Register */
#define P00_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003A060u)

/** \brief 64, Port 00 Pin Controller Select Register */
#define P00_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003A064u)

/** \brief 70, Port 00 Output Modification Set Register 0 */
#define P00_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003A070u)

/** \brief 74, Port 00 Output Modification Set Register 4 */
#define P00_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003A074u)

/** \brief 78, Port 00 Output Modification Set Register 8 */
#define P00_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003A078u)

/** \brief 7C, Port 00 Output Modification Set Register 12 */
#define P00_OMSR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR12*)0xF003A07Cu)

/** \brief 80, Port 00 Output Modification Clear Register 0 */
#define P00_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003A080u)

/** \brief 84, Port 00 Output Modification Clear Register 4 */
#define P00_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003A084u)

/** \brief 88, Port 00 Output Modification Clear Register 8 */
#define P00_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003A088u)

/** \brief 8C, Port 00 Output Modification Clear Register 12 */
#define P00_OMCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR12*)0xF003A08Cu)

/** \brief 90, Port 00 Output Modification Set Register */
#define P00_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003A090u)

/** \brief 94, Port 00 Output Modification Clear Register */
#define P00_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003A094u)

/** \brief F8, Port 00 Access Enable Register 1 */
#define P00_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003A0F8u)

/** \brief FC, Port 00 Access Enable Register 0 */
#define P00_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003A0FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P01
 * \{  */
/** \brief 0, Port 01 Output Register */
#define P01_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003A100u)

/** \brief 4, Port 01 Output Modification Register */
#define P01_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003A104u)

/** \brief 8, Port 01 Identification Register */
#define P01_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003A108u)

/** \brief 10, Port 01 Input/Output Control Register 0 */
#define P01_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003A110u)

/** \brief 14, Port 01 Input/Output Control Register 4 */
#define P01_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003A114u)

/** \brief 24, Port 01 Input Register */
#define P01_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003A124u)

/** \brief 40, Port 01 Pad Driver Mode Register 0 */
#define P01_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003A140u)

/** \brief 50, Port 01 Emergency Stop Register */
#define P01_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003A150u)

/** \brief 60, Port 01 Pin Function Decision Control Register */
#define P01_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003A160u)

/** \brief 64, Port 01 Pin Controller Select Register */
#define P01_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003A164u)

/** \brief 70, Port 01 Output Modification Set Register 0 */
#define P01_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003A170u)

/** \brief 74, Port 01 Output Modification Set Register 4 */
#define P01_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003A174u)

/** \brief 80, Port 01 Output Modification Clear Register 0 */
#define P01_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003A180u)

/** \brief 84, Port 01 Output Modification Clear Register 4 */
#define P01_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003A184u)

/** \brief 90, Port 01 Output Modification Set Register */
#define P01_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003A190u)

/** \brief 94, Port 01 Output Modification Clear Register */
#define P01_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003A194u)

/** \brief F8, Port 01 Access Enable Register 1 */
#define P01_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003A1F8u)

/** \brief FC, Port 01 Access Enable Register 0 */
#define P01_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003A1FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P02
 * \{  */
/** \brief 0, Port 02 Output Register */
#define P02_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003A200u)

/** \brief 4, Port 02 Output Modification Register */
#define P02_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003A204u)

/** \brief 8, Port 02 Identification Register */
#define P02_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003A208u)

/** \brief 10, Port 02 Input/Output Control Register 0 */
#define P02_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003A210u)

/** \brief 14, Port 02 Input/Output Control Register 4 */
#define P02_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003A214u)

/** \brief 18, Port 02 Input/Output Control Register 8 */
#define P02_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003A218u)

/** \brief 24, Port 02 Input Register */
#define P02_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003A224u)

/** \brief 40, Port 02 Pad Driver Mode Register 0 */
#define P02_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003A240u)

/** \brief 44, Port 02 Pad Driver Mode Register 1 */
#define P02_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003A244u)

/** \brief 50, Port 02 Emergency Stop Register */
#define P02_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003A250u)

/** \brief 60, Port 02 Pin Function Decision Control Register */
#define P02_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003A260u)

/** \brief 64, Port 02 Pin Controller Select Register */
#define P02_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003A264u)

/** \brief 70, Port 02 Output Modification Set Register 0 */
#define P02_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003A270u)

/** \brief 74, Port 02 Output Modification Set Register 4 */
#define P02_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003A274u)

/** \brief 78, Port 02 Output Modification Set Register 8 */
#define P02_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003A278u)

/** \brief 80, Port 02 Output Modification Clear Register 0 */
#define P02_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003A280u)

/** \brief 84, Port 02 Output Modification Clear Register 4 */
#define P02_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003A284u)

/** \brief 88, Port 02 Output Modification Clear Register 8 */
#define P02_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003A288u)

/** \brief 90, Port 02 Output Modification Set Register */
#define P02_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003A290u)

/** \brief 94, Port 02 Output Modification Clear Register */
#define P02_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003A294u)

/** \brief F8, Port 02 Access Enable Register 1 */
#define P02_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003A2F8u)

/** \brief FC, Port 02 Access Enable Register 0 */
#define P02_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003A2FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P10
 * \{  */
/** \brief 0, Port 10 Output Register */
#define P10_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003AA00u)

/** \brief 4, Port 10 Output Modification Register */
#define P10_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003AA04u)

/** \brief 8, Port 10 Identification Register */
#define P10_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003AA08u)

/** \brief 10, Port 10 Input/Output Control Register 0 */
#define P10_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003AA10u)

/** \brief 14, Port 10 Input/Output Control Register 4 */
#define P10_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003AA14u)

/** \brief 18, Port 10 Input/Output Control Register 8 */
#define P10_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003AA18u)

/** \brief 24, Port 10 Input Register */
#define P10_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003AA24u)

/** \brief 40, Port 10 Pad Driver Mode Register 0 */
#define P10_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003AA40u)

/** \brief 44, Port 10 Pad Driver Mode Register 1 */
#define P10_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003AA44u)

/** \brief 50, Port 10 Emergency Stop Register */
#define P10_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003AA50u)

/** \brief 60, Port 10 Pin Function Decision Control Register */
#define P10_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003AA60u)

/** \brief 64, Port 10 Pin Controller Select Register */
#define P10_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003AA64u)

/** \brief 70, Port 10 Output Modification Set Register 0 */
#define P10_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003AA70u)

/** \brief 74, Port 10 Output Modification Set Register 4 */
#define P10_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003AA74u)

/** \brief 78, Port 10 Output Modification Set Register 8 */
#define P10_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003AA78u)

/** \brief 80, Port 10 Output Modification Clear Register 0 */
#define P10_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003AA80u)

/** \brief 84, Port 10 Output Modification Clear Register 4 */
#define P10_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003AA84u)

/** \brief 88, Port 10 Output Modification Clear Register 8 */
#define P10_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003AA88u)

/** \brief 90, Port 10 Output Modification Set Register */
#define P10_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003AA90u)

/** \brief 94, Port 10 Output Modification Clear Register */
#define P10_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003AA94u)

/** \brief F8, Port 10 Access Enable Register 1 */
#define P10_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003AAF8u)

/** \brief FC, Port 10 Access Enable Register 0 */
#define P10_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003AAFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P11
 * \{  */
/** \brief 0, Port 11 Output Register */
#define P11_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003AB00u)

/** \brief 4, Port 11 Output Modification Register */
#define P11_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003AB04u)

/** \brief 8, Port 11 Identification Register */
#define P11_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003AB08u)

/** \brief 10, Port 11 Input/Output Control Register 0 */
#define P11_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003AB10u)

/** \brief 14, Port 11 Input/Output Control Register 4 */
#define P11_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003AB14u)

/** \brief 18, Port 11 Input/Output Control Register 8 */
#define P11_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003AB18u)

/** \brief 1C, Port 11 Input/Output Control Register 12 */
#define P11_IOCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR12*)0xF003AB1Cu)

/** \brief 24, Port 11 Input Register */
#define P11_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003AB24u)

/** \brief 40, Port 11 Pad Driver Mode Register 0 */
#define P11_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003AB40u)

/** \brief 44, Port 11 Pad Driver Mode Register 1 */
#define P11_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003AB44u)

/** \brief 50, Port 11 Emergency Stop Register */
#define P11_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003AB50u)

/** \brief 60, Port 11 Pin Function Decision Control Register */
#define P11_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003AB60u)

/** \brief 64, Port 11 Pin Controller Select Register */
#define P11_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003AB64u)

/** \brief 70, Port 11 Output Modification Set Register 0 */
#define P11_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003AB70u)

/** \brief 74, Port 11 Output Modification Set Register 4 */
#define P11_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003AB74u)

/** \brief 78, Port 11 Output Modification Set Register 8 */
#define P11_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003AB78u)

/** \brief 7C, Port 11 Output Modification Set Register 12 */
#define P11_OMSR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR12*)0xF003AB7Cu)

/** \brief 80, Port 11 Output Modification Clear Register 0 */
#define P11_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003AB80u)

/** \brief 84, Port 11 Output Modification Clear Register 4 */
#define P11_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003AB84u)

/** \brief 88, Port 11 Output Modification Clear Register 8 */
#define P11_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003AB88u)

/** \brief 8C, Port 11 Output Modification Clear Register 12 */
#define P11_OMCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR12*)0xF003AB8Cu)

/** \brief 90, Port 11 Output Modification Set Register */
#define P11_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003AB90u)

/** \brief 94, Port 11 Output Modification Clear Register */
#define P11_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003AB94u)

/** \brief F8, Port 11 Access Enable Register 1 */
#define P11_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003ABF8u)

/** \brief FC, Port 11 Access Enable Register 0 */
#define P11_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003ABFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P12
 * \{  */
/** \brief 0, Port 12 Output Register */
#define P12_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003AC00u)

/** \brief 4, Port 12 Output Modification Register */
#define P12_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003AC04u)

/** \brief 8, Port 12 Identification Register */
#define P12_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003AC08u)

/** \brief 10, Port 12 Input/Output Control Register 0 */
#define P12_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003AC10u)

/** \brief 24, Port 12 Input Register */
#define P12_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003AC24u)

/** \brief 40, Port 12 Pad Driver Mode Register 0 */
#define P12_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003AC40u)

/** \brief 50, Port 12 Emergency Stop Register */
#define P12_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003AC50u)

/** \brief 60, Port 12 Pin Function Decision Control Register */
#define P12_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003AC60u)

/** \brief 64, Port 12 Pin Controller Select Register */
#define P12_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003AC64u)

/** \brief 70, Port 12 Output Modification Set Register 0 */
#define P12_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003AC70u)

/** \brief 80, Port 12 Output Modification Clear Register 0 */
#define P12_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003AC80u)

/** \brief 90, Port 12 Output Modification Set Register */
#define P12_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003AC90u)

/** \brief 94, Port 12 Output Modification Clear Register */
#define P12_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003AC94u)

/** \brief F8, Port 12 Access Enable Register 1 */
#define P12_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003ACF8u)

/** \brief FC, Port 12 Access Enable Register 0 */
#define P12_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003ACFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P13
 * \{  */
/** \brief 0, Port 13 Output Register */
#define P13_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003AD00u)

/** \brief 4, Port 13 Output Modification Register */
#define P13_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003AD04u)

/** \brief 8, Port 13 Identification Register */
#define P13_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003AD08u)

/** \brief 10, Port 13 Input/Output Control Register 0 */
#define P13_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003AD10u)

/** \brief 24, Port 13 Input Register */
#define P13_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003AD24u)

/** \brief 40, Port 13 Pad Driver Mode Register 0 */
#define P13_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003AD40u)

/** \brief 50, Port 13 Emergency Stop Register */
#define P13_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003AD50u)

/** \brief 60, Port 13 Pin Function Decision Control Register */
#define P13_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003AD60u)

/** \brief 64, Port 13 Pin Controller Select Register */
#define P13_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003AD64u)

/** \brief 70, Port 13 Output Modification Set Register 0 */
#define P13_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003AD70u)

/** \brief 80, Port 13 Output Modification Clear Register 0 */
#define P13_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003AD80u)

/** \brief 90, Port 13 Output Modification Set Register */
#define P13_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003AD90u)

/** \brief 94, Port 13 Output Modification Clear Register */
#define P13_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003AD94u)

/** \brief A0, Port 13 LVDS Pad Control Register 0 */
#define P13_LPCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003ADA0u)

/** \brief A4, Port 13 LVDS Pad Control Register 1 */
#define P13_LPCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003ADA4u)

/** \brief F8, Port 13 Access Enable Register 1 */
#define P13_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003ADF8u)

/** \brief FC, Port 13 Access Enable Register 0 */
#define P13_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003ADFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P14
 * \{  */
/** \brief 0, Port 14 Output Register */
#define P14_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003AE00u)

/** \brief 4, Port 14 Output Modification Register */
#define P14_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003AE04u)

/** \brief 8, Port 14 Identification Register */
#define P14_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003AE08u)

/** \brief 10, Port 14 Input/Output Control Register 0 */
#define P14_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003AE10u)

/** \brief 14, Port 14 Input/Output Control Register 4 */
#define P14_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003AE14u)

/** \brief 18, Port 14 Input/Output Control Register 8 */
#define P14_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003AE18u)

/** \brief 24, Port 14 Input Register */
#define P14_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003AE24u)

/** \brief 40, Port 14 Pad Driver Mode Register 0 */
#define P14_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003AE40u)

/** \brief 44, Port 14 Pad Driver Mode Register 1 */
#define P14_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003AE44u)

/** \brief 50, Port 14 Emergency Stop Register */
#define P14_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003AE50u)

/** \brief 60, Port 14 Pin Function Decision Control Register */
#define P14_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003AE60u)

/** \brief 64, Port 14 Pin Controller Select Register */
#define P14_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003AE64u)

/** \brief 70, Port 14 Output Modification Set Register 0 */
#define P14_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003AE70u)

/** \brief 74, Port 14 Output Modification Set Register 4 */
#define P14_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003AE74u)

/** \brief 78, Port 14 Output Modification Set Register 8 */
#define P14_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003AE78u)

/** \brief 80, Port 14 Output Modification Clear Register 0 */
#define P14_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003AE80u)

/** \brief 84, Port 14 Output Modification Clear Register 4 */
#define P14_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003AE84u)

/** \brief 88, Port 14 Output Modification Clear Register 8 */
#define P14_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003AE88u)

/** \brief 90, Port 14 Output Modification Set Register */
#define P14_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003AE90u)

/** \brief 94, Port 14 Output Modification Clear Register */
#define P14_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003AE94u)

/** \brief B4, Port 14 LVDS Pad Control Register 5 */
#define P14_LPCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003AEB4u)

/** \brief F8, Port 14 Access Enable Register 1 */
#define P14_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003AEF8u)

/** \brief FC, Port 14 Access Enable Register 0 */
#define P14_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003AEFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P15
 * \{  */
/** \brief 0, Port 15 Output Register */
#define P15_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003AF00u)

/** \brief 4, Port 15 Output Modification Register */
#define P15_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003AF04u)

/** \brief 8, Port 15 Identification Register */
#define P15_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003AF08u)

/** \brief 10, Port 15 Input/Output Control Register 0 */
#define P15_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003AF10u)

/** \brief 14, Port 15 Input/Output Control Register 4 */
#define P15_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003AF14u)

/** \brief 18, Port 15 Input/Output Control Register 8 */
#define P15_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003AF18u)

/** \brief 24, Port 15 Input Register */
#define P15_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003AF24u)

/** \brief 40, Port 15 Pad Driver Mode Register 0 */
#define P15_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003AF40u)

/** \brief 44, Port 15 Pad Driver Mode Register 1 */
#define P15_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003AF44u)

/** \brief 50, Port 15 Emergency Stop Register */
#define P15_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003AF50u)

/** \brief 60, Port 15 Pin Function Decision Control Register */
#define P15_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003AF60u)

/** \brief 64, Port 15 Pin Controller Select Register */
#define P15_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003AF64u)

/** \brief 70, Port 15 Output Modification Set Register 0 */
#define P15_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003AF70u)

/** \brief 74, Port 15 Output Modification Set Register 4 */
#define P15_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003AF74u)

/** \brief 78, Port 15 Output Modification Set Register 8 */
#define P15_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003AF78u)

/** \brief 80, Port 15 Output Modification Clear Register 0 */
#define P15_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003AF80u)

/** \brief 84, Port 15 Output Modification Clear Register 4 */
#define P15_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003AF84u)

/** \brief 88, Port 15 Output Modification Clear Register 8 */
#define P15_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003AF88u)

/** \brief 90, Port 15 Output Modification Set Register */
#define P15_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003AF90u)

/** \brief 94, Port 15 Output Modification Clear Register */
#define P15_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003AF94u)

/** \brief F8, Port 15 Access Enable Register 1 */
#define P15_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003AFF8u)

/** \brief FC, Port 15 Access Enable Register 0 */
#define P15_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003AFFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P20
 * \{  */
/** \brief 0, Port 20 Output Register */
#define P20_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003B400u)

/** \brief 4, Port 20 Output Modification Register */
#define P20_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003B404u)

/** \brief 8, Port 20 Identification Register */
#define P20_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003B408u)

/** \brief 10, Port 20 Input/Output Control Register 0 */
#define P20_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003B410u)

/** \brief 14, Port 20 Input/Output Control Register 4 */
#define P20_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003B414u)

/** \brief 18, Port 20 Input/Output Control Register 8 */
#define P20_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003B418u)

/** \brief 1C, Port 20 Input/Output Control Register 12 */
#define P20_IOCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR12*)0xF003B41Cu)

/** \brief 24, Port 20 Input Register */
#define P20_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003B424u)

/** \brief 40, Port 20 Pad Driver Mode Register 0 */
#define P20_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003B440u)

/** \brief 44, Port 20 Pad Driver Mode Register 1 */
#define P20_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003B444u)

/** \brief 50, Port 20 Emergency Stop Register */
#define P20_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003B450u)

/** \brief 60, Port 20 Pin Function Decision Control Register */
#define P20_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003B460u)

/** \brief 64, Port 20 Pin Controller Select Register */
#define P20_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003B464u)

/** \brief 70, Port 20 Output Modification Set Register 0 */
#define P20_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003B470u)

/** \brief 74, Port 20 Output Modification Set Register 4 */
#define P20_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003B474u)

/** \brief 78, Port 20 Output Modification Set Register 8 */
#define P20_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003B478u)

/** \brief 7C, Port 20 Output Modification Set Register 12 */
#define P20_OMSR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR12*)0xF003B47Cu)

/** \brief 80, Port 20 Output Modification Clear Register 0 */
#define P20_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003B480u)

/** \brief 84, Port 20 Output Modification Clear Register 4 */
#define P20_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003B484u)

/** \brief 88, Port 20 Output Modification Clear Register 8 */
#define P20_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003B488u)

/** \brief 8C, Port 20 Output Modification Clear Register 12 */
#define P20_OMCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR12*)0xF003B48Cu)

/** \brief 90, Port 20 Output Modification Set Register */
#define P20_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003B490u)

/** \brief 94, Port 20 Output Modification Clear Register */
#define P20_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003B494u)

/** \brief F8, Port 20 Access Enable Register 1 */
#define P20_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003B4F8u)

/** \brief FC, Port 20 Access Enable Register 0 */
#define P20_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003B4FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P21
 * \{  */
/** \brief 0, Port 21 Output Register */
#define P21_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003B500u)

/** \brief 4, Port 21 Output Modification Register */
#define P21_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003B504u)

/** \brief 8, Port 21 Identification Register */
#define P21_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003B508u)

/** \brief 10, Port 21 Input/Output Control Register 0 */
#define P21_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003B510u)

/** \brief 14, Port 21 Input/Output Control Register 4 */
#define P21_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003B514u)

/** \brief 24, Port 21 Input Register */
#define P21_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003B524u)

/** \brief 40, Port 21 Pad Driver Mode Register 0 */
#define P21_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003B540u)

/** \brief 50, Port 21 Emergency Stop Register */
#define P21_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003B550u)

/** \brief 60, Port 21 Pin Function Decision Control Register */
#define P21_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003B560u)

/** \brief 64, Port 21 Pin Controller Select Register */
#define P21_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003B564u)

/** \brief 70, Port 21 Output Modification Set Register 0 */
#define P21_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003B570u)

/** \brief 74, Port 21 Output Modification Set Register 4 */
#define P21_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003B574u)

/** \brief 80, Port 21 Output Modification Clear Register 0 */
#define P21_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003B580u)

/** \brief 84, Port 21 Output Modification Clear Register 4 */
#define P21_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003B584u)

/** \brief 90, Port 21 Output Modification Set Register */
#define P21_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003B590u)

/** \brief 94, Port 21 Output Modification Clear Register */
#define P21_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003B594u)

/** \brief A0, Port 21 LVDS Pad Control Register 0 */
#define P21_LPCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003B5A0u)

/** \brief A4, Port 21 LVDS Pad Control Register 1 */
#define P21_LPCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003B5A4u)

/** \brief A8, Port 21 LVDS Pad Control Register 2 */
#define P21_LPCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003B5A8u)

/** \brief F8, Port 21 Access Enable Register 1 */
#define P21_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003B5F8u)

/** \brief FC, Port 21 Access Enable Register 0 */
#define P21_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003B5FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P22
 * \{  */
/** \brief 0, Port 22 Output Register */
#define P22_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003B600u)

/** \brief 4, Port 22 Output Modification Register */
#define P22_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003B604u)

/** \brief 8, Port 22 Identification Register */
#define P22_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003B608u)

/** \brief 10, Port 22 Input/Output Control Register 0 */
#define P22_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003B610u)

/** \brief 14, Port 22 Input/Output Control Register 4 */
#define P22_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003B614u)

/** \brief 18, Port 22 Input/Output Control Register 8 */
#define P22_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003B618u)

/** \brief 1C, Port 22 Input/Output Control Register 12 */
#define P22_IOCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR12*)0xF003B61Cu)

/** \brief 24, Port 22 Input Register */
#define P22_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003B624u)

/** \brief 40, Port 22 Pad Driver Mode Register 0 */
#define P22_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003B640u)

/** \brief 44, Port 22 Pad Driver Mode Register 1 */
#define P22_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003B644u)

/** \brief 50, Port 22 Emergency Stop Register */
#define P22_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003B650u)

/** \brief 60, Port 22 Pin Function Decision Control Register */
#define P22_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003B660u)

/** \brief 64, Port 22 Pin Controller Select Register */
#define P22_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003B664u)

/** \brief 70, Port 22 Output Modification Set Register 0 */
#define P22_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003B670u)

/** \brief 74, Port 22 Output Modification Set Register 4 */
#define P22_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003B674u)

/** \brief 78, Port 22 Output Modification Set Register 8 */
#define P22_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003B678u)

/** \brief 7C, Port 22 Output Modification Set Register 12 */
#define P22_OMSR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR12*)0xF003B67Cu)

/** \brief 80, Port 22 Output Modification Clear Register 0 */
#define P22_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003B680u)

/** \brief 84, Port 22 Output Modification Clear Register 4 */
#define P22_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003B684u)

/** \brief 88, Port 22 Output Modification Clear Register 8 */
#define P22_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003B688u)

/** \brief 8C, Port 22 Output Modification Clear Register 12 */
#define P22_OMCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR12*)0xF003B68Cu)

/** \brief 90, Port 22 Output Modification Set Register */
#define P22_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003B690u)

/** \brief 94, Port 22 Output Modification Clear Register */
#define P22_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003B694u)

/** \brief A0, Port 22 LVDS Pad Control Register 0 */
#define P22_LPCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003B6A0u)

/** \brief A4, Port 22 LVDS Pad Control Register 1 */
#define P22_LPCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_LPCR*)0xF003B6A4u)

/** \brief F8, Port 22 Access Enable Register 1 */
#define P22_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003B6F8u)

/** \brief FC, Port 22 Access Enable Register 0 */
#define P22_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003B6FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P23
 * \{  */
/** \brief 0, Port 23 Output Register */
#define P23_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003B700u)

/** \brief 4, Port 23 Output Modification Register */
#define P23_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003B704u)

/** \brief 8, Port 23 Identification Register */
#define P23_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003B708u)

/** \brief 10, Port 23 Input/Output Control Register 0 */
#define P23_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003B710u)

/** \brief 14, Port 23 Input/Output Control Register 4 */
#define P23_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003B714u)

/** \brief 24, Port 23 Input Register */
#define P23_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003B724u)

/** \brief 40, Port 23 Pad Driver Mode Register 0 */
#define P23_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003B740u)

/** \brief 50, Port 23 Emergency Stop Register */
#define P23_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003B750u)

/** \brief 60, Port 23 Pin Function Decision Control Register */
#define P23_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003B760u)

/** \brief 64, Port 23 Pin Controller Select Register */
#define P23_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003B764u)

/** \brief 70, Port 23 Output Modification Set Register 0 */
#define P23_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003B770u)

/** \brief 74, Port 23 Output Modification Set Register 4 */
#define P23_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003B774u)

/** \brief 80, Port 23 Output Modification Clear Register 0 */
#define P23_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003B780u)

/** \brief 84, Port 23 Output Modification Clear Register 4 */
#define P23_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003B784u)

/** \brief 90, Port 23 Output Modification Set Register */
#define P23_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003B790u)

/** \brief 94, Port 23 Output Modification Clear Register */
#define P23_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003B794u)

/** \brief F8, Port 23 Access Enable Register 1 */
#define P23_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003B7F8u)

/** \brief FC, Port 23 Access Enable Register 0 */
#define P23_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003B7FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P32
 * \{  */
/** \brief 0, Port 32 Output Register */
#define P32_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003C000u)

/** \brief 4, Port 32 Output Modification Register */
#define P32_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003C004u)

/** \brief 8, Port 32 Identification Register */
#define P32_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003C008u)

/** \brief 10, Port 32 Input/Output Control Register 0 */
#define P32_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003C010u)

/** \brief 14, Port 32 Input/Output Control Register 4 */
#define P32_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003C014u)

/** \brief 24, Port 32 Input Register */
#define P32_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003C024u)

/** \brief 40, Port 32 Pad Driver Mode Register 0 */
#define P32_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003C040u)

/** \brief 50, Port 32 Emergency Stop Register */
#define P32_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003C050u)

/** \brief 60, Port 32 Pin Function Decision Control Register */
#define P32_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003C060u)

/** \brief 64, Port 32 Pin Controller Select Register */
#define P32_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003C064u)

/** \brief 70, Port 32 Output Modification Set Register 0 */
#define P32_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003C070u)

/** \brief 74, Port 32 Output Modification Set Register 4 */
#define P32_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003C074u)

/** \brief 80, Port 32 Output Modification Clear Register 0 */
#define P32_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003C080u)

/** \brief 84, Port 32 Output Modification Clear Register 4 */
#define P32_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003C084u)

/** \brief 90, Port 32 Output Modification Set Register */
#define P32_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003C090u)

/** \brief 94, Port 32 Output Modification Clear Register */
#define P32_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003C094u)

/** \brief F8, Port 32 Access Enable Register 1 */
#define P32_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003C0F8u)

/** \brief FC, Port 32 Access Enable Register 0 */
#define P32_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003C0FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P33
 * \{  */
/** \brief 0, Port 33 Output Register */
#define P33_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003C100u)

/** \brief 4, Port 33 Output Modification Register */
#define P33_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003C104u)

/** \brief 8, Port 33 Identification Register */
#define P33_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003C108u)

/** \brief 10, Port 33 Input/Output Control Register 0 */
#define P33_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003C110u)

/** \brief 14, Port 33 Input/Output Control Register 4 */
#define P33_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003C114u)

/** \brief 18, Port 33 Input/Output Control Register 8 */
#define P33_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003C118u)

/** \brief 1C, Port 33 Input/Output Control Register 12 */
#define P33_IOCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR12*)0xF003C11Cu)

/** \brief 24, Port 33 Input Register */
#define P33_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003C124u)

/** \brief 40, Port 33 Pad Driver Mode Register 0 */
#define P33_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003C140u)

/** \brief 44, Port 33 Pad Driver Mode Register 1 */
#define P33_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003C144u)

/** \brief 50, Port 33 Emergency Stop Register */
#define P33_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003C150u)

/** \brief 60, Port 33 Pin Function Decision Control Register */
#define P33_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003C160u)

/** \brief 64, Port 33 Pin Controller Select Register */
#define P33_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003C164u)

/** \brief 70, Port 33 Output Modification Set Register 0 */
#define P33_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003C170u)

/** \brief 74, Port 33 Output Modification Set Register 4 */
#define P33_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003C174u)

/** \brief 78, Port 33 Output Modification Set Register 8 */
#define P33_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003C178u)

/** \brief 7C, Port 33 Output Modification Set Register 12 */
#define P33_OMSR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR12*)0xF003C17Cu)

/** \brief 80, Port 33 Output Modification Clear Register 0 */
#define P33_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003C180u)

/** \brief 84, Port 33 Output Modification Clear Register 4 */
#define P33_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003C184u)

/** \brief 88, Port 33 Output Modification Clear Register 8 */
#define P33_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003C188u)

/** \brief 8C, Port 33 Output Modification Clear Register 12 */
#define P33_OMCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR12*)0xF003C18Cu)

/** \brief 90, Port 33 Output Modification Set Register */
#define P33_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003C190u)

/** \brief 94, Port 33 Output Modification Clear Register */
#define P33_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003C194u)

/** \brief F8, Port 33 Access Enable Register 1 */
#define P33_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003C1F8u)

/** \brief FC, Port 33 Access Enable Register 0 */
#define P33_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003C1FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P34
 * \{  */
/** \brief 0, Port 34 Output Register */
#define P34_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003C200u)

/** \brief 4, Port 34 Output Modification Register */
#define P34_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003C204u)

/** \brief 8, Port 34 Identification Register */
#define P34_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003C208u)

/** \brief 10, Port 34 Input/Output Control Register 0 */
#define P34_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003C210u)

/** \brief 14, Port 34 Input/Output Control Register 4 */
#define P34_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003C214u)

/** \brief 24, Port 34 Input Register */
#define P34_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003C224u)

/** \brief 40, Port 34 Pad Driver Mode Register 0 */
#define P34_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003C240u)

/** \brief 50, Port 34 Emergency Stop Register */
#define P34_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003C250u)

/** \brief 60, Port 34 Pin Function Decision Control Register */
#define P34_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003C260u)

/** \brief 64, Port 34 Pin Controller Select Register */
#define P34_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003C264u)

/** \brief 70, Port 34 Output Modification Set Register 0 */
#define P34_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003C270u)

/** \brief 74, Port 34 Output Modification Set Register 4 */
#define P34_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003C274u)

/** \brief 80, Port 34 Output Modification Clear Register 0 */
#define P34_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003C280u)

/** \brief 84, Port 34 Output Modification Clear Register 4 */
#define P34_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003C284u)

/** \brief 90, Port 34 Output Modification Set Register */
#define P34_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003C290u)

/** \brief 94, Port 34 Output Modification Clear Register */
#define P34_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003C294u)

/** \brief F8, Port 34 Access Enable Register 1 */
#define P34_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003C2F8u)

/** \brief FC, Port 34 Access Enable Register 0 */
#define P34_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003C2FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_P_Registers_Cfg_P40
 * \{  */
/** \brief 0, Port 40 Output Register */
#define P40_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OUT*)0xF003C800u)

/** \brief 4, Port 40 Output Modification Register */
#define P40_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMR*)0xF003C804u)

/** \brief 8, Port 40 Identification Register */
#define P40_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ID*)0xF003C808u)

/** \brief 10, Port 40 Input/Output Control Register 0 */
#define P40_IOCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR0*)0xF003C810u)

/** \brief 14, Port 40 Input/Output Control Register 4 */
#define P40_IOCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR4*)0xF003C814u)

/** \brief 18, Port 40 Input/Output Control Register 8 */
#define P40_IOCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR8*)0xF003C818u)

/** \brief 1C, Port 40 Input/Output Control Register 12 */
#define P40_IOCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IOCR12*)0xF003C81Cu)

/** \brief 24, Port 40 Input Register */
#define P40_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_P_IN*)0xF003C824u)

/** \brief 40, Port 40 Pad Driver Mode Register 0 */
#define P40_PDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR0*)0xF003C840u)

/** \brief 44, Port 40 Pad Driver Mode Register 1 */
#define P40_PDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDR1*)0xF003C844u)

/** \brief 50, Port 40 Emergency Stop Register */
#define P40_ESR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ESR*)0xF003C850u)

/** \brief 60, Port 40 Pin Function Decision Control Register */
#define P40_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PDISC*)0xF003C860u)

/** \brief 64, Port 40 Pin Controller Select Register */
#define P40_PCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_PCSR*)0xF003C864u)

/** \brief 70, Port 40 Output Modification Set Register 0 */
#define P40_OMSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR0*)0xF003C870u)

/** \brief 74, Port 40 Output Modification Set Register 4 */
#define P40_OMSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR4*)0xF003C874u)

/** \brief 78, Port 40 Output Modification Set Register 8 */
#define P40_OMSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR8*)0xF003C878u)

/** \brief 7C, Port 40 Output Modification Set Register 12 */
#define P40_OMSR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR12*)0xF003C87Cu)

/** \brief 80, Port 40 Output Modification Clear Register 0 */
#define P40_OMCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR0*)0xF003C880u)

/** \brief 84, Port 40 Output Modification Clear Register 4 */
#define P40_OMCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR4*)0xF003C884u)

/** \brief 88, Port 40 Output Modification Clear Register 8 */
#define P40_OMCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR8*)0xF003C888u)

/** \brief 8C, Port 40 Output Modification Clear Register 12 */
#define P40_OMCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR12*)0xF003C88Cu)

/** \brief 90, Port 40 Output Modification Set Register */
#define P40_OMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMSR*)0xF003C890u)

/** \brief 94, Port 40 Output Modification Clear Register */
#define P40_OMCR /*lint --e(923, 9078)*/ (*(volatile Ifx_P_OMCR*)0xF003C894u)

/** \brief F8, Port 40 Access Enable Register 1 */
#define P40_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN1*)0xF003C8F8u)

/** \brief FC, Port 40 Access Enable Register 0 */
#define P40_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_P_ACCEN0*)0xF003C8FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXPORT_REG_H */
