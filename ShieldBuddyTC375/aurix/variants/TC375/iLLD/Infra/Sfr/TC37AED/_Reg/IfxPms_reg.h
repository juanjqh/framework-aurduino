/**
 * \file IfxPms_reg.h
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
 * \defgroup IfxSfr_Pms_Registers_Cfg Pms address
 * \ingroup IfxSfr_Pms_Registers
 * 
 * \defgroup IfxSfr_Pms_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Pms_Registers_Cfg
 *
 * \defgroup IfxSfr_Pms_Registers_Cfg_Pms 2-PMS
 * \ingroup IfxSfr_Pms_Registers_Cfg
 *
 *
 */
#ifndef IFXPMS_REG_H
#define IFXPMS_REG_H 1
/******************************************************************************/
#include "IfxPms_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Pms_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PMS object */
#define MODULE_PMS /*lint --e(923, 9078)*/ ((*(Ifx_PMS*)0xF0248000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pms_Registers_Cfg_Pms
 * \{  */
/** \brief 0, Standby Controller Extension RAM */
#define PMS_XRAM ((void*)0xF0240000u)
#define PMS_XRAM_SIZE (0x2000u)
/** \brief 8, Identification Register */
#define PMS_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_ID*)0xF0248008u)

/** \brief 2C, EVR Status Register */
#define PMS_EVRSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSTAT*)0xF024802Cu)

/** \brief 34, EVR Primary ADC Status Register */
#define PMS_EVRADCSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRADCSTAT*)0xF0248034u)

/** \brief 3C, EVR Reset Control Register */
#define PMS_EVRRSTCON /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRRSTCON*)0xF024803Cu)

/** \brief 44, EVR Reset Status Register */
#define PMS_EVRRSTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRRSTSTAT*)0xF0248044u)

/** \brief 4C, EVR Trim Control Register */
#define PMS_EVRTRIM /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRTRIM*)0xF024804Cu)

/** \brief 50, EVR Trim Status Register */
#define PMS_EVRTRIMSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRTRIMSTAT*)0xF0248050u)

/** \brief 60, EVR Secondary ADC Status Register 1 */
#define PMS_MONSTAT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_MONSTAT1*)0xF0248060u)
/** Alias (User Manual Name) for PMS_MONSTAT1.
* To use register names with standard convension, please use PMS_MONSTAT1.
*/
#define PMS_EVRMONSTAT1 (PMS_MONSTAT1)

/** \brief 64, EVR Secondary ADC Status Register 2 */
#define PMS_MONSTAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_MONSTAT2*)0xF0248064u)
/** Alias (User Manual Name) for PMS_MONSTAT2.
* To use register names with standard convension, please use PMS_MONSTAT2.
*/
#define PMS_EVRMONSTAT2 (PMS_MONSTAT2)

/** \brief 68, EVR Secondary Monitor Control Register */
#define PMS_MONCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_MONCTRL*)0xF0248068u)
/** Alias (User Manual Name) for PMS_MONCTRL.
* To use register names with standard convension, please use PMS_MONCTRL.
*/
#define PMS_EVRMONCTRL (PMS_MONCTRL)

/** \brief 70, EVR Secondary Monitor Filter Register */
#define PMS_MONFILT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_MONFILT*)0xF0248070u)
/** Alias (User Manual Name) for PMS_MONFILT.
* To use register names with standard convension, please use PMS_MONFILT.
*/
#define PMS_EVRMONFILT (PMS_MONFILT)

/** \brief 74, PMS Interrupt Enable Register */
#define PMS_PMSIEN /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSIEN*)0xF0248074u)

/** \brief 78, EVR Secondary Under-voltage Monitor Register */
#define PMS_UVMON /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_UVMON*)0xF0248078u)
/** Alias (User Manual Name) for PMS_UVMON.
* To use register names with standard convension, please use PMS_UVMON.
*/
#define PMS_EVRUVMON (PMS_UVMON)

/** \brief 7C, EVR Secondary Over-voltage Monitor Register */
#define PMS_OVMON /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_OVMON*)0xF024807Cu)
/** Alias (User Manual Name) for PMS_OVMON.
* To use register names with standard convension, please use PMS_OVMON.
*/
#define PMS_EVROVMON (PMS_OVMON)

/** \brief 80, EVR Secondary Under-voltage Monitor Register 2 */
#define PMS_UVMON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_UVMON2*)0xF0248080u)
/** Alias (User Manual Name) for PMS_UVMON2.
* To use register names with standard convension, please use PMS_UVMON2.
*/
#define PMS_EVRUVMON2 (PMS_UVMON2)

/** \brief 84, EVR Secondary Over-voltage Monitor Register 2 */
#define PMS_OVMON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_OVMON2*)0xF0248084u)
/** Alias (User Manual Name) for PMS_OVMON2.
* To use register names with standard convension, please use PMS_OVMON2.
*/
#define PMS_EVROVMON2 (PMS_OVMON2)

/** \brief 88, EVR Primary HSM Under-voltage Monitor Register */
#define PMS_HSMUVMON /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_HSMUVMON*)0xF0248088u)

/** \brief 8C, EVR Primary HSM Over-voltage Monitor Register */
#define PMS_HSMOVMON /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_HSMOVMON*)0xF024808Cu)

/** \brief A0, EVR Oscillator Control Register */
#define PMS_EVROSCCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVROSCCTRL*)0xF02480A0u)

/** \brief B4, Standby and Wake-up Control Register 0 */
#define PMS_PMSWCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWCR0*)0xF02480B4u)

/** \brief B8, Standby and Wake-up Control Register 2 */
#define PMS_PMSWCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWCR2*)0xF02480B8u)

/** \brief C0, Standby and Wake-up Control Register 3 */
#define PMS_PMSWCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWCR3*)0xF02480C0u)

/** \brief C4, Standby and Wake-up Control Register 4 */
#define PMS_PMSWCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWCR4*)0xF02480C4u)

/** \brief C8, Standby and Wake-up Control Register 5 */
#define PMS_PMSWCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWCR5*)0xF02480C8u)

/** \brief D4, Standby and Wake-up Status Register */
#define PMS_PMSWSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWSTAT*)0xF02480D4u)

/** \brief D8, Standby and Wake-up Status Register 2 */
#define PMS_PMSWSTAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWSTAT2*)0xF02480D8u)

/** \brief DC, Standby WUT Counter Register */
#define PMS_PMSWUTCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWUTCNT*)0xF02480DCu)

/** \brief E8, Standby and Wake-up Status Clear Register */
#define PMS_PMSWSTATCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_PMSWSTATCLR*)0xF02480E8u)

/** \brief FC, EVR SD Status Register 0 */
#define PMS_EVRSDSTAT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDSTAT0*)0xF02480FCu)

/** \brief 108, EVRC SD Control Register 0 */
#define PMS_EVRSDCTRL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL0*)0xF0248108u)

/** \brief 10C, EVRC SD Control Register 1 */
#define PMS_EVRSDCTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL1*)0xF024810Cu)

/** \brief 110, EVRC SD Control Register 2 */
#define PMS_EVRSDCTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL2*)0xF0248110u)

/** \brief 114, EVRC SD Control Register 3 */
#define PMS_EVRSDCTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL3*)0xF0248114u)

/** \brief 118, EVRC SD Control Register 4 */
#define PMS_EVRSDCTRL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL4*)0xF0248118u)

/** \brief 11C, EVRC SD Control Register 5 */
#define PMS_EVRSDCTRL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL5*)0xF024811Cu)

/** \brief 120, EVRC SD Control Register 6 */
#define PMS_EVRSDCTRL6 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL6*)0xF0248120u)

/** \brief 124, EVRC SD Control Register 7 */
#define PMS_EVRSDCTRL7 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL7*)0xF0248124u)

/** \brief 128, EVRC SD Control Register 8 */
#define PMS_EVRSDCTRL8 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL8*)0xF0248128u)

/** \brief 12C, EVRC SD Control Register 9 */
#define PMS_EVRSDCTRL9 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL9*)0xF024812Cu)

/** \brief 130, EVRC SD Control Register 10 */
#define PMS_EVRSDCTRL10 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL10*)0xF0248130u)

/** \brief 134, EVRC SD Control Register 11 */
#define PMS_EVRSDCTRL11 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCTRL11*)0xF0248134u)

/** \brief 148, EVRC SD Coefficient Register 0 */
#define PMS_EVRSDCOEFF0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF0*)0xF0248148u)

/** \brief 14C, EVRC SD Coefficient Register 1 */
#define PMS_EVRSDCOEFF1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF1*)0xF024814Cu)

/** \brief 150, EVRC SD Coefficient Register 2 */
#define PMS_EVRSDCOEFF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF2*)0xF0248150u)

/** \brief 154, EVRC SD Coefficient Register 3 */
#define PMS_EVRSDCOEFF3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF3*)0xF0248154u)

/** \brief 158, EVRC SD Coefficient Register 4 */
#define PMS_EVRSDCOEFF4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF4*)0xF0248158u)

/** \brief 15C, EVRC SD Coefficient Register 5 */
#define PMS_EVRSDCOEFF5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF5*)0xF024815Cu)

/** \brief 160, EVRC SD Coefficient Register 6 */
#define PMS_EVRSDCOEFF6 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF6*)0xF0248160u)

/** \brief 164, EVRC SD Coefficient Register 7 */
#define PMS_EVRSDCOEFF7 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF7*)0xF0248164u)

/** \brief 168, EVRC SD Coefficient Register 8 */
#define PMS_EVRSDCOEFF8 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF8*)0xF0248168u)

/** \brief 16C, EVRC SD Coefficient Register 9 */
#define PMS_EVRSDCOEFF9 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_EVRSDCOEFF9*)0xF024816Cu)

/** \brief 188, Alarm Status Register */
#define PMS_AG_STDBY0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_AG_STDBY0*)0xF0248188u)
/** Alias (User Manual Name) for PMS_AG_STDBY0.
* To use register names with standard convension, please use PMS_AG_STDBY0.
*/
#define PMS_AG20_STDBY (PMS_AG_STDBY0)

/** \brief 18C, Alarm Status Register */
#define PMS_AG_STDBY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_AG_STDBY1*)0xF024818Cu)
/** Alias (User Manual Name) for PMS_AG_STDBY1.
* To use register names with standard convension, please use PMS_AG_STDBY1.
*/
#define PMS_AG21_STDBY (PMS_AG_STDBY1)

/** \brief 190, SMU_stdby BIST Status Register */
#define PMS_MONBISTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_MONBISTSTAT*)0xF0248190u)

/** \brief 198, SMU_stdby BIST Control Register */
#define PMS_MONBISTCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_MONBISTCTRL*)0xF0248198u)

/** \brief 19C, SMU_stdby Command Register */
#define PMS_CMD_STDBY /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_CMD_STDBY*)0xF024819Cu)

/** \brief 1A4, SMU_stdby FSP Configuration Register */
#define PMS_AGFSP_STDBY0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_AGFSP_STDBY0*)0xF02481A4u)
/** Alias (User Manual Name) for PMS_AGFSP_STDBY0.
* To use register names with standard convension, please use PMS_AGFSP_STDBY0.
*/
#define PMS_AG20FSP_STDBY (PMS_AGFSP_STDBY0)

/** \brief 1A8, SMU_stdby FSP Configuration Register */
#define PMS_AGFSP_STDBY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_AGFSP_STDBY1*)0xF02481A8u)
/** Alias (User Manual Name) for PMS_AGFSP_STDBY1.
* To use register names with standard convension, please use PMS_AGFSP_STDBY1.
*/
#define PMS_AG21FSP_STDBY (PMS_AGFSP_STDBY1)

/** \brief 1C0, Die Temperature Sensor Status Register */
#define PMS_DTSSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_DTSSTAT*)0xF02481C0u)

/** \brief 1C8, Die Temperature Sensor Limit Register */
#define PMS_DTSLIM /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_DTSLIM*)0xF02481C8u)

/** \brief 1E0, OCDS Trigger Set Select Register */
#define PMS_OTSS /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_OTSS*)0xF02481E0u)

/** \brief 1E4, OCDS Trigger Set Control 0 Register */
#define PMS_OTSC0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_OTSC0*)0xF02481E4u)

/** \brief 1E8, OCDS Trigger Set Control 1 Register */
#define PMS_OTSC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_OTSC1*)0xF02481E8u)

/** \brief 1F8, Access Enable Register 1 */
#define PMS_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_ACCEN1*)0xF02481F8u)

/** \brief 1FC, Access Enable Register 0 */
#define PMS_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PMS_ACCEN0*)0xF02481FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXPMS_REG_H */
