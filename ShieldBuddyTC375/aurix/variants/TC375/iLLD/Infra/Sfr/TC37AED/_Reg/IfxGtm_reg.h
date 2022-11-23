/**
 * \file IfxGtm_reg.h
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
 * \defgroup IfxSfr_Gtm_Registers_Cfg Gtm address
 * \ingroup IfxSfr_Gtm_Registers
 * 
 * \defgroup IfxSfr_Gtm_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Gtm_Registers_Cfg
 *
 * \defgroup IfxSfr_Gtm_Registers_Cfg_Gtm 2-GTM
 * \ingroup IfxSfr_Gtm_Registers_Cfg
 *
 *
 */
#ifndef IFXGTM_REG_H
#define IFXGTM_REG_H 1
/******************************************************************************/
#include "IfxGtm_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Gtm_Registers_Cfg_BaseAddress
 * \{  */

/** \brief GTM object */
#define MODULE_GTM /*lint --e(923, 9078)*/ ((*(Ifx_GTM*)0xF0100000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Gtm_Registers_Cfg_Gtm
 * \{  */
/** \brief 19000, Mapped section of FIFO RAM */
#define GTM_PSM_FIFO0_MEMORY ((void*)0xF0119000u)
#define GTM_PSM_FIFO0_MEMORY_SIZE (0x3000u)
/** \brief 2C000, RAM based TRIGGER data */
#define GTM_DPLL_RR2 ((void*)0xF012C000u)
#define GTM_DPLL_RR2_SIZE (0x4000u)
/** \brief 38000, Mapped section of embedded RAM 0 */
#define GTM_MCS0_MEM ((void*)0xF0138000u)
#define GTM_MCS0_MEM_SIZE (0x4000u)
/** \brief 3C000, Mapped section of embedded RAM 1 */
#define GTM_MCS0_MEM1 ((void*)0xF013C000u)
#define GTM_MCS0_MEM1_SIZE (0x2000u)
/** \brief 40000, Mapped section of embedded RAM 0 */
#define GTM_MCS1_MEM ((void*)0xF0140000u)
#define GTM_MCS1_MEM_SIZE (0x4000u)
/** \brief 44000, Mapped section of embedded RAM 1 */
#define GTM_MCS1_MEM1 ((void*)0xF0144000u)
#define GTM_MCS1_MEM1_SIZE (0x2000u)
/** \brief 48000, Mapped section of embedded RAM 0 */
#define GTM_MCS2_MEM ((void*)0xF0148000u)
#define GTM_MCS2_MEM_SIZE (0x4000u)
/** \brief 4C000, Mapped section of embedded RAM 1 */
#define GTM_MCS2_MEM1 ((void*)0xF014C000u)
#define GTM_MCS2_MEM1_SIZE (0x2000u)
/** \brief 50000, Mapped section of embedded RAM 0 */
#define GTM_MCS3_MEM ((void*)0xF0150000u)
#define GTM_MCS3_MEM_SIZE (0x4000u)
/** \brief 54000, Mapped section of embedded RAM 1 */
#define GTM_MCS3_MEM1 ((void*)0xF0154000u)
#define GTM_MCS3_MEM1_SIZE (0x2000u)
/** \brief 58000, Mapped section of embedded RAM 0 */
#define GTM_MCS4_MEM ((void*)0xF0158000u)
#define GTM_MCS4_MEM_SIZE (0x4000u)
/** \brief 5C000, Mapped section of embedded RAM 1 */
#define GTM_MCS4_MEM1 ((void*)0xF015C000u)
#define GTM_MCS4_MEM1_SIZE (0x2000u)
/** \brief 0, GTM Version Control Register */
#define GTM_REV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_REV*)0xF0100000u)

/** \brief 4, GTM Global Reset Register */
#define GTM_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_RST*)0xF0100004u)

/** \brief 8, GTM Global Control Register */
#define GTM_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CTRL*)0xF0100008u)

/** \brief C, GTM AEI Timeout Exception Address Register */
#define GTM_AEI_ADDR_XPT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AEI_ADDR_XPT*)0xF010000Cu)

/** \brief 10, GTM Interrupt Notification Register */
#define GTM_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_IRQ_NOTIFY*)0xF0100010u)

/** \brief 14, GTM Interrupt Enable Register */
#define GTM_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_IRQ_EN*)0xF0100014u)

/** \brief 18, GTM Software Interrupt Generation Register */
#define GTM_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_IRQ_FORCINT*)0xF0100018u)

/** \brief 1C, GTM Top Level Interrupts Mode Selection Register */
#define GTM_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_IRQ_MODE*)0xF010001Cu)

/** \brief 20, GTM Error Interrupt Enable Register */
#define GTM_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_EIRQ_EN*)0xF0100020u)

/** \brief 24, GTM Hardware Configuration Register */
#define GTM_HW_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_HW_CONF*)0xF0100024u)

/** \brief 28, GTM Configuration Register */
#define GTM_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CFG*)0xF0100028u)

/** \brief 2C, GTM AEI Non Zero Status Register */
#define GTM_AEI_STA_XPT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AEI_STA_XPT*)0xF010002Cu)

/** \brief 30, GTM AEI Bridge Mode Register */
#define GTM_BRIDGE_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRIDGE_MODE*)0xF0100030u)

/** \brief 34, GTM AEI Bridge Pointer 1 Register */
#define GTM_BRIDGE_PTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRIDGE_PTR1*)0xF0100034u)

/** \brief 38, GTM AEI Bridge Pointer 2 Register */
#define GTM_BRIDGE_PTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRIDGE_PTR2*)0xF0100038u)

/** \brief 3C, GTM MCS Master Port Disable Register */
#define GTM_MCS_AEM_DIS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_AEM_DIS*)0xF010003Cu)

/** \brief 40, GTM TIM 0 Module AUX_IN Source Selection Register */
#define GTM_AUX_IN_SRC_TIM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AUX_IN_SRC_TIM*)0xF0100040u)
/** Alias (User Manual Name) for GTM_AUX_IN_SRC_TIM0.
* To use register names with standard convension, please use GTM_AUX_IN_SRC_TIM0.
*/
#define GTM_TIM0_AUX_IN_SRC (GTM_AUX_IN_SRC_TIM0)

/** \brief 44, GTM TIM 1 Module AUX_IN Source Selection Register */
#define GTM_AUX_IN_SRC_TIM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AUX_IN_SRC_TIM*)0xF0100044u)
/** Alias (User Manual Name) for GTM_AUX_IN_SRC_TIM1.
* To use register names with standard convension, please use GTM_AUX_IN_SRC_TIM1.
*/
#define GTM_TIM1_AUX_IN_SRC (GTM_AUX_IN_SRC_TIM1)

/** \brief 48, GTM TIM 2 Module AUX_IN Source Selection Register */
#define GTM_AUX_IN_SRC_TIM2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AUX_IN_SRC_TIM*)0xF0100048u)
/** Alias (User Manual Name) for GTM_AUX_IN_SRC_TIM2.
* To use register names with standard convension, please use GTM_AUX_IN_SRC_TIM2.
*/
#define GTM_TIM2_AUX_IN_SRC (GTM_AUX_IN_SRC_TIM2)

/** \brief 4C, GTM TIM 3 Module AUX_IN Source Selection Register */
#define GTM_AUX_IN_SRC_TIM3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AUX_IN_SRC_TIM*)0xF010004Cu)
/** Alias (User Manual Name) for GTM_AUX_IN_SRC_TIM3.
* To use register names with standard convension, please use GTM_AUX_IN_SRC_TIM3.
*/
#define GTM_TIM3_AUX_IN_SRC (GTM_AUX_IN_SRC_TIM3)

/** \brief 50, GTM TIM 4 Module AUX_IN Source Selection Register */
#define GTM_AUX_IN_SRC_TIM4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AUX_IN_SRC_TIM*)0xF0100050u)
/** Alias (User Manual Name) for GTM_AUX_IN_SRC_TIM4.
* To use register names with standard convension, please use GTM_AUX_IN_SRC_TIM4.
*/
#define GTM_TIM4_AUX_IN_SRC (GTM_AUX_IN_SRC_TIM4)

/** \brief 54, GTM TIM 5 Module AUX_IN Source Selection Register */
#define GTM_AUX_IN_SRC_TIM5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_AUX_IN_SRC_TIM*)0xF0100054u)
/** Alias (User Manual Name) for GTM_AUX_IN_SRC_TIM5.
* To use register names with standard convension, please use GTM_AUX_IN_SRC_TIM5.
*/
#define GTM_TIM5_AUX_IN_SRC (GTM_AUX_IN_SRC_TIM5)

/** \brief 5C, GTM External Capture Trigger Enable 0 */
#define GTM_EXT_CAP_EN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_EXT_CAP_EN*)0xF010005Cu)
/** Alias (User Manual Name) for GTM_EXT_CAP_EN0.
* To use register names with standard convension, please use GTM_EXT_CAP_EN0.
*/
#define GTM_EXT_CAP_EN_0 (GTM_EXT_CAP_EN0)

/** \brief 60, GTM External Capture Trigger Enable 1 */
#define GTM_EXT_CAP_EN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_EXT_CAP_EN*)0xF0100060u)
/** Alias (User Manual Name) for GTM_EXT_CAP_EN1.
* To use register names with standard convension, please use GTM_EXT_CAP_EN1.
*/
#define GTM_EXT_CAP_EN_1 (GTM_EXT_CAP_EN1)

/** \brief 64, GTM External Capture Trigger Enable 2 */
#define GTM_EXT_CAP_EN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_EXT_CAP_EN*)0xF0100064u)
/** Alias (User Manual Name) for GTM_EXT_CAP_EN2.
* To use register names with standard convension, please use GTM_EXT_CAP_EN2.
*/
#define GTM_EXT_CAP_EN_2 (GTM_EXT_CAP_EN2)

/** \brief 68, GTM External Capture Trigger Enable 3 */
#define GTM_EXT_CAP_EN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_EXT_CAP_EN*)0xF0100068u)
/** Alias (User Manual Name) for GTM_EXT_CAP_EN3.
* To use register names with standard convension, please use GTM_EXT_CAP_EN3.
*/
#define GTM_EXT_CAP_EN_3 (GTM_EXT_CAP_EN3)

/** \brief 6C, GTM External Capture Trigger Enable 4 */
#define GTM_EXT_CAP_EN4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_EXT_CAP_EN*)0xF010006Cu)
/** Alias (User Manual Name) for GTM_EXT_CAP_EN4.
* To use register names with standard convension, please use GTM_EXT_CAP_EN4.
*/
#define GTM_EXT_CAP_EN_4 (GTM_EXT_CAP_EN4)

/** \brief 80, GTM TOM 0 Output Level */
#define GTM_OUT_TOM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OUT_TOM*)0xF0100080u)
/** Alias (User Manual Name) for GTM_OUT_TOM0.
* To use register names with standard convension, please use GTM_OUT_TOM0.
*/
#define GTM_TOM0_OUT (GTM_OUT_TOM0)

/** \brief 84, GTM TOM 1 Output Level */
#define GTM_OUT_TOM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OUT_TOM*)0xF0100084u)
/** Alias (User Manual Name) for GTM_OUT_TOM1.
* To use register names with standard convension, please use GTM_OUT_TOM1.
*/
#define GTM_TOM1_OUT (GTM_OUT_TOM1)

/** \brief 88, GTM TOM 2 Output Level */
#define GTM_OUT_TOM2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OUT_TOM*)0xF0100088u)
/** Alias (User Manual Name) for GTM_OUT_TOM2.
* To use register names with standard convension, please use GTM_OUT_TOM2.
*/
#define GTM_TOM2_OUT (GTM_OUT_TOM2)

/** \brief 98, GTM ATOM 0 Output Level */
#define GTM_OUT_ATOM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OUT_ATOM*)0xF0100098u)
/** Alias (User Manual Name) for GTM_OUT_ATOM0.
* To use register names with standard convension, please use GTM_OUT_ATOM0.
*/
#define GTM_ATOM0_OUT (GTM_OUT_ATOM0)

/** \brief 9C, GTM ATOM 2 Output Level */
#define GTM_OUT_ATOM2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OUT_ATOM*)0xF010009Cu)
/** Alias (User Manual Name) for GTM_OUT_ATOM2.
* To use register names with standard convension, please use GTM_OUT_ATOM2.
*/
#define GTM_ATOM2_OUT (GTM_OUT_ATOM2)

/** \brief A0, GTM ATOM 4 Output Level */
#define GTM_OUT_ATOM4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OUT_ATOM*)0xF01000A0u)
/** Alias (User Manual Name) for GTM_OUT_ATOM4.
* To use register names with standard convension, please use GTM_OUT_ATOM4.
*/
#define GTM_ATOM4_OUT (GTM_OUT_ATOM4)

/** \brief B0, GTM Cluster Clock Configuration */
#define GTM_CLS_CLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CLS_CLK_CFG*)0xF01000B0u)

/** \brief 100, TBU Global Channel Enable */
#define GTM_TBU_CHEN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CHEN*)0xF0100100u)

/** \brief 104, TBU Channel 0 Control Register */
#define GTM_TBU_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH0_CTRL*)0xF0100104u)

/** \brief 108, TBU Channel 0 Base Register */
#define GTM_TBU_CH0_BASE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH0_BASE*)0xF0100108u)

/** \brief 10C, TBU Channel 1 Control Register */
#define GTM_TBU_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH1_CTRL*)0xF010010Cu)

/** \brief 110, TBU Channel 1 Base Register */
#define GTM_TBU_CH1_BASE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH1_BASE*)0xF0100110u)

/** \brief 114, TBU Channel 2 Control Register */
#define GTM_TBU_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH2_CTRL*)0xF0100114u)

/** \brief 118, TBU Channel 2 Base Register */
#define GTM_TBU_CH2_BASE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH2_BASE*)0xF0100118u)

/** \brief 11C, TBU Channel 3 Control Register */
#define GTM_TBU_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH3_CTRL*)0xF010011Cu)

/** \brief 120, TBU Channel 3 Base Register */
#define GTM_TBU_CH3_BASE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH3_BASE*)0xF0100120u)

/** \brief 124, TBU Channel 3 Modulo Value Register */
#define GTM_TBU_CH3_BASE_MARK /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH3_BASE_MARK*)0xF0100124u)

/** \brief 128, TBU Channel 3 Base Captured Register */
#define GTM_TBU_CH3_BASE_CAPTURE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TBU_CH3_BASE_CAPTURE*)0xF0100128u)

/** \brief 180, Monitor Status Register */
#define GTM_MON_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_STATUS*)0xF0100180u)

/** \brief 184, Monitor Activity Register 0 */
#define GTM_MON_ACTIVITY_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_R0*)0xF0100184u)
/** Alias (User Manual Name) for GTM_MON_ACTIVITY_R0.
* To use register names with standard convension, please use GTM_MON_ACTIVITY_R0.
*/
#define GTM_MON_ACTIVITY_0 (GTM_MON_ACTIVITY_R0)

/** \brief 188, Monitor Activity Register 1 */
#define GTM_MON_ACTIVITY_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_R1*)0xF0100188u)
/** Alias (User Manual Name) for GTM_MON_ACTIVITY_R1.
* To use register names with standard convension, please use GTM_MON_ACTIVITY_R1.
*/
#define GTM_MON_ACTIVITY_1 (GTM_MON_ACTIVITY_R1)

/** \brief 18C, Monitor Activity Register for MCS 0 */
#define GTM_MON_ACTIVITY_MCS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_MCS*)0xF010018Cu)

/** \brief 190, Monitor Activity Register for MCS 1 */
#define GTM_MON_ACTIVITY_MCS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_MCS*)0xF0100190u)

/** \brief 194, Monitor Activity Register for MCS 2 */
#define GTM_MON_ACTIVITY_MCS2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_MCS*)0xF0100194u)

/** \brief 198, Monitor Activity Register for MCS 3 */
#define GTM_MON_ACTIVITY_MCS3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_MCS*)0xF0100198u)

/** \brief 19C, Monitor Activity Register for MCS 4 */
#define GTM_MON_ACTIVITY_MCS4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_MCS*)0xF010019Cu)

/** \brief 200, CMP Comparator Enable Register */
#define GTM_CMP_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMP_EN*)0xF0100200u)

/** \brief 204, CMP Event Notification Register */
#define GTM_CMP_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMP_IRQ_NOTIFY*)0xF0100204u)

/** \brief 208, CMP Interrupt Enable Register */
#define GTM_CMP_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMP_IRQ_EN*)0xF0100208u)

/** \brief 20C, CMP Interrupt Force Register */
#define GTM_CMP_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMP_IRQ_FORCINT*)0xF010020Cu)

/** \brief 210, CMP Interrupt Mode Configuration Register */
#define GTM_CMP_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMP_IRQ_MODE*)0xF0100210u)

/** \brief 214, CMP error interrupt enable register */
#define GTM_CMP_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMP_EIRQ_EN*)0xF0100214u)

/** \brief 280, ARU Access Register */
#define GTM_ARU_ACCESS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_ACCESS*)0xF0100280u)

/** \brief 284, ARU Access Register Upper Data Word */
#define GTM_ARU_DATA_H /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DATA_H*)0xF0100284u)

/** \brief 288, ARU Access Register Lower Data Word */
#define GTM_ARU_DATA_L /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DATA_L*)0xF0100288u)

/** \brief 28C, ARU Debug Access Channel 0 */
#define GTM_ARU_DBG_ACCESS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DBG_ACCESS0*)0xF010028Cu)

/** \brief 290, ARU Debug Access 0 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA0_H /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA0_H*)0xF0100290u)

/** \brief 294, ARU Debug Access 0 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA0_L /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA0_L*)0xF0100294u)

/** \brief 298, ARU Debug Access Channel 1 */
#define GTM_ARU_DBG_ACCESS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DBG_ACCESS1*)0xF0100298u)

/** \brief 29C, ARU Debug Access 1 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA1_H /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA1_H*)0xF010029Cu)

/** \brief 2A0, ARU Debug Access 1 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA1_L /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA1_L*)0xF01002A0u)

/** \brief 2A4, ARU Interrupt Notification Register */
#define GTM_ARU_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_IRQ_NOTIFY*)0xF01002A4u)

/** \brief 2A8, ARU Interrupt Enable Register */
#define GTM_ARU_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_IRQ_EN*)0xF01002A8u)

/** \brief 2AC, ARU Force Interrupt Register */
#define GTM_ARU_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_IRQ_FORCINT*)0xF01002ACu)

/** \brief 2B0, ARU Interrupt Mode Register */
#define GTM_ARU_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_IRQ_MODE*)0xF01002B0u)

/** \brief 2B4, ARU caddr Counter End Value Register */
#define GTM_ARU_CADDR_END /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_CADDR_END*)0xF01002B4u)

/** \brief 2BC, ARU Enable Dynamic Routing Register */
#define GTM_ARU_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_CTRL*)0xF01002BCu)

/** \brief 2C0, ARU 0 Dynamic Routing Control Register */
#define GTM_ARU_DYN_CTRL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_CTRL*)0xF01002C0u)
/** Alias (User Manual Name) for GTM_ARU_DYN_CTRL0.
* To use register names with standard convension, please use GTM_ARU_DYN_CTRL0.
*/
#define GTM_ARU_0_DYN_CTRL (GTM_ARU_DYN_CTRL0)

/** \brief 2C4, ARU 1 Dynamic Routing Control Register */
#define GTM_ARU_DYN_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_CTRL*)0xF01002C4u)
/** Alias (User Manual Name) for GTM_ARU_DYN_CTRL1.
* To use register names with standard convension, please use GTM_ARU_DYN_CTRL1.
*/
#define GTM_ARU_1_DYN_CTRL (GTM_ARU_DYN_CTRL1)

/** \brief 2C8, ARU 0 Lower Bits of DYN_ROUTE Register */
#define GTM_ARU_DYN_ROUTE_LOW0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_LOW*)0xF01002C8u)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_LOW0.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_LOW0.
*/
#define GTM_ARU_0_DYN_ROUTE_LOW (GTM_ARU_DYN_ROUTE_LOW0)

/** \brief 2CC, ARU 1 Lower Bits of DYN_ROUTE Register */
#define GTM_ARU_DYN_ROUTE_LOW1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_LOW*)0xF01002CCu)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_LOW1.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_LOW1.
*/
#define GTM_ARU_1_DYN_ROUTE_LOW (GTM_ARU_DYN_ROUTE_LOW1)

/** \brief 2D0, ARU 0 Higher Bits of DYN_ROUTE Register */
#define GTM_ARU_DYN_ROUTE_HIGH0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_HIGH*)0xF01002D0u)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_HIGH0.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_HIGH0.
*/
#define GTM_ARU_0_DYN_ROUTE_HIGH (GTM_ARU_DYN_ROUTE_HIGH0)

/** \brief 2D4, ARU 1 Higher Bits of DYN_ROUTE Register */
#define GTM_ARU_DYN_ROUTE_HIGH1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_HIGH*)0xF01002D4u)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_HIGH1.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_HIGH1.
*/
#define GTM_ARU_1_DYN_ROUTE_HIGH (GTM_ARU_DYN_ROUTE_HIGH1)

/** \brief 2D8, ARU 0 Shadow Register for ARU_0_DYN_ROUTE_LOW */
#define GTM_ARU_DYN_ROUTE_SR_LOW0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_SR_LOW*)0xF01002D8u)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_SR_LOW0.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_SR_LOW0.
*/
#define GTM_ARU_0_DYN_ROUTE_SR_LOW (GTM_ARU_DYN_ROUTE_SR_LOW0)

/** \brief 2DC, ARU 1 Shadow Register for ARU_1_DYN_ROUTE_LOW */
#define GTM_ARU_DYN_ROUTE_SR_LOW1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_SR_LOW*)0xF01002DCu)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_SR_LOW1.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_SR_LOW1.
*/
#define GTM_ARU_1_DYN_ROUTE_SR_LOW (GTM_ARU_DYN_ROUTE_SR_LOW1)

/** \brief 2E0, ARU 0 Shadow Register for ARU_0_DYN_ROUTE_HIGH */
#define GTM_ARU_DYN_ROUTE_SR_HIGH0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH*)0xF01002E0u)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_SR_HIGH0.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_SR_HIGH0.
*/
#define GTM_ARU_0_DYN_ROUTE_SR_HIGH (GTM_ARU_DYN_ROUTE_SR_HIGH0)

/** \brief 2E4, ARU 1 Shadow Register for ARU_1_DYN_ROUTE_HIGH */
#define GTM_ARU_DYN_ROUTE_SR_HIGH1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH*)0xF01002E4u)
/** Alias (User Manual Name) for GTM_ARU_DYN_ROUTE_SR_HIGH1.
* To use register names with standard convension, please use GTM_ARU_DYN_ROUTE_SR_HIGH1.
*/
#define GTM_ARU_1_DYN_ROUTE_SR_HIGH (GTM_ARU_DYN_ROUTE_SR_HIGH1)

/** \brief 2E8, ARU 0 Read ID for Dynamic Routing */
#define GTM_ARU_DYN_RDADDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_RDADDR*)0xF01002E8u)
/** Alias (User Manual Name) for GTM_ARU_DYN_RDADDR0.
* To use register names with standard convension, please use GTM_ARU_DYN_RDADDR0.
*/
#define GTM_ARU_0_DYN_RDADDR (GTM_ARU_DYN_RDADDR0)

/** \brief 2EC, ARU 1 Read ID for Dynamic Routing */
#define GTM_ARU_DYN_RDADDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_DYN_RDADDR*)0xF01002ECu)
/** Alias (User Manual Name) for GTM_ARU_DYN_RDADDR1.
* To use register names with standard convension, please use GTM_ARU_DYN_RDADDR1.
*/
#define GTM_ARU_1_DYN_RDADDR (GTM_ARU_DYN_RDADDR1)

/** \brief 2FC, ARU caddr Counter Value */
#define GTM_ARU_CADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ARU_CADDR*)0xF01002FCu)

/** \brief 300, CMU Clock Enable Register */
#define GTM_CMU_CLK_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK_EN*)0xF0100300u)

/** \brief 304, CMU Global Clock Control Numerator */
#define GTM_CMU_GCLK_NUM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_GCLK_NUM*)0xF0100304u)

/** \brief 308, CMU Global Clock Control Denominator */
#define GTM_CMU_GCLK_DEN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_GCLK_DEN*)0xF0100308u)

/** \brief 30C, CMU Control for Clock Source 0 */
#define GTM_CMU_CLK0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF010030Cu)
/** Alias (User Manual Name) for GTM_CMU_CLK0_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_CTRL.
*/
#define GTM_CMU_CLK_0_CTRL (GTM_CMU_CLK0_CTRL)

/** \brief 310, CMU Control for Clock Source 1 */
#define GTM_CMU_CLK1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF0100310u)
/** Alias (User Manual Name) for GTM_CMU_CLK1_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK1_CTRL.
*/
#define GTM_CMU_CLK_1_CTRL (GTM_CMU_CLK1_CTRL)

/** \brief 314, CMU Control for Clock Source 2 */
#define GTM_CMU_CLK2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF0100314u)
/** Alias (User Manual Name) for GTM_CMU_CLK2_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK2_CTRL.
*/
#define GTM_CMU_CLK_2_CTRL (GTM_CMU_CLK2_CTRL)

/** \brief 318, CMU Control for Clock Source 3 */
#define GTM_CMU_CLK3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF0100318u)
/** Alias (User Manual Name) for GTM_CMU_CLK3_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK3_CTRL.
*/
#define GTM_CMU_CLK_3_CTRL (GTM_CMU_CLK3_CTRL)

/** \brief 31C, CMU Control for Clock Source 4 */
#define GTM_CMU_CLK4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF010031Cu)
/** Alias (User Manual Name) for GTM_CMU_CLK4_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK4_CTRL.
*/
#define GTM_CMU_CLK_4_CTRL (GTM_CMU_CLK4_CTRL)

/** \brief 320, CMU Control for Clock Source 5 */
#define GTM_CMU_CLK5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF0100320u)
/** Alias (User Manual Name) for GTM_CMU_CLK5_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK5_CTRL.
*/
#define GTM_CMU_CLK_5_CTRL (GTM_CMU_CLK5_CTRL)

/** \brief 324, CMU Control for Clock Source 6 */
#define GTM_CMU_CLK6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF0100324u)
/** Alias (User Manual Name) for GTM_CMU_CLK6_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK6_CTRL.
*/
#define GTM_CMU_CLK_6_CTRL (GTM_CMU_CLK6_CTRL)

/** \brief 328, CMU Control for Clock Source 7 */
#define GTM_CMU_CLK7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK__CTRL*)0xF0100328u)
/** Alias (User Manual Name) for GTM_CMU_CLK7_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK7_CTRL.
*/
#define GTM_CMU_CLK_7_CTRL (GTM_CMU_CLK7_CTRL)

/** \brief 32C, CMU External Clock 0 Control Numerator */
#define GTM_CMU_ECLK0_NUM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF010032Cu)
/** Alias (User Manual Name) for GTM_CMU_ECLK0_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK0_NUM.
*/
#define GTM_CMU_ECLK_0_NUM (GTM_CMU_ECLK0_NUM)

/** \brief 330, CMU External Clock 0 Control Denominator */
#define GTM_CMU_ECLK0_DEN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100330u)
/** Alias (User Manual Name) for GTM_CMU_ECLK0_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK0_DEN.
*/
#define GTM_CMU_ECLK_0_DEN (GTM_CMU_ECLK0_DEN)

/** \brief 334, CMU External Clock 1 Control Numerator */
#define GTM_CMU_ECLK1_NUM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF0100334u)
/** Alias (User Manual Name) for GTM_CMU_ECLK1_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK1_NUM.
*/
#define GTM_CMU_ECLK_1_NUM (GTM_CMU_ECLK1_NUM)

/** \brief 338, CMU External Clock 1 Control Denominator */
#define GTM_CMU_ECLK1_DEN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100338u)
/** Alias (User Manual Name) for GTM_CMU_ECLK1_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK1_DEN.
*/
#define GTM_CMU_ECLK_1_DEN (GTM_CMU_ECLK1_DEN)

/** \brief 33C, CMU External Clock 2 Control Numerator */
#define GTM_CMU_ECLK2_NUM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF010033Cu)
/** Alias (User Manual Name) for GTM_CMU_ECLK2_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK2_NUM.
*/
#define GTM_CMU_ECLK_2_NUM (GTM_CMU_ECLK2_NUM)

/** \brief 340, CMU External Clock 2 Control Denominator */
#define GTM_CMU_ECLK2_DEN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100340u)
/** Alias (User Manual Name) for GTM_CMU_ECLK2_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK2_DEN.
*/
#define GTM_CMU_ECLK_2_DEN (GTM_CMU_ECLK2_DEN)

/** \brief 344, CMU Control FXCLK Sub-Unit Input Clock */
#define GTM_CMU_FXCLK_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_FXCLK_CTRL*)0xF0100344u)

/** \brief 348, CMU Synchronizing ARU and Clock Source */
#define GTM_CMU_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_GLB_CTRL*)0xF0100348u)

/** \brief 34C, CMU Control for Clock Source Selection */
#define GTM_CMU_CLK_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CMU_CLK_CTRL*)0xF010034Cu)

/** \brief 400, BRC Read Address for Input Channel 0 */
#define GTM_BRC_SRC0_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100400u)
/** Alias (User Manual Name) for GTM_BRC_SRC0_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC0_ADDR.
*/
#define GTM_BRC_SRC_0_ADDR (GTM_BRC_SRC0_ADDR)

/** \brief 404, BRC Destination Channels for Input Channel 0 */
#define GTM_BRC_SRC0_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100404u)
/** Alias (User Manual Name) for GTM_BRC_SRC0_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC0_DEST.
*/
#define GTM_BRC_SRC_0_DEST (GTM_BRC_SRC0_DEST)

/** \brief 408, BRC Read Address for Input Channel 1 */
#define GTM_BRC_SRC1_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100408u)
/** Alias (User Manual Name) for GTM_BRC_SRC1_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC1_ADDR.
*/
#define GTM_BRC_SRC_1_ADDR (GTM_BRC_SRC1_ADDR)

/** \brief 40C, BRC Destination Channels for Input Channel 1 */
#define GTM_BRC_SRC1_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010040Cu)
/** Alias (User Manual Name) for GTM_BRC_SRC1_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC1_DEST.
*/
#define GTM_BRC_SRC_1_DEST (GTM_BRC_SRC1_DEST)

/** \brief 410, BRC Read Address for Input Channel 2 */
#define GTM_BRC_SRC2_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100410u)
/** Alias (User Manual Name) for GTM_BRC_SRC2_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC2_ADDR.
*/
#define GTM_BRC_SRC_2_ADDR (GTM_BRC_SRC2_ADDR)

/** \brief 414, BRC Destination Channels for Input Channel 2 */
#define GTM_BRC_SRC2_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100414u)
/** Alias (User Manual Name) for GTM_BRC_SRC2_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC2_DEST.
*/
#define GTM_BRC_SRC_2_DEST (GTM_BRC_SRC2_DEST)

/** \brief 418, BRC Read Address for Input Channel 3 */
#define GTM_BRC_SRC3_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100418u)
/** Alias (User Manual Name) for GTM_BRC_SRC3_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC3_ADDR.
*/
#define GTM_BRC_SRC_3_ADDR (GTM_BRC_SRC3_ADDR)

/** \brief 41C, BRC Destination Channels for Input Channel 3 */
#define GTM_BRC_SRC3_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010041Cu)
/** Alias (User Manual Name) for GTM_BRC_SRC3_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC3_DEST.
*/
#define GTM_BRC_SRC_3_DEST (GTM_BRC_SRC3_DEST)

/** \brief 420, BRC Read Address for Input Channel 4 */
#define GTM_BRC_SRC4_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100420u)
/** Alias (User Manual Name) for GTM_BRC_SRC4_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC4_ADDR.
*/
#define GTM_BRC_SRC_4_ADDR (GTM_BRC_SRC4_ADDR)

/** \brief 424, BRC Destination Channels for Input Channel 4 */
#define GTM_BRC_SRC4_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100424u)
/** Alias (User Manual Name) for GTM_BRC_SRC4_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC4_DEST.
*/
#define GTM_BRC_SRC_4_DEST (GTM_BRC_SRC4_DEST)

/** \brief 428, BRC Read Address for Input Channel 5 */
#define GTM_BRC_SRC5_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100428u)
/** Alias (User Manual Name) for GTM_BRC_SRC5_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC5_ADDR.
*/
#define GTM_BRC_SRC_5_ADDR (GTM_BRC_SRC5_ADDR)

/** \brief 42C, BRC Destination Channels for Input Channel 5 */
#define GTM_BRC_SRC5_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010042Cu)
/** Alias (User Manual Name) for GTM_BRC_SRC5_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC5_DEST.
*/
#define GTM_BRC_SRC_5_DEST (GTM_BRC_SRC5_DEST)

/** \brief 430, BRC Read Address for Input Channel 6 */
#define GTM_BRC_SRC6_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100430u)
/** Alias (User Manual Name) for GTM_BRC_SRC6_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC6_ADDR.
*/
#define GTM_BRC_SRC_6_ADDR (GTM_BRC_SRC6_ADDR)

/** \brief 434, BRC Destination Channels for Input Channel 6 */
#define GTM_BRC_SRC6_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100434u)
/** Alias (User Manual Name) for GTM_BRC_SRC6_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC6_DEST.
*/
#define GTM_BRC_SRC_6_DEST (GTM_BRC_SRC6_DEST)

/** \brief 438, BRC Read Address for Input Channel 7 */
#define GTM_BRC_SRC7_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100438u)
/** Alias (User Manual Name) for GTM_BRC_SRC7_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC7_ADDR.
*/
#define GTM_BRC_SRC_7_ADDR (GTM_BRC_SRC7_ADDR)

/** \brief 43C, BRC Destination Channels for Input Channel 7 */
#define GTM_BRC_SRC7_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010043Cu)
/** Alias (User Manual Name) for GTM_BRC_SRC7_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC7_DEST.
*/
#define GTM_BRC_SRC_7_DEST (GTM_BRC_SRC7_DEST)

/** \brief 440, BRC Read Address for Input Channel 8 */
#define GTM_BRC_SRC8_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100440u)
/** Alias (User Manual Name) for GTM_BRC_SRC8_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC8_ADDR.
*/
#define GTM_BRC_SRC_8_ADDR (GTM_BRC_SRC8_ADDR)

/** \brief 444, BRC Destination Channels for Input Channel 8 */
#define GTM_BRC_SRC8_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100444u)
/** Alias (User Manual Name) for GTM_BRC_SRC8_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC8_DEST.
*/
#define GTM_BRC_SRC_8_DEST (GTM_BRC_SRC8_DEST)

/** \brief 448, BRC Read Address for Input Channel 9 */
#define GTM_BRC_SRC9_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100448u)
/** Alias (User Manual Name) for GTM_BRC_SRC9_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC9_ADDR.
*/
#define GTM_BRC_SRC_9_ADDR (GTM_BRC_SRC9_ADDR)

/** \brief 44C, BRC Destination Channels for Input Channel 9 */
#define GTM_BRC_SRC9_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010044Cu)
/** Alias (User Manual Name) for GTM_BRC_SRC9_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC9_DEST.
*/
#define GTM_BRC_SRC_9_DEST (GTM_BRC_SRC9_DEST)

/** \brief 450, BRC Read Address for Input Channel 10 */
#define GTM_BRC_SRC10_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100450u)
/** Alias (User Manual Name) for GTM_BRC_SRC10_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC10_ADDR.
*/
#define GTM_BRC_SRC_10_ADDR (GTM_BRC_SRC10_ADDR)

/** \brief 454, BRC Destination Channels for Input Channel 10 */
#define GTM_BRC_SRC10_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF0100454u)
/** Alias (User Manual Name) for GTM_BRC_SRC10_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC10_DEST.
*/
#define GTM_BRC_SRC_10_DEST (GTM_BRC_SRC10_DEST)

/** \brief 458, BRC Read Address for Input Channel 11 */
#define GTM_BRC_SRC11_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_ADDR*)0xF0100458u)
/** Alias (User Manual Name) for GTM_BRC_SRC11_ADDR.
* To use register names with standard convension, please use GTM_BRC_SRC11_ADDR.
*/
#define GTM_BRC_SRC_11_ADDR (GTM_BRC_SRC11_ADDR)

/** \brief 45C, BRC Destination Channels for Input Channel 11 */
#define GTM_BRC_SRC11_DEST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_SRC_DEST*)0xF010045Cu)
/** Alias (User Manual Name) for GTM_BRC_SRC11_DEST.
* To use register names with standard convension, please use GTM_BRC_SRC11_DEST.
*/
#define GTM_BRC_SRC_11_DEST (GTM_BRC_SRC11_DEST)

/** \brief 460, BRC Interrupt Notification Register */
#define GTM_BRC_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_IRQ_NOTIFY*)0xF0100460u)

/** \brief 464, BRC Interrupt Enable Register */
#define GTM_BRC_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_IRQ_EN*)0xF0100464u)

/** \brief 468, BRC Force Interrupt Register */
#define GTM_BRC_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_IRQ_FORCINT*)0xF0100468u)

/** \brief 46C, BRC Interrupt Mode Configuration Register */
#define GTM_BRC_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_IRQ_MODE*)0xF010046Cu)

/** \brief 470, BRC Software Reset Register */
#define GTM_BRC_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_RST*)0xF0100470u)

/** \brief 474, BRC Error Interrupt Enable Register */
#define GTM_BRC_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_BRC_EIRQ_EN*)0xF0100474u)

/** \brief 600, ICM Interrupt Group Register Covering Infrastructural and Safety Components ARU, BRC, AEI, PSM0, PSM1, MAP, CMP, SPE */
#define GTM_ICM_IRQG_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R0*)0xF0100600u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R0.
* To use register names with standard convension, please use GTM_ICM_IRQG_R0.
*/
#define GTM_ICM_IRQG_0 (GTM_ICM_IRQG_R0)

/** \brief 604, ICM Interrupt Group Register Covering DPLL */
#define GTM_ICM_IRQG_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R1*)0xF0100604u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R1.
* To use register names with standard convension, please use GTM_ICM_IRQG_R1.
*/
#define GTM_ICM_IRQG_1 (GTM_ICM_IRQG_R1)

/** \brief 608, ICM Interrupt Group Register Covering TIM0, TIM1, TIM2, TIM3 */
#define GTM_ICM_IRQG_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R2*)0xF0100608u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R2.
* To use register names with standard convension, please use GTM_ICM_IRQG_R2.
*/
#define GTM_ICM_IRQG_2 (GTM_ICM_IRQG_R2)

/** \brief 60C, ICM Interrupt Group Register Covering TIM4, TIM5, TIM6, TIM7 */
#define GTM_ICM_IRQG_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R3*)0xF010060Cu)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R3.
* To use register names with standard convension, please use GTM_ICM_IRQG_R3.
*/
#define GTM_ICM_IRQG_3 (GTM_ICM_IRQG_R3)

/** \brief 610, ICM Interrupt Group Register Covering MCS0 to MCS3 Sub-Modules */
#define GTM_ICM_IRQG_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R4*)0xF0100610u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R4.
* To use register names with standard convension, please use GTM_ICM_IRQG_R4.
*/
#define GTM_ICM_IRQG_4 (GTM_ICM_IRQG_R4)

/** \brief 614, ICM Interrupt Group Register Covering MCS4 to MCS6 Sub-Modules */
#define GTM_ICM_IRQG_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R5*)0xF0100614u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R5.
* To use register names with standard convension, please use GTM_ICM_IRQG_R5.
*/
#define GTM_ICM_IRQG_5 (GTM_ICM_IRQG_R5)

/** \brief 618, ICM Interrupt Group Register Covering GTM Output Sub-Modules TOM0 to TOM1 */
#define GTM_ICM_IRQG_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R6*)0xF0100618u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R6.
* To use register names with standard convension, please use GTM_ICM_IRQG_R6.
*/
#define GTM_ICM_IRQG_6 (GTM_ICM_IRQG_R6)

/** \brief 61C, ICM Interrupt Group Register Covering GTM Output Sub-Modules TOM2 to TOM3 */
#define GTM_ICM_IRQG_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R7*)0xF010061Cu)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R7.
* To use register names with standard convension, please use GTM_ICM_IRQG_R7.
*/
#define GTM_ICM_IRQG_7 (GTM_ICM_IRQG_R7)

/** \brief 624, ICM Interrupt Group Register Covering GTM Output Sub-Modules ATOM0, ATOM1, ATOM2 and ATOM3 */
#define GTM_ICM_IRQG_R9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R9*)0xF0100624u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R9.
* To use register names with standard convension, please use GTM_ICM_IRQG_R9.
*/
#define GTM_ICM_IRQG_9 (GTM_ICM_IRQG_R9)

/** \brief 628, ICM Interrupt Group Register Covering GTM Output Sub-Modules ATOM4 to ATOM7 */
#define GTM_ICM_IRQG_R10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_R10*)0xF0100628u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_R10.
* To use register names with standard convension, please use GTM_ICM_IRQG_R10.
*/
#define GTM_ICM_IRQG_10 (GTM_ICM_IRQG_R10)

/** \brief 630, ICM Interrupt Group Register for Module Error Interrupt Information */
#define GTM_ICM_IRQG_MEI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_MEI*)0xF0100630u)

/** \brief 634, ICM Interrupt Group Register 0 for Channel Error Interrupt Information */
#define GTM_ICM_IRQG_CEI0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI0*)0xF0100634u)

/** \brief 638, ICM Interrupt Group Register 1 for Channel Error Interrupt Information */
#define GTM_ICM_IRQG_CEI1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI1*)0xF0100638u)

/** \brief 63C, ICM Interrupt Group Register 2 for Channel Error Interrupt Information */
#define GTM_ICM_IRQG_CEI2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI2*)0xF010063Cu)

/** \brief 640, ICM Interrupt Group Register 3 for Channel Error Interrupt Information */
#define GTM_ICM_IRQG_CEI3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI3*)0xF0100640u)

/** \brief 644, ICM Interrupt Group Register 4 for Channel Error Interrupt Information */
#define GTM_ICM_IRQG_CEI4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI4*)0xF0100644u)

/** \brief 664, ICM Interrupt Group MCS 0 for Channel Error Interrupt information */
#define GTM_ICM_IRQG_CEI_MCS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI_MCS*)0xF0100664u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CEI_MCS0.
* To use register names with standard convension, please use GTM_ICM_IRQG_CEI_MCS0.
*/
#define GTM_ICM_IRQG_MCS0_CEI (GTM_ICM_IRQG_CEI_MCS0)

/** \brief 668, ICM Interrupt Group MCS 1 for Channel Error Interrupt information */
#define GTM_ICM_IRQG_CEI_MCS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI_MCS*)0xF0100668u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CEI_MCS1.
* To use register names with standard convension, please use GTM_ICM_IRQG_CEI_MCS1.
*/
#define GTM_ICM_IRQG_MCS1_CEI (GTM_ICM_IRQG_CEI_MCS1)

/** \brief 66C, ICM Interrupt Group MCS 2 for Channel Error Interrupt information */
#define GTM_ICM_IRQG_CEI_MCS2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI_MCS*)0xF010066Cu)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CEI_MCS2.
* To use register names with standard convension, please use GTM_ICM_IRQG_CEI_MCS2.
*/
#define GTM_ICM_IRQG_MCS2_CEI (GTM_ICM_IRQG_CEI_MCS2)

/** \brief 670, ICM Interrupt Group MCS 3 for Channel Error Interrupt information */
#define GTM_ICM_IRQG_CEI_MCS3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI_MCS*)0xF0100670u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CEI_MCS3.
* To use register names with standard convension, please use GTM_ICM_IRQG_CEI_MCS3.
*/
#define GTM_ICM_IRQG_MCS3_CEI (GTM_ICM_IRQG_CEI_MCS3)

/** \brief 674, ICM Interrupt Group MCS 4 for Channel Error Interrupt information */
#define GTM_ICM_IRQG_CEI_MCS4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI_MCS*)0xF0100674u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CEI_MCS4.
* To use register names with standard convension, please use GTM_ICM_IRQG_CEI_MCS4.
*/
#define GTM_ICM_IRQG_MCS4_CEI (GTM_ICM_IRQG_CEI_MCS4)

/** \brief 6A4, ICM Interrupt Group PSM 0 for Channel Error Interrupt information of FIFO0, FIFO1, FIFO2 */
#define GTM_ICM_IRQG_CEI_PSM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI_PSM*)0xF01006A4u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CEI_PSM0.
* To use register names with standard convension, please use GTM_ICM_IRQG_CEI_PSM0.
*/
#define GTM_ICM_IRQG_PSM_0_CEI (GTM_ICM_IRQG_CEI_PSM0)

/** \brief 6B4, ICM Interrupt Group SPE for Module Error Interrupt Information */
#define GTM_ICM_IRQG_CEI_SPE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI_SPE*)0xF01006B4u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CEI_SPE.
* To use register names with standard convension, please use GTM_ICM_IRQG_CEI_SPE.
*/
#define GTM_ICM_IRQG_SPE_CEI (GTM_ICM_IRQG_CEI_SPE)

/** \brief 710, ICM Interrupt Group for Module Error Interrupt Information for each TIMm, MCSm, SPEm, FIFOm */
#define GTM_ICM_IRQG_MEI_CLS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_MEI_CLS*)0xF0100710u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_MEI_CLS0.
* To use register names with standard convension, please use GTM_ICM_IRQG_MEI_CLS0.
*/
#define GTM_ICM_IRQG_CLS_0_MEI (GTM_ICM_IRQG_MEI_CLS0)

/** \brief 714, ICM Interrupt Group for Module Error Interrupt Information for each TIMm, MCSm, SPEm, FIFOm */
#define GTM_ICM_IRQG_MEI_CLS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_MEI_CLS*)0xF0100714u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_MEI_CLS1.
* To use register names with standard convension, please use GTM_ICM_IRQG_MEI_CLS1.
*/
#define GTM_ICM_IRQG_CLS_1_MEI (GTM_ICM_IRQG_MEI_CLS1)

/** \brief 720, ICM Interrupt Group MCS 0 for Channel Interrupt Information */
#define GTM_ICM_IRQG_CI_MCS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_MCS*)0xF0100720u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_MCS0.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_MCS0.
*/
#define GTM_ICM_IRQG_MCS0_CI (GTM_ICM_IRQG_CI_MCS0)

/** \brief 724, ICM Interrupt Group MCS 1 for Channel Interrupt Information */
#define GTM_ICM_IRQG_CI_MCS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_MCS*)0xF0100724u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_MCS1.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_MCS1.
*/
#define GTM_ICM_IRQG_MCS1_CI (GTM_ICM_IRQG_CI_MCS1)

/** \brief 728, ICM Interrupt Group MCS 2 for Channel Interrupt Information */
#define GTM_ICM_IRQG_CI_MCS2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_MCS*)0xF0100728u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_MCS2.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_MCS2.
*/
#define GTM_ICM_IRQG_MCS2_CI (GTM_ICM_IRQG_CI_MCS2)

/** \brief 72C, ICM Interrupt Group MCS 3 for Channel Interrupt Information */
#define GTM_ICM_IRQG_CI_MCS3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_MCS*)0xF010072Cu)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_MCS3.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_MCS3.
*/
#define GTM_ICM_IRQG_MCS3_CI (GTM_ICM_IRQG_CI_MCS3)

/** \brief 730, ICM Interrupt Group MCS 4 for Channel Interrupt Information */
#define GTM_ICM_IRQG_CI_MCS4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_MCS*)0xF0100730u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_MCS4.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_MCS4.
*/
#define GTM_ICM_IRQG_MCS4_CI (GTM_ICM_IRQG_CI_MCS4)

/** \brief 760, ICM Interrupt Group PSM 0 for Channel Interrupt Information of FIFO0, FIFO1, FIFO2 */
#define GTM_ICM_IRQG_CI_PSM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_PSM*)0xF0100760u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_PSM0.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_PSM0.
*/
#define GTM_ICM_IRQG_PSM_0_CI (GTM_ICM_IRQG_CI_PSM0)

/** \brief 770, ICM Interrupt Group SPE for Module Interrupt Information */
#define GTM_ICM_IRQG_CI_SPE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_SPE*)0xF0100770u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_SPE.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_SPE.
*/
#define GTM_ICM_IRQG_SPE_CI (GTM_ICM_IRQG_CI_SPE)

/** \brief 790, ICM Interrupt Group ATOM 0 for Channel Interrupt Information of ATOMm */
#define GTM_ICM_IRQG_CI_ATOM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_ATOM*)0xF0100790u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_ATOM0.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_ATOM0.
*/
#define GTM_ICM_IRQG_ATOM_0_CI (GTM_ICM_IRQG_CI_ATOM0)

/** \brief 794, ICM Interrupt Group ATOM 1 for Channel Interrupt Information of ATOMm */
#define GTM_ICM_IRQG_CI_ATOM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_ATOM*)0xF0100794u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_ATOM1.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_ATOM1.
*/
#define GTM_ICM_IRQG_ATOM_1_CI (GTM_ICM_IRQG_CI_ATOM1)

/** \brief 7A0, ICM Interrupt Group TOM 0 for Channel Interrupt Information of TOMm */
#define GTM_ICM_IRQG_CI_TOM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_TOM*)0xF01007A0u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_TOM0.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_TOM0.
*/
#define GTM_ICM_IRQG_TOM_0_CI (GTM_ICM_IRQG_CI_TOM0)

/** \brief 7A4, ICM Interrupt Group TOM 1 for Channel Interrupt Information of TOMm */
#define GTM_ICM_IRQG_CI_TOM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ICM_IRQG_CI_TOM*)0xF01007A4u)
/** Alias (User Manual Name) for GTM_ICM_IRQG_CI_TOM1.
* To use register names with standard convension, please use GTM_ICM_IRQG_CI_TOM1.
*/
#define GTM_ICM_IRQG_TOM_1_CI (GTM_ICM_IRQG_CI_TOM1)

/** \brief 800, SPE0 Control Status Register */
#define GTM_SPE0_CTRL_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100800u)

/** \brief 804, SPE0 Input Pattern Definition Register */
#define GTM_SPE0_PAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100804u)

/** \brief 808, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100808u)

/** \brief 80C, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010080Cu)

/** \brief 810, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100810u)

/** \brief 814, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100814u)

/** \brief 818, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100818u)

/** \brief 81C, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010081Cu)

/** \brief 820, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100820u)

/** \brief 824, SPE0 Output Definition Register z */
#define GTM_SPE0_OUT_PAT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100824u)

/** \brief 828, SPE0 Output Control Register */
#define GTM_SPE0_OUT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF0100828u)

/** \brief 82C, SPE0 Interrupt Notification Register */
#define GTM_SPE0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF010082Cu)

/** \brief 830, SPE0 Interrupt Enable Register */
#define GTM_SPE0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF0100830u)

/** \brief 834, SPE0 Interrupt Generation by Software */
#define GTM_SPE0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF0100834u)

/** \brief 838, SPE0 Interrupt Mode Configuration Register */
#define GTM_SPE0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF0100838u)

/** \brief 83C, SPE0 Error Interrupt Enable Register */
#define GTM_SPE0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_EIRQ_EN*)0xF010083Cu)

/** \brief 840, SPE0 Input Revolution Counter */
#define GTM_SPE0_REV_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_REV_CNT*)0xF0100840u)

/** \brief 844, SPE0 Revolution Counter Compare Value */
#define GTM_SPE0_REV_CMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_REV_CMP*)0xF0100844u)

/** \brief 848, SPE0 Control Status Register 2 */
#define GTM_SPE0_CTRL_STAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT2*)0xF0100848u)

/** \brief 84C, SPE0 Command register */
#define GTM_SPE0_CMD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_CMD*)0xF010084Cu)

/** \brief 880, SPE1 Control Status Register */
#define GTM_SPE1_CTRL_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100880u)

/** \brief 884, SPE1 Input Pattern Definition Register */
#define GTM_SPE1_PAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100884u)

/** \brief 888, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100888u)

/** \brief 88C, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010088Cu)

/** \brief 890, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100890u)

/** \brief 894, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100894u)

/** \brief 898, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100898u)

/** \brief 89C, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010089Cu)

/** \brief 8A0, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A0u)

/** \brief 8A4, SPE1 Output Definition Register z */
#define GTM_SPE1_OUT_PAT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A4u)

/** \brief 8A8, SPE1 Output Control Register */
#define GTM_SPE1_OUT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF01008A8u)

/** \brief 8AC, SPE1 Interrupt Notification Register */
#define GTM_SPE1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF01008ACu)

/** \brief 8B0, SPE1 Interrupt Enable Register */
#define GTM_SPE1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF01008B0u)

/** \brief 8B4, SPE1 Interrupt Generation by Software */
#define GTM_SPE1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF01008B4u)

/** \brief 8B8, SPE1 Interrupt Mode Configuration Register */
#define GTM_SPE1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF01008B8u)

/** \brief 8BC, SPE1 Error Interrupt Enable Register */
#define GTM_SPE1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_EIRQ_EN*)0xF01008BCu)

/** \brief 8C0, SPE1 Input Revolution Counter */
#define GTM_SPE1_REV_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_REV_CNT*)0xF01008C0u)

/** \brief 8C4, SPE1 Revolution Counter Compare Value */
#define GTM_SPE1_REV_CMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_REV_CMP*)0xF01008C4u)

/** \brief 8C8, SPE1 Control Status Register 2 */
#define GTM_SPE1_CTRL_STAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT2*)0xF01008C8u)

/** \brief 8CC, SPE1 Command register */
#define GTM_SPE1_CMD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_SPE_CMD*)0xF01008CCu)

/** \brief F00, MAP Control Register */
#define GTM_MAP_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MAP_CTRL*)0xF0100F00u)

/** \brief F40, MCFG Memory Layout Configuration Register */
#define GTM_MCFG_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCFG_CTRL*)0xF0100F40u)

/** \brief 1000, TIM0 Channel 0 General Purpose 0 Register */
#define GTM_TIM0_CH0_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101000u)

/** \brief 1004, TIM0 Channel 0 General Purpose 1 Register */
#define GTM_TIM0_CH0_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101004u)

/** \brief 1008, TIM0 Channel 0 SMU Counter Register */
#define GTM_TIM0_CH0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101008u)

/** \brief 100C, TIM0 Channel 0 SMU Edge Counter Register */
#define GTM_TIM0_CH0_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010100Cu)

/** \brief 1010, TIM0 Channel 0 SMU Shadow Counter Register */
#define GTM_TIM0_CH0_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101010u)

/** \brief 1014, TIM0 Channel 0 TDU Counter Register */
#define GTM_TIM0_CH0_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101014u)

/** \brief 1018, TIM0 Channel 0 TDU Control Register */
#define GTM_TIM0_CH0_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101018u)

/** \brief 101C, TIM0 Channel 0 Filter Parameter 0 Register */
#define GTM_TIM0_CH0_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010101Cu)

/** \brief 1020, TIM0 Channel 0 Filter Parameter 1 Register */
#define GTM_TIM0_CH0_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101020u)

/** \brief 1024, TIM0 Channel 0 Control Register */
#define GTM_TIM0_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101024u)

/** \brief 1028, TIM0 Channel 0 Extended Control Register */
#define GTM_TIM0_CH0_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101028u)

/** \brief 102C, TIM0 Channel 0 Interrupt Notification Register */
#define GTM_TIM0_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010102Cu)

/** \brief 1030, TIM0 Channel 0 Interrupt Enable Register */
#define GTM_TIM0_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101030u)

/** \brief 1034, TIM0 Channel 0 Force Interrupt Register */
#define GTM_TIM0_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101034u)

/** \brief 1038, TIM0 Channel 0 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101038u)

/** \brief 103C, TIM0 Channel 0 Error Interrupt Enable Register */
#define GTM_TIM0_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010103Cu)

/** \brief 1074, TIM0 Input Value Observation Register */
#define GTM_TIM0_INP_VAL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_INP_VAL*)0xF0101074u)

/** \brief 1078, TIM0 AUX IN Source Selection Register */
#define GTM_TIM0_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0101078u)

/** \brief 107C, TIM0 Global Software Reset Register */
#define GTM_TIM0_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010107Cu)

/** \brief 1080, TIM0 Channel 1 General Purpose 0 Register */
#define GTM_TIM0_CH1_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101080u)

/** \brief 1084, TIM0 Channel 1 General Purpose 1 Register */
#define GTM_TIM0_CH1_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101084u)

/** \brief 1088, TIM0 Channel 1 SMU Counter Register */
#define GTM_TIM0_CH1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101088u)

/** \brief 108C, TIM0 Channel 1 SMU Edge Counter Register */
#define GTM_TIM0_CH1_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010108Cu)

/** \brief 1090, TIM0 Channel 1 SMU Shadow Counter Register */
#define GTM_TIM0_CH1_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101090u)

/** \brief 1094, TIM0 Channel 1 TDU Counter Register */
#define GTM_TIM0_CH1_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101094u)

/** \brief 1098, TIM0 Channel 1 TDU Control Register */
#define GTM_TIM0_CH1_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101098u)

/** \brief 109C, TIM0 Channel 1 Filter Parameter 0 Register */
#define GTM_TIM0_CH1_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010109Cu)

/** \brief 10A0, TIM0 Channel 1 Filter Parameter 1 Register */
#define GTM_TIM0_CH1_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01010A0u)

/** \brief 10A4, TIM0 Channel 1 Control Register */
#define GTM_TIM0_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01010A4u)

/** \brief 10A8, TIM0 Channel 1 Extended Control Register */
#define GTM_TIM0_CH1_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01010A8u)

/** \brief 10AC, TIM0 Channel 1 Interrupt Notification Register */
#define GTM_TIM0_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01010ACu)

/** \brief 10B0, TIM0 Channel 1 Interrupt Enable Register */
#define GTM_TIM0_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01010B0u)

/** \brief 10B4, TIM0 Channel 1 Force Interrupt Register */
#define GTM_TIM0_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01010B4u)

/** \brief 10B8, TIM0 Channel 1 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01010B8u)

/** \brief 10BC, TIM0 Channel 1 Error Interrupt Enable Register */
#define GTM_TIM0_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01010BCu)

/** \brief 1100, TIM0 Channel 2 General Purpose 0 Register */
#define GTM_TIM0_CH2_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101100u)

/** \brief 1104, TIM0 Channel 2 General Purpose 1 Register */
#define GTM_TIM0_CH2_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101104u)

/** \brief 1108, TIM0 Channel 2 SMU Counter Register */
#define GTM_TIM0_CH2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101108u)

/** \brief 110C, TIM0 Channel 2 SMU Edge Counter Register */
#define GTM_TIM0_CH2_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010110Cu)

/** \brief 1110, TIM0 Channel 2 SMU Shadow Counter Register */
#define GTM_TIM0_CH2_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101110u)

/** \brief 1114, TIM0 Channel 2 TDU Counter Register */
#define GTM_TIM0_CH2_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101114u)

/** \brief 1118, TIM0 Channel 2 TDU Control Register */
#define GTM_TIM0_CH2_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101118u)

/** \brief 111C, TIM0 Channel 2 Filter Parameter 0 Register */
#define GTM_TIM0_CH2_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010111Cu)

/** \brief 1120, TIM0 Channel 2 Filter Parameter 1 Register */
#define GTM_TIM0_CH2_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101120u)

/** \brief 1124, TIM0 Channel 2 Control Register */
#define GTM_TIM0_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101124u)

/** \brief 1128, TIM0 Channel 2 Extended Control Register */
#define GTM_TIM0_CH2_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101128u)

/** \brief 112C, TIM0 Channel 2 Interrupt Notification Register */
#define GTM_TIM0_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010112Cu)

/** \brief 1130, TIM0 Channel 2 Interrupt Enable Register */
#define GTM_TIM0_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101130u)

/** \brief 1134, TIM0 Channel 2 Force Interrupt Register */
#define GTM_TIM0_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101134u)

/** \brief 1138, TIM0 Channel 2 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101138u)

/** \brief 113C, TIM0 Channel 2 Error Interrupt Enable Register */
#define GTM_TIM0_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010113Cu)

/** \brief 1180, TIM0 Channel 3 General Purpose 0 Register */
#define GTM_TIM0_CH3_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101180u)

/** \brief 1184, TIM0 Channel 3 General Purpose 1 Register */
#define GTM_TIM0_CH3_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101184u)

/** \brief 1188, TIM0 Channel 3 SMU Counter Register */
#define GTM_TIM0_CH3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101188u)

/** \brief 118C, TIM0 Channel 3 SMU Edge Counter Register */
#define GTM_TIM0_CH3_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010118Cu)

/** \brief 1190, TIM0 Channel 3 SMU Shadow Counter Register */
#define GTM_TIM0_CH3_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101190u)

/** \brief 1194, TIM0 Channel 3 TDU Counter Register */
#define GTM_TIM0_CH3_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101194u)

/** \brief 1198, TIM0 Channel 3 TDU Control Register */
#define GTM_TIM0_CH3_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101198u)

/** \brief 119C, TIM0 Channel 3 Filter Parameter 0 Register */
#define GTM_TIM0_CH3_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010119Cu)

/** \brief 11A0, TIM0 Channel 3 Filter Parameter 1 Register */
#define GTM_TIM0_CH3_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01011A0u)

/** \brief 11A4, TIM0 Channel 3 Control Register */
#define GTM_TIM0_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01011A4u)

/** \brief 11A8, TIM0 Channel 3 Extended Control Register */
#define GTM_TIM0_CH3_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01011A8u)

/** \brief 11AC, TIM0 Channel 3 Interrupt Notification Register */
#define GTM_TIM0_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01011ACu)

/** \brief 11B0, TIM0 Channel 3 Interrupt Enable Register */
#define GTM_TIM0_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01011B0u)

/** \brief 11B4, TIM0 Channel 3 Force Interrupt Register */
#define GTM_TIM0_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01011B4u)

/** \brief 11B8, TIM0 Channel 3 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01011B8u)

/** \brief 11BC, TIM0 Channel 3 Error Interrupt Enable Register */
#define GTM_TIM0_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01011BCu)

/** \brief 1200, TIM0 Channel 4 General Purpose 0 Register */
#define GTM_TIM0_CH4_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101200u)

/** \brief 1204, TIM0 Channel 4 General Purpose 1 Register */
#define GTM_TIM0_CH4_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101204u)

/** \brief 1208, TIM0 Channel 4 SMU Counter Register */
#define GTM_TIM0_CH4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101208u)

/** \brief 120C, TIM0 Channel 4 SMU Edge Counter Register */
#define GTM_TIM0_CH4_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010120Cu)

/** \brief 1210, TIM0 Channel 4 SMU Shadow Counter Register */
#define GTM_TIM0_CH4_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101210u)

/** \brief 1214, TIM0 Channel 4 TDU Counter Register */
#define GTM_TIM0_CH4_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101214u)

/** \brief 1218, TIM0 Channel 4 TDU Control Register */
#define GTM_TIM0_CH4_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101218u)

/** \brief 121C, TIM0 Channel 4 Filter Parameter 0 Register */
#define GTM_TIM0_CH4_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010121Cu)

/** \brief 1220, TIM0 Channel 4 Filter Parameter 1 Register */
#define GTM_TIM0_CH4_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101220u)

/** \brief 1224, TIM0 Channel 4 Control Register */
#define GTM_TIM0_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101224u)

/** \brief 1228, TIM0 Channel 4 Extended Control Register */
#define GTM_TIM0_CH4_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101228u)

/** \brief 122C, TIM0 Channel 4 Interrupt Notification Register */
#define GTM_TIM0_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010122Cu)

/** \brief 1230, TIM0 Channel 4 Interrupt Enable Register */
#define GTM_TIM0_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101230u)

/** \brief 1234, TIM0 Channel 4 Force Interrupt Register */
#define GTM_TIM0_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101234u)

/** \brief 1238, TIM0 Channel 4 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101238u)

/** \brief 123C, TIM0 Channel 4 Error Interrupt Enable Register */
#define GTM_TIM0_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010123Cu)

/** \brief 1280, TIM0 Channel 5 General Purpose 0 Register */
#define GTM_TIM0_CH5_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101280u)

/** \brief 1284, TIM0 Channel 5 General Purpose 1 Register */
#define GTM_TIM0_CH5_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101284u)

/** \brief 1288, TIM0 Channel 5 SMU Counter Register */
#define GTM_TIM0_CH5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101288u)

/** \brief 128C, TIM0 Channel 5 SMU Edge Counter Register */
#define GTM_TIM0_CH5_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010128Cu)

/** \brief 1290, TIM0 Channel 5 SMU Shadow Counter Register */
#define GTM_TIM0_CH5_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101290u)

/** \brief 1294, TIM0 Channel 5 TDU Counter Register */
#define GTM_TIM0_CH5_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101294u)

/** \brief 1298, TIM0 Channel 5 TDU Control Register */
#define GTM_TIM0_CH5_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101298u)

/** \brief 129C, TIM0 Channel 5 Filter Parameter 0 Register */
#define GTM_TIM0_CH5_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010129Cu)

/** \brief 12A0, TIM0 Channel 5 Filter Parameter 1 Register */
#define GTM_TIM0_CH5_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01012A0u)

/** \brief 12A4, TIM0 Channel 5 Control Register */
#define GTM_TIM0_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01012A4u)

/** \brief 12A8, TIM0 Channel 5 Extended Control Register */
#define GTM_TIM0_CH5_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01012A8u)

/** \brief 12AC, TIM0 Channel 5 Interrupt Notification Register */
#define GTM_TIM0_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01012ACu)

/** \brief 12B0, TIM0 Channel 5 Interrupt Enable Register */
#define GTM_TIM0_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01012B0u)

/** \brief 12B4, TIM0 Channel 5 Force Interrupt Register */
#define GTM_TIM0_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01012B4u)

/** \brief 12B8, TIM0 Channel 5 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01012B8u)

/** \brief 12BC, TIM0 Channel 5 Error Interrupt Enable Register */
#define GTM_TIM0_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01012BCu)

/** \brief 1300, TIM0 Channel 6 General Purpose 0 Register */
#define GTM_TIM0_CH6_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101300u)

/** \brief 1304, TIM0 Channel 6 General Purpose 1 Register */
#define GTM_TIM0_CH6_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101304u)

/** \brief 1308, TIM0 Channel 6 SMU Counter Register */
#define GTM_TIM0_CH6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101308u)

/** \brief 130C, TIM0 Channel 6 SMU Edge Counter Register */
#define GTM_TIM0_CH6_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010130Cu)

/** \brief 1310, TIM0 Channel 6 SMU Shadow Counter Register */
#define GTM_TIM0_CH6_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101310u)

/** \brief 1314, TIM0 Channel 6 TDU Counter Register */
#define GTM_TIM0_CH6_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101314u)

/** \brief 1318, TIM0 Channel 6 TDU Control Register */
#define GTM_TIM0_CH6_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101318u)

/** \brief 131C, TIM0 Channel 6 Filter Parameter 0 Register */
#define GTM_TIM0_CH6_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010131Cu)

/** \brief 1320, TIM0 Channel 6 Filter Parameter 1 Register */
#define GTM_TIM0_CH6_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101320u)

/** \brief 1324, TIM0 Channel 6 Control Register */
#define GTM_TIM0_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101324u)

/** \brief 1328, TIM0 Channel 6 Extended Control Register */
#define GTM_TIM0_CH6_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101328u)

/** \brief 132C, TIM0 Channel 6 Interrupt Notification Register */
#define GTM_TIM0_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010132Cu)

/** \brief 1330, TIM0 Channel 6 Interrupt Enable Register */
#define GTM_TIM0_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101330u)

/** \brief 1334, TIM0 Channel 6 Force Interrupt Register */
#define GTM_TIM0_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101334u)

/** \brief 1338, TIM0 Channel 6 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101338u)

/** \brief 133C, TIM0 Channel 6 Error Interrupt Enable Register */
#define GTM_TIM0_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010133Cu)

/** \brief 1380, TIM0 Channel 7 General Purpose 0 Register */
#define GTM_TIM0_CH7_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101380u)

/** \brief 1384, TIM0 Channel 7 General Purpose 1 Register */
#define GTM_TIM0_CH7_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101384u)

/** \brief 1388, TIM0 Channel 7 SMU Counter Register */
#define GTM_TIM0_CH7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101388u)

/** \brief 138C, TIM0 Channel 7 SMU Edge Counter Register */
#define GTM_TIM0_CH7_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010138Cu)

/** \brief 1390, TIM0 Channel 7 SMU Shadow Counter Register */
#define GTM_TIM0_CH7_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101390u)

/** \brief 1394, TIM0 Channel 7 TDU Counter Register */
#define GTM_TIM0_CH7_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101394u)

/** \brief 1398, TIM0 Channel 7 TDU Control Register */
#define GTM_TIM0_CH7_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101398u)

/** \brief 139C, TIM0 Channel 7 Filter Parameter 0 Register */
#define GTM_TIM0_CH7_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010139Cu)

/** \brief 13A0, TIM0 Channel 7 Filter Parameter 1 Register */
#define GTM_TIM0_CH7_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01013A0u)

/** \brief 13A4, TIM0 Channel 7 Control Register */
#define GTM_TIM0_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01013A4u)

/** \brief 13A8, TIM0 Channel 7 Extended Control Register */
#define GTM_TIM0_CH7_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01013A8u)

/** \brief 13AC, TIM0 Channel 7 Interrupt Notification Register */
#define GTM_TIM0_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01013ACu)

/** \brief 13B0, TIM0 Channel 7 Interrupt Enable Register */
#define GTM_TIM0_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01013B0u)

/** \brief 13B4, TIM0 Channel 7 Force Interrupt Register */
#define GTM_TIM0_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01013B4u)

/** \brief 13B8, TIM0 Channel 7 Interrupt Mode Configuration Register */
#define GTM_TIM0_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01013B8u)

/** \brief 13BC, TIM0 Channel 7 Error Interrupt Enable Register */
#define GTM_TIM0_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01013BCu)

/** \brief 1800, TIM1 Channel 0 General Purpose 0 Register */
#define GTM_TIM1_CH0_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101800u)

/** \brief 1804, TIM1 Channel 0 General Purpose 1 Register */
#define GTM_TIM1_CH0_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101804u)

/** \brief 1808, TIM1 Channel 0 SMU Counter Register */
#define GTM_TIM1_CH0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101808u)

/** \brief 180C, TIM1 Channel 0 SMU Edge Counter Register */
#define GTM_TIM1_CH0_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010180Cu)

/** \brief 1810, TIM1 Channel 0 SMU Shadow Counter Register */
#define GTM_TIM1_CH0_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101810u)

/** \brief 1814, TIM1 Channel 0 TDU Counter Register */
#define GTM_TIM1_CH0_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101814u)

/** \brief 1818, TIM1 Channel 0 TDU Control Register */
#define GTM_TIM1_CH0_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101818u)

/** \brief 181C, TIM1 Channel 0 Filter Parameter 0 Register */
#define GTM_TIM1_CH0_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010181Cu)

/** \brief 1820, TIM1 Channel 0 Filter Parameter 1 Register */
#define GTM_TIM1_CH0_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101820u)

/** \brief 1824, TIM1 Channel 0 Control Register */
#define GTM_TIM1_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101824u)

/** \brief 1828, TIM1 Channel 0 Extended Control Register */
#define GTM_TIM1_CH0_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101828u)

/** \brief 182C, TIM1 Channel 0 Interrupt Notification Register */
#define GTM_TIM1_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010182Cu)

/** \brief 1830, TIM1 Channel 0 Interrupt Enable Register */
#define GTM_TIM1_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101830u)

/** \brief 1834, TIM1 Channel 0 Force Interrupt Register */
#define GTM_TIM1_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101834u)

/** \brief 1838, TIM1 Channel 0 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101838u)

/** \brief 183C, TIM1 Channel 0 Error Interrupt Enable Register */
#define GTM_TIM1_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010183Cu)

/** \brief 1874, TIM1 Input Value Observation Register */
#define GTM_TIM1_INP_VAL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_INP_VAL*)0xF0101874u)

/** \brief 1878, TIM1 AUX IN Source Selection Register */
#define GTM_TIM1_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0101878u)

/** \brief 187C, TIM1 Global Software Reset Register */
#define GTM_TIM1_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010187Cu)

/** \brief 1880, TIM1 Channel 1 General Purpose 0 Register */
#define GTM_TIM1_CH1_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101880u)

/** \brief 1884, TIM1 Channel 1 General Purpose 1 Register */
#define GTM_TIM1_CH1_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101884u)

/** \brief 1888, TIM1 Channel 1 SMU Counter Register */
#define GTM_TIM1_CH1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101888u)

/** \brief 188C, TIM1 Channel 1 SMU Edge Counter Register */
#define GTM_TIM1_CH1_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010188Cu)

/** \brief 1890, TIM1 Channel 1 SMU Shadow Counter Register */
#define GTM_TIM1_CH1_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101890u)

/** \brief 1894, TIM1 Channel 1 TDU Counter Register */
#define GTM_TIM1_CH1_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101894u)

/** \brief 1898, TIM1 Channel 1 TDU Control Register */
#define GTM_TIM1_CH1_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101898u)

/** \brief 189C, TIM1 Channel 1 Filter Parameter 0 Register */
#define GTM_TIM1_CH1_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010189Cu)

/** \brief 18A0, TIM1 Channel 1 Filter Parameter 1 Register */
#define GTM_TIM1_CH1_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01018A0u)

/** \brief 18A4, TIM1 Channel 1 Control Register */
#define GTM_TIM1_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01018A4u)

/** \brief 18A8, TIM1 Channel 1 Extended Control Register */
#define GTM_TIM1_CH1_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01018A8u)

/** \brief 18AC, TIM1 Channel 1 Interrupt Notification Register */
#define GTM_TIM1_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01018ACu)

/** \brief 18B0, TIM1 Channel 1 Interrupt Enable Register */
#define GTM_TIM1_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01018B0u)

/** \brief 18B4, TIM1 Channel 1 Force Interrupt Register */
#define GTM_TIM1_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01018B4u)

/** \brief 18B8, TIM1 Channel 1 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01018B8u)

/** \brief 18BC, TIM1 Channel 1 Error Interrupt Enable Register */
#define GTM_TIM1_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01018BCu)

/** \brief 1900, TIM1 Channel 2 General Purpose 0 Register */
#define GTM_TIM1_CH2_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101900u)

/** \brief 1904, TIM1 Channel 2 General Purpose 1 Register */
#define GTM_TIM1_CH2_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101904u)

/** \brief 1908, TIM1 Channel 2 SMU Counter Register */
#define GTM_TIM1_CH2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101908u)

/** \brief 190C, TIM1 Channel 2 SMU Edge Counter Register */
#define GTM_TIM1_CH2_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010190Cu)

/** \brief 1910, TIM1 Channel 2 SMU Shadow Counter Register */
#define GTM_TIM1_CH2_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101910u)

/** \brief 1914, TIM1 Channel 2 TDU Counter Register */
#define GTM_TIM1_CH2_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101914u)

/** \brief 1918, TIM1 Channel 2 TDU Control Register */
#define GTM_TIM1_CH2_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101918u)

/** \brief 191C, TIM1 Channel 2 Filter Parameter 0 Register */
#define GTM_TIM1_CH2_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010191Cu)

/** \brief 1920, TIM1 Channel 2 Filter Parameter 1 Register */
#define GTM_TIM1_CH2_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101920u)

/** \brief 1924, TIM1 Channel 2 Control Register */
#define GTM_TIM1_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101924u)

/** \brief 1928, TIM1 Channel 2 Extended Control Register */
#define GTM_TIM1_CH2_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101928u)

/** \brief 192C, TIM1 Channel 2 Interrupt Notification Register */
#define GTM_TIM1_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010192Cu)

/** \brief 1930, TIM1 Channel 2 Interrupt Enable Register */
#define GTM_TIM1_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101930u)

/** \brief 1934, TIM1 Channel 2 Force Interrupt Register */
#define GTM_TIM1_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101934u)

/** \brief 1938, TIM1 Channel 2 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101938u)

/** \brief 193C, TIM1 Channel 2 Error Interrupt Enable Register */
#define GTM_TIM1_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010193Cu)

/** \brief 1980, TIM1 Channel 3 General Purpose 0 Register */
#define GTM_TIM1_CH3_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101980u)

/** \brief 1984, TIM1 Channel 3 General Purpose 1 Register */
#define GTM_TIM1_CH3_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101984u)

/** \brief 1988, TIM1 Channel 3 SMU Counter Register */
#define GTM_TIM1_CH3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101988u)

/** \brief 198C, TIM1 Channel 3 SMU Edge Counter Register */
#define GTM_TIM1_CH3_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010198Cu)

/** \brief 1990, TIM1 Channel 3 SMU Shadow Counter Register */
#define GTM_TIM1_CH3_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101990u)

/** \brief 1994, TIM1 Channel 3 TDU Counter Register */
#define GTM_TIM1_CH3_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101994u)

/** \brief 1998, TIM1 Channel 3 TDU Control Register */
#define GTM_TIM1_CH3_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101998u)

/** \brief 199C, TIM1 Channel 3 Filter Parameter 0 Register */
#define GTM_TIM1_CH3_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010199Cu)

/** \brief 19A0, TIM1 Channel 3 Filter Parameter 1 Register */
#define GTM_TIM1_CH3_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01019A0u)

/** \brief 19A4, TIM1 Channel 3 Control Register */
#define GTM_TIM1_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01019A4u)

/** \brief 19A8, TIM1 Channel 3 Extended Control Register */
#define GTM_TIM1_CH3_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01019A8u)

/** \brief 19AC, TIM1 Channel 3 Interrupt Notification Register */
#define GTM_TIM1_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01019ACu)

/** \brief 19B0, TIM1 Channel 3 Interrupt Enable Register */
#define GTM_TIM1_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01019B0u)

/** \brief 19B4, TIM1 Channel 3 Force Interrupt Register */
#define GTM_TIM1_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01019B4u)

/** \brief 19B8, TIM1 Channel 3 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01019B8u)

/** \brief 19BC, TIM1 Channel 3 Error Interrupt Enable Register */
#define GTM_TIM1_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01019BCu)

/** \brief 1A00, TIM1 Channel 4 General Purpose 0 Register */
#define GTM_TIM1_CH4_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A00u)

/** \brief 1A04, TIM1 Channel 4 General Purpose 1 Register */
#define GTM_TIM1_CH4_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A04u)

/** \brief 1A08, TIM1 Channel 4 SMU Counter Register */
#define GTM_TIM1_CH4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A08u)

/** \brief 1A0C, TIM1 Channel 4 SMU Edge Counter Register */
#define GTM_TIM1_CH4_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101A0Cu)

/** \brief 1A10, TIM1 Channel 4 SMU Shadow Counter Register */
#define GTM_TIM1_CH4_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A10u)

/** \brief 1A14, TIM1 Channel 4 TDU Counter Register */
#define GTM_TIM1_CH4_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101A14u)

/** \brief 1A18, TIM1 Channel 4 TDU Control Register */
#define GTM_TIM1_CH4_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101A18u)

/** \brief 1A1C, TIM1 Channel 4 Filter Parameter 0 Register */
#define GTM_TIM1_CH4_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A1Cu)

/** \brief 1A20, TIM1 Channel 4 Filter Parameter 1 Register */
#define GTM_TIM1_CH4_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101A20u)

/** \brief 1A24, TIM1 Channel 4 Control Register */
#define GTM_TIM1_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101A24u)

/** \brief 1A28, TIM1 Channel 4 Extended Control Register */
#define GTM_TIM1_CH4_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101A28u)

/** \brief 1A2C, TIM1 Channel 4 Interrupt Notification Register */
#define GTM_TIM1_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101A2Cu)

/** \brief 1A30, TIM1 Channel 4 Interrupt Enable Register */
#define GTM_TIM1_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101A30u)

/** \brief 1A34, TIM1 Channel 4 Force Interrupt Register */
#define GTM_TIM1_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101A34u)

/** \brief 1A38, TIM1 Channel 4 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101A38u)

/** \brief 1A3C, TIM1 Channel 4 Error Interrupt Enable Register */
#define GTM_TIM1_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101A3Cu)

/** \brief 1A80, TIM1 Channel 5 General Purpose 0 Register */
#define GTM_TIM1_CH5_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A80u)

/** \brief 1A84, TIM1 Channel 5 General Purpose 1 Register */
#define GTM_TIM1_CH5_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A84u)

/** \brief 1A88, TIM1 Channel 5 SMU Counter Register */
#define GTM_TIM1_CH5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A88u)

/** \brief 1A8C, TIM1 Channel 5 SMU Edge Counter Register */
#define GTM_TIM1_CH5_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101A8Cu)

/** \brief 1A90, TIM1 Channel 5 SMU Shadow Counter Register */
#define GTM_TIM1_CH5_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A90u)

/** \brief 1A94, TIM1 Channel 5 TDU Counter Register */
#define GTM_TIM1_CH5_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101A94u)

/** \brief 1A98, TIM1 Channel 5 TDU Control Register */
#define GTM_TIM1_CH5_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101A98u)

/** \brief 1A9C, TIM1 Channel 5 Filter Parameter 0 Register */
#define GTM_TIM1_CH5_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A9Cu)

/** \brief 1AA0, TIM1 Channel 5 Filter Parameter 1 Register */
#define GTM_TIM1_CH5_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101AA0u)

/** \brief 1AA4, TIM1 Channel 5 Control Register */
#define GTM_TIM1_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101AA4u)

/** \brief 1AA8, TIM1 Channel 5 Extended Control Register */
#define GTM_TIM1_CH5_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101AA8u)

/** \brief 1AAC, TIM1 Channel 5 Interrupt Notification Register */
#define GTM_TIM1_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101AACu)

/** \brief 1AB0, TIM1 Channel 5 Interrupt Enable Register */
#define GTM_TIM1_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101AB0u)

/** \brief 1AB4, TIM1 Channel 5 Force Interrupt Register */
#define GTM_TIM1_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101AB4u)

/** \brief 1AB8, TIM1 Channel 5 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101AB8u)

/** \brief 1ABC, TIM1 Channel 5 Error Interrupt Enable Register */
#define GTM_TIM1_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101ABCu)

/** \brief 1B00, TIM1 Channel 6 General Purpose 0 Register */
#define GTM_TIM1_CH6_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B00u)

/** \brief 1B04, TIM1 Channel 6 General Purpose 1 Register */
#define GTM_TIM1_CH6_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B04u)

/** \brief 1B08, TIM1 Channel 6 SMU Counter Register */
#define GTM_TIM1_CH6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B08u)

/** \brief 1B0C, TIM1 Channel 6 SMU Edge Counter Register */
#define GTM_TIM1_CH6_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101B0Cu)

/** \brief 1B10, TIM1 Channel 6 SMU Shadow Counter Register */
#define GTM_TIM1_CH6_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B10u)

/** \brief 1B14, TIM1 Channel 6 TDU Counter Register */
#define GTM_TIM1_CH6_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101B14u)

/** \brief 1B18, TIM1 Channel 6 TDU Control Register */
#define GTM_TIM1_CH6_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101B18u)

/** \brief 1B1C, TIM1 Channel 6 Filter Parameter 0 Register */
#define GTM_TIM1_CH6_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B1Cu)

/** \brief 1B20, TIM1 Channel 6 Filter Parameter 1 Register */
#define GTM_TIM1_CH6_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101B20u)

/** \brief 1B24, TIM1 Channel 6 Control Register */
#define GTM_TIM1_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101B24u)

/** \brief 1B28, TIM1 Channel 6 Extended Control Register */
#define GTM_TIM1_CH6_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101B28u)

/** \brief 1B2C, TIM1 Channel 6 Interrupt Notification Register */
#define GTM_TIM1_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101B2Cu)

/** \brief 1B30, TIM1 Channel 6 Interrupt Enable Register */
#define GTM_TIM1_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101B30u)

/** \brief 1B34, TIM1 Channel 6 Force Interrupt Register */
#define GTM_TIM1_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101B34u)

/** \brief 1B38, TIM1 Channel 6 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101B38u)

/** \brief 1B3C, TIM1 Channel 6 Error Interrupt Enable Register */
#define GTM_TIM1_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101B3Cu)

/** \brief 1B80, TIM1 Channel 7 General Purpose 0 Register */
#define GTM_TIM1_CH7_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B80u)

/** \brief 1B84, TIM1 Channel 7 General Purpose 1 Register */
#define GTM_TIM1_CH7_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B84u)

/** \brief 1B88, TIM1 Channel 7 SMU Counter Register */
#define GTM_TIM1_CH7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B88u)

/** \brief 1B8C, TIM1 Channel 7 SMU Edge Counter Register */
#define GTM_TIM1_CH7_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101B8Cu)

/** \brief 1B90, TIM1 Channel 7 SMU Shadow Counter Register */
#define GTM_TIM1_CH7_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B90u)

/** \brief 1B94, TIM1 Channel 7 TDU Counter Register */
#define GTM_TIM1_CH7_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101B94u)

/** \brief 1B98, TIM1 Channel 7 TDU Control Register */
#define GTM_TIM1_CH7_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101B98u)

/** \brief 1B9C, TIM1 Channel 7 Filter Parameter 0 Register */
#define GTM_TIM1_CH7_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B9Cu)

/** \brief 1BA0, TIM1 Channel 7 Filter Parameter 1 Register */
#define GTM_TIM1_CH7_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101BA0u)

/** \brief 1BA4, TIM1 Channel 7 Control Register */
#define GTM_TIM1_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101BA4u)

/** \brief 1BA8, TIM1 Channel 7 Extended Control Register */
#define GTM_TIM1_CH7_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101BA8u)

/** \brief 1BAC, TIM1 Channel 7 Interrupt Notification Register */
#define GTM_TIM1_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101BACu)

/** \brief 1BB0, TIM1 Channel 7 Interrupt Enable Register */
#define GTM_TIM1_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101BB0u)

/** \brief 1BB4, TIM1 Channel 7 Force Interrupt Register */
#define GTM_TIM1_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101BB4u)

/** \brief 1BB8, TIM1 Channel 7 Interrupt Mode Configuration Register */
#define GTM_TIM1_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101BB8u)

/** \brief 1BBC, TIM1 Channel 7 Error Interrupt Enable Register */
#define GTM_TIM1_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101BBCu)

/** \brief 2000, TIM2 Channel 0 General Purpose 0 Register */
#define GTM_TIM2_CH0_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102000u)

/** \brief 2004, TIM2 Channel 0 General Purpose 1 Register */
#define GTM_TIM2_CH0_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102004u)

/** \brief 2008, TIM2 Channel 0 SMU Counter Register */
#define GTM_TIM2_CH0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102008u)

/** \brief 200C, TIM2 Channel 0 SMU Edge Counter Register */
#define GTM_TIM2_CH0_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010200Cu)

/** \brief 2010, TIM2 Channel 0 SMU Shadow Counter Register */
#define GTM_TIM2_CH0_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102010u)

/** \brief 2014, TIM2 Channel 0 TDU Counter Register */
#define GTM_TIM2_CH0_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102014u)

/** \brief 2018, TIM2 Channel 0 TDU Control Register */
#define GTM_TIM2_CH0_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102018u)

/** \brief 201C, TIM2 Channel 0 Filter Parameter 0 Register */
#define GTM_TIM2_CH0_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010201Cu)

/** \brief 2020, TIM2 Channel 0 Filter Parameter 1 Register */
#define GTM_TIM2_CH0_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102020u)

/** \brief 2024, TIM2 Channel 0 Control Register */
#define GTM_TIM2_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102024u)

/** \brief 2028, TIM2 Channel 0 Extended Control Register */
#define GTM_TIM2_CH0_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102028u)

/** \brief 202C, TIM2 Channel 0 Interrupt Notification Register */
#define GTM_TIM2_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010202Cu)

/** \brief 2030, TIM2 Channel 0 Interrupt Enable Register */
#define GTM_TIM2_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102030u)

/** \brief 2034, TIM2 Channel 0 Force Interrupt Register */
#define GTM_TIM2_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102034u)

/** \brief 2038, TIM2 Channel 0 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102038u)

/** \brief 203C, TIM2 Channel 0 Error Interrupt Enable Register */
#define GTM_TIM2_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010203Cu)

/** \brief 2074, TIM2 Input Value Observation Register */
#define GTM_TIM2_INP_VAL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_INP_VAL*)0xF0102074u)

/** \brief 2078, TIM2 AUX IN Source Selection Register */
#define GTM_TIM2_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0102078u)

/** \brief 207C, TIM2 Global Software Reset Register */
#define GTM_TIM2_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010207Cu)

/** \brief 2080, TIM2 Channel 1 General Purpose 0 Register */
#define GTM_TIM2_CH1_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102080u)

/** \brief 2084, TIM2 Channel 1 General Purpose 1 Register */
#define GTM_TIM2_CH1_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102084u)

/** \brief 2088, TIM2 Channel 1 SMU Counter Register */
#define GTM_TIM2_CH1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102088u)

/** \brief 208C, TIM2 Channel 1 SMU Edge Counter Register */
#define GTM_TIM2_CH1_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010208Cu)

/** \brief 2090, TIM2 Channel 1 SMU Shadow Counter Register */
#define GTM_TIM2_CH1_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102090u)

/** \brief 2094, TIM2 Channel 1 TDU Counter Register */
#define GTM_TIM2_CH1_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102094u)

/** \brief 2098, TIM2 Channel 1 TDU Control Register */
#define GTM_TIM2_CH1_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102098u)

/** \brief 209C, TIM2 Channel 1 Filter Parameter 0 Register */
#define GTM_TIM2_CH1_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010209Cu)

/** \brief 20A0, TIM2 Channel 1 Filter Parameter 1 Register */
#define GTM_TIM2_CH1_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01020A0u)

/** \brief 20A4, TIM2 Channel 1 Control Register */
#define GTM_TIM2_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01020A4u)

/** \brief 20A8, TIM2 Channel 1 Extended Control Register */
#define GTM_TIM2_CH1_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01020A8u)

/** \brief 20AC, TIM2 Channel 1 Interrupt Notification Register */
#define GTM_TIM2_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01020ACu)

/** \brief 20B0, TIM2 Channel 1 Interrupt Enable Register */
#define GTM_TIM2_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01020B0u)

/** \brief 20B4, TIM2 Channel 1 Force Interrupt Register */
#define GTM_TIM2_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01020B4u)

/** \brief 20B8, TIM2 Channel 1 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01020B8u)

/** \brief 20BC, TIM2 Channel 1 Error Interrupt Enable Register */
#define GTM_TIM2_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01020BCu)

/** \brief 2100, TIM2 Channel 2 General Purpose 0 Register */
#define GTM_TIM2_CH2_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102100u)

/** \brief 2104, TIM2 Channel 2 General Purpose 1 Register */
#define GTM_TIM2_CH2_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102104u)

/** \brief 2108, TIM2 Channel 2 SMU Counter Register */
#define GTM_TIM2_CH2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102108u)

/** \brief 210C, TIM2 Channel 2 SMU Edge Counter Register */
#define GTM_TIM2_CH2_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010210Cu)

/** \brief 2110, TIM2 Channel 2 SMU Shadow Counter Register */
#define GTM_TIM2_CH2_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102110u)

/** \brief 2114, TIM2 Channel 2 TDU Counter Register */
#define GTM_TIM2_CH2_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102114u)

/** \brief 2118, TIM2 Channel 2 TDU Control Register */
#define GTM_TIM2_CH2_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102118u)

/** \brief 211C, TIM2 Channel 2 Filter Parameter 0 Register */
#define GTM_TIM2_CH2_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010211Cu)

/** \brief 2120, TIM2 Channel 2 Filter Parameter 1 Register */
#define GTM_TIM2_CH2_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102120u)

/** \brief 2124, TIM2 Channel 2 Control Register */
#define GTM_TIM2_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102124u)

/** \brief 2128, TIM2 Channel 2 Extended Control Register */
#define GTM_TIM2_CH2_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102128u)

/** \brief 212C, TIM2 Channel 2 Interrupt Notification Register */
#define GTM_TIM2_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010212Cu)

/** \brief 2130, TIM2 Channel 2 Interrupt Enable Register */
#define GTM_TIM2_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102130u)

/** \brief 2134, TIM2 Channel 2 Force Interrupt Register */
#define GTM_TIM2_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102134u)

/** \brief 2138, TIM2 Channel 2 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102138u)

/** \brief 213C, TIM2 Channel 2 Error Interrupt Enable Register */
#define GTM_TIM2_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010213Cu)

/** \brief 2180, TIM2 Channel 3 General Purpose 0 Register */
#define GTM_TIM2_CH3_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102180u)

/** \brief 2184, TIM2 Channel 3 General Purpose 1 Register */
#define GTM_TIM2_CH3_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102184u)

/** \brief 2188, TIM2 Channel 3 SMU Counter Register */
#define GTM_TIM2_CH3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102188u)

/** \brief 218C, TIM2 Channel 3 SMU Edge Counter Register */
#define GTM_TIM2_CH3_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010218Cu)

/** \brief 2190, TIM2 Channel 3 SMU Shadow Counter Register */
#define GTM_TIM2_CH3_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102190u)

/** \brief 2194, TIM2 Channel 3 TDU Counter Register */
#define GTM_TIM2_CH3_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102194u)

/** \brief 2198, TIM2 Channel 3 TDU Control Register */
#define GTM_TIM2_CH3_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102198u)

/** \brief 219C, TIM2 Channel 3 Filter Parameter 0 Register */
#define GTM_TIM2_CH3_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010219Cu)

/** \brief 21A0, TIM2 Channel 3 Filter Parameter 1 Register */
#define GTM_TIM2_CH3_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01021A0u)

/** \brief 21A4, TIM2 Channel 3 Control Register */
#define GTM_TIM2_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01021A4u)

/** \brief 21A8, TIM2 Channel 3 Extended Control Register */
#define GTM_TIM2_CH3_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01021A8u)

/** \brief 21AC, TIM2 Channel 3 Interrupt Notification Register */
#define GTM_TIM2_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01021ACu)

/** \brief 21B0, TIM2 Channel 3 Interrupt Enable Register */
#define GTM_TIM2_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01021B0u)

/** \brief 21B4, TIM2 Channel 3 Force Interrupt Register */
#define GTM_TIM2_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01021B4u)

/** \brief 21B8, TIM2 Channel 3 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01021B8u)

/** \brief 21BC, TIM2 Channel 3 Error Interrupt Enable Register */
#define GTM_TIM2_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01021BCu)

/** \brief 2200, TIM2 Channel 4 General Purpose 0 Register */
#define GTM_TIM2_CH4_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102200u)

/** \brief 2204, TIM2 Channel 4 General Purpose 1 Register */
#define GTM_TIM2_CH4_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102204u)

/** \brief 2208, TIM2 Channel 4 SMU Counter Register */
#define GTM_TIM2_CH4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102208u)

/** \brief 220C, TIM2 Channel 4 SMU Edge Counter Register */
#define GTM_TIM2_CH4_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010220Cu)

/** \brief 2210, TIM2 Channel 4 SMU Shadow Counter Register */
#define GTM_TIM2_CH4_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102210u)

/** \brief 2214, TIM2 Channel 4 TDU Counter Register */
#define GTM_TIM2_CH4_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102214u)

/** \brief 2218, TIM2 Channel 4 TDU Control Register */
#define GTM_TIM2_CH4_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102218u)

/** \brief 221C, TIM2 Channel 4 Filter Parameter 0 Register */
#define GTM_TIM2_CH4_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010221Cu)

/** \brief 2220, TIM2 Channel 4 Filter Parameter 1 Register */
#define GTM_TIM2_CH4_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102220u)

/** \brief 2224, TIM2 Channel 4 Control Register */
#define GTM_TIM2_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102224u)

/** \brief 2228, TIM2 Channel 4 Extended Control Register */
#define GTM_TIM2_CH4_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102228u)

/** \brief 222C, TIM2 Channel 4 Interrupt Notification Register */
#define GTM_TIM2_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010222Cu)

/** \brief 2230, TIM2 Channel 4 Interrupt Enable Register */
#define GTM_TIM2_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102230u)

/** \brief 2234, TIM2 Channel 4 Force Interrupt Register */
#define GTM_TIM2_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102234u)

/** \brief 2238, TIM2 Channel 4 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102238u)

/** \brief 223C, TIM2 Channel 4 Error Interrupt Enable Register */
#define GTM_TIM2_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010223Cu)

/** \brief 2280, TIM2 Channel 5 General Purpose 0 Register */
#define GTM_TIM2_CH5_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102280u)

/** \brief 2284, TIM2 Channel 5 General Purpose 1 Register */
#define GTM_TIM2_CH5_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102284u)

/** \brief 2288, TIM2 Channel 5 SMU Counter Register */
#define GTM_TIM2_CH5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102288u)

/** \brief 228C, TIM2 Channel 5 SMU Edge Counter Register */
#define GTM_TIM2_CH5_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010228Cu)

/** \brief 2290, TIM2 Channel 5 SMU Shadow Counter Register */
#define GTM_TIM2_CH5_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102290u)

/** \brief 2294, TIM2 Channel 5 TDU Counter Register */
#define GTM_TIM2_CH5_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102294u)

/** \brief 2298, TIM2 Channel 5 TDU Control Register */
#define GTM_TIM2_CH5_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102298u)

/** \brief 229C, TIM2 Channel 5 Filter Parameter 0 Register */
#define GTM_TIM2_CH5_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010229Cu)

/** \brief 22A0, TIM2 Channel 5 Filter Parameter 1 Register */
#define GTM_TIM2_CH5_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01022A0u)

/** \brief 22A4, TIM2 Channel 5 Control Register */
#define GTM_TIM2_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01022A4u)

/** \brief 22A8, TIM2 Channel 5 Extended Control Register */
#define GTM_TIM2_CH5_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01022A8u)

/** \brief 22AC, TIM2 Channel 5 Interrupt Notification Register */
#define GTM_TIM2_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01022ACu)

/** \brief 22B0, TIM2 Channel 5 Interrupt Enable Register */
#define GTM_TIM2_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01022B0u)

/** \brief 22B4, TIM2 Channel 5 Force Interrupt Register */
#define GTM_TIM2_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01022B4u)

/** \brief 22B8, TIM2 Channel 5 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01022B8u)

/** \brief 22BC, TIM2 Channel 5 Error Interrupt Enable Register */
#define GTM_TIM2_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01022BCu)

/** \brief 2300, TIM2 Channel 6 General Purpose 0 Register */
#define GTM_TIM2_CH6_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102300u)

/** \brief 2304, TIM2 Channel 6 General Purpose 1 Register */
#define GTM_TIM2_CH6_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102304u)

/** \brief 2308, TIM2 Channel 6 SMU Counter Register */
#define GTM_TIM2_CH6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102308u)

/** \brief 230C, TIM2 Channel 6 SMU Edge Counter Register */
#define GTM_TIM2_CH6_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010230Cu)

/** \brief 2310, TIM2 Channel 6 SMU Shadow Counter Register */
#define GTM_TIM2_CH6_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102310u)

/** \brief 2314, TIM2 Channel 6 TDU Counter Register */
#define GTM_TIM2_CH6_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102314u)

/** \brief 2318, TIM2 Channel 6 TDU Control Register */
#define GTM_TIM2_CH6_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102318u)

/** \brief 231C, TIM2 Channel 6 Filter Parameter 0 Register */
#define GTM_TIM2_CH6_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010231Cu)

/** \brief 2320, TIM2 Channel 6 Filter Parameter 1 Register */
#define GTM_TIM2_CH6_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102320u)

/** \brief 2324, TIM2 Channel 6 Control Register */
#define GTM_TIM2_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102324u)

/** \brief 2328, TIM2 Channel 6 Extended Control Register */
#define GTM_TIM2_CH6_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102328u)

/** \brief 232C, TIM2 Channel 6 Interrupt Notification Register */
#define GTM_TIM2_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010232Cu)

/** \brief 2330, TIM2 Channel 6 Interrupt Enable Register */
#define GTM_TIM2_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102330u)

/** \brief 2334, TIM2 Channel 6 Force Interrupt Register */
#define GTM_TIM2_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102334u)

/** \brief 2338, TIM2 Channel 6 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102338u)

/** \brief 233C, TIM2 Channel 6 Error Interrupt Enable Register */
#define GTM_TIM2_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010233Cu)

/** \brief 2380, TIM2 Channel 7 General Purpose 0 Register */
#define GTM_TIM2_CH7_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102380u)

/** \brief 2384, TIM2 Channel 7 General Purpose 1 Register */
#define GTM_TIM2_CH7_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102384u)

/** \brief 2388, TIM2 Channel 7 SMU Counter Register */
#define GTM_TIM2_CH7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102388u)

/** \brief 238C, TIM2 Channel 7 SMU Edge Counter Register */
#define GTM_TIM2_CH7_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010238Cu)

/** \brief 2390, TIM2 Channel 7 SMU Shadow Counter Register */
#define GTM_TIM2_CH7_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102390u)

/** \brief 2394, TIM2 Channel 7 TDU Counter Register */
#define GTM_TIM2_CH7_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102394u)

/** \brief 2398, TIM2 Channel 7 TDU Control Register */
#define GTM_TIM2_CH7_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102398u)

/** \brief 239C, TIM2 Channel 7 Filter Parameter 0 Register */
#define GTM_TIM2_CH7_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010239Cu)

/** \brief 23A0, TIM2 Channel 7 Filter Parameter 1 Register */
#define GTM_TIM2_CH7_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01023A0u)

/** \brief 23A4, TIM2 Channel 7 Control Register */
#define GTM_TIM2_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01023A4u)

/** \brief 23A8, TIM2 Channel 7 Extended Control Register */
#define GTM_TIM2_CH7_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01023A8u)

/** \brief 23AC, TIM2 Channel 7 Interrupt Notification Register */
#define GTM_TIM2_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01023ACu)

/** \brief 23B0, TIM2 Channel 7 Interrupt Enable Register */
#define GTM_TIM2_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01023B0u)

/** \brief 23B4, TIM2 Channel 7 Force Interrupt Register */
#define GTM_TIM2_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01023B4u)

/** \brief 23B8, TIM2 Channel 7 Interrupt Mode Configuration Register */
#define GTM_TIM2_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01023B8u)

/** \brief 23BC, TIM2 Channel 7 Error Interrupt Enable Register */
#define GTM_TIM2_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01023BCu)

/** \brief 2800, TIM3 Channel 0 General Purpose 0 Register */
#define GTM_TIM3_CH0_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102800u)

/** \brief 2804, TIM3 Channel 0 General Purpose 1 Register */
#define GTM_TIM3_CH0_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102804u)

/** \brief 2808, TIM3 Channel 0 SMU Counter Register */
#define GTM_TIM3_CH0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102808u)

/** \brief 280C, TIM3 Channel 0 SMU Edge Counter Register */
#define GTM_TIM3_CH0_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010280Cu)

/** \brief 2810, TIM3 Channel 0 SMU Shadow Counter Register */
#define GTM_TIM3_CH0_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102810u)

/** \brief 2814, TIM3 Channel 0 TDU Counter Register */
#define GTM_TIM3_CH0_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102814u)

/** \brief 2818, TIM3 Channel 0 TDU Control Register */
#define GTM_TIM3_CH0_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102818u)

/** \brief 281C, TIM3 Channel 0 Filter Parameter 0 Register */
#define GTM_TIM3_CH0_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010281Cu)

/** \brief 2820, TIM3 Channel 0 Filter Parameter 1 Register */
#define GTM_TIM3_CH0_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102820u)

/** \brief 2824, TIM3 Channel 0 Control Register */
#define GTM_TIM3_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102824u)

/** \brief 2828, TIM3 Channel 0 Extended Control Register */
#define GTM_TIM3_CH0_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102828u)

/** \brief 282C, TIM3 Channel 0 Interrupt Notification Register */
#define GTM_TIM3_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010282Cu)

/** \brief 2830, TIM3 Channel 0 Interrupt Enable Register */
#define GTM_TIM3_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102830u)

/** \brief 2834, TIM3 Channel 0 Force Interrupt Register */
#define GTM_TIM3_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102834u)

/** \brief 2838, TIM3 Channel 0 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102838u)

/** \brief 283C, TIM3 Channel 0 Error Interrupt Enable Register */
#define GTM_TIM3_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010283Cu)

/** \brief 2874, TIM3 Input Value Observation Register */
#define GTM_TIM3_INP_VAL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_INP_VAL*)0xF0102874u)

/** \brief 2878, TIM3 AUX IN Source Selection Register */
#define GTM_TIM3_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0102878u)

/** \brief 287C, TIM3 Global Software Reset Register */
#define GTM_TIM3_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010287Cu)

/** \brief 2880, TIM3 Channel 1 General Purpose 0 Register */
#define GTM_TIM3_CH1_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102880u)

/** \brief 2884, TIM3 Channel 1 General Purpose 1 Register */
#define GTM_TIM3_CH1_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102884u)

/** \brief 2888, TIM3 Channel 1 SMU Counter Register */
#define GTM_TIM3_CH1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102888u)

/** \brief 288C, TIM3 Channel 1 SMU Edge Counter Register */
#define GTM_TIM3_CH1_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010288Cu)

/** \brief 2890, TIM3 Channel 1 SMU Shadow Counter Register */
#define GTM_TIM3_CH1_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102890u)

/** \brief 2894, TIM3 Channel 1 TDU Counter Register */
#define GTM_TIM3_CH1_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102894u)

/** \brief 2898, TIM3 Channel 1 TDU Control Register */
#define GTM_TIM3_CH1_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102898u)

/** \brief 289C, TIM3 Channel 1 Filter Parameter 0 Register */
#define GTM_TIM3_CH1_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010289Cu)

/** \brief 28A0, TIM3 Channel 1 Filter Parameter 1 Register */
#define GTM_TIM3_CH1_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01028A0u)

/** \brief 28A4, TIM3 Channel 1 Control Register */
#define GTM_TIM3_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01028A4u)

/** \brief 28A8, TIM3 Channel 1 Extended Control Register */
#define GTM_TIM3_CH1_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01028A8u)

/** \brief 28AC, TIM3 Channel 1 Interrupt Notification Register */
#define GTM_TIM3_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01028ACu)

/** \brief 28B0, TIM3 Channel 1 Interrupt Enable Register */
#define GTM_TIM3_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01028B0u)

/** \brief 28B4, TIM3 Channel 1 Force Interrupt Register */
#define GTM_TIM3_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01028B4u)

/** \brief 28B8, TIM3 Channel 1 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01028B8u)

/** \brief 28BC, TIM3 Channel 1 Error Interrupt Enable Register */
#define GTM_TIM3_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01028BCu)

/** \brief 2900, TIM3 Channel 2 General Purpose 0 Register */
#define GTM_TIM3_CH2_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102900u)

/** \brief 2904, TIM3 Channel 2 General Purpose 1 Register */
#define GTM_TIM3_CH2_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102904u)

/** \brief 2908, TIM3 Channel 2 SMU Counter Register */
#define GTM_TIM3_CH2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102908u)

/** \brief 290C, TIM3 Channel 2 SMU Edge Counter Register */
#define GTM_TIM3_CH2_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010290Cu)

/** \brief 2910, TIM3 Channel 2 SMU Shadow Counter Register */
#define GTM_TIM3_CH2_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102910u)

/** \brief 2914, TIM3 Channel 2 TDU Counter Register */
#define GTM_TIM3_CH2_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102914u)

/** \brief 2918, TIM3 Channel 2 TDU Control Register */
#define GTM_TIM3_CH2_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102918u)

/** \brief 291C, TIM3 Channel 2 Filter Parameter 0 Register */
#define GTM_TIM3_CH2_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010291Cu)

/** \brief 2920, TIM3 Channel 2 Filter Parameter 1 Register */
#define GTM_TIM3_CH2_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102920u)

/** \brief 2924, TIM3 Channel 2 Control Register */
#define GTM_TIM3_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102924u)

/** \brief 2928, TIM3 Channel 2 Extended Control Register */
#define GTM_TIM3_CH2_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102928u)

/** \brief 292C, TIM3 Channel 2 Interrupt Notification Register */
#define GTM_TIM3_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010292Cu)

/** \brief 2930, TIM3 Channel 2 Interrupt Enable Register */
#define GTM_TIM3_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102930u)

/** \brief 2934, TIM3 Channel 2 Force Interrupt Register */
#define GTM_TIM3_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102934u)

/** \brief 2938, TIM3 Channel 2 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102938u)

/** \brief 293C, TIM3 Channel 2 Error Interrupt Enable Register */
#define GTM_TIM3_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010293Cu)

/** \brief 2980, TIM3 Channel 3 General Purpose 0 Register */
#define GTM_TIM3_CH3_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102980u)

/** \brief 2984, TIM3 Channel 3 General Purpose 1 Register */
#define GTM_TIM3_CH3_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102984u)

/** \brief 2988, TIM3 Channel 3 SMU Counter Register */
#define GTM_TIM3_CH3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102988u)

/** \brief 298C, TIM3 Channel 3 SMU Edge Counter Register */
#define GTM_TIM3_CH3_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010298Cu)

/** \brief 2990, TIM3 Channel 3 SMU Shadow Counter Register */
#define GTM_TIM3_CH3_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102990u)

/** \brief 2994, TIM3 Channel 3 TDU Counter Register */
#define GTM_TIM3_CH3_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102994u)

/** \brief 2998, TIM3 Channel 3 TDU Control Register */
#define GTM_TIM3_CH3_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102998u)

/** \brief 299C, TIM3 Channel 3 Filter Parameter 0 Register */
#define GTM_TIM3_CH3_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010299Cu)

/** \brief 29A0, TIM3 Channel 3 Filter Parameter 1 Register */
#define GTM_TIM3_CH3_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01029A0u)

/** \brief 29A4, TIM3 Channel 3 Control Register */
#define GTM_TIM3_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01029A4u)

/** \brief 29A8, TIM3 Channel 3 Extended Control Register */
#define GTM_TIM3_CH3_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01029A8u)

/** \brief 29AC, TIM3 Channel 3 Interrupt Notification Register */
#define GTM_TIM3_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01029ACu)

/** \brief 29B0, TIM3 Channel 3 Interrupt Enable Register */
#define GTM_TIM3_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01029B0u)

/** \brief 29B4, TIM3 Channel 3 Force Interrupt Register */
#define GTM_TIM3_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01029B4u)

/** \brief 29B8, TIM3 Channel 3 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01029B8u)

/** \brief 29BC, TIM3 Channel 3 Error Interrupt Enable Register */
#define GTM_TIM3_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01029BCu)

/** \brief 2A00, TIM3 Channel 4 General Purpose 0 Register */
#define GTM_TIM3_CH4_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A00u)

/** \brief 2A04, TIM3 Channel 4 General Purpose 1 Register */
#define GTM_TIM3_CH4_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A04u)

/** \brief 2A08, TIM3 Channel 4 SMU Counter Register */
#define GTM_TIM3_CH4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A08u)

/** \brief 2A0C, TIM3 Channel 4 SMU Edge Counter Register */
#define GTM_TIM3_CH4_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102A0Cu)

/** \brief 2A10, TIM3 Channel 4 SMU Shadow Counter Register */
#define GTM_TIM3_CH4_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A10u)

/** \brief 2A14, TIM3 Channel 4 TDU Counter Register */
#define GTM_TIM3_CH4_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102A14u)

/** \brief 2A18, TIM3 Channel 4 TDU Control Register */
#define GTM_TIM3_CH4_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102A18u)

/** \brief 2A1C, TIM3 Channel 4 Filter Parameter 0 Register */
#define GTM_TIM3_CH4_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A1Cu)

/** \brief 2A20, TIM3 Channel 4 Filter Parameter 1 Register */
#define GTM_TIM3_CH4_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102A20u)

/** \brief 2A24, TIM3 Channel 4 Control Register */
#define GTM_TIM3_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102A24u)

/** \brief 2A28, TIM3 Channel 4 Extended Control Register */
#define GTM_TIM3_CH4_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102A28u)

/** \brief 2A2C, TIM3 Channel 4 Interrupt Notification Register */
#define GTM_TIM3_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102A2Cu)

/** \brief 2A30, TIM3 Channel 4 Interrupt Enable Register */
#define GTM_TIM3_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102A30u)

/** \brief 2A34, TIM3 Channel 4 Force Interrupt Register */
#define GTM_TIM3_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102A34u)

/** \brief 2A38, TIM3 Channel 4 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102A38u)

/** \brief 2A3C, TIM3 Channel 4 Error Interrupt Enable Register */
#define GTM_TIM3_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102A3Cu)

/** \brief 2A80, TIM3 Channel 5 General Purpose 0 Register */
#define GTM_TIM3_CH5_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A80u)

/** \brief 2A84, TIM3 Channel 5 General Purpose 1 Register */
#define GTM_TIM3_CH5_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A84u)

/** \brief 2A88, TIM3 Channel 5 SMU Counter Register */
#define GTM_TIM3_CH5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A88u)

/** \brief 2A8C, TIM3 Channel 5 SMU Edge Counter Register */
#define GTM_TIM3_CH5_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102A8Cu)

/** \brief 2A90, TIM3 Channel 5 SMU Shadow Counter Register */
#define GTM_TIM3_CH5_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A90u)

/** \brief 2A94, TIM3 Channel 5 TDU Counter Register */
#define GTM_TIM3_CH5_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102A94u)

/** \brief 2A98, TIM3 Channel 5 TDU Control Register */
#define GTM_TIM3_CH5_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102A98u)

/** \brief 2A9C, TIM3 Channel 5 Filter Parameter 0 Register */
#define GTM_TIM3_CH5_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A9Cu)

/** \brief 2AA0, TIM3 Channel 5 Filter Parameter 1 Register */
#define GTM_TIM3_CH5_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102AA0u)

/** \brief 2AA4, TIM3 Channel 5 Control Register */
#define GTM_TIM3_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102AA4u)

/** \brief 2AA8, TIM3 Channel 5 Extended Control Register */
#define GTM_TIM3_CH5_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102AA8u)

/** \brief 2AAC, TIM3 Channel 5 Interrupt Notification Register */
#define GTM_TIM3_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102AACu)

/** \brief 2AB0, TIM3 Channel 5 Interrupt Enable Register */
#define GTM_TIM3_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102AB0u)

/** \brief 2AB4, TIM3 Channel 5 Force Interrupt Register */
#define GTM_TIM3_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102AB4u)

/** \brief 2AB8, TIM3 Channel 5 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102AB8u)

/** \brief 2ABC, TIM3 Channel 5 Error Interrupt Enable Register */
#define GTM_TIM3_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102ABCu)

/** \brief 2B00, TIM3 Channel 6 General Purpose 0 Register */
#define GTM_TIM3_CH6_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B00u)

/** \brief 2B04, TIM3 Channel 6 General Purpose 1 Register */
#define GTM_TIM3_CH6_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B04u)

/** \brief 2B08, TIM3 Channel 6 SMU Counter Register */
#define GTM_TIM3_CH6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B08u)

/** \brief 2B0C, TIM3 Channel 6 SMU Edge Counter Register */
#define GTM_TIM3_CH6_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102B0Cu)

/** \brief 2B10, TIM3 Channel 6 SMU Shadow Counter Register */
#define GTM_TIM3_CH6_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B10u)

/** \brief 2B14, TIM3 Channel 6 TDU Counter Register */
#define GTM_TIM3_CH6_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102B14u)

/** \brief 2B18, TIM3 Channel 6 TDU Control Register */
#define GTM_TIM3_CH6_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102B18u)

/** \brief 2B1C, TIM3 Channel 6 Filter Parameter 0 Register */
#define GTM_TIM3_CH6_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B1Cu)

/** \brief 2B20, TIM3 Channel 6 Filter Parameter 1 Register */
#define GTM_TIM3_CH6_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102B20u)

/** \brief 2B24, TIM3 Channel 6 Control Register */
#define GTM_TIM3_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102B24u)

/** \brief 2B28, TIM3 Channel 6 Extended Control Register */
#define GTM_TIM3_CH6_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102B28u)

/** \brief 2B2C, TIM3 Channel 6 Interrupt Notification Register */
#define GTM_TIM3_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102B2Cu)

/** \brief 2B30, TIM3 Channel 6 Interrupt Enable Register */
#define GTM_TIM3_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102B30u)

/** \brief 2B34, TIM3 Channel 6 Force Interrupt Register */
#define GTM_TIM3_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102B34u)

/** \brief 2B38, TIM3 Channel 6 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102B38u)

/** \brief 2B3C, TIM3 Channel 6 Error Interrupt Enable Register */
#define GTM_TIM3_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102B3Cu)

/** \brief 2B80, TIM3 Channel 7 General Purpose 0 Register */
#define GTM_TIM3_CH7_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B80u)

/** \brief 2B84, TIM3 Channel 7 General Purpose 1 Register */
#define GTM_TIM3_CH7_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B84u)

/** \brief 2B88, TIM3 Channel 7 SMU Counter Register */
#define GTM_TIM3_CH7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B88u)

/** \brief 2B8C, TIM3 Channel 7 SMU Edge Counter Register */
#define GTM_TIM3_CH7_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102B8Cu)

/** \brief 2B90, TIM3 Channel 7 SMU Shadow Counter Register */
#define GTM_TIM3_CH7_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B90u)

/** \brief 2B94, TIM3 Channel 7 TDU Counter Register */
#define GTM_TIM3_CH7_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102B94u)

/** \brief 2B98, TIM3 Channel 7 TDU Control Register */
#define GTM_TIM3_CH7_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102B98u)

/** \brief 2B9C, TIM3 Channel 7 Filter Parameter 0 Register */
#define GTM_TIM3_CH7_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B9Cu)

/** \brief 2BA0, TIM3 Channel 7 Filter Parameter 1 Register */
#define GTM_TIM3_CH7_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102BA0u)

/** \brief 2BA4, TIM3 Channel 7 Control Register */
#define GTM_TIM3_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102BA4u)

/** \brief 2BA8, TIM3 Channel 7 Extended Control Register */
#define GTM_TIM3_CH7_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102BA8u)

/** \brief 2BAC, TIM3 Channel 7 Interrupt Notification Register */
#define GTM_TIM3_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102BACu)

/** \brief 2BB0, TIM3 Channel 7 Interrupt Enable Register */
#define GTM_TIM3_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102BB0u)

/** \brief 2BB4, TIM3 Channel 7 Force Interrupt Register */
#define GTM_TIM3_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102BB4u)

/** \brief 2BB8, TIM3 Channel 7 Interrupt Mode Configuration Register */
#define GTM_TIM3_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102BB8u)

/** \brief 2BBC, TIM3 Channel 7 Error Interrupt Enable Register */
#define GTM_TIM3_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102BBCu)

/** \brief 3000, TIM4 Channel 0 General Purpose 0 Register */
#define GTM_TIM4_CH0_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103000u)

/** \brief 3004, TIM4 Channel 0 General Purpose 1 Register */
#define GTM_TIM4_CH0_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103004u)

/** \brief 3008, TIM4 Channel 0 SMU Counter Register */
#define GTM_TIM4_CH0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103008u)

/** \brief 300C, TIM4 Channel 0 SMU Edge Counter Register */
#define GTM_TIM4_CH0_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010300Cu)

/** \brief 3010, TIM4 Channel 0 SMU Shadow Counter Register */
#define GTM_TIM4_CH0_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103010u)

/** \brief 3014, TIM4 Channel 0 TDU Counter Register */
#define GTM_TIM4_CH0_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103014u)

/** \brief 3018, TIM4 Channel 0 TDU Control Register */
#define GTM_TIM4_CH0_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103018u)

/** \brief 301C, TIM4 Channel 0 Filter Parameter 0 Register */
#define GTM_TIM4_CH0_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010301Cu)

/** \brief 3020, TIM4 Channel 0 Filter Parameter 1 Register */
#define GTM_TIM4_CH0_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103020u)

/** \brief 3024, TIM4 Channel 0 Control Register */
#define GTM_TIM4_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103024u)

/** \brief 3028, TIM4 Channel 0 Extended Control Register */
#define GTM_TIM4_CH0_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103028u)

/** \brief 302C, TIM4 Channel 0 Interrupt Notification Register */
#define GTM_TIM4_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010302Cu)

/** \brief 3030, TIM4 Channel 0 Interrupt Enable Register */
#define GTM_TIM4_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103030u)

/** \brief 3034, TIM4 Channel 0 Force Interrupt Register */
#define GTM_TIM4_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103034u)

/** \brief 3038, TIM4 Channel 0 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103038u)

/** \brief 303C, TIM4 Channel 0 Error Interrupt Enable Register */
#define GTM_TIM4_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010303Cu)

/** \brief 3074, TIM4 Input Value Observation Register */
#define GTM_TIM4_INP_VAL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_INP_VAL*)0xF0103074u)

/** \brief 3078, TIM4 AUX IN Source Selection Register */
#define GTM_TIM4_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0103078u)

/** \brief 307C, TIM4 Global Software Reset Register */
#define GTM_TIM4_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010307Cu)

/** \brief 3080, TIM4 Channel 1 General Purpose 0 Register */
#define GTM_TIM4_CH1_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103080u)

/** \brief 3084, TIM4 Channel 1 General Purpose 1 Register */
#define GTM_TIM4_CH1_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103084u)

/** \brief 3088, TIM4 Channel 1 SMU Counter Register */
#define GTM_TIM4_CH1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103088u)

/** \brief 308C, TIM4 Channel 1 SMU Edge Counter Register */
#define GTM_TIM4_CH1_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010308Cu)

/** \brief 3090, TIM4 Channel 1 SMU Shadow Counter Register */
#define GTM_TIM4_CH1_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103090u)

/** \brief 3094, TIM4 Channel 1 TDU Counter Register */
#define GTM_TIM4_CH1_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103094u)

/** \brief 3098, TIM4 Channel 1 TDU Control Register */
#define GTM_TIM4_CH1_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103098u)

/** \brief 309C, TIM4 Channel 1 Filter Parameter 0 Register */
#define GTM_TIM4_CH1_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010309Cu)

/** \brief 30A0, TIM4 Channel 1 Filter Parameter 1 Register */
#define GTM_TIM4_CH1_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01030A0u)

/** \brief 30A4, TIM4 Channel 1 Control Register */
#define GTM_TIM4_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01030A4u)

/** \brief 30A8, TIM4 Channel 1 Extended Control Register */
#define GTM_TIM4_CH1_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01030A8u)

/** \brief 30AC, TIM4 Channel 1 Interrupt Notification Register */
#define GTM_TIM4_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01030ACu)

/** \brief 30B0, TIM4 Channel 1 Interrupt Enable Register */
#define GTM_TIM4_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01030B0u)

/** \brief 30B4, TIM4 Channel 1 Force Interrupt Register */
#define GTM_TIM4_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01030B4u)

/** \brief 30B8, TIM4 Channel 1 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01030B8u)

/** \brief 30BC, TIM4 Channel 1 Error Interrupt Enable Register */
#define GTM_TIM4_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01030BCu)

/** \brief 3100, TIM4 Channel 2 General Purpose 0 Register */
#define GTM_TIM4_CH2_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103100u)

/** \brief 3104, TIM4 Channel 2 General Purpose 1 Register */
#define GTM_TIM4_CH2_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103104u)

/** \brief 3108, TIM4 Channel 2 SMU Counter Register */
#define GTM_TIM4_CH2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103108u)

/** \brief 310C, TIM4 Channel 2 SMU Edge Counter Register */
#define GTM_TIM4_CH2_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010310Cu)

/** \brief 3110, TIM4 Channel 2 SMU Shadow Counter Register */
#define GTM_TIM4_CH2_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103110u)

/** \brief 3114, TIM4 Channel 2 TDU Counter Register */
#define GTM_TIM4_CH2_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103114u)

/** \brief 3118, TIM4 Channel 2 TDU Control Register */
#define GTM_TIM4_CH2_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103118u)

/** \brief 311C, TIM4 Channel 2 Filter Parameter 0 Register */
#define GTM_TIM4_CH2_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010311Cu)

/** \brief 3120, TIM4 Channel 2 Filter Parameter 1 Register */
#define GTM_TIM4_CH2_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103120u)

/** \brief 3124, TIM4 Channel 2 Control Register */
#define GTM_TIM4_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103124u)

/** \brief 3128, TIM4 Channel 2 Extended Control Register */
#define GTM_TIM4_CH2_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103128u)

/** \brief 312C, TIM4 Channel 2 Interrupt Notification Register */
#define GTM_TIM4_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010312Cu)

/** \brief 3130, TIM4 Channel 2 Interrupt Enable Register */
#define GTM_TIM4_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103130u)

/** \brief 3134, TIM4 Channel 2 Force Interrupt Register */
#define GTM_TIM4_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103134u)

/** \brief 3138, TIM4 Channel 2 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103138u)

/** \brief 313C, TIM4 Channel 2 Error Interrupt Enable Register */
#define GTM_TIM4_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010313Cu)

/** \brief 3180, TIM4 Channel 3 General Purpose 0 Register */
#define GTM_TIM4_CH3_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103180u)

/** \brief 3184, TIM4 Channel 3 General Purpose 1 Register */
#define GTM_TIM4_CH3_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103184u)

/** \brief 3188, TIM4 Channel 3 SMU Counter Register */
#define GTM_TIM4_CH3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103188u)

/** \brief 318C, TIM4 Channel 3 SMU Edge Counter Register */
#define GTM_TIM4_CH3_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010318Cu)

/** \brief 3190, TIM4 Channel 3 SMU Shadow Counter Register */
#define GTM_TIM4_CH3_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103190u)

/** \brief 3194, TIM4 Channel 3 TDU Counter Register */
#define GTM_TIM4_CH3_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103194u)

/** \brief 3198, TIM4 Channel 3 TDU Control Register */
#define GTM_TIM4_CH3_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103198u)

/** \brief 319C, TIM4 Channel 3 Filter Parameter 0 Register */
#define GTM_TIM4_CH3_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010319Cu)

/** \brief 31A0, TIM4 Channel 3 Filter Parameter 1 Register */
#define GTM_TIM4_CH3_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01031A0u)

/** \brief 31A4, TIM4 Channel 3 Control Register */
#define GTM_TIM4_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01031A4u)

/** \brief 31A8, TIM4 Channel 3 Extended Control Register */
#define GTM_TIM4_CH3_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01031A8u)

/** \brief 31AC, TIM4 Channel 3 Interrupt Notification Register */
#define GTM_TIM4_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01031ACu)

/** \brief 31B0, TIM4 Channel 3 Interrupt Enable Register */
#define GTM_TIM4_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01031B0u)

/** \brief 31B4, TIM4 Channel 3 Force Interrupt Register */
#define GTM_TIM4_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01031B4u)

/** \brief 31B8, TIM4 Channel 3 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01031B8u)

/** \brief 31BC, TIM4 Channel 3 Error Interrupt Enable Register */
#define GTM_TIM4_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01031BCu)

/** \brief 3200, TIM4 Channel 4 General Purpose 0 Register */
#define GTM_TIM4_CH4_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103200u)

/** \brief 3204, TIM4 Channel 4 General Purpose 1 Register */
#define GTM_TIM4_CH4_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103204u)

/** \brief 3208, TIM4 Channel 4 SMU Counter Register */
#define GTM_TIM4_CH4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103208u)

/** \brief 320C, TIM4 Channel 4 SMU Edge Counter Register */
#define GTM_TIM4_CH4_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010320Cu)

/** \brief 3210, TIM4 Channel 4 SMU Shadow Counter Register */
#define GTM_TIM4_CH4_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103210u)

/** \brief 3214, TIM4 Channel 4 TDU Counter Register */
#define GTM_TIM4_CH4_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103214u)

/** \brief 3218, TIM4 Channel 4 TDU Control Register */
#define GTM_TIM4_CH4_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103218u)

/** \brief 321C, TIM4 Channel 4 Filter Parameter 0 Register */
#define GTM_TIM4_CH4_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010321Cu)

/** \brief 3220, TIM4 Channel 4 Filter Parameter 1 Register */
#define GTM_TIM4_CH4_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103220u)

/** \brief 3224, TIM4 Channel 4 Control Register */
#define GTM_TIM4_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103224u)

/** \brief 3228, TIM4 Channel 4 Extended Control Register */
#define GTM_TIM4_CH4_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103228u)

/** \brief 322C, TIM4 Channel 4 Interrupt Notification Register */
#define GTM_TIM4_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010322Cu)

/** \brief 3230, TIM4 Channel 4 Interrupt Enable Register */
#define GTM_TIM4_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103230u)

/** \brief 3234, TIM4 Channel 4 Force Interrupt Register */
#define GTM_TIM4_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103234u)

/** \brief 3238, TIM4 Channel 4 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103238u)

/** \brief 323C, TIM4 Channel 4 Error Interrupt Enable Register */
#define GTM_TIM4_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010323Cu)

/** \brief 3280, TIM4 Channel 5 General Purpose 0 Register */
#define GTM_TIM4_CH5_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103280u)

/** \brief 3284, TIM4 Channel 5 General Purpose 1 Register */
#define GTM_TIM4_CH5_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103284u)

/** \brief 3288, TIM4 Channel 5 SMU Counter Register */
#define GTM_TIM4_CH5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103288u)

/** \brief 328C, TIM4 Channel 5 SMU Edge Counter Register */
#define GTM_TIM4_CH5_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010328Cu)

/** \brief 3290, TIM4 Channel 5 SMU Shadow Counter Register */
#define GTM_TIM4_CH5_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103290u)

/** \brief 3294, TIM4 Channel 5 TDU Counter Register */
#define GTM_TIM4_CH5_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103294u)

/** \brief 3298, TIM4 Channel 5 TDU Control Register */
#define GTM_TIM4_CH5_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103298u)

/** \brief 329C, TIM4 Channel 5 Filter Parameter 0 Register */
#define GTM_TIM4_CH5_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010329Cu)

/** \brief 32A0, TIM4 Channel 5 Filter Parameter 1 Register */
#define GTM_TIM4_CH5_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01032A0u)

/** \brief 32A4, TIM4 Channel 5 Control Register */
#define GTM_TIM4_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01032A4u)

/** \brief 32A8, TIM4 Channel 5 Extended Control Register */
#define GTM_TIM4_CH5_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01032A8u)

/** \brief 32AC, TIM4 Channel 5 Interrupt Notification Register */
#define GTM_TIM4_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01032ACu)

/** \brief 32B0, TIM4 Channel 5 Interrupt Enable Register */
#define GTM_TIM4_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01032B0u)

/** \brief 32B4, TIM4 Channel 5 Force Interrupt Register */
#define GTM_TIM4_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01032B4u)

/** \brief 32B8, TIM4 Channel 5 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01032B8u)

/** \brief 32BC, TIM4 Channel 5 Error Interrupt Enable Register */
#define GTM_TIM4_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01032BCu)

/** \brief 3300, TIM4 Channel 6 General Purpose 0 Register */
#define GTM_TIM4_CH6_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103300u)

/** \brief 3304, TIM4 Channel 6 General Purpose 1 Register */
#define GTM_TIM4_CH6_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103304u)

/** \brief 3308, TIM4 Channel 6 SMU Counter Register */
#define GTM_TIM4_CH6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103308u)

/** \brief 330C, TIM4 Channel 6 SMU Edge Counter Register */
#define GTM_TIM4_CH6_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010330Cu)

/** \brief 3310, TIM4 Channel 6 SMU Shadow Counter Register */
#define GTM_TIM4_CH6_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103310u)

/** \brief 3314, TIM4 Channel 6 TDU Counter Register */
#define GTM_TIM4_CH6_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103314u)

/** \brief 3318, TIM4 Channel 6 TDU Control Register */
#define GTM_TIM4_CH6_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103318u)

/** \brief 331C, TIM4 Channel 6 Filter Parameter 0 Register */
#define GTM_TIM4_CH6_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010331Cu)

/** \brief 3320, TIM4 Channel 6 Filter Parameter 1 Register */
#define GTM_TIM4_CH6_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103320u)

/** \brief 3324, TIM4 Channel 6 Control Register */
#define GTM_TIM4_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103324u)

/** \brief 3328, TIM4 Channel 6 Extended Control Register */
#define GTM_TIM4_CH6_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103328u)

/** \brief 332C, TIM4 Channel 6 Interrupt Notification Register */
#define GTM_TIM4_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010332Cu)

/** \brief 3330, TIM4 Channel 6 Interrupt Enable Register */
#define GTM_TIM4_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103330u)

/** \brief 3334, TIM4 Channel 6 Force Interrupt Register */
#define GTM_TIM4_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103334u)

/** \brief 3338, TIM4 Channel 6 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103338u)

/** \brief 333C, TIM4 Channel 6 Error Interrupt Enable Register */
#define GTM_TIM4_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010333Cu)

/** \brief 3380, TIM4 Channel 7 General Purpose 0 Register */
#define GTM_TIM4_CH7_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103380u)

/** \brief 3384, TIM4 Channel 7 General Purpose 1 Register */
#define GTM_TIM4_CH7_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103384u)

/** \brief 3388, TIM4 Channel 7 SMU Counter Register */
#define GTM_TIM4_CH7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103388u)

/** \brief 338C, TIM4 Channel 7 SMU Edge Counter Register */
#define GTM_TIM4_CH7_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010338Cu)

/** \brief 3390, TIM4 Channel 7 SMU Shadow Counter Register */
#define GTM_TIM4_CH7_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103390u)

/** \brief 3394, TIM4 Channel 7 TDU Counter Register */
#define GTM_TIM4_CH7_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103394u)

/** \brief 3398, TIM4 Channel 7 TDU Control Register */
#define GTM_TIM4_CH7_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103398u)

/** \brief 339C, TIM4 Channel 7 Filter Parameter 0 Register */
#define GTM_TIM4_CH7_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010339Cu)

/** \brief 33A0, TIM4 Channel 7 Filter Parameter 1 Register */
#define GTM_TIM4_CH7_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01033A0u)

/** \brief 33A4, TIM4 Channel 7 Control Register */
#define GTM_TIM4_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01033A4u)

/** \brief 33A8, TIM4 Channel 7 Extended Control Register */
#define GTM_TIM4_CH7_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01033A8u)

/** \brief 33AC, TIM4 Channel 7 Interrupt Notification Register */
#define GTM_TIM4_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01033ACu)

/** \brief 33B0, TIM4 Channel 7 Interrupt Enable Register */
#define GTM_TIM4_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01033B0u)

/** \brief 33B4, TIM4 Channel 7 Force Interrupt Register */
#define GTM_TIM4_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01033B4u)

/** \brief 33B8, TIM4 Channel 7 Interrupt Mode Configuration Register */
#define GTM_TIM4_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01033B8u)

/** \brief 33BC, TIM4 Channel 7 Error Interrupt Enable Register */
#define GTM_TIM4_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01033BCu)

/** \brief 3800, TIM5 Channel 0 General Purpose 0 Register */
#define GTM_TIM5_CH0_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103800u)

/** \brief 3804, TIM5 Channel 0 General Purpose 1 Register */
#define GTM_TIM5_CH0_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103804u)

/** \brief 3808, TIM5 Channel 0 SMU Counter Register */
#define GTM_TIM5_CH0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103808u)

/** \brief 380C, TIM5 Channel 0 SMU Edge Counter Register */
#define GTM_TIM5_CH0_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010380Cu)

/** \brief 3810, TIM5 Channel 0 SMU Shadow Counter Register */
#define GTM_TIM5_CH0_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103810u)

/** \brief 3814, TIM5 Channel 0 TDU Counter Register */
#define GTM_TIM5_CH0_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103814u)

/** \brief 3818, TIM5 Channel 0 TDU Control Register */
#define GTM_TIM5_CH0_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103818u)

/** \brief 381C, TIM5 Channel 0 Filter Parameter 0 Register */
#define GTM_TIM5_CH0_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010381Cu)

/** \brief 3820, TIM5 Channel 0 Filter Parameter 1 Register */
#define GTM_TIM5_CH0_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103820u)

/** \brief 3824, TIM5 Channel 0 Control Register */
#define GTM_TIM5_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103824u)

/** \brief 3828, TIM5 Channel 0 Extended Control Register */
#define GTM_TIM5_CH0_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103828u)

/** \brief 382C, TIM5 Channel 0 Interrupt Notification Register */
#define GTM_TIM5_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010382Cu)

/** \brief 3830, TIM5 Channel 0 Interrupt Enable Register */
#define GTM_TIM5_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103830u)

/** \brief 3834, TIM5 Channel 0 Force Interrupt Register */
#define GTM_TIM5_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103834u)

/** \brief 3838, TIM5 Channel 0 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103838u)

/** \brief 383C, TIM5 Channel 0 Error Interrupt Enable Register */
#define GTM_TIM5_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010383Cu)

/** \brief 3874, TIM5 Input Value Observation Register */
#define GTM_TIM5_INP_VAL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_INP_VAL*)0xF0103874u)

/** \brief 3878, TIM5 AUX IN Source Selection Register */
#define GTM_TIM5_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0103878u)

/** \brief 387C, TIM5 Global Software Reset Register */
#define GTM_TIM5_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010387Cu)

/** \brief 3880, TIM5 Channel 1 General Purpose 0 Register */
#define GTM_TIM5_CH1_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103880u)

/** \brief 3884, TIM5 Channel 1 General Purpose 1 Register */
#define GTM_TIM5_CH1_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103884u)

/** \brief 3888, TIM5 Channel 1 SMU Counter Register */
#define GTM_TIM5_CH1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103888u)

/** \brief 388C, TIM5 Channel 1 SMU Edge Counter Register */
#define GTM_TIM5_CH1_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010388Cu)

/** \brief 3890, TIM5 Channel 1 SMU Shadow Counter Register */
#define GTM_TIM5_CH1_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103890u)

/** \brief 3894, TIM5 Channel 1 TDU Counter Register */
#define GTM_TIM5_CH1_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103894u)

/** \brief 3898, TIM5 Channel 1 TDU Control Register */
#define GTM_TIM5_CH1_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103898u)

/** \brief 389C, TIM5 Channel 1 Filter Parameter 0 Register */
#define GTM_TIM5_CH1_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010389Cu)

/** \brief 38A0, TIM5 Channel 1 Filter Parameter 1 Register */
#define GTM_TIM5_CH1_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01038A0u)

/** \brief 38A4, TIM5 Channel 1 Control Register */
#define GTM_TIM5_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01038A4u)

/** \brief 38A8, TIM5 Channel 1 Extended Control Register */
#define GTM_TIM5_CH1_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01038A8u)

/** \brief 38AC, TIM5 Channel 1 Interrupt Notification Register */
#define GTM_TIM5_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01038ACu)

/** \brief 38B0, TIM5 Channel 1 Interrupt Enable Register */
#define GTM_TIM5_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01038B0u)

/** \brief 38B4, TIM5 Channel 1 Force Interrupt Register */
#define GTM_TIM5_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01038B4u)

/** \brief 38B8, TIM5 Channel 1 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01038B8u)

/** \brief 38BC, TIM5 Channel 1 Error Interrupt Enable Register */
#define GTM_TIM5_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01038BCu)

/** \brief 3900, TIM5 Channel 2 General Purpose 0 Register */
#define GTM_TIM5_CH2_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103900u)

/** \brief 3904, TIM5 Channel 2 General Purpose 1 Register */
#define GTM_TIM5_CH2_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103904u)

/** \brief 3908, TIM5 Channel 2 SMU Counter Register */
#define GTM_TIM5_CH2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103908u)

/** \brief 390C, TIM5 Channel 2 SMU Edge Counter Register */
#define GTM_TIM5_CH2_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010390Cu)

/** \brief 3910, TIM5 Channel 2 SMU Shadow Counter Register */
#define GTM_TIM5_CH2_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103910u)

/** \brief 3914, TIM5 Channel 2 TDU Counter Register */
#define GTM_TIM5_CH2_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103914u)

/** \brief 3918, TIM5 Channel 2 TDU Control Register */
#define GTM_TIM5_CH2_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103918u)

/** \brief 391C, TIM5 Channel 2 Filter Parameter 0 Register */
#define GTM_TIM5_CH2_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010391Cu)

/** \brief 3920, TIM5 Channel 2 Filter Parameter 1 Register */
#define GTM_TIM5_CH2_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103920u)

/** \brief 3924, TIM5 Channel 2 Control Register */
#define GTM_TIM5_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103924u)

/** \brief 3928, TIM5 Channel 2 Extended Control Register */
#define GTM_TIM5_CH2_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103928u)

/** \brief 392C, TIM5 Channel 2 Interrupt Notification Register */
#define GTM_TIM5_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010392Cu)

/** \brief 3930, TIM5 Channel 2 Interrupt Enable Register */
#define GTM_TIM5_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103930u)

/** \brief 3934, TIM5 Channel 2 Force Interrupt Register */
#define GTM_TIM5_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103934u)

/** \brief 3938, TIM5 Channel 2 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103938u)

/** \brief 393C, TIM5 Channel 2 Error Interrupt Enable Register */
#define GTM_TIM5_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010393Cu)

/** \brief 3980, TIM5 Channel 3 General Purpose 0 Register */
#define GTM_TIM5_CH3_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103980u)

/** \brief 3984, TIM5 Channel 3 General Purpose 1 Register */
#define GTM_TIM5_CH3_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103984u)

/** \brief 3988, TIM5 Channel 3 SMU Counter Register */
#define GTM_TIM5_CH3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103988u)

/** \brief 398C, TIM5 Channel 3 SMU Edge Counter Register */
#define GTM_TIM5_CH3_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010398Cu)

/** \brief 3990, TIM5 Channel 3 SMU Shadow Counter Register */
#define GTM_TIM5_CH3_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103990u)

/** \brief 3994, TIM5 Channel 3 TDU Counter Register */
#define GTM_TIM5_CH3_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103994u)

/** \brief 3998, TIM5 Channel 3 TDU Control Register */
#define GTM_TIM5_CH3_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103998u)

/** \brief 399C, TIM5 Channel 3 Filter Parameter 0 Register */
#define GTM_TIM5_CH3_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010399Cu)

/** \brief 39A0, TIM5 Channel 3 Filter Parameter 1 Register */
#define GTM_TIM5_CH3_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01039A0u)

/** \brief 39A4, TIM5 Channel 3 Control Register */
#define GTM_TIM5_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01039A4u)

/** \brief 39A8, TIM5 Channel 3 Extended Control Register */
#define GTM_TIM5_CH3_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01039A8u)

/** \brief 39AC, TIM5 Channel 3 Interrupt Notification Register */
#define GTM_TIM5_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01039ACu)

/** \brief 39B0, TIM5 Channel 3 Interrupt Enable Register */
#define GTM_TIM5_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01039B0u)

/** \brief 39B4, TIM5 Channel 3 Force Interrupt Register */
#define GTM_TIM5_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01039B4u)

/** \brief 39B8, TIM5 Channel 3 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01039B8u)

/** \brief 39BC, TIM5 Channel 3 Error Interrupt Enable Register */
#define GTM_TIM5_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01039BCu)

/** \brief 3A00, TIM5 Channel 4 General Purpose 0 Register */
#define GTM_TIM5_CH4_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103A00u)

/** \brief 3A04, TIM5 Channel 4 General Purpose 1 Register */
#define GTM_TIM5_CH4_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103A04u)

/** \brief 3A08, TIM5 Channel 4 SMU Counter Register */
#define GTM_TIM5_CH4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103A08u)

/** \brief 3A0C, TIM5 Channel 4 SMU Edge Counter Register */
#define GTM_TIM5_CH4_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103A0Cu)

/** \brief 3A10, TIM5 Channel 4 SMU Shadow Counter Register */
#define GTM_TIM5_CH4_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103A10u)

/** \brief 3A14, TIM5 Channel 4 TDU Counter Register */
#define GTM_TIM5_CH4_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103A14u)

/** \brief 3A18, TIM5 Channel 4 TDU Control Register */
#define GTM_TIM5_CH4_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103A18u)

/** \brief 3A1C, TIM5 Channel 4 Filter Parameter 0 Register */
#define GTM_TIM5_CH4_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103A1Cu)

/** \brief 3A20, TIM5 Channel 4 Filter Parameter 1 Register */
#define GTM_TIM5_CH4_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103A20u)

/** \brief 3A24, TIM5 Channel 4 Control Register */
#define GTM_TIM5_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103A24u)

/** \brief 3A28, TIM5 Channel 4 Extended Control Register */
#define GTM_TIM5_CH4_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103A28u)

/** \brief 3A2C, TIM5 Channel 4 Interrupt Notification Register */
#define GTM_TIM5_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103A2Cu)

/** \brief 3A30, TIM5 Channel 4 Interrupt Enable Register */
#define GTM_TIM5_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103A30u)

/** \brief 3A34, TIM5 Channel 4 Force Interrupt Register */
#define GTM_TIM5_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103A34u)

/** \brief 3A38, TIM5 Channel 4 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103A38u)

/** \brief 3A3C, TIM5 Channel 4 Error Interrupt Enable Register */
#define GTM_TIM5_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103A3Cu)

/** \brief 3A80, TIM5 Channel 5 General Purpose 0 Register */
#define GTM_TIM5_CH5_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103A80u)

/** \brief 3A84, TIM5 Channel 5 General Purpose 1 Register */
#define GTM_TIM5_CH5_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103A84u)

/** \brief 3A88, TIM5 Channel 5 SMU Counter Register */
#define GTM_TIM5_CH5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103A88u)

/** \brief 3A8C, TIM5 Channel 5 SMU Edge Counter Register */
#define GTM_TIM5_CH5_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103A8Cu)

/** \brief 3A90, TIM5 Channel 5 SMU Shadow Counter Register */
#define GTM_TIM5_CH5_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103A90u)

/** \brief 3A94, TIM5 Channel 5 TDU Counter Register */
#define GTM_TIM5_CH5_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103A94u)

/** \brief 3A98, TIM5 Channel 5 TDU Control Register */
#define GTM_TIM5_CH5_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103A98u)

/** \brief 3A9C, TIM5 Channel 5 Filter Parameter 0 Register */
#define GTM_TIM5_CH5_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103A9Cu)

/** \brief 3AA0, TIM5 Channel 5 Filter Parameter 1 Register */
#define GTM_TIM5_CH5_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103AA0u)

/** \brief 3AA4, TIM5 Channel 5 Control Register */
#define GTM_TIM5_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103AA4u)

/** \brief 3AA8, TIM5 Channel 5 Extended Control Register */
#define GTM_TIM5_CH5_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103AA8u)

/** \brief 3AAC, TIM5 Channel 5 Interrupt Notification Register */
#define GTM_TIM5_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103AACu)

/** \brief 3AB0, TIM5 Channel 5 Interrupt Enable Register */
#define GTM_TIM5_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103AB0u)

/** \brief 3AB4, TIM5 Channel 5 Force Interrupt Register */
#define GTM_TIM5_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103AB4u)

/** \brief 3AB8, TIM5 Channel 5 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103AB8u)

/** \brief 3ABC, TIM5 Channel 5 Error Interrupt Enable Register */
#define GTM_TIM5_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103ABCu)

/** \brief 3B00, TIM5 Channel 6 General Purpose 0 Register */
#define GTM_TIM5_CH6_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103B00u)

/** \brief 3B04, TIM5 Channel 6 General Purpose 1 Register */
#define GTM_TIM5_CH6_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103B04u)

/** \brief 3B08, TIM5 Channel 6 SMU Counter Register */
#define GTM_TIM5_CH6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103B08u)

/** \brief 3B0C, TIM5 Channel 6 SMU Edge Counter Register */
#define GTM_TIM5_CH6_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103B0Cu)

/** \brief 3B10, TIM5 Channel 6 SMU Shadow Counter Register */
#define GTM_TIM5_CH6_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103B10u)

/** \brief 3B14, TIM5 Channel 6 TDU Counter Register */
#define GTM_TIM5_CH6_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103B14u)

/** \brief 3B18, TIM5 Channel 6 TDU Control Register */
#define GTM_TIM5_CH6_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103B18u)

/** \brief 3B1C, TIM5 Channel 6 Filter Parameter 0 Register */
#define GTM_TIM5_CH6_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103B1Cu)

/** \brief 3B20, TIM5 Channel 6 Filter Parameter 1 Register */
#define GTM_TIM5_CH6_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103B20u)

/** \brief 3B24, TIM5 Channel 6 Control Register */
#define GTM_TIM5_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103B24u)

/** \brief 3B28, TIM5 Channel 6 Extended Control Register */
#define GTM_TIM5_CH6_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103B28u)

/** \brief 3B2C, TIM5 Channel 6 Interrupt Notification Register */
#define GTM_TIM5_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103B2Cu)

/** \brief 3B30, TIM5 Channel 6 Interrupt Enable Register */
#define GTM_TIM5_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103B30u)

/** \brief 3B34, TIM5 Channel 6 Force Interrupt Register */
#define GTM_TIM5_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103B34u)

/** \brief 3B38, TIM5 Channel 6 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103B38u)

/** \brief 3B3C, TIM5 Channel 6 Error Interrupt Enable Register */
#define GTM_TIM5_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103B3Cu)

/** \brief 3B80, TIM5 Channel 7 General Purpose 0 Register */
#define GTM_TIM5_CH7_GPR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103B80u)

/** \brief 3B84, TIM5 Channel 7 General Purpose 1 Register */
#define GTM_TIM5_CH7_GPR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103B84u)

/** \brief 3B88, TIM5 Channel 7 SMU Counter Register */
#define GTM_TIM5_CH7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103B88u)

/** \brief 3B8C, TIM5 Channel 7 SMU Edge Counter Register */
#define GTM_TIM5_CH7_ECNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103B8Cu)

/** \brief 3B90, TIM5 Channel 7 SMU Shadow Counter Register */
#define GTM_TIM5_CH7_CNTS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103B90u)

/** \brief 3B94, TIM5 Channel 7 TDU Counter Register */
#define GTM_TIM5_CH7_TDUC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103B94u)

/** \brief 3B98, TIM5 Channel 7 TDU Control Register */
#define GTM_TIM5_CH7_TDUV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103B98u)

/** \brief 3B9C, TIM5 Channel 7 Filter Parameter 0 Register */
#define GTM_TIM5_CH7_FLT_RE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103B9Cu)

/** \brief 3BA0, TIM5 Channel 7 Filter Parameter 1 Register */
#define GTM_TIM5_CH7_FLT_FE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103BA0u)

/** \brief 3BA4, TIM5 Channel 7 Control Register */
#define GTM_TIM5_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103BA4u)

/** \brief 3BA8, TIM5 Channel 7 Extended Control Register */
#define GTM_TIM5_CH7_ECTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103BA8u)

/** \brief 3BAC, TIM5 Channel 7 Interrupt Notification Register */
#define GTM_TIM5_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103BACu)

/** \brief 3BB0, TIM5 Channel 7 Interrupt Enable Register */
#define GTM_TIM5_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103BB0u)

/** \brief 3BB4, TIM5 Channel 7 Force Interrupt Register */
#define GTM_TIM5_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103BB4u)

/** \brief 3BB8, TIM5 Channel 7 Interrupt Mode Configuration Register */
#define GTM_TIM5_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103BB8u)

/** \brief 3BBC, TIM5 Channel 7 Error Interrupt Enable Register */
#define GTM_TIM5_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103BBCu)

/** \brief 8000, TOM0 Channel 0 Control Register */
#define GTM_TOM0_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108000u)

/** \brief 8004, TOM0 Channel 0 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108004u)

/** \brief 8008, TOM0 Channel 0 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108008u)

/** \brief 800C, TOM0 Channel 0 CCU0 Compare Register */
#define GTM_TOM0_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010800Cu)

/** \brief 8010, TOM0 Channel 0 CCU1 Compare Register */
#define GTM_TOM0_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108010u)

/** \brief 8014, TOM0 Channel 0 CCU0 Counter Register */
#define GTM_TOM0_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108014u)

/** \brief 8018, TOM0 Channel 0 Status Register */
#define GTM_TOM0_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108018u)

/** \brief 801C, TOM0 Channel 0 Interrupt Notification Register */
#define GTM_TOM0_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010801Cu)

/** \brief 8020, TOM0 Channel 0 Interrupt Enable Register */
#define GTM_TOM0_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108020u)

/** \brief 8024, TOM0 Channel 0 Force Interrupt Register */
#define GTM_TOM0_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108024u)

/** \brief 8028, TOM0 Channel 0 Interrupt Mode Register */
#define GTM_TOM0_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108028u)

/** \brief 8030, TOM0 TGC0 Global Control Register */
#define GTM_TOM0_TGC0_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108030u)

/** \brief 8034, TOM0 TGC0 Action Time Base Register */
#define GTM_TOM0_TGC0_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF0108034u)

/** \brief 8038, TOM0 TGC0 Force Update Control Register */
#define GTM_TOM0_TGC0_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108038u)

/** \brief 803C, TOM0 TGC0 Internal Trigger Control Register */
#define GTM_TOM0_TGC0_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010803Cu)

/** \brief 8040, TOM0 Channel 1 Control Register */
#define GTM_TOM0_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108040u)

/** \brief 8044, TOM0 Channel 1 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108044u)

/** \brief 8048, TOM0 Channel 1 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108048u)

/** \brief 804C, TOM0 Channel 1 CCU0 Compare Register */
#define GTM_TOM0_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010804Cu)

/** \brief 8050, TOM0 Channel 1 CCU1 Compare Register */
#define GTM_TOM0_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108050u)

/** \brief 8054, TOM0 Channel 1 CCU0 Counter Register */
#define GTM_TOM0_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108054u)

/** \brief 8058, TOM0 Channel 1 Status Register */
#define GTM_TOM0_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108058u)

/** \brief 805C, TOM0 Channel 1 Interrupt Notification Register */
#define GTM_TOM0_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010805Cu)

/** \brief 8060, TOM0 Channel 1 Interrupt Enable Register */
#define GTM_TOM0_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108060u)

/** \brief 8064, TOM0 Channel 1 Force Interrupt Register */
#define GTM_TOM0_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108064u)

/** \brief 8068, TOM0 Channel 1 Interrupt Mode Register */
#define GTM_TOM0_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108068u)

/** \brief 8070, TOM0 TGC0 Enable/Disable Control Register */
#define GTM_TOM0_TGC0_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108070u)

/** \brief 8074, TOM0 TGC0 Enable/Disable Status Register */
#define GTM_TOM0_TGC0_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108074u)

/** \brief 8078, TOM0 TGC0 Output Enable Control Register */
#define GTM_TOM0_TGC0_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108078u)

/** \brief 807C, TOM0 TGC0 Output Enable Status Register */
#define GTM_TOM0_TGC0_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF010807Cu)

/** \brief 8080, TOM0 Channel 2 Control Register */
#define GTM_TOM0_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108080u)

/** \brief 8084, TOM0 Channel 2 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108084u)

/** \brief 8088, TOM0 Channel 2 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108088u)

/** \brief 808C, TOM0 Channel 2 CCU0 Compare Register */
#define GTM_TOM0_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010808Cu)

/** \brief 8090, TOM0 Channel 2 CCU1 Compare Register */
#define GTM_TOM0_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108090u)

/** \brief 8094, TOM0 Channel 2 CCU0 Counter Register */
#define GTM_TOM0_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108094u)

/** \brief 8098, TOM0 Channel 2 Status Register */
#define GTM_TOM0_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108098u)

/** \brief 809C, TOM0 Channel 2 Interrupt Notification Register */
#define GTM_TOM0_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010809Cu)

/** \brief 80A0, TOM0 Channel 2 Interrupt Enable Register */
#define GTM_TOM0_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080A0u)

/** \brief 80A4, TOM0 Channel 2 Force Interrupt Register */
#define GTM_TOM0_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080A4u)

/** \brief 80A8, TOM0 Channel 2 Interrupt Mode Register */
#define GTM_TOM0_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080A8u)

/** \brief 80C0, TOM0 Channel 3 Control Register */
#define GTM_TOM0_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01080C0u)

/** \brief 80C4, TOM0 Channel 3 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01080C4u)

/** \brief 80C8, TOM0 Channel 3 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01080C8u)

/** \brief 80CC, TOM0 Channel 3 CCU0 Compare Register */
#define GTM_TOM0_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01080CCu)

/** \brief 80D0, TOM0 Channel 3 CCU1 Compare Register */
#define GTM_TOM0_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01080D0u)

/** \brief 80D4, TOM0 Channel 3 CCU0 Counter Register */
#define GTM_TOM0_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01080D4u)

/** \brief 80D8, TOM0 Channel 3 Status Register */
#define GTM_TOM0_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01080D8u)

/** \brief 80DC, TOM0 Channel 3 Interrupt Notification Register */
#define GTM_TOM0_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01080DCu)

/** \brief 80E0, TOM0 Channel 3 Interrupt Enable Register */
#define GTM_TOM0_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080E0u)

/** \brief 80E4, TOM0 Channel 3 Force Interrupt Register */
#define GTM_TOM0_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080E4u)

/** \brief 80E8, TOM0 Channel 3 Interrupt Mode Register */
#define GTM_TOM0_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080E8u)

/** \brief 8100, TOM0 Channel 4 Control Register */
#define GTM_TOM0_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108100u)

/** \brief 8104, TOM0 Channel 4 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108104u)

/** \brief 8108, TOM0 Channel 4 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108108u)

/** \brief 810C, TOM0 Channel 4 CCU0 Compare Register */
#define GTM_TOM0_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010810Cu)

/** \brief 8110, TOM0 Channel 4 CCU1 Compare Register */
#define GTM_TOM0_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108110u)

/** \brief 8114, TOM0 Channel 4 CCU0 Counter Register */
#define GTM_TOM0_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108114u)

/** \brief 8118, TOM0 Channel 4 Status Register */
#define GTM_TOM0_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108118u)

/** \brief 811C, TOM0 Channel 4 Interrupt Notification Register */
#define GTM_TOM0_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010811Cu)

/** \brief 8120, TOM0 Channel 4 Interrupt Enable Register */
#define GTM_TOM0_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108120u)

/** \brief 8124, TOM0 Channel 4 Force Interrupt Register */
#define GTM_TOM0_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108124u)

/** \brief 8128, TOM0 Channel 4 Interrupt Mode Register */
#define GTM_TOM0_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108128u)

/** \brief 8140, TOM0 Channel 5 Control Register */
#define GTM_TOM0_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108140u)

/** \brief 8144, TOM0 Channel 5 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108144u)

/** \brief 8148, TOM0 Channel 5 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108148u)

/** \brief 814C, TOM0 Channel 5 CCU0 Compare Register */
#define GTM_TOM0_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010814Cu)

/** \brief 8150, TOM0 Channel 5 CCU1 Compare Register */
#define GTM_TOM0_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108150u)

/** \brief 8154, TOM0 Channel 5 CCU0 Counter Register */
#define GTM_TOM0_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108154u)

/** \brief 8158, TOM0 Channel 5 Status Register */
#define GTM_TOM0_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108158u)

/** \brief 815C, TOM0 Channel 5 Interrupt Notification Register */
#define GTM_TOM0_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010815Cu)

/** \brief 8160, TOM0 Channel 5 Interrupt Enable Register */
#define GTM_TOM0_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108160u)

/** \brief 8164, TOM0 Channel 5 Force Interrupt Register */
#define GTM_TOM0_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108164u)

/** \brief 8168, TOM0 Channel 5 Interrupt Mode Register */
#define GTM_TOM0_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108168u)

/** \brief 8180, TOM0 Channel 6 Control Register */
#define GTM_TOM0_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108180u)

/** \brief 8184, TOM0 Channel 6 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108184u)

/** \brief 8188, TOM0 Channel 6 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108188u)

/** \brief 818C, TOM0 Channel 6 CCU0 Compare Register */
#define GTM_TOM0_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010818Cu)

/** \brief 8190, TOM0 Channel 6 CCU1 Compare Register */
#define GTM_TOM0_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108190u)

/** \brief 8194, TOM0 Channel 6 CCU0 Counter Register */
#define GTM_TOM0_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108194u)

/** \brief 8198, TOM0 Channel 6 Status Register */
#define GTM_TOM0_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108198u)

/** \brief 819C, TOM0 Channel 6 Interrupt Notification Register */
#define GTM_TOM0_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010819Cu)

/** \brief 81A0, TOM0 Channel 6 Interrupt Enable Register */
#define GTM_TOM0_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081A0u)

/** \brief 81A4, TOM0 Channel 6 Force Interrupt Register */
#define GTM_TOM0_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081A4u)

/** \brief 81A8, TOM0 Channel 6 Interrupt Mode Register */
#define GTM_TOM0_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081A8u)

/** \brief 81C0, TOM0 Channel 7 Control Register */
#define GTM_TOM0_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01081C0u)

/** \brief 81C4, TOM0 Channel 7 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01081C4u)

/** \brief 81C8, TOM0 Channel 7 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01081C8u)

/** \brief 81CC, TOM0 Channel 7 CCU0 Compare Register */
#define GTM_TOM0_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01081CCu)

/** \brief 81D0, TOM0 Channel 7 CCU1 Compare Register */
#define GTM_TOM0_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01081D0u)

/** \brief 81D4, TOM0 Channel 7 CCU0 Counter Register */
#define GTM_TOM0_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01081D4u)

/** \brief 81D8, TOM0 Channel 7 Status Register */
#define GTM_TOM0_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01081D8u)

/** \brief 81DC, TOM0 Channel 7 Interrupt Notification Register */
#define GTM_TOM0_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01081DCu)

/** \brief 81E0, TOM0 Channel 7 Interrupt Enable Register */
#define GTM_TOM0_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081E0u)

/** \brief 81E4, TOM0 Channel 7 Force Interrupt Register */
#define GTM_TOM0_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081E4u)

/** \brief 81E8, TOM0 Channel 7 Interrupt Mode Register */
#define GTM_TOM0_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081E8u)

/** \brief 8200, TOM0 Channel 8 Control Register */
#define GTM_TOM0_CH8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108200u)

/** \brief 8204, TOM0 Channel 8 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH8_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108204u)

/** \brief 8208, TOM0 Channel 8 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH8_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108208u)

/** \brief 820C, TOM0 Channel 8 CCU0 Compare Register */
#define GTM_TOM0_CH8_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010820Cu)

/** \brief 8210, TOM0 Channel 8 CCU1 Compare Register */
#define GTM_TOM0_CH8_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108210u)

/** \brief 8214, TOM0 Channel 8 CCU0 Counter Register */
#define GTM_TOM0_CH8_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108214u)

/** \brief 8218, TOM0 Channel 8 Status Register */
#define GTM_TOM0_CH8_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108218u)

/** \brief 821C, TOM0 Channel 8 Interrupt Notification Register */
#define GTM_TOM0_CH8_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010821Cu)

/** \brief 8220, TOM0 Channel 8 Interrupt Enable Register */
#define GTM_TOM0_CH8_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108220u)

/** \brief 8224, TOM0 Channel 8 Force Interrupt Register */
#define GTM_TOM0_CH8_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108224u)

/** \brief 8228, TOM0 Channel 8 Interrupt Mode Register */
#define GTM_TOM0_CH8_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108228u)

/** \brief 8230, TOM0 TGC1 Global Control Register */
#define GTM_TOM0_TGC1_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108230u)

/** \brief 8234, TOM0 TGC1 Action Time Base Register */
#define GTM_TOM0_TGC1_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF0108234u)

/** \brief 8238, TOM0 TGC1 Force Update Control Register */
#define GTM_TOM0_TGC1_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108238u)

/** \brief 823C, TOM0 TGC1 Internal Trigger Control Register */
#define GTM_TOM0_TGC1_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010823Cu)

/** \brief 8240, TOM0 Channel 9 Control Register */
#define GTM_TOM0_CH9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108240u)

/** \brief 8244, TOM0 Channel 9 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH9_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108244u)

/** \brief 8248, TOM0 Channel 9 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH9_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108248u)

/** \brief 824C, TOM0 Channel 9 CCU0 Compare Register */
#define GTM_TOM0_CH9_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010824Cu)

/** \brief 8250, TOM0 Channel 9 CCU1 Compare Register */
#define GTM_TOM0_CH9_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108250u)

/** \brief 8254, TOM0 Channel 9 CCU0 Counter Register */
#define GTM_TOM0_CH9_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108254u)

/** \brief 8258, TOM0 Channel 9 Status Register */
#define GTM_TOM0_CH9_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108258u)

/** \brief 825C, TOM0 Channel 9 Interrupt Notification Register */
#define GTM_TOM0_CH9_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010825Cu)

/** \brief 8260, TOM0 Channel 9 Interrupt Enable Register */
#define GTM_TOM0_CH9_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108260u)

/** \brief 8264, TOM0 Channel 9 Force Interrupt Register */
#define GTM_TOM0_CH9_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108264u)

/** \brief 8268, TOM0 Channel 9 Interrupt Mode Register */
#define GTM_TOM0_CH9_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108268u)

/** \brief 8270, TOM0 TGC1 Enable/Disable Control Register */
#define GTM_TOM0_TGC1_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108270u)

/** \brief 8274, TOM0 TGC1 Enable/Disable Status Register */
#define GTM_TOM0_TGC1_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108274u)

/** \brief 8278, TOM0 TGC1 Output Enable Control Register */
#define GTM_TOM0_TGC1_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108278u)

/** \brief 827C, TOM0 TGC1 Output Enable Status Register */
#define GTM_TOM0_TGC1_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF010827Cu)

/** \brief 8280, TOM0 Channel 10 Control Register */
#define GTM_TOM0_CH10_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108280u)

/** \brief 8284, TOM0 Channel 10 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH10_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108284u)

/** \brief 8288, TOM0 Channel 10 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH10_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108288u)

/** \brief 828C, TOM0 Channel 10 CCU0 Compare Register */
#define GTM_TOM0_CH10_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010828Cu)

/** \brief 8290, TOM0 Channel 10 CCU1 Compare Register */
#define GTM_TOM0_CH10_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108290u)

/** \brief 8294, TOM0 Channel 10 CCU0 Counter Register */
#define GTM_TOM0_CH10_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108294u)

/** \brief 8298, TOM0 Channel 10 Status Register */
#define GTM_TOM0_CH10_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108298u)

/** \brief 829C, TOM0 Channel 10 Interrupt Notification Register */
#define GTM_TOM0_CH10_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010829Cu)

/** \brief 82A0, TOM0 Channel 10 Interrupt Enable Register */
#define GTM_TOM0_CH10_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082A0u)

/** \brief 82A4, TOM0 Channel 10 Force Interrupt Register */
#define GTM_TOM0_CH10_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082A4u)

/** \brief 82A8, TOM0 Channel 10 Interrupt Mode Register */
#define GTM_TOM0_CH10_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082A8u)

/** \brief 82C0, TOM0 Channel 11 Control Register */
#define GTM_TOM0_CH11_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01082C0u)

/** \brief 82C4, TOM0 Channel 11 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH11_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01082C4u)

/** \brief 82C8, TOM0 Channel 11 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH11_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01082C8u)

/** \brief 82CC, TOM0 Channel 11 CCU0 Compare Register */
#define GTM_TOM0_CH11_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01082CCu)

/** \brief 82D0, TOM0 Channel 11 CCU1 Compare Register */
#define GTM_TOM0_CH11_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01082D0u)

/** \brief 82D4, TOM0 Channel 11 CCU0 Counter Register */
#define GTM_TOM0_CH11_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01082D4u)

/** \brief 82D8, TOM0 Channel 11 Status Register */
#define GTM_TOM0_CH11_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01082D8u)

/** \brief 82DC, TOM0 Channel 11 Interrupt Notification Register */
#define GTM_TOM0_CH11_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01082DCu)

/** \brief 82E0, TOM0 Channel 11 Interrupt Enable Register */
#define GTM_TOM0_CH11_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082E0u)

/** \brief 82E4, TOM0 Channel 11 Force Interrupt Register */
#define GTM_TOM0_CH11_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082E4u)

/** \brief 82E8, TOM0 Channel 11 Interrupt Mode Register */
#define GTM_TOM0_CH11_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082E8u)

/** \brief 8300, TOM0 Channel 12 Control Register */
#define GTM_TOM0_CH12_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108300u)

/** \brief 8304, TOM0 Channel 12 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH12_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108304u)

/** \brief 8308, TOM0 Channel 12 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH12_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108308u)

/** \brief 830C, TOM0 Channel 12 CCU0 Compare Register */
#define GTM_TOM0_CH12_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010830Cu)

/** \brief 8310, TOM0 Channel 12 CCU1 Compare Register */
#define GTM_TOM0_CH12_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108310u)

/** \brief 8314, TOM0 Channel 12 CCU0 Counter Register */
#define GTM_TOM0_CH12_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108314u)

/** \brief 8318, TOM0 Channel 12 Status Register */
#define GTM_TOM0_CH12_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108318u)

/** \brief 831C, TOM0 Channel 12 Interrupt Notification Register */
#define GTM_TOM0_CH12_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010831Cu)

/** \brief 8320, TOM0 Channel 12 Interrupt Enable Register */
#define GTM_TOM0_CH12_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108320u)

/** \brief 8324, TOM0 Channel 12 Force Interrupt Register */
#define GTM_TOM0_CH12_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108324u)

/** \brief 8328, TOM0 Channel 12 Interrupt Mode Register */
#define GTM_TOM0_CH12_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108328u)

/** \brief 8340, TOM0 Channel 13 Control Register */
#define GTM_TOM0_CH13_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108340u)

/** \brief 8344, TOM0 Channel 13 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH13_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108344u)

/** \brief 8348, TOM0 Channel 13 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH13_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108348u)

/** \brief 834C, TOM0 Channel 13 CCU0 Compare Register */
#define GTM_TOM0_CH13_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010834Cu)

/** \brief 8350, TOM0 Channel 13 CCU1 Compare Register */
#define GTM_TOM0_CH13_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108350u)

/** \brief 8354, TOM0 Channel 13 CCU0 Counter Register */
#define GTM_TOM0_CH13_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108354u)

/** \brief 8358, TOM0 Channel 13 Status Register */
#define GTM_TOM0_CH13_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108358u)

/** \brief 835C, TOM0 Channel 13 Interrupt Notification Register */
#define GTM_TOM0_CH13_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010835Cu)

/** \brief 8360, TOM0 Channel 13 Interrupt Enable Register */
#define GTM_TOM0_CH13_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108360u)

/** \brief 8364, TOM0 Channel 13 Force Interrupt Register */
#define GTM_TOM0_CH13_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108364u)

/** \brief 8368, TOM0 Channel 13 Interrupt Mode Register */
#define GTM_TOM0_CH13_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108368u)

/** \brief 8380, TOM0 Channel 14 Control Register */
#define GTM_TOM0_CH14_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108380u)

/** \brief 8384, TOM0 Channel 14 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH14_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108384u)

/** \brief 8388, TOM0 Channel 14 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH14_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108388u)

/** \brief 838C, TOM0 Channel 14 CCU0 Compare Register */
#define GTM_TOM0_CH14_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010838Cu)

/** \brief 8390, TOM0 Channel 14 CCU1 Compare Register */
#define GTM_TOM0_CH14_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108390u)

/** \brief 8394, TOM0 Channel 14 CCU0 Counter Register */
#define GTM_TOM0_CH14_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108394u)

/** \brief 8398, TOM0 Channel 14 Status Register */
#define GTM_TOM0_CH14_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108398u)

/** \brief 839C, TOM0 Channel 14 Interrupt Notification Register */
#define GTM_TOM0_CH14_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010839Cu)

/** \brief 83A0, TOM0 Channel 14 Interrupt Enable Register */
#define GTM_TOM0_CH14_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083A0u)

/** \brief 83A4, TOM0 Channel 14 Force Interrupt Register */
#define GTM_TOM0_CH14_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083A4u)

/** \brief 83A8, TOM0 Channel 14 Interrupt Mode Register */
#define GTM_TOM0_CH14_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083A8u)

/** \brief 83C0, TOM0 Channel 15 Control Register */
#define GTM_TOM0_CH15_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01083C0u)

/** \brief 83C4, TOM0 Channel 15 CCU0 Compare Shadow Register */
#define GTM_TOM0_CH15_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01083C4u)

/** \brief 83C8, TOM0 Channel 15 CCU1 Compare Shadow Register */
#define GTM_TOM0_CH15_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01083C8u)

/** \brief 83CC, TOM0 Channel 15 CCU0 Compare Register */
#define GTM_TOM0_CH15_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01083CCu)

/** \brief 83D0, TOM0 Channel 15 CCU1 Compare Register */
#define GTM_TOM0_CH15_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01083D0u)

/** \brief 83D4, TOM0 Channel 15 CCU0 Counter Register */
#define GTM_TOM0_CH15_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01083D4u)

/** \brief 83D8, TOM0 Channel 15 Status Register */
#define GTM_TOM0_CH15_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01083D8u)

/** \brief 83DC, TOM0 Channel 15 Interrupt Notification Register */
#define GTM_TOM0_CH15_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01083DCu)

/** \brief 83E0, TOM0 Channel 15 Interrupt Enable Register */
#define GTM_TOM0_CH15_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083E0u)

/** \brief 83E4, TOM0 Channel 15 Force Interrupt Register */
#define GTM_TOM0_CH15_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083E4u)

/** \brief 83E8, TOM0 Channel 15 Interrupt Mode Register */
#define GTM_TOM0_CH15_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083E8u)

/** \brief 8800, TOM1 Channel 0 Control Register */
#define GTM_TOM1_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108800u)

/** \brief 8804, TOM1 Channel 0 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108804u)

/** \brief 8808, TOM1 Channel 0 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108808u)

/** \brief 880C, TOM1 Channel 0 CCU0 Compare Register */
#define GTM_TOM1_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010880Cu)

/** \brief 8810, TOM1 Channel 0 CCU1 Compare Register */
#define GTM_TOM1_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108810u)

/** \brief 8814, TOM1 Channel 0 CCU0 Counter Register */
#define GTM_TOM1_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108814u)

/** \brief 8818, TOM1 Channel 0 Status Register */
#define GTM_TOM1_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108818u)

/** \brief 881C, TOM1 Channel 0 Interrupt Notification Register */
#define GTM_TOM1_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010881Cu)

/** \brief 8820, TOM1 Channel 0 Interrupt Enable Register */
#define GTM_TOM1_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108820u)

/** \brief 8824, TOM1 Channel 0 Force Interrupt Register */
#define GTM_TOM1_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108824u)

/** \brief 8828, TOM1 Channel 0 Interrupt Mode Register */
#define GTM_TOM1_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108828u)

/** \brief 8830, TOM1 TGC0 Global Control Register */
#define GTM_TOM1_TGC0_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108830u)

/** \brief 8834, TOM1 TGC0 Action Time Base Register */
#define GTM_TOM1_TGC0_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF0108834u)

/** \brief 8838, TOM1 TGC0 Force Update Control Register */
#define GTM_TOM1_TGC0_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108838u)

/** \brief 883C, TOM1 TGC0 Internal Trigger Control Register */
#define GTM_TOM1_TGC0_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010883Cu)

/** \brief 8840, TOM1 Channel 1 Control Register */
#define GTM_TOM1_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108840u)

/** \brief 8844, TOM1 Channel 1 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108844u)

/** \brief 8848, TOM1 Channel 1 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108848u)

/** \brief 884C, TOM1 Channel 1 CCU0 Compare Register */
#define GTM_TOM1_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010884Cu)

/** \brief 8850, TOM1 Channel 1 CCU1 Compare Register */
#define GTM_TOM1_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108850u)

/** \brief 8854, TOM1 Channel 1 CCU0 Counter Register */
#define GTM_TOM1_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108854u)

/** \brief 8858, TOM1 Channel 1 Status Register */
#define GTM_TOM1_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108858u)

/** \brief 885C, TOM1 Channel 1 Interrupt Notification Register */
#define GTM_TOM1_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010885Cu)

/** \brief 8860, TOM1 Channel 1 Interrupt Enable Register */
#define GTM_TOM1_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108860u)

/** \brief 8864, TOM1 Channel 1 Force Interrupt Register */
#define GTM_TOM1_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108864u)

/** \brief 8868, TOM1 Channel 1 Interrupt Mode Register */
#define GTM_TOM1_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108868u)

/** \brief 8870, TOM1 TGC0 Enable/Disable Control Register */
#define GTM_TOM1_TGC0_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108870u)

/** \brief 8874, TOM1 TGC0 Enable/Disable Status Register */
#define GTM_TOM1_TGC0_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108874u)

/** \brief 8878, TOM1 TGC0 Output Enable Control Register */
#define GTM_TOM1_TGC0_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108878u)

/** \brief 887C, TOM1 TGC0 Output Enable Status Register */
#define GTM_TOM1_TGC0_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF010887Cu)

/** \brief 8880, TOM1 Channel 2 Control Register */
#define GTM_TOM1_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108880u)

/** \brief 8884, TOM1 Channel 2 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108884u)

/** \brief 8888, TOM1 Channel 2 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108888u)

/** \brief 888C, TOM1 Channel 2 CCU0 Compare Register */
#define GTM_TOM1_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010888Cu)

/** \brief 8890, TOM1 Channel 2 CCU1 Compare Register */
#define GTM_TOM1_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108890u)

/** \brief 8894, TOM1 Channel 2 CCU0 Counter Register */
#define GTM_TOM1_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108894u)

/** \brief 8898, TOM1 Channel 2 Status Register */
#define GTM_TOM1_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108898u)

/** \brief 889C, TOM1 Channel 2 Interrupt Notification Register */
#define GTM_TOM1_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010889Cu)

/** \brief 88A0, TOM1 Channel 2 Interrupt Enable Register */
#define GTM_TOM1_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088A0u)

/** \brief 88A4, TOM1 Channel 2 Force Interrupt Register */
#define GTM_TOM1_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088A4u)

/** \brief 88A8, TOM1 Channel 2 Interrupt Mode Register */
#define GTM_TOM1_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088A8u)

/** \brief 88C0, TOM1 Channel 3 Control Register */
#define GTM_TOM1_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01088C0u)

/** \brief 88C4, TOM1 Channel 3 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01088C4u)

/** \brief 88C8, TOM1 Channel 3 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01088C8u)

/** \brief 88CC, TOM1 Channel 3 CCU0 Compare Register */
#define GTM_TOM1_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01088CCu)

/** \brief 88D0, TOM1 Channel 3 CCU1 Compare Register */
#define GTM_TOM1_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01088D0u)

/** \brief 88D4, TOM1 Channel 3 CCU0 Counter Register */
#define GTM_TOM1_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01088D4u)

/** \brief 88D8, TOM1 Channel 3 Status Register */
#define GTM_TOM1_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01088D8u)

/** \brief 88DC, TOM1 Channel 3 Interrupt Notification Register */
#define GTM_TOM1_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01088DCu)

/** \brief 88E0, TOM1 Channel 3 Interrupt Enable Register */
#define GTM_TOM1_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088E0u)

/** \brief 88E4, TOM1 Channel 3 Force Interrupt Register */
#define GTM_TOM1_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088E4u)

/** \brief 88E8, TOM1 Channel 3 Interrupt Mode Register */
#define GTM_TOM1_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088E8u)

/** \brief 8900, TOM1 Channel 4 Control Register */
#define GTM_TOM1_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108900u)

/** \brief 8904, TOM1 Channel 4 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108904u)

/** \brief 8908, TOM1 Channel 4 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108908u)

/** \brief 890C, TOM1 Channel 4 CCU0 Compare Register */
#define GTM_TOM1_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010890Cu)

/** \brief 8910, TOM1 Channel 4 CCU1 Compare Register */
#define GTM_TOM1_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108910u)

/** \brief 8914, TOM1 Channel 4 CCU0 Counter Register */
#define GTM_TOM1_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108914u)

/** \brief 8918, TOM1 Channel 4 Status Register */
#define GTM_TOM1_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108918u)

/** \brief 891C, TOM1 Channel 4 Interrupt Notification Register */
#define GTM_TOM1_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010891Cu)

/** \brief 8920, TOM1 Channel 4 Interrupt Enable Register */
#define GTM_TOM1_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108920u)

/** \brief 8924, TOM1 Channel 4 Force Interrupt Register */
#define GTM_TOM1_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108924u)

/** \brief 8928, TOM1 Channel 4 Interrupt Mode Register */
#define GTM_TOM1_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108928u)

/** \brief 8940, TOM1 Channel 5 Control Register */
#define GTM_TOM1_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108940u)

/** \brief 8944, TOM1 Channel 5 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108944u)

/** \brief 8948, TOM1 Channel 5 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108948u)

/** \brief 894C, TOM1 Channel 5 CCU0 Compare Register */
#define GTM_TOM1_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010894Cu)

/** \brief 8950, TOM1 Channel 5 CCU1 Compare Register */
#define GTM_TOM1_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108950u)

/** \brief 8954, TOM1 Channel 5 CCU0 Counter Register */
#define GTM_TOM1_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108954u)

/** \brief 8958, TOM1 Channel 5 Status Register */
#define GTM_TOM1_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108958u)

/** \brief 895C, TOM1 Channel 5 Interrupt Notification Register */
#define GTM_TOM1_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010895Cu)

/** \brief 8960, TOM1 Channel 5 Interrupt Enable Register */
#define GTM_TOM1_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108960u)

/** \brief 8964, TOM1 Channel 5 Force Interrupt Register */
#define GTM_TOM1_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108964u)

/** \brief 8968, TOM1 Channel 5 Interrupt Mode Register */
#define GTM_TOM1_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108968u)

/** \brief 8980, TOM1 Channel 6 Control Register */
#define GTM_TOM1_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108980u)

/** \brief 8984, TOM1 Channel 6 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108984u)

/** \brief 8988, TOM1 Channel 6 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108988u)

/** \brief 898C, TOM1 Channel 6 CCU0 Compare Register */
#define GTM_TOM1_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010898Cu)

/** \brief 8990, TOM1 Channel 6 CCU1 Compare Register */
#define GTM_TOM1_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108990u)

/** \brief 8994, TOM1 Channel 6 CCU0 Counter Register */
#define GTM_TOM1_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108994u)

/** \brief 8998, TOM1 Channel 6 Status Register */
#define GTM_TOM1_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108998u)

/** \brief 899C, TOM1 Channel 6 Interrupt Notification Register */
#define GTM_TOM1_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010899Cu)

/** \brief 89A0, TOM1 Channel 6 Interrupt Enable Register */
#define GTM_TOM1_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089A0u)

/** \brief 89A4, TOM1 Channel 6 Force Interrupt Register */
#define GTM_TOM1_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089A4u)

/** \brief 89A8, TOM1 Channel 6 Interrupt Mode Register */
#define GTM_TOM1_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089A8u)

/** \brief 89C0, TOM1 Channel 7 Control Register */
#define GTM_TOM1_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01089C0u)

/** \brief 89C4, TOM1 Channel 7 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01089C4u)

/** \brief 89C8, TOM1 Channel 7 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01089C8u)

/** \brief 89CC, TOM1 Channel 7 CCU0 Compare Register */
#define GTM_TOM1_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01089CCu)

/** \brief 89D0, TOM1 Channel 7 CCU1 Compare Register */
#define GTM_TOM1_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01089D0u)

/** \brief 89D4, TOM1 Channel 7 CCU0 Counter Register */
#define GTM_TOM1_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01089D4u)

/** \brief 89D8, TOM1 Channel 7 Status Register */
#define GTM_TOM1_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01089D8u)

/** \brief 89DC, TOM1 Channel 7 Interrupt Notification Register */
#define GTM_TOM1_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01089DCu)

/** \brief 89E0, TOM1 Channel 7 Interrupt Enable Register */
#define GTM_TOM1_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089E0u)

/** \brief 89E4, TOM1 Channel 7 Force Interrupt Register */
#define GTM_TOM1_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089E4u)

/** \brief 89E8, TOM1 Channel 7 Interrupt Mode Register */
#define GTM_TOM1_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089E8u)

/** \brief 8A00, TOM1 Channel 8 Control Register */
#define GTM_TOM1_CH8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A00u)

/** \brief 8A04, TOM1 Channel 8 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH8_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A04u)

/** \brief 8A08, TOM1 Channel 8 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH8_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A08u)

/** \brief 8A0C, TOM1 Channel 8 CCU0 Compare Register */
#define GTM_TOM1_CH8_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A0Cu)

/** \brief 8A10, TOM1 Channel 8 CCU1 Compare Register */
#define GTM_TOM1_CH8_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A10u)

/** \brief 8A14, TOM1 Channel 8 CCU0 Counter Register */
#define GTM_TOM1_CH8_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A14u)

/** \brief 8A18, TOM1 Channel 8 Status Register */
#define GTM_TOM1_CH8_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A18u)

/** \brief 8A1C, TOM1 Channel 8 Interrupt Notification Register */
#define GTM_TOM1_CH8_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A1Cu)

/** \brief 8A20, TOM1 Channel 8 Interrupt Enable Register */
#define GTM_TOM1_CH8_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A20u)

/** \brief 8A24, TOM1 Channel 8 Force Interrupt Register */
#define GTM_TOM1_CH8_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A24u)

/** \brief 8A28, TOM1 Channel 8 Interrupt Mode Register */
#define GTM_TOM1_CH8_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A28u)

/** \brief 8A30, TOM1 TGC1 Global Control Register */
#define GTM_TOM1_TGC1_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0108A30u)

/** \brief 8A34, TOM1 TGC1 Action Time Base Register */
#define GTM_TOM1_TGC1_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF0108A34u)

/** \brief 8A38, TOM1 TGC1 Force Update Control Register */
#define GTM_TOM1_TGC1_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0108A38u)

/** \brief 8A3C, TOM1 TGC1 Internal Trigger Control Register */
#define GTM_TOM1_TGC1_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF0108A3Cu)

/** \brief 8A40, TOM1 Channel 9 Control Register */
#define GTM_TOM1_CH9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A40u)

/** \brief 8A44, TOM1 Channel 9 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH9_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A44u)

/** \brief 8A48, TOM1 Channel 9 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH9_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A48u)

/** \brief 8A4C, TOM1 Channel 9 CCU0 Compare Register */
#define GTM_TOM1_CH9_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A4Cu)

/** \brief 8A50, TOM1 Channel 9 CCU1 Compare Register */
#define GTM_TOM1_CH9_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A50u)

/** \brief 8A54, TOM1 Channel 9 CCU0 Counter Register */
#define GTM_TOM1_CH9_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A54u)

/** \brief 8A58, TOM1 Channel 9 Status Register */
#define GTM_TOM1_CH9_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A58u)

/** \brief 8A5C, TOM1 Channel 9 Interrupt Notification Register */
#define GTM_TOM1_CH9_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A5Cu)

/** \brief 8A60, TOM1 Channel 9 Interrupt Enable Register */
#define GTM_TOM1_CH9_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A60u)

/** \brief 8A64, TOM1 Channel 9 Force Interrupt Register */
#define GTM_TOM1_CH9_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A64u)

/** \brief 8A68, TOM1 Channel 9 Interrupt Mode Register */
#define GTM_TOM1_CH9_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A68u)

/** \brief 8A70, TOM1 TGC1 Enable/Disable Control Register */
#define GTM_TOM1_TGC1_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0108A70u)

/** \brief 8A74, TOM1 TGC1 Enable/Disable Status Register */
#define GTM_TOM1_TGC1_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0108A74u)

/** \brief 8A78, TOM1 TGC1 Output Enable Control Register */
#define GTM_TOM1_TGC1_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0108A78u)

/** \brief 8A7C, TOM1 TGC1 Output Enable Status Register */
#define GTM_TOM1_TGC1_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF0108A7Cu)

/** \brief 8A80, TOM1 Channel 10 Control Register */
#define GTM_TOM1_CH10_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A80u)

/** \brief 8A84, TOM1 Channel 10 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH10_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A84u)

/** \brief 8A88, TOM1 Channel 10 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH10_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A88u)

/** \brief 8A8C, TOM1 Channel 10 CCU0 Compare Register */
#define GTM_TOM1_CH10_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A8Cu)

/** \brief 8A90, TOM1 Channel 10 CCU1 Compare Register */
#define GTM_TOM1_CH10_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A90u)

/** \brief 8A94, TOM1 Channel 10 CCU0 Counter Register */
#define GTM_TOM1_CH10_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A94u)

/** \brief 8A98, TOM1 Channel 10 Status Register */
#define GTM_TOM1_CH10_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A98u)

/** \brief 8A9C, TOM1 Channel 10 Interrupt Notification Register */
#define GTM_TOM1_CH10_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A9Cu)

/** \brief 8AA0, TOM1 Channel 10 Interrupt Enable Register */
#define GTM_TOM1_CH10_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AA0u)

/** \brief 8AA4, TOM1 Channel 10 Force Interrupt Register */
#define GTM_TOM1_CH10_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AA4u)

/** \brief 8AA8, TOM1 Channel 10 Interrupt Mode Register */
#define GTM_TOM1_CH10_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AA8u)

/** \brief 8AC0, TOM1 Channel 11 Control Register */
#define GTM_TOM1_CH11_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108AC0u)

/** \brief 8AC4, TOM1 Channel 11 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH11_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108AC4u)

/** \brief 8AC8, TOM1 Channel 11 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH11_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108AC8u)

/** \brief 8ACC, TOM1 Channel 11 CCU0 Compare Register */
#define GTM_TOM1_CH11_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108ACCu)

/** \brief 8AD0, TOM1 Channel 11 CCU1 Compare Register */
#define GTM_TOM1_CH11_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108AD0u)

/** \brief 8AD4, TOM1 Channel 11 CCU0 Counter Register */
#define GTM_TOM1_CH11_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108AD4u)

/** \brief 8AD8, TOM1 Channel 11 Status Register */
#define GTM_TOM1_CH11_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108AD8u)

/** \brief 8ADC, TOM1 Channel 11 Interrupt Notification Register */
#define GTM_TOM1_CH11_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108ADCu)

/** \brief 8AE0, TOM1 Channel 11 Interrupt Enable Register */
#define GTM_TOM1_CH11_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AE0u)

/** \brief 8AE4, TOM1 Channel 11 Force Interrupt Register */
#define GTM_TOM1_CH11_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AE4u)

/** \brief 8AE8, TOM1 Channel 11 Interrupt Mode Register */
#define GTM_TOM1_CH11_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AE8u)

/** \brief 8B00, TOM1 Channel 12 Control Register */
#define GTM_TOM1_CH12_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B00u)

/** \brief 8B04, TOM1 Channel 12 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH12_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B04u)

/** \brief 8B08, TOM1 Channel 12 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH12_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B08u)

/** \brief 8B0C, TOM1 Channel 12 CCU0 Compare Register */
#define GTM_TOM1_CH12_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B0Cu)

/** \brief 8B10, TOM1 Channel 12 CCU1 Compare Register */
#define GTM_TOM1_CH12_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B10u)

/** \brief 8B14, TOM1 Channel 12 CCU0 Counter Register */
#define GTM_TOM1_CH12_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B14u)

/** \brief 8B18, TOM1 Channel 12 Status Register */
#define GTM_TOM1_CH12_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B18u)

/** \brief 8B1C, TOM1 Channel 12 Interrupt Notification Register */
#define GTM_TOM1_CH12_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B1Cu)

/** \brief 8B20, TOM1 Channel 12 Interrupt Enable Register */
#define GTM_TOM1_CH12_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B20u)

/** \brief 8B24, TOM1 Channel 12 Force Interrupt Register */
#define GTM_TOM1_CH12_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B24u)

/** \brief 8B28, TOM1 Channel 12 Interrupt Mode Register */
#define GTM_TOM1_CH12_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B28u)

/** \brief 8B40, TOM1 Channel 13 Control Register */
#define GTM_TOM1_CH13_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B40u)

/** \brief 8B44, TOM1 Channel 13 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH13_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B44u)

/** \brief 8B48, TOM1 Channel 13 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH13_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B48u)

/** \brief 8B4C, TOM1 Channel 13 CCU0 Compare Register */
#define GTM_TOM1_CH13_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B4Cu)

/** \brief 8B50, TOM1 Channel 13 CCU1 Compare Register */
#define GTM_TOM1_CH13_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B50u)

/** \brief 8B54, TOM1 Channel 13 CCU0 Counter Register */
#define GTM_TOM1_CH13_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B54u)

/** \brief 8B58, TOM1 Channel 13 Status Register */
#define GTM_TOM1_CH13_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B58u)

/** \brief 8B5C, TOM1 Channel 13 Interrupt Notification Register */
#define GTM_TOM1_CH13_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B5Cu)

/** \brief 8B60, TOM1 Channel 13 Interrupt Enable Register */
#define GTM_TOM1_CH13_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B60u)

/** \brief 8B64, TOM1 Channel 13 Force Interrupt Register */
#define GTM_TOM1_CH13_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B64u)

/** \brief 8B68, TOM1 Channel 13 Interrupt Mode Register */
#define GTM_TOM1_CH13_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B68u)

/** \brief 8B80, TOM1 Channel 14 Control Register */
#define GTM_TOM1_CH14_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B80u)

/** \brief 8B84, TOM1 Channel 14 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH14_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B84u)

/** \brief 8B88, TOM1 Channel 14 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH14_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B88u)

/** \brief 8B8C, TOM1 Channel 14 CCU0 Compare Register */
#define GTM_TOM1_CH14_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B8Cu)

/** \brief 8B90, TOM1 Channel 14 CCU1 Compare Register */
#define GTM_TOM1_CH14_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B90u)

/** \brief 8B94, TOM1 Channel 14 CCU0 Counter Register */
#define GTM_TOM1_CH14_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B94u)

/** \brief 8B98, TOM1 Channel 14 Status Register */
#define GTM_TOM1_CH14_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B98u)

/** \brief 8B9C, TOM1 Channel 14 Interrupt Notification Register */
#define GTM_TOM1_CH14_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B9Cu)

/** \brief 8BA0, TOM1 Channel 14 Interrupt Enable Register */
#define GTM_TOM1_CH14_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BA0u)

/** \brief 8BA4, TOM1 Channel 14 Force Interrupt Register */
#define GTM_TOM1_CH14_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BA4u)

/** \brief 8BA8, TOM1 Channel 14 Interrupt Mode Register */
#define GTM_TOM1_CH14_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BA8u)

/** \brief 8BC0, TOM1 Channel 15 Control Register */
#define GTM_TOM1_CH15_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108BC0u)

/** \brief 8BC4, TOM1 Channel 15 CCU0 Compare Shadow Register */
#define GTM_TOM1_CH15_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108BC4u)

/** \brief 8BC8, TOM1 Channel 15 CCU1 Compare Shadow Register */
#define GTM_TOM1_CH15_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108BC8u)

/** \brief 8BCC, TOM1 Channel 15 CCU0 Compare Register */
#define GTM_TOM1_CH15_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108BCCu)

/** \brief 8BD0, TOM1 Channel 15 CCU1 Compare Register */
#define GTM_TOM1_CH15_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108BD0u)

/** \brief 8BD4, TOM1 Channel 15 CCU0 Counter Register */
#define GTM_TOM1_CH15_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108BD4u)

/** \brief 8BD8, TOM1 Channel 15 Status Register */
#define GTM_TOM1_CH15_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108BD8u)

/** \brief 8BDC, TOM1 Channel 15 Interrupt Notification Register */
#define GTM_TOM1_CH15_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108BDCu)

/** \brief 8BE0, TOM1 Channel 15 Interrupt Enable Register */
#define GTM_TOM1_CH15_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BE0u)

/** \brief 8BE4, TOM1 Channel 15 Force Interrupt Register */
#define GTM_TOM1_CH15_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BE4u)

/** \brief 8BE8, TOM1 Channel 15 Interrupt Mode Register */
#define GTM_TOM1_CH15_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BE8u)

/** \brief 9000, TOM2 Channel 0 Control Register */
#define GTM_TOM2_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109000u)

/** \brief 9004, TOM2 Channel 0 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109004u)

/** \brief 9008, TOM2 Channel 0 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109008u)

/** \brief 900C, TOM2 Channel 0 CCU0 Compare Register */
#define GTM_TOM2_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010900Cu)

/** \brief 9010, TOM2 Channel 0 CCU1 Compare Register */
#define GTM_TOM2_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109010u)

/** \brief 9014, TOM2 Channel 0 CCU0 Counter Register */
#define GTM_TOM2_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109014u)

/** \brief 9018, TOM2 Channel 0 Status Register */
#define GTM_TOM2_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109018u)

/** \brief 901C, TOM2 Channel 0 Interrupt Notification Register */
#define GTM_TOM2_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010901Cu)

/** \brief 9020, TOM2 Channel 0 Interrupt Enable Register */
#define GTM_TOM2_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109020u)

/** \brief 9024, TOM2 Channel 0 Force Interrupt Register */
#define GTM_TOM2_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109024u)

/** \brief 9028, TOM2 Channel 0 Interrupt Mode Register */
#define GTM_TOM2_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109028u)

/** \brief 9030, TOM2 TGC0 Global Control Register */
#define GTM_TOM2_TGC0_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0109030u)

/** \brief 9034, TOM2 TGC0 Action Time Base Register */
#define GTM_TOM2_TGC0_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF0109034u)

/** \brief 9038, TOM2 TGC0 Force Update Control Register */
#define GTM_TOM2_TGC0_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0109038u)

/** \brief 903C, TOM2 TGC0 Internal Trigger Control Register */
#define GTM_TOM2_TGC0_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010903Cu)

/** \brief 9040, TOM2 Channel 1 Control Register */
#define GTM_TOM2_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109040u)

/** \brief 9044, TOM2 Channel 1 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109044u)

/** \brief 9048, TOM2 Channel 1 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109048u)

/** \brief 904C, TOM2 Channel 1 CCU0 Compare Register */
#define GTM_TOM2_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010904Cu)

/** \brief 9050, TOM2 Channel 1 CCU1 Compare Register */
#define GTM_TOM2_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109050u)

/** \brief 9054, TOM2 Channel 1 CCU0 Counter Register */
#define GTM_TOM2_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109054u)

/** \brief 9058, TOM2 Channel 1 Status Register */
#define GTM_TOM2_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109058u)

/** \brief 905C, TOM2 Channel 1 Interrupt Notification Register */
#define GTM_TOM2_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010905Cu)

/** \brief 9060, TOM2 Channel 1 Interrupt Enable Register */
#define GTM_TOM2_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109060u)

/** \brief 9064, TOM2 Channel 1 Force Interrupt Register */
#define GTM_TOM2_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109064u)

/** \brief 9068, TOM2 Channel 1 Interrupt Mode Register */
#define GTM_TOM2_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109068u)

/** \brief 9070, TOM2 TGC0 Enable/Disable Control Register */
#define GTM_TOM2_TGC0_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0109070u)

/** \brief 9074, TOM2 TGC0 Enable/Disable Status Register */
#define GTM_TOM2_TGC0_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0109074u)

/** \brief 9078, TOM2 TGC0 Output Enable Control Register */
#define GTM_TOM2_TGC0_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0109078u)

/** \brief 907C, TOM2 TGC0 Output Enable Status Register */
#define GTM_TOM2_TGC0_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF010907Cu)

/** \brief 9080, TOM2 Channel 2 Control Register */
#define GTM_TOM2_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109080u)

/** \brief 9084, TOM2 Channel 2 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109084u)

/** \brief 9088, TOM2 Channel 2 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109088u)

/** \brief 908C, TOM2 Channel 2 CCU0 Compare Register */
#define GTM_TOM2_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010908Cu)

/** \brief 9090, TOM2 Channel 2 CCU1 Compare Register */
#define GTM_TOM2_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109090u)

/** \brief 9094, TOM2 Channel 2 CCU0 Counter Register */
#define GTM_TOM2_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109094u)

/** \brief 9098, TOM2 Channel 2 Status Register */
#define GTM_TOM2_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109098u)

/** \brief 909C, TOM2 Channel 2 Interrupt Notification Register */
#define GTM_TOM2_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010909Cu)

/** \brief 90A0, TOM2 Channel 2 Interrupt Enable Register */
#define GTM_TOM2_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090A0u)

/** \brief 90A4, TOM2 Channel 2 Force Interrupt Register */
#define GTM_TOM2_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090A4u)

/** \brief 90A8, TOM2 Channel 2 Interrupt Mode Register */
#define GTM_TOM2_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090A8u)

/** \brief 90C0, TOM2 Channel 3 Control Register */
#define GTM_TOM2_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01090C0u)

/** \brief 90C4, TOM2 Channel 3 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01090C4u)

/** \brief 90C8, TOM2 Channel 3 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01090C8u)

/** \brief 90CC, TOM2 Channel 3 CCU0 Compare Register */
#define GTM_TOM2_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01090CCu)

/** \brief 90D0, TOM2 Channel 3 CCU1 Compare Register */
#define GTM_TOM2_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01090D0u)

/** \brief 90D4, TOM2 Channel 3 CCU0 Counter Register */
#define GTM_TOM2_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01090D4u)

/** \brief 90D8, TOM2 Channel 3 Status Register */
#define GTM_TOM2_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01090D8u)

/** \brief 90DC, TOM2 Channel 3 Interrupt Notification Register */
#define GTM_TOM2_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01090DCu)

/** \brief 90E0, TOM2 Channel 3 Interrupt Enable Register */
#define GTM_TOM2_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090E0u)

/** \brief 90E4, TOM2 Channel 3 Force Interrupt Register */
#define GTM_TOM2_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090E4u)

/** \brief 90E8, TOM2 Channel 3 Interrupt Mode Register */
#define GTM_TOM2_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090E8u)

/** \brief 9100, TOM2 Channel 4 Control Register */
#define GTM_TOM2_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109100u)

/** \brief 9104, TOM2 Channel 4 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109104u)

/** \brief 9108, TOM2 Channel 4 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109108u)

/** \brief 910C, TOM2 Channel 4 CCU0 Compare Register */
#define GTM_TOM2_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010910Cu)

/** \brief 9110, TOM2 Channel 4 CCU1 Compare Register */
#define GTM_TOM2_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109110u)

/** \brief 9114, TOM2 Channel 4 CCU0 Counter Register */
#define GTM_TOM2_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109114u)

/** \brief 9118, TOM2 Channel 4 Status Register */
#define GTM_TOM2_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109118u)

/** \brief 911C, TOM2 Channel 4 Interrupt Notification Register */
#define GTM_TOM2_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010911Cu)

/** \brief 9120, TOM2 Channel 4 Interrupt Enable Register */
#define GTM_TOM2_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109120u)

/** \brief 9124, TOM2 Channel 4 Force Interrupt Register */
#define GTM_TOM2_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109124u)

/** \brief 9128, TOM2 Channel 4 Interrupt Mode Register */
#define GTM_TOM2_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109128u)

/** \brief 9140, TOM2 Channel 5 Control Register */
#define GTM_TOM2_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109140u)

/** \brief 9144, TOM2 Channel 5 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109144u)

/** \brief 9148, TOM2 Channel 5 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109148u)

/** \brief 914C, TOM2 Channel 5 CCU0 Compare Register */
#define GTM_TOM2_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010914Cu)

/** \brief 9150, TOM2 Channel 5 CCU1 Compare Register */
#define GTM_TOM2_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109150u)

/** \brief 9154, TOM2 Channel 5 CCU0 Counter Register */
#define GTM_TOM2_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109154u)

/** \brief 9158, TOM2 Channel 5 Status Register */
#define GTM_TOM2_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109158u)

/** \brief 915C, TOM2 Channel 5 Interrupt Notification Register */
#define GTM_TOM2_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010915Cu)

/** \brief 9160, TOM2 Channel 5 Interrupt Enable Register */
#define GTM_TOM2_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109160u)

/** \brief 9164, TOM2 Channel 5 Force Interrupt Register */
#define GTM_TOM2_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109164u)

/** \brief 9168, TOM2 Channel 5 Interrupt Mode Register */
#define GTM_TOM2_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109168u)

/** \brief 9180, TOM2 Channel 6 Control Register */
#define GTM_TOM2_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109180u)

/** \brief 9184, TOM2 Channel 6 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109184u)

/** \brief 9188, TOM2 Channel 6 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109188u)

/** \brief 918C, TOM2 Channel 6 CCU0 Compare Register */
#define GTM_TOM2_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010918Cu)

/** \brief 9190, TOM2 Channel 6 CCU1 Compare Register */
#define GTM_TOM2_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109190u)

/** \brief 9194, TOM2 Channel 6 CCU0 Counter Register */
#define GTM_TOM2_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109194u)

/** \brief 9198, TOM2 Channel 6 Status Register */
#define GTM_TOM2_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109198u)

/** \brief 919C, TOM2 Channel 6 Interrupt Notification Register */
#define GTM_TOM2_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010919Cu)

/** \brief 91A0, TOM2 Channel 6 Interrupt Enable Register */
#define GTM_TOM2_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091A0u)

/** \brief 91A4, TOM2 Channel 6 Force Interrupt Register */
#define GTM_TOM2_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091A4u)

/** \brief 91A8, TOM2 Channel 6 Interrupt Mode Register */
#define GTM_TOM2_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091A8u)

/** \brief 91C0, TOM2 Channel 7 Control Register */
#define GTM_TOM2_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01091C0u)

/** \brief 91C4, TOM2 Channel 7 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01091C4u)

/** \brief 91C8, TOM2 Channel 7 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01091C8u)

/** \brief 91CC, TOM2 Channel 7 CCU0 Compare Register */
#define GTM_TOM2_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01091CCu)

/** \brief 91D0, TOM2 Channel 7 CCU1 Compare Register */
#define GTM_TOM2_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01091D0u)

/** \brief 91D4, TOM2 Channel 7 CCU0 Counter Register */
#define GTM_TOM2_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01091D4u)

/** \brief 91D8, TOM2 Channel 7 Status Register */
#define GTM_TOM2_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01091D8u)

/** \brief 91DC, TOM2 Channel 7 Interrupt Notification Register */
#define GTM_TOM2_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01091DCu)

/** \brief 91E0, TOM2 Channel 7 Interrupt Enable Register */
#define GTM_TOM2_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091E0u)

/** \brief 91E4, TOM2 Channel 7 Force Interrupt Register */
#define GTM_TOM2_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091E4u)

/** \brief 91E8, TOM2 Channel 7 Interrupt Mode Register */
#define GTM_TOM2_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091E8u)

/** \brief 9200, TOM2 Channel 8 Control Register */
#define GTM_TOM2_CH8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109200u)

/** \brief 9204, TOM2 Channel 8 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH8_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109204u)

/** \brief 9208, TOM2 Channel 8 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH8_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109208u)

/** \brief 920C, TOM2 Channel 8 CCU0 Compare Register */
#define GTM_TOM2_CH8_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010920Cu)

/** \brief 9210, TOM2 Channel 8 CCU1 Compare Register */
#define GTM_TOM2_CH8_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109210u)

/** \brief 9214, TOM2 Channel 8 CCU0 Counter Register */
#define GTM_TOM2_CH8_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109214u)

/** \brief 9218, TOM2 Channel 8 Status Register */
#define GTM_TOM2_CH8_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109218u)

/** \brief 921C, TOM2 Channel 8 Interrupt Notification Register */
#define GTM_TOM2_CH8_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010921Cu)

/** \brief 9220, TOM2 Channel 8 Interrupt Enable Register */
#define GTM_TOM2_CH8_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109220u)

/** \brief 9224, TOM2 Channel 8 Force Interrupt Register */
#define GTM_TOM2_CH8_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109224u)

/** \brief 9228, TOM2 Channel 8 Interrupt Mode Register */
#define GTM_TOM2_CH8_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109228u)

/** \brief 9230, TOM2 TGC1 Global Control Register */
#define GTM_TOM2_TGC1_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_GLB_CTRL*)0xF0109230u)

/** \brief 9234, TOM2 TGC1 Action Time Base Register */
#define GTM_TOM2_TGC1_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ACT_TB*)0xF0109234u)

/** \brief 9238, TOM2 TGC1 Force Update Control Register */
#define GTM_TOM2_TGC1_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_FUPD_CTRL*)0xF0109238u)

/** \brief 923C, TOM2 TGC1 Internal Trigger Control Register */
#define GTM_TOM2_TGC1_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_INT_TRIG*)0xF010923Cu)

/** \brief 9240, TOM2 Channel 9 Control Register */
#define GTM_TOM2_CH9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109240u)

/** \brief 9244, TOM2 Channel 9 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH9_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109244u)

/** \brief 9248, TOM2 Channel 9 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH9_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109248u)

/** \brief 924C, TOM2 Channel 9 CCU0 Compare Register */
#define GTM_TOM2_CH9_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010924Cu)

/** \brief 9250, TOM2 Channel 9 CCU1 Compare Register */
#define GTM_TOM2_CH9_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109250u)

/** \brief 9254, TOM2 Channel 9 CCU0 Counter Register */
#define GTM_TOM2_CH9_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109254u)

/** \brief 9258, TOM2 Channel 9 Status Register */
#define GTM_TOM2_CH9_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109258u)

/** \brief 925C, TOM2 Channel 9 Interrupt Notification Register */
#define GTM_TOM2_CH9_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010925Cu)

/** \brief 9260, TOM2 Channel 9 Interrupt Enable Register */
#define GTM_TOM2_CH9_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109260u)

/** \brief 9264, TOM2 Channel 9 Force Interrupt Register */
#define GTM_TOM2_CH9_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109264u)

/** \brief 9268, TOM2 Channel 9 Interrupt Mode Register */
#define GTM_TOM2_CH9_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109268u)

/** \brief 9270, TOM2 TGC1 Enable/Disable Control Register */
#define GTM_TOM2_TGC1_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_CTRL*)0xF0109270u)

/** \brief 9274, TOM2 TGC1 Enable/Disable Status Register */
#define GTM_TOM2_TGC1_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_ENDIS_STAT*)0xF0109274u)

/** \brief 9278, TOM2 TGC1 Output Enable Control Register */
#define GTM_TOM2_TGC1_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_CTRL*)0xF0109278u)

/** \brief 927C, TOM2 TGC1 Output Enable Status Register */
#define GTM_TOM2_TGC1_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_TGC_OUTEN_STAT*)0xF010927Cu)

/** \brief 9280, TOM2 Channel 10 Control Register */
#define GTM_TOM2_CH10_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109280u)

/** \brief 9284, TOM2 Channel 10 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH10_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109284u)

/** \brief 9288, TOM2 Channel 10 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH10_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109288u)

/** \brief 928C, TOM2 Channel 10 CCU0 Compare Register */
#define GTM_TOM2_CH10_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010928Cu)

/** \brief 9290, TOM2 Channel 10 CCU1 Compare Register */
#define GTM_TOM2_CH10_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109290u)

/** \brief 9294, TOM2 Channel 10 CCU0 Counter Register */
#define GTM_TOM2_CH10_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109294u)

/** \brief 9298, TOM2 Channel 10 Status Register */
#define GTM_TOM2_CH10_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109298u)

/** \brief 929C, TOM2 Channel 10 Interrupt Notification Register */
#define GTM_TOM2_CH10_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010929Cu)

/** \brief 92A0, TOM2 Channel 10 Interrupt Enable Register */
#define GTM_TOM2_CH10_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092A0u)

/** \brief 92A4, TOM2 Channel 10 Force Interrupt Register */
#define GTM_TOM2_CH10_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092A4u)

/** \brief 92A8, TOM2 Channel 10 Interrupt Mode Register */
#define GTM_TOM2_CH10_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092A8u)

/** \brief 92C0, TOM2 Channel 11 Control Register */
#define GTM_TOM2_CH11_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01092C0u)

/** \brief 92C4, TOM2 Channel 11 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH11_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01092C4u)

/** \brief 92C8, TOM2 Channel 11 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH11_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01092C8u)

/** \brief 92CC, TOM2 Channel 11 CCU0 Compare Register */
#define GTM_TOM2_CH11_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01092CCu)

/** \brief 92D0, TOM2 Channel 11 CCU1 Compare Register */
#define GTM_TOM2_CH11_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01092D0u)

/** \brief 92D4, TOM2 Channel 11 CCU0 Counter Register */
#define GTM_TOM2_CH11_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01092D4u)

/** \brief 92D8, TOM2 Channel 11 Status Register */
#define GTM_TOM2_CH11_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01092D8u)

/** \brief 92DC, TOM2 Channel 11 Interrupt Notification Register */
#define GTM_TOM2_CH11_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01092DCu)

/** \brief 92E0, TOM2 Channel 11 Interrupt Enable Register */
#define GTM_TOM2_CH11_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092E0u)

/** \brief 92E4, TOM2 Channel 11 Force Interrupt Register */
#define GTM_TOM2_CH11_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092E4u)

/** \brief 92E8, TOM2 Channel 11 Interrupt Mode Register */
#define GTM_TOM2_CH11_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092E8u)

/** \brief 9300, TOM2 Channel 12 Control Register */
#define GTM_TOM2_CH12_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109300u)

/** \brief 9304, TOM2 Channel 12 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH12_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109304u)

/** \brief 9308, TOM2 Channel 12 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH12_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109308u)

/** \brief 930C, TOM2 Channel 12 CCU0 Compare Register */
#define GTM_TOM2_CH12_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010930Cu)

/** \brief 9310, TOM2 Channel 12 CCU1 Compare Register */
#define GTM_TOM2_CH12_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109310u)

/** \brief 9314, TOM2 Channel 12 CCU0 Counter Register */
#define GTM_TOM2_CH12_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109314u)

/** \brief 9318, TOM2 Channel 12 Status Register */
#define GTM_TOM2_CH12_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109318u)

/** \brief 931C, TOM2 Channel 12 Interrupt Notification Register */
#define GTM_TOM2_CH12_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010931Cu)

/** \brief 9320, TOM2 Channel 12 Interrupt Enable Register */
#define GTM_TOM2_CH12_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109320u)

/** \brief 9324, TOM2 Channel 12 Force Interrupt Register */
#define GTM_TOM2_CH12_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109324u)

/** \brief 9328, TOM2 Channel 12 Interrupt Mode Register */
#define GTM_TOM2_CH12_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109328u)

/** \brief 9340, TOM2 Channel 13 Control Register */
#define GTM_TOM2_CH13_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109340u)

/** \brief 9344, TOM2 Channel 13 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH13_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109344u)

/** \brief 9348, TOM2 Channel 13 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH13_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109348u)

/** \brief 934C, TOM2 Channel 13 CCU0 Compare Register */
#define GTM_TOM2_CH13_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010934Cu)

/** \brief 9350, TOM2 Channel 13 CCU1 Compare Register */
#define GTM_TOM2_CH13_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109350u)

/** \brief 9354, TOM2 Channel 13 CCU0 Counter Register */
#define GTM_TOM2_CH13_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109354u)

/** \brief 9358, TOM2 Channel 13 Status Register */
#define GTM_TOM2_CH13_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109358u)

/** \brief 935C, TOM2 Channel 13 Interrupt Notification Register */
#define GTM_TOM2_CH13_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010935Cu)

/** \brief 9360, TOM2 Channel 13 Interrupt Enable Register */
#define GTM_TOM2_CH13_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109360u)

/** \brief 9364, TOM2 Channel 13 Force Interrupt Register */
#define GTM_TOM2_CH13_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109364u)

/** \brief 9368, TOM2 Channel 13 Interrupt Mode Register */
#define GTM_TOM2_CH13_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109368u)

/** \brief 9380, TOM2 Channel 14 Control Register */
#define GTM_TOM2_CH14_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109380u)

/** \brief 9384, TOM2 Channel 14 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH14_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109384u)

/** \brief 9388, TOM2 Channel 14 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH14_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109388u)

/** \brief 938C, TOM2 Channel 14 CCU0 Compare Register */
#define GTM_TOM2_CH14_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010938Cu)

/** \brief 9390, TOM2 Channel 14 CCU1 Compare Register */
#define GTM_TOM2_CH14_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109390u)

/** \brief 9394, TOM2 Channel 14 CCU0 Counter Register */
#define GTM_TOM2_CH14_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109394u)

/** \brief 9398, TOM2 Channel 14 Status Register */
#define GTM_TOM2_CH14_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109398u)

/** \brief 939C, TOM2 Channel 14 Interrupt Notification Register */
#define GTM_TOM2_CH14_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010939Cu)

/** \brief 93A0, TOM2 Channel 14 Interrupt Enable Register */
#define GTM_TOM2_CH14_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093A0u)

/** \brief 93A4, TOM2 Channel 14 Force Interrupt Register */
#define GTM_TOM2_CH14_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093A4u)

/** \brief 93A8, TOM2 Channel 14 Interrupt Mode Register */
#define GTM_TOM2_CH14_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093A8u)

/** \brief 93C0, TOM2 Channel 15 Control Register */
#define GTM_TOM2_CH15_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01093C0u)

/** \brief 93C4, TOM2 Channel 15 CCU0 Compare Shadow Register */
#define GTM_TOM2_CH15_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01093C4u)

/** \brief 93C8, TOM2 Channel 15 CCU1 Compare Shadow Register */
#define GTM_TOM2_CH15_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01093C8u)

/** \brief 93CC, TOM2 Channel 15 CCU0 Compare Register */
#define GTM_TOM2_CH15_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01093CCu)

/** \brief 93D0, TOM2 Channel 15 CCU1 Compare Register */
#define GTM_TOM2_CH15_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01093D0u)

/** \brief 93D4, TOM2 Channel 15 CCU0 Counter Register */
#define GTM_TOM2_CH15_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01093D4u)

/** \brief 93D8, TOM2 Channel 15 Status Register */
#define GTM_TOM2_CH15_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01093D8u)

/** \brief 93DC, TOM2 Channel 15 Interrupt Notification Register */
#define GTM_TOM2_CH15_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01093DCu)

/** \brief 93E0, TOM2 Channel 15 Interrupt Enable Register */
#define GTM_TOM2_CH15_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093E0u)

/** \brief 93E4, TOM2 Channel 15 Force Interrupt Register */
#define GTM_TOM2_CH15_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093E4u)

/** \brief 93E8, TOM2 Channel 15 Interrupt Mode Register */
#define GTM_TOM2_CH15_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093E8u)

/** \brief 18000, F2A0 Stream 0 Read Address Register */
#define GTM_PSM0_F2A_RD_CH0_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118000u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH0_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH0_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH0_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH0_ARU_RD_FIFO)

/** \brief 18004, F2A0 Stream 1 Read Address Register */
#define GTM_PSM0_F2A_RD_CH1_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118004u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH1_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH1_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH1_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH1_ARU_RD_FIFO)

/** \brief 18008, F2A0 Stream 2 Read Address Register */
#define GTM_PSM0_F2A_RD_CH2_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118008u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH2_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH2_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH2_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH2_ARU_RD_FIFO)

/** \brief 1800C, F2A0 Stream 3 Read Address Register */
#define GTM_PSM0_F2A_RD_CH3_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF011800Cu)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH3_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH3_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH3_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH3_ARU_RD_FIFO)

/** \brief 18010, F2A0 Stream 4 Read Address Register */
#define GTM_PSM0_F2A_RD_CH4_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118010u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH4_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH4_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH4_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH4_ARU_RD_FIFO)

/** \brief 18014, F2A0 Stream 5 Read Address Register */
#define GTM_PSM0_F2A_RD_CH5_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118014u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH5_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH5_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH5_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH5_ARU_RD_FIFO)

/** \brief 18018, F2A0 Stream 6 Read Address Register */
#define GTM_PSM0_F2A_RD_CH6_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118018u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH6_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH6_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH6_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH6_ARU_RD_FIFO)

/** \brief 1801C, F2A0 Stream 7 Read Address Register */
#define GTM_PSM0_F2A_RD_CH7_ARU_RD_FIFO /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO*)0xF011801Cu)
/** Alias (User Manual Name) for GTM_PSM0_F2A_RD_CH7_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_PSM0_F2A_RD_CH7_ARU_RD_FIFO.
*/
#define GTM_F2A0_CH7_ARU_RD_FIFO (GTM_PSM0_F2A_RD_CH7_ARU_RD_FIFO)

/** \brief 18020, F2A0 Stream 0 Configuration Register */
#define GTM_PSM0_F2A_STR_CH0_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF0118020u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH0_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH0_STR_CFG.
*/
#define GTM_F2A0_CH0_STR_CFG (GTM_PSM0_F2A_STR_CH0_STR_CFG)

/** \brief 18024, F2A0 Stream 1 Configuration Register */
#define GTM_PSM0_F2A_STR_CH1_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF0118024u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH1_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH1_STR_CFG.
*/
#define GTM_F2A0_CH1_STR_CFG (GTM_PSM0_F2A_STR_CH1_STR_CFG)

/** \brief 18028, F2A0 Stream 2 Configuration Register */
#define GTM_PSM0_F2A_STR_CH2_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF0118028u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH2_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH2_STR_CFG.
*/
#define GTM_F2A0_CH2_STR_CFG (GTM_PSM0_F2A_STR_CH2_STR_CFG)

/** \brief 1802C, F2A0 Stream 3 Configuration Register */
#define GTM_PSM0_F2A_STR_CH3_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF011802Cu)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH3_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH3_STR_CFG.
*/
#define GTM_F2A0_CH3_STR_CFG (GTM_PSM0_F2A_STR_CH3_STR_CFG)

/** \brief 18030, F2A0 Stream 4 Configuration Register */
#define GTM_PSM0_F2A_STR_CH4_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF0118030u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH4_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH4_STR_CFG.
*/
#define GTM_F2A0_CH4_STR_CFG (GTM_PSM0_F2A_STR_CH4_STR_CFG)

/** \brief 18034, F2A0 Stream 5 Configuration Register */
#define GTM_PSM0_F2A_STR_CH5_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF0118034u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH5_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH5_STR_CFG.
*/
#define GTM_F2A0_CH5_STR_CFG (GTM_PSM0_F2A_STR_CH5_STR_CFG)

/** \brief 18038, F2A0 Stream 6 Configuration Register */
#define GTM_PSM0_F2A_STR_CH6_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF0118038u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH6_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH6_STR_CFG.
*/
#define GTM_F2A0_CH6_STR_CFG (GTM_PSM0_F2A_STR_CH6_STR_CFG)

/** \brief 1803C, F2A0 Stream 7 Configuration Register */
#define GTM_PSM0_F2A_STR_CH7_STR_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_STR_CH_STR_CFG*)0xF011803Cu)
/** Alias (User Manual Name) for GTM_PSM0_F2A_STR_CH7_STR_CFG.
* To use register names with standard convension, please use GTM_PSM0_F2A_STR_CH7_STR_CFG.
*/
#define GTM_F2A0_CH7_STR_CFG (GTM_PSM0_F2A_STR_CH7_STR_CFG)

/** \brief 18040, F2A0 Stream Activation Register */
#define GTM_PSM0_F2A_ENABLE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_ENABLE*)0xF0118040u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_ENABLE.
* To use register names with standard convension, please use GTM_PSM0_F2A_ENABLE.
*/
#define GTM_F2A0_ENABLE (GTM_PSM0_F2A_ENABLE)

/** \brief 18044, F2A0 Stream Control Register */
#define GTM_PSM0_F2A_F2A_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_F2A_F2A_CTRL*)0xF0118044u)
/** Alias (User Manual Name) for GTM_PSM0_F2A_F2A_CTRL.
* To use register names with standard convension, please use GTM_PSM0_F2A_F2A_CTRL.
*/
#define GTM_F2A0_CTRL (GTM_PSM0_F2A_F2A_CTRL)

/** \brief 18080, AFD 0 FIFO 0 Buffer Access Register */
#define GTM_PSM0_AFD_CH0_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF0118080u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH0_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH0_BUF_ACC.
*/
#define GTM_AFD0_CH0_BUF_ACC (GTM_PSM0_AFD_CH0_BUF_ACC)

/** \brief 18090, AFD 0 FIFO 1 Buffer Access Register */
#define GTM_PSM0_AFD_CH1_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF0118090u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH1_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH1_BUF_ACC.
*/
#define GTM_AFD0_CH1_BUF_ACC (GTM_PSM0_AFD_CH1_BUF_ACC)

/** \brief 180A0, AFD 0 FIFO 2 Buffer Access Register */
#define GTM_PSM0_AFD_CH2_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF01180A0u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH2_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH2_BUF_ACC.
*/
#define GTM_AFD0_CH2_BUF_ACC (GTM_PSM0_AFD_CH2_BUF_ACC)

/** \brief 180B0, AFD 0 FIFO 3 Buffer Access Register */
#define GTM_PSM0_AFD_CH3_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF01180B0u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH3_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH3_BUF_ACC.
*/
#define GTM_AFD0_CH3_BUF_ACC (GTM_PSM0_AFD_CH3_BUF_ACC)

/** \brief 180C0, AFD 0 FIFO 4 Buffer Access Register */
#define GTM_PSM0_AFD_CH4_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF01180C0u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH4_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH4_BUF_ACC.
*/
#define GTM_AFD0_CH4_BUF_ACC (GTM_PSM0_AFD_CH4_BUF_ACC)

/** \brief 180D0, AFD 0 FIFO 5 Buffer Access Register */
#define GTM_PSM0_AFD_CH5_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF01180D0u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH5_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH5_BUF_ACC.
*/
#define GTM_AFD0_CH5_BUF_ACC (GTM_PSM0_AFD_CH5_BUF_ACC)

/** \brief 180E0, AFD 0 FIFO 6 Buffer Access Register */
#define GTM_PSM0_AFD_CH6_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF01180E0u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH6_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH6_BUF_ACC.
*/
#define GTM_AFD0_CH6_BUF_ACC (GTM_PSM0_AFD_CH6_BUF_ACC)

/** \brief 180F0, AFD 0 FIFO 7 Buffer Access Register */
#define GTM_PSM0_AFD_CH7_BUF_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_AFD_CH_BUF_ACC*)0xF01180F0u)
/** Alias (User Manual Name) for GTM_PSM0_AFD_CH7_BUF_ACC.
* To use register names with standard convension, please use GTM_PSM0_AFD_CH7_BUF_ACC.
*/
#define GTM_AFD0_CH7_BUF_ACC (GTM_PSM0_AFD_CH7_BUF_ACC)

/** \brief 18400, FIFO0 Channel 0 Control Register */
#define GTM_PSM0_FIFO_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF0118400u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_CTRL.
*/
#define GTM_FIFO0_CH0_CTRL (GTM_PSM0_FIFO_CH0_CTRL)

/** \brief 18404, FIFO0 Channel 0 End Address Register */
#define GTM_PSM0_FIFO_CH0_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF0118404u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_END_ADDR.
*/
#define GTM_FIFO0_CH0_END_ADDR (GTM_PSM0_FIFO_CH0_END_ADDR)

/** \brief 18408, FIFO0 Channel 0 Start Address Register */
#define GTM_PSM0_FIFO_CH0_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF0118408u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_START_ADDR.
*/
#define GTM_FIFO0_CH0_START_ADDR (GTM_PSM0_FIFO_CH0_START_ADDR)

/** \brief 1840C, FIFO0 Channel 0 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH0_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF011840Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_UPPER_WM.
*/
#define GTM_FIFO0_CH0_UPPER_WM (GTM_PSM0_FIFO_CH0_UPPER_WM)

/** \brief 18410, FIFO0 Channel 0 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH0_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF0118410u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_LOWER_WM.
*/
#define GTM_FIFO0_CH0_LOWER_WM (GTM_PSM0_FIFO_CH0_LOWER_WM)

/** \brief 18414, FIFO0 Channel 0 Status Register */
#define GTM_PSM0_FIFO_CH0_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF0118414u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_STATUS.
*/
#define GTM_FIFO0_CH0_STATUS (GTM_PSM0_FIFO_CH0_STATUS)

/** \brief 18418, FIFO0 Channel 0 Fill Level Register */
#define GTM_PSM0_FIFO_CH0_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF0118418u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_FILL_LEVEL.
*/
#define GTM_FIFO0_CH0_FILL_LEVEL (GTM_PSM0_FIFO_CH0_FILL_LEVEL)

/** \brief 1841C, FIFO0 Channel 0 Write Pointer Register */
#define GTM_PSM0_FIFO_CH0_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF011841Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_WR_PTR.
*/
#define GTM_FIFO0_CH0_WR_PTR (GTM_PSM0_FIFO_CH0_WR_PTR)

/** \brief 18420, FIFO0 Channel 0 Read Pointer Register */
#define GTM_PSM0_FIFO_CH0_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF0118420u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_RD_PTR.
*/
#define GTM_FIFO0_CH0_RD_PTR (GTM_PSM0_FIFO_CH0_RD_PTR)

/** \brief 18424, FIFO0 Channel 0 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF0118424u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH0_IRQ_NOTIFY (GTM_PSM0_FIFO_CH0_IRQ_NOTIFY)

/** \brief 18428, FIFO0 Channel 0 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF0118428u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_IRQ_EN.
*/
#define GTM_FIFO0_CH0_IRQ_EN (GTM_PSM0_FIFO_CH0_IRQ_EN)

/** \brief 1842C, FIFO0 Channel 0 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF011842Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH0_IRQ_FORCINT (GTM_PSM0_FIFO_CH0_IRQ_FORCINT)

/** \brief 18430, FIFO0 Channel 0 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF0118430u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_IRQ_MODE.
*/
#define GTM_FIFO0_CH0_IRQ_MODE (GTM_PSM0_FIFO_CH0_IRQ_MODE)

/** \brief 18434, FIFO0 Channel 0 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF0118434u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH0_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH0_EIRQ_EN.
*/
#define GTM_FIFO0_CH0_EIRQ_EN (GTM_PSM0_FIFO_CH0_EIRQ_EN)

/** \brief 18440, FIFO0 Channel 1 Control Register */
#define GTM_PSM0_FIFO_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF0118440u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_CTRL.
*/
#define GTM_FIFO0_CH1_CTRL (GTM_PSM0_FIFO_CH1_CTRL)

/** \brief 18444, FIFO0 Channel 1 End Address Register */
#define GTM_PSM0_FIFO_CH1_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF0118444u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_END_ADDR.
*/
#define GTM_FIFO0_CH1_END_ADDR (GTM_PSM0_FIFO_CH1_END_ADDR)

/** \brief 18448, FIFO0 Channel 1 Start Address Register */
#define GTM_PSM0_FIFO_CH1_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF0118448u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_START_ADDR.
*/
#define GTM_FIFO0_CH1_START_ADDR (GTM_PSM0_FIFO_CH1_START_ADDR)

/** \brief 1844C, FIFO0 Channel 1 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH1_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF011844Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_UPPER_WM.
*/
#define GTM_FIFO0_CH1_UPPER_WM (GTM_PSM0_FIFO_CH1_UPPER_WM)

/** \brief 18450, FIFO0 Channel 1 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH1_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF0118450u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_LOWER_WM.
*/
#define GTM_FIFO0_CH1_LOWER_WM (GTM_PSM0_FIFO_CH1_LOWER_WM)

/** \brief 18454, FIFO0 Channel 1 Status Register */
#define GTM_PSM0_FIFO_CH1_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF0118454u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_STATUS.
*/
#define GTM_FIFO0_CH1_STATUS (GTM_PSM0_FIFO_CH1_STATUS)

/** \brief 18458, FIFO0 Channel 1 Fill Level Register */
#define GTM_PSM0_FIFO_CH1_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF0118458u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_FILL_LEVEL.
*/
#define GTM_FIFO0_CH1_FILL_LEVEL (GTM_PSM0_FIFO_CH1_FILL_LEVEL)

/** \brief 1845C, FIFO0 Channel 1 Write Pointer Register */
#define GTM_PSM0_FIFO_CH1_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF011845Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_WR_PTR.
*/
#define GTM_FIFO0_CH1_WR_PTR (GTM_PSM0_FIFO_CH1_WR_PTR)

/** \brief 18460, FIFO0 Channel 1 Read Pointer Register */
#define GTM_PSM0_FIFO_CH1_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF0118460u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_RD_PTR.
*/
#define GTM_FIFO0_CH1_RD_PTR (GTM_PSM0_FIFO_CH1_RD_PTR)

/** \brief 18464, FIFO0 Channel 1 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF0118464u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH1_IRQ_NOTIFY (GTM_PSM0_FIFO_CH1_IRQ_NOTIFY)

/** \brief 18468, FIFO0 Channel 1 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF0118468u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_IRQ_EN.
*/
#define GTM_FIFO0_CH1_IRQ_EN (GTM_PSM0_FIFO_CH1_IRQ_EN)

/** \brief 1846C, FIFO0 Channel 1 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF011846Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH1_IRQ_FORCINT (GTM_PSM0_FIFO_CH1_IRQ_FORCINT)

/** \brief 18470, FIFO0 Channel 1 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF0118470u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_IRQ_MODE.
*/
#define GTM_FIFO0_CH1_IRQ_MODE (GTM_PSM0_FIFO_CH1_IRQ_MODE)

/** \brief 18474, FIFO0 Channel 1 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF0118474u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH1_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH1_EIRQ_EN.
*/
#define GTM_FIFO0_CH1_EIRQ_EN (GTM_PSM0_FIFO_CH1_EIRQ_EN)

/** \brief 18480, FIFO0 Channel 2 Control Register */
#define GTM_PSM0_FIFO_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF0118480u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_CTRL.
*/
#define GTM_FIFO0_CH2_CTRL (GTM_PSM0_FIFO_CH2_CTRL)

/** \brief 18484, FIFO0 Channel 2 End Address Register */
#define GTM_PSM0_FIFO_CH2_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF0118484u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_END_ADDR.
*/
#define GTM_FIFO0_CH2_END_ADDR (GTM_PSM0_FIFO_CH2_END_ADDR)

/** \brief 18488, FIFO0 Channel 2 Start Address Register */
#define GTM_PSM0_FIFO_CH2_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF0118488u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_START_ADDR.
*/
#define GTM_FIFO0_CH2_START_ADDR (GTM_PSM0_FIFO_CH2_START_ADDR)

/** \brief 1848C, FIFO0 Channel 2 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH2_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF011848Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_UPPER_WM.
*/
#define GTM_FIFO0_CH2_UPPER_WM (GTM_PSM0_FIFO_CH2_UPPER_WM)

/** \brief 18490, FIFO0 Channel 2 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH2_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF0118490u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_LOWER_WM.
*/
#define GTM_FIFO0_CH2_LOWER_WM (GTM_PSM0_FIFO_CH2_LOWER_WM)

/** \brief 18494, FIFO0 Channel 2 Status Register */
#define GTM_PSM0_FIFO_CH2_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF0118494u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_STATUS.
*/
#define GTM_FIFO0_CH2_STATUS (GTM_PSM0_FIFO_CH2_STATUS)

/** \brief 18498, FIFO0 Channel 2 Fill Level Register */
#define GTM_PSM0_FIFO_CH2_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF0118498u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_FILL_LEVEL.
*/
#define GTM_FIFO0_CH2_FILL_LEVEL (GTM_PSM0_FIFO_CH2_FILL_LEVEL)

/** \brief 1849C, FIFO0 Channel 2 Write Pointer Register */
#define GTM_PSM0_FIFO_CH2_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF011849Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_WR_PTR.
*/
#define GTM_FIFO0_CH2_WR_PTR (GTM_PSM0_FIFO_CH2_WR_PTR)

/** \brief 184A0, FIFO0 Channel 2 Read Pointer Register */
#define GTM_PSM0_FIFO_CH2_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF01184A0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_RD_PTR.
*/
#define GTM_FIFO0_CH2_RD_PTR (GTM_PSM0_FIFO_CH2_RD_PTR)

/** \brief 184A4, FIFO0 Channel 2 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF01184A4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH2_IRQ_NOTIFY (GTM_PSM0_FIFO_CH2_IRQ_NOTIFY)

/** \brief 184A8, FIFO0 Channel 2 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF01184A8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_IRQ_EN.
*/
#define GTM_FIFO0_CH2_IRQ_EN (GTM_PSM0_FIFO_CH2_IRQ_EN)

/** \brief 184AC, FIFO0 Channel 2 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF01184ACu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH2_IRQ_FORCINT (GTM_PSM0_FIFO_CH2_IRQ_FORCINT)

/** \brief 184B0, FIFO0 Channel 2 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF01184B0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_IRQ_MODE.
*/
#define GTM_FIFO0_CH2_IRQ_MODE (GTM_PSM0_FIFO_CH2_IRQ_MODE)

/** \brief 184B4, FIFO0 Channel 2 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF01184B4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH2_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH2_EIRQ_EN.
*/
#define GTM_FIFO0_CH2_EIRQ_EN (GTM_PSM0_FIFO_CH2_EIRQ_EN)

/** \brief 184C0, FIFO0 Channel 3 Control Register */
#define GTM_PSM0_FIFO_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF01184C0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_CTRL.
*/
#define GTM_FIFO0_CH3_CTRL (GTM_PSM0_FIFO_CH3_CTRL)

/** \brief 184C4, FIFO0 Channel 3 End Address Register */
#define GTM_PSM0_FIFO_CH3_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF01184C4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_END_ADDR.
*/
#define GTM_FIFO0_CH3_END_ADDR (GTM_PSM0_FIFO_CH3_END_ADDR)

/** \brief 184C8, FIFO0 Channel 3 Start Address Register */
#define GTM_PSM0_FIFO_CH3_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF01184C8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_START_ADDR.
*/
#define GTM_FIFO0_CH3_START_ADDR (GTM_PSM0_FIFO_CH3_START_ADDR)

/** \brief 184CC, FIFO0 Channel 3 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH3_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF01184CCu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_UPPER_WM.
*/
#define GTM_FIFO0_CH3_UPPER_WM (GTM_PSM0_FIFO_CH3_UPPER_WM)

/** \brief 184D0, FIFO0 Channel 3 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH3_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF01184D0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_LOWER_WM.
*/
#define GTM_FIFO0_CH3_LOWER_WM (GTM_PSM0_FIFO_CH3_LOWER_WM)

/** \brief 184D4, FIFO0 Channel 3 Status Register */
#define GTM_PSM0_FIFO_CH3_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF01184D4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_STATUS.
*/
#define GTM_FIFO0_CH3_STATUS (GTM_PSM0_FIFO_CH3_STATUS)

/** \brief 184D8, FIFO0 Channel 3 Fill Level Register */
#define GTM_PSM0_FIFO_CH3_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF01184D8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_FILL_LEVEL.
*/
#define GTM_FIFO0_CH3_FILL_LEVEL (GTM_PSM0_FIFO_CH3_FILL_LEVEL)

/** \brief 184DC, FIFO0 Channel 3 Write Pointer Register */
#define GTM_PSM0_FIFO_CH3_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF01184DCu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_WR_PTR.
*/
#define GTM_FIFO0_CH3_WR_PTR (GTM_PSM0_FIFO_CH3_WR_PTR)

/** \brief 184E0, FIFO0 Channel 3 Read Pointer Register */
#define GTM_PSM0_FIFO_CH3_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF01184E0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_RD_PTR.
*/
#define GTM_FIFO0_CH3_RD_PTR (GTM_PSM0_FIFO_CH3_RD_PTR)

/** \brief 184E4, FIFO0 Channel 3 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF01184E4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH3_IRQ_NOTIFY (GTM_PSM0_FIFO_CH3_IRQ_NOTIFY)

/** \brief 184E8, FIFO0 Channel 3 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF01184E8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_IRQ_EN.
*/
#define GTM_FIFO0_CH3_IRQ_EN (GTM_PSM0_FIFO_CH3_IRQ_EN)

/** \brief 184EC, FIFO0 Channel 3 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF01184ECu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH3_IRQ_FORCINT (GTM_PSM0_FIFO_CH3_IRQ_FORCINT)

/** \brief 184F0, FIFO0 Channel 3 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF01184F0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_IRQ_MODE.
*/
#define GTM_FIFO0_CH3_IRQ_MODE (GTM_PSM0_FIFO_CH3_IRQ_MODE)

/** \brief 184F4, FIFO0 Channel 3 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF01184F4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH3_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH3_EIRQ_EN.
*/
#define GTM_FIFO0_CH3_EIRQ_EN (GTM_PSM0_FIFO_CH3_EIRQ_EN)

/** \brief 18500, FIFO0 Channel 4 Control Register */
#define GTM_PSM0_FIFO_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF0118500u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_CTRL.
*/
#define GTM_FIFO0_CH4_CTRL (GTM_PSM0_FIFO_CH4_CTRL)

/** \brief 18504, FIFO0 Channel 4 End Address Register */
#define GTM_PSM0_FIFO_CH4_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF0118504u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_END_ADDR.
*/
#define GTM_FIFO0_CH4_END_ADDR (GTM_PSM0_FIFO_CH4_END_ADDR)

/** \brief 18508, FIFO0 Channel 4 Start Address Register */
#define GTM_PSM0_FIFO_CH4_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF0118508u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_START_ADDR.
*/
#define GTM_FIFO0_CH4_START_ADDR (GTM_PSM0_FIFO_CH4_START_ADDR)

/** \brief 1850C, FIFO0 Channel 4 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH4_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF011850Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_UPPER_WM.
*/
#define GTM_FIFO0_CH4_UPPER_WM (GTM_PSM0_FIFO_CH4_UPPER_WM)

/** \brief 18510, FIFO0 Channel 4 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH4_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF0118510u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_LOWER_WM.
*/
#define GTM_FIFO0_CH4_LOWER_WM (GTM_PSM0_FIFO_CH4_LOWER_WM)

/** \brief 18514, FIFO0 Channel 4 Status Register */
#define GTM_PSM0_FIFO_CH4_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF0118514u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_STATUS.
*/
#define GTM_FIFO0_CH4_STATUS (GTM_PSM0_FIFO_CH4_STATUS)

/** \brief 18518, FIFO0 Channel 4 Fill Level Register */
#define GTM_PSM0_FIFO_CH4_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF0118518u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_FILL_LEVEL.
*/
#define GTM_FIFO0_CH4_FILL_LEVEL (GTM_PSM0_FIFO_CH4_FILL_LEVEL)

/** \brief 1851C, FIFO0 Channel 4 Write Pointer Register */
#define GTM_PSM0_FIFO_CH4_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF011851Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_WR_PTR.
*/
#define GTM_FIFO0_CH4_WR_PTR (GTM_PSM0_FIFO_CH4_WR_PTR)

/** \brief 18520, FIFO0 Channel 4 Read Pointer Register */
#define GTM_PSM0_FIFO_CH4_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF0118520u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_RD_PTR.
*/
#define GTM_FIFO0_CH4_RD_PTR (GTM_PSM0_FIFO_CH4_RD_PTR)

/** \brief 18524, FIFO0 Channel 4 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF0118524u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH4_IRQ_NOTIFY (GTM_PSM0_FIFO_CH4_IRQ_NOTIFY)

/** \brief 18528, FIFO0 Channel 4 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF0118528u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_IRQ_EN.
*/
#define GTM_FIFO0_CH4_IRQ_EN (GTM_PSM0_FIFO_CH4_IRQ_EN)

/** \brief 1852C, FIFO0 Channel 4 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF011852Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH4_IRQ_FORCINT (GTM_PSM0_FIFO_CH4_IRQ_FORCINT)

/** \brief 18530, FIFO0 Channel 4 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF0118530u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_IRQ_MODE.
*/
#define GTM_FIFO0_CH4_IRQ_MODE (GTM_PSM0_FIFO_CH4_IRQ_MODE)

/** \brief 18534, FIFO0 Channel 4 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF0118534u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH4_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH4_EIRQ_EN.
*/
#define GTM_FIFO0_CH4_EIRQ_EN (GTM_PSM0_FIFO_CH4_EIRQ_EN)

/** \brief 18540, FIFO0 Channel 5 Control Register */
#define GTM_PSM0_FIFO_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF0118540u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_CTRL.
*/
#define GTM_FIFO0_CH5_CTRL (GTM_PSM0_FIFO_CH5_CTRL)

/** \brief 18544, FIFO0 Channel 5 End Address Register */
#define GTM_PSM0_FIFO_CH5_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF0118544u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_END_ADDR.
*/
#define GTM_FIFO0_CH5_END_ADDR (GTM_PSM0_FIFO_CH5_END_ADDR)

/** \brief 18548, FIFO0 Channel 5 Start Address Register */
#define GTM_PSM0_FIFO_CH5_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF0118548u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_START_ADDR.
*/
#define GTM_FIFO0_CH5_START_ADDR (GTM_PSM0_FIFO_CH5_START_ADDR)

/** \brief 1854C, FIFO0 Channel 5 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH5_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF011854Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_UPPER_WM.
*/
#define GTM_FIFO0_CH5_UPPER_WM (GTM_PSM0_FIFO_CH5_UPPER_WM)

/** \brief 18550, FIFO0 Channel 5 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH5_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF0118550u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_LOWER_WM.
*/
#define GTM_FIFO0_CH5_LOWER_WM (GTM_PSM0_FIFO_CH5_LOWER_WM)

/** \brief 18554, FIFO0 Channel 5 Status Register */
#define GTM_PSM0_FIFO_CH5_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF0118554u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_STATUS.
*/
#define GTM_FIFO0_CH5_STATUS (GTM_PSM0_FIFO_CH5_STATUS)

/** \brief 18558, FIFO0 Channel 5 Fill Level Register */
#define GTM_PSM0_FIFO_CH5_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF0118558u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_FILL_LEVEL.
*/
#define GTM_FIFO0_CH5_FILL_LEVEL (GTM_PSM0_FIFO_CH5_FILL_LEVEL)

/** \brief 1855C, FIFO0 Channel 5 Write Pointer Register */
#define GTM_PSM0_FIFO_CH5_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF011855Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_WR_PTR.
*/
#define GTM_FIFO0_CH5_WR_PTR (GTM_PSM0_FIFO_CH5_WR_PTR)

/** \brief 18560, FIFO0 Channel 5 Read Pointer Register */
#define GTM_PSM0_FIFO_CH5_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF0118560u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_RD_PTR.
*/
#define GTM_FIFO0_CH5_RD_PTR (GTM_PSM0_FIFO_CH5_RD_PTR)

/** \brief 18564, FIFO0 Channel 5 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF0118564u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH5_IRQ_NOTIFY (GTM_PSM0_FIFO_CH5_IRQ_NOTIFY)

/** \brief 18568, FIFO0 Channel 5 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF0118568u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_IRQ_EN.
*/
#define GTM_FIFO0_CH5_IRQ_EN (GTM_PSM0_FIFO_CH5_IRQ_EN)

/** \brief 1856C, FIFO0 Channel 5 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF011856Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH5_IRQ_FORCINT (GTM_PSM0_FIFO_CH5_IRQ_FORCINT)

/** \brief 18570, FIFO0 Channel 5 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF0118570u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_IRQ_MODE.
*/
#define GTM_FIFO0_CH5_IRQ_MODE (GTM_PSM0_FIFO_CH5_IRQ_MODE)

/** \brief 18574, FIFO0 Channel 5 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF0118574u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH5_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH5_EIRQ_EN.
*/
#define GTM_FIFO0_CH5_EIRQ_EN (GTM_PSM0_FIFO_CH5_EIRQ_EN)

/** \brief 18580, FIFO0 Channel 6 Control Register */
#define GTM_PSM0_FIFO_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF0118580u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_CTRL.
*/
#define GTM_FIFO0_CH6_CTRL (GTM_PSM0_FIFO_CH6_CTRL)

/** \brief 18584, FIFO0 Channel 6 End Address Register */
#define GTM_PSM0_FIFO_CH6_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF0118584u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_END_ADDR.
*/
#define GTM_FIFO0_CH6_END_ADDR (GTM_PSM0_FIFO_CH6_END_ADDR)

/** \brief 18588, FIFO0 Channel 6 Start Address Register */
#define GTM_PSM0_FIFO_CH6_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF0118588u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_START_ADDR.
*/
#define GTM_FIFO0_CH6_START_ADDR (GTM_PSM0_FIFO_CH6_START_ADDR)

/** \brief 1858C, FIFO0 Channel 6 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH6_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF011858Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_UPPER_WM.
*/
#define GTM_FIFO0_CH6_UPPER_WM (GTM_PSM0_FIFO_CH6_UPPER_WM)

/** \brief 18590, FIFO0 Channel 6 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH6_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF0118590u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_LOWER_WM.
*/
#define GTM_FIFO0_CH6_LOWER_WM (GTM_PSM0_FIFO_CH6_LOWER_WM)

/** \brief 18594, FIFO0 Channel 6 Status Register */
#define GTM_PSM0_FIFO_CH6_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF0118594u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_STATUS.
*/
#define GTM_FIFO0_CH6_STATUS (GTM_PSM0_FIFO_CH6_STATUS)

/** \brief 18598, FIFO0 Channel 6 Fill Level Register */
#define GTM_PSM0_FIFO_CH6_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF0118598u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_FILL_LEVEL.
*/
#define GTM_FIFO0_CH6_FILL_LEVEL (GTM_PSM0_FIFO_CH6_FILL_LEVEL)

/** \brief 1859C, FIFO0 Channel 6 Write Pointer Register */
#define GTM_PSM0_FIFO_CH6_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF011859Cu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_WR_PTR.
*/
#define GTM_FIFO0_CH6_WR_PTR (GTM_PSM0_FIFO_CH6_WR_PTR)

/** \brief 185A0, FIFO0 Channel 6 Read Pointer Register */
#define GTM_PSM0_FIFO_CH6_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF01185A0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_RD_PTR.
*/
#define GTM_FIFO0_CH6_RD_PTR (GTM_PSM0_FIFO_CH6_RD_PTR)

/** \brief 185A4, FIFO0 Channel 6 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF01185A4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH6_IRQ_NOTIFY (GTM_PSM0_FIFO_CH6_IRQ_NOTIFY)

/** \brief 185A8, FIFO0 Channel 6 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF01185A8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_IRQ_EN.
*/
#define GTM_FIFO0_CH6_IRQ_EN (GTM_PSM0_FIFO_CH6_IRQ_EN)

/** \brief 185AC, FIFO0 Channel 6 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF01185ACu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH6_IRQ_FORCINT (GTM_PSM0_FIFO_CH6_IRQ_FORCINT)

/** \brief 185B0, FIFO0 Channel 6 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF01185B0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_IRQ_MODE.
*/
#define GTM_FIFO0_CH6_IRQ_MODE (GTM_PSM0_FIFO_CH6_IRQ_MODE)

/** \brief 185B4, FIFO0 Channel 6 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF01185B4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH6_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH6_EIRQ_EN.
*/
#define GTM_FIFO0_CH6_EIRQ_EN (GTM_PSM0_FIFO_CH6_EIRQ_EN)

/** \brief 185C0, FIFO0 Channel 7 Control Register */
#define GTM_PSM0_FIFO_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_CTRL*)0xF01185C0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_CTRL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_CTRL.
*/
#define GTM_FIFO0_CH7_CTRL (GTM_PSM0_FIFO_CH7_CTRL)

/** \brief 185C4, FIFO0 Channel 7 End Address Register */
#define GTM_PSM0_FIFO_CH7_END_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_END_ADDR*)0xF01185C4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_END_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_END_ADDR.
*/
#define GTM_FIFO0_CH7_END_ADDR (GTM_PSM0_FIFO_CH7_END_ADDR)

/** \brief 185C8, FIFO0 Channel 7 Start Address Register */
#define GTM_PSM0_FIFO_CH7_START_ADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_START_ADDR*)0xF01185C8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_START_ADDR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_START_ADDR.
*/
#define GTM_FIFO0_CH7_START_ADDR (GTM_PSM0_FIFO_CH7_START_ADDR)

/** \brief 185CC, FIFO0 Channel 7 Upper Watermark Register */
#define GTM_PSM0_FIFO_CH7_UPPER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_UPPER_WM*)0xF01185CCu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_UPPER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_UPPER_WM.
*/
#define GTM_FIFO0_CH7_UPPER_WM (GTM_PSM0_FIFO_CH7_UPPER_WM)

/** \brief 185D0, FIFO0 Channel 7 Lower Watermark Register */
#define GTM_PSM0_FIFO_CH7_LOWER_WM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_LOWER_WM*)0xF01185D0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_LOWER_WM.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_LOWER_WM.
*/
#define GTM_FIFO0_CH7_LOWER_WM (GTM_PSM0_FIFO_CH7_LOWER_WM)

/** \brief 185D4, FIFO0 Channel 7 Status Register */
#define GTM_PSM0_FIFO_CH7_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_STATUS*)0xF01185D4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_STATUS.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_STATUS.
*/
#define GTM_FIFO0_CH7_STATUS (GTM_PSM0_FIFO_CH7_STATUS)

/** \brief 185D8, FIFO0 Channel 7 Fill Level Register */
#define GTM_PSM0_FIFO_CH7_FILL_LEVEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL*)0xF01185D8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_FILL_LEVEL.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_FILL_LEVEL.
*/
#define GTM_FIFO0_CH7_FILL_LEVEL (GTM_PSM0_FIFO_CH7_FILL_LEVEL)

/** \brief 185DC, FIFO0 Channel 7 Write Pointer Register */
#define GTM_PSM0_FIFO_CH7_WR_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_WR_PTR*)0xF01185DCu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_WR_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_WR_PTR.
*/
#define GTM_FIFO0_CH7_WR_PTR (GTM_PSM0_FIFO_CH7_WR_PTR)

/** \brief 185E0, FIFO0 Channel 7 Read Pointer Register */
#define GTM_PSM0_FIFO_CH7_RD_PTR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_RD_PTR*)0xF01185E0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_RD_PTR.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_RD_PTR.
*/
#define GTM_FIFO0_CH7_RD_PTR (GTM_PSM0_FIFO_CH7_RD_PTR)

/** \brief 185E4, FIFO0 Channel 7 Interrupt Notification Register */
#define GTM_PSM0_FIFO_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY*)0xF01185E4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_IRQ_NOTIFY.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_IRQ_NOTIFY.
*/
#define GTM_FIFO0_CH7_IRQ_NOTIFY (GTM_PSM0_FIFO_CH7_IRQ_NOTIFY)

/** \brief 185E8, FIFO0 Channel 7 Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_EN*)0xF01185E8u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_IRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_IRQ_EN.
*/
#define GTM_FIFO0_CH7_IRQ_EN (GTM_PSM0_FIFO_CH7_IRQ_EN)

/** \brief 185EC, FIFO0 Channel 7 Force Interrupt Register */
#define GTM_PSM0_FIFO_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT*)0xF01185ECu)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_IRQ_FORCINT.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_IRQ_FORCINT.
*/
#define GTM_FIFO0_CH7_IRQ_FORCINT (GTM_PSM0_FIFO_CH7_IRQ_FORCINT)

/** \brief 185F0, FIFO0 Channel 7 Interrupt Mode Control Register */
#define GTM_PSM0_FIFO_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_IRQ_MODE*)0xF01185F0u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_IRQ_MODE.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_IRQ_MODE.
*/
#define GTM_FIFO0_CH7_IRQ_MODE (GTM_PSM0_FIFO_CH7_IRQ_MODE)

/** \brief 185F4, FIFO0 Channel 7 Error Interrupt Enable Register */
#define GTM_PSM0_FIFO_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSM_FIFO_CH_EIRQ_EN*)0xF01185F4u)
/** Alias (User Manual Name) for GTM_PSM0_FIFO_CH7_EIRQ_EN.
* To use register names with standard convension, please use GTM_PSM0_FIFO_CH7_EIRQ_EN.
*/
#define GTM_FIFO0_CH7_EIRQ_EN (GTM_PSM0_FIFO_CH7_EIRQ_EN)

/** \brief 28000, DPLL Control Register 0 */
#define GTM_DPLL_CTRL_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0*)0xF0128000u)

/** \brief 28004, DPLL Control Register 1 */
#define GTM_DPLL_CTRL_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_1*)0xF0128004u)

/** \brief 28008, DPLL Control Register 2 */
#define GTM_DPLL_CTRL_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_2*)0xF0128008u)

/** \brief 2800C, DPLL Control Register 3 */
#define GTM_DPLL_CTRL_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_3*)0xF012800Cu)

/** \brief 28010, DPLL Control Register 4 */
#define GTM_DPLL_CTRL_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_4*)0xF0128010u)

/** \brief 28014, DPLL Control Register 5 */
#define GTM_DPLL_CTRL_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_5*)0xF0128014u)

/** \brief 28018, DPLL ACTION Status Register with Connected Shadow Register */
#define GTM_DPLL_ACT_STA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACT_STA*)0xF0128018u)

/** \brief 2801C, DPLL Offset and Switch Old/New Address Register */
#define GTM_DPLL_OSW /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_OSW*)0xF012801Cu)

/** \brief 28020, DPLL Address Offset Register of RAM 2 Regions */
#define GTM_DPLL_AOSV_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_AOSV_2*)0xF0128020u)

/** \brief 28024, DPLL Actual RAM Pointer Address for TRIGGER */
#define GTM_DPLL_APT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APT*)0xF0128024u)

/** \brief 28028, DPLL Actual RAM Pointer Address for STATE */
#define GTM_DPLL_APS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APS*)0xF0128028u)

/** \brief 2802C, DPLL Actual RAM Pointer for Region 2C */
#define GTM_DPLL_APT_2C /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APT_2C*)0xF012802Cu)

/** \brief 28030, DPLL Actual RAM Pointer for RAM Region 1C3 */
#define GTM_DPLL_APS_1C3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APS_1C3*)0xF0128030u)

/** \brief 28034, DPLL Number of Recent TRIGGER Events Used for Calculations */
#define GTM_DPLL_NUTC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NUTC*)0xF0128034u)

/** \brief 28038, DPLL Number of Recent STATE Events Used for Calculations */
#define GTM_DPLL_NUSC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NUSC*)0xF0128038u)

/** \brief 2803C, DPLL Number of Active TRIGGER Events to Interrupt */
#define GTM_DPLL_NTI_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NTI_CNT*)0xF012803Cu)

/** \brief 28040, DPLL Interrupt Notification Register */
#define GTM_DPLL_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_IRQ_NOTIFY*)0xF0128040u)

/** \brief 28044, DPLL Interrupt Enable Register */
#define GTM_DPLL_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_IRQ_EN*)0xF0128044u)

/** \brief 28048, DPLL Interrupt Force Register */
#define GTM_DPLL_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_IRQ_FORCINT*)0xF0128048u)

/** \brief 2804C, DPLL Interrupt Mode Register */
#define GTM_DPLL_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_IRQ_MODE*)0xF012804Cu)

/** \brief 28050, DPLL Error Interrupt Enable Register */
#define GTM_DPLL_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_EIRQ_EN*)0xF0128050u)

/** \brief 280B0, DPLL Counter for Pulses for TBU_CH1_BASE to be Sent in Automatic End Mode */
#define GTM_DPLL_INC_CNT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT1*)0xF01280B0u)

/** \brief 280B4, DPLL Counter for Pulses for TBU_TS2 to be Sent in Automatic End Mode */
#define GTM_DPLL_INC_CNT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT2*)0xF01280B4u)

/** \brief 280B8, DPLL Old RAM Pointer and Offset Value for TRIGGER */
#define GTM_DPLL_APT_SYNC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APT_SYNC*)0xF01280B8u)

/** \brief 280BC, DPLL Old RAM Pointer and Offset Value for STATE */
#define GTM_DPLL_APS_SYNC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APS_SYNC*)0xF01280BCu)

/** \brief 280C0, DPLL TBU_TS0 Value at Last TRIGGER Event */
#define GTM_DPLL_TBU_TS0_T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TBU_TS0_T*)0xF01280C0u)

/** \brief 280C4, DPLL TBU_TS0 Value at Last STATE Event */
#define GTM_DPLL_TBU_TS0_S /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TBU_TS0_S*)0xF01280C4u)

/** \brief 280C8, DPLL Direct Load Input Value for SUB_INC1 */
#define GTM_DPLL_ADD_IN_LD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_LD1*)0xF01280C8u)

/** \brief 280CC, DPLL Direct Load Input Value for SUB_INC2 */
#define GTM_DPLL_ADD_IN_LD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_LD2*)0xF01280CCu)

/** \brief 280FC, DPLL Status Register */
#define GTM_DPLL_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_STATUS*)0xF01280FCu)

/** \brief 28100, DPLL ID Information for Input Signal PMT 0 Register */
#define GTM_DPLL_ID_PMTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128100u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR0.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR0.
*/
#define GTM_DPLL_ID_PMTR_0 (GTM_DPLL_ID_PMTR0)

/** \brief 28104, DPLL ID Information for Input Signal PMT 1 Register */
#define GTM_DPLL_ID_PMTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128104u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR1.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR1.
*/
#define GTM_DPLL_ID_PMTR_1 (GTM_DPLL_ID_PMTR1)

/** \brief 28108, DPLL ID Information for Input Signal PMT 2 Register */
#define GTM_DPLL_ID_PMTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128108u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR2.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR2.
*/
#define GTM_DPLL_ID_PMTR_2 (GTM_DPLL_ID_PMTR2)

/** \brief 2810C, DPLL ID Information for Input Signal PMT 3 Register */
#define GTM_DPLL_ID_PMTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012810Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR3.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR3.
*/
#define GTM_DPLL_ID_PMTR_3 (GTM_DPLL_ID_PMTR3)

/** \brief 28110, DPLL ID Information for Input Signal PMT 4 Register */
#define GTM_DPLL_ID_PMTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128110u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR4.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR4.
*/
#define GTM_DPLL_ID_PMTR_4 (GTM_DPLL_ID_PMTR4)

/** \brief 28114, DPLL ID Information for Input Signal PMT 5 Register */
#define GTM_DPLL_ID_PMTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128114u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR5.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR5.
*/
#define GTM_DPLL_ID_PMTR_5 (GTM_DPLL_ID_PMTR5)

/** \brief 28118, DPLL ID Information for Input Signal PMT 6 Register */
#define GTM_DPLL_ID_PMTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128118u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR6.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR6.
*/
#define GTM_DPLL_ID_PMTR_6 (GTM_DPLL_ID_PMTR6)

/** \brief 2811C, DPLL ID Information for Input Signal PMT 7 Register */
#define GTM_DPLL_ID_PMTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012811Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR7.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR7.
*/
#define GTM_DPLL_ID_PMTR_7 (GTM_DPLL_ID_PMTR7)

/** \brief 28120, DPLL ID Information for Input Signal PMT 8 Register */
#define GTM_DPLL_ID_PMTR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128120u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR8.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR8.
*/
#define GTM_DPLL_ID_PMTR_8 (GTM_DPLL_ID_PMTR8)

/** \brief 28124, DPLL ID Information for Input Signal PMT 9 Register */
#define GTM_DPLL_ID_PMTR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128124u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR9.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR9.
*/
#define GTM_DPLL_ID_PMTR_9 (GTM_DPLL_ID_PMTR9)

/** \brief 28128, DPLL ID Information for Input Signal PMT 10 Register */
#define GTM_DPLL_ID_PMTR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128128u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR10.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR10.
*/
#define GTM_DPLL_ID_PMTR_10 (GTM_DPLL_ID_PMTR10)

/** \brief 2812C, DPLL ID Information for Input Signal PMT 11 Register */
#define GTM_DPLL_ID_PMTR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012812Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR11.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR11.
*/
#define GTM_DPLL_ID_PMTR_11 (GTM_DPLL_ID_PMTR11)

/** \brief 28130, DPLL ID Information for Input Signal PMT 12 Register */
#define GTM_DPLL_ID_PMTR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128130u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR12.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR12.
*/
#define GTM_DPLL_ID_PMTR_12 (GTM_DPLL_ID_PMTR12)

/** \brief 28134, DPLL ID Information for Input Signal PMT 13 Register */
#define GTM_DPLL_ID_PMTR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128134u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR13.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR13.
*/
#define GTM_DPLL_ID_PMTR_13 (GTM_DPLL_ID_PMTR13)

/** \brief 28138, DPLL ID Information for Input Signal PMT 14 Register */
#define GTM_DPLL_ID_PMTR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128138u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR14.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR14.
*/
#define GTM_DPLL_ID_PMTR_14 (GTM_DPLL_ID_PMTR14)

/** \brief 2813C, DPLL ID Information for Input Signal PMT 15 Register */
#define GTM_DPLL_ID_PMTR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012813Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR15.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR15.
*/
#define GTM_DPLL_ID_PMTR_15 (GTM_DPLL_ID_PMTR15)

/** \brief 28140, DPLL ID Information for Input Signal PMT 16 Register */
#define GTM_DPLL_ID_PMTR16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128140u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR16.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR16.
*/
#define GTM_DPLL_ID_PMTR_16 (GTM_DPLL_ID_PMTR16)

/** \brief 28144, DPLL ID Information for Input Signal PMT 17 Register */
#define GTM_DPLL_ID_PMTR17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128144u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR17.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR17.
*/
#define GTM_DPLL_ID_PMTR_17 (GTM_DPLL_ID_PMTR17)

/** \brief 28148, DPLL ID Information for Input Signal PMT 18 Register */
#define GTM_DPLL_ID_PMTR18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128148u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR18.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR18.
*/
#define GTM_DPLL_ID_PMTR_18 (GTM_DPLL_ID_PMTR18)

/** \brief 2814C, DPLL ID Information for Input Signal PMT 19 Register */
#define GTM_DPLL_ID_PMTR19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012814Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR19.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR19.
*/
#define GTM_DPLL_ID_PMTR_19 (GTM_DPLL_ID_PMTR19)

/** \brief 28150, DPLL ID Information for Input Signal PMT 20 Register */
#define GTM_DPLL_ID_PMTR20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128150u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR20.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR20.
*/
#define GTM_DPLL_ID_PMTR_20 (GTM_DPLL_ID_PMTR20)

/** \brief 28154, DPLL ID Information for Input Signal PMT 21 Register */
#define GTM_DPLL_ID_PMTR21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128154u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR21.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR21.
*/
#define GTM_DPLL_ID_PMTR_21 (GTM_DPLL_ID_PMTR21)

/** \brief 28158, DPLL ID Information for Input Signal PMT 22 Register */
#define GTM_DPLL_ID_PMTR22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128158u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR22.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR22.
*/
#define GTM_DPLL_ID_PMTR_22 (GTM_DPLL_ID_PMTR22)

/** \brief 2815C, DPLL ID Information for Input Signal PMT 23 Register */
#define GTM_DPLL_ID_PMTR23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012815Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR23.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR23.
*/
#define GTM_DPLL_ID_PMTR_23 (GTM_DPLL_ID_PMTR23)

/** \brief 28160, DPLL ID Information for Input Signal PMT 24 Register */
#define GTM_DPLL_ID_PMTR24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128160u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR24.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR24.
*/
#define GTM_DPLL_ID_PMTR_24 (GTM_DPLL_ID_PMTR24)

/** \brief 28164, DPLL ID Information for Input Signal PMT 25 Register */
#define GTM_DPLL_ID_PMTR25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128164u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR25.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR25.
*/
#define GTM_DPLL_ID_PMTR_25 (GTM_DPLL_ID_PMTR25)

/** \brief 28168, DPLL ID Information for Input Signal PMT 26 Register */
#define GTM_DPLL_ID_PMTR26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128168u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR26.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR26.
*/
#define GTM_DPLL_ID_PMTR_26 (GTM_DPLL_ID_PMTR26)

/** \brief 2816C, DPLL ID Information for Input Signal PMT 27 Register */
#define GTM_DPLL_ID_PMTR27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012816Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR27.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR27.
*/
#define GTM_DPLL_ID_PMTR_27 (GTM_DPLL_ID_PMTR27)

/** \brief 28170, DPLL ID Information for Input Signal PMT 28 Register */
#define GTM_DPLL_ID_PMTR28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128170u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR28.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR28.
*/
#define GTM_DPLL_ID_PMTR_28 (GTM_DPLL_ID_PMTR28)

/** \brief 28174, DPLL ID Information for Input Signal PMT 29 Register */
#define GTM_DPLL_ID_PMTR29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128174u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR29.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR29.
*/
#define GTM_DPLL_ID_PMTR_29 (GTM_DPLL_ID_PMTR29)

/** \brief 28178, DPLL ID Information for Input Signal PMT 30 Register */
#define GTM_DPLL_ID_PMTR30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128178u)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR30.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR30.
*/
#define GTM_DPLL_ID_PMTR_30 (GTM_DPLL_ID_PMTR30)

/** \brief 2817C, DPLL ID Information for Input Signal PMT 31 Register */
#define GTM_DPLL_ID_PMTR31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012817Cu)
/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR31.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR31.
*/
#define GTM_DPLL_ID_PMTR_31 (GTM_DPLL_ID_PMTR31)

/** \brief 281E0, DPLL Control 0 Shadow Trigger Register */
#define GTM_DPLL_CTRL_0_SHADOW_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER*)0xF01281E0u)

/** \brief 281E4, DPLL Control 0 Shadow STATE Register */
#define GTM_DPLL_CTRL_0_SHADOW_STATE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE*)0xF01281E4u)

/** \brief 281E8, DPLL Control 1 Shadow TRIGGER Register */
#define GTM_DPLL_CTRL_1_SHADOW_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER*)0xF01281E8u)

/** \brief 281EC, DPLL Control 1 Shadow STATE Register */
#define GTM_DPLL_CTRL_1_SHADOW_STATE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE*)0xF01281ECu)

/** \brief 281FC, DPLL RAM Initialization Register */
#define GTM_DPLL_RAM_INI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RAM_INI*)0xF01281FCu)

/** \brief 28200, DPLL ACTION_0 Position/Value Request */
#define GTM_DPLL_PSA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128200u)

/** \brief 28204, DPLL ACTION_1 Position/Value Request */
#define GTM_DPLL_PSA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128204u)

/** \brief 28208, DPLL ACTION_2 Position/Value Request */
#define GTM_DPLL_PSA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128208u)

/** \brief 2820C, DPLL ACTION_3 Position/Value Request */
#define GTM_DPLL_PSA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012820Cu)

/** \brief 28210, DPLL ACTION_4 Position/Value Request */
#define GTM_DPLL_PSA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128210u)

/** \brief 28214, DPLL ACTION_5 Position/Value Request */
#define GTM_DPLL_PSA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128214u)

/** \brief 28218, DPLL ACTION_6 Position/Value Request */
#define GTM_DPLL_PSA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128218u)

/** \brief 2821C, DPLL ACTION_7 Position/Value Request */
#define GTM_DPLL_PSA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012821Cu)

/** \brief 28220, DPLL ACTION_8 Position/Value Request */
#define GTM_DPLL_PSA8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128220u)

/** \brief 28224, DPLL ACTION_9 Position/Value Request */
#define GTM_DPLL_PSA9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128224u)

/** \brief 28228, DPLL ACTION_10 Position/Value Request */
#define GTM_DPLL_PSA10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128228u)

/** \brief 2822C, DPLL ACTION_11 Position/Value Request */
#define GTM_DPLL_PSA11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012822Cu)

/** \brief 28230, DPLL ACTION_12 Position/Value Request */
#define GTM_DPLL_PSA12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128230u)

/** \brief 28234, DPLL ACTION_13 Position/Value Request */
#define GTM_DPLL_PSA13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128234u)

/** \brief 28238, DPLL ACTION_14 Position/Value Request */
#define GTM_DPLL_PSA14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128238u)

/** \brief 2823C, DPLL ACTION_15 Position/Value Request */
#define GTM_DPLL_PSA15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012823Cu)

/** \brief 28240, DPLL ACTION_16 Position/Value Request */
#define GTM_DPLL_PSA16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128240u)

/** \brief 28244, DPLL ACTION_17 Position/Value Request */
#define GTM_DPLL_PSA17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128244u)

/** \brief 28248, DPLL ACTION_18 Position/Value Request */
#define GTM_DPLL_PSA18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128248u)

/** \brief 2824C, DPLL ACTION_19 Position/Value Request */
#define GTM_DPLL_PSA19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012824Cu)

/** \brief 28250, DPLL ACTION_20 Position/Value Request */
#define GTM_DPLL_PSA20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128250u)

/** \brief 28254, DPLL ACTION_21 Position/Value Request */
#define GTM_DPLL_PSA21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128254u)

/** \brief 28258, DPLL ACTION_22 Position/Value Request */
#define GTM_DPLL_PSA22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128258u)

/** \brief 2825C, DPLL ACTION_23 Position/Value Request */
#define GTM_DPLL_PSA23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012825Cu)

/** \brief 28260, DPLL ACTION_24 Position/Value Request */
#define GTM_DPLL_PSA24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128260u)

/** \brief 28264, DPLL ACTION_25 Position/Value Request */
#define GTM_DPLL_PSA25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128264u)

/** \brief 28268, DPLL ACTION_26 Position/Value Request */
#define GTM_DPLL_PSA26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128268u)

/** \brief 2826C, DPLL ACTION_27 Position/Value Request */
#define GTM_DPLL_PSA27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012826Cu)

/** \brief 28270, DPLL ACTION_28 Position/Value Request */
#define GTM_DPLL_PSA28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128270u)

/** \brief 28274, DPLL ACTION_29 Position/Value Request */
#define GTM_DPLL_PSA29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128274u)

/** \brief 28278, DPLL ACTION_30 Position/Value Request */
#define GTM_DPLL_PSA30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128278u)

/** \brief 2827C, DPLL ACTION_31 Position/Value Request */
#define GTM_DPLL_PSA31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012827Cu)

/** \brief 28280, DPLL ACTION_0 Time to React before PSAi */
#define GTM_DPLL_DLA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128280u)

/** \brief 28284, DPLL ACTION_1 Time to React before PSAi */
#define GTM_DPLL_DLA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128284u)

/** \brief 28288, DPLL ACTION_2 Time to React before PSAi */
#define GTM_DPLL_DLA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128288u)

/** \brief 2828C, DPLL ACTION_3 Time to React before PSAi */
#define GTM_DPLL_DLA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF012828Cu)

/** \brief 28290, DPLL ACTION_4 Time to React before PSAi */
#define GTM_DPLL_DLA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128290u)

/** \brief 28294, DPLL ACTION_5 Time to React before PSAi */
#define GTM_DPLL_DLA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128294u)

/** \brief 28298, DPLL ACTION_6 Time to React before PSAi */
#define GTM_DPLL_DLA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128298u)

/** \brief 2829C, DPLL ACTION_7 Time to React before PSAi */
#define GTM_DPLL_DLA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF012829Cu)

/** \brief 282A0, DPLL ACTION_8 Time to React before PSAi */
#define GTM_DPLL_DLA8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282A0u)

/** \brief 282A4, DPLL ACTION_9 Time to React before PSAi */
#define GTM_DPLL_DLA9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282A4u)

/** \brief 282A8, DPLL ACTION_10 Time to React before PSAi */
#define GTM_DPLL_DLA10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282A8u)

/** \brief 282AC, DPLL ACTION_11 Time to React before PSAi */
#define GTM_DPLL_DLA11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282ACu)

/** \brief 282B0, DPLL ACTION_12 Time to React before PSAi */
#define GTM_DPLL_DLA12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282B0u)

/** \brief 282B4, DPLL ACTION_13 Time to React before PSAi */
#define GTM_DPLL_DLA13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282B4u)

/** \brief 282B8, DPLL ACTION_14 Time to React before PSAi */
#define GTM_DPLL_DLA14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282B8u)

/** \brief 282BC, DPLL ACTION_15 Time to React before PSAi */
#define GTM_DPLL_DLA15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282BCu)

/** \brief 282C0, DPLL ACTION_16 Time to React before PSAi */
#define GTM_DPLL_DLA16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282C0u)

/** \brief 282C4, DPLL ACTION_17 Time to React before PSAi */
#define GTM_DPLL_DLA17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282C4u)

/** \brief 282C8, DPLL ACTION_18 Time to React before PSAi */
#define GTM_DPLL_DLA18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282C8u)

/** \brief 282CC, DPLL ACTION_19 Time to React before PSAi */
#define GTM_DPLL_DLA19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282CCu)

/** \brief 282D0, DPLL ACTION_20 Time to React before PSAi */
#define GTM_DPLL_DLA20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282D0u)

/** \brief 282D4, DPLL ACTION_21 Time to React before PSAi */
#define GTM_DPLL_DLA21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282D4u)

/** \brief 282D8, DPLL ACTION_22 Time to React before PSAi */
#define GTM_DPLL_DLA22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282D8u)

/** \brief 282DC, DPLL ACTION_23 Time to React before PSAi */
#define GTM_DPLL_DLA23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282DCu)

/** \brief 282E0, DPLL ACTION_24 Time to React before PSAi */
#define GTM_DPLL_DLA24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282E0u)

/** \brief 282E4, DPLL ACTION_25 Time to React before PSAi */
#define GTM_DPLL_DLA25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282E4u)

/** \brief 282E8, DPLL ACTION_26 Time to React before PSAi */
#define GTM_DPLL_DLA26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282E8u)

/** \brief 282EC, DPLL ACTION_27 Time to React before PSAi */
#define GTM_DPLL_DLA27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282ECu)

/** \brief 282F0, DPLL ACTION_28 Time to React before PSAi */
#define GTM_DPLL_DLA28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282F0u)

/** \brief 282F4, DPLL ACTION_29 Time to React before PSAi */
#define GTM_DPLL_DLA29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282F4u)

/** \brief 282F8, DPLL ACTION_30 Time to React before PSAi */
#define GTM_DPLL_DLA30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282F8u)

/** \brief 282FC, DPLL ACTION_31 Time to React before PSAi */
#define GTM_DPLL_DLA31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282FCu)

/** \brief 28300, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_0 */
#define GTM_DPLL_NA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128300u)

/** \brief 28304, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_1 */
#define GTM_DPLL_NA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128304u)

/** \brief 28308, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_2 */
#define GTM_DPLL_NA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128308u)

/** \brief 2830C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_3 */
#define GTM_DPLL_NA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012830Cu)

/** \brief 28310, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_4 */
#define GTM_DPLL_NA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128310u)

/** \brief 28314, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_5 */
#define GTM_DPLL_NA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128314u)

/** \brief 28318, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_6 */
#define GTM_DPLL_NA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128318u)

/** \brief 2831C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_7 */
#define GTM_DPLL_NA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012831Cu)

/** \brief 28320, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_8 */
#define GTM_DPLL_NA8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128320u)

/** \brief 28324, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_9 */
#define GTM_DPLL_NA9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128324u)

/** \brief 28328, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_10 */
#define GTM_DPLL_NA10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128328u)

/** \brief 2832C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_11 */
#define GTM_DPLL_NA11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012832Cu)

/** \brief 28330, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_12 */
#define GTM_DPLL_NA12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128330u)

/** \brief 28334, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_13 */
#define GTM_DPLL_NA13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128334u)

/** \brief 28338, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_14 */
#define GTM_DPLL_NA14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128338u)

/** \brief 2833C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_15 */
#define GTM_DPLL_NA15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012833Cu)

/** \brief 28340, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_16 */
#define GTM_DPLL_NA16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128340u)

/** \brief 28344, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_17 */
#define GTM_DPLL_NA17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128344u)

/** \brief 28348, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_18 */
#define GTM_DPLL_NA18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128348u)

/** \brief 2834C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_19 */
#define GTM_DPLL_NA19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012834Cu)

/** \brief 28350, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_20 */
#define GTM_DPLL_NA20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128350u)

/** \brief 28354, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_21 */
#define GTM_DPLL_NA21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128354u)

/** \brief 28358, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_22 */
#define GTM_DPLL_NA22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128358u)

/** \brief 2835C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_23 */
#define GTM_DPLL_NA23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012835Cu)

/** \brief 28360, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_24 */
#define GTM_DPLL_NA24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128360u)

/** \brief 28364, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_25 */
#define GTM_DPLL_NA25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128364u)

/** \brief 28368, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_26 */
#define GTM_DPLL_NA26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128368u)

/** \brief 2836C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_27 */
#define GTM_DPLL_NA27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012836Cu)

/** \brief 28370, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_28 */
#define GTM_DPLL_NA28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128370u)

/** \brief 28374, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_29 */
#define GTM_DPLL_NA29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128374u)

/** \brief 28378, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_30 */
#define GTM_DPLL_NA30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128378u)

/** \brief 2837C, DPLL Calculated Number of TRIGGER/STATE Increments to ACTION_31 */
#define GTM_DPLL_NA31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012837Cu)

/** \brief 28380, DPLL Calculated Relative TIME to ACTION_0 */
#define GTM_DPLL_DTA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128380u)

/** \brief 28384, DPLL Calculated Relative TIME to ACTION_1 */
#define GTM_DPLL_DTA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128384u)

/** \brief 28388, DPLL Calculated Relative TIME to ACTION_2 */
#define GTM_DPLL_DTA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128388u)

/** \brief 2838C, DPLL Calculated Relative TIME to ACTION_3 */
#define GTM_DPLL_DTA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF012838Cu)

/** \brief 28390, DPLL Calculated Relative TIME to ACTION_4 */
#define GTM_DPLL_DTA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128390u)

/** \brief 28394, DPLL Calculated Relative TIME to ACTION_5 */
#define GTM_DPLL_DTA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128394u)

/** \brief 28398, DPLL Calculated Relative TIME to ACTION_6 */
#define GTM_DPLL_DTA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128398u)

/** \brief 2839C, DPLL Calculated Relative TIME to ACTION_7 */
#define GTM_DPLL_DTA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF012839Cu)

/** \brief 283A0, DPLL Calculated Relative TIME to ACTION_8 */
#define GTM_DPLL_DTA8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283A0u)

/** \brief 283A4, DPLL Calculated Relative TIME to ACTION_9 */
#define GTM_DPLL_DTA9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283A4u)

/** \brief 283A8, DPLL Calculated Relative TIME to ACTION_10 */
#define GTM_DPLL_DTA10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283A8u)

/** \brief 283AC, DPLL Calculated Relative TIME to ACTION_11 */
#define GTM_DPLL_DTA11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283ACu)

/** \brief 283B0, DPLL Calculated Relative TIME to ACTION_12 */
#define GTM_DPLL_DTA12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283B0u)

/** \brief 283B4, DPLL Calculated Relative TIME to ACTION_13 */
#define GTM_DPLL_DTA13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283B4u)

/** \brief 283B8, DPLL Calculated Relative TIME to ACTION_14 */
#define GTM_DPLL_DTA14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283B8u)

/** \brief 283BC, DPLL Calculated Relative TIME to ACTION_15 */
#define GTM_DPLL_DTA15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283BCu)

/** \brief 283C0, DPLL Calculated Relative TIME to ACTION_16 */
#define GTM_DPLL_DTA16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283C0u)

/** \brief 283C4, DPLL Calculated Relative TIME to ACTION_17 */
#define GTM_DPLL_DTA17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283C4u)

/** \brief 283C8, DPLL Calculated Relative TIME to ACTION_18 */
#define GTM_DPLL_DTA18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283C8u)

/** \brief 283CC, DPLL Calculated Relative TIME to ACTION_19 */
#define GTM_DPLL_DTA19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283CCu)

/** \brief 283D0, DPLL Calculated Relative TIME to ACTION_20 */
#define GTM_DPLL_DTA20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283D0u)

/** \brief 283D4, DPLL Calculated Relative TIME to ACTION_21 */
#define GTM_DPLL_DTA21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283D4u)

/** \brief 283D8, DPLL Calculated Relative TIME to ACTION_22 */
#define GTM_DPLL_DTA22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283D8u)

/** \brief 283DC, DPLL Calculated Relative TIME to ACTION_23 */
#define GTM_DPLL_DTA23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283DCu)

/** \brief 283E0, DPLL Calculated Relative TIME to ACTION_24 */
#define GTM_DPLL_DTA24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283E0u)

/** \brief 283E4, DPLL Calculated Relative TIME to ACTION_25 */
#define GTM_DPLL_DTA25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283E4u)

/** \brief 283E8, DPLL Calculated Relative TIME to ACTION_26 */
#define GTM_DPLL_DTA26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283E8u)

/** \brief 283EC, DPLL Calculated Relative TIME to ACTION_27 */
#define GTM_DPLL_DTA27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283ECu)

/** \brief 283F0, DPLL Calculated Relative TIME to ACTION_28 */
#define GTM_DPLL_DTA28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283F0u)

/** \brief 283F4, DPLL Calculated Relative TIME to ACTION_29 */
#define GTM_DPLL_DTA29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283F4u)

/** \brief 283F8, DPLL Calculated Relative TIME to ACTION_30 */
#define GTM_DPLL_DTA30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283F8u)

/** \brief 283FC, DPLL Calculated Relative TIME to ACTION_31 */
#define GTM_DPLL_DTA31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283FCu)

/** \brief 28400, DPLL Actual TRIGGER Time Stamp Value */
#define GTM_DPLL_TS_T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TS_T*)0xF0128400u)

/** \brief 28404, DPLL Previous TRIGGER Time Stamp Value */
#define GTM_DPLL_TS_T_OLD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TS_T_OLD*)0xF0128404u)

/** \brief 28408, DPLL Actual TRIGGER Filter Value */
#define GTM_DPLL_FTV_T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_FTV_T*)0xF0128408u)

/** \brief 28410, DPLL Actual STATE Time Stamp */
#define GTM_DPLL_TS_S /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TS_S*)0xF0128410u)

/** \brief 28414, DPLL Previous STATE Time Stamp */
#define GTM_DPLL_TS_S_OLD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TS_S_OLD*)0xF0128414u)

/** \brief 28418, DPLL Actual STATE Filter Value */
#define GTM_DPLL_FTV_S /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_FTV_S*)0xF0128418u)

/** \brief 28420, DPLL TRIGGER Hold Time Minimum Value */
#define GTM_DPLL_THMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_THMI*)0xF0128420u)

/** \brief 28424, DPLL TRIGGER Hold Time Maximum Value */
#define GTM_DPLL_THMA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_THMA*)0xF0128424u)

/** \brief 28428, DPLL Measured TRIGGER Hold Time Value */
#define GTM_DPLL_THVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_THVAL*)0xF0128428u)

/** \brief 28430, DPLL Time Out Value of Active TRIGGER Slope */
#define GTM_DPLL_TOV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TOV*)0xF0128430u)

/** \brief 28434, DPLL Time Out Value of Active STATE Slope */
#define GTM_DPLL_TOV_S /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TOV_S*)0xF0128434u)

/** \brief 28438, DPLL Calculated ADD_IN Value for SUB_INC1 Generation */
#define GTM_DPLL_ADD_IN_CAL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_CAL1*)0xF0128438u)

/** \brief 2843C, DPLL Calculated ADD_IN Value for SUB_INC2 Generation */
#define GTM_DPLL_ADD_IN_CAL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_CAL2*)0xF012843Cu)

/** \brief 28440, DPLL Missing Pulses to be Added or Subtracted Directly 1 */
#define GTM_DPLL_MPVAL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_MPVAL1*)0xF0128440u)

/** \brief 28444, DPLL Missing Pulses to be Added or Subtracted Directly 2 */
#define GTM_DPLL_MPVAL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_MPVAL2*)0xF0128444u)

/** \brief 28448, DPLL Target Number of Pulses to be Sent in Normal Mode */
#define GTM_DPLL_NMB_T_TAR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NMB_T_TAR*)0xF0128448u)

/** \brief 2844C, DPLL Last but One Target Number of Pulses to be Sent in Normal Mode */
#define GTM_DPLL_NMB_T_TAR_OLD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NMB_T_TAR_OLD*)0xF012844Cu)

/** \brief 28450, DPLL Target Number of Pulses to be Sent in Emergency Mode */
#define GTM_DPLL_NMB_S_TAR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NMB_S_TAR*)0xF0128450u)

/** \brief 28454, DPLL Last but One Target Number of Pulses to be Sent in Emergency Mode */
#define GTM_DPLL_NMB_S_TAR_OLD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NMB_S_TAR_OLD*)0xF0128454u)

/** \brief 28460, DPLL Reciprocal Value of the Expected Increment Duration of TRIGGER */
#define GTM_DPLL_RCDT_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RCDT_TX*)0xF0128460u)

/** \brief 28464, DPLL Reciprocal Value of the Expected Increment Duration of STATE */
#define GTM_DPLL_RCDT_SX /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RCDT_SX*)0xF0128464u)

/** \brief 28468, DPLL Reciprocal Value of the Expected Nominal Increment Duration of TRIGGER */
#define GTM_DPLL_RCDT_TX_NOM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RCDT_TX_NOM*)0xF0128468u)

/** \brief 2846C, DPLL Reciprocal Value of the Expected Nominal Increment Duration of STATE */
#define GTM_DPLL_RCDT_SX_NOM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RCDT_SX_NOM*)0xF012846Cu)

/** \brief 28470, DPLL Reciprocal Value of the Last Increment of TRIGGER */
#define GTM_DPLL_RDT_T_ACT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_T_ACT*)0xF0128470u)

/** \brief 28474, DPLL Reciprocal Value of the Last Increment of STATE */
#define GTM_DPLL_RDT_S_ACT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S_ACT*)0xF0128474u)

/** \brief 28478, DPLL Duration of the Last TRIGGER Increment */
#define GTM_DPLL_DT_T_ACT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_T_ACT*)0xF0128478u)

/** \brief 2847C, DPLL Duration of the Last STATE Increment */
#define GTM_DPLL_DT_S_ACT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S_ACT*)0xF012847Cu)

/** \brief 28480, DPLL Difference of Prediction to Actual Value of the Last TRIGGER Increment */
#define GTM_DPLL_EDT_T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_EDT_T*)0xF0128480u)

/** \brief 28484, DPLL Weighted Difference of Prediction Errors of TRIGGER */
#define GTM_DPLL_MEDT_T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_MEDT_T*)0xF0128484u)

/** \brief 28488, DPLL Difference of Prediction to Actual Value of the Last STATE Increment */
#define GTM_DPLL_EDT_S /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_EDT_S*)0xF0128488u)

/** \brief 2848C, DPLL Weighted Difference of Prediction Errors of STATE */
#define GTM_DPLL_MEDT_S /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_MEDT_S*)0xF012848Cu)

/** \brief 28490, DPLL Prediction of the Actual TRIGGER Increment Duration */
#define GTM_DPLL_CDT_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CDT_TX*)0xF0128490u)

/** \brief 28494, DPLL Prediction of the Actual STATE Increment Duration */
#define GTM_DPLL_CDT_SX /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CDT_SX*)0xF0128494u)

/** \brief 28498, DPLL Prediction of the Nominal TRIGGER Increment Duration */
#define GTM_DPLL_CDT_TX_NOM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CDT_TX_NOM*)0xF0128498u)

/** \brief 2849C, DPLL Prediction of the Nominal STATE Increment Duration */
#define GTM_DPLL_CDT_SX_NOM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CDT_SX_NOM*)0xF012849Cu)

/** \brief 284A0, DPLL TRIGGER Locking Range */
#define GTM_DPLL_TLR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TLR*)0xF01284A0u)

/** \brief 284A4, DPLL STATE Locking Range */
#define GTM_DPLL_SLR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_SLR*)0xF01284A4u)

/** \brief 28500, DPLL Projected Increment Sum Relations for Action 0 */
#define GTM_DPLL_PDT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128500u)
/** Alias (User Manual Name) for GTM_DPLL_PDT0.
* To use register names with standard convension, please use GTM_DPLL_PDT0.
*/
#define GTM_DPLL_PDT_0 (GTM_DPLL_PDT0)

/** \brief 28504, DPLL Projected Increment Sum Relations for Action 1 */
#define GTM_DPLL_PDT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128504u)
/** Alias (User Manual Name) for GTM_DPLL_PDT1.
* To use register names with standard convension, please use GTM_DPLL_PDT1.
*/
#define GTM_DPLL_PDT_1 (GTM_DPLL_PDT1)

/** \brief 28508, DPLL Projected Increment Sum Relations for Action 2 */
#define GTM_DPLL_PDT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128508u)
/** Alias (User Manual Name) for GTM_DPLL_PDT2.
* To use register names with standard convension, please use GTM_DPLL_PDT2.
*/
#define GTM_DPLL_PDT_2 (GTM_DPLL_PDT2)

/** \brief 2850C, DPLL Projected Increment Sum Relations for Action 3 */
#define GTM_DPLL_PDT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012850Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT3.
* To use register names with standard convension, please use GTM_DPLL_PDT3.
*/
#define GTM_DPLL_PDT_3 (GTM_DPLL_PDT3)

/** \brief 28510, DPLL Projected Increment Sum Relations for Action 4 */
#define GTM_DPLL_PDT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128510u)
/** Alias (User Manual Name) for GTM_DPLL_PDT4.
* To use register names with standard convension, please use GTM_DPLL_PDT4.
*/
#define GTM_DPLL_PDT_4 (GTM_DPLL_PDT4)

/** \brief 28514, DPLL Projected Increment Sum Relations for Action 5 */
#define GTM_DPLL_PDT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128514u)
/** Alias (User Manual Name) for GTM_DPLL_PDT5.
* To use register names with standard convension, please use GTM_DPLL_PDT5.
*/
#define GTM_DPLL_PDT_5 (GTM_DPLL_PDT5)

/** \brief 28518, DPLL Projected Increment Sum Relations for Action 6 */
#define GTM_DPLL_PDT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128518u)
/** Alias (User Manual Name) for GTM_DPLL_PDT6.
* To use register names with standard convension, please use GTM_DPLL_PDT6.
*/
#define GTM_DPLL_PDT_6 (GTM_DPLL_PDT6)

/** \brief 2851C, DPLL Projected Increment Sum Relations for Action 7 */
#define GTM_DPLL_PDT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012851Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT7.
* To use register names with standard convension, please use GTM_DPLL_PDT7.
*/
#define GTM_DPLL_PDT_7 (GTM_DPLL_PDT7)

/** \brief 28520, DPLL Projected Increment Sum Relations for Action 8 */
#define GTM_DPLL_PDT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128520u)
/** Alias (User Manual Name) for GTM_DPLL_PDT8.
* To use register names with standard convension, please use GTM_DPLL_PDT8.
*/
#define GTM_DPLL_PDT_8 (GTM_DPLL_PDT8)

/** \brief 28524, DPLL Projected Increment Sum Relations for Action 9 */
#define GTM_DPLL_PDT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128524u)
/** Alias (User Manual Name) for GTM_DPLL_PDT9.
* To use register names with standard convension, please use GTM_DPLL_PDT9.
*/
#define GTM_DPLL_PDT_9 (GTM_DPLL_PDT9)

/** \brief 28528, DPLL Projected Increment Sum Relations for Action 10 */
#define GTM_DPLL_PDT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128528u)
/** Alias (User Manual Name) for GTM_DPLL_PDT10.
* To use register names with standard convension, please use GTM_DPLL_PDT10.
*/
#define GTM_DPLL_PDT_10 (GTM_DPLL_PDT10)

/** \brief 2852C, DPLL Projected Increment Sum Relations for Action 11 */
#define GTM_DPLL_PDT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012852Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT11.
* To use register names with standard convension, please use GTM_DPLL_PDT11.
*/
#define GTM_DPLL_PDT_11 (GTM_DPLL_PDT11)

/** \brief 28530, DPLL Projected Increment Sum Relations for Action 12 */
#define GTM_DPLL_PDT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128530u)
/** Alias (User Manual Name) for GTM_DPLL_PDT12.
* To use register names with standard convension, please use GTM_DPLL_PDT12.
*/
#define GTM_DPLL_PDT_12 (GTM_DPLL_PDT12)

/** \brief 28534, DPLL Projected Increment Sum Relations for Action 13 */
#define GTM_DPLL_PDT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128534u)
/** Alias (User Manual Name) for GTM_DPLL_PDT13.
* To use register names with standard convension, please use GTM_DPLL_PDT13.
*/
#define GTM_DPLL_PDT_13 (GTM_DPLL_PDT13)

/** \brief 28538, DPLL Projected Increment Sum Relations for Action 14 */
#define GTM_DPLL_PDT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128538u)
/** Alias (User Manual Name) for GTM_DPLL_PDT14.
* To use register names with standard convension, please use GTM_DPLL_PDT14.
*/
#define GTM_DPLL_PDT_14 (GTM_DPLL_PDT14)

/** \brief 2853C, DPLL Projected Increment Sum Relations for Action 15 */
#define GTM_DPLL_PDT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012853Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT15.
* To use register names with standard convension, please use GTM_DPLL_PDT15.
*/
#define GTM_DPLL_PDT_15 (GTM_DPLL_PDT15)

/** \brief 28540, DPLL Projected Increment Sum Relations for Action 16 */
#define GTM_DPLL_PDT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128540u)
/** Alias (User Manual Name) for GTM_DPLL_PDT16.
* To use register names with standard convension, please use GTM_DPLL_PDT16.
*/
#define GTM_DPLL_PDT_16 (GTM_DPLL_PDT16)

/** \brief 28544, DPLL Projected Increment Sum Relations for Action 17 */
#define GTM_DPLL_PDT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128544u)
/** Alias (User Manual Name) for GTM_DPLL_PDT17.
* To use register names with standard convension, please use GTM_DPLL_PDT17.
*/
#define GTM_DPLL_PDT_17 (GTM_DPLL_PDT17)

/** \brief 28548, DPLL Projected Increment Sum Relations for Action 18 */
#define GTM_DPLL_PDT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128548u)
/** Alias (User Manual Name) for GTM_DPLL_PDT18.
* To use register names with standard convension, please use GTM_DPLL_PDT18.
*/
#define GTM_DPLL_PDT_18 (GTM_DPLL_PDT18)

/** \brief 2854C, DPLL Projected Increment Sum Relations for Action 19 */
#define GTM_DPLL_PDT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012854Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT19.
* To use register names with standard convension, please use GTM_DPLL_PDT19.
*/
#define GTM_DPLL_PDT_19 (GTM_DPLL_PDT19)

/** \brief 28550, DPLL Projected Increment Sum Relations for Action 20 */
#define GTM_DPLL_PDT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128550u)
/** Alias (User Manual Name) for GTM_DPLL_PDT20.
* To use register names with standard convension, please use GTM_DPLL_PDT20.
*/
#define GTM_DPLL_PDT_20 (GTM_DPLL_PDT20)

/** \brief 28554, DPLL Projected Increment Sum Relations for Action 21 */
#define GTM_DPLL_PDT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128554u)
/** Alias (User Manual Name) for GTM_DPLL_PDT21.
* To use register names with standard convension, please use GTM_DPLL_PDT21.
*/
#define GTM_DPLL_PDT_21 (GTM_DPLL_PDT21)

/** \brief 28558, DPLL Projected Increment Sum Relations for Action 22 */
#define GTM_DPLL_PDT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128558u)
/** Alias (User Manual Name) for GTM_DPLL_PDT22.
* To use register names with standard convension, please use GTM_DPLL_PDT22.
*/
#define GTM_DPLL_PDT_22 (GTM_DPLL_PDT22)

/** \brief 2855C, DPLL Projected Increment Sum Relations for Action 23 */
#define GTM_DPLL_PDT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012855Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT23.
* To use register names with standard convension, please use GTM_DPLL_PDT23.
*/
#define GTM_DPLL_PDT_23 (GTM_DPLL_PDT23)

/** \brief 28560, DPLL Projected Increment Sum Relations for Action 24 */
#define GTM_DPLL_PDT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128560u)
/** Alias (User Manual Name) for GTM_DPLL_PDT24.
* To use register names with standard convension, please use GTM_DPLL_PDT24.
*/
#define GTM_DPLL_PDT_24 (GTM_DPLL_PDT24)

/** \brief 28564, DPLL Projected Increment Sum Relations for Action 25 */
#define GTM_DPLL_PDT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128564u)
/** Alias (User Manual Name) for GTM_DPLL_PDT25.
* To use register names with standard convension, please use GTM_DPLL_PDT25.
*/
#define GTM_DPLL_PDT_25 (GTM_DPLL_PDT25)

/** \brief 28568, DPLL Projected Increment Sum Relations for Action 26 */
#define GTM_DPLL_PDT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128568u)
/** Alias (User Manual Name) for GTM_DPLL_PDT26.
* To use register names with standard convension, please use GTM_DPLL_PDT26.
*/
#define GTM_DPLL_PDT_26 (GTM_DPLL_PDT26)

/** \brief 2856C, DPLL Projected Increment Sum Relations for Action 27 */
#define GTM_DPLL_PDT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012856Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT27.
* To use register names with standard convension, please use GTM_DPLL_PDT27.
*/
#define GTM_DPLL_PDT_27 (GTM_DPLL_PDT27)

/** \brief 28570, DPLL Projected Increment Sum Relations for Action 28 */
#define GTM_DPLL_PDT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128570u)
/** Alias (User Manual Name) for GTM_DPLL_PDT28.
* To use register names with standard convension, please use GTM_DPLL_PDT28.
*/
#define GTM_DPLL_PDT_28 (GTM_DPLL_PDT28)

/** \brief 28574, DPLL Projected Increment Sum Relations for Action 29 */
#define GTM_DPLL_PDT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128574u)
/** Alias (User Manual Name) for GTM_DPLL_PDT29.
* To use register names with standard convension, please use GTM_DPLL_PDT29.
*/
#define GTM_DPLL_PDT_29 (GTM_DPLL_PDT29)

/** \brief 28578, DPLL Projected Increment Sum Relations for Action 30 */
#define GTM_DPLL_PDT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF0128578u)
/** Alias (User Manual Name) for GTM_DPLL_PDT30.
* To use register names with standard convension, please use GTM_DPLL_PDT30.
*/
#define GTM_DPLL_PDT_30 (GTM_DPLL_PDT30)

/** \brief 2857C, DPLL Projected Increment Sum Relations for Action 31 */
#define GTM_DPLL_PDT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PDT*)0xF012857Cu)
/** Alias (User Manual Name) for GTM_DPLL_PDT31.
* To use register names with standard convension, please use GTM_DPLL_PDT31.
*/
#define GTM_DPLL_PDT_31 (GTM_DPLL_PDT31)

/** \brief 285C0, DPLL Calculated Number of Sub-Pulses between two Nominal STATE Events for SMC = 0 */
#define GTM_DPLL_MLS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_MLS1*)0xF01285C0u)

/** \brief 285C4, DPLL Calculated Number of Sub-Pulses between two Nominal STATE Events for SMC = 1 and RMO = 1 */
#define GTM_DPLL_MLS2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_MLS2*)0xF01285C4u)

/** \brief 285C8, DPLL Number of Sub-Pulses of SUB_INC1 in Continuous Mode */
#define GTM_DPLL_CNT_NUM_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CNT_NUM_1*)0xF01285C8u)

/** \brief 285CC, DPLL Number of Sub-Pulses of SUB_INC2 in Continuous Mode */
#define GTM_DPLL_CNT_NUM_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CNT_NUM_2*)0xF01285CCu)

/** \brief 285D0, DPLL Plausibility Value of Next TRIGGER Slope */
#define GTM_DPLL_PVT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PVT*)0xF01285D0u)

/** \brief 285E0, DPLL Actual Calculated Position Stamp of TRIGGER */
#define GTM_DPLL_PSTC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSTC*)0xF01285E0u)

/** \brief 285E4, DPLL Actual Calculated Position Stamp of STATE */
#define GTM_DPLL_PSSC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSSC*)0xF01285E4u)

/** \brief 285E8, DPLL Measured Position Stamp at Last TRIGGER Input */
#define GTM_DPLL_PSTM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSTM*)0xF01285E8u)

/** \brief 285EC, DPLL Measured Position Stamp at Last but One TRIGGER Input */
#define GTM_DPLL_PSTM_OLD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSTM_OLD*)0xF01285ECu)

/** \brief 285F0, DPLL Measured Position Stamp at Last STATE Input */
#define GTM_DPLL_PSSM /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSSM*)0xF01285F0u)

/** \brief 285F4, DPLL Measured Position Stamp at Last but One STATE Input */
#define GTM_DPLL_PSSM_OLD /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSSM_OLD*)0xF01285F4u)

/** \brief 285F8, DPLL Number of Pulses to be Sent in Normal Mode */
#define GTM_DPLL_NMB_T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NMB_T*)0xF01285F8u)

/** \brief 285FC, DPLL Number of Pulses to be Sent in Emergency Mode */
#define GTM_DPLL_NMB_S /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NMB_S*)0xF01285FCu)

/** \brief 28600, DPLL Reciprocal Values of the Nominal STATE 0 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128600u)

/** \brief 28604, DPLL Reciprocal Values of the Nominal STATE 1 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128604u)

/** \brief 28608, DPLL Reciprocal Values of the Nominal STATE 2 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128608u)

/** \brief 2860C, DPLL Reciprocal Values of the Nominal STATE 3 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012860Cu)

/** \brief 28610, DPLL Reciprocal Values of the Nominal STATE 4 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128610u)

/** \brief 28614, DPLL Reciprocal Values of the Nominal STATE 5 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128614u)

/** \brief 28618, DPLL Reciprocal Values of the Nominal STATE 6 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128618u)

/** \brief 2861C, DPLL Reciprocal Values of the Nominal STATE 7 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012861Cu)

/** \brief 28620, DPLL Reciprocal Values of the Nominal STATE 8 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128620u)

/** \brief 28624, DPLL Reciprocal Values of the Nominal STATE 9 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128624u)

/** \brief 28628, DPLL Reciprocal Values of the Nominal STATE 10 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128628u)

/** \brief 2862C, DPLL Reciprocal Values of the Nominal STATE 11 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012862Cu)

/** \brief 28630, DPLL Reciprocal Values of the Nominal STATE 12 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128630u)

/** \brief 28634, DPLL Reciprocal Values of the Nominal STATE 13 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128634u)

/** \brief 28638, DPLL Reciprocal Values of the Nominal STATE 14 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128638u)

/** \brief 2863C, DPLL Reciprocal Values of the Nominal STATE 15 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012863Cu)

/** \brief 28640, DPLL Reciprocal Values of the Nominal STATE 16 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128640u)

/** \brief 28644, DPLL Reciprocal Values of the Nominal STATE 17 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128644u)

/** \brief 28648, DPLL Reciprocal Values of the Nominal STATE 18 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128648u)

/** \brief 2864C, DPLL Reciprocal Values of the Nominal STATE 19 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012864Cu)

/** \brief 28650, DPLL Reciprocal Values of the Nominal STATE 20 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128650u)

/** \brief 28654, DPLL Reciprocal Values of the Nominal STATE 21 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128654u)

/** \brief 28658, DPLL Reciprocal Values of the Nominal STATE 22 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128658u)

/** \brief 2865C, DPLL Reciprocal Values of the Nominal STATE 23 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012865Cu)

/** \brief 28660, DPLL Reciprocal Values of the Nominal STATE 24 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128660u)

/** \brief 28664, DPLL Reciprocal Values of the Nominal STATE 25 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128664u)

/** \brief 28668, DPLL Reciprocal Values of the Nominal STATE 26 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128668u)

/** \brief 2866C, DPLL Reciprocal Values of the Nominal STATE 27 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012866Cu)

/** \brief 28670, DPLL Reciprocal Values of the Nominal STATE 28 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128670u)

/** \brief 28674, DPLL Reciprocal Values of the Nominal STATE 29 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128674u)

/** \brief 28678, DPLL Reciprocal Values of the Nominal STATE 30 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128678u)

/** \brief 2867C, DPLL Reciprocal Values of the Nominal STATE 31 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012867Cu)

/** \brief 28680, DPLL Reciprocal Values of the Nominal STATE 32 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S32 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128680u)

/** \brief 28684, DPLL Reciprocal Values of the Nominal STATE 33 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S33 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128684u)

/** \brief 28688, DPLL Reciprocal Values of the Nominal STATE 34 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S34 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128688u)

/** \brief 2868C, DPLL Reciprocal Values of the Nominal STATE 35 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S35 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012868Cu)

/** \brief 28690, DPLL Reciprocal Values of the Nominal STATE 36 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S36 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128690u)

/** \brief 28694, DPLL Reciprocal Values of the Nominal STATE 37 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S37 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128694u)

/** \brief 28698, DPLL Reciprocal Values of the Nominal STATE 38 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S38 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128698u)

/** \brief 2869C, DPLL Reciprocal Values of the Nominal STATE 39 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S39 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012869Cu)

/** \brief 286A0, DPLL Reciprocal Values of the Nominal STATE 40 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S40 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286A0u)

/** \brief 286A4, DPLL Reciprocal Values of the Nominal STATE 41 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S41 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286A4u)

/** \brief 286A8, DPLL Reciprocal Values of the Nominal STATE 42 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S42 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286A8u)

/** \brief 286AC, DPLL Reciprocal Values of the Nominal STATE 43 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S43 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286ACu)

/** \brief 286B0, DPLL Reciprocal Values of the Nominal STATE 44 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S44 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286B0u)

/** \brief 286B4, DPLL Reciprocal Values of the Nominal STATE 45 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S45 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286B4u)

/** \brief 286B8, DPLL Reciprocal Values of the Nominal STATE 46 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S46 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286B8u)

/** \brief 286BC, DPLL Reciprocal Values of the Nominal STATE 47 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S47 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286BCu)

/** \brief 286C0, DPLL Reciprocal Values of the Nominal STATE 48 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S48 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286C0u)

/** \brief 286C4, DPLL Reciprocal Values of the Nominal STATE 49 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S49 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286C4u)

/** \brief 286C8, DPLL Reciprocal Values of the Nominal STATE 50 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S50 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286C8u)

/** \brief 286CC, DPLL Reciprocal Values of the Nominal STATE 51 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S51 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286CCu)

/** \brief 286D0, DPLL Reciprocal Values of the Nominal STATE 52 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S52 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286D0u)

/** \brief 286D4, DPLL Reciprocal Values of the Nominal STATE 53 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S53 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286D4u)

/** \brief 286D8, DPLL Reciprocal Values of the Nominal STATE 54 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S54 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286D8u)

/** \brief 286DC, DPLL Reciprocal Values of the Nominal STATE 55 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S55 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286DCu)

/** \brief 286E0, DPLL Reciprocal Values of the Nominal STATE 56 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S56 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286E0u)

/** \brief 286E4, DPLL Reciprocal Values of the Nominal STATE 57 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S57 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286E4u)

/** \brief 286E8, DPLL Reciprocal Values of the Nominal STATE 58 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S58 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286E8u)

/** \brief 286EC, DPLL Reciprocal Values of the Nominal STATE 59 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S59 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286ECu)

/** \brief 286F0, DPLL Reciprocal Values of the Nominal STATE 60 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S60 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286F0u)

/** \brief 286F4, DPLL Reciprocal Values of the Nominal STATE 61 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S61 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286F4u)

/** \brief 286F8, DPLL Reciprocal Values of the Nominal STATE 62 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S62 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286F8u)

/** \brief 286FC, DPLL Reciprocal Values of the Nominal STATE 63 Increment Duration in FULL_SCALE */
#define GTM_DPLL_RDT_S63 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286FCu)

/** \brief 28700, DPLL Time Stamp Values of the Nominal STATE 0 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128700u)

/** \brief 28704, DPLL Time Stamp Values of the Nominal STATE 1 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128704u)

/** \brief 28708, DPLL Time Stamp Values of the Nominal STATE 2 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128708u)

/** \brief 2870C, DPLL Time Stamp Values of the Nominal STATE 3 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012870Cu)

/** \brief 28710, DPLL Time Stamp Values of the Nominal STATE 4 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128710u)

/** \brief 28714, DPLL Time Stamp Values of the Nominal STATE 5 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128714u)

/** \brief 28718, DPLL Time Stamp Values of the Nominal STATE 6 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128718u)

/** \brief 2871C, DPLL Time Stamp Values of the Nominal STATE 7 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012871Cu)

/** \brief 28720, DPLL Time Stamp Values of the Nominal STATE 8 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128720u)

/** \brief 28724, DPLL Time Stamp Values of the Nominal STATE 9 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128724u)

/** \brief 28728, DPLL Time Stamp Values of the Nominal STATE 10 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128728u)

/** \brief 2872C, DPLL Time Stamp Values of the Nominal STATE 11 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012872Cu)

/** \brief 28730, DPLL Time Stamp Values of the Nominal STATE 12 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128730u)

/** \brief 28734, DPLL Time Stamp Values of the Nominal STATE 13 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128734u)

/** \brief 28738, DPLL Time Stamp Values of the Nominal STATE 14 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128738u)

/** \brief 2873C, DPLL Time Stamp Values of the Nominal STATE 15 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012873Cu)

/** \brief 28740, DPLL Time Stamp Values of the Nominal STATE 16 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128740u)

/** \brief 28744, DPLL Time Stamp Values of the Nominal STATE 17 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128744u)

/** \brief 28748, DPLL Time Stamp Values of the Nominal STATE 18 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128748u)

/** \brief 2874C, DPLL Time Stamp Values of the Nominal STATE 19 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012874Cu)

/** \brief 28750, DPLL Time Stamp Values of the Nominal STATE 20 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128750u)

/** \brief 28754, DPLL Time Stamp Values of the Nominal STATE 21 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128754u)

/** \brief 28758, DPLL Time Stamp Values of the Nominal STATE 22 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128758u)

/** \brief 2875C, DPLL Time Stamp Values of the Nominal STATE 23 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012875Cu)

/** \brief 28760, DPLL Time Stamp Values of the Nominal STATE 24 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128760u)

/** \brief 28764, DPLL Time Stamp Values of the Nominal STATE 25 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128764u)

/** \brief 28768, DPLL Time Stamp Values of the Nominal STATE 26 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128768u)

/** \brief 2876C, DPLL Time Stamp Values of the Nominal STATE 27 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012876Cu)

/** \brief 28770, DPLL Time Stamp Values of the Nominal STATE 28 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128770u)

/** \brief 28774, DPLL Time Stamp Values of the Nominal STATE 29 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128774u)

/** \brief 28778, DPLL Time Stamp Values of the Nominal STATE 30 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128778u)

/** \brief 2877C, DPLL Time Stamp Values of the Nominal STATE 31 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012877Cu)

/** \brief 28780, DPLL Time Stamp Values of the Nominal STATE 32 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S32 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128780u)

/** \brief 28784, DPLL Time Stamp Values of the Nominal STATE 33 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S33 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128784u)

/** \brief 28788, DPLL Time Stamp Values of the Nominal STATE 34 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S34 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128788u)

/** \brief 2878C, DPLL Time Stamp Values of the Nominal STATE 35 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S35 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012878Cu)

/** \brief 28790, DPLL Time Stamp Values of the Nominal STATE 36 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S36 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128790u)

/** \brief 28794, DPLL Time Stamp Values of the Nominal STATE 37 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S37 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128794u)

/** \brief 28798, DPLL Time Stamp Values of the Nominal STATE 38 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S38 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128798u)

/** \brief 2879C, DPLL Time Stamp Values of the Nominal STATE 39 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S39 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012879Cu)

/** \brief 287A0, DPLL Time Stamp Values of the Nominal STATE 40 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S40 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287A0u)

/** \brief 287A4, DPLL Time Stamp Values of the Nominal STATE 41 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S41 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287A4u)

/** \brief 287A8, DPLL Time Stamp Values of the Nominal STATE 42 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S42 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287A8u)

/** \brief 287AC, DPLL Time Stamp Values of the Nominal STATE 43 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S43 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287ACu)

/** \brief 287B0, DPLL Time Stamp Values of the Nominal STATE 44 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S44 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287B0u)

/** \brief 287B4, DPLL Time Stamp Values of the Nominal STATE 45 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S45 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287B4u)

/** \brief 287B8, DPLL Time Stamp Values of the Nominal STATE 46 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S46 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287B8u)

/** \brief 287BC, DPLL Time Stamp Values of the Nominal STATE 47 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S47 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287BCu)

/** \brief 287C0, DPLL Time Stamp Values of the Nominal STATE 48 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S48 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287C0u)

/** \brief 287C4, DPLL Time Stamp Values of the Nominal STATE 49 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S49 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287C4u)

/** \brief 287C8, DPLL Time Stamp Values of the Nominal STATE 50 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S50 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287C8u)

/** \brief 287CC, DPLL Time Stamp Values of the Nominal STATE 51 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S51 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287CCu)

/** \brief 287D0, DPLL Time Stamp Values of the Nominal STATE 52 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S52 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287D0u)

/** \brief 287D4, DPLL Time Stamp Values of the Nominal STATE 53 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S53 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287D4u)

/** \brief 287D8, DPLL Time Stamp Values of the Nominal STATE 54 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S54 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287D8u)

/** \brief 287DC, DPLL Time Stamp Values of the Nominal STATE 55 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S55 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287DCu)

/** \brief 287E0, DPLL Time Stamp Values of the Nominal STATE 56 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S56 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287E0u)

/** \brief 287E4, DPLL Time Stamp Values of the Nominal STATE 57 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S57 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287E4u)

/** \brief 287E8, DPLL Time Stamp Values of the Nominal STATE 58 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S58 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287E8u)

/** \brief 287EC, DPLL Time Stamp Values of the Nominal STATE 59 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S59 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287ECu)

/** \brief 287F0, DPLL Time Stamp Values of the Nominal STATE 60 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S60 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287F0u)

/** \brief 287F4, DPLL Time Stamp Values of the Nominal STATE 61 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S61 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287F4u)

/** \brief 287F8, DPLL Time Stamp Values of the Nominal STATE 62 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S62 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287F8u)

/** \brief 287FC, DPLL Time Stamp Values of the Nominal STATE 63 Events in FULL_SCALE */
#define GTM_DPLL_TSF_S63 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287FCu)

/** \brief 28800, DPLL Adapt and Profile Values of the STATE 0 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128800u)

/** \brief 28804, DPLL Adapt and Profile Values of the STATE 1 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128804u)

/** \brief 28808, DPLL Adapt and Profile Values of the STATE 2 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128808u)

/** \brief 2880C, DPLL Adapt and Profile Values of the STATE 3 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012880Cu)

/** \brief 28810, DPLL Adapt and Profile Values of the STATE 4 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128810u)

/** \brief 28814, DPLL Adapt and Profile Values of the STATE 5 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128814u)

/** \brief 28818, DPLL Adapt and Profile Values of the STATE 6 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128818u)

/** \brief 2881C, DPLL Adapt and Profile Values of the STATE 7 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012881Cu)

/** \brief 28820, DPLL Adapt and Profile Values of the STATE 8 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128820u)

/** \brief 28824, DPLL Adapt and Profile Values of the STATE 9 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128824u)

/** \brief 28828, DPLL Adapt and Profile Values of the STATE 10 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128828u)

/** \brief 2882C, DPLL Adapt and Profile Values of the STATE 11 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012882Cu)

/** \brief 28830, DPLL Adapt and Profile Values of the STATE 12 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128830u)

/** \brief 28834, DPLL Adapt and Profile Values of the STATE 13 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128834u)

/** \brief 28838, DPLL Adapt and Profile Values of the STATE 14 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128838u)

/** \brief 2883C, DPLL Adapt and Profile Values of the STATE 15 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012883Cu)

/** \brief 28840, DPLL Adapt and Profile Values of the STATE 16 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128840u)

/** \brief 28844, DPLL Adapt and Profile Values of the STATE 17 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128844u)

/** \brief 28848, DPLL Adapt and Profile Values of the STATE 18 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128848u)

/** \brief 2884C, DPLL Adapt and Profile Values of the STATE 19 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012884Cu)

/** \brief 28850, DPLL Adapt and Profile Values of the STATE 20 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128850u)

/** \brief 28854, DPLL Adapt and Profile Values of the STATE 21 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128854u)

/** \brief 28858, DPLL Adapt and Profile Values of the STATE 22 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128858u)

/** \brief 2885C, DPLL Adapt and Profile Values of the STATE 23 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012885Cu)

/** \brief 28860, DPLL Adapt and Profile Values of the STATE 24 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128860u)

/** \brief 28864, DPLL Adapt and Profile Values of the STATE 25 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128864u)

/** \brief 28868, DPLL Adapt and Profile Values of the STATE 26 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128868u)

/** \brief 2886C, DPLL Adapt and Profile Values of the STATE 27 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012886Cu)

/** \brief 28870, DPLL Adapt and Profile Values of the STATE 28 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128870u)

/** \brief 28874, DPLL Adapt and Profile Values of the STATE 29 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128874u)

/** \brief 28878, DPLL Adapt and Profile Values of the STATE 30 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128878u)

/** \brief 2887C, DPLL Adapt and Profile Values of the STATE 31 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012887Cu)

/** \brief 28880, DPLL Adapt and Profile Values of the STATE 32 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S32 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128880u)

/** \brief 28884, DPLL Adapt and Profile Values of the STATE 33 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S33 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128884u)

/** \brief 28888, DPLL Adapt and Profile Values of the STATE 34 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S34 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128888u)

/** \brief 2888C, DPLL Adapt and Profile Values of the STATE 35 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S35 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012888Cu)

/** \brief 28890, DPLL Adapt and Profile Values of the STATE 36 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S36 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128890u)

/** \brief 28894, DPLL Adapt and Profile Values of the STATE 37 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S37 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128894u)

/** \brief 28898, DPLL Adapt and Profile Values of the STATE 38 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S38 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128898u)

/** \brief 2889C, DPLL Adapt and Profile Values of the STATE 39 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S39 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012889Cu)

/** \brief 288A0, DPLL Adapt and Profile Values of the STATE 40 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S40 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288A0u)

/** \brief 288A4, DPLL Adapt and Profile Values of the STATE 41 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S41 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288A4u)

/** \brief 288A8, DPLL Adapt and Profile Values of the STATE 42 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S42 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288A8u)

/** \brief 288AC, DPLL Adapt and Profile Values of the STATE 43 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S43 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288ACu)

/** \brief 288B0, DPLL Adapt and Profile Values of the STATE 44 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S44 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288B0u)

/** \brief 288B4, DPLL Adapt and Profile Values of the STATE 45 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S45 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288B4u)

/** \brief 288B8, DPLL Adapt and Profile Values of the STATE 46 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S46 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288B8u)

/** \brief 288BC, DPLL Adapt and Profile Values of the STATE 47 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S47 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288BCu)

/** \brief 288C0, DPLL Adapt and Profile Values of the STATE 48 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S48 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288C0u)

/** \brief 288C4, DPLL Adapt and Profile Values of the STATE 49 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S49 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288C4u)

/** \brief 288C8, DPLL Adapt and Profile Values of the STATE 50 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S50 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288C8u)

/** \brief 288CC, DPLL Adapt and Profile Values of the STATE 51 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S51 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288CCu)

/** \brief 288D0, DPLL Adapt and Profile Values of the STATE 52 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S52 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288D0u)

/** \brief 288D4, DPLL Adapt and Profile Values of the STATE 53 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S53 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288D4u)

/** \brief 288D8, DPLL Adapt and Profile Values of the STATE 54 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S54 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288D8u)

/** \brief 288DC, DPLL Adapt and Profile Values of the STATE 55 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S55 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288DCu)

/** \brief 288E0, DPLL Adapt and Profile Values of the STATE 56 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S56 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288E0u)

/** \brief 288E4, DPLL Adapt and Profile Values of the STATE 57 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S57 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288E4u)

/** \brief 288E8, DPLL Adapt and Profile Values of the STATE 58 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S58 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288E8u)

/** \brief 288EC, DPLL Adapt and Profile Values of the STATE 59 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S59 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288ECu)

/** \brief 288F0, DPLL Adapt and Profile Values of the STATE 60 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S60 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288F0u)

/** \brief 288F4, DPLL Adapt and Profile Values of the STATE 61 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S61 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288F4u)

/** \brief 288F8, DPLL Adapt and Profile Values of the STATE 62 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S62 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288F8u)

/** \brief 288FC, DPLL Adapt and Profile Values of the STATE 63 Increments in FULL_SCALE */
#define GTM_DPLL_ADT_S63 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288FCu)

/** \brief 28900, DPLL Nominal STATE 0 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128900u)

/** \brief 28904, DPLL Nominal STATE 1 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128904u)

/** \brief 28908, DPLL Nominal STATE 2 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128908u)

/** \brief 2890C, DPLL Nominal STATE 3 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012890Cu)

/** \brief 28910, DPLL Nominal STATE 4 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128910u)

/** \brief 28914, DPLL Nominal STATE 5 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128914u)

/** \brief 28918, DPLL Nominal STATE 6 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128918u)

/** \brief 2891C, DPLL Nominal STATE 7 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012891Cu)

/** \brief 28920, DPLL Nominal STATE 8 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128920u)

/** \brief 28924, DPLL Nominal STATE 9 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128924u)

/** \brief 28928, DPLL Nominal STATE 10 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128928u)

/** \brief 2892C, DPLL Nominal STATE 11 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012892Cu)

/** \brief 28930, DPLL Nominal STATE 12 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128930u)

/** \brief 28934, DPLL Nominal STATE 13 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128934u)

/** \brief 28938, DPLL Nominal STATE 14 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128938u)

/** \brief 2893C, DPLL Nominal STATE 15 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012893Cu)

/** \brief 28940, DPLL Nominal STATE 16 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128940u)

/** \brief 28944, DPLL Nominal STATE 17 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128944u)

/** \brief 28948, DPLL Nominal STATE 18 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128948u)

/** \brief 2894C, DPLL Nominal STATE 19 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012894Cu)

/** \brief 28950, DPLL Nominal STATE 20 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128950u)

/** \brief 28954, DPLL Nominal STATE 21 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128954u)

/** \brief 28958, DPLL Nominal STATE 22 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128958u)

/** \brief 2895C, DPLL Nominal STATE 23 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012895Cu)

/** \brief 28960, DPLL Nominal STATE 24 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128960u)

/** \brief 28964, DPLL Nominal STATE 25 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128964u)

/** \brief 28968, DPLL Nominal STATE 26 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128968u)

/** \brief 2896C, DPLL Nominal STATE 27 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012896Cu)

/** \brief 28970, DPLL Nominal STATE 28 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128970u)

/** \brief 28974, DPLL Nominal STATE 29 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128974u)

/** \brief 28978, DPLL Nominal STATE 30 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128978u)

/** \brief 2897C, DPLL Nominal STATE 31 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012897Cu)

/** \brief 28980, DPLL Nominal STATE 32 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S32 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128980u)

/** \brief 28984, DPLL Nominal STATE 33 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S33 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128984u)

/** \brief 28988, DPLL Nominal STATE 34 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S34 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128988u)

/** \brief 2898C, DPLL Nominal STATE 35 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S35 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012898Cu)

/** \brief 28990, DPLL Nominal STATE 36 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S36 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128990u)

/** \brief 28994, DPLL Nominal STATE 37 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S37 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128994u)

/** \brief 28998, DPLL Nominal STATE 38 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S38 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128998u)

/** \brief 2899C, DPLL Nominal STATE 39 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S39 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012899Cu)

/** \brief 289A0, DPLL Nominal STATE 40 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S40 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289A0u)

/** \brief 289A4, DPLL Nominal STATE 41 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S41 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289A4u)

/** \brief 289A8, DPLL Nominal STATE 42 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S42 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289A8u)

/** \brief 289AC, DPLL Nominal STATE 43 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S43 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289ACu)

/** \brief 289B0, DPLL Nominal STATE 44 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S44 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289B0u)

/** \brief 289B4, DPLL Nominal STATE 45 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S45 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289B4u)

/** \brief 289B8, DPLL Nominal STATE 46 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S46 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289B8u)

/** \brief 289BC, DPLL Nominal STATE 47 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S47 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289BCu)

/** \brief 289C0, DPLL Nominal STATE 48 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S48 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289C0u)

/** \brief 289C4, DPLL Nominal STATE 49 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S49 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289C4u)

/** \brief 289C8, DPLL Nominal STATE 50 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S50 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289C8u)

/** \brief 289CC, DPLL Nominal STATE 51 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S51 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289CCu)

/** \brief 289D0, DPLL Nominal STATE 52 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S52 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289D0u)

/** \brief 289D4, DPLL Nominal STATE 53 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S53 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289D4u)

/** \brief 289D8, DPLL Nominal STATE 54 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S54 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289D8u)

/** \brief 289DC, DPLL Nominal STATE 55 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S55 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289DCu)

/** \brief 289E0, DPLL Nominal STATE 56 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S56 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289E0u)

/** \brief 289E4, DPLL Nominal STATE 57 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S57 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289E4u)

/** \brief 289E8, DPLL Nominal STATE 58 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S58 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289E8u)

/** \brief 289EC, DPLL Nominal STATE 59 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S59 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289ECu)

/** \brief 289F0, DPLL Nominal STATE 60 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S60 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289F0u)

/** \brief 289F4, DPLL Nominal STATE 61 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S61 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289F4u)

/** \brief 289F8, DPLL Nominal STATE 62 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S62 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289F8u)

/** \brief 289FC, DPLL Nominal STATE 63 Increment Duration in FULL_SCALE */
#define GTM_DPLL_DT_S63 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289FCu)

/** \brief 28E00, DPLL Calculated Time Value to start Action 0 Register */
#define GTM_DPLL_TSAC0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E00u)

/** \brief 28E04, DPLL Calculated Time Value to start Action 1 Register */
#define GTM_DPLL_TSAC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E04u)

/** \brief 28E08, DPLL Calculated Time Value to start Action 2 Register */
#define GTM_DPLL_TSAC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E08u)

/** \brief 28E0C, DPLL Calculated Time Value to start Action 3 Register */
#define GTM_DPLL_TSAC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E0Cu)

/** \brief 28E10, DPLL Calculated Time Value to start Action 4 Register */
#define GTM_DPLL_TSAC4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E10u)

/** \brief 28E14, DPLL Calculated Time Value to start Action 5 Register */
#define GTM_DPLL_TSAC5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E14u)

/** \brief 28E18, DPLL Calculated Time Value to start Action 6 Register */
#define GTM_DPLL_TSAC6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E18u)

/** \brief 28E1C, DPLL Calculated Time Value to start Action 7 Register */
#define GTM_DPLL_TSAC7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E1Cu)

/** \brief 28E20, DPLL Calculated Time Value to start Action 8 Register */
#define GTM_DPLL_TSAC8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E20u)

/** \brief 28E24, DPLL Calculated Time Value to start Action 9 Register */
#define GTM_DPLL_TSAC9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E24u)

/** \brief 28E28, DPLL Calculated Time Value to start Action 10 Register */
#define GTM_DPLL_TSAC10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E28u)

/** \brief 28E2C, DPLL Calculated Time Value to start Action 11 Register */
#define GTM_DPLL_TSAC11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E2Cu)

/** \brief 28E30, DPLL Calculated Time Value to start Action 12 Register */
#define GTM_DPLL_TSAC12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E30u)

/** \brief 28E34, DPLL Calculated Time Value to start Action 13 Register */
#define GTM_DPLL_TSAC13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E34u)

/** \brief 28E38, DPLL Calculated Time Value to start Action 14 Register */
#define GTM_DPLL_TSAC14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E38u)

/** \brief 28E3C, DPLL Calculated Time Value to start Action 15 Register */
#define GTM_DPLL_TSAC15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E3Cu)

/** \brief 28E40, DPLL Calculated Time Value to start Action 16 Register */
#define GTM_DPLL_TSAC16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E40u)

/** \brief 28E44, DPLL Calculated Time Value to start Action 17 Register */
#define GTM_DPLL_TSAC17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E44u)

/** \brief 28E48, DPLL Calculated Time Value to start Action 18 Register */
#define GTM_DPLL_TSAC18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E48u)

/** \brief 28E4C, DPLL Calculated Time Value to start Action 19 Register */
#define GTM_DPLL_TSAC19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E4Cu)

/** \brief 28E50, DPLL Calculated Time Value to start Action 20 Register */
#define GTM_DPLL_TSAC20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E50u)

/** \brief 28E54, DPLL Calculated Time Value to start Action 21 Register */
#define GTM_DPLL_TSAC21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E54u)

/** \brief 28E58, DPLL Calculated Time Value to start Action 22 Register */
#define GTM_DPLL_TSAC22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E58u)

/** \brief 28E5C, DPLL Calculated Time Value to start Action 23 Register */
#define GTM_DPLL_TSAC23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E5Cu)

/** \brief 28E60, DPLL Calculated Time Value to start Action 24 Register */
#define GTM_DPLL_TSAC24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E60u)

/** \brief 28E64, DPLL Calculated Time Value to start Action 25 Register */
#define GTM_DPLL_TSAC25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E64u)

/** \brief 28E68, DPLL Calculated Time Value to start Action 26 Register */
#define GTM_DPLL_TSAC26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E68u)

/** \brief 28E6C, DPLL Calculated Time Value to start Action 27 Register */
#define GTM_DPLL_TSAC27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E6Cu)

/** \brief 28E70, DPLL Calculated Time Value to start Action 28 Register */
#define GTM_DPLL_TSAC28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E70u)

/** \brief 28E74, DPLL Calculated Time Value to start Action 29 Register */
#define GTM_DPLL_TSAC29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E74u)

/** \brief 28E78, DPLL Calculated Time Value to start Action 30 Register */
#define GTM_DPLL_TSAC30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E78u)

/** \brief 28E7C, DPLL Calculated Time Value to start Action 31 Register */
#define GTM_DPLL_TSAC31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E7Cu)

/** \brief 28E80, DPLL ACTION Position/Value Action 0 Request Register */
#define GTM_DPLL_PSAC0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E80u)

/** \brief 28E84, DPLL ACTION Position/Value Action 1 Request Register */
#define GTM_DPLL_PSAC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E84u)

/** \brief 28E88, DPLL ACTION Position/Value Action 2 Request Register */
#define GTM_DPLL_PSAC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E88u)

/** \brief 28E8C, DPLL ACTION Position/Value Action 3 Request Register */
#define GTM_DPLL_PSAC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E8Cu)

/** \brief 28E90, DPLL ACTION Position/Value Action 4 Request Register */
#define GTM_DPLL_PSAC4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E90u)

/** \brief 28E94, DPLL ACTION Position/Value Action 5 Request Register */
#define GTM_DPLL_PSAC5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E94u)

/** \brief 28E98, DPLL ACTION Position/Value Action 6 Request Register */
#define GTM_DPLL_PSAC6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E98u)

/** \brief 28E9C, DPLL ACTION Position/Value Action 7 Request Register */
#define GTM_DPLL_PSAC7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E9Cu)

/** \brief 28EA0, DPLL ACTION Position/Value Action 8 Request Register */
#define GTM_DPLL_PSAC8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EA0u)

/** \brief 28EA4, DPLL ACTION Position/Value Action 9 Request Register */
#define GTM_DPLL_PSAC9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EA4u)

/** \brief 28EA8, DPLL ACTION Position/Value Action 10 Request Register */
#define GTM_DPLL_PSAC10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EA8u)

/** \brief 28EAC, DPLL ACTION Position/Value Action 11 Request Register */
#define GTM_DPLL_PSAC11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EACu)

/** \brief 28EB0, DPLL ACTION Position/Value Action 12 Request Register */
#define GTM_DPLL_PSAC12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EB0u)

/** \brief 28EB4, DPLL ACTION Position/Value Action 13 Request Register */
#define GTM_DPLL_PSAC13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EB4u)

/** \brief 28EB8, DPLL ACTION Position/Value Action 14 Request Register */
#define GTM_DPLL_PSAC14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EB8u)

/** \brief 28EBC, DPLL ACTION Position/Value Action 15 Request Register */
#define GTM_DPLL_PSAC15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EBCu)

/** \brief 28EC0, DPLL ACTION Position/Value Action 16 Request Register */
#define GTM_DPLL_PSAC16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EC0u)

/** \brief 28EC4, DPLL ACTION Position/Value Action 17 Request Register */
#define GTM_DPLL_PSAC17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EC4u)

/** \brief 28EC8, DPLL ACTION Position/Value Action 18 Request Register */
#define GTM_DPLL_PSAC18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EC8u)

/** \brief 28ECC, DPLL ACTION Position/Value Action 19 Request Register */
#define GTM_DPLL_PSAC19 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ECCu)

/** \brief 28ED0, DPLL ACTION Position/Value Action 20 Request Register */
#define GTM_DPLL_PSAC20 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ED0u)

/** \brief 28ED4, DPLL ACTION Position/Value Action 21 Request Register */
#define GTM_DPLL_PSAC21 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ED4u)

/** \brief 28ED8, DPLL ACTION Position/Value Action 22 Request Register */
#define GTM_DPLL_PSAC22 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ED8u)

/** \brief 28EDC, DPLL ACTION Position/Value Action 23 Request Register */
#define GTM_DPLL_PSAC23 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EDCu)

/** \brief 28EE0, DPLL ACTION Position/Value Action 24 Request Register */
#define GTM_DPLL_PSAC24 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EE0u)

/** \brief 28EE4, DPLL ACTION Position/Value Action 25 Request Register */
#define GTM_DPLL_PSAC25 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EE4u)

/** \brief 28EE8, DPLL ACTION Position/Value Action 26 Request Register */
#define GTM_DPLL_PSAC26 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EE8u)

/** \brief 28EEC, DPLL ACTION Position/Value Action 27 Request Register */
#define GTM_DPLL_PSAC27 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EECu)

/** \brief 28EF0, DPLL ACTION Position/Value Action 28 Request Register */
#define GTM_DPLL_PSAC28 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EF0u)

/** \brief 28EF4, DPLL ACTION Position/Value Action 29 Request Register */
#define GTM_DPLL_PSAC29 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EF4u)

/** \brief 28EF8, DPLL ACTION Position/Value Action 30 Request Register */
#define GTM_DPLL_PSAC30 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EF8u)

/** \brief 28EFC, DPLL ACTION Position/Value Action 31 Request Register */
#define GTM_DPLL_PSAC31 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EFCu)

/** \brief 28F00, DPLL Control Bits Register 0 for up to 32 Actions */
#define GTM_DPLL_ACB0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F00u)
/** Alias (User Manual Name) for GTM_DPLL_ACB0.
* To use register names with standard convension, please use GTM_DPLL_ACB0.
*/
#define GTM_DPLL_ACB_0 (GTM_DPLL_ACB0)

/** \brief 28F04, DPLL Control Bits Register 1 for up to 32 Actions */
#define GTM_DPLL_ACB1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F04u)
/** Alias (User Manual Name) for GTM_DPLL_ACB1.
* To use register names with standard convension, please use GTM_DPLL_ACB1.
*/
#define GTM_DPLL_ACB_1 (GTM_DPLL_ACB1)

/** \brief 28F08, DPLL Control Bits Register 2 for up to 32 Actions */
#define GTM_DPLL_ACB2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F08u)
/** Alias (User Manual Name) for GTM_DPLL_ACB2.
* To use register names with standard convension, please use GTM_DPLL_ACB2.
*/
#define GTM_DPLL_ACB_2 (GTM_DPLL_ACB2)

/** \brief 28F0C, DPLL Control Bits Register 3 for up to 32 Actions */
#define GTM_DPLL_ACB3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F0Cu)
/** Alias (User Manual Name) for GTM_DPLL_ACB3.
* To use register names with standard convension, please use GTM_DPLL_ACB3.
*/
#define GTM_DPLL_ACB_3 (GTM_DPLL_ACB3)

/** \brief 28F10, DPLL Control Bits Register 4 for up to 32 Actions */
#define GTM_DPLL_ACB4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F10u)
/** Alias (User Manual Name) for GTM_DPLL_ACB4.
* To use register names with standard convension, please use GTM_DPLL_ACB4.
*/
#define GTM_DPLL_ACB_4 (GTM_DPLL_ACB4)

/** \brief 28F14, DPLL Control Bits Register 5 for up to 32 Actions */
#define GTM_DPLL_ACB5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F14u)
/** Alias (User Manual Name) for GTM_DPLL_ACB5.
* To use register names with standard convension, please use GTM_DPLL_ACB5.
*/
#define GTM_DPLL_ACB_5 (GTM_DPLL_ACB5)

/** \brief 28F18, DPLL Control Bits Register 6 for up to 32 Actions */
#define GTM_DPLL_ACB6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F18u)
/** Alias (User Manual Name) for GTM_DPLL_ACB6.
* To use register names with standard convension, please use GTM_DPLL_ACB6.
*/
#define GTM_DPLL_ACB_6 (GTM_DPLL_ACB6)

/** \brief 28F1C, DPLL Control Bits Register 7 for up to 32 Actions */
#define GTM_DPLL_ACB7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F1Cu)
/** Alias (User Manual Name) for GTM_DPLL_ACB7.
* To use register names with standard convension, please use GTM_DPLL_ACB7.
*/
#define GTM_DPLL_ACB_7 (GTM_DPLL_ACB7)

/** \brief 28F20, DPLL Control Register 11 */
#define GTM_DPLL_CTRL_11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_11*)0xF0128F20u)

/** \brief 28F24, DPLL Immediate THVAL Value Register */
#define GTM_DPLL_THVAL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_THVAL2*)0xF0128F24u)

/** \brief 28F28, DPLL Additional TRIGGER Input Delay Register */
#define GTM_DPLL_TIDEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_TIDEL*)0xF0128F28u)

/** \brief 28F2C, DPLL Additional STATE Input Delay Register */
#define GTM_DPLL_SIDEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_SIDEL*)0xF0128F2Cu)

/** \brief 28F30, DPLL Extension Register for DPLL_APS_SYNC */
#define GTM_DPLL_APS_SYNC_EXT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APS_SYNC_EXT*)0xF0128F30u)

/** \brief 28F34, DPLL Extension Register for DPLL_CTRL */
#define GTM_DPLL_CTRL_EXT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTRL_EXT*)0xF0128F34u)

/** \brief 28F38, DPLL Extension Register for DPLL_APS */
#define GTM_DPLL_APS_EXT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APS_EXT*)0xF0128F38u)

/** \brief 28F3C, DPLL Extension Register for DPLL_APS_1C3 */
#define GTM_DPLL_APS_1C3_EXT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_APS_1C3_EXT*)0xF0128F3Cu)

/** \brief 28F40, DPLL Status of the State Machine States Register */
#define GTM_DPLL_STA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_STA*)0xF0128F40u)

/** \brief 28F44, DPLL Start Value of the ADD_IN_ADDER1 Register */
#define GTM_DPLL_INCF1_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_INCF1_OFFSET*)0xF0128F44u)

/** \brief 28F48, DPLL Start Value of the ADD_IN_ADDER2 Register */
#define GTM_DPLL_INCF2_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_INCF2_OFFSET*)0xF0128F48u)

/** \brief 28F4C, DPLL Start Value of DPLL_DT_T_ACT for the First Increment after SIP1 is Set to 1 */
#define GTM_DPLL_DT_T_START /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_T_START*)0xF0128F4Cu)

/** \brief 28F50, DPLL Start Value of DPLL_DT_S_ACT for the First Increment after SIP2 is Set to 1 */
#define GTM_DPLL_DT_S_START /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_DT_S_START*)0xF0128F50u)

/** \brief 28F54, DPLL Trigger Masks for Signals DPLL_STA_T and DPLL_STA_S */
#define GTM_DPLL_STA_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_STA_MASK*)0xF0128F54u)

/** \brief 28F58, DPLL STA Flag Register */
#define GTM_DPLL_STA_FLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_STA_FLAG*)0xF0128F58u)

/** \brief 28F5C, DPLL INC_CNT1 Trigger Mask */
#define GTM_DPLL_INC_CNT1_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT1_MASK*)0xF0128F5Cu)

/** \brief 28F60, DPLL INC_CNT2 Trigger Mask */
#define GTM_DPLL_INC_CNT2_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT2_MASK*)0xF0128F60u)

/** \brief 28F64, DPLL Extension Register Number 1 for DPLL_NUSC 4 */
#define GTM_DPLL_NUSC_EXT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NUSC_EXT1*)0xF0128F64u)

/** \brief 28F68, DPLL Extension Register Number 2 for DPLL_NUSC 4 */
#define GTM_DPLL_NUSC_EXT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_NUSC_EXT2*)0xF0128F68u)

/** \brief 28F6C, DPLL Minimum CDT_T Nominal Value Register */
#define GTM_DPLL_CTN_MIN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTN_MIN*)0xF0128F6Cu)

/** \brief 28F70, DPLL Maximum CDT_T Nominal Value Register */
#define GTM_DPLL_CTN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CTN_MAX*)0xF0128F70u)

/** \brief 28F74, DPLL Minimum CDT_S Nominal Value Register */
#define GTM_DPLL_CSN_MIN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CSN_MIN*)0xF0128F74u)

/** \brief 28F78, DPLL Maximum CDT_S Nominal Value Register */
#define GTM_DPLL_CSN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DPLL_CSN_MAX*)0xF0128F78u)

/** \brief 9FD00, Clock Control Register */
#define GTM_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CLC*)0xF019FD00u)

/** \brief 9FD04, Kernel Reset Status Clear Register */
#define GTM_RESET_CLR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_RESET_CLR*)0xF019FD04u)

/** \brief 9FD08, Kernel Reset Register 0 */
#define GTM_RESET1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_RESET1*)0xF019FD08u)

/** \brief 9FD0C, Kernel Reset Register 1 */
#define GTM_RESET2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_RESET2*)0xF019FD0Cu)

/** \brief 9FD10, Access Enable Register 0 */
#define GTM_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ACCEN0*)0xF019FD10u)

/** \brief 9FD14, Access Enable Register 1 */
#define GTM_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ACCEN1*)0xF019FD14u)

/** \brief 9FD18, OCDS TBU0 Trigger Register */
#define GTM_OCDS_OTBU0T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OTBU0T*)0xF019FD18u)
/** Alias (User Manual Name) for GTM_OCDS_OTBU0T.
* To use register names with standard convension, please use GTM_OCDS_OTBU0T.
*/
#define GTM_OTBU0T (GTM_OCDS_OTBU0T)

/** \brief 9FD1C, OCDS TBU1 Trigger Register */
#define GTM_OCDS_OTBU1T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OTBU1T*)0xF019FD1Cu)
/** Alias (User Manual Name) for GTM_OCDS_OTBU1T.
* To use register names with standard convension, please use GTM_OCDS_OTBU1T.
*/
#define GTM_OTBU1T (GTM_OCDS_OTBU1T)

/** \brief 9FD20, OCDS TBU2 Trigger Register */
#define GTM_OCDS_OTBU2T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OTBU2T*)0xF019FD20u)
/** Alias (User Manual Name) for GTM_OCDS_OTBU2T.
* To use register names with standard convension, please use GTM_OCDS_OTBU2T.
*/
#define GTM_OTBU2T (GTM_OCDS_OTBU2T)

/** \brief 9FD24, OCDS TBU3 Trigger Register */
#define GTM_OCDS_OTBU3T /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OTBU3T*)0xF019FD24u)
/** Alias (User Manual Name) for GTM_OCDS_OTBU3T.
* To use register names with standard convension, please use GTM_OCDS_OTBU3T.
*/
#define GTM_OTBU3T (GTM_OCDS_OTBU3T)

/** \brief 9FD28, OCDS Trigger Set Select Register */
#define GTM_OCDS_OTSS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OTSS*)0xF019FD28u)
/** Alias (User Manual Name) for GTM_OCDS_OTSS.
* To use register names with standard convension, please use GTM_OCDS_OTSS.
*/
#define GTM_OTSS (GTM_OCDS_OTSS)

/** \brief 9FD2C, OCDS Trigger Set Control 0 Register */
#define GTM_OCDS_OTSC0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OTSC0*)0xF019FD2Cu)
/** Alias (User Manual Name) for GTM_OCDS_OTSC0.
* To use register names with standard convension, please use GTM_OCDS_OTSC0.
*/
#define GTM_OTSC0 (GTM_OCDS_OTSC0)

/** \brief 9FD30, OCDS Trigger Set Control 1 Register */
#define GTM_OCDS_OTSC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OTSC1*)0xF019FD30u)
/** Alias (User Manual Name) for GTM_OCDS_OTSC1.
* To use register names with standard convension, please use GTM_OCDS_OTSC1.
*/
#define GTM_OTSC1 (GTM_OCDS_OTSC1)

/** \brief 9FD34, OCDS Debug Access Register */
#define GTM_OCDS_ODA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_ODA*)0xF019FD34u)
/** Alias (User Manual Name) for GTM_OCDS_ODA.
* To use register names with standard convension, please use GTM_OCDS_ODA.
*/
#define GTM_ODA (GTM_OCDS_ODA)

/** \brief 9FD38, OCDS Control and Status */
#define GTM_OCDS_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_OCDS_OCS*)0xF019FD38u)
/** Alias (User Manual Name) for GTM_OCDS_OCS.
* To use register names with standard convension, please use GTM_OCDS_OCS.
*/
#define GTM_OCS (GTM_OCDS_OCS)

/** \brief 9FD40, TIM0 Input Select Register */
#define GTM_TIMINSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIMINSEL*)0xF019FD40u)
/** Alias (User Manual Name) for GTM_TIMINSEL0.
* To use register names with standard convension, please use GTM_TIMINSEL0.
*/
#define GTM_TIM0INSEL (GTM_TIMINSEL0)

/** \brief 9FD44, TIM1 Input Select Register */
#define GTM_TIMINSEL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIMINSEL*)0xF019FD44u)
/** Alias (User Manual Name) for GTM_TIMINSEL1.
* To use register names with standard convension, please use GTM_TIMINSEL1.
*/
#define GTM_TIM1INSEL (GTM_TIMINSEL1)

/** \brief 9FD48, TIM2 Input Select Register */
#define GTM_TIMINSEL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIMINSEL*)0xF019FD48u)
/** Alias (User Manual Name) for GTM_TIMINSEL2.
* To use register names with standard convension, please use GTM_TIMINSEL2.
*/
#define GTM_TIM2INSEL (GTM_TIMINSEL2)

/** \brief 9FD4C, TIM3 Input Select Register */
#define GTM_TIMINSEL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIMINSEL*)0xF019FD4Cu)
/** Alias (User Manual Name) for GTM_TIMINSEL3.
* To use register names with standard convension, please use GTM_TIMINSEL3.
*/
#define GTM_TIM3INSEL (GTM_TIMINSEL3)

/** \brief 9FD50, TIM4 Input Select Register */
#define GTM_TIMINSEL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIMINSEL*)0xF019FD50u)
/** Alias (User Manual Name) for GTM_TIMINSEL4.
* To use register names with standard convension, please use GTM_TIMINSEL4.
*/
#define GTM_TIM4INSEL (GTM_TIMINSEL4)

/** \brief 9FD54, TIM5 Input Select Register */
#define GTM_TIMINSEL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TIMINSEL*)0xF019FD54u)
/** Alias (User Manual Name) for GTM_TIMINSEL5.
* To use register names with standard convension, please use GTM_TIMINSEL5.
*/
#define GTM_TIM5INSEL (GTM_TIMINSEL5)

/** \brief 9FD60, Timer Output Select Register */
#define GTM_TOUTSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD60u)

/** \brief 9FD64, Timer Output Select Register */
#define GTM_TOUTSEL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD64u)

/** \brief 9FD68, Timer Output Select Register */
#define GTM_TOUTSEL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD68u)

/** \brief 9FD6C, Timer Output Select Register */
#define GTM_TOUTSEL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD6Cu)

/** \brief 9FD70, Timer Output Select Register */
#define GTM_TOUTSEL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD70u)

/** \brief 9FD74, Timer Output Select Register */
#define GTM_TOUTSEL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD74u)

/** \brief 9FD78, Timer Output Select Register */
#define GTM_TOUTSEL6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD78u)

/** \brief 9FD7C, Timer Output Select Register */
#define GTM_TOUTSEL7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD7Cu)

/** \brief 9FD80, Timer Output Select Register */
#define GTM_TOUTSEL8 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD80u)

/** \brief 9FD84, Timer Output Select Register */
#define GTM_TOUTSEL9 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD84u)

/** \brief 9FD88, Timer Output Select Register */
#define GTM_TOUTSEL10 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD88u)

/** \brief 9FD8C, Timer Output Select Register */
#define GTM_TOUTSEL11 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD8Cu)

/** \brief 9FD90, Timer Output Select Register */
#define GTM_TOUTSEL12 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD90u)

/** \brief 9FD94, Timer Output Select Register */
#define GTM_TOUTSEL13 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD94u)

/** \brief 9FD98, Timer Output Select Register */
#define GTM_TOUTSEL14 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD98u)

/** \brief 9FD9C, Timer Output Select Register */
#define GTM_TOUTSEL15 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FD9Cu)

/** \brief 9FDA0, Timer Output Select Register */
#define GTM_TOUTSEL16 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FDA0u)

/** \brief 9FDA4, Timer Output Select Register */
#define GTM_TOUTSEL17 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FDA4u)

/** \brief 9FDA8, Timer Output Select Register */
#define GTM_TOUTSEL18 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TOUTSEL*)0xF019FDA8u)

/** \brief 9FE00, DSADC Input Select i Register */
#define GTM_DSADCINSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADCINSEL*)0xF019FE00u)

/** \brief 9FE04, DSADC Input Select i Register */
#define GTM_DSADCINSEL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADCINSEL*)0xF019FE04u)

/** \brief 9FE08, DSADC Input Select i Register */
#define GTM_DSADCINSEL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADCINSEL*)0xF019FE08u)

/** \brief 9FE0C, DSADC Input Select i Register */
#define GTM_DSADCINSEL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADCINSEL*)0xF019FE0Cu)

/** \brief 9FE10, DSADC Input Select i Register */
#define GTM_DSADCINSEL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADCINSEL*)0xF019FE10u)

/** \brief 9FE14, DSADC Input Select i Register */
#define GTM_DSADCINSEL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADCINSEL*)0xF019FE14u)

/** \brief 9FE20, DSADC Output Select i0 Register */
#define GTM_DSADC0_OUTSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADC_OUTSEL0*)0xF019FE20u)
/** Alias (User Manual Name) for GTM_DSADC0_OUTSEL0.
* To use register names with standard convension, please use GTM_DSADC0_OUTSEL0.
*/
#define GTM_DSADCOUTSEL00 (GTM_DSADC0_OUTSEL0)

/** \brief 9FE28, DSADC Output Select i0 Register */
#define GTM_DSADC1_OUTSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADC_OUTSEL0*)0xF019FE28u)
/** Alias (User Manual Name) for GTM_DSADC1_OUTSEL0.
* To use register names with standard convension, please use GTM_DSADC1_OUTSEL0.
*/
#define GTM_DSADCOUTSEL10 (GTM_DSADC1_OUTSEL0)

/** \brief 9FE30, DSADC Output Select i0 Register */
#define GTM_DSADC2_OUTSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADC_OUTSEL0*)0xF019FE30u)
/** Alias (User Manual Name) for GTM_DSADC2_OUTSEL0.
* To use register names with standard convension, please use GTM_DSADC2_OUTSEL0.
*/
#define GTM_DSADCOUTSEL20 (GTM_DSADC2_OUTSEL0)

/** \brief 9FE38, DSADC Output Select i0 Register */
#define GTM_DSADC3_OUTSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DSADC_OUTSEL0*)0xF019FE38u)
/** Alias (User Manual Name) for GTM_DSADC3_OUTSEL0.
* To use register names with standard convension, please use GTM_DSADC3_OUTSEL0.
*/
#define GTM_DSADCOUTSEL30 (GTM_DSADC3_OUTSEL0)

/** \brief 9FE40, ADC Trigger 0 Output Select 0 Register */
#define GTM_ADCTRIG0_OUT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT0*)0xF019FE40u)
/** Alias (User Manual Name) for GTM_ADCTRIG0_OUT0.
* To use register names with standard convension, please use GTM_ADCTRIG0_OUT0.
*/
#define GTM_ADCTRIG0OUT0 (GTM_ADCTRIG0_OUT0)

/** \brief 9FE44, ADC Trigger 0 Output Select 1 Register */
#define GTM_ADCTRIG0_OUT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT1*)0xF019FE44u)
/** Alias (User Manual Name) for GTM_ADCTRIG0_OUT1.
* To use register names with standard convension, please use GTM_ADCTRIG0_OUT1.
*/
#define GTM_ADCTRIG0OUT1 (GTM_ADCTRIG0_OUT1)

/** \brief 9FE48, ADC Trigger 1 Output Select 0 Register */
#define GTM_ADCTRIG1_OUT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT0*)0xF019FE48u)
/** Alias (User Manual Name) for GTM_ADCTRIG1_OUT0.
* To use register names with standard convension, please use GTM_ADCTRIG1_OUT0.
*/
#define GTM_ADCTRIG1OUT0 (GTM_ADCTRIG1_OUT0)

/** \brief 9FE4C, ADC Trigger 1 Output Select 1 Register */
#define GTM_ADCTRIG1_OUT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT1*)0xF019FE4Cu)
/** Alias (User Manual Name) for GTM_ADCTRIG1_OUT1.
* To use register names with standard convension, please use GTM_ADCTRIG1_OUT1.
*/
#define GTM_ADCTRIG1OUT1 (GTM_ADCTRIG1_OUT1)

/** \brief 9FE50, ADC Trigger 2 Output Select 0 Register */
#define GTM_ADCTRIG2_OUT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT0*)0xF019FE50u)
/** Alias (User Manual Name) for GTM_ADCTRIG2_OUT0.
* To use register names with standard convension, please use GTM_ADCTRIG2_OUT0.
*/
#define GTM_ADCTRIG2OUT0 (GTM_ADCTRIG2_OUT0)

/** \brief 9FE54, ADC Trigger 2 Output Select 1 Register */
#define GTM_ADCTRIG2_OUT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT1*)0xF019FE54u)
/** Alias (User Manual Name) for GTM_ADCTRIG2_OUT1.
* To use register names with standard convension, please use GTM_ADCTRIG2_OUT1.
*/
#define GTM_ADCTRIG2OUT1 (GTM_ADCTRIG2_OUT1)

/** \brief 9FE58, ADC Trigger 3 Output Select 0 Register */
#define GTM_ADCTRIG3_OUT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT0*)0xF019FE58u)
/** Alias (User Manual Name) for GTM_ADCTRIG3_OUT0.
* To use register names with standard convension, please use GTM_ADCTRIG3_OUT0.
*/
#define GTM_ADCTRIG3OUT0 (GTM_ADCTRIG3_OUT0)

/** \brief 9FE5C, ADC Trigger 3 Output Select 1 Register */
#define GTM_ADCTRIG3_OUT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT1*)0xF019FE5Cu)
/** Alias (User Manual Name) for GTM_ADCTRIG3_OUT1.
* To use register names with standard convension, please use GTM_ADCTRIG3_OUT1.
*/
#define GTM_ADCTRIG3OUT1 (GTM_ADCTRIG3_OUT1)

/** \brief 9FE60, ADC Trigger 4 Output Select 0 Register */
#define GTM_ADCTRIG4_OUT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT0*)0xF019FE60u)
/** Alias (User Manual Name) for GTM_ADCTRIG4_OUT0.
* To use register names with standard convension, please use GTM_ADCTRIG4_OUT0.
*/
#define GTM_ADCTRIG4OUT0 (GTM_ADCTRIG4_OUT0)

/** \brief 9FE64, ADC Trigger 4 Output Select 1 Register */
#define GTM_ADCTRIG4_OUT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ADCTRIG_OUT1*)0xF019FE64u)
/** Alias (User Manual Name) for GTM_ADCTRIG4_OUT1.
* To use register names with standard convension, please use GTM_ADCTRIG4_OUT1.
*/
#define GTM_ADCTRIG4OUT1 (GTM_ADCTRIG4_OUT1)

/** \brief 9FE70, Data Exchange Output Control Register */
#define GTM_DXOUTCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DXOUTCON*)0xF019FE70u)

/** \brief 9FE74, Trigger Output Register 0 */
#define GTM_TRIGOUT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE74u)

/** \brief 9FE78, Trigger Output Register 1 */
#define GTM_TRIGOUT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE78u)

/** \brief 9FE7C, Trigger Output Register 2 */
#define GTM_TRIGOUT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE7Cu)

/** \brief 9FE80, Trigger Output Register 3 */
#define GTM_TRIGOUT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE80u)

/** \brief 9FE84, Trigger Output Register 4 */
#define GTM_TRIGOUT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE84u)

/** \brief 9FE9C, Interrupt Output Register 0 */
#define GTM_INTOUT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_INTOUT*)0xF019FE9Cu)

/** \brief 9FEA0, Interrupt Output Register 1 */
#define GTM_INTOUT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_INTOUT*)0xF019FEA0u)

/** \brief 9FEA4, Interrupt Output Register 2 */
#define GTM_INTOUT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_INTOUT*)0xF019FEA4u)

/** \brief 9FEA8, Interrupt Output Register 3 */
#define GTM_INTOUT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_INTOUT*)0xF019FEA8u)

/** \brief 9FEAC, Interrupt Output Register 4 */
#define GTM_INTOUT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_INTOUT*)0xF019FEACu)

/** \brief 9FEC4, Trigger Output Select Register */
#define GTM_MCSTRIGOUTSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCSTRIGOUTSEL*)0xF019FEC4u)

/** \brief 9FEC8, MCS Interrupt Status Register */
#define GTM_MCSINTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCSINTSTAT*)0xF019FEC8u)

/** \brief 9FECC, MCS Interrupt Clear Register */
#define GTM_MCSINTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCSINTCLR*)0xF019FECCu)

/** \brief 9FED0, Data Exchange Input Control Register */
#define GTM_DXINCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DXINCON*)0xF019FED0u)

/** \brief 9FED4, Data Input 0 Register */
#define GTM_DATAIN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FED4u)

/** \brief 9FED8, Data Input 1 Register */
#define GTM_DATAIN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FED8u)

/** \brief 9FEDC, Data Input 2 Register */
#define GTM_DATAIN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEDCu)

/** \brief 9FEE0, Data Input 3 Register */
#define GTM_DATAIN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEE0u)

/** \brief 9FEE4, Data Input 4 Register */
#define GTM_DATAIN4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEE4u)

/** \brief 9FF00, MSC Set 0 Control 0 Register */
#define GTM_MSC_SET0_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON0*)0xF019FF00u)
/** Alias (User Manual Name) for GTM_MSC_SET0_CON0.
* To use register names with standard convension, please use GTM_MSC_SET0_CON0.
*/
#define GTM_MSCSET0CON0 (GTM_MSC_SET0_CON0)

/** \brief 9FF04, MSC Set 0 Control 1 Register */
#define GTM_MSC_SET0_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON1*)0xF019FF04u)
/** Alias (User Manual Name) for GTM_MSC_SET0_CON1.
* To use register names with standard convension, please use GTM_MSC_SET0_CON1.
*/
#define GTM_MSCSET0CON1 (GTM_MSC_SET0_CON1)

/** \brief 9FF08, MSC Set 0 Control 2 Register */
#define GTM_MSC_SET0_CON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON2*)0xF019FF08u)
/** Alias (User Manual Name) for GTM_MSC_SET0_CON2.
* To use register names with standard convension, please use GTM_MSC_SET0_CON2.
*/
#define GTM_MSCSET0CON2 (GTM_MSC_SET0_CON2)

/** \brief 9FF0C, MSC Set 0 Control 3 Register */
#define GTM_MSC_SET0_CON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON3*)0xF019FF0Cu)
/** Alias (User Manual Name) for GTM_MSC_SET0_CON3.
* To use register names with standard convension, please use GTM_MSC_SET0_CON3.
*/
#define GTM_MSCSET0CON3 (GTM_MSC_SET0_CON3)

/** \brief 9FF10, MSC Set 1 Control 0 Register */
#define GTM_MSC_SET1_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON0*)0xF019FF10u)
/** Alias (User Manual Name) for GTM_MSC_SET1_CON0.
* To use register names with standard convension, please use GTM_MSC_SET1_CON0.
*/
#define GTM_MSCSET1CON0 (GTM_MSC_SET1_CON0)

/** \brief 9FF14, MSC Set 1 Control 1 Register */
#define GTM_MSC_SET1_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON1*)0xF019FF14u)
/** Alias (User Manual Name) for GTM_MSC_SET1_CON1.
* To use register names with standard convension, please use GTM_MSC_SET1_CON1.
*/
#define GTM_MSCSET1CON1 (GTM_MSC_SET1_CON1)

/** \brief 9FF18, MSC Set 1 Control 2 Register */
#define GTM_MSC_SET1_CON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON2*)0xF019FF18u)
/** Alias (User Manual Name) for GTM_MSC_SET1_CON2.
* To use register names with standard convension, please use GTM_MSC_SET1_CON2.
*/
#define GTM_MSCSET1CON2 (GTM_MSC_SET1_CON2)

/** \brief 9FF1C, MSC Set 1 Control 3 Register */
#define GTM_MSC_SET1_CON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON3*)0xF019FF1Cu)
/** Alias (User Manual Name) for GTM_MSC_SET1_CON3.
* To use register names with standard convension, please use GTM_MSC_SET1_CON3.
*/
#define GTM_MSCSET1CON3 (GTM_MSC_SET1_CON3)

/** \brief 9FF20, MSC Set 2 Control 0 Register */
#define GTM_MSC_SET2_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON0*)0xF019FF20u)
/** Alias (User Manual Name) for GTM_MSC_SET2_CON0.
* To use register names with standard convension, please use GTM_MSC_SET2_CON0.
*/
#define GTM_MSCSET2CON0 (GTM_MSC_SET2_CON0)

/** \brief 9FF24, MSC Set 2 Control 1 Register */
#define GTM_MSC_SET2_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON1*)0xF019FF24u)
/** Alias (User Manual Name) for GTM_MSC_SET2_CON1.
* To use register names with standard convension, please use GTM_MSC_SET2_CON1.
*/
#define GTM_MSCSET2CON1 (GTM_MSC_SET2_CON1)

/** \brief 9FF28, MSC Set 2 Control 2 Register */
#define GTM_MSC_SET2_CON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON2*)0xF019FF28u)
/** Alias (User Manual Name) for GTM_MSC_SET2_CON2.
* To use register names with standard convension, please use GTM_MSC_SET2_CON2.
*/
#define GTM_MSCSET2CON2 (GTM_MSC_SET2_CON2)

/** \brief 9FF2C, MSC Set 2 Control 3 Register */
#define GTM_MSC_SET2_CON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON3*)0xF019FF2Cu)
/** Alias (User Manual Name) for GTM_MSC_SET2_CON3.
* To use register names with standard convension, please use GTM_MSC_SET2_CON3.
*/
#define GTM_MSCSET2CON3 (GTM_MSC_SET2_CON3)

/** \brief 9FF30, MSC Set 3 Control 0 Register */
#define GTM_MSC_SET3_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON0*)0xF019FF30u)
/** Alias (User Manual Name) for GTM_MSC_SET3_CON0.
* To use register names with standard convension, please use GTM_MSC_SET3_CON0.
*/
#define GTM_MSCSET3CON0 (GTM_MSC_SET3_CON0)

/** \brief 9FF34, MSC Set 3 Control 1 Register */
#define GTM_MSC_SET3_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON1*)0xF019FF34u)
/** Alias (User Manual Name) for GTM_MSC_SET3_CON1.
* To use register names with standard convension, please use GTM_MSC_SET3_CON1.
*/
#define GTM_MSCSET3CON1 (GTM_MSC_SET3_CON1)

/** \brief 9FF38, MSC Set 3 Control 2 Register */
#define GTM_MSC_SET3_CON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON2*)0xF019FF38u)
/** Alias (User Manual Name) for GTM_MSC_SET3_CON2.
* To use register names with standard convension, please use GTM_MSC_SET3_CON2.
*/
#define GTM_MSCSET3CON2 (GTM_MSC_SET3_CON2)

/** \brief 9FF3C, MSC Set 3 Control 3 Register */
#define GTM_MSC_SET3_CON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_SET_CON3*)0xF019FF3Cu)
/** Alias (User Manual Name) for GTM_MSC_SET3_CON3.
* To use register names with standard convension, please use GTM_MSC_SET3_CON3.
*/
#define GTM_MSCSET3CON3 (GTM_MSC_SET3_CON3)

/** \brief 9FF90, MSC0 Input Low Control Register */
#define GTM_MSC_MSCQ0_INLCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_MSCQ_INLCON*)0xF019FF90u)
/** Alias (User Manual Name) for GTM_MSC_MSCQ0_INLCON.
* To use register names with standard convension, please use GTM_MSC_MSCQ0_INLCON.
*/
#define GTM_MSC0INLCON (GTM_MSC_MSCQ0_INLCON)

/** \brief 9FF94, MSC0 Input High Control Register */
#define GTM_MSC_MSCQ0_INHCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_MSCQ_INHCON*)0xF019FF94u)
/** Alias (User Manual Name) for GTM_MSC_MSCQ0_INHCON.
* To use register names with standard convension, please use GTM_MSC_MSCQ0_INHCON.
*/
#define GTM_MSC0INHCON (GTM_MSC_MSCQ0_INHCON)

/** \brief 9FF98, MSC0 Input Low Extended Control Register */
#define GTM_MSC_MSCQ0_INLEXTCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_MSCQ_INLEXTCON*)0xF019FF98u)
/** Alias (User Manual Name) for GTM_MSC_MSCQ0_INLEXTCON.
* To use register names with standard convension, please use GTM_MSC_MSCQ0_INLEXTCON.
*/
#define GTM_MSC0INLEXTCON (GTM_MSC_MSCQ0_INLEXTCON)

/** \brief 9FF9C, MSC1 Input Low Control Register */
#define GTM_MSC_MSCQ1_INLCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_MSCQ_INLCON*)0xF019FF9Cu)
/** Alias (User Manual Name) for GTM_MSC_MSCQ1_INLCON.
* To use register names with standard convension, please use GTM_MSC_MSCQ1_INLCON.
*/
#define GTM_MSC1INLCON (GTM_MSC_MSCQ1_INLCON)

/** \brief 9FFA0, MSC1 Input High Control Register */
#define GTM_MSC_MSCQ1_INHCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_MSCQ_INHCON*)0xF019FFA0u)
/** Alias (User Manual Name) for GTM_MSC_MSCQ1_INHCON.
* To use register names with standard convension, please use GTM_MSC_MSCQ1_INHCON.
*/
#define GTM_MSC1INHCON (GTM_MSC_MSCQ1_INHCON)

/** \brief 9FFA4, MSC1 Input Low Extended Control Register */
#define GTM_MSC_MSCQ1_INLEXTCON /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MSC_MSCQ_INLEXTCON*)0xF019FFA4u)
/** Alias (User Manual Name) for GTM_MSC_MSCQ1_INLEXTCON.
* To use register names with standard convension, please use GTM_MSC_MSCQ1_INLEXTCON.
*/
#define GTM_MSC1INLEXTCON (GTM_MSC_MSCQ1_INLEXTCON)

/** \brief 9FFCC, PSI5 Output Select Register */
#define GTM_PSI5OUTSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSI5OUTSEL*)0xF019FFCCu)

/** \brief 9FFD0, PSI5-S Output Select Register */
#define GTM_PSI5SOUTSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_PSI5SOUTSEL*)0xF019FFD0u)

/** \brief 9FFD4, LCDCDC Output Select Register */
#define GTM_LCDCDCOUTSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_LCDCDCOUTSEL*)0xF019FFD4u)

/** \brief 9FFD8, DTM_AUX Input Selection Register */
#define GTM_DTMAUXINSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_DTMAUXINSEL*)0xF019FFD8u)

/** \brief 9FFDC, CAN0/CAN1 Output Select Register */
#define GTM_CANOUTSEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CANOUTSEL0*)0xF019FFDCu)

/** \brief 9FFE0, CAN2 Output Select Register */
#define GTM_CANOUTSEL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CANOUTSEL1*)0xF019FFE0u)

/** \brief E2000, CCM0 Address Range Protector 0 Control Register */
#define GTM_CCM0_ARP0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2000u)

/** \brief E2004, CCM0 Address Range Protector 0 Protection Register */
#define GTM_CCM0_ARP0_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2004u)

/** \brief E2008, CCM0 Address Range Protector 1 Control Register */
#define GTM_CCM0_ARP1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2008u)

/** \brief E200C, CCM0 Address Range Protector 1 Protection Register */
#define GTM_CCM0_ARP1_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E200Cu)

/** \brief E2010, CCM0 Address Range Protector 2 Control Register */
#define GTM_CCM0_ARP2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2010u)

/** \brief E2014, CCM0 Address Range Protector 2 Protection Register */
#define GTM_CCM0_ARP2_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2014u)

/** \brief E2018, CCM0 Address Range Protector 3 Control Register */
#define GTM_CCM0_ARP3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2018u)

/** \brief E201C, CCM0 Address Range Protector 3 Protection Register */
#define GTM_CCM0_ARP3_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E201Cu)

/** \brief E2020, CCM0 Address Range Protector 4 Control Register */
#define GTM_CCM0_ARP4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2020u)

/** \brief E2024, CCM0 Address Range Protector 4 Protection Register */
#define GTM_CCM0_ARP4_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2024u)

/** \brief E2028, CCM0 Address Range Protector 5 Control Register */
#define GTM_CCM0_ARP5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2028u)

/** \brief E202C, CCM0 Address Range Protector 5 Protection Register */
#define GTM_CCM0_ARP5_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E202Cu)

/** \brief E2030, CCM0 Address Range Protector 6 Control Register */
#define GTM_CCM0_ARP6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2030u)

/** \brief E2034, CCM0 Address Range Protector 6 Protection Register */
#define GTM_CCM0_ARP6_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2034u)

/** \brief E2038, CCM0 Address Range Protector 7 Control Register */
#define GTM_CCM0_ARP7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2038u)

/** \brief E203C, CCM0 Address Range Protector 7 Protection Register */
#define GTM_CCM0_ARP7_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E203Cu)

/** \brief E2040, CCM0 Address Range Protector 8 Control Register */
#define GTM_CCM0_ARP8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2040u)

/** \brief E2044, CCM0 Address Range Protector 8 Protection Register */
#define GTM_CCM0_ARP8_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2044u)

/** \brief E2048, CCM0 Address Range Protector 9 Control Register */
#define GTM_CCM0_ARP9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2048u)

/** \brief E204C, CCM0 Address Range Protector 9 Protection Register */
#define GTM_CCM0_ARP9_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E204Cu)

/** \brief E21D8, CCM0 MCS Bus Master Status Register */
#define GTM_CCM0_AEIM_STA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_AEIM_STA*)0xF01E21D8u)

/** \brief E21DC, CCM0 Hardware Configuration Register */
#define GTM_CCM0_HW_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_HW_CONF*)0xF01E21DCu)

/** \brief E21E0, CCM0 TIM Module AUX_IN Source Selection Register */
#define GTM_CCM0_TIM_AUX_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TIM_AUX_IN_SRC*)0xF01E21E0u)

/** \brief E21E4, CCM0 External Capture Trigger Enable Register */
#define GTM_CCM0_EXT_CAP_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_EXT_CAP_EN*)0xF01E21E4u)

/** \brief E21E8, CCM0 TOM Output Level Register */
#define GTM_CCM0_TOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TOM_OUT*)0xF01E21E8u)

/** \brief E21EC, CCM0 ATOM Output Level Register */
#define GTM_CCM0_ATOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ATOM_OUT*)0xF01E21ECu)

/** \brief E21F0, CCM0 CMU Clock Configuration Register */
#define GTM_CCM0_CMU_CLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_CLK_CFG*)0xF01E21F0u)

/** \brief E21F4, CCM0 CMU Fixed Clock Configuration Register */
#define GTM_CCM0_CMU_FXCLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_FXCLK_CFG*)0xF01E21F4u)

/** \brief E21F8, CCM0 Configuration Register */
#define GTM_CCM0_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CFG*)0xF01E21F8u)

/** \brief E21FC, CCM0 Protection Register */
#define GTM_CCM0_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_PROT*)0xF01E21FCu)

/** \brief E2200, CCM1 Address Range Protector 0 Control Register */
#define GTM_CCM1_ARP0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2200u)

/** \brief E2204, CCM1 Address Range Protector 0 Protection Register */
#define GTM_CCM1_ARP0_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2204u)

/** \brief E2208, CCM1 Address Range Protector 1 Control Register */
#define GTM_CCM1_ARP1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2208u)

/** \brief E220C, CCM1 Address Range Protector 1 Protection Register */
#define GTM_CCM1_ARP1_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E220Cu)

/** \brief E2210, CCM1 Address Range Protector 2 Control Register */
#define GTM_CCM1_ARP2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2210u)

/** \brief E2214, CCM1 Address Range Protector 2 Protection Register */
#define GTM_CCM1_ARP2_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2214u)

/** \brief E2218, CCM1 Address Range Protector 3 Control Register */
#define GTM_CCM1_ARP3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2218u)

/** \brief E221C, CCM1 Address Range Protector 3 Protection Register */
#define GTM_CCM1_ARP3_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E221Cu)

/** \brief E2220, CCM1 Address Range Protector 4 Control Register */
#define GTM_CCM1_ARP4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2220u)

/** \brief E2224, CCM1 Address Range Protector 4 Protection Register */
#define GTM_CCM1_ARP4_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2224u)

/** \brief E2228, CCM1 Address Range Protector 5 Control Register */
#define GTM_CCM1_ARP5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2228u)

/** \brief E222C, CCM1 Address Range Protector 5 Protection Register */
#define GTM_CCM1_ARP5_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E222Cu)

/** \brief E2230, CCM1 Address Range Protector 6 Control Register */
#define GTM_CCM1_ARP6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2230u)

/** \brief E2234, CCM1 Address Range Protector 6 Protection Register */
#define GTM_CCM1_ARP6_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2234u)

/** \brief E2238, CCM1 Address Range Protector 7 Control Register */
#define GTM_CCM1_ARP7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2238u)

/** \brief E223C, CCM1 Address Range Protector 7 Protection Register */
#define GTM_CCM1_ARP7_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E223Cu)

/** \brief E2240, CCM1 Address Range Protector 8 Control Register */
#define GTM_CCM1_ARP8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2240u)

/** \brief E2244, CCM1 Address Range Protector 8 Protection Register */
#define GTM_CCM1_ARP8_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2244u)

/** \brief E2248, CCM1 Address Range Protector 9 Control Register */
#define GTM_CCM1_ARP9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2248u)

/** \brief E224C, CCM1 Address Range Protector 9 Protection Register */
#define GTM_CCM1_ARP9_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E224Cu)

/** \brief E23D8, CCM1 MCS Bus Master Status Register */
#define GTM_CCM1_AEIM_STA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_AEIM_STA*)0xF01E23D8u)

/** \brief E23DC, CCM1 Hardware Configuration Register */
#define GTM_CCM1_HW_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_HW_CONF*)0xF01E23DCu)

/** \brief E23E0, CCM1 TIM Module AUX_IN Source Selection Register */
#define GTM_CCM1_TIM_AUX_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TIM_AUX_IN_SRC*)0xF01E23E0u)

/** \brief E23E4, CCM1 External Capture Trigger Enable Register */
#define GTM_CCM1_EXT_CAP_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_EXT_CAP_EN*)0xF01E23E4u)

/** \brief E23E8, CCM1 TOM Output Level Register */
#define GTM_CCM1_TOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TOM_OUT*)0xF01E23E8u)

/** \brief E23EC, CCM1 ATOM Output Level Register */
#define GTM_CCM1_ATOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ATOM_OUT*)0xF01E23ECu)

/** \brief E23F0, CCM1 CMU Clock Configuration Register */
#define GTM_CCM1_CMU_CLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_CLK_CFG*)0xF01E23F0u)

/** \brief E23F4, CCM1 CMU Fixed Clock Configuration Register */
#define GTM_CCM1_CMU_FXCLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_FXCLK_CFG*)0xF01E23F4u)

/** \brief E23F8, CCM1 Configuration Register */
#define GTM_CCM1_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CFG*)0xF01E23F8u)

/** \brief E23FC, CCM1 Protection Register */
#define GTM_CCM1_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_PROT*)0xF01E23FCu)

/** \brief E2400, CCM2 Address Range Protector 0 Control Register */
#define GTM_CCM2_ARP0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2400u)

/** \brief E2404, CCM2 Address Range Protector 0 Protection Register */
#define GTM_CCM2_ARP0_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2404u)

/** \brief E2408, CCM2 Address Range Protector 1 Control Register */
#define GTM_CCM2_ARP1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2408u)

/** \brief E240C, CCM2 Address Range Protector 1 Protection Register */
#define GTM_CCM2_ARP1_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E240Cu)

/** \brief E2410, CCM2 Address Range Protector 2 Control Register */
#define GTM_CCM2_ARP2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2410u)

/** \brief E2414, CCM2 Address Range Protector 2 Protection Register */
#define GTM_CCM2_ARP2_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2414u)

/** \brief E2418, CCM2 Address Range Protector 3 Control Register */
#define GTM_CCM2_ARP3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2418u)

/** \brief E241C, CCM2 Address Range Protector 3 Protection Register */
#define GTM_CCM2_ARP3_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E241Cu)

/** \brief E2420, CCM2 Address Range Protector 4 Control Register */
#define GTM_CCM2_ARP4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2420u)

/** \brief E2424, CCM2 Address Range Protector 4 Protection Register */
#define GTM_CCM2_ARP4_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2424u)

/** \brief E2428, CCM2 Address Range Protector 5 Control Register */
#define GTM_CCM2_ARP5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2428u)

/** \brief E242C, CCM2 Address Range Protector 5 Protection Register */
#define GTM_CCM2_ARP5_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E242Cu)

/** \brief E2430, CCM2 Address Range Protector 6 Control Register */
#define GTM_CCM2_ARP6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2430u)

/** \brief E2434, CCM2 Address Range Protector 6 Protection Register */
#define GTM_CCM2_ARP6_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2434u)

/** \brief E2438, CCM2 Address Range Protector 7 Control Register */
#define GTM_CCM2_ARP7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2438u)

/** \brief E243C, CCM2 Address Range Protector 7 Protection Register */
#define GTM_CCM2_ARP7_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E243Cu)

/** \brief E2440, CCM2 Address Range Protector 8 Control Register */
#define GTM_CCM2_ARP8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2440u)

/** \brief E2444, CCM2 Address Range Protector 8 Protection Register */
#define GTM_CCM2_ARP8_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2444u)

/** \brief E2448, CCM2 Address Range Protector 9 Control Register */
#define GTM_CCM2_ARP9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2448u)

/** \brief E244C, CCM2 Address Range Protector 9 Protection Register */
#define GTM_CCM2_ARP9_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E244Cu)

/** \brief E25D8, CCM2 MCS Bus Master Status Register */
#define GTM_CCM2_AEIM_STA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_AEIM_STA*)0xF01E25D8u)

/** \brief E25DC, CCM2 Hardware Configuration Register */
#define GTM_CCM2_HW_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_HW_CONF*)0xF01E25DCu)

/** \brief E25E0, CCM2 TIM Module AUX_IN Source Selection Register */
#define GTM_CCM2_TIM_AUX_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TIM_AUX_IN_SRC*)0xF01E25E0u)

/** \brief E25E4, CCM2 External Capture Trigger Enable Register */
#define GTM_CCM2_EXT_CAP_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_EXT_CAP_EN*)0xF01E25E4u)

/** \brief E25E8, CCM2 TOM Output Level Register */
#define GTM_CCM2_TOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TOM_OUT*)0xF01E25E8u)

/** \brief E25EC, CCM2 ATOM Output Level Register */
#define GTM_CCM2_ATOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ATOM_OUT*)0xF01E25ECu)

/** \brief E25F0, CCM2 CMU Clock Configuration Register */
#define GTM_CCM2_CMU_CLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_CLK_CFG*)0xF01E25F0u)

/** \brief E25F4, CCM2 CMU Fixed Clock Configuration Register */
#define GTM_CCM2_CMU_FXCLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_FXCLK_CFG*)0xF01E25F4u)

/** \brief E25F8, CCM2 Configuration Register */
#define GTM_CCM2_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CFG*)0xF01E25F8u)

/** \brief E25FC, CCM2 Protection Register */
#define GTM_CCM2_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_PROT*)0xF01E25FCu)

/** \brief E2600, CCM3 Address Range Protector 0 Control Register */
#define GTM_CCM3_ARP0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2600u)

/** \brief E2604, CCM3 Address Range Protector 0 Protection Register */
#define GTM_CCM3_ARP0_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2604u)

/** \brief E2608, CCM3 Address Range Protector 1 Control Register */
#define GTM_CCM3_ARP1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2608u)

/** \brief E260C, CCM3 Address Range Protector 1 Protection Register */
#define GTM_CCM3_ARP1_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E260Cu)

/** \brief E2610, CCM3 Address Range Protector 2 Control Register */
#define GTM_CCM3_ARP2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2610u)

/** \brief E2614, CCM3 Address Range Protector 2 Protection Register */
#define GTM_CCM3_ARP2_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2614u)

/** \brief E2618, CCM3 Address Range Protector 3 Control Register */
#define GTM_CCM3_ARP3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2618u)

/** \brief E261C, CCM3 Address Range Protector 3 Protection Register */
#define GTM_CCM3_ARP3_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E261Cu)

/** \brief E2620, CCM3 Address Range Protector 4 Control Register */
#define GTM_CCM3_ARP4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2620u)

/** \brief E2624, CCM3 Address Range Protector 4 Protection Register */
#define GTM_CCM3_ARP4_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2624u)

/** \brief E2628, CCM3 Address Range Protector 5 Control Register */
#define GTM_CCM3_ARP5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2628u)

/** \brief E262C, CCM3 Address Range Protector 5 Protection Register */
#define GTM_CCM3_ARP5_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E262Cu)

/** \brief E2630, CCM3 Address Range Protector 6 Control Register */
#define GTM_CCM3_ARP6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2630u)

/** \brief E2634, CCM3 Address Range Protector 6 Protection Register */
#define GTM_CCM3_ARP6_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2634u)

/** \brief E2638, CCM3 Address Range Protector 7 Control Register */
#define GTM_CCM3_ARP7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2638u)

/** \brief E263C, CCM3 Address Range Protector 7 Protection Register */
#define GTM_CCM3_ARP7_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E263Cu)

/** \brief E2640, CCM3 Address Range Protector 8 Control Register */
#define GTM_CCM3_ARP8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2640u)

/** \brief E2644, CCM3 Address Range Protector 8 Protection Register */
#define GTM_CCM3_ARP8_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2644u)

/** \brief E2648, CCM3 Address Range Protector 9 Control Register */
#define GTM_CCM3_ARP9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2648u)

/** \brief E264C, CCM3 Address Range Protector 9 Protection Register */
#define GTM_CCM3_ARP9_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E264Cu)

/** \brief E27D8, CCM3 MCS Bus Master Status Register */
#define GTM_CCM3_AEIM_STA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_AEIM_STA*)0xF01E27D8u)

/** \brief E27DC, CCM3 Hardware Configuration Register */
#define GTM_CCM3_HW_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_HW_CONF*)0xF01E27DCu)

/** \brief E27E0, CCM3 TIM Module AUX_IN Source Selection Register */
#define GTM_CCM3_TIM_AUX_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TIM_AUX_IN_SRC*)0xF01E27E0u)

/** \brief E27E4, CCM3 External Capture Trigger Enable Register */
#define GTM_CCM3_EXT_CAP_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_EXT_CAP_EN*)0xF01E27E4u)

/** \brief E27EC, CCM3 ATOM Output Level Register */
#define GTM_CCM3_ATOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ATOM_OUT*)0xF01E27ECu)

/** \brief E27F0, CCM3 CMU Clock Configuration Register */
#define GTM_CCM3_CMU_CLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_CLK_CFG*)0xF01E27F0u)

/** \brief E27F4, CCM3 CMU Fixed Clock Configuration Register */
#define GTM_CCM3_CMU_FXCLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_FXCLK_CFG*)0xF01E27F4u)

/** \brief E27F8, CCM3 Configuration Register */
#define GTM_CCM3_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CFG*)0xF01E27F8u)

/** \brief E27FC, CCM3 Protection Register */
#define GTM_CCM3_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_PROT*)0xF01E27FCu)

/** \brief E2800, CCM4 Address Range Protector 0 Control Register */
#define GTM_CCM4_ARP0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2800u)

/** \brief E2804, CCM4 Address Range Protector 0 Protection Register */
#define GTM_CCM4_ARP0_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2804u)

/** \brief E2808, CCM4 Address Range Protector 1 Control Register */
#define GTM_CCM4_ARP1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2808u)

/** \brief E280C, CCM4 Address Range Protector 1 Protection Register */
#define GTM_CCM4_ARP1_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E280Cu)

/** \brief E2810, CCM4 Address Range Protector 2 Control Register */
#define GTM_CCM4_ARP2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2810u)

/** \brief E2814, CCM4 Address Range Protector 2 Protection Register */
#define GTM_CCM4_ARP2_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2814u)

/** \brief E2818, CCM4 Address Range Protector 3 Control Register */
#define GTM_CCM4_ARP3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2818u)

/** \brief E281C, CCM4 Address Range Protector 3 Protection Register */
#define GTM_CCM4_ARP3_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E281Cu)

/** \brief E2820, CCM4 Address Range Protector 4 Control Register */
#define GTM_CCM4_ARP4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2820u)

/** \brief E2824, CCM4 Address Range Protector 4 Protection Register */
#define GTM_CCM4_ARP4_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2824u)

/** \brief E2828, CCM4 Address Range Protector 5 Control Register */
#define GTM_CCM4_ARP5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2828u)

/** \brief E282C, CCM4 Address Range Protector 5 Protection Register */
#define GTM_CCM4_ARP5_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E282Cu)

/** \brief E2830, CCM4 Address Range Protector 6 Control Register */
#define GTM_CCM4_ARP6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2830u)

/** \brief E2834, CCM4 Address Range Protector 6 Protection Register */
#define GTM_CCM4_ARP6_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2834u)

/** \brief E2838, CCM4 Address Range Protector 7 Control Register */
#define GTM_CCM4_ARP7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2838u)

/** \brief E283C, CCM4 Address Range Protector 7 Protection Register */
#define GTM_CCM4_ARP7_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E283Cu)

/** \brief E2840, CCM4 Address Range Protector 8 Control Register */
#define GTM_CCM4_ARP8_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2840u)

/** \brief E2844, CCM4 Address Range Protector 8 Protection Register */
#define GTM_CCM4_ARP8_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E2844u)

/** \brief E2848, CCM4 Address Range Protector 9 Control Register */
#define GTM_CCM4_ARP9_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_CTRL*)0xF01E2848u)

/** \brief E284C, CCM4 Address Range Protector 9 Protection Register */
#define GTM_CCM4_ARP9_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ARP_PROT*)0xF01E284Cu)

/** \brief E29D8, CCM4 MCS Bus Master Status Register */
#define GTM_CCM4_AEIM_STA /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_AEIM_STA*)0xF01E29D8u)

/** \brief E29DC, CCM4 Hardware Configuration Register */
#define GTM_CCM4_HW_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_HW_CONF*)0xF01E29DCu)

/** \brief E29E0, CCM4 TIM Module AUX_IN Source Selection Register */
#define GTM_CCM4_TIM_AUX_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TIM_AUX_IN_SRC*)0xF01E29E0u)

/** \brief E29E4, CCM4 External Capture Trigger Enable Register */
#define GTM_CCM4_EXT_CAP_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_EXT_CAP_EN*)0xF01E29E4u)

/** \brief E29EC, CCM4 ATOM Output Level Register */
#define GTM_CCM4_ATOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ATOM_OUT*)0xF01E29ECu)

/** \brief E29F0, CCM4 CMU Clock Configuration Register */
#define GTM_CCM4_CMU_CLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_CLK_CFG*)0xF01E29F0u)

/** \brief E29F4, CCM4 CMU Fixed Clock Configuration Register */
#define GTM_CCM4_CMU_FXCLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_FXCLK_CFG*)0xF01E29F4u)

/** \brief E29F8, CCM4 Configuration Register */
#define GTM_CCM4_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CFG*)0xF01E29F8u)

/** \brief E29FC, CCM4 Protection Register */
#define GTM_CCM4_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_PROT*)0xF01E29FCu)

/** \brief E2BDC, CCM5 Hardware Configuration Register */
#define GTM_CCM5_HW_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_HW_CONF*)0xF01E2BDCu)

/** \brief E2BE0, CCM5 TIM Module AUX_IN Source Selection Register */
#define GTM_CCM5_TIM_AUX_IN_SRC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_TIM_AUX_IN_SRC*)0xF01E2BE0u)

/** \brief E2BEC, CCM5 ATOM Output Level Register */
#define GTM_CCM5_ATOM_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_ATOM_OUT*)0xF01E2BECu)

/** \brief E2BF0, CCM5 CMU Clock Configuration Register */
#define GTM_CCM5_CMU_CLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_CLK_CFG*)0xF01E2BF0u)

/** \brief E2BF4, CCM5 CMU Fixed Clock Configuration Register */
#define GTM_CCM5_CMU_FXCLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CMU_FXCLK_CFG*)0xF01E2BF4u)

/** \brief E2BF8, CCM5 Configuration Register */
#define GTM_CCM5_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_CFG*)0xF01E2BF8u)

/** \brief E2BFC, CCM5 Protection Register */
#define GTM_CCM5_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CCM_PROT*)0xF01E2BFCu)

/** \brief E4000, CDTM0 DTM0 Global Configuration and Control Register */
#define GTM_CDTM0_DTM0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4000u)

/** \brief E4004, CDTM0 DTM0 Channel Control Register 1 */
#define GTM_CDTM0_DTM0_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4004u)

/** \brief E4008, CDTM0 DTM0 Channel Control Register 2 */
#define GTM_CDTM0_DTM0_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4008u)

/** \brief E400C, CDTM0 DTM0 Channel Control Register 2 Shadow */
#define GTM_CDTM0_DTM0_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E400Cu)

/** \brief E4010, CDTM0 DTM0 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM0_DTM0_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4010u)

/** \brief E4014, CDTM0 DTM0 Channel 0 Dead Time Reload Values */
#define GTM_CDTM0_DTM0_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4014u)

/** \brief E4018, CDTM0 DTM0 Channel 1 Dead Time Reload Values */
#define GTM_CDTM0_DTM0_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4018u)

/** \brief E401C, CDTM0 DTM0 Channel 2 Dead Time Reload Values */
#define GTM_CDTM0_DTM0_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E401Cu)

/** \brief E4020, CDTM0 DTM0 Channel 3 Dead Time Reload Values */
#define GTM_CDTM0_DTM0_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4020u)

/** \brief E4024, CDTM0 DTM0 Channel Shadow Register */
#define GTM_CDTM0_DTM0_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4024u)

/** \brief E4028, CDTM0 DTM0 Channel Control Register 3 */
#define GTM_CDTM0_DTM0_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4028u)

/** \brief E4040, CDTM0 DTM1 Global Configuration and Control Register */
#define GTM_CDTM0_DTM1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4040u)

/** \brief E4044, CDTM0 DTM1 Channel Control Register 1 */
#define GTM_CDTM0_DTM1_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4044u)

/** \brief E4048, CDTM0 DTM1 Channel Control Register 2 */
#define GTM_CDTM0_DTM1_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4048u)

/** \brief E404C, CDTM0 DTM1 Channel Control Register 2 Shadow */
#define GTM_CDTM0_DTM1_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E404Cu)

/** \brief E4050, CDTM0 DTM1 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM0_DTM1_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4050u)

/** \brief E4054, CDTM0 DTM1 Channel 0 Dead Time Reload Values */
#define GTM_CDTM0_DTM1_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4054u)

/** \brief E4058, CDTM0 DTM1 Channel 1 Dead Time Reload Values */
#define GTM_CDTM0_DTM1_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4058u)

/** \brief E405C, CDTM0 DTM1 Channel 2 Dead Time Reload Values */
#define GTM_CDTM0_DTM1_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E405Cu)

/** \brief E4060, CDTM0 DTM1 Channel 3 Dead Time Reload Values */
#define GTM_CDTM0_DTM1_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4060u)

/** \brief E4064, CDTM0 DTM1 Channel Shadow Register */
#define GTM_CDTM0_DTM1_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4064u)

/** \brief E4068, CDTM0 DTM1 Channel Control Register 3 */
#define GTM_CDTM0_DTM1_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4068u)

/** \brief E4100, CDTM0 DTM4 Global Configuration and Control Register */
#define GTM_CDTM0_DTM4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4100u)

/** \brief E4104, CDTM0 DTM4 Channel Control Register 1 */
#define GTM_CDTM0_DTM4_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4104u)

/** \brief E4108, CDTM0 DTM4 Channel Control Register 2 */
#define GTM_CDTM0_DTM4_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4108u)

/** \brief E410C, CDTM0 DTM4 Channel Control Register 2 Shadow */
#define GTM_CDTM0_DTM4_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E410Cu)

/** \brief E4110, CDTM0 DTM4 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM0_DTM4_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4110u)

/** \brief E4114, CDTM0 DTM4 Channel 0 Dead Time Reload Values */
#define GTM_CDTM0_DTM4_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4114u)

/** \brief E4118, CDTM0 DTM4 Channel 1 Dead Time Reload Values */
#define GTM_CDTM0_DTM4_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4118u)

/** \brief E411C, CDTM0 DTM4 Channel 2 Dead Time Reload Values */
#define GTM_CDTM0_DTM4_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E411Cu)

/** \brief E4120, CDTM0 DTM4 Channel 3 Dead Time Reload Values */
#define GTM_CDTM0_DTM4_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4120u)

/** \brief E4124, CDTM0 DTM4 Channel Shadow Register */
#define GTM_CDTM0_DTM4_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4124u)

/** \brief E4128, CDTM0 DTM4 Channel Control Register 3 */
#define GTM_CDTM0_DTM4_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4128u)

/** \brief E4140, CDTM0 DTM5 Global Configuration and Control Register */
#define GTM_CDTM0_DTM5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4140u)

/** \brief E4144, CDTM0 DTM5 Channel Control Register 1 */
#define GTM_CDTM0_DTM5_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4144u)

/** \brief E4148, CDTM0 DTM5 Channel Control Register 2 */
#define GTM_CDTM0_DTM5_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4148u)

/** \brief E414C, CDTM0 DTM5 Channel Control Register 2 Shadow */
#define GTM_CDTM0_DTM5_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E414Cu)

/** \brief E4150, CDTM0 DTM5 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM0_DTM5_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4150u)

/** \brief E4154, CDTM0 DTM5 Channel 0 Dead Time Reload Values */
#define GTM_CDTM0_DTM5_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4154u)

/** \brief E4158, CDTM0 DTM5 Channel 1 Dead Time Reload Values */
#define GTM_CDTM0_DTM5_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4158u)

/** \brief E415C, CDTM0 DTM5 Channel 2 Dead Time Reload Values */
#define GTM_CDTM0_DTM5_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E415Cu)

/** \brief E4160, CDTM0 DTM5 Channel 3 Dead Time Reload Values */
#define GTM_CDTM0_DTM5_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4160u)

/** \brief E4164, CDTM0 DTM5 Channel Shadow Register */
#define GTM_CDTM0_DTM5_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4164u)

/** \brief E4168, CDTM0 DTM5 Channel Control Register 3 */
#define GTM_CDTM0_DTM5_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4168u)

/** \brief E4400, CDTM1 DTM0 Global Configuration and Control Register */
#define GTM_CDTM1_DTM0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4400u)

/** \brief E4404, CDTM1 DTM0 Channel Control Register 1 */
#define GTM_CDTM1_DTM0_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4404u)

/** \brief E4408, CDTM1 DTM0 Channel Control Register 2 */
#define GTM_CDTM1_DTM0_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4408u)

/** \brief E440C, CDTM1 DTM0 Channel Control Register 2 Shadow */
#define GTM_CDTM1_DTM0_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E440Cu)

/** \brief E4410, CDTM1 DTM0 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM1_DTM0_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4410u)

/** \brief E4414, CDTM1 DTM0 Channel 0 Dead Time Reload Values */
#define GTM_CDTM1_DTM0_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4414u)

/** \brief E4418, CDTM1 DTM0 Channel 1 Dead Time Reload Values */
#define GTM_CDTM1_DTM0_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4418u)

/** \brief E441C, CDTM1 DTM0 Channel 2 Dead Time Reload Values */
#define GTM_CDTM1_DTM0_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E441Cu)

/** \brief E4420, CDTM1 DTM0 Channel 3 Dead Time Reload Values */
#define GTM_CDTM1_DTM0_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4420u)

/** \brief E4424, CDTM1 DTM0 Channel Shadow Register */
#define GTM_CDTM1_DTM0_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4424u)

/** \brief E4428, CDTM1 DTM0 Channel Control Register 3 */
#define GTM_CDTM1_DTM0_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4428u)

/** \brief E4440, CDTM1 DTM1 Global Configuration and Control Register */
#define GTM_CDTM1_DTM1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4440u)

/** \brief E4444, CDTM1 DTM1 Channel Control Register 1 */
#define GTM_CDTM1_DTM1_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4444u)

/** \brief E4448, CDTM1 DTM1 Channel Control Register 2 */
#define GTM_CDTM1_DTM1_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4448u)

/** \brief E444C, CDTM1 DTM1 Channel Control Register 2 Shadow */
#define GTM_CDTM1_DTM1_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E444Cu)

/** \brief E4450, CDTM1 DTM1 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM1_DTM1_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4450u)

/** \brief E4454, CDTM1 DTM1 Channel 0 Dead Time Reload Values */
#define GTM_CDTM1_DTM1_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4454u)

/** \brief E4458, CDTM1 DTM1 Channel 1 Dead Time Reload Values */
#define GTM_CDTM1_DTM1_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4458u)

/** \brief E445C, CDTM1 DTM1 Channel 2 Dead Time Reload Values */
#define GTM_CDTM1_DTM1_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E445Cu)

/** \brief E4460, CDTM1 DTM1 Channel 3 Dead Time Reload Values */
#define GTM_CDTM1_DTM1_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4460u)

/** \brief E4464, CDTM1 DTM1 Channel Shadow Register */
#define GTM_CDTM1_DTM1_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4464u)

/** \brief E4468, CDTM1 DTM1 Channel Control Register 3 */
#define GTM_CDTM1_DTM1_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4468u)

/** \brief E4500, CDTM1 DTM4 Global Configuration and Control Register */
#define GTM_CDTM1_DTM4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4500u)

/** \brief E4504, CDTM1 DTM4 Channel Control Register 1 */
#define GTM_CDTM1_DTM4_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4504u)

/** \brief E4508, CDTM1 DTM4 Channel Control Register 2 */
#define GTM_CDTM1_DTM4_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4508u)

/** \brief E450C, CDTM1 DTM4 Channel Control Register 2 Shadow */
#define GTM_CDTM1_DTM4_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E450Cu)

/** \brief E4510, CDTM1 DTM4 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM1_DTM4_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4510u)

/** \brief E4514, CDTM1 DTM4 Channel 0 Dead Time Reload Values */
#define GTM_CDTM1_DTM4_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4514u)

/** \brief E4518, CDTM1 DTM4 Channel 1 Dead Time Reload Values */
#define GTM_CDTM1_DTM4_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4518u)

/** \brief E451C, CDTM1 DTM4 Channel 2 Dead Time Reload Values */
#define GTM_CDTM1_DTM4_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E451Cu)

/** \brief E4520, CDTM1 DTM4 Channel 3 Dead Time Reload Values */
#define GTM_CDTM1_DTM4_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4520u)

/** \brief E4524, CDTM1 DTM4 Channel Shadow Register */
#define GTM_CDTM1_DTM4_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4524u)

/** \brief E4528, CDTM1 DTM4 Channel Control Register 3 */
#define GTM_CDTM1_DTM4_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4528u)

/** \brief E4540, CDTM1 DTM5 Global Configuration and Control Register */
#define GTM_CDTM1_DTM5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4540u)

/** \brief E4544, CDTM1 DTM5 Channel Control Register 1 */
#define GTM_CDTM1_DTM5_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4544u)

/** \brief E4548, CDTM1 DTM5 Channel Control Register 2 */
#define GTM_CDTM1_DTM5_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4548u)

/** \brief E454C, CDTM1 DTM5 Channel Control Register 2 Shadow */
#define GTM_CDTM1_DTM5_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E454Cu)

/** \brief E4550, CDTM1 DTM5 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM1_DTM5_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4550u)

/** \brief E4554, CDTM1 DTM5 Channel 0 Dead Time Reload Values */
#define GTM_CDTM1_DTM5_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4554u)

/** \brief E4558, CDTM1 DTM5 Channel 1 Dead Time Reload Values */
#define GTM_CDTM1_DTM5_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4558u)

/** \brief E455C, CDTM1 DTM5 Channel 2 Dead Time Reload Values */
#define GTM_CDTM1_DTM5_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E455Cu)

/** \brief E4560, CDTM1 DTM5 Channel 3 Dead Time Reload Values */
#define GTM_CDTM1_DTM5_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4560u)

/** \brief E4564, CDTM1 DTM5 Channel Shadow Register */
#define GTM_CDTM1_DTM5_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4564u)

/** \brief E4568, CDTM1 DTM5 Channel Control Register 3 */
#define GTM_CDTM1_DTM5_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4568u)

/** \brief E4800, CDTM2 DTM0 Global Configuration and Control Register */
#define GTM_CDTM2_DTM0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4800u)

/** \brief E4804, CDTM2 DTM0 Channel Control Register 1 */
#define GTM_CDTM2_DTM0_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4804u)

/** \brief E4808, CDTM2 DTM0 Channel Control Register 2 */
#define GTM_CDTM2_DTM0_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4808u)

/** \brief E480C, CDTM2 DTM0 Channel Control Register 2 Shadow */
#define GTM_CDTM2_DTM0_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E480Cu)

/** \brief E4810, CDTM2 DTM0 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM2_DTM0_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4810u)

/** \brief E4814, CDTM2 DTM0 Channel 0 Dead Time Reload Values */
#define GTM_CDTM2_DTM0_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4814u)

/** \brief E4818, CDTM2 DTM0 Channel 1 Dead Time Reload Values */
#define GTM_CDTM2_DTM0_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4818u)

/** \brief E481C, CDTM2 DTM0 Channel 2 Dead Time Reload Values */
#define GTM_CDTM2_DTM0_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E481Cu)

/** \brief E4820, CDTM2 DTM0 Channel 3 Dead Time Reload Values */
#define GTM_CDTM2_DTM0_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4820u)

/** \brief E4824, CDTM2 DTM0 Channel Shadow Register */
#define GTM_CDTM2_DTM0_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4824u)

/** \brief E4828, CDTM2 DTM0 Channel Control Register 3 */
#define GTM_CDTM2_DTM0_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4828u)

/** \brief E4840, CDTM2 DTM1 Global Configuration and Control Register */
#define GTM_CDTM2_DTM1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4840u)

/** \brief E4844, CDTM2 DTM1 Channel Control Register 1 */
#define GTM_CDTM2_DTM1_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4844u)

/** \brief E4848, CDTM2 DTM1 Channel Control Register 2 */
#define GTM_CDTM2_DTM1_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4848u)

/** \brief E484C, CDTM2 DTM1 Channel Control Register 2 Shadow */
#define GTM_CDTM2_DTM1_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E484Cu)

/** \brief E4850, CDTM2 DTM1 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM2_DTM1_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4850u)

/** \brief E4854, CDTM2 DTM1 Channel 0 Dead Time Reload Values */
#define GTM_CDTM2_DTM1_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4854u)

/** \brief E4858, CDTM2 DTM1 Channel 1 Dead Time Reload Values */
#define GTM_CDTM2_DTM1_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4858u)

/** \brief E485C, CDTM2 DTM1 Channel 2 Dead Time Reload Values */
#define GTM_CDTM2_DTM1_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E485Cu)

/** \brief E4860, CDTM2 DTM1 Channel 3 Dead Time Reload Values */
#define GTM_CDTM2_DTM1_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4860u)

/** \brief E4864, CDTM2 DTM1 Channel Shadow Register */
#define GTM_CDTM2_DTM1_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4864u)

/** \brief E4868, CDTM2 DTM1 Channel Control Register 3 */
#define GTM_CDTM2_DTM1_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4868u)

/** \brief E4900, CDTM2 DTM4 Global Configuration and Control Register */
#define GTM_CDTM2_DTM4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4900u)

/** \brief E4904, CDTM2 DTM4 Channel Control Register 1 */
#define GTM_CDTM2_DTM4_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4904u)

/** \brief E4908, CDTM2 DTM4 Channel Control Register 2 */
#define GTM_CDTM2_DTM4_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4908u)

/** \brief E490C, CDTM2 DTM4 Channel Control Register 2 Shadow */
#define GTM_CDTM2_DTM4_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E490Cu)

/** \brief E4910, CDTM2 DTM4 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM2_DTM4_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4910u)

/** \brief E4914, CDTM2 DTM4 Channel 0 Dead Time Reload Values */
#define GTM_CDTM2_DTM4_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4914u)

/** \brief E4918, CDTM2 DTM4 Channel 1 Dead Time Reload Values */
#define GTM_CDTM2_DTM4_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4918u)

/** \brief E491C, CDTM2 DTM4 Channel 2 Dead Time Reload Values */
#define GTM_CDTM2_DTM4_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E491Cu)

/** \brief E4920, CDTM2 DTM4 Channel 3 Dead Time Reload Values */
#define GTM_CDTM2_DTM4_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4920u)

/** \brief E4924, CDTM2 DTM4 Channel Shadow Register */
#define GTM_CDTM2_DTM4_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4924u)

/** \brief E4928, CDTM2 DTM4 Channel Control Register 3 */
#define GTM_CDTM2_DTM4_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4928u)

/** \brief E4940, CDTM2 DTM5 Global Configuration and Control Register */
#define GTM_CDTM2_DTM5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4940u)

/** \brief E4944, CDTM2 DTM5 Channel Control Register 1 */
#define GTM_CDTM2_DTM5_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4944u)

/** \brief E4948, CDTM2 DTM5 Channel Control Register 2 */
#define GTM_CDTM2_DTM5_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4948u)

/** \brief E494C, CDTM2 DTM5 Channel Control Register 2 Shadow */
#define GTM_CDTM2_DTM5_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E494Cu)

/** \brief E4950, CDTM2 DTM5 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM2_DTM5_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4950u)

/** \brief E4954, CDTM2 DTM5 Channel 0 Dead Time Reload Values */
#define GTM_CDTM2_DTM5_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4954u)

/** \brief E4958, CDTM2 DTM5 Channel 1 Dead Time Reload Values */
#define GTM_CDTM2_DTM5_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4958u)

/** \brief E495C, CDTM2 DTM5 Channel 2 Dead Time Reload Values */
#define GTM_CDTM2_DTM5_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E495Cu)

/** \brief E4960, CDTM2 DTM5 Channel 3 Dead Time Reload Values */
#define GTM_CDTM2_DTM5_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4960u)

/** \brief E4964, CDTM2 DTM5 Channel Shadow Register */
#define GTM_CDTM2_DTM5_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4964u)

/** \brief E4968, CDTM2 DTM5 Channel Control Register 3 */
#define GTM_CDTM2_DTM5_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4968u)

/** \brief E4D00, CDTM3 DTM4 Global Configuration and Control Register */
#define GTM_CDTM3_DTM4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4D00u)

/** \brief E4D04, CDTM3 DTM4 Channel Control Register 1 */
#define GTM_CDTM3_DTM4_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4D04u)

/** \brief E4D08, CDTM3 DTM4 Channel Control Register 2 */
#define GTM_CDTM3_DTM4_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4D08u)

/** \brief E4D0C, CDTM3 DTM4 Channel Control Register 2 Shadow */
#define GTM_CDTM3_DTM4_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E4D0Cu)

/** \brief E4D10, CDTM3 DTM4 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM3_DTM4_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4D10u)

/** \brief E4D14, CDTM3 DTM4 Channel 0 Dead Time Reload Values */
#define GTM_CDTM3_DTM4_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D14u)

/** \brief E4D18, CDTM3 DTM4 Channel 1 Dead Time Reload Values */
#define GTM_CDTM3_DTM4_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D18u)

/** \brief E4D1C, CDTM3 DTM4 Channel 2 Dead Time Reload Values */
#define GTM_CDTM3_DTM4_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D1Cu)

/** \brief E4D20, CDTM3 DTM4 Channel 3 Dead Time Reload Values */
#define GTM_CDTM3_DTM4_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D20u)

/** \brief E4D24, CDTM3 DTM4 Channel Shadow Register */
#define GTM_CDTM3_DTM4_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4D24u)

/** \brief E4D28, CDTM3 DTM4 Channel Control Register 3 */
#define GTM_CDTM3_DTM4_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4D28u)

/** \brief E4D40, CDTM3 DTM5 Global Configuration and Control Register */
#define GTM_CDTM3_DTM5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E4D40u)

/** \brief E4D44, CDTM3 DTM5 Channel Control Register 1 */
#define GTM_CDTM3_DTM5_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E4D44u)

/** \brief E4D48, CDTM3 DTM5 Channel Control Register 2 */
#define GTM_CDTM3_DTM5_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E4D48u)

/** \brief E4D4C, CDTM3 DTM5 Channel Control Register 2 Shadow */
#define GTM_CDTM3_DTM5_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E4D4Cu)

/** \brief E4D50, CDTM3 DTM5 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM3_DTM5_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E4D50u)

/** \brief E4D54, CDTM3 DTM5 Channel 0 Dead Time Reload Values */
#define GTM_CDTM3_DTM5_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D54u)

/** \brief E4D58, CDTM3 DTM5 Channel 1 Dead Time Reload Values */
#define GTM_CDTM3_DTM5_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D58u)

/** \brief E4D5C, CDTM3 DTM5 Channel 2 Dead Time Reload Values */
#define GTM_CDTM3_DTM5_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D5Cu)

/** \brief E4D60, CDTM3 DTM5 Channel 3 Dead Time Reload Values */
#define GTM_CDTM3_DTM5_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E4D60u)

/** \brief E4D64, CDTM3 DTM5 Channel Shadow Register */
#define GTM_CDTM3_DTM5_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E4D64u)

/** \brief E4D68, CDTM3 DTM5 Channel Control Register 3 */
#define GTM_CDTM3_DTM5_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E4D68u)

/** \brief E5100, CDTM4 DTM4 Global Configuration and Control Register */
#define GTM_CDTM4_DTM4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E5100u)

/** \brief E5104, CDTM4 DTM4 Channel Control Register 1 */
#define GTM_CDTM4_DTM4_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E5104u)

/** \brief E5108, CDTM4 DTM4 Channel Control Register 2 */
#define GTM_CDTM4_DTM4_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E5108u)

/** \brief E510C, CDTM4 DTM4 Channel Control Register 2 Shadow */
#define GTM_CDTM4_DTM4_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E510Cu)

/** \brief E5110, CDTM4 DTM4 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM4_DTM4_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E5110u)

/** \brief E5114, CDTM4 DTM4 Channel 0 Dead Time Reload Values */
#define GTM_CDTM4_DTM4_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E5114u)

/** \brief E5118, CDTM4 DTM4 Channel 1 Dead Time Reload Values */
#define GTM_CDTM4_DTM4_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E5118u)

/** \brief E511C, CDTM4 DTM4 Channel 2 Dead Time Reload Values */
#define GTM_CDTM4_DTM4_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E511Cu)

/** \brief E5120, CDTM4 DTM4 Channel 3 Dead Time Reload Values */
#define GTM_CDTM4_DTM4_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E5120u)

/** \brief E5124, CDTM4 DTM4 Channel Shadow Register */
#define GTM_CDTM4_DTM4_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E5124u)

/** \brief E5128, CDTM4 DTM4 Channel Control Register 3 */
#define GTM_CDTM4_DTM4_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E5128u)

/** \brief E5140, CDTM4 DTM5 Global Configuration and Control Register */
#define GTM_CDTM4_DTM5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CTRL*)0xF01E5140u)

/** \brief E5144, CDTM4 DTM5 Channel Control Register 1 */
#define GTM_CDTM4_DTM5_CH_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL1*)0xF01E5144u)

/** \brief E5148, CDTM4 DTM5 Channel Control Register 2 */
#define GTM_CDTM4_DTM5_CH_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2*)0xF01E5148u)

/** \brief E514C, CDTM4 DTM5 Channel Control Register 2 Shadow */
#define GTM_CDTM4_DTM5_CH_CTRL2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL2_SR*)0xF01E514Cu)

/** \brief E5150, CDTM4 DTM5 Phase Shift Unit Configuration and Control Register */
#define GTM_CDTM4_DTM5_PS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_PS_CTRL*)0xF01E5150u)

/** \brief E5154, CDTM4 DTM5 Channel 0 Dead Time Reload Values */
#define GTM_CDTM4_DTM5_CH0_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E5154u)

/** \brief E5158, CDTM4 DTM5 Channel 1 Dead Time Reload Values */
#define GTM_CDTM4_DTM5_CH1_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E5158u)

/** \brief E515C, CDTM4 DTM5 Channel 2 Dead Time Reload Values */
#define GTM_CDTM4_DTM5_CH2_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E515Cu)

/** \brief E5160, CDTM4 DTM5 Channel 3 Dead Time Reload Values */
#define GTM_CDTM4_DTM5_CH3_DTV /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_DTV*)0xF01E5160u)

/** \brief E5164, CDTM4 DTM5 Channel Shadow Register */
#define GTM_CDTM4_DTM5_CH_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_SR*)0xF01E5164u)

/** \brief E5168, CDTM4 DTM5 Channel Control Register 3 */
#define GTM_CDTM4_DTM5_CH_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_CDTM_DTM_CH_CTRL3*)0xF01E5168u)

/** \brief E8000, ATOM0 Channel 0 ARU read address Register */
#define GTM_ATOM0_CH0_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8000u)

/** \brief E8004, ATOM0 Channel 0 Control Register */
#define GTM_ATOM0_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8004u)

/** \brief E8004, ATOM0 Channel 0 Control Register in SOMB Mode */
#define GTM_ATOM0_CH0_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8004u)

/** \brief E8004, ATOM0 Channel 0 Control Register in SOMC Mode */
#define GTM_ATOM0_CH0_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8004u)

/** \brief E8004, ATOM0 Channel 0 Control Register in SOMI Mode */
#define GTM_ATOM0_CH0_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8004u)

/** \brief E8004, ATOM0 Channel 0 Control Register in SOMP Mode */
#define GTM_ATOM0_CH0_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8004u)

/** \brief E8004, ATOM0 Channel 0 Control Register in SOMS Mode */
#define GTM_ATOM0_CH0_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8004u)

/** \brief E8008, ATOM0 Channel 0 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8008u)

/** \brief E800C, ATOM0 Channel 0 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E800Cu)

/** \brief E8010, ATOM0 Channel 0 CCU0 Compare Register */
#define GTM_ATOM0_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8010u)

/** \brief E8014, ATOM0 Channel 0 CCU1 Compare Register */
#define GTM_ATOM0_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8014u)

/** \brief E8018, ATOM0 Channel 0 CCU0 Counter Register */
#define GTM_ATOM0_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8018u)

/** \brief E801C, ATOM0 Channel 0 Status Register */
#define GTM_ATOM0_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E801Cu)

/** \brief E8020, ATOM0 Channel 0 Interrupt Notification Register */
#define GTM_ATOM0_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8020u)

/** \brief E8024, ATOM0 Channel 0 Interrupt Enable Register */
#define GTM_ATOM0_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8024u)

/** \brief E8028, ATOM0 Channel 0 Software Interrupt Generation Register */
#define GTM_ATOM0_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8028u)

/** \brief E802C, ATOM0 Channel 0 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E802Cu)

/** \brief E8040, ATOM0 AGC Global Control Register */
#define GTM_ATOM0_AGC_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF01E8040u)

/** \brief E8044, ATOM0 AGC Enable/Disable Control Register */
#define GTM_ATOM0_AGC_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF01E8044u)

/** \brief E8048, ATOM0 AGC Enable/Disable Status Register */
#define GTM_ATOM0_AGC_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF01E8048u)

/** \brief E804C, ATOM0 AGC Action Time Base Register */
#define GTM_ATOM0_AGC_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF01E804Cu)

/** \brief E8050, ATOM0 AGC Output Enable Control Register */
#define GTM_ATOM0_AGC_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF01E8050u)

/** \brief E8054, ATOM0 AGC Output Enable Status Register */
#define GTM_ATOM0_AGC_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF01E8054u)

/** \brief E8058, ATOM0 AGC Force Update Control Register */
#define GTM_ATOM0_AGC_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF01E8058u)

/** \brief E805C, ATOM0 AGC Internal Trigger Control Register */
#define GTM_ATOM0_AGC_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF01E805Cu)

/** \brief E8080, ATOM0 Channel 1 ARU read address Register */
#define GTM_ATOM0_CH1_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8080u)

/** \brief E8084, ATOM0 Channel 1 Control Register */
#define GTM_ATOM0_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8084u)

/** \brief E8084, ATOM0 Channel 1 Control Register in SOMB Mode */
#define GTM_ATOM0_CH1_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8084u)

/** \brief E8084, ATOM0 Channel 1 Control Register in SOMC Mode */
#define GTM_ATOM0_CH1_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8084u)

/** \brief E8084, ATOM0 Channel 1 Control Register in SOMI Mode */
#define GTM_ATOM0_CH1_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8084u)

/** \brief E8084, ATOM0 Channel 1 Control Register in SOMP Mode */
#define GTM_ATOM0_CH1_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8084u)

/** \brief E8084, ATOM0 Channel 1 Control Register in SOMS Mode */
#define GTM_ATOM0_CH1_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8084u)

/** \brief E8088, ATOM0 Channel 1 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8088u)

/** \brief E808C, ATOM0 Channel 1 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E808Cu)

/** \brief E8090, ATOM0 Channel 1 CCU0 Compare Register */
#define GTM_ATOM0_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8090u)

/** \brief E8094, ATOM0 Channel 1 CCU1 Compare Register */
#define GTM_ATOM0_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8094u)

/** \brief E8098, ATOM0 Channel 1 CCU0 Counter Register */
#define GTM_ATOM0_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8098u)

/** \brief E809C, ATOM0 Channel 1 Status Register */
#define GTM_ATOM0_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E809Cu)

/** \brief E80A0, ATOM0 Channel 1 Interrupt Notification Register */
#define GTM_ATOM0_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E80A0u)

/** \brief E80A4, ATOM0 Channel 1 Interrupt Enable Register */
#define GTM_ATOM0_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E80A4u)

/** \brief E80A8, ATOM0 Channel 1 Software Interrupt Generation Register */
#define GTM_ATOM0_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E80A8u)

/** \brief E80AC, ATOM0 Channel 1 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E80ACu)

/** \brief E8100, ATOM0 Channel 2 ARU read address Register */
#define GTM_ATOM0_CH2_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8100u)

/** \brief E8104, ATOM0 Channel 2 Control Register */
#define GTM_ATOM0_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8104u)

/** \brief E8104, ATOM0 Channel 2 Control Register in SOMB Mode */
#define GTM_ATOM0_CH2_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8104u)

/** \brief E8104, ATOM0 Channel 2 Control Register in SOMC Mode */
#define GTM_ATOM0_CH2_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8104u)

/** \brief E8104, ATOM0 Channel 2 Control Register in SOMI Mode */
#define GTM_ATOM0_CH2_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8104u)

/** \brief E8104, ATOM0 Channel 2 Control Register in SOMP Mode */
#define GTM_ATOM0_CH2_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8104u)

/** \brief E8104, ATOM0 Channel 2 Control Register in SOMS Mode */
#define GTM_ATOM0_CH2_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8104u)

/** \brief E8108, ATOM0 Channel 2 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8108u)

/** \brief E810C, ATOM0 Channel 2 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E810Cu)

/** \brief E8110, ATOM0 Channel 2 CCU0 Compare Register */
#define GTM_ATOM0_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8110u)

/** \brief E8114, ATOM0 Channel 2 CCU1 Compare Register */
#define GTM_ATOM0_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8114u)

/** \brief E8118, ATOM0 Channel 2 CCU0 Counter Register */
#define GTM_ATOM0_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8118u)

/** \brief E811C, ATOM0 Channel 2 Status Register */
#define GTM_ATOM0_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E811Cu)

/** \brief E8120, ATOM0 Channel 2 Interrupt Notification Register */
#define GTM_ATOM0_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8120u)

/** \brief E8124, ATOM0 Channel 2 Interrupt Enable Register */
#define GTM_ATOM0_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8124u)

/** \brief E8128, ATOM0 Channel 2 Software Interrupt Generation Register */
#define GTM_ATOM0_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8128u)

/** \brief E812C, ATOM0 Channel 2 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E812Cu)

/** \brief E8180, ATOM0 Channel 3 ARU read address Register */
#define GTM_ATOM0_CH3_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8180u)

/** \brief E8184, ATOM0 Channel 3 Control Register */
#define GTM_ATOM0_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8184u)

/** \brief E8184, ATOM0 Channel 3 Control Register in SOMB Mode */
#define GTM_ATOM0_CH3_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8184u)

/** \brief E8184, ATOM0 Channel 3 Control Register in SOMC Mode */
#define GTM_ATOM0_CH3_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8184u)

/** \brief E8184, ATOM0 Channel 3 Control Register in SOMI Mode */
#define GTM_ATOM0_CH3_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8184u)

/** \brief E8184, ATOM0 Channel 3 Control Register in SOMP Mode */
#define GTM_ATOM0_CH3_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8184u)

/** \brief E8184, ATOM0 Channel 3 Control Register in SOMS Mode */
#define GTM_ATOM0_CH3_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8184u)

/** \brief E8188, ATOM0 Channel 3 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8188u)

/** \brief E818C, ATOM0 Channel 3 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E818Cu)

/** \brief E8190, ATOM0 Channel 3 CCU0 Compare Register */
#define GTM_ATOM0_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8190u)

/** \brief E8194, ATOM0 Channel 3 CCU1 Compare Register */
#define GTM_ATOM0_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8194u)

/** \brief E8198, ATOM0 Channel 3 CCU0 Counter Register */
#define GTM_ATOM0_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8198u)

/** \brief E819C, ATOM0 Channel 3 Status Register */
#define GTM_ATOM0_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E819Cu)

/** \brief E81A0, ATOM0 Channel 3 Interrupt Notification Register */
#define GTM_ATOM0_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E81A0u)

/** \brief E81A4, ATOM0 Channel 3 Interrupt Enable Register */
#define GTM_ATOM0_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E81A4u)

/** \brief E81A8, ATOM0 Channel 3 Software Interrupt Generation Register */
#define GTM_ATOM0_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E81A8u)

/** \brief E81AC, ATOM0 Channel 3 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E81ACu)

/** \brief E8200, ATOM0 Channel 4 ARU read address Register */
#define GTM_ATOM0_CH4_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8200u)

/** \brief E8204, ATOM0 Channel 4 Control Register */
#define GTM_ATOM0_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8204u)

/** \brief E8204, ATOM0 Channel 4 Control Register in SOMB Mode */
#define GTM_ATOM0_CH4_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8204u)

/** \brief E8204, ATOM0 Channel 4 Control Register in SOMC Mode */
#define GTM_ATOM0_CH4_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8204u)

/** \brief E8204, ATOM0 Channel 4 Control Register in SOMI Mode */
#define GTM_ATOM0_CH4_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8204u)

/** \brief E8204, ATOM0 Channel 4 Control Register in SOMP Mode */
#define GTM_ATOM0_CH4_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8204u)

/** \brief E8204, ATOM0 Channel 4 Control Register in SOMS Mode */
#define GTM_ATOM0_CH4_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8204u)

/** \brief E8208, ATOM0 Channel 4 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8208u)

/** \brief E820C, ATOM0 Channel 4 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E820Cu)

/** \brief E8210, ATOM0 Channel 4 CCU0 Compare Register */
#define GTM_ATOM0_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8210u)

/** \brief E8214, ATOM0 Channel 4 CCU1 Compare Register */
#define GTM_ATOM0_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8214u)

/** \brief E8218, ATOM0 Channel 4 CCU0 Counter Register */
#define GTM_ATOM0_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8218u)

/** \brief E821C, ATOM0 Channel 4 Status Register */
#define GTM_ATOM0_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E821Cu)

/** \brief E8220, ATOM0 Channel 4 Interrupt Notification Register */
#define GTM_ATOM0_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8220u)

/** \brief E8224, ATOM0 Channel 4 Interrupt Enable Register */
#define GTM_ATOM0_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8224u)

/** \brief E8228, ATOM0 Channel 4 Software Interrupt Generation Register */
#define GTM_ATOM0_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8228u)

/** \brief E822C, ATOM0 Channel 4 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E822Cu)

/** \brief E8280, ATOM0 Channel 5 ARU read address Register */
#define GTM_ATOM0_CH5_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8280u)

/** \brief E8284, ATOM0 Channel 5 Control Register */
#define GTM_ATOM0_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8284u)

/** \brief E8284, ATOM0 Channel 5 Control Register in SOMB Mode */
#define GTM_ATOM0_CH5_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8284u)

/** \brief E8284, ATOM0 Channel 5 Control Register in SOMC Mode */
#define GTM_ATOM0_CH5_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8284u)

/** \brief E8284, ATOM0 Channel 5 Control Register in SOMI Mode */
#define GTM_ATOM0_CH5_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8284u)

/** \brief E8284, ATOM0 Channel 5 Control Register in SOMP Mode */
#define GTM_ATOM0_CH5_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8284u)

/** \brief E8284, ATOM0 Channel 5 Control Register in SOMS Mode */
#define GTM_ATOM0_CH5_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8284u)

/** \brief E8288, ATOM0 Channel 5 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8288u)

/** \brief E828C, ATOM0 Channel 5 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E828Cu)

/** \brief E8290, ATOM0 Channel 5 CCU0 Compare Register */
#define GTM_ATOM0_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8290u)

/** \brief E8294, ATOM0 Channel 5 CCU1 Compare Register */
#define GTM_ATOM0_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8294u)

/** \brief E8298, ATOM0 Channel 5 CCU0 Counter Register */
#define GTM_ATOM0_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8298u)

/** \brief E829C, ATOM0 Channel 5 Status Register */
#define GTM_ATOM0_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E829Cu)

/** \brief E82A0, ATOM0 Channel 5 Interrupt Notification Register */
#define GTM_ATOM0_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E82A0u)

/** \brief E82A4, ATOM0 Channel 5 Interrupt Enable Register */
#define GTM_ATOM0_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E82A4u)

/** \brief E82A8, ATOM0 Channel 5 Software Interrupt Generation Register */
#define GTM_ATOM0_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E82A8u)

/** \brief E82AC, ATOM0 Channel 5 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E82ACu)

/** \brief E8300, ATOM0 Channel 6 ARU read address Register */
#define GTM_ATOM0_CH6_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8300u)

/** \brief E8304, ATOM0 Channel 6 Control Register */
#define GTM_ATOM0_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8304u)

/** \brief E8304, ATOM0 Channel 6 Control Register in SOMB Mode */
#define GTM_ATOM0_CH6_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8304u)

/** \brief E8304, ATOM0 Channel 6 Control Register in SOMC Mode */
#define GTM_ATOM0_CH6_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8304u)

/** \brief E8304, ATOM0 Channel 6 Control Register in SOMI Mode */
#define GTM_ATOM0_CH6_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8304u)

/** \brief E8304, ATOM0 Channel 6 Control Register in SOMP Mode */
#define GTM_ATOM0_CH6_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8304u)

/** \brief E8304, ATOM0 Channel 6 Control Register in SOMS Mode */
#define GTM_ATOM0_CH6_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8304u)

/** \brief E8308, ATOM0 Channel 6 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8308u)

/** \brief E830C, ATOM0 Channel 6 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E830Cu)

/** \brief E8310, ATOM0 Channel 6 CCU0 Compare Register */
#define GTM_ATOM0_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8310u)

/** \brief E8314, ATOM0 Channel 6 CCU1 Compare Register */
#define GTM_ATOM0_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8314u)

/** \brief E8318, ATOM0 Channel 6 CCU0 Counter Register */
#define GTM_ATOM0_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8318u)

/** \brief E831C, ATOM0 Channel 6 Status Register */
#define GTM_ATOM0_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E831Cu)

/** \brief E8320, ATOM0 Channel 6 Interrupt Notification Register */
#define GTM_ATOM0_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8320u)

/** \brief E8324, ATOM0 Channel 6 Interrupt Enable Register */
#define GTM_ATOM0_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8324u)

/** \brief E8328, ATOM0 Channel 6 Software Interrupt Generation Register */
#define GTM_ATOM0_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8328u)

/** \brief E832C, ATOM0 Channel 6 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E832Cu)

/** \brief E8380, ATOM0 Channel 7 ARU read address Register */
#define GTM_ATOM0_CH7_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8380u)

/** \brief E8384, ATOM0 Channel 7 Control Register */
#define GTM_ATOM0_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8384u)

/** \brief E8384, ATOM0 Channel 7 Control Register in SOMB Mode */
#define GTM_ATOM0_CH7_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8384u)

/** \brief E8384, ATOM0 Channel 7 Control Register in SOMC Mode */
#define GTM_ATOM0_CH7_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8384u)

/** \brief E8384, ATOM0 Channel 7 Control Register in SOMI Mode */
#define GTM_ATOM0_CH7_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8384u)

/** \brief E8384, ATOM0 Channel 7 Control Register in SOMP Mode */
#define GTM_ATOM0_CH7_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8384u)

/** \brief E8384, ATOM0 Channel 7 Control Register in SOMS Mode */
#define GTM_ATOM0_CH7_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8384u)

/** \brief E8388, ATOM0 Channel 7 CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8388u)

/** \brief E838C, ATOM0 Channel 7 CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E838Cu)

/** \brief E8390, ATOM0 Channel 7 CCU0 Compare Register */
#define GTM_ATOM0_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8390u)

/** \brief E8394, ATOM0 Channel 7 CCU1 Compare Register */
#define GTM_ATOM0_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8394u)

/** \brief E8398, ATOM0 Channel 7 CCU0 Counter Register */
#define GTM_ATOM0_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8398u)

/** \brief E839C, ATOM0 Channel 7 Status Register */
#define GTM_ATOM0_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E839Cu)

/** \brief E83A0, ATOM0 Channel 7 Interrupt Notification Register */
#define GTM_ATOM0_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E83A0u)

/** \brief E83A4, ATOM0 Channel 7 Interrupt Enable Register */
#define GTM_ATOM0_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E83A4u)

/** \brief E83A8, ATOM0 Channel 7 Software Interrupt Generation Register */
#define GTM_ATOM0_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E83A8u)

/** \brief E83AC, ATOM0 Channel 7 Interrupt Mode Configuration Register */
#define GTM_ATOM0_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E83ACu)

/** \brief E8800, ATOM1 Channel 0 ARU read address Register */
#define GTM_ATOM1_CH0_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8800u)

/** \brief E8804, ATOM1 Channel 0 Control Register */
#define GTM_ATOM1_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8804u)

/** \brief E8804, ATOM1 Channel 0 Control Register in SOMB Mode */
#define GTM_ATOM1_CH0_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8804u)

/** \brief E8804, ATOM1 Channel 0 Control Register in SOMC Mode */
#define GTM_ATOM1_CH0_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8804u)

/** \brief E8804, ATOM1 Channel 0 Control Register in SOMI Mode */
#define GTM_ATOM1_CH0_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8804u)

/** \brief E8804, ATOM1 Channel 0 Control Register in SOMP Mode */
#define GTM_ATOM1_CH0_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8804u)

/** \brief E8804, ATOM1 Channel 0 Control Register in SOMS Mode */
#define GTM_ATOM1_CH0_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8804u)

/** \brief E8808, ATOM1 Channel 0 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8808u)

/** \brief E880C, ATOM1 Channel 0 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E880Cu)

/** \brief E8810, ATOM1 Channel 0 CCU0 Compare Register */
#define GTM_ATOM1_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8810u)

/** \brief E8814, ATOM1 Channel 0 CCU1 Compare Register */
#define GTM_ATOM1_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8814u)

/** \brief E8818, ATOM1 Channel 0 CCU0 Counter Register */
#define GTM_ATOM1_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8818u)

/** \brief E881C, ATOM1 Channel 0 Status Register */
#define GTM_ATOM1_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E881Cu)

/** \brief E8820, ATOM1 Channel 0 Interrupt Notification Register */
#define GTM_ATOM1_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8820u)

/** \brief E8824, ATOM1 Channel 0 Interrupt Enable Register */
#define GTM_ATOM1_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8824u)

/** \brief E8828, ATOM1 Channel 0 Software Interrupt Generation Register */
#define GTM_ATOM1_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8828u)

/** \brief E882C, ATOM1 Channel 0 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E882Cu)

/** \brief E8840, ATOM1 AGC Global Control Register */
#define GTM_ATOM1_AGC_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF01E8840u)

/** \brief E8844, ATOM1 AGC Enable/Disable Control Register */
#define GTM_ATOM1_AGC_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF01E8844u)

/** \brief E8848, ATOM1 AGC Enable/Disable Status Register */
#define GTM_ATOM1_AGC_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF01E8848u)

/** \brief E884C, ATOM1 AGC Action Time Base Register */
#define GTM_ATOM1_AGC_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF01E884Cu)

/** \brief E8850, ATOM1 AGC Output Enable Control Register */
#define GTM_ATOM1_AGC_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF01E8850u)

/** \brief E8854, ATOM1 AGC Output Enable Status Register */
#define GTM_ATOM1_AGC_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF01E8854u)

/** \brief E8858, ATOM1 AGC Force Update Control Register */
#define GTM_ATOM1_AGC_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF01E8858u)

/** \brief E885C, ATOM1 AGC Internal Trigger Control Register */
#define GTM_ATOM1_AGC_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF01E885Cu)

/** \brief E8880, ATOM1 Channel 1 ARU read address Register */
#define GTM_ATOM1_CH1_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8880u)

/** \brief E8884, ATOM1 Channel 1 Control Register */
#define GTM_ATOM1_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8884u)

/** \brief E8884, ATOM1 Channel 1 Control Register in SOMB Mode */
#define GTM_ATOM1_CH1_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8884u)

/** \brief E8884, ATOM1 Channel 1 Control Register in SOMC Mode */
#define GTM_ATOM1_CH1_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8884u)

/** \brief E8884, ATOM1 Channel 1 Control Register in SOMI Mode */
#define GTM_ATOM1_CH1_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8884u)

/** \brief E8884, ATOM1 Channel 1 Control Register in SOMP Mode */
#define GTM_ATOM1_CH1_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8884u)

/** \brief E8884, ATOM1 Channel 1 Control Register in SOMS Mode */
#define GTM_ATOM1_CH1_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8884u)

/** \brief E8888, ATOM1 Channel 1 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8888u)

/** \brief E888C, ATOM1 Channel 1 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E888Cu)

/** \brief E8890, ATOM1 Channel 1 CCU0 Compare Register */
#define GTM_ATOM1_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8890u)

/** \brief E8894, ATOM1 Channel 1 CCU1 Compare Register */
#define GTM_ATOM1_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8894u)

/** \brief E8898, ATOM1 Channel 1 CCU0 Counter Register */
#define GTM_ATOM1_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8898u)

/** \brief E889C, ATOM1 Channel 1 Status Register */
#define GTM_ATOM1_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E889Cu)

/** \brief E88A0, ATOM1 Channel 1 Interrupt Notification Register */
#define GTM_ATOM1_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E88A0u)

/** \brief E88A4, ATOM1 Channel 1 Interrupt Enable Register */
#define GTM_ATOM1_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E88A4u)

/** \brief E88A8, ATOM1 Channel 1 Software Interrupt Generation Register */
#define GTM_ATOM1_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E88A8u)

/** \brief E88AC, ATOM1 Channel 1 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E88ACu)

/** \brief E8900, ATOM1 Channel 2 ARU read address Register */
#define GTM_ATOM1_CH2_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8900u)

/** \brief E8904, ATOM1 Channel 2 Control Register */
#define GTM_ATOM1_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8904u)

/** \brief E8904, ATOM1 Channel 2 Control Register in SOMB Mode */
#define GTM_ATOM1_CH2_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8904u)

/** \brief E8904, ATOM1 Channel 2 Control Register in SOMC Mode */
#define GTM_ATOM1_CH2_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8904u)

/** \brief E8904, ATOM1 Channel 2 Control Register in SOMI Mode */
#define GTM_ATOM1_CH2_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8904u)

/** \brief E8904, ATOM1 Channel 2 Control Register in SOMP Mode */
#define GTM_ATOM1_CH2_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8904u)

/** \brief E8904, ATOM1 Channel 2 Control Register in SOMS Mode */
#define GTM_ATOM1_CH2_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8904u)

/** \brief E8908, ATOM1 Channel 2 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8908u)

/** \brief E890C, ATOM1 Channel 2 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E890Cu)

/** \brief E8910, ATOM1 Channel 2 CCU0 Compare Register */
#define GTM_ATOM1_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8910u)

/** \brief E8914, ATOM1 Channel 2 CCU1 Compare Register */
#define GTM_ATOM1_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8914u)

/** \brief E8918, ATOM1 Channel 2 CCU0 Counter Register */
#define GTM_ATOM1_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8918u)

/** \brief E891C, ATOM1 Channel 2 Status Register */
#define GTM_ATOM1_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E891Cu)

/** \brief E8920, ATOM1 Channel 2 Interrupt Notification Register */
#define GTM_ATOM1_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8920u)

/** \brief E8924, ATOM1 Channel 2 Interrupt Enable Register */
#define GTM_ATOM1_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8924u)

/** \brief E8928, ATOM1 Channel 2 Software Interrupt Generation Register */
#define GTM_ATOM1_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8928u)

/** \brief E892C, ATOM1 Channel 2 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E892Cu)

/** \brief E8980, ATOM1 Channel 3 ARU read address Register */
#define GTM_ATOM1_CH3_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8980u)

/** \brief E8984, ATOM1 Channel 3 Control Register */
#define GTM_ATOM1_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8984u)

/** \brief E8984, ATOM1 Channel 3 Control Register in SOMB Mode */
#define GTM_ATOM1_CH3_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8984u)

/** \brief E8984, ATOM1 Channel 3 Control Register in SOMC Mode */
#define GTM_ATOM1_CH3_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8984u)

/** \brief E8984, ATOM1 Channel 3 Control Register in SOMI Mode */
#define GTM_ATOM1_CH3_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8984u)

/** \brief E8984, ATOM1 Channel 3 Control Register in SOMP Mode */
#define GTM_ATOM1_CH3_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8984u)

/** \brief E8984, ATOM1 Channel 3 Control Register in SOMS Mode */
#define GTM_ATOM1_CH3_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8984u)

/** \brief E8988, ATOM1 Channel 3 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8988u)

/** \brief E898C, ATOM1 Channel 3 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E898Cu)

/** \brief E8990, ATOM1 Channel 3 CCU0 Compare Register */
#define GTM_ATOM1_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8990u)

/** \brief E8994, ATOM1 Channel 3 CCU1 Compare Register */
#define GTM_ATOM1_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8994u)

/** \brief E8998, ATOM1 Channel 3 CCU0 Counter Register */
#define GTM_ATOM1_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8998u)

/** \brief E899C, ATOM1 Channel 3 Status Register */
#define GTM_ATOM1_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E899Cu)

/** \brief E89A0, ATOM1 Channel 3 Interrupt Notification Register */
#define GTM_ATOM1_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E89A0u)

/** \brief E89A4, ATOM1 Channel 3 Interrupt Enable Register */
#define GTM_ATOM1_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E89A4u)

/** \brief E89A8, ATOM1 Channel 3 Software Interrupt Generation Register */
#define GTM_ATOM1_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E89A8u)

/** \brief E89AC, ATOM1 Channel 3 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E89ACu)

/** \brief E8A00, ATOM1 Channel 4 ARU read address Register */
#define GTM_ATOM1_CH4_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8A00u)

/** \brief E8A04, ATOM1 Channel 4 Control Register */
#define GTM_ATOM1_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8A04u)

/** \brief E8A04, ATOM1 Channel 4 Control Register in SOMB Mode */
#define GTM_ATOM1_CH4_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8A04u)

/** \brief E8A04, ATOM1 Channel 4 Control Register in SOMC Mode */
#define GTM_ATOM1_CH4_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8A04u)

/** \brief E8A04, ATOM1 Channel 4 Control Register in SOMI Mode */
#define GTM_ATOM1_CH4_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8A04u)

/** \brief E8A04, ATOM1 Channel 4 Control Register in SOMP Mode */
#define GTM_ATOM1_CH4_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8A04u)

/** \brief E8A04, ATOM1 Channel 4 Control Register in SOMS Mode */
#define GTM_ATOM1_CH4_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8A04u)

/** \brief E8A08, ATOM1 Channel 4 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8A08u)

/** \brief E8A0C, ATOM1 Channel 4 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E8A0Cu)

/** \brief E8A10, ATOM1 Channel 4 CCU0 Compare Register */
#define GTM_ATOM1_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8A10u)

/** \brief E8A14, ATOM1 Channel 4 CCU1 Compare Register */
#define GTM_ATOM1_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8A14u)

/** \brief E8A18, ATOM1 Channel 4 CCU0 Counter Register */
#define GTM_ATOM1_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8A18u)

/** \brief E8A1C, ATOM1 Channel 4 Status Register */
#define GTM_ATOM1_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E8A1Cu)

/** \brief E8A20, ATOM1 Channel 4 Interrupt Notification Register */
#define GTM_ATOM1_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8A20u)

/** \brief E8A24, ATOM1 Channel 4 Interrupt Enable Register */
#define GTM_ATOM1_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8A24u)

/** \brief E8A28, ATOM1 Channel 4 Software Interrupt Generation Register */
#define GTM_ATOM1_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8A28u)

/** \brief E8A2C, ATOM1 Channel 4 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E8A2Cu)

/** \brief E8A80, ATOM1 Channel 5 ARU read address Register */
#define GTM_ATOM1_CH5_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8A80u)

/** \brief E8A84, ATOM1 Channel 5 Control Register */
#define GTM_ATOM1_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8A84u)

/** \brief E8A84, ATOM1 Channel 5 Control Register in SOMB Mode */
#define GTM_ATOM1_CH5_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8A84u)

/** \brief E8A84, ATOM1 Channel 5 Control Register in SOMC Mode */
#define GTM_ATOM1_CH5_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8A84u)

/** \brief E8A84, ATOM1 Channel 5 Control Register in SOMI Mode */
#define GTM_ATOM1_CH5_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8A84u)

/** \brief E8A84, ATOM1 Channel 5 Control Register in SOMP Mode */
#define GTM_ATOM1_CH5_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8A84u)

/** \brief E8A84, ATOM1 Channel 5 Control Register in SOMS Mode */
#define GTM_ATOM1_CH5_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8A84u)

/** \brief E8A88, ATOM1 Channel 5 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8A88u)

/** \brief E8A8C, ATOM1 Channel 5 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E8A8Cu)

/** \brief E8A90, ATOM1 Channel 5 CCU0 Compare Register */
#define GTM_ATOM1_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8A90u)

/** \brief E8A94, ATOM1 Channel 5 CCU1 Compare Register */
#define GTM_ATOM1_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8A94u)

/** \brief E8A98, ATOM1 Channel 5 CCU0 Counter Register */
#define GTM_ATOM1_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8A98u)

/** \brief E8A9C, ATOM1 Channel 5 Status Register */
#define GTM_ATOM1_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E8A9Cu)

/** \brief E8AA0, ATOM1 Channel 5 Interrupt Notification Register */
#define GTM_ATOM1_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8AA0u)

/** \brief E8AA4, ATOM1 Channel 5 Interrupt Enable Register */
#define GTM_ATOM1_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8AA4u)

/** \brief E8AA8, ATOM1 Channel 5 Software Interrupt Generation Register */
#define GTM_ATOM1_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8AA8u)

/** \brief E8AAC, ATOM1 Channel 5 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E8AACu)

/** \brief E8B00, ATOM1 Channel 6 ARU read address Register */
#define GTM_ATOM1_CH6_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8B00u)

/** \brief E8B04, ATOM1 Channel 6 Control Register */
#define GTM_ATOM1_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8B04u)

/** \brief E8B04, ATOM1 Channel 6 Control Register in SOMB Mode */
#define GTM_ATOM1_CH6_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8B04u)

/** \brief E8B04, ATOM1 Channel 6 Control Register in SOMC Mode */
#define GTM_ATOM1_CH6_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8B04u)

/** \brief E8B04, ATOM1 Channel 6 Control Register in SOMI Mode */
#define GTM_ATOM1_CH6_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8B04u)

/** \brief E8B04, ATOM1 Channel 6 Control Register in SOMP Mode */
#define GTM_ATOM1_CH6_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8B04u)

/** \brief E8B04, ATOM1 Channel 6 Control Register in SOMS Mode */
#define GTM_ATOM1_CH6_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8B04u)

/** \brief E8B08, ATOM1 Channel 6 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8B08u)

/** \brief E8B0C, ATOM1 Channel 6 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E8B0Cu)

/** \brief E8B10, ATOM1 Channel 6 CCU0 Compare Register */
#define GTM_ATOM1_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8B10u)

/** \brief E8B14, ATOM1 Channel 6 CCU1 Compare Register */
#define GTM_ATOM1_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8B14u)

/** \brief E8B18, ATOM1 Channel 6 CCU0 Counter Register */
#define GTM_ATOM1_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8B18u)

/** \brief E8B1C, ATOM1 Channel 6 Status Register */
#define GTM_ATOM1_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E8B1Cu)

/** \brief E8B20, ATOM1 Channel 6 Interrupt Notification Register */
#define GTM_ATOM1_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8B20u)

/** \brief E8B24, ATOM1 Channel 6 Interrupt Enable Register */
#define GTM_ATOM1_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8B24u)

/** \brief E8B28, ATOM1 Channel 6 Software Interrupt Generation Register */
#define GTM_ATOM1_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8B28u)

/** \brief E8B2C, ATOM1 Channel 6 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E8B2Cu)

/** \brief E8B80, ATOM1 Channel 7 ARU read address Register */
#define GTM_ATOM1_CH7_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E8B80u)

/** \brief E8B84, ATOM1 Channel 7 Control Register */
#define GTM_ATOM1_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E8B84u)

/** \brief E8B84, ATOM1 Channel 7 Control Register in SOMB Mode */
#define GTM_ATOM1_CH7_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E8B84u)

/** \brief E8B84, ATOM1 Channel 7 Control Register in SOMC Mode */
#define GTM_ATOM1_CH7_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E8B84u)

/** \brief E8B84, ATOM1 Channel 7 Control Register in SOMI Mode */
#define GTM_ATOM1_CH7_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E8B84u)

/** \brief E8B84, ATOM1 Channel 7 Control Register in SOMP Mode */
#define GTM_ATOM1_CH7_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E8B84u)

/** \brief E8B84, ATOM1 Channel 7 Control Register in SOMS Mode */
#define GTM_ATOM1_CH7_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E8B84u)

/** \brief E8B88, ATOM1 Channel 7 CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E8B88u)

/** \brief E8B8C, ATOM1 Channel 7 CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E8B8Cu)

/** \brief E8B90, ATOM1 Channel 7 CCU0 Compare Register */
#define GTM_ATOM1_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E8B90u)

/** \brief E8B94, ATOM1 Channel 7 CCU1 Compare Register */
#define GTM_ATOM1_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E8B94u)

/** \brief E8B98, ATOM1 Channel 7 CCU0 Counter Register */
#define GTM_ATOM1_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E8B98u)

/** \brief E8B9C, ATOM1 Channel 7 Status Register */
#define GTM_ATOM1_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E8B9Cu)

/** \brief E8BA0, ATOM1 Channel 7 Interrupt Notification Register */
#define GTM_ATOM1_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E8BA0u)

/** \brief E8BA4, ATOM1 Channel 7 Interrupt Enable Register */
#define GTM_ATOM1_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E8BA4u)

/** \brief E8BA8, ATOM1 Channel 7 Software Interrupt Generation Register */
#define GTM_ATOM1_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E8BA8u)

/** \brief E8BAC, ATOM1 Channel 7 Interrupt Mode Configuration Register */
#define GTM_ATOM1_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E8BACu)

/** \brief E9000, ATOM2 Channel 0 ARU read address Register */
#define GTM_ATOM2_CH0_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9000u)

/** \brief E9004, ATOM2 Channel 0 Control Register */
#define GTM_ATOM2_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9004u)

/** \brief E9004, ATOM2 Channel 0 Control Register in SOMB Mode */
#define GTM_ATOM2_CH0_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9004u)

/** \brief E9004, ATOM2 Channel 0 Control Register in SOMC Mode */
#define GTM_ATOM2_CH0_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9004u)

/** \brief E9004, ATOM2 Channel 0 Control Register in SOMI Mode */
#define GTM_ATOM2_CH0_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9004u)

/** \brief E9004, ATOM2 Channel 0 Control Register in SOMP Mode */
#define GTM_ATOM2_CH0_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9004u)

/** \brief E9004, ATOM2 Channel 0 Control Register in SOMS Mode */
#define GTM_ATOM2_CH0_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9004u)

/** \brief E9008, ATOM2 Channel 0 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9008u)

/** \brief E900C, ATOM2 Channel 0 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E900Cu)

/** \brief E9010, ATOM2 Channel 0 CCU0 Compare Register */
#define GTM_ATOM2_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9010u)

/** \brief E9014, ATOM2 Channel 0 CCU1 Compare Register */
#define GTM_ATOM2_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9014u)

/** \brief E9018, ATOM2 Channel 0 CCU0 Counter Register */
#define GTM_ATOM2_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9018u)

/** \brief E901C, ATOM2 Channel 0 Status Register */
#define GTM_ATOM2_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E901Cu)

/** \brief E9020, ATOM2 Channel 0 Interrupt Notification Register */
#define GTM_ATOM2_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9020u)

/** \brief E9024, ATOM2 Channel 0 Interrupt Enable Register */
#define GTM_ATOM2_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9024u)

/** \brief E9028, ATOM2 Channel 0 Software Interrupt Generation Register */
#define GTM_ATOM2_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9028u)

/** \brief E902C, ATOM2 Channel 0 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E902Cu)

/** \brief E9040, ATOM2 AGC Global Control Register */
#define GTM_ATOM2_AGC_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF01E9040u)

/** \brief E9044, ATOM2 AGC Enable/Disable Control Register */
#define GTM_ATOM2_AGC_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF01E9044u)

/** \brief E9048, ATOM2 AGC Enable/Disable Status Register */
#define GTM_ATOM2_AGC_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF01E9048u)

/** \brief E904C, ATOM2 AGC Action Time Base Register */
#define GTM_ATOM2_AGC_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF01E904Cu)

/** \brief E9050, ATOM2 AGC Output Enable Control Register */
#define GTM_ATOM2_AGC_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF01E9050u)

/** \brief E9054, ATOM2 AGC Output Enable Status Register */
#define GTM_ATOM2_AGC_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF01E9054u)

/** \brief E9058, ATOM2 AGC Force Update Control Register */
#define GTM_ATOM2_AGC_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF01E9058u)

/** \brief E905C, ATOM2 AGC Internal Trigger Control Register */
#define GTM_ATOM2_AGC_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF01E905Cu)

/** \brief E9080, ATOM2 Channel 1 ARU read address Register */
#define GTM_ATOM2_CH1_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9080u)

/** \brief E9084, ATOM2 Channel 1 Control Register */
#define GTM_ATOM2_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9084u)

/** \brief E9084, ATOM2 Channel 1 Control Register in SOMB Mode */
#define GTM_ATOM2_CH1_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9084u)

/** \brief E9084, ATOM2 Channel 1 Control Register in SOMC Mode */
#define GTM_ATOM2_CH1_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9084u)

/** \brief E9084, ATOM2 Channel 1 Control Register in SOMI Mode */
#define GTM_ATOM2_CH1_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9084u)

/** \brief E9084, ATOM2 Channel 1 Control Register in SOMP Mode */
#define GTM_ATOM2_CH1_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9084u)

/** \brief E9084, ATOM2 Channel 1 Control Register in SOMS Mode */
#define GTM_ATOM2_CH1_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9084u)

/** \brief E9088, ATOM2 Channel 1 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9088u)

/** \brief E908C, ATOM2 Channel 1 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E908Cu)

/** \brief E9090, ATOM2 Channel 1 CCU0 Compare Register */
#define GTM_ATOM2_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9090u)

/** \brief E9094, ATOM2 Channel 1 CCU1 Compare Register */
#define GTM_ATOM2_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9094u)

/** \brief E9098, ATOM2 Channel 1 CCU0 Counter Register */
#define GTM_ATOM2_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9098u)

/** \brief E909C, ATOM2 Channel 1 Status Register */
#define GTM_ATOM2_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E909Cu)

/** \brief E90A0, ATOM2 Channel 1 Interrupt Notification Register */
#define GTM_ATOM2_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E90A0u)

/** \brief E90A4, ATOM2 Channel 1 Interrupt Enable Register */
#define GTM_ATOM2_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E90A4u)

/** \brief E90A8, ATOM2 Channel 1 Software Interrupt Generation Register */
#define GTM_ATOM2_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E90A8u)

/** \brief E90AC, ATOM2 Channel 1 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E90ACu)

/** \brief E9100, ATOM2 Channel 2 ARU read address Register */
#define GTM_ATOM2_CH2_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9100u)

/** \brief E9104, ATOM2 Channel 2 Control Register */
#define GTM_ATOM2_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9104u)

/** \brief E9104, ATOM2 Channel 2 Control Register in SOMB Mode */
#define GTM_ATOM2_CH2_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9104u)

/** \brief E9104, ATOM2 Channel 2 Control Register in SOMC Mode */
#define GTM_ATOM2_CH2_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9104u)

/** \brief E9104, ATOM2 Channel 2 Control Register in SOMI Mode */
#define GTM_ATOM2_CH2_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9104u)

/** \brief E9104, ATOM2 Channel 2 Control Register in SOMP Mode */
#define GTM_ATOM2_CH2_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9104u)

/** \brief E9104, ATOM2 Channel 2 Control Register in SOMS Mode */
#define GTM_ATOM2_CH2_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9104u)

/** \brief E9108, ATOM2 Channel 2 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9108u)

/** \brief E910C, ATOM2 Channel 2 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E910Cu)

/** \brief E9110, ATOM2 Channel 2 CCU0 Compare Register */
#define GTM_ATOM2_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9110u)

/** \brief E9114, ATOM2 Channel 2 CCU1 Compare Register */
#define GTM_ATOM2_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9114u)

/** \brief E9118, ATOM2 Channel 2 CCU0 Counter Register */
#define GTM_ATOM2_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9118u)

/** \brief E911C, ATOM2 Channel 2 Status Register */
#define GTM_ATOM2_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E911Cu)

/** \brief E9120, ATOM2 Channel 2 Interrupt Notification Register */
#define GTM_ATOM2_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9120u)

/** \brief E9124, ATOM2 Channel 2 Interrupt Enable Register */
#define GTM_ATOM2_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9124u)

/** \brief E9128, ATOM2 Channel 2 Software Interrupt Generation Register */
#define GTM_ATOM2_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9128u)

/** \brief E912C, ATOM2 Channel 2 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E912Cu)

/** \brief E9180, ATOM2 Channel 3 ARU read address Register */
#define GTM_ATOM2_CH3_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9180u)

/** \brief E9184, ATOM2 Channel 3 Control Register */
#define GTM_ATOM2_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9184u)

/** \brief E9184, ATOM2 Channel 3 Control Register in SOMB Mode */
#define GTM_ATOM2_CH3_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9184u)

/** \brief E9184, ATOM2 Channel 3 Control Register in SOMC Mode */
#define GTM_ATOM2_CH3_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9184u)

/** \brief E9184, ATOM2 Channel 3 Control Register in SOMI Mode */
#define GTM_ATOM2_CH3_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9184u)

/** \brief E9184, ATOM2 Channel 3 Control Register in SOMP Mode */
#define GTM_ATOM2_CH3_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9184u)

/** \brief E9184, ATOM2 Channel 3 Control Register in SOMS Mode */
#define GTM_ATOM2_CH3_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9184u)

/** \brief E9188, ATOM2 Channel 3 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9188u)

/** \brief E918C, ATOM2 Channel 3 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E918Cu)

/** \brief E9190, ATOM2 Channel 3 CCU0 Compare Register */
#define GTM_ATOM2_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9190u)

/** \brief E9194, ATOM2 Channel 3 CCU1 Compare Register */
#define GTM_ATOM2_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9194u)

/** \brief E9198, ATOM2 Channel 3 CCU0 Counter Register */
#define GTM_ATOM2_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9198u)

/** \brief E919C, ATOM2 Channel 3 Status Register */
#define GTM_ATOM2_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E919Cu)

/** \brief E91A0, ATOM2 Channel 3 Interrupt Notification Register */
#define GTM_ATOM2_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E91A0u)

/** \brief E91A4, ATOM2 Channel 3 Interrupt Enable Register */
#define GTM_ATOM2_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E91A4u)

/** \brief E91A8, ATOM2 Channel 3 Software Interrupt Generation Register */
#define GTM_ATOM2_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E91A8u)

/** \brief E91AC, ATOM2 Channel 3 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E91ACu)

/** \brief E9200, ATOM2 Channel 4 ARU read address Register */
#define GTM_ATOM2_CH4_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9200u)

/** \brief E9204, ATOM2 Channel 4 Control Register */
#define GTM_ATOM2_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9204u)

/** \brief E9204, ATOM2 Channel 4 Control Register in SOMB Mode */
#define GTM_ATOM2_CH4_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9204u)

/** \brief E9204, ATOM2 Channel 4 Control Register in SOMC Mode */
#define GTM_ATOM2_CH4_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9204u)

/** \brief E9204, ATOM2 Channel 4 Control Register in SOMI Mode */
#define GTM_ATOM2_CH4_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9204u)

/** \brief E9204, ATOM2 Channel 4 Control Register in SOMP Mode */
#define GTM_ATOM2_CH4_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9204u)

/** \brief E9204, ATOM2 Channel 4 Control Register in SOMS Mode */
#define GTM_ATOM2_CH4_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9204u)

/** \brief E9208, ATOM2 Channel 4 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9208u)

/** \brief E920C, ATOM2 Channel 4 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E920Cu)

/** \brief E9210, ATOM2 Channel 4 CCU0 Compare Register */
#define GTM_ATOM2_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9210u)

/** \brief E9214, ATOM2 Channel 4 CCU1 Compare Register */
#define GTM_ATOM2_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9214u)

/** \brief E9218, ATOM2 Channel 4 CCU0 Counter Register */
#define GTM_ATOM2_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9218u)

/** \brief E921C, ATOM2 Channel 4 Status Register */
#define GTM_ATOM2_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E921Cu)

/** \brief E9220, ATOM2 Channel 4 Interrupt Notification Register */
#define GTM_ATOM2_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9220u)

/** \brief E9224, ATOM2 Channel 4 Interrupt Enable Register */
#define GTM_ATOM2_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9224u)

/** \brief E9228, ATOM2 Channel 4 Software Interrupt Generation Register */
#define GTM_ATOM2_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9228u)

/** \brief E922C, ATOM2 Channel 4 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E922Cu)

/** \brief E9280, ATOM2 Channel 5 ARU read address Register */
#define GTM_ATOM2_CH5_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9280u)

/** \brief E9284, ATOM2 Channel 5 Control Register */
#define GTM_ATOM2_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9284u)

/** \brief E9284, ATOM2 Channel 5 Control Register in SOMB Mode */
#define GTM_ATOM2_CH5_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9284u)

/** \brief E9284, ATOM2 Channel 5 Control Register in SOMC Mode */
#define GTM_ATOM2_CH5_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9284u)

/** \brief E9284, ATOM2 Channel 5 Control Register in SOMI Mode */
#define GTM_ATOM2_CH5_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9284u)

/** \brief E9284, ATOM2 Channel 5 Control Register in SOMP Mode */
#define GTM_ATOM2_CH5_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9284u)

/** \brief E9284, ATOM2 Channel 5 Control Register in SOMS Mode */
#define GTM_ATOM2_CH5_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9284u)

/** \brief E9288, ATOM2 Channel 5 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9288u)

/** \brief E928C, ATOM2 Channel 5 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E928Cu)

/** \brief E9290, ATOM2 Channel 5 CCU0 Compare Register */
#define GTM_ATOM2_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9290u)

/** \brief E9294, ATOM2 Channel 5 CCU1 Compare Register */
#define GTM_ATOM2_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9294u)

/** \brief E9298, ATOM2 Channel 5 CCU0 Counter Register */
#define GTM_ATOM2_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9298u)

/** \brief E929C, ATOM2 Channel 5 Status Register */
#define GTM_ATOM2_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E929Cu)

/** \brief E92A0, ATOM2 Channel 5 Interrupt Notification Register */
#define GTM_ATOM2_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E92A0u)

/** \brief E92A4, ATOM2 Channel 5 Interrupt Enable Register */
#define GTM_ATOM2_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E92A4u)

/** \brief E92A8, ATOM2 Channel 5 Software Interrupt Generation Register */
#define GTM_ATOM2_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E92A8u)

/** \brief E92AC, ATOM2 Channel 5 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E92ACu)

/** \brief E9300, ATOM2 Channel 6 ARU read address Register */
#define GTM_ATOM2_CH6_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9300u)

/** \brief E9304, ATOM2 Channel 6 Control Register */
#define GTM_ATOM2_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9304u)

/** \brief E9304, ATOM2 Channel 6 Control Register in SOMB Mode */
#define GTM_ATOM2_CH6_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9304u)

/** \brief E9304, ATOM2 Channel 6 Control Register in SOMC Mode */
#define GTM_ATOM2_CH6_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9304u)

/** \brief E9304, ATOM2 Channel 6 Control Register in SOMI Mode */
#define GTM_ATOM2_CH6_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9304u)

/** \brief E9304, ATOM2 Channel 6 Control Register in SOMP Mode */
#define GTM_ATOM2_CH6_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9304u)

/** \brief E9304, ATOM2 Channel 6 Control Register in SOMS Mode */
#define GTM_ATOM2_CH6_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9304u)

/** \brief E9308, ATOM2 Channel 6 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9308u)

/** \brief E930C, ATOM2 Channel 6 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E930Cu)

/** \brief E9310, ATOM2 Channel 6 CCU0 Compare Register */
#define GTM_ATOM2_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9310u)

/** \brief E9314, ATOM2 Channel 6 CCU1 Compare Register */
#define GTM_ATOM2_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9314u)

/** \brief E9318, ATOM2 Channel 6 CCU0 Counter Register */
#define GTM_ATOM2_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9318u)

/** \brief E931C, ATOM2 Channel 6 Status Register */
#define GTM_ATOM2_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E931Cu)

/** \brief E9320, ATOM2 Channel 6 Interrupt Notification Register */
#define GTM_ATOM2_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9320u)

/** \brief E9324, ATOM2 Channel 6 Interrupt Enable Register */
#define GTM_ATOM2_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9324u)

/** \brief E9328, ATOM2 Channel 6 Software Interrupt Generation Register */
#define GTM_ATOM2_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9328u)

/** \brief E932C, ATOM2 Channel 6 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E932Cu)

/** \brief E9380, ATOM2 Channel 7 ARU read address Register */
#define GTM_ATOM2_CH7_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9380u)

/** \brief E9384, ATOM2 Channel 7 Control Register */
#define GTM_ATOM2_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9384u)

/** \brief E9384, ATOM2 Channel 7 Control Register in SOMB Mode */
#define GTM_ATOM2_CH7_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9384u)

/** \brief E9384, ATOM2 Channel 7 Control Register in SOMC Mode */
#define GTM_ATOM2_CH7_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9384u)

/** \brief E9384, ATOM2 Channel 7 Control Register in SOMI Mode */
#define GTM_ATOM2_CH7_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9384u)

/** \brief E9384, ATOM2 Channel 7 Control Register in SOMP Mode */
#define GTM_ATOM2_CH7_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9384u)

/** \brief E9384, ATOM2 Channel 7 Control Register in SOMS Mode */
#define GTM_ATOM2_CH7_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9384u)

/** \brief E9388, ATOM2 Channel 7 CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9388u)

/** \brief E938C, ATOM2 Channel 7 CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E938Cu)

/** \brief E9390, ATOM2 Channel 7 CCU0 Compare Register */
#define GTM_ATOM2_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9390u)

/** \brief E9394, ATOM2 Channel 7 CCU1 Compare Register */
#define GTM_ATOM2_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9394u)

/** \brief E9398, ATOM2 Channel 7 CCU0 Counter Register */
#define GTM_ATOM2_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9398u)

/** \brief E939C, ATOM2 Channel 7 Status Register */
#define GTM_ATOM2_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E939Cu)

/** \brief E93A0, ATOM2 Channel 7 Interrupt Notification Register */
#define GTM_ATOM2_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E93A0u)

/** \brief E93A4, ATOM2 Channel 7 Interrupt Enable Register */
#define GTM_ATOM2_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E93A4u)

/** \brief E93A8, ATOM2 Channel 7 Software Interrupt Generation Register */
#define GTM_ATOM2_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E93A8u)

/** \brief E93AC, ATOM2 Channel 7 Interrupt Mode Configuration Register */
#define GTM_ATOM2_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E93ACu)

/** \brief E9800, ATOM3 Channel 0 ARU read address Register */
#define GTM_ATOM3_CH0_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9800u)

/** \brief E9804, ATOM3 Channel 0 Control Register */
#define GTM_ATOM3_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9804u)

/** \brief E9804, ATOM3 Channel 0 Control Register in SOMB Mode */
#define GTM_ATOM3_CH0_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9804u)

/** \brief E9804, ATOM3 Channel 0 Control Register in SOMC Mode */
#define GTM_ATOM3_CH0_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9804u)

/** \brief E9804, ATOM3 Channel 0 Control Register in SOMI Mode */
#define GTM_ATOM3_CH0_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9804u)

/** \brief E9804, ATOM3 Channel 0 Control Register in SOMP Mode */
#define GTM_ATOM3_CH0_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9804u)

/** \brief E9804, ATOM3 Channel 0 Control Register in SOMS Mode */
#define GTM_ATOM3_CH0_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9804u)

/** \brief E9808, ATOM3 Channel 0 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9808u)

/** \brief E980C, ATOM3 Channel 0 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E980Cu)

/** \brief E9810, ATOM3 Channel 0 CCU0 Compare Register */
#define GTM_ATOM3_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9810u)

/** \brief E9814, ATOM3 Channel 0 CCU1 Compare Register */
#define GTM_ATOM3_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9814u)

/** \brief E9818, ATOM3 Channel 0 CCU0 Counter Register */
#define GTM_ATOM3_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9818u)

/** \brief E981C, ATOM3 Channel 0 Status Register */
#define GTM_ATOM3_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E981Cu)

/** \brief E9820, ATOM3 Channel 0 Interrupt Notification Register */
#define GTM_ATOM3_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9820u)

/** \brief E9824, ATOM3 Channel 0 Interrupt Enable Register */
#define GTM_ATOM3_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9824u)

/** \brief E9828, ATOM3 Channel 0 Software Interrupt Generation Register */
#define GTM_ATOM3_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9828u)

/** \brief E982C, ATOM3 Channel 0 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E982Cu)

/** \brief E9840, ATOM3 AGC Global Control Register */
#define GTM_ATOM3_AGC_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF01E9840u)

/** \brief E9844, ATOM3 AGC Enable/Disable Control Register */
#define GTM_ATOM3_AGC_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF01E9844u)

/** \brief E9848, ATOM3 AGC Enable/Disable Status Register */
#define GTM_ATOM3_AGC_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF01E9848u)

/** \brief E984C, ATOM3 AGC Action Time Base Register */
#define GTM_ATOM3_AGC_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF01E984Cu)

/** \brief E9850, ATOM3 AGC Output Enable Control Register */
#define GTM_ATOM3_AGC_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF01E9850u)

/** \brief E9854, ATOM3 AGC Output Enable Status Register */
#define GTM_ATOM3_AGC_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF01E9854u)

/** \brief E9858, ATOM3 AGC Force Update Control Register */
#define GTM_ATOM3_AGC_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF01E9858u)

/** \brief E985C, ATOM3 AGC Internal Trigger Control Register */
#define GTM_ATOM3_AGC_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF01E985Cu)

/** \brief E9880, ATOM3 Channel 1 ARU read address Register */
#define GTM_ATOM3_CH1_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9880u)

/** \brief E9884, ATOM3 Channel 1 Control Register */
#define GTM_ATOM3_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9884u)

/** \brief E9884, ATOM3 Channel 1 Control Register in SOMB Mode */
#define GTM_ATOM3_CH1_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9884u)

/** \brief E9884, ATOM3 Channel 1 Control Register in SOMC Mode */
#define GTM_ATOM3_CH1_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9884u)

/** \brief E9884, ATOM3 Channel 1 Control Register in SOMI Mode */
#define GTM_ATOM3_CH1_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9884u)

/** \brief E9884, ATOM3 Channel 1 Control Register in SOMP Mode */
#define GTM_ATOM3_CH1_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9884u)

/** \brief E9884, ATOM3 Channel 1 Control Register in SOMS Mode */
#define GTM_ATOM3_CH1_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9884u)

/** \brief E9888, ATOM3 Channel 1 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9888u)

/** \brief E988C, ATOM3 Channel 1 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E988Cu)

/** \brief E9890, ATOM3 Channel 1 CCU0 Compare Register */
#define GTM_ATOM3_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9890u)

/** \brief E9894, ATOM3 Channel 1 CCU1 Compare Register */
#define GTM_ATOM3_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9894u)

/** \brief E9898, ATOM3 Channel 1 CCU0 Counter Register */
#define GTM_ATOM3_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9898u)

/** \brief E989C, ATOM3 Channel 1 Status Register */
#define GTM_ATOM3_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E989Cu)

/** \brief E98A0, ATOM3 Channel 1 Interrupt Notification Register */
#define GTM_ATOM3_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E98A0u)

/** \brief E98A4, ATOM3 Channel 1 Interrupt Enable Register */
#define GTM_ATOM3_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E98A4u)

/** \brief E98A8, ATOM3 Channel 1 Software Interrupt Generation Register */
#define GTM_ATOM3_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E98A8u)

/** \brief E98AC, ATOM3 Channel 1 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E98ACu)

/** \brief E9900, ATOM3 Channel 2 ARU read address Register */
#define GTM_ATOM3_CH2_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9900u)

/** \brief E9904, ATOM3 Channel 2 Control Register */
#define GTM_ATOM3_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9904u)

/** \brief E9904, ATOM3 Channel 2 Control Register in SOMB Mode */
#define GTM_ATOM3_CH2_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9904u)

/** \brief E9904, ATOM3 Channel 2 Control Register in SOMC Mode */
#define GTM_ATOM3_CH2_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9904u)

/** \brief E9904, ATOM3 Channel 2 Control Register in SOMI Mode */
#define GTM_ATOM3_CH2_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9904u)

/** \brief E9904, ATOM3 Channel 2 Control Register in SOMP Mode */
#define GTM_ATOM3_CH2_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9904u)

/** \brief E9904, ATOM3 Channel 2 Control Register in SOMS Mode */
#define GTM_ATOM3_CH2_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9904u)

/** \brief E9908, ATOM3 Channel 2 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9908u)

/** \brief E990C, ATOM3 Channel 2 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E990Cu)

/** \brief E9910, ATOM3 Channel 2 CCU0 Compare Register */
#define GTM_ATOM3_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9910u)

/** \brief E9914, ATOM3 Channel 2 CCU1 Compare Register */
#define GTM_ATOM3_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9914u)

/** \brief E9918, ATOM3 Channel 2 CCU0 Counter Register */
#define GTM_ATOM3_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9918u)

/** \brief E991C, ATOM3 Channel 2 Status Register */
#define GTM_ATOM3_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E991Cu)

/** \brief E9920, ATOM3 Channel 2 Interrupt Notification Register */
#define GTM_ATOM3_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9920u)

/** \brief E9924, ATOM3 Channel 2 Interrupt Enable Register */
#define GTM_ATOM3_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9924u)

/** \brief E9928, ATOM3 Channel 2 Software Interrupt Generation Register */
#define GTM_ATOM3_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9928u)

/** \brief E992C, ATOM3 Channel 2 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E992Cu)

/** \brief E9980, ATOM3 Channel 3 ARU read address Register */
#define GTM_ATOM3_CH3_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9980u)

/** \brief E9984, ATOM3 Channel 3 Control Register */
#define GTM_ATOM3_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9984u)

/** \brief E9984, ATOM3 Channel 3 Control Register in SOMB Mode */
#define GTM_ATOM3_CH3_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9984u)

/** \brief E9984, ATOM3 Channel 3 Control Register in SOMC Mode */
#define GTM_ATOM3_CH3_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9984u)

/** \brief E9984, ATOM3 Channel 3 Control Register in SOMI Mode */
#define GTM_ATOM3_CH3_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9984u)

/** \brief E9984, ATOM3 Channel 3 Control Register in SOMP Mode */
#define GTM_ATOM3_CH3_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9984u)

/** \brief E9984, ATOM3 Channel 3 Control Register in SOMS Mode */
#define GTM_ATOM3_CH3_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9984u)

/** \brief E9988, ATOM3 Channel 3 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9988u)

/** \brief E998C, ATOM3 Channel 3 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E998Cu)

/** \brief E9990, ATOM3 Channel 3 CCU0 Compare Register */
#define GTM_ATOM3_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9990u)

/** \brief E9994, ATOM3 Channel 3 CCU1 Compare Register */
#define GTM_ATOM3_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9994u)

/** \brief E9998, ATOM3 Channel 3 CCU0 Counter Register */
#define GTM_ATOM3_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9998u)

/** \brief E999C, ATOM3 Channel 3 Status Register */
#define GTM_ATOM3_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E999Cu)

/** \brief E99A0, ATOM3 Channel 3 Interrupt Notification Register */
#define GTM_ATOM3_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E99A0u)

/** \brief E99A4, ATOM3 Channel 3 Interrupt Enable Register */
#define GTM_ATOM3_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E99A4u)

/** \brief E99A8, ATOM3 Channel 3 Software Interrupt Generation Register */
#define GTM_ATOM3_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E99A8u)

/** \brief E99AC, ATOM3 Channel 3 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E99ACu)

/** \brief E9A00, ATOM3 Channel 4 ARU read address Register */
#define GTM_ATOM3_CH4_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9A00u)

/** \brief E9A04, ATOM3 Channel 4 Control Register */
#define GTM_ATOM3_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9A04u)

/** \brief E9A04, ATOM3 Channel 4 Control Register in SOMB Mode */
#define GTM_ATOM3_CH4_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9A04u)

/** \brief E9A04, ATOM3 Channel 4 Control Register in SOMC Mode */
#define GTM_ATOM3_CH4_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9A04u)

/** \brief E9A04, ATOM3 Channel 4 Control Register in SOMI Mode */
#define GTM_ATOM3_CH4_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9A04u)

/** \brief E9A04, ATOM3 Channel 4 Control Register in SOMP Mode */
#define GTM_ATOM3_CH4_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9A04u)

/** \brief E9A04, ATOM3 Channel 4 Control Register in SOMS Mode */
#define GTM_ATOM3_CH4_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9A04u)

/** \brief E9A08, ATOM3 Channel 4 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9A08u)

/** \brief E9A0C, ATOM3 Channel 4 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E9A0Cu)

/** \brief E9A10, ATOM3 Channel 4 CCU0 Compare Register */
#define GTM_ATOM3_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9A10u)

/** \brief E9A14, ATOM3 Channel 4 CCU1 Compare Register */
#define GTM_ATOM3_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9A14u)

/** \brief E9A18, ATOM3 Channel 4 CCU0 Counter Register */
#define GTM_ATOM3_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9A18u)

/** \brief E9A1C, ATOM3 Channel 4 Status Register */
#define GTM_ATOM3_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E9A1Cu)

/** \brief E9A20, ATOM3 Channel 4 Interrupt Notification Register */
#define GTM_ATOM3_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9A20u)

/** \brief E9A24, ATOM3 Channel 4 Interrupt Enable Register */
#define GTM_ATOM3_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9A24u)

/** \brief E9A28, ATOM3 Channel 4 Software Interrupt Generation Register */
#define GTM_ATOM3_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9A28u)

/** \brief E9A2C, ATOM3 Channel 4 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E9A2Cu)

/** \brief E9A80, ATOM3 Channel 5 ARU read address Register */
#define GTM_ATOM3_CH5_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9A80u)

/** \brief E9A84, ATOM3 Channel 5 Control Register */
#define GTM_ATOM3_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9A84u)

/** \brief E9A84, ATOM3 Channel 5 Control Register in SOMB Mode */
#define GTM_ATOM3_CH5_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9A84u)

/** \brief E9A84, ATOM3 Channel 5 Control Register in SOMC Mode */
#define GTM_ATOM3_CH5_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9A84u)

/** \brief E9A84, ATOM3 Channel 5 Control Register in SOMI Mode */
#define GTM_ATOM3_CH5_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9A84u)

/** \brief E9A84, ATOM3 Channel 5 Control Register in SOMP Mode */
#define GTM_ATOM3_CH5_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9A84u)

/** \brief E9A84, ATOM3 Channel 5 Control Register in SOMS Mode */
#define GTM_ATOM3_CH5_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9A84u)

/** \brief E9A88, ATOM3 Channel 5 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9A88u)

/** \brief E9A8C, ATOM3 Channel 5 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E9A8Cu)

/** \brief E9A90, ATOM3 Channel 5 CCU0 Compare Register */
#define GTM_ATOM3_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9A90u)

/** \brief E9A94, ATOM3 Channel 5 CCU1 Compare Register */
#define GTM_ATOM3_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9A94u)

/** \brief E9A98, ATOM3 Channel 5 CCU0 Counter Register */
#define GTM_ATOM3_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9A98u)

/** \brief E9A9C, ATOM3 Channel 5 Status Register */
#define GTM_ATOM3_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E9A9Cu)

/** \brief E9AA0, ATOM3 Channel 5 Interrupt Notification Register */
#define GTM_ATOM3_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9AA0u)

/** \brief E9AA4, ATOM3 Channel 5 Interrupt Enable Register */
#define GTM_ATOM3_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9AA4u)

/** \brief E9AA8, ATOM3 Channel 5 Software Interrupt Generation Register */
#define GTM_ATOM3_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9AA8u)

/** \brief E9AAC, ATOM3 Channel 5 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E9AACu)

/** \brief E9B00, ATOM3 Channel 6 ARU read address Register */
#define GTM_ATOM3_CH6_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9B00u)

/** \brief E9B04, ATOM3 Channel 6 Control Register */
#define GTM_ATOM3_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9B04u)

/** \brief E9B04, ATOM3 Channel 6 Control Register in SOMB Mode */
#define GTM_ATOM3_CH6_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9B04u)

/** \brief E9B04, ATOM3 Channel 6 Control Register in SOMC Mode */
#define GTM_ATOM3_CH6_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9B04u)

/** \brief E9B04, ATOM3 Channel 6 Control Register in SOMI Mode */
#define GTM_ATOM3_CH6_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9B04u)

/** \brief E9B04, ATOM3 Channel 6 Control Register in SOMP Mode */
#define GTM_ATOM3_CH6_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9B04u)

/** \brief E9B04, ATOM3 Channel 6 Control Register in SOMS Mode */
#define GTM_ATOM3_CH6_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9B04u)

/** \brief E9B08, ATOM3 Channel 6 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9B08u)

/** \brief E9B0C, ATOM3 Channel 6 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E9B0Cu)

/** \brief E9B10, ATOM3 Channel 6 CCU0 Compare Register */
#define GTM_ATOM3_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9B10u)

/** \brief E9B14, ATOM3 Channel 6 CCU1 Compare Register */
#define GTM_ATOM3_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9B14u)

/** \brief E9B18, ATOM3 Channel 6 CCU0 Counter Register */
#define GTM_ATOM3_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9B18u)

/** \brief E9B1C, ATOM3 Channel 6 Status Register */
#define GTM_ATOM3_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E9B1Cu)

/** \brief E9B20, ATOM3 Channel 6 Interrupt Notification Register */
#define GTM_ATOM3_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9B20u)

/** \brief E9B24, ATOM3 Channel 6 Interrupt Enable Register */
#define GTM_ATOM3_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9B24u)

/** \brief E9B28, ATOM3 Channel 6 Software Interrupt Generation Register */
#define GTM_ATOM3_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9B28u)

/** \brief E9B2C, ATOM3 Channel 6 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E9B2Cu)

/** \brief E9B80, ATOM3 Channel 7 ARU read address Register */
#define GTM_ATOM3_CH7_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01E9B80u)

/** \brief E9B84, ATOM3 Channel 7 Control Register */
#define GTM_ATOM3_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01E9B84u)

/** \brief E9B84, ATOM3 Channel 7 Control Register in SOMB Mode */
#define GTM_ATOM3_CH7_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01E9B84u)

/** \brief E9B84, ATOM3 Channel 7 Control Register in SOMC Mode */
#define GTM_ATOM3_CH7_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01E9B84u)

/** \brief E9B84, ATOM3 Channel 7 Control Register in SOMI Mode */
#define GTM_ATOM3_CH7_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01E9B84u)

/** \brief E9B84, ATOM3 Channel 7 Control Register in SOMP Mode */
#define GTM_ATOM3_CH7_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01E9B84u)

/** \brief E9B84, ATOM3 Channel 7 Control Register in SOMS Mode */
#define GTM_ATOM3_CH7_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01E9B84u)

/** \brief E9B88, ATOM3 Channel 7 CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01E9B88u)

/** \brief E9B8C, ATOM3 Channel 7 CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01E9B8Cu)

/** \brief E9B90, ATOM3 Channel 7 CCU0 Compare Register */
#define GTM_ATOM3_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01E9B90u)

/** \brief E9B94, ATOM3 Channel 7 CCU1 Compare Register */
#define GTM_ATOM3_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01E9B94u)

/** \brief E9B98, ATOM3 Channel 7 CCU0 Counter Register */
#define GTM_ATOM3_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01E9B98u)

/** \brief E9B9C, ATOM3 Channel 7 Status Register */
#define GTM_ATOM3_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01E9B9Cu)

/** \brief E9BA0, ATOM3 Channel 7 Interrupt Notification Register */
#define GTM_ATOM3_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01E9BA0u)

/** \brief E9BA4, ATOM3 Channel 7 Interrupt Enable Register */
#define GTM_ATOM3_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01E9BA4u)

/** \brief E9BA8, ATOM3 Channel 7 Software Interrupt Generation Register */
#define GTM_ATOM3_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01E9BA8u)

/** \brief E9BAC, ATOM3 Channel 7 Interrupt Mode Configuration Register */
#define GTM_ATOM3_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01E9BACu)

/** \brief EA000, ATOM4 Channel 0 ARU read address Register */
#define GTM_ATOM4_CH0_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA000u)

/** \brief EA004, ATOM4 Channel 0 Control Register */
#define GTM_ATOM4_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA004u)

/** \brief EA004, ATOM4 Channel 0 Control Register in SOMB Mode */
#define GTM_ATOM4_CH0_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA004u)

/** \brief EA004, ATOM4 Channel 0 Control Register in SOMC Mode */
#define GTM_ATOM4_CH0_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA004u)

/** \brief EA004, ATOM4 Channel 0 Control Register in SOMI Mode */
#define GTM_ATOM4_CH0_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA004u)

/** \brief EA004, ATOM4 Channel 0 Control Register in SOMP Mode */
#define GTM_ATOM4_CH0_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA004u)

/** \brief EA004, ATOM4 Channel 0 Control Register in SOMS Mode */
#define GTM_ATOM4_CH0_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA004u)

/** \brief EA008, ATOM4 Channel 0 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA008u)

/** \brief EA00C, ATOM4 Channel 0 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA00Cu)

/** \brief EA010, ATOM4 Channel 0 CCU0 Compare Register */
#define GTM_ATOM4_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA010u)

/** \brief EA014, ATOM4 Channel 0 CCU1 Compare Register */
#define GTM_ATOM4_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA014u)

/** \brief EA018, ATOM4 Channel 0 CCU0 Counter Register */
#define GTM_ATOM4_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA018u)

/** \brief EA01C, ATOM4 Channel 0 Status Register */
#define GTM_ATOM4_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA01Cu)

/** \brief EA020, ATOM4 Channel 0 Interrupt Notification Register */
#define GTM_ATOM4_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA020u)

/** \brief EA024, ATOM4 Channel 0 Interrupt Enable Register */
#define GTM_ATOM4_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA024u)

/** \brief EA028, ATOM4 Channel 0 Software Interrupt Generation Register */
#define GTM_ATOM4_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA028u)

/** \brief EA02C, ATOM4 Channel 0 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA02Cu)

/** \brief EA040, ATOM4 AGC Global Control Register */
#define GTM_ATOM4_AGC_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF01EA040u)

/** \brief EA044, ATOM4 AGC Enable/Disable Control Register */
#define GTM_ATOM4_AGC_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF01EA044u)

/** \brief EA048, ATOM4 AGC Enable/Disable Status Register */
#define GTM_ATOM4_AGC_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF01EA048u)

/** \brief EA04C, ATOM4 AGC Action Time Base Register */
#define GTM_ATOM4_AGC_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF01EA04Cu)

/** \brief EA050, ATOM4 AGC Output Enable Control Register */
#define GTM_ATOM4_AGC_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF01EA050u)

/** \brief EA054, ATOM4 AGC Output Enable Status Register */
#define GTM_ATOM4_AGC_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF01EA054u)

/** \brief EA058, ATOM4 AGC Force Update Control Register */
#define GTM_ATOM4_AGC_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF01EA058u)

/** \brief EA05C, ATOM4 AGC Internal Trigger Control Register */
#define GTM_ATOM4_AGC_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF01EA05Cu)

/** \brief EA080, ATOM4 Channel 1 ARU read address Register */
#define GTM_ATOM4_CH1_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA080u)

/** \brief EA084, ATOM4 Channel 1 Control Register */
#define GTM_ATOM4_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA084u)

/** \brief EA084, ATOM4 Channel 1 Control Register in SOMB Mode */
#define GTM_ATOM4_CH1_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA084u)

/** \brief EA084, ATOM4 Channel 1 Control Register in SOMC Mode */
#define GTM_ATOM4_CH1_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA084u)

/** \brief EA084, ATOM4 Channel 1 Control Register in SOMI Mode */
#define GTM_ATOM4_CH1_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA084u)

/** \brief EA084, ATOM4 Channel 1 Control Register in SOMP Mode */
#define GTM_ATOM4_CH1_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA084u)

/** \brief EA084, ATOM4 Channel 1 Control Register in SOMS Mode */
#define GTM_ATOM4_CH1_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA084u)

/** \brief EA088, ATOM4 Channel 1 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA088u)

/** \brief EA08C, ATOM4 Channel 1 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA08Cu)

/** \brief EA090, ATOM4 Channel 1 CCU0 Compare Register */
#define GTM_ATOM4_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA090u)

/** \brief EA094, ATOM4 Channel 1 CCU1 Compare Register */
#define GTM_ATOM4_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA094u)

/** \brief EA098, ATOM4 Channel 1 CCU0 Counter Register */
#define GTM_ATOM4_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA098u)

/** \brief EA09C, ATOM4 Channel 1 Status Register */
#define GTM_ATOM4_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA09Cu)

/** \brief EA0A0, ATOM4 Channel 1 Interrupt Notification Register */
#define GTM_ATOM4_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA0A0u)

/** \brief EA0A4, ATOM4 Channel 1 Interrupt Enable Register */
#define GTM_ATOM4_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA0A4u)

/** \brief EA0A8, ATOM4 Channel 1 Software Interrupt Generation Register */
#define GTM_ATOM4_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA0A8u)

/** \brief EA0AC, ATOM4 Channel 1 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA0ACu)

/** \brief EA100, ATOM4 Channel 2 ARU read address Register */
#define GTM_ATOM4_CH2_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA100u)

/** \brief EA104, ATOM4 Channel 2 Control Register */
#define GTM_ATOM4_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA104u)

/** \brief EA104, ATOM4 Channel 2 Control Register in SOMB Mode */
#define GTM_ATOM4_CH2_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA104u)

/** \brief EA104, ATOM4 Channel 2 Control Register in SOMC Mode */
#define GTM_ATOM4_CH2_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA104u)

/** \brief EA104, ATOM4 Channel 2 Control Register in SOMI Mode */
#define GTM_ATOM4_CH2_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA104u)

/** \brief EA104, ATOM4 Channel 2 Control Register in SOMP Mode */
#define GTM_ATOM4_CH2_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA104u)

/** \brief EA104, ATOM4 Channel 2 Control Register in SOMS Mode */
#define GTM_ATOM4_CH2_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA104u)

/** \brief EA108, ATOM4 Channel 2 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA108u)

/** \brief EA10C, ATOM4 Channel 2 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA10Cu)

/** \brief EA110, ATOM4 Channel 2 CCU0 Compare Register */
#define GTM_ATOM4_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA110u)

/** \brief EA114, ATOM4 Channel 2 CCU1 Compare Register */
#define GTM_ATOM4_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA114u)

/** \brief EA118, ATOM4 Channel 2 CCU0 Counter Register */
#define GTM_ATOM4_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA118u)

/** \brief EA11C, ATOM4 Channel 2 Status Register */
#define GTM_ATOM4_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA11Cu)

/** \brief EA120, ATOM4 Channel 2 Interrupt Notification Register */
#define GTM_ATOM4_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA120u)

/** \brief EA124, ATOM4 Channel 2 Interrupt Enable Register */
#define GTM_ATOM4_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA124u)

/** \brief EA128, ATOM4 Channel 2 Software Interrupt Generation Register */
#define GTM_ATOM4_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA128u)

/** \brief EA12C, ATOM4 Channel 2 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA12Cu)

/** \brief EA180, ATOM4 Channel 3 ARU read address Register */
#define GTM_ATOM4_CH3_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA180u)

/** \brief EA184, ATOM4 Channel 3 Control Register */
#define GTM_ATOM4_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA184u)

/** \brief EA184, ATOM4 Channel 3 Control Register in SOMB Mode */
#define GTM_ATOM4_CH3_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA184u)

/** \brief EA184, ATOM4 Channel 3 Control Register in SOMC Mode */
#define GTM_ATOM4_CH3_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA184u)

/** \brief EA184, ATOM4 Channel 3 Control Register in SOMI Mode */
#define GTM_ATOM4_CH3_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA184u)

/** \brief EA184, ATOM4 Channel 3 Control Register in SOMP Mode */
#define GTM_ATOM4_CH3_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA184u)

/** \brief EA184, ATOM4 Channel 3 Control Register in SOMS Mode */
#define GTM_ATOM4_CH3_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA184u)

/** \brief EA188, ATOM4 Channel 3 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA188u)

/** \brief EA18C, ATOM4 Channel 3 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA18Cu)

/** \brief EA190, ATOM4 Channel 3 CCU0 Compare Register */
#define GTM_ATOM4_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA190u)

/** \brief EA194, ATOM4 Channel 3 CCU1 Compare Register */
#define GTM_ATOM4_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA194u)

/** \brief EA198, ATOM4 Channel 3 CCU0 Counter Register */
#define GTM_ATOM4_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA198u)

/** \brief EA19C, ATOM4 Channel 3 Status Register */
#define GTM_ATOM4_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA19Cu)

/** \brief EA1A0, ATOM4 Channel 3 Interrupt Notification Register */
#define GTM_ATOM4_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA1A0u)

/** \brief EA1A4, ATOM4 Channel 3 Interrupt Enable Register */
#define GTM_ATOM4_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA1A4u)

/** \brief EA1A8, ATOM4 Channel 3 Software Interrupt Generation Register */
#define GTM_ATOM4_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA1A8u)

/** \brief EA1AC, ATOM4 Channel 3 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA1ACu)

/** \brief EA200, ATOM4 Channel 4 ARU read address Register */
#define GTM_ATOM4_CH4_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA200u)

/** \brief EA204, ATOM4 Channel 4 Control Register */
#define GTM_ATOM4_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA204u)

/** \brief EA204, ATOM4 Channel 4 Control Register in SOMB Mode */
#define GTM_ATOM4_CH4_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA204u)

/** \brief EA204, ATOM4 Channel 4 Control Register in SOMC Mode */
#define GTM_ATOM4_CH4_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA204u)

/** \brief EA204, ATOM4 Channel 4 Control Register in SOMI Mode */
#define GTM_ATOM4_CH4_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA204u)

/** \brief EA204, ATOM4 Channel 4 Control Register in SOMP Mode */
#define GTM_ATOM4_CH4_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA204u)

/** \brief EA204, ATOM4 Channel 4 Control Register in SOMS Mode */
#define GTM_ATOM4_CH4_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA204u)

/** \brief EA208, ATOM4 Channel 4 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA208u)

/** \brief EA20C, ATOM4 Channel 4 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA20Cu)

/** \brief EA210, ATOM4 Channel 4 CCU0 Compare Register */
#define GTM_ATOM4_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA210u)

/** \brief EA214, ATOM4 Channel 4 CCU1 Compare Register */
#define GTM_ATOM4_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA214u)

/** \brief EA218, ATOM4 Channel 4 CCU0 Counter Register */
#define GTM_ATOM4_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA218u)

/** \brief EA21C, ATOM4 Channel 4 Status Register */
#define GTM_ATOM4_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA21Cu)

/** \brief EA220, ATOM4 Channel 4 Interrupt Notification Register */
#define GTM_ATOM4_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA220u)

/** \brief EA224, ATOM4 Channel 4 Interrupt Enable Register */
#define GTM_ATOM4_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA224u)

/** \brief EA228, ATOM4 Channel 4 Software Interrupt Generation Register */
#define GTM_ATOM4_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA228u)

/** \brief EA22C, ATOM4 Channel 4 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA22Cu)

/** \brief EA280, ATOM4 Channel 5 ARU read address Register */
#define GTM_ATOM4_CH5_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA280u)

/** \brief EA284, ATOM4 Channel 5 Control Register */
#define GTM_ATOM4_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA284u)

/** \brief EA284, ATOM4 Channel 5 Control Register in SOMB Mode */
#define GTM_ATOM4_CH5_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA284u)

/** \brief EA284, ATOM4 Channel 5 Control Register in SOMC Mode */
#define GTM_ATOM4_CH5_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA284u)

/** \brief EA284, ATOM4 Channel 5 Control Register in SOMI Mode */
#define GTM_ATOM4_CH5_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA284u)

/** \brief EA284, ATOM4 Channel 5 Control Register in SOMP Mode */
#define GTM_ATOM4_CH5_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA284u)

/** \brief EA284, ATOM4 Channel 5 Control Register in SOMS Mode */
#define GTM_ATOM4_CH5_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA284u)

/** \brief EA288, ATOM4 Channel 5 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA288u)

/** \brief EA28C, ATOM4 Channel 5 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA28Cu)

/** \brief EA290, ATOM4 Channel 5 CCU0 Compare Register */
#define GTM_ATOM4_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA290u)

/** \brief EA294, ATOM4 Channel 5 CCU1 Compare Register */
#define GTM_ATOM4_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA294u)

/** \brief EA298, ATOM4 Channel 5 CCU0 Counter Register */
#define GTM_ATOM4_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA298u)

/** \brief EA29C, ATOM4 Channel 5 Status Register */
#define GTM_ATOM4_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA29Cu)

/** \brief EA2A0, ATOM4 Channel 5 Interrupt Notification Register */
#define GTM_ATOM4_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA2A0u)

/** \brief EA2A4, ATOM4 Channel 5 Interrupt Enable Register */
#define GTM_ATOM4_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA2A4u)

/** \brief EA2A8, ATOM4 Channel 5 Software Interrupt Generation Register */
#define GTM_ATOM4_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA2A8u)

/** \brief EA2AC, ATOM4 Channel 5 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA2ACu)

/** \brief EA300, ATOM4 Channel 6 ARU read address Register */
#define GTM_ATOM4_CH6_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA300u)

/** \brief EA304, ATOM4 Channel 6 Control Register */
#define GTM_ATOM4_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA304u)

/** \brief EA304, ATOM4 Channel 6 Control Register in SOMB Mode */
#define GTM_ATOM4_CH6_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA304u)

/** \brief EA304, ATOM4 Channel 6 Control Register in SOMC Mode */
#define GTM_ATOM4_CH6_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA304u)

/** \brief EA304, ATOM4 Channel 6 Control Register in SOMI Mode */
#define GTM_ATOM4_CH6_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA304u)

/** \brief EA304, ATOM4 Channel 6 Control Register in SOMP Mode */
#define GTM_ATOM4_CH6_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA304u)

/** \brief EA304, ATOM4 Channel 6 Control Register in SOMS Mode */
#define GTM_ATOM4_CH6_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA304u)

/** \brief EA308, ATOM4 Channel 6 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA308u)

/** \brief EA30C, ATOM4 Channel 6 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA30Cu)

/** \brief EA310, ATOM4 Channel 6 CCU0 Compare Register */
#define GTM_ATOM4_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA310u)

/** \brief EA314, ATOM4 Channel 6 CCU1 Compare Register */
#define GTM_ATOM4_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA314u)

/** \brief EA318, ATOM4 Channel 6 CCU0 Counter Register */
#define GTM_ATOM4_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA318u)

/** \brief EA31C, ATOM4 Channel 6 Status Register */
#define GTM_ATOM4_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA31Cu)

/** \brief EA320, ATOM4 Channel 6 Interrupt Notification Register */
#define GTM_ATOM4_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA320u)

/** \brief EA324, ATOM4 Channel 6 Interrupt Enable Register */
#define GTM_ATOM4_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA324u)

/** \brief EA328, ATOM4 Channel 6 Software Interrupt Generation Register */
#define GTM_ATOM4_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA328u)

/** \brief EA32C, ATOM4 Channel 6 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA32Cu)

/** \brief EA380, ATOM4 Channel 7 ARU read address Register */
#define GTM_ATOM4_CH7_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA380u)

/** \brief EA384, ATOM4 Channel 7 Control Register */
#define GTM_ATOM4_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA384u)

/** \brief EA384, ATOM4 Channel 7 Control Register in SOMB Mode */
#define GTM_ATOM4_CH7_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA384u)

/** \brief EA384, ATOM4 Channel 7 Control Register in SOMC Mode */
#define GTM_ATOM4_CH7_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA384u)

/** \brief EA384, ATOM4 Channel 7 Control Register in SOMI Mode */
#define GTM_ATOM4_CH7_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA384u)

/** \brief EA384, ATOM4 Channel 7 Control Register in SOMP Mode */
#define GTM_ATOM4_CH7_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA384u)

/** \brief EA384, ATOM4 Channel 7 Control Register in SOMS Mode */
#define GTM_ATOM4_CH7_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA384u)

/** \brief EA388, ATOM4 Channel 7 CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA388u)

/** \brief EA38C, ATOM4 Channel 7 CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA38Cu)

/** \brief EA390, ATOM4 Channel 7 CCU0 Compare Register */
#define GTM_ATOM4_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA390u)

/** \brief EA394, ATOM4 Channel 7 CCU1 Compare Register */
#define GTM_ATOM4_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA394u)

/** \brief EA398, ATOM4 Channel 7 CCU0 Counter Register */
#define GTM_ATOM4_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA398u)

/** \brief EA39C, ATOM4 Channel 7 Status Register */
#define GTM_ATOM4_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA39Cu)

/** \brief EA3A0, ATOM4 Channel 7 Interrupt Notification Register */
#define GTM_ATOM4_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA3A0u)

/** \brief EA3A4, ATOM4 Channel 7 Interrupt Enable Register */
#define GTM_ATOM4_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA3A4u)

/** \brief EA3A8, ATOM4 Channel 7 Software Interrupt Generation Register */
#define GTM_ATOM4_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA3A8u)

/** \brief EA3AC, ATOM4 Channel 7 Interrupt Mode Configuration Register */
#define GTM_ATOM4_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA3ACu)

/** \brief EA800, ATOM5 Channel 0 ARU read address Register */
#define GTM_ATOM5_CH0_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA800u)

/** \brief EA804, ATOM5 Channel 0 Control Register */
#define GTM_ATOM5_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA804u)

/** \brief EA804, ATOM5 Channel 0 Control Register in SOMB Mode */
#define GTM_ATOM5_CH0_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA804u)

/** \brief EA804, ATOM5 Channel 0 Control Register in SOMC Mode */
#define GTM_ATOM5_CH0_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA804u)

/** \brief EA804, ATOM5 Channel 0 Control Register in SOMI Mode */
#define GTM_ATOM5_CH0_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA804u)

/** \brief EA804, ATOM5 Channel 0 Control Register in SOMP Mode */
#define GTM_ATOM5_CH0_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA804u)

/** \brief EA804, ATOM5 Channel 0 Control Register in SOMS Mode */
#define GTM_ATOM5_CH0_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA804u)

/** \brief EA808, ATOM5 Channel 0 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA808u)

/** \brief EA80C, ATOM5 Channel 0 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA80Cu)

/** \brief EA810, ATOM5 Channel 0 CCU0 Compare Register */
#define GTM_ATOM5_CH0_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA810u)

/** \brief EA814, ATOM5 Channel 0 CCU1 Compare Register */
#define GTM_ATOM5_CH0_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA814u)

/** \brief EA818, ATOM5 Channel 0 CCU0 Counter Register */
#define GTM_ATOM5_CH0_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA818u)

/** \brief EA81C, ATOM5 Channel 0 Status Register */
#define GTM_ATOM5_CH0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA81Cu)

/** \brief EA820, ATOM5 Channel 0 Interrupt Notification Register */
#define GTM_ATOM5_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA820u)

/** \brief EA824, ATOM5 Channel 0 Interrupt Enable Register */
#define GTM_ATOM5_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA824u)

/** \brief EA828, ATOM5 Channel 0 Software Interrupt Generation Register */
#define GTM_ATOM5_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA828u)

/** \brief EA82C, ATOM5 Channel 0 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA82Cu)

/** \brief EA840, ATOM5 AGC Global Control Register */
#define GTM_ATOM5_AGC_GLB_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF01EA840u)

/** \brief EA844, ATOM5 AGC Enable/Disable Control Register */
#define GTM_ATOM5_AGC_ENDIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF01EA844u)

/** \brief EA848, ATOM5 AGC Enable/Disable Status Register */
#define GTM_ATOM5_AGC_ENDIS_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF01EA848u)

/** \brief EA84C, ATOM5 AGC Action Time Base Register */
#define GTM_ATOM5_AGC_ACT_TB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF01EA84Cu)

/** \brief EA850, ATOM5 AGC Output Enable Control Register */
#define GTM_ATOM5_AGC_OUTEN_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF01EA850u)

/** \brief EA854, ATOM5 AGC Output Enable Status Register */
#define GTM_ATOM5_AGC_OUTEN_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF01EA854u)

/** \brief EA858, ATOM5 AGC Force Update Control Register */
#define GTM_ATOM5_AGC_FUPD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF01EA858u)

/** \brief EA85C, ATOM5 AGC Internal Trigger Control Register */
#define GTM_ATOM5_AGC_INT_TRIG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF01EA85Cu)

/** \brief EA880, ATOM5 Channel 1 ARU read address Register */
#define GTM_ATOM5_CH1_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA880u)

/** \brief EA884, ATOM5 Channel 1 Control Register */
#define GTM_ATOM5_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA884u)

/** \brief EA884, ATOM5 Channel 1 Control Register in SOMB Mode */
#define GTM_ATOM5_CH1_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA884u)

/** \brief EA884, ATOM5 Channel 1 Control Register in SOMC Mode */
#define GTM_ATOM5_CH1_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA884u)

/** \brief EA884, ATOM5 Channel 1 Control Register in SOMI Mode */
#define GTM_ATOM5_CH1_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA884u)

/** \brief EA884, ATOM5 Channel 1 Control Register in SOMP Mode */
#define GTM_ATOM5_CH1_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA884u)

/** \brief EA884, ATOM5 Channel 1 Control Register in SOMS Mode */
#define GTM_ATOM5_CH1_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA884u)

/** \brief EA888, ATOM5 Channel 1 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA888u)

/** \brief EA88C, ATOM5 Channel 1 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA88Cu)

/** \brief EA890, ATOM5 Channel 1 CCU0 Compare Register */
#define GTM_ATOM5_CH1_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA890u)

/** \brief EA894, ATOM5 Channel 1 CCU1 Compare Register */
#define GTM_ATOM5_CH1_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA894u)

/** \brief EA898, ATOM5 Channel 1 CCU0 Counter Register */
#define GTM_ATOM5_CH1_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA898u)

/** \brief EA89C, ATOM5 Channel 1 Status Register */
#define GTM_ATOM5_CH1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA89Cu)

/** \brief EA8A0, ATOM5 Channel 1 Interrupt Notification Register */
#define GTM_ATOM5_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA8A0u)

/** \brief EA8A4, ATOM5 Channel 1 Interrupt Enable Register */
#define GTM_ATOM5_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA8A4u)

/** \brief EA8A8, ATOM5 Channel 1 Software Interrupt Generation Register */
#define GTM_ATOM5_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA8A8u)

/** \brief EA8AC, ATOM5 Channel 1 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA8ACu)

/** \brief EA900, ATOM5 Channel 2 ARU read address Register */
#define GTM_ATOM5_CH2_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA900u)

/** \brief EA904, ATOM5 Channel 2 Control Register */
#define GTM_ATOM5_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA904u)

/** \brief EA904, ATOM5 Channel 2 Control Register in SOMB Mode */
#define GTM_ATOM5_CH2_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA904u)

/** \brief EA904, ATOM5 Channel 2 Control Register in SOMC Mode */
#define GTM_ATOM5_CH2_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA904u)

/** \brief EA904, ATOM5 Channel 2 Control Register in SOMI Mode */
#define GTM_ATOM5_CH2_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA904u)

/** \brief EA904, ATOM5 Channel 2 Control Register in SOMP Mode */
#define GTM_ATOM5_CH2_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA904u)

/** \brief EA904, ATOM5 Channel 2 Control Register in SOMS Mode */
#define GTM_ATOM5_CH2_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA904u)

/** \brief EA908, ATOM5 Channel 2 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA908u)

/** \brief EA90C, ATOM5 Channel 2 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA90Cu)

/** \brief EA910, ATOM5 Channel 2 CCU0 Compare Register */
#define GTM_ATOM5_CH2_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA910u)

/** \brief EA914, ATOM5 Channel 2 CCU1 Compare Register */
#define GTM_ATOM5_CH2_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA914u)

/** \brief EA918, ATOM5 Channel 2 CCU0 Counter Register */
#define GTM_ATOM5_CH2_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA918u)

/** \brief EA91C, ATOM5 Channel 2 Status Register */
#define GTM_ATOM5_CH2_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA91Cu)

/** \brief EA920, ATOM5 Channel 2 Interrupt Notification Register */
#define GTM_ATOM5_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA920u)

/** \brief EA924, ATOM5 Channel 2 Interrupt Enable Register */
#define GTM_ATOM5_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA924u)

/** \brief EA928, ATOM5 Channel 2 Software Interrupt Generation Register */
#define GTM_ATOM5_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA928u)

/** \brief EA92C, ATOM5 Channel 2 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA92Cu)

/** \brief EA980, ATOM5 Channel 3 ARU read address Register */
#define GTM_ATOM5_CH3_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EA980u)

/** \brief EA984, ATOM5 Channel 3 Control Register */
#define GTM_ATOM5_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EA984u)

/** \brief EA984, ATOM5 Channel 3 Control Register in SOMB Mode */
#define GTM_ATOM5_CH3_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EA984u)

/** \brief EA984, ATOM5 Channel 3 Control Register in SOMC Mode */
#define GTM_ATOM5_CH3_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EA984u)

/** \brief EA984, ATOM5 Channel 3 Control Register in SOMI Mode */
#define GTM_ATOM5_CH3_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EA984u)

/** \brief EA984, ATOM5 Channel 3 Control Register in SOMP Mode */
#define GTM_ATOM5_CH3_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EA984u)

/** \brief EA984, ATOM5 Channel 3 Control Register in SOMS Mode */
#define GTM_ATOM5_CH3_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EA984u)

/** \brief EA988, ATOM5 Channel 3 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EA988u)

/** \brief EA98C, ATOM5 Channel 3 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EA98Cu)

/** \brief EA990, ATOM5 Channel 3 CCU0 Compare Register */
#define GTM_ATOM5_CH3_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EA990u)

/** \brief EA994, ATOM5 Channel 3 CCU1 Compare Register */
#define GTM_ATOM5_CH3_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EA994u)

/** \brief EA998, ATOM5 Channel 3 CCU0 Counter Register */
#define GTM_ATOM5_CH3_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EA998u)

/** \brief EA99C, ATOM5 Channel 3 Status Register */
#define GTM_ATOM5_CH3_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EA99Cu)

/** \brief EA9A0, ATOM5 Channel 3 Interrupt Notification Register */
#define GTM_ATOM5_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EA9A0u)

/** \brief EA9A4, ATOM5 Channel 3 Interrupt Enable Register */
#define GTM_ATOM5_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EA9A4u)

/** \brief EA9A8, ATOM5 Channel 3 Software Interrupt Generation Register */
#define GTM_ATOM5_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EA9A8u)

/** \brief EA9AC, ATOM5 Channel 3 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EA9ACu)

/** \brief EAA00, ATOM5 Channel 4 ARU read address Register */
#define GTM_ATOM5_CH4_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EAA00u)

/** \brief EAA04, ATOM5 Channel 4 Control Register */
#define GTM_ATOM5_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EAA04u)

/** \brief EAA04, ATOM5 Channel 4 Control Register in SOMB Mode */
#define GTM_ATOM5_CH4_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EAA04u)

/** \brief EAA04, ATOM5 Channel 4 Control Register in SOMC Mode */
#define GTM_ATOM5_CH4_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EAA04u)

/** \brief EAA04, ATOM5 Channel 4 Control Register in SOMI Mode */
#define GTM_ATOM5_CH4_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EAA04u)

/** \brief EAA04, ATOM5 Channel 4 Control Register in SOMP Mode */
#define GTM_ATOM5_CH4_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EAA04u)

/** \brief EAA04, ATOM5 Channel 4 Control Register in SOMS Mode */
#define GTM_ATOM5_CH4_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EAA04u)

/** \brief EAA08, ATOM5 Channel 4 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EAA08u)

/** \brief EAA0C, ATOM5 Channel 4 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EAA0Cu)

/** \brief EAA10, ATOM5 Channel 4 CCU0 Compare Register */
#define GTM_ATOM5_CH4_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EAA10u)

/** \brief EAA14, ATOM5 Channel 4 CCU1 Compare Register */
#define GTM_ATOM5_CH4_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EAA14u)

/** \brief EAA18, ATOM5 Channel 4 CCU0 Counter Register */
#define GTM_ATOM5_CH4_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EAA18u)

/** \brief EAA1C, ATOM5 Channel 4 Status Register */
#define GTM_ATOM5_CH4_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EAA1Cu)

/** \brief EAA20, ATOM5 Channel 4 Interrupt Notification Register */
#define GTM_ATOM5_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EAA20u)

/** \brief EAA24, ATOM5 Channel 4 Interrupt Enable Register */
#define GTM_ATOM5_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EAA24u)

/** \brief EAA28, ATOM5 Channel 4 Software Interrupt Generation Register */
#define GTM_ATOM5_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EAA28u)

/** \brief EAA2C, ATOM5 Channel 4 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EAA2Cu)

/** \brief EAA80, ATOM5 Channel 5 ARU read address Register */
#define GTM_ATOM5_CH5_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EAA80u)

/** \brief EAA84, ATOM5 Channel 5 Control Register */
#define GTM_ATOM5_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EAA84u)

/** \brief EAA84, ATOM5 Channel 5 Control Register in SOMB Mode */
#define GTM_ATOM5_CH5_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EAA84u)

/** \brief EAA84, ATOM5 Channel 5 Control Register in SOMC Mode */
#define GTM_ATOM5_CH5_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EAA84u)

/** \brief EAA84, ATOM5 Channel 5 Control Register in SOMI Mode */
#define GTM_ATOM5_CH5_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EAA84u)

/** \brief EAA84, ATOM5 Channel 5 Control Register in SOMP Mode */
#define GTM_ATOM5_CH5_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EAA84u)

/** \brief EAA84, ATOM5 Channel 5 Control Register in SOMS Mode */
#define GTM_ATOM5_CH5_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EAA84u)

/** \brief EAA88, ATOM5 Channel 5 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EAA88u)

/** \brief EAA8C, ATOM5 Channel 5 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EAA8Cu)

/** \brief EAA90, ATOM5 Channel 5 CCU0 Compare Register */
#define GTM_ATOM5_CH5_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EAA90u)

/** \brief EAA94, ATOM5 Channel 5 CCU1 Compare Register */
#define GTM_ATOM5_CH5_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EAA94u)

/** \brief EAA98, ATOM5 Channel 5 CCU0 Counter Register */
#define GTM_ATOM5_CH5_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EAA98u)

/** \brief EAA9C, ATOM5 Channel 5 Status Register */
#define GTM_ATOM5_CH5_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EAA9Cu)

/** \brief EAAA0, ATOM5 Channel 5 Interrupt Notification Register */
#define GTM_ATOM5_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EAAA0u)

/** \brief EAAA4, ATOM5 Channel 5 Interrupt Enable Register */
#define GTM_ATOM5_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EAAA4u)

/** \brief EAAA8, ATOM5 Channel 5 Software Interrupt Generation Register */
#define GTM_ATOM5_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EAAA8u)

/** \brief EAAAC, ATOM5 Channel 5 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EAAACu)

/** \brief EAB00, ATOM5 Channel 6 ARU read address Register */
#define GTM_ATOM5_CH6_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EAB00u)

/** \brief EAB04, ATOM5 Channel 6 Control Register */
#define GTM_ATOM5_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EAB04u)

/** \brief EAB04, ATOM5 Channel 6 Control Register in SOMB Mode */
#define GTM_ATOM5_CH6_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EAB04u)

/** \brief EAB04, ATOM5 Channel 6 Control Register in SOMC Mode */
#define GTM_ATOM5_CH6_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EAB04u)

/** \brief EAB04, ATOM5 Channel 6 Control Register in SOMI Mode */
#define GTM_ATOM5_CH6_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EAB04u)

/** \brief EAB04, ATOM5 Channel 6 Control Register in SOMP Mode */
#define GTM_ATOM5_CH6_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EAB04u)

/** \brief EAB04, ATOM5 Channel 6 Control Register in SOMS Mode */
#define GTM_ATOM5_CH6_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EAB04u)

/** \brief EAB08, ATOM5 Channel 6 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EAB08u)

/** \brief EAB0C, ATOM5 Channel 6 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EAB0Cu)

/** \brief EAB10, ATOM5 Channel 6 CCU0 Compare Register */
#define GTM_ATOM5_CH6_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EAB10u)

/** \brief EAB14, ATOM5 Channel 6 CCU1 Compare Register */
#define GTM_ATOM5_CH6_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EAB14u)

/** \brief EAB18, ATOM5 Channel 6 CCU0 Counter Register */
#define GTM_ATOM5_CH6_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EAB18u)

/** \brief EAB1C, ATOM5 Channel 6 Status Register */
#define GTM_ATOM5_CH6_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EAB1Cu)

/** \brief EAB20, ATOM5 Channel 6 Interrupt Notification Register */
#define GTM_ATOM5_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EAB20u)

/** \brief EAB24, ATOM5 Channel 6 Interrupt Enable Register */
#define GTM_ATOM5_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EAB24u)

/** \brief EAB28, ATOM5 Channel 6 Software Interrupt Generation Register */
#define GTM_ATOM5_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EAB28u)

/** \brief EAB2C, ATOM5 Channel 6 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EAB2Cu)

/** \brief EAB80, ATOM5 Channel 7 ARU read address Register */
#define GTM_ATOM5_CH7_RDADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF01EAB80u)

/** \brief EAB84, ATOM5 Channel 7 Control Register */
#define GTM_ATOM5_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF01EAB84u)

/** \brief EAB84, ATOM5 Channel 7 Control Register in SOMB Mode */
#define GTM_ATOM5_CH7_SOMB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMB*)0xF01EAB84u)

/** \brief EAB84, ATOM5 Channel 7 Control Register in SOMC Mode */
#define GTM_ATOM5_CH7_SOMC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF01EAB84u)

/** \brief EAB84, ATOM5 Channel 7 Control Register in SOMI Mode */
#define GTM_ATOM5_CH7_SOMI /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF01EAB84u)

/** \brief EAB84, ATOM5 Channel 7 Control Register in SOMP Mode */
#define GTM_ATOM5_CH7_SOMP /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF01EAB84u)

/** \brief EAB84, ATOM5 Channel 7 Control Register in SOMS Mode */
#define GTM_ATOM5_CH7_SOMS /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF01EAB84u)

/** \brief EAB88, ATOM5 Channel 7 CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF01EAB88u)

/** \brief EAB8C, ATOM5 Channel 7 CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF01EAB8Cu)

/** \brief EAB90, ATOM5 Channel 7 CCU0 Compare Register */
#define GTM_ATOM5_CH7_CM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF01EAB90u)

/** \brief EAB94, ATOM5 Channel 7 CCU1 Compare Register */
#define GTM_ATOM5_CH7_CM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF01EAB94u)

/** \brief EAB98, ATOM5 Channel 7 CCU0 Counter Register */
#define GTM_ATOM5_CH7_CN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF01EAB98u)

/** \brief EAB9C, ATOM5 Channel 7 Status Register */
#define GTM_ATOM5_CH7_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF01EAB9Cu)

/** \brief EABA0, ATOM5 Channel 7 Interrupt Notification Register */
#define GTM_ATOM5_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01EABA0u)

/** \brief EABA4, ATOM5 Channel 7 Interrupt Enable Register */
#define GTM_ATOM5_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01EABA4u)

/** \brief EABA8, ATOM5 Channel 7 Software Interrupt Generation Register */
#define GTM_ATOM5_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01EABA8u)

/** \brief EABAC, ATOM5 Channel 7 Interrupt Mode Configuration Register */
#define GTM_ATOM5_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01EABACu)

/** \brief F0000, MCS0 Channel 0 General Purpose Register 0 */
#define GTM_MCS0_CH0_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0000u)

/** \brief F0004, MCS0 Channel 0 General Purpose Register 1 */
#define GTM_MCS0_CH0_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0004u)

/** \brief F0008, MCS0 Channel 0 General Purpose Register 2 */
#define GTM_MCS0_CH0_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0008u)

/** \brief F000C, MCS0 Channel 0 General Purpose Register 3 */
#define GTM_MCS0_CH0_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F000Cu)

/** \brief F0010, MCS0 Channel 0 General Purpose Register 4 */
#define GTM_MCS0_CH0_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0010u)

/** \brief F0014, MCS0 Channel 0 General Purpose Register 5 */
#define GTM_MCS0_CH0_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0014u)

/** \brief F0018, MCS0 Channel 0 General Purpose Register 6 */
#define GTM_MCS0_CH0_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0018u)

/** \brief F001C, MCS0 Channel 0 General Purpose Register 7 */
#define GTM_MCS0_CH0_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F001Cu)

/** \brief F0020, MCS0 Channel 0 Control Register */
#define GTM_MCS0_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F0020u)

/** \brief F0024, MCS0 Channel 0 ARU Control Bit Register */
#define GTM_MCS0_CH0_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F0024u)

/** \brief F0028, MCS0 Clear Trigger Control Register */
#define GTM_MCS0_CH0_CTRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRG*)0xF01F0028u)
/** Alias (User Manual Name) for GTM_MCS0_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS0_CH0_CTRG.
*/
#define GTM_MCS0_CTRG (GTM_MCS0_CH0_CTRG)

/** \brief F002C, MCS0 Set Trigger Control Register */
#define GTM_MCS0_CH0_STRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_STRG*)0xF01F002Cu)
/** Alias (User Manual Name) for GTM_MCS0_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS0_CH0_STRG.
*/
#define GTM_MCS0_STRG (GTM_MCS0_CH0_STRG)

/** \brief F003C, MCS0 Channel 0 Memory High Byte Register */
#define GTM_MCS0_CH0_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F003Cu)

/** \brief F0040, MCS0 Channel 0 Program Counter Register */
#define GTM_MCS0_CH0_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F0040u)

/** \brief F0044, MCS0 Channel 0 Interrupt Notification Register */
#define GTM_MCS0_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F0044u)

/** \brief F0048, MCS0 Channel 0 Interrupt Enable Register */
#define GTM_MCS0_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F0048u)

/** \brief F004C, MCS0 Channel 0 Force Interrupt Register */
#define GTM_MCS0_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F004Cu)

/** \brief F0050, MCS0 Channel 0 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F0050u)

/** \brief F0054, MCS0 Channel 0 Error Interrupt Enable Register */
#define GTM_MCS0_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F0054u)

/** \brief F0060, MCS0 Write Protection Register */
#define GTM_MCS0_REG_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_REG_PROT*)0xF01F0060u)

/** \brief F0064, MCS0 Control and Status Register */
#define GTM_MCS0_CTRL_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CTRL_STAT*)0xF01F0064u)

/** \brief F0068, MCS0 Reset Register */
#define GTM_MCS0_RESET /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_RESET*)0xF01F0068u)

/** \brief F006C, MCS0 Cancel ARU Transfer Instruction Register */
#define GTM_MCS0_CAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CAT*)0xF01F006Cu)

/** \brief F0070, MCS0 Cancel WURM Instruction Register */
#define GTM_MCS0_CWT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CWT*)0xF01F0070u)

/** \brief F007C, MCS0 error register */
#define GTM_MCS0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF01F007Cu)

/** \brief F0080, MCS0 Channel 1 General Purpose Register 0 */
#define GTM_MCS0_CH1_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0080u)

/** \brief F0084, MCS0 Channel 1 General Purpose Register 1 */
#define GTM_MCS0_CH1_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0084u)

/** \brief F0088, MCS0 Channel 1 General Purpose Register 2 */
#define GTM_MCS0_CH1_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0088u)

/** \brief F008C, MCS0 Channel 1 General Purpose Register 3 */
#define GTM_MCS0_CH1_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F008Cu)

/** \brief F0090, MCS0 Channel 1 General Purpose Register 4 */
#define GTM_MCS0_CH1_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0090u)

/** \brief F0094, MCS0 Channel 1 General Purpose Register 5 */
#define GTM_MCS0_CH1_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0094u)

/** \brief F0098, MCS0 Channel 1 General Purpose Register 6 */
#define GTM_MCS0_CH1_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0098u)

/** \brief F009C, MCS0 Channel 1 General Purpose Register 7 */
#define GTM_MCS0_CH1_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F009Cu)

/** \brief F00A0, MCS0 Channel 1 Control Register */
#define GTM_MCS0_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F00A0u)

/** \brief F00A4, MCS0 Channel 1 ARU Control Bit Register */
#define GTM_MCS0_CH1_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F00A4u)

/** \brief F00BC, MCS0 Channel 1 Memory High Byte Register */
#define GTM_MCS0_CH1_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F00BCu)

/** \brief F00C0, MCS0 Channel 1 Program Counter Register */
#define GTM_MCS0_CH1_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F00C0u)

/** \brief F00C4, MCS0 Channel 1 Interrupt Notification Register */
#define GTM_MCS0_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F00C4u)

/** \brief F00C8, MCS0 Channel 1 Interrupt Enable Register */
#define GTM_MCS0_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F00C8u)

/** \brief F00CC, MCS0 Channel 1 Force Interrupt Register */
#define GTM_MCS0_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F00CCu)

/** \brief F00D0, MCS0 Channel 1 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F00D0u)

/** \brief F00D4, MCS0 Channel 1 Error Interrupt Enable Register */
#define GTM_MCS0_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F00D4u)

/** \brief F0100, MCS0 Channel 2 General Purpose Register 0 */
#define GTM_MCS0_CH2_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0100u)

/** \brief F0104, MCS0 Channel 2 General Purpose Register 1 */
#define GTM_MCS0_CH2_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0104u)

/** \brief F0108, MCS0 Channel 2 General Purpose Register 2 */
#define GTM_MCS0_CH2_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0108u)

/** \brief F010C, MCS0 Channel 2 General Purpose Register 3 */
#define GTM_MCS0_CH2_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F010Cu)

/** \brief F0110, MCS0 Channel 2 General Purpose Register 4 */
#define GTM_MCS0_CH2_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0110u)

/** \brief F0114, MCS0 Channel 2 General Purpose Register 5 */
#define GTM_MCS0_CH2_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0114u)

/** \brief F0118, MCS0 Channel 2 General Purpose Register 6 */
#define GTM_MCS0_CH2_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0118u)

/** \brief F011C, MCS0 Channel 2 General Purpose Register 7 */
#define GTM_MCS0_CH2_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F011Cu)

/** \brief F0120, MCS0 Channel 2 Control Register */
#define GTM_MCS0_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F0120u)

/** \brief F0124, MCS0 Channel 2 ARU Control Bit Register */
#define GTM_MCS0_CH2_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F0124u)

/** \brief F013C, MCS0 Channel 2 Memory High Byte Register */
#define GTM_MCS0_CH2_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F013Cu)

/** \brief F0140, MCS0 Channel 2 Program Counter Register */
#define GTM_MCS0_CH2_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F0140u)

/** \brief F0144, MCS0 Channel 2 Interrupt Notification Register */
#define GTM_MCS0_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F0144u)

/** \brief F0148, MCS0 Channel 2 Interrupt Enable Register */
#define GTM_MCS0_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F0148u)

/** \brief F014C, MCS0 Channel 2 Force Interrupt Register */
#define GTM_MCS0_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F014Cu)

/** \brief F0150, MCS0 Channel 2 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F0150u)

/** \brief F0154, MCS0 Channel 2 Error Interrupt Enable Register */
#define GTM_MCS0_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F0154u)

/** \brief F0180, MCS0 Channel 3 General Purpose Register 0 */
#define GTM_MCS0_CH3_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0180u)

/** \brief F0184, MCS0 Channel 3 General Purpose Register 1 */
#define GTM_MCS0_CH3_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0184u)

/** \brief F0188, MCS0 Channel 3 General Purpose Register 2 */
#define GTM_MCS0_CH3_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0188u)

/** \brief F018C, MCS0 Channel 3 General Purpose Register 3 */
#define GTM_MCS0_CH3_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F018Cu)

/** \brief F0190, MCS0 Channel 3 General Purpose Register 4 */
#define GTM_MCS0_CH3_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0190u)

/** \brief F0194, MCS0 Channel 3 General Purpose Register 5 */
#define GTM_MCS0_CH3_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0194u)

/** \brief F0198, MCS0 Channel 3 General Purpose Register 6 */
#define GTM_MCS0_CH3_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0198u)

/** \brief F019C, MCS0 Channel 3 General Purpose Register 7 */
#define GTM_MCS0_CH3_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F019Cu)

/** \brief F01A0, MCS0 Channel 3 Control Register */
#define GTM_MCS0_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F01A0u)

/** \brief F01A4, MCS0 Channel 3 ARU Control Bit Register */
#define GTM_MCS0_CH3_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F01A4u)

/** \brief F01BC, MCS0 Channel 3 Memory High Byte Register */
#define GTM_MCS0_CH3_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F01BCu)

/** \brief F01C0, MCS0 Channel 3 Program Counter Register */
#define GTM_MCS0_CH3_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F01C0u)

/** \brief F01C4, MCS0 Channel 3 Interrupt Notification Register */
#define GTM_MCS0_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F01C4u)

/** \brief F01C8, MCS0 Channel 3 Interrupt Enable Register */
#define GTM_MCS0_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F01C8u)

/** \brief F01CC, MCS0 Channel 3 Force Interrupt Register */
#define GTM_MCS0_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F01CCu)

/** \brief F01D0, MCS0 Channel 3 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F01D0u)

/** \brief F01D4, MCS0 Channel 3 Error Interrupt Enable Register */
#define GTM_MCS0_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F01D4u)

/** \brief F0200, MCS0 Channel 4 General Purpose Register 0 */
#define GTM_MCS0_CH4_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0200u)

/** \brief F0204, MCS0 Channel 4 General Purpose Register 1 */
#define GTM_MCS0_CH4_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0204u)

/** \brief F0208, MCS0 Channel 4 General Purpose Register 2 */
#define GTM_MCS0_CH4_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0208u)

/** \brief F020C, MCS0 Channel 4 General Purpose Register 3 */
#define GTM_MCS0_CH4_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F020Cu)

/** \brief F0210, MCS0 Channel 4 General Purpose Register 4 */
#define GTM_MCS0_CH4_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0210u)

/** \brief F0214, MCS0 Channel 4 General Purpose Register 5 */
#define GTM_MCS0_CH4_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0214u)

/** \brief F0218, MCS0 Channel 4 General Purpose Register 6 */
#define GTM_MCS0_CH4_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0218u)

/** \brief F021C, MCS0 Channel 4 General Purpose Register 7 */
#define GTM_MCS0_CH4_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F021Cu)

/** \brief F0220, MCS0 Channel 4 Control Register */
#define GTM_MCS0_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F0220u)

/** \brief F0224, MCS0 Channel 4 ARU Control Bit Register */
#define GTM_MCS0_CH4_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F0224u)

/** \brief F023C, MCS0 Channel 4 Memory High Byte Register */
#define GTM_MCS0_CH4_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F023Cu)

/** \brief F0240, MCS0 Channel 4 Program Counter Register */
#define GTM_MCS0_CH4_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F0240u)

/** \brief F0244, MCS0 Channel 4 Interrupt Notification Register */
#define GTM_MCS0_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F0244u)

/** \brief F0248, MCS0 Channel 4 Interrupt Enable Register */
#define GTM_MCS0_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F0248u)

/** \brief F024C, MCS0 Channel 4 Force Interrupt Register */
#define GTM_MCS0_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F024Cu)

/** \brief F0250, MCS0 Channel 4 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F0250u)

/** \brief F0254, MCS0 Channel 4 Error Interrupt Enable Register */
#define GTM_MCS0_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F0254u)

/** \brief F0280, MCS0 Channel 5 General Purpose Register 0 */
#define GTM_MCS0_CH5_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0280u)

/** \brief F0284, MCS0 Channel 5 General Purpose Register 1 */
#define GTM_MCS0_CH5_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0284u)

/** \brief F0288, MCS0 Channel 5 General Purpose Register 2 */
#define GTM_MCS0_CH5_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0288u)

/** \brief F028C, MCS0 Channel 5 General Purpose Register 3 */
#define GTM_MCS0_CH5_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F028Cu)

/** \brief F0290, MCS0 Channel 5 General Purpose Register 4 */
#define GTM_MCS0_CH5_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0290u)

/** \brief F0294, MCS0 Channel 5 General Purpose Register 5 */
#define GTM_MCS0_CH5_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0294u)

/** \brief F0298, MCS0 Channel 5 General Purpose Register 6 */
#define GTM_MCS0_CH5_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0298u)

/** \brief F029C, MCS0 Channel 5 General Purpose Register 7 */
#define GTM_MCS0_CH5_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F029Cu)

/** \brief F02A0, MCS0 Channel 5 Control Register */
#define GTM_MCS0_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F02A0u)

/** \brief F02A4, MCS0 Channel 5 ARU Control Bit Register */
#define GTM_MCS0_CH5_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F02A4u)

/** \brief F02BC, MCS0 Channel 5 Memory High Byte Register */
#define GTM_MCS0_CH5_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F02BCu)

/** \brief F02C0, MCS0 Channel 5 Program Counter Register */
#define GTM_MCS0_CH5_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F02C0u)

/** \brief F02C4, MCS0 Channel 5 Interrupt Notification Register */
#define GTM_MCS0_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F02C4u)

/** \brief F02C8, MCS0 Channel 5 Interrupt Enable Register */
#define GTM_MCS0_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F02C8u)

/** \brief F02CC, MCS0 Channel 5 Force Interrupt Register */
#define GTM_MCS0_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F02CCu)

/** \brief F02D0, MCS0 Channel 5 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F02D0u)

/** \brief F02D4, MCS0 Channel 5 Error Interrupt Enable Register */
#define GTM_MCS0_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F02D4u)

/** \brief F0300, MCS0 Channel 6 General Purpose Register 0 */
#define GTM_MCS0_CH6_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0300u)

/** \brief F0304, MCS0 Channel 6 General Purpose Register 1 */
#define GTM_MCS0_CH6_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0304u)

/** \brief F0308, MCS0 Channel 6 General Purpose Register 2 */
#define GTM_MCS0_CH6_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0308u)

/** \brief F030C, MCS0 Channel 6 General Purpose Register 3 */
#define GTM_MCS0_CH6_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F030Cu)

/** \brief F0310, MCS0 Channel 6 General Purpose Register 4 */
#define GTM_MCS0_CH6_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0310u)

/** \brief F0314, MCS0 Channel 6 General Purpose Register 5 */
#define GTM_MCS0_CH6_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0314u)

/** \brief F0318, MCS0 Channel 6 General Purpose Register 6 */
#define GTM_MCS0_CH6_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0318u)

/** \brief F031C, MCS0 Channel 6 General Purpose Register 7 */
#define GTM_MCS0_CH6_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F031Cu)

/** \brief F0320, MCS0 Channel 6 Control Register */
#define GTM_MCS0_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F0320u)

/** \brief F0324, MCS0 Channel 6 ARU Control Bit Register */
#define GTM_MCS0_CH6_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F0324u)

/** \brief F033C, MCS0 Channel 6 Memory High Byte Register */
#define GTM_MCS0_CH6_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F033Cu)

/** \brief F0340, MCS0 Channel 6 Program Counter Register */
#define GTM_MCS0_CH6_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F0340u)

/** \brief F0344, MCS0 Channel 6 Interrupt Notification Register */
#define GTM_MCS0_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F0344u)

/** \brief F0348, MCS0 Channel 6 Interrupt Enable Register */
#define GTM_MCS0_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F0348u)

/** \brief F034C, MCS0 Channel 6 Force Interrupt Register */
#define GTM_MCS0_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F034Cu)

/** \brief F0350, MCS0 Channel 6 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F0350u)

/** \brief F0354, MCS0 Channel 6 Error Interrupt Enable Register */
#define GTM_MCS0_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F0354u)

/** \brief F0380, MCS0 Channel 7 General Purpose Register 0 */
#define GTM_MCS0_CH7_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0380u)

/** \brief F0384, MCS0 Channel 7 General Purpose Register 1 */
#define GTM_MCS0_CH7_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0384u)

/** \brief F0388, MCS0 Channel 7 General Purpose Register 2 */
#define GTM_MCS0_CH7_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0388u)

/** \brief F038C, MCS0 Channel 7 General Purpose Register 3 */
#define GTM_MCS0_CH7_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F038Cu)

/** \brief F0390, MCS0 Channel 7 General Purpose Register 4 */
#define GTM_MCS0_CH7_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0390u)

/** \brief F0394, MCS0 Channel 7 General Purpose Register 5 */
#define GTM_MCS0_CH7_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0394u)

/** \brief F0398, MCS0 Channel 7 General Purpose Register 6 */
#define GTM_MCS0_CH7_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F0398u)

/** \brief F039C, MCS0 Channel 7 General Purpose Register 7 */
#define GTM_MCS0_CH7_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F039Cu)

/** \brief F03A0, MCS0 Channel 7 Control Register */
#define GTM_MCS0_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F03A0u)

/** \brief F03A4, MCS0 Channel 7 ARU Control Bit Register */
#define GTM_MCS0_CH7_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F03A4u)

/** \brief F03BC, MCS0 Channel 7 Memory High Byte Register */
#define GTM_MCS0_CH7_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F03BCu)

/** \brief F03C0, MCS0 Channel 7 Program Counter Register */
#define GTM_MCS0_CH7_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F03C0u)

/** \brief F03C4, MCS0 Channel 7 Interrupt Notification Register */
#define GTM_MCS0_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F03C4u)

/** \brief F03C8, MCS0 Channel 7 Interrupt Enable Register */
#define GTM_MCS0_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F03C8u)

/** \brief F03CC, MCS0 Channel 7 Force Interrupt Register */
#define GTM_MCS0_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F03CCu)

/** \brief F03D0, MCS0 Channel 7 Interrupt Mode Configuration Register */
#define GTM_MCS0_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F03D0u)

/** \brief F03D4, MCS0 Channel 7 Error Interrupt Enable Register */
#define GTM_MCS0_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F03D4u)

/** \brief F1000, MCS1 Channel 0 General Purpose Register 0 */
#define GTM_MCS1_CH0_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1000u)

/** \brief F1004, MCS1 Channel 0 General Purpose Register 1 */
#define GTM_MCS1_CH0_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1004u)

/** \brief F1008, MCS1 Channel 0 General Purpose Register 2 */
#define GTM_MCS1_CH0_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1008u)

/** \brief F100C, MCS1 Channel 0 General Purpose Register 3 */
#define GTM_MCS1_CH0_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F100Cu)

/** \brief F1010, MCS1 Channel 0 General Purpose Register 4 */
#define GTM_MCS1_CH0_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1010u)

/** \brief F1014, MCS1 Channel 0 General Purpose Register 5 */
#define GTM_MCS1_CH0_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1014u)

/** \brief F1018, MCS1 Channel 0 General Purpose Register 6 */
#define GTM_MCS1_CH0_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1018u)

/** \brief F101C, MCS1 Channel 0 General Purpose Register 7 */
#define GTM_MCS1_CH0_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F101Cu)

/** \brief F1020, MCS1 Channel 0 Control Register */
#define GTM_MCS1_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F1020u)

/** \brief F1024, MCS1 Channel 0 ARU Control Bit Register */
#define GTM_MCS1_CH0_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F1024u)

/** \brief F1028, MCS1 Clear Trigger Control Register */
#define GTM_MCS1_CH0_CTRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRG*)0xF01F1028u)
/** Alias (User Manual Name) for GTM_MCS1_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS1_CH0_CTRG.
*/
#define GTM_MCS1_CTRG (GTM_MCS1_CH0_CTRG)

/** \brief F102C, MCS1 Set Trigger Control Register */
#define GTM_MCS1_CH0_STRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_STRG*)0xF01F102Cu)
/** Alias (User Manual Name) for GTM_MCS1_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS1_CH0_STRG.
*/
#define GTM_MCS1_STRG (GTM_MCS1_CH0_STRG)

/** \brief F103C, MCS1 Channel 0 Memory High Byte Register */
#define GTM_MCS1_CH0_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F103Cu)

/** \brief F1040, MCS1 Channel 0 Program Counter Register */
#define GTM_MCS1_CH0_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F1040u)

/** \brief F1044, MCS1 Channel 0 Interrupt Notification Register */
#define GTM_MCS1_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F1044u)

/** \brief F1048, MCS1 Channel 0 Interrupt Enable Register */
#define GTM_MCS1_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F1048u)

/** \brief F104C, MCS1 Channel 0 Force Interrupt Register */
#define GTM_MCS1_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F104Cu)

/** \brief F1050, MCS1 Channel 0 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F1050u)

/** \brief F1054, MCS1 Channel 0 Error Interrupt Enable Register */
#define GTM_MCS1_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F1054u)

/** \brief F1060, MCS1 Write Protection Register */
#define GTM_MCS1_REG_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_REG_PROT*)0xF01F1060u)

/** \brief F1064, MCS1 Control and Status Register */
#define GTM_MCS1_CTRL_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CTRL_STAT*)0xF01F1064u)

/** \brief F1068, MCS1 Reset Register */
#define GTM_MCS1_RESET /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_RESET*)0xF01F1068u)

/** \brief F106C, MCS1 Cancel ARU Transfer Instruction Register */
#define GTM_MCS1_CAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CAT*)0xF01F106Cu)

/** \brief F1070, MCS1 Cancel WURM Instruction Register */
#define GTM_MCS1_CWT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CWT*)0xF01F1070u)

/** \brief F107C, MCS1 error register */
#define GTM_MCS1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF01F107Cu)

/** \brief F1080, MCS1 Channel 1 General Purpose Register 0 */
#define GTM_MCS1_CH1_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1080u)

/** \brief F1084, MCS1 Channel 1 General Purpose Register 1 */
#define GTM_MCS1_CH1_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1084u)

/** \brief F1088, MCS1 Channel 1 General Purpose Register 2 */
#define GTM_MCS1_CH1_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1088u)

/** \brief F108C, MCS1 Channel 1 General Purpose Register 3 */
#define GTM_MCS1_CH1_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F108Cu)

/** \brief F1090, MCS1 Channel 1 General Purpose Register 4 */
#define GTM_MCS1_CH1_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1090u)

/** \brief F1094, MCS1 Channel 1 General Purpose Register 5 */
#define GTM_MCS1_CH1_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1094u)

/** \brief F1098, MCS1 Channel 1 General Purpose Register 6 */
#define GTM_MCS1_CH1_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1098u)

/** \brief F109C, MCS1 Channel 1 General Purpose Register 7 */
#define GTM_MCS1_CH1_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F109Cu)

/** \brief F10A0, MCS1 Channel 1 Control Register */
#define GTM_MCS1_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F10A0u)

/** \brief F10A4, MCS1 Channel 1 ARU Control Bit Register */
#define GTM_MCS1_CH1_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F10A4u)

/** \brief F10BC, MCS1 Channel 1 Memory High Byte Register */
#define GTM_MCS1_CH1_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F10BCu)

/** \brief F10C0, MCS1 Channel 1 Program Counter Register */
#define GTM_MCS1_CH1_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F10C0u)

/** \brief F10C4, MCS1 Channel 1 Interrupt Notification Register */
#define GTM_MCS1_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F10C4u)

/** \brief F10C8, MCS1 Channel 1 Interrupt Enable Register */
#define GTM_MCS1_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F10C8u)

/** \brief F10CC, MCS1 Channel 1 Force Interrupt Register */
#define GTM_MCS1_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F10CCu)

/** \brief F10D0, MCS1 Channel 1 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F10D0u)

/** \brief F10D4, MCS1 Channel 1 Error Interrupt Enable Register */
#define GTM_MCS1_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F10D4u)

/** \brief F1100, MCS1 Channel 2 General Purpose Register 0 */
#define GTM_MCS1_CH2_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1100u)

/** \brief F1104, MCS1 Channel 2 General Purpose Register 1 */
#define GTM_MCS1_CH2_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1104u)

/** \brief F1108, MCS1 Channel 2 General Purpose Register 2 */
#define GTM_MCS1_CH2_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1108u)

/** \brief F110C, MCS1 Channel 2 General Purpose Register 3 */
#define GTM_MCS1_CH2_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F110Cu)

/** \brief F1110, MCS1 Channel 2 General Purpose Register 4 */
#define GTM_MCS1_CH2_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1110u)

/** \brief F1114, MCS1 Channel 2 General Purpose Register 5 */
#define GTM_MCS1_CH2_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1114u)

/** \brief F1118, MCS1 Channel 2 General Purpose Register 6 */
#define GTM_MCS1_CH2_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1118u)

/** \brief F111C, MCS1 Channel 2 General Purpose Register 7 */
#define GTM_MCS1_CH2_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F111Cu)

/** \brief F1120, MCS1 Channel 2 Control Register */
#define GTM_MCS1_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F1120u)

/** \brief F1124, MCS1 Channel 2 ARU Control Bit Register */
#define GTM_MCS1_CH2_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F1124u)

/** \brief F113C, MCS1 Channel 2 Memory High Byte Register */
#define GTM_MCS1_CH2_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F113Cu)

/** \brief F1140, MCS1 Channel 2 Program Counter Register */
#define GTM_MCS1_CH2_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F1140u)

/** \brief F1144, MCS1 Channel 2 Interrupt Notification Register */
#define GTM_MCS1_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F1144u)

/** \brief F1148, MCS1 Channel 2 Interrupt Enable Register */
#define GTM_MCS1_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F1148u)

/** \brief F114C, MCS1 Channel 2 Force Interrupt Register */
#define GTM_MCS1_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F114Cu)

/** \brief F1150, MCS1 Channel 2 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F1150u)

/** \brief F1154, MCS1 Channel 2 Error Interrupt Enable Register */
#define GTM_MCS1_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F1154u)

/** \brief F1180, MCS1 Channel 3 General Purpose Register 0 */
#define GTM_MCS1_CH3_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1180u)

/** \brief F1184, MCS1 Channel 3 General Purpose Register 1 */
#define GTM_MCS1_CH3_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1184u)

/** \brief F1188, MCS1 Channel 3 General Purpose Register 2 */
#define GTM_MCS1_CH3_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1188u)

/** \brief F118C, MCS1 Channel 3 General Purpose Register 3 */
#define GTM_MCS1_CH3_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F118Cu)

/** \brief F1190, MCS1 Channel 3 General Purpose Register 4 */
#define GTM_MCS1_CH3_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1190u)

/** \brief F1194, MCS1 Channel 3 General Purpose Register 5 */
#define GTM_MCS1_CH3_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1194u)

/** \brief F1198, MCS1 Channel 3 General Purpose Register 6 */
#define GTM_MCS1_CH3_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1198u)

/** \brief F119C, MCS1 Channel 3 General Purpose Register 7 */
#define GTM_MCS1_CH3_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F119Cu)

/** \brief F11A0, MCS1 Channel 3 Control Register */
#define GTM_MCS1_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F11A0u)

/** \brief F11A4, MCS1 Channel 3 ARU Control Bit Register */
#define GTM_MCS1_CH3_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F11A4u)

/** \brief F11BC, MCS1 Channel 3 Memory High Byte Register */
#define GTM_MCS1_CH3_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F11BCu)

/** \brief F11C0, MCS1 Channel 3 Program Counter Register */
#define GTM_MCS1_CH3_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F11C0u)

/** \brief F11C4, MCS1 Channel 3 Interrupt Notification Register */
#define GTM_MCS1_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F11C4u)

/** \brief F11C8, MCS1 Channel 3 Interrupt Enable Register */
#define GTM_MCS1_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F11C8u)

/** \brief F11CC, MCS1 Channel 3 Force Interrupt Register */
#define GTM_MCS1_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F11CCu)

/** \brief F11D0, MCS1 Channel 3 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F11D0u)

/** \brief F11D4, MCS1 Channel 3 Error Interrupt Enable Register */
#define GTM_MCS1_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F11D4u)

/** \brief F1200, MCS1 Channel 4 General Purpose Register 0 */
#define GTM_MCS1_CH4_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1200u)

/** \brief F1204, MCS1 Channel 4 General Purpose Register 1 */
#define GTM_MCS1_CH4_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1204u)

/** \brief F1208, MCS1 Channel 4 General Purpose Register 2 */
#define GTM_MCS1_CH4_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1208u)

/** \brief F120C, MCS1 Channel 4 General Purpose Register 3 */
#define GTM_MCS1_CH4_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F120Cu)

/** \brief F1210, MCS1 Channel 4 General Purpose Register 4 */
#define GTM_MCS1_CH4_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1210u)

/** \brief F1214, MCS1 Channel 4 General Purpose Register 5 */
#define GTM_MCS1_CH4_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1214u)

/** \brief F1218, MCS1 Channel 4 General Purpose Register 6 */
#define GTM_MCS1_CH4_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1218u)

/** \brief F121C, MCS1 Channel 4 General Purpose Register 7 */
#define GTM_MCS1_CH4_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F121Cu)

/** \brief F1220, MCS1 Channel 4 Control Register */
#define GTM_MCS1_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F1220u)

/** \brief F1224, MCS1 Channel 4 ARU Control Bit Register */
#define GTM_MCS1_CH4_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F1224u)

/** \brief F123C, MCS1 Channel 4 Memory High Byte Register */
#define GTM_MCS1_CH4_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F123Cu)

/** \brief F1240, MCS1 Channel 4 Program Counter Register */
#define GTM_MCS1_CH4_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F1240u)

/** \brief F1244, MCS1 Channel 4 Interrupt Notification Register */
#define GTM_MCS1_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F1244u)

/** \brief F1248, MCS1 Channel 4 Interrupt Enable Register */
#define GTM_MCS1_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F1248u)

/** \brief F124C, MCS1 Channel 4 Force Interrupt Register */
#define GTM_MCS1_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F124Cu)

/** \brief F1250, MCS1 Channel 4 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F1250u)

/** \brief F1254, MCS1 Channel 4 Error Interrupt Enable Register */
#define GTM_MCS1_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F1254u)

/** \brief F1280, MCS1 Channel 5 General Purpose Register 0 */
#define GTM_MCS1_CH5_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1280u)

/** \brief F1284, MCS1 Channel 5 General Purpose Register 1 */
#define GTM_MCS1_CH5_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1284u)

/** \brief F1288, MCS1 Channel 5 General Purpose Register 2 */
#define GTM_MCS1_CH5_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1288u)

/** \brief F128C, MCS1 Channel 5 General Purpose Register 3 */
#define GTM_MCS1_CH5_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F128Cu)

/** \brief F1290, MCS1 Channel 5 General Purpose Register 4 */
#define GTM_MCS1_CH5_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1290u)

/** \brief F1294, MCS1 Channel 5 General Purpose Register 5 */
#define GTM_MCS1_CH5_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1294u)

/** \brief F1298, MCS1 Channel 5 General Purpose Register 6 */
#define GTM_MCS1_CH5_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1298u)

/** \brief F129C, MCS1 Channel 5 General Purpose Register 7 */
#define GTM_MCS1_CH5_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F129Cu)

/** \brief F12A0, MCS1 Channel 5 Control Register */
#define GTM_MCS1_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F12A0u)

/** \brief F12A4, MCS1 Channel 5 ARU Control Bit Register */
#define GTM_MCS1_CH5_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F12A4u)

/** \brief F12BC, MCS1 Channel 5 Memory High Byte Register */
#define GTM_MCS1_CH5_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F12BCu)

/** \brief F12C0, MCS1 Channel 5 Program Counter Register */
#define GTM_MCS1_CH5_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F12C0u)

/** \brief F12C4, MCS1 Channel 5 Interrupt Notification Register */
#define GTM_MCS1_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F12C4u)

/** \brief F12C8, MCS1 Channel 5 Interrupt Enable Register */
#define GTM_MCS1_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F12C8u)

/** \brief F12CC, MCS1 Channel 5 Force Interrupt Register */
#define GTM_MCS1_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F12CCu)

/** \brief F12D0, MCS1 Channel 5 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F12D0u)

/** \brief F12D4, MCS1 Channel 5 Error Interrupt Enable Register */
#define GTM_MCS1_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F12D4u)

/** \brief F1300, MCS1 Channel 6 General Purpose Register 0 */
#define GTM_MCS1_CH6_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1300u)

/** \brief F1304, MCS1 Channel 6 General Purpose Register 1 */
#define GTM_MCS1_CH6_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1304u)

/** \brief F1308, MCS1 Channel 6 General Purpose Register 2 */
#define GTM_MCS1_CH6_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1308u)

/** \brief F130C, MCS1 Channel 6 General Purpose Register 3 */
#define GTM_MCS1_CH6_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F130Cu)

/** \brief F1310, MCS1 Channel 6 General Purpose Register 4 */
#define GTM_MCS1_CH6_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1310u)

/** \brief F1314, MCS1 Channel 6 General Purpose Register 5 */
#define GTM_MCS1_CH6_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1314u)

/** \brief F1318, MCS1 Channel 6 General Purpose Register 6 */
#define GTM_MCS1_CH6_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1318u)

/** \brief F131C, MCS1 Channel 6 General Purpose Register 7 */
#define GTM_MCS1_CH6_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F131Cu)

/** \brief F1320, MCS1 Channel 6 Control Register */
#define GTM_MCS1_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F1320u)

/** \brief F1324, MCS1 Channel 6 ARU Control Bit Register */
#define GTM_MCS1_CH6_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F1324u)

/** \brief F133C, MCS1 Channel 6 Memory High Byte Register */
#define GTM_MCS1_CH6_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F133Cu)

/** \brief F1340, MCS1 Channel 6 Program Counter Register */
#define GTM_MCS1_CH6_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F1340u)

/** \brief F1344, MCS1 Channel 6 Interrupt Notification Register */
#define GTM_MCS1_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F1344u)

/** \brief F1348, MCS1 Channel 6 Interrupt Enable Register */
#define GTM_MCS1_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F1348u)

/** \brief F134C, MCS1 Channel 6 Force Interrupt Register */
#define GTM_MCS1_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F134Cu)

/** \brief F1350, MCS1 Channel 6 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F1350u)

/** \brief F1354, MCS1 Channel 6 Error Interrupt Enable Register */
#define GTM_MCS1_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F1354u)

/** \brief F1380, MCS1 Channel 7 General Purpose Register 0 */
#define GTM_MCS1_CH7_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1380u)

/** \brief F1384, MCS1 Channel 7 General Purpose Register 1 */
#define GTM_MCS1_CH7_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1384u)

/** \brief F1388, MCS1 Channel 7 General Purpose Register 2 */
#define GTM_MCS1_CH7_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1388u)

/** \brief F138C, MCS1 Channel 7 General Purpose Register 3 */
#define GTM_MCS1_CH7_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F138Cu)

/** \brief F1390, MCS1 Channel 7 General Purpose Register 4 */
#define GTM_MCS1_CH7_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1390u)

/** \brief F1394, MCS1 Channel 7 General Purpose Register 5 */
#define GTM_MCS1_CH7_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1394u)

/** \brief F1398, MCS1 Channel 7 General Purpose Register 6 */
#define GTM_MCS1_CH7_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F1398u)

/** \brief F139C, MCS1 Channel 7 General Purpose Register 7 */
#define GTM_MCS1_CH7_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F139Cu)

/** \brief F13A0, MCS1 Channel 7 Control Register */
#define GTM_MCS1_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F13A0u)

/** \brief F13A4, MCS1 Channel 7 ARU Control Bit Register */
#define GTM_MCS1_CH7_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F13A4u)

/** \brief F13BC, MCS1 Channel 7 Memory High Byte Register */
#define GTM_MCS1_CH7_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F13BCu)

/** \brief F13C0, MCS1 Channel 7 Program Counter Register */
#define GTM_MCS1_CH7_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F13C0u)

/** \brief F13C4, MCS1 Channel 7 Interrupt Notification Register */
#define GTM_MCS1_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F13C4u)

/** \brief F13C8, MCS1 Channel 7 Interrupt Enable Register */
#define GTM_MCS1_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F13C8u)

/** \brief F13CC, MCS1 Channel 7 Force Interrupt Register */
#define GTM_MCS1_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F13CCu)

/** \brief F13D0, MCS1 Channel 7 Interrupt Mode Configuration Register */
#define GTM_MCS1_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F13D0u)

/** \brief F13D4, MCS1 Channel 7 Error Interrupt Enable Register */
#define GTM_MCS1_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F13D4u)

/** \brief F2000, MCS2 Channel 0 General Purpose Register 0 */
#define GTM_MCS2_CH0_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2000u)

/** \brief F2004, MCS2 Channel 0 General Purpose Register 1 */
#define GTM_MCS2_CH0_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2004u)

/** \brief F2008, MCS2 Channel 0 General Purpose Register 2 */
#define GTM_MCS2_CH0_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2008u)

/** \brief F200C, MCS2 Channel 0 General Purpose Register 3 */
#define GTM_MCS2_CH0_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F200Cu)

/** \brief F2010, MCS2 Channel 0 General Purpose Register 4 */
#define GTM_MCS2_CH0_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2010u)

/** \brief F2014, MCS2 Channel 0 General Purpose Register 5 */
#define GTM_MCS2_CH0_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2014u)

/** \brief F2018, MCS2 Channel 0 General Purpose Register 6 */
#define GTM_MCS2_CH0_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2018u)

/** \brief F201C, MCS2 Channel 0 General Purpose Register 7 */
#define GTM_MCS2_CH0_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F201Cu)

/** \brief F2020, MCS2 Channel 0 Control Register */
#define GTM_MCS2_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F2020u)

/** \brief F2024, MCS2 Channel 0 ARU Control Bit Register */
#define GTM_MCS2_CH0_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F2024u)

/** \brief F2028, MCS2 Clear Trigger Control Register */
#define GTM_MCS2_CH0_CTRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRG*)0xF01F2028u)
/** Alias (User Manual Name) for GTM_MCS2_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS2_CH0_CTRG.
*/
#define GTM_MCS2_CTRG (GTM_MCS2_CH0_CTRG)

/** \brief F202C, MCS2 Set Trigger Control Register */
#define GTM_MCS2_CH0_STRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_STRG*)0xF01F202Cu)
/** Alias (User Manual Name) for GTM_MCS2_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS2_CH0_STRG.
*/
#define GTM_MCS2_STRG (GTM_MCS2_CH0_STRG)

/** \brief F203C, MCS2 Channel 0 Memory High Byte Register */
#define GTM_MCS2_CH0_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F203Cu)

/** \brief F2040, MCS2 Channel 0 Program Counter Register */
#define GTM_MCS2_CH0_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F2040u)

/** \brief F2044, MCS2 Channel 0 Interrupt Notification Register */
#define GTM_MCS2_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F2044u)

/** \brief F2048, MCS2 Channel 0 Interrupt Enable Register */
#define GTM_MCS2_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F2048u)

/** \brief F204C, MCS2 Channel 0 Force Interrupt Register */
#define GTM_MCS2_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F204Cu)

/** \brief F2050, MCS2 Channel 0 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F2050u)

/** \brief F2054, MCS2 Channel 0 Error Interrupt Enable Register */
#define GTM_MCS2_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F2054u)

/** \brief F2060, MCS2 Write Protection Register */
#define GTM_MCS2_REG_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_REG_PROT*)0xF01F2060u)

/** \brief F2064, MCS2 Control and Status Register */
#define GTM_MCS2_CTRL_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CTRL_STAT*)0xF01F2064u)

/** \brief F2068, MCS2 Reset Register */
#define GTM_MCS2_RESET /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_RESET*)0xF01F2068u)

/** \brief F206C, MCS2 Cancel ARU Transfer Instruction Register */
#define GTM_MCS2_CAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CAT*)0xF01F206Cu)

/** \brief F2070, MCS2 Cancel WURM Instruction Register */
#define GTM_MCS2_CWT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CWT*)0xF01F2070u)

/** \brief F207C, MCS2 error register */
#define GTM_MCS2_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF01F207Cu)

/** \brief F2080, MCS2 Channel 1 General Purpose Register 0 */
#define GTM_MCS2_CH1_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2080u)

/** \brief F2084, MCS2 Channel 1 General Purpose Register 1 */
#define GTM_MCS2_CH1_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2084u)

/** \brief F2088, MCS2 Channel 1 General Purpose Register 2 */
#define GTM_MCS2_CH1_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2088u)

/** \brief F208C, MCS2 Channel 1 General Purpose Register 3 */
#define GTM_MCS2_CH1_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F208Cu)

/** \brief F2090, MCS2 Channel 1 General Purpose Register 4 */
#define GTM_MCS2_CH1_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2090u)

/** \brief F2094, MCS2 Channel 1 General Purpose Register 5 */
#define GTM_MCS2_CH1_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2094u)

/** \brief F2098, MCS2 Channel 1 General Purpose Register 6 */
#define GTM_MCS2_CH1_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2098u)

/** \brief F209C, MCS2 Channel 1 General Purpose Register 7 */
#define GTM_MCS2_CH1_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F209Cu)

/** \brief F20A0, MCS2 Channel 1 Control Register */
#define GTM_MCS2_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F20A0u)

/** \brief F20A4, MCS2 Channel 1 ARU Control Bit Register */
#define GTM_MCS2_CH1_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F20A4u)

/** \brief F20BC, MCS2 Channel 1 Memory High Byte Register */
#define GTM_MCS2_CH1_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F20BCu)

/** \brief F20C0, MCS2 Channel 1 Program Counter Register */
#define GTM_MCS2_CH1_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F20C0u)

/** \brief F20C4, MCS2 Channel 1 Interrupt Notification Register */
#define GTM_MCS2_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F20C4u)

/** \brief F20C8, MCS2 Channel 1 Interrupt Enable Register */
#define GTM_MCS2_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F20C8u)

/** \brief F20CC, MCS2 Channel 1 Force Interrupt Register */
#define GTM_MCS2_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F20CCu)

/** \brief F20D0, MCS2 Channel 1 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F20D0u)

/** \brief F20D4, MCS2 Channel 1 Error Interrupt Enable Register */
#define GTM_MCS2_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F20D4u)

/** \brief F2100, MCS2 Channel 2 General Purpose Register 0 */
#define GTM_MCS2_CH2_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2100u)

/** \brief F2104, MCS2 Channel 2 General Purpose Register 1 */
#define GTM_MCS2_CH2_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2104u)

/** \brief F2108, MCS2 Channel 2 General Purpose Register 2 */
#define GTM_MCS2_CH2_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2108u)

/** \brief F210C, MCS2 Channel 2 General Purpose Register 3 */
#define GTM_MCS2_CH2_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F210Cu)

/** \brief F2110, MCS2 Channel 2 General Purpose Register 4 */
#define GTM_MCS2_CH2_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2110u)

/** \brief F2114, MCS2 Channel 2 General Purpose Register 5 */
#define GTM_MCS2_CH2_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2114u)

/** \brief F2118, MCS2 Channel 2 General Purpose Register 6 */
#define GTM_MCS2_CH2_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2118u)

/** \brief F211C, MCS2 Channel 2 General Purpose Register 7 */
#define GTM_MCS2_CH2_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F211Cu)

/** \brief F2120, MCS2 Channel 2 Control Register */
#define GTM_MCS2_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F2120u)

/** \brief F2124, MCS2 Channel 2 ARU Control Bit Register */
#define GTM_MCS2_CH2_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F2124u)

/** \brief F213C, MCS2 Channel 2 Memory High Byte Register */
#define GTM_MCS2_CH2_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F213Cu)

/** \brief F2140, MCS2 Channel 2 Program Counter Register */
#define GTM_MCS2_CH2_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F2140u)

/** \brief F2144, MCS2 Channel 2 Interrupt Notification Register */
#define GTM_MCS2_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F2144u)

/** \brief F2148, MCS2 Channel 2 Interrupt Enable Register */
#define GTM_MCS2_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F2148u)

/** \brief F214C, MCS2 Channel 2 Force Interrupt Register */
#define GTM_MCS2_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F214Cu)

/** \brief F2150, MCS2 Channel 2 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F2150u)

/** \brief F2154, MCS2 Channel 2 Error Interrupt Enable Register */
#define GTM_MCS2_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F2154u)

/** \brief F2180, MCS2 Channel 3 General Purpose Register 0 */
#define GTM_MCS2_CH3_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2180u)

/** \brief F2184, MCS2 Channel 3 General Purpose Register 1 */
#define GTM_MCS2_CH3_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2184u)

/** \brief F2188, MCS2 Channel 3 General Purpose Register 2 */
#define GTM_MCS2_CH3_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2188u)

/** \brief F218C, MCS2 Channel 3 General Purpose Register 3 */
#define GTM_MCS2_CH3_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F218Cu)

/** \brief F2190, MCS2 Channel 3 General Purpose Register 4 */
#define GTM_MCS2_CH3_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2190u)

/** \brief F2194, MCS2 Channel 3 General Purpose Register 5 */
#define GTM_MCS2_CH3_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2194u)

/** \brief F2198, MCS2 Channel 3 General Purpose Register 6 */
#define GTM_MCS2_CH3_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2198u)

/** \brief F219C, MCS2 Channel 3 General Purpose Register 7 */
#define GTM_MCS2_CH3_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F219Cu)

/** \brief F21A0, MCS2 Channel 3 Control Register */
#define GTM_MCS2_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F21A0u)

/** \brief F21A4, MCS2 Channel 3 ARU Control Bit Register */
#define GTM_MCS2_CH3_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F21A4u)

/** \brief F21BC, MCS2 Channel 3 Memory High Byte Register */
#define GTM_MCS2_CH3_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F21BCu)

/** \brief F21C0, MCS2 Channel 3 Program Counter Register */
#define GTM_MCS2_CH3_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F21C0u)

/** \brief F21C4, MCS2 Channel 3 Interrupt Notification Register */
#define GTM_MCS2_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F21C4u)

/** \brief F21C8, MCS2 Channel 3 Interrupt Enable Register */
#define GTM_MCS2_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F21C8u)

/** \brief F21CC, MCS2 Channel 3 Force Interrupt Register */
#define GTM_MCS2_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F21CCu)

/** \brief F21D0, MCS2 Channel 3 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F21D0u)

/** \brief F21D4, MCS2 Channel 3 Error Interrupt Enable Register */
#define GTM_MCS2_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F21D4u)

/** \brief F2200, MCS2 Channel 4 General Purpose Register 0 */
#define GTM_MCS2_CH4_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2200u)

/** \brief F2204, MCS2 Channel 4 General Purpose Register 1 */
#define GTM_MCS2_CH4_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2204u)

/** \brief F2208, MCS2 Channel 4 General Purpose Register 2 */
#define GTM_MCS2_CH4_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2208u)

/** \brief F220C, MCS2 Channel 4 General Purpose Register 3 */
#define GTM_MCS2_CH4_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F220Cu)

/** \brief F2210, MCS2 Channel 4 General Purpose Register 4 */
#define GTM_MCS2_CH4_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2210u)

/** \brief F2214, MCS2 Channel 4 General Purpose Register 5 */
#define GTM_MCS2_CH4_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2214u)

/** \brief F2218, MCS2 Channel 4 General Purpose Register 6 */
#define GTM_MCS2_CH4_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2218u)

/** \brief F221C, MCS2 Channel 4 General Purpose Register 7 */
#define GTM_MCS2_CH4_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F221Cu)

/** \brief F2220, MCS2 Channel 4 Control Register */
#define GTM_MCS2_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F2220u)

/** \brief F2224, MCS2 Channel 4 ARU Control Bit Register */
#define GTM_MCS2_CH4_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F2224u)

/** \brief F223C, MCS2 Channel 4 Memory High Byte Register */
#define GTM_MCS2_CH4_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F223Cu)

/** \brief F2240, MCS2 Channel 4 Program Counter Register */
#define GTM_MCS2_CH4_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F2240u)

/** \brief F2244, MCS2 Channel 4 Interrupt Notification Register */
#define GTM_MCS2_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F2244u)

/** \brief F2248, MCS2 Channel 4 Interrupt Enable Register */
#define GTM_MCS2_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F2248u)

/** \brief F224C, MCS2 Channel 4 Force Interrupt Register */
#define GTM_MCS2_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F224Cu)

/** \brief F2250, MCS2 Channel 4 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F2250u)

/** \brief F2254, MCS2 Channel 4 Error Interrupt Enable Register */
#define GTM_MCS2_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F2254u)

/** \brief F2280, MCS2 Channel 5 General Purpose Register 0 */
#define GTM_MCS2_CH5_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2280u)

/** \brief F2284, MCS2 Channel 5 General Purpose Register 1 */
#define GTM_MCS2_CH5_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2284u)

/** \brief F2288, MCS2 Channel 5 General Purpose Register 2 */
#define GTM_MCS2_CH5_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2288u)

/** \brief F228C, MCS2 Channel 5 General Purpose Register 3 */
#define GTM_MCS2_CH5_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F228Cu)

/** \brief F2290, MCS2 Channel 5 General Purpose Register 4 */
#define GTM_MCS2_CH5_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2290u)

/** \brief F2294, MCS2 Channel 5 General Purpose Register 5 */
#define GTM_MCS2_CH5_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2294u)

/** \brief F2298, MCS2 Channel 5 General Purpose Register 6 */
#define GTM_MCS2_CH5_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2298u)

/** \brief F229C, MCS2 Channel 5 General Purpose Register 7 */
#define GTM_MCS2_CH5_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F229Cu)

/** \brief F22A0, MCS2 Channel 5 Control Register */
#define GTM_MCS2_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F22A0u)

/** \brief F22A4, MCS2 Channel 5 ARU Control Bit Register */
#define GTM_MCS2_CH5_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F22A4u)

/** \brief F22BC, MCS2 Channel 5 Memory High Byte Register */
#define GTM_MCS2_CH5_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F22BCu)

/** \brief F22C0, MCS2 Channel 5 Program Counter Register */
#define GTM_MCS2_CH5_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F22C0u)

/** \brief F22C4, MCS2 Channel 5 Interrupt Notification Register */
#define GTM_MCS2_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F22C4u)

/** \brief F22C8, MCS2 Channel 5 Interrupt Enable Register */
#define GTM_MCS2_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F22C8u)

/** \brief F22CC, MCS2 Channel 5 Force Interrupt Register */
#define GTM_MCS2_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F22CCu)

/** \brief F22D0, MCS2 Channel 5 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F22D0u)

/** \brief F22D4, MCS2 Channel 5 Error Interrupt Enable Register */
#define GTM_MCS2_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F22D4u)

/** \brief F2300, MCS2 Channel 6 General Purpose Register 0 */
#define GTM_MCS2_CH6_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2300u)

/** \brief F2304, MCS2 Channel 6 General Purpose Register 1 */
#define GTM_MCS2_CH6_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2304u)

/** \brief F2308, MCS2 Channel 6 General Purpose Register 2 */
#define GTM_MCS2_CH6_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2308u)

/** \brief F230C, MCS2 Channel 6 General Purpose Register 3 */
#define GTM_MCS2_CH6_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F230Cu)

/** \brief F2310, MCS2 Channel 6 General Purpose Register 4 */
#define GTM_MCS2_CH6_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2310u)

/** \brief F2314, MCS2 Channel 6 General Purpose Register 5 */
#define GTM_MCS2_CH6_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2314u)

/** \brief F2318, MCS2 Channel 6 General Purpose Register 6 */
#define GTM_MCS2_CH6_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2318u)

/** \brief F231C, MCS2 Channel 6 General Purpose Register 7 */
#define GTM_MCS2_CH6_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F231Cu)

/** \brief F2320, MCS2 Channel 6 Control Register */
#define GTM_MCS2_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F2320u)

/** \brief F2324, MCS2 Channel 6 ARU Control Bit Register */
#define GTM_MCS2_CH6_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F2324u)

/** \brief F233C, MCS2 Channel 6 Memory High Byte Register */
#define GTM_MCS2_CH6_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F233Cu)

/** \brief F2340, MCS2 Channel 6 Program Counter Register */
#define GTM_MCS2_CH6_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F2340u)

/** \brief F2344, MCS2 Channel 6 Interrupt Notification Register */
#define GTM_MCS2_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F2344u)

/** \brief F2348, MCS2 Channel 6 Interrupt Enable Register */
#define GTM_MCS2_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F2348u)

/** \brief F234C, MCS2 Channel 6 Force Interrupt Register */
#define GTM_MCS2_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F234Cu)

/** \brief F2350, MCS2 Channel 6 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F2350u)

/** \brief F2354, MCS2 Channel 6 Error Interrupt Enable Register */
#define GTM_MCS2_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F2354u)

/** \brief F2380, MCS2 Channel 7 General Purpose Register 0 */
#define GTM_MCS2_CH7_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2380u)

/** \brief F2384, MCS2 Channel 7 General Purpose Register 1 */
#define GTM_MCS2_CH7_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2384u)

/** \brief F2388, MCS2 Channel 7 General Purpose Register 2 */
#define GTM_MCS2_CH7_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2388u)

/** \brief F238C, MCS2 Channel 7 General Purpose Register 3 */
#define GTM_MCS2_CH7_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F238Cu)

/** \brief F2390, MCS2 Channel 7 General Purpose Register 4 */
#define GTM_MCS2_CH7_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2390u)

/** \brief F2394, MCS2 Channel 7 General Purpose Register 5 */
#define GTM_MCS2_CH7_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2394u)

/** \brief F2398, MCS2 Channel 7 General Purpose Register 6 */
#define GTM_MCS2_CH7_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F2398u)

/** \brief F239C, MCS2 Channel 7 General Purpose Register 7 */
#define GTM_MCS2_CH7_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F239Cu)

/** \brief F23A0, MCS2 Channel 7 Control Register */
#define GTM_MCS2_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F23A0u)

/** \brief F23A4, MCS2 Channel 7 ARU Control Bit Register */
#define GTM_MCS2_CH7_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F23A4u)

/** \brief F23BC, MCS2 Channel 7 Memory High Byte Register */
#define GTM_MCS2_CH7_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F23BCu)

/** \brief F23C0, MCS2 Channel 7 Program Counter Register */
#define GTM_MCS2_CH7_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F23C0u)

/** \brief F23C4, MCS2 Channel 7 Interrupt Notification Register */
#define GTM_MCS2_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F23C4u)

/** \brief F23C8, MCS2 Channel 7 Interrupt Enable Register */
#define GTM_MCS2_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F23C8u)

/** \brief F23CC, MCS2 Channel 7 Force Interrupt Register */
#define GTM_MCS2_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F23CCu)

/** \brief F23D0, MCS2 Channel 7 Interrupt Mode Configuration Register */
#define GTM_MCS2_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F23D0u)

/** \brief F23D4, MCS2 Channel 7 Error Interrupt Enable Register */
#define GTM_MCS2_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F23D4u)

/** \brief F3000, MCS3 Channel 0 General Purpose Register 0 */
#define GTM_MCS3_CH0_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3000u)

/** \brief F3004, MCS3 Channel 0 General Purpose Register 1 */
#define GTM_MCS3_CH0_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3004u)

/** \brief F3008, MCS3 Channel 0 General Purpose Register 2 */
#define GTM_MCS3_CH0_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3008u)

/** \brief F300C, MCS3 Channel 0 General Purpose Register 3 */
#define GTM_MCS3_CH0_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F300Cu)

/** \brief F3010, MCS3 Channel 0 General Purpose Register 4 */
#define GTM_MCS3_CH0_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3010u)

/** \brief F3014, MCS3 Channel 0 General Purpose Register 5 */
#define GTM_MCS3_CH0_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3014u)

/** \brief F3018, MCS3 Channel 0 General Purpose Register 6 */
#define GTM_MCS3_CH0_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3018u)

/** \brief F301C, MCS3 Channel 0 General Purpose Register 7 */
#define GTM_MCS3_CH0_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F301Cu)

/** \brief F3020, MCS3 Channel 0 Control Register */
#define GTM_MCS3_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F3020u)

/** \brief F3024, MCS3 Channel 0 ARU Control Bit Register */
#define GTM_MCS3_CH0_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F3024u)

/** \brief F3028, MCS3 Clear Trigger Control Register */
#define GTM_MCS3_CH0_CTRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRG*)0xF01F3028u)
/** Alias (User Manual Name) for GTM_MCS3_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS3_CH0_CTRG.
*/
#define GTM_MCS3_CTRG (GTM_MCS3_CH0_CTRG)

/** \brief F302C, MCS3 Set Trigger Control Register */
#define GTM_MCS3_CH0_STRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_STRG*)0xF01F302Cu)
/** Alias (User Manual Name) for GTM_MCS3_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS3_CH0_STRG.
*/
#define GTM_MCS3_STRG (GTM_MCS3_CH0_STRG)

/** \brief F303C, MCS3 Channel 0 Memory High Byte Register */
#define GTM_MCS3_CH0_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F303Cu)

/** \brief F3040, MCS3 Channel 0 Program Counter Register */
#define GTM_MCS3_CH0_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F3040u)

/** \brief F3044, MCS3 Channel 0 Interrupt Notification Register */
#define GTM_MCS3_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F3044u)

/** \brief F3048, MCS3 Channel 0 Interrupt Enable Register */
#define GTM_MCS3_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F3048u)

/** \brief F304C, MCS3 Channel 0 Force Interrupt Register */
#define GTM_MCS3_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F304Cu)

/** \brief F3050, MCS3 Channel 0 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F3050u)

/** \brief F3054, MCS3 Channel 0 Error Interrupt Enable Register */
#define GTM_MCS3_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F3054u)

/** \brief F3060, MCS3 Write Protection Register */
#define GTM_MCS3_REG_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_REG_PROT*)0xF01F3060u)

/** \brief F3064, MCS3 Control and Status Register */
#define GTM_MCS3_CTRL_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CTRL_STAT*)0xF01F3064u)

/** \brief F3068, MCS3 Reset Register */
#define GTM_MCS3_RESET /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_RESET*)0xF01F3068u)

/** \brief F306C, MCS3 Cancel ARU Transfer Instruction Register */
#define GTM_MCS3_CAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CAT*)0xF01F306Cu)

/** \brief F3070, MCS3 Cancel WURM Instruction Register */
#define GTM_MCS3_CWT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CWT*)0xF01F3070u)

/** \brief F307C, MCS3 error register */
#define GTM_MCS3_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF01F307Cu)

/** \brief F3080, MCS3 Channel 1 General Purpose Register 0 */
#define GTM_MCS3_CH1_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3080u)

/** \brief F3084, MCS3 Channel 1 General Purpose Register 1 */
#define GTM_MCS3_CH1_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3084u)

/** \brief F3088, MCS3 Channel 1 General Purpose Register 2 */
#define GTM_MCS3_CH1_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3088u)

/** \brief F308C, MCS3 Channel 1 General Purpose Register 3 */
#define GTM_MCS3_CH1_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F308Cu)

/** \brief F3090, MCS3 Channel 1 General Purpose Register 4 */
#define GTM_MCS3_CH1_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3090u)

/** \brief F3094, MCS3 Channel 1 General Purpose Register 5 */
#define GTM_MCS3_CH1_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3094u)

/** \brief F3098, MCS3 Channel 1 General Purpose Register 6 */
#define GTM_MCS3_CH1_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3098u)

/** \brief F309C, MCS3 Channel 1 General Purpose Register 7 */
#define GTM_MCS3_CH1_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F309Cu)

/** \brief F30A0, MCS3 Channel 1 Control Register */
#define GTM_MCS3_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F30A0u)

/** \brief F30A4, MCS3 Channel 1 ARU Control Bit Register */
#define GTM_MCS3_CH1_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F30A4u)

/** \brief F30BC, MCS3 Channel 1 Memory High Byte Register */
#define GTM_MCS3_CH1_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F30BCu)

/** \brief F30C0, MCS3 Channel 1 Program Counter Register */
#define GTM_MCS3_CH1_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F30C0u)

/** \brief F30C4, MCS3 Channel 1 Interrupt Notification Register */
#define GTM_MCS3_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F30C4u)

/** \brief F30C8, MCS3 Channel 1 Interrupt Enable Register */
#define GTM_MCS3_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F30C8u)

/** \brief F30CC, MCS3 Channel 1 Force Interrupt Register */
#define GTM_MCS3_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F30CCu)

/** \brief F30D0, MCS3 Channel 1 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F30D0u)

/** \brief F30D4, MCS3 Channel 1 Error Interrupt Enable Register */
#define GTM_MCS3_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F30D4u)

/** \brief F3100, MCS3 Channel 2 General Purpose Register 0 */
#define GTM_MCS3_CH2_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3100u)

/** \brief F3104, MCS3 Channel 2 General Purpose Register 1 */
#define GTM_MCS3_CH2_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3104u)

/** \brief F3108, MCS3 Channel 2 General Purpose Register 2 */
#define GTM_MCS3_CH2_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3108u)

/** \brief F310C, MCS3 Channel 2 General Purpose Register 3 */
#define GTM_MCS3_CH2_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F310Cu)

/** \brief F3110, MCS3 Channel 2 General Purpose Register 4 */
#define GTM_MCS3_CH2_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3110u)

/** \brief F3114, MCS3 Channel 2 General Purpose Register 5 */
#define GTM_MCS3_CH2_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3114u)

/** \brief F3118, MCS3 Channel 2 General Purpose Register 6 */
#define GTM_MCS3_CH2_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3118u)

/** \brief F311C, MCS3 Channel 2 General Purpose Register 7 */
#define GTM_MCS3_CH2_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F311Cu)

/** \brief F3120, MCS3 Channel 2 Control Register */
#define GTM_MCS3_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F3120u)

/** \brief F3124, MCS3 Channel 2 ARU Control Bit Register */
#define GTM_MCS3_CH2_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F3124u)

/** \brief F313C, MCS3 Channel 2 Memory High Byte Register */
#define GTM_MCS3_CH2_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F313Cu)

/** \brief F3140, MCS3 Channel 2 Program Counter Register */
#define GTM_MCS3_CH2_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F3140u)

/** \brief F3144, MCS3 Channel 2 Interrupt Notification Register */
#define GTM_MCS3_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F3144u)

/** \brief F3148, MCS3 Channel 2 Interrupt Enable Register */
#define GTM_MCS3_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F3148u)

/** \brief F314C, MCS3 Channel 2 Force Interrupt Register */
#define GTM_MCS3_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F314Cu)

/** \brief F3150, MCS3 Channel 2 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F3150u)

/** \brief F3154, MCS3 Channel 2 Error Interrupt Enable Register */
#define GTM_MCS3_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F3154u)

/** \brief F3180, MCS3 Channel 3 General Purpose Register 0 */
#define GTM_MCS3_CH3_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3180u)

/** \brief F3184, MCS3 Channel 3 General Purpose Register 1 */
#define GTM_MCS3_CH3_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3184u)

/** \brief F3188, MCS3 Channel 3 General Purpose Register 2 */
#define GTM_MCS3_CH3_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3188u)

/** \brief F318C, MCS3 Channel 3 General Purpose Register 3 */
#define GTM_MCS3_CH3_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F318Cu)

/** \brief F3190, MCS3 Channel 3 General Purpose Register 4 */
#define GTM_MCS3_CH3_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3190u)

/** \brief F3194, MCS3 Channel 3 General Purpose Register 5 */
#define GTM_MCS3_CH3_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3194u)

/** \brief F3198, MCS3 Channel 3 General Purpose Register 6 */
#define GTM_MCS3_CH3_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3198u)

/** \brief F319C, MCS3 Channel 3 General Purpose Register 7 */
#define GTM_MCS3_CH3_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F319Cu)

/** \brief F31A0, MCS3 Channel 3 Control Register */
#define GTM_MCS3_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F31A0u)

/** \brief F31A4, MCS3 Channel 3 ARU Control Bit Register */
#define GTM_MCS3_CH3_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F31A4u)

/** \brief F31BC, MCS3 Channel 3 Memory High Byte Register */
#define GTM_MCS3_CH3_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F31BCu)

/** \brief F31C0, MCS3 Channel 3 Program Counter Register */
#define GTM_MCS3_CH3_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F31C0u)

/** \brief F31C4, MCS3 Channel 3 Interrupt Notification Register */
#define GTM_MCS3_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F31C4u)

/** \brief F31C8, MCS3 Channel 3 Interrupt Enable Register */
#define GTM_MCS3_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F31C8u)

/** \brief F31CC, MCS3 Channel 3 Force Interrupt Register */
#define GTM_MCS3_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F31CCu)

/** \brief F31D0, MCS3 Channel 3 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F31D0u)

/** \brief F31D4, MCS3 Channel 3 Error Interrupt Enable Register */
#define GTM_MCS3_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F31D4u)

/** \brief F3200, MCS3 Channel 4 General Purpose Register 0 */
#define GTM_MCS3_CH4_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3200u)

/** \brief F3204, MCS3 Channel 4 General Purpose Register 1 */
#define GTM_MCS3_CH4_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3204u)

/** \brief F3208, MCS3 Channel 4 General Purpose Register 2 */
#define GTM_MCS3_CH4_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3208u)

/** \brief F320C, MCS3 Channel 4 General Purpose Register 3 */
#define GTM_MCS3_CH4_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F320Cu)

/** \brief F3210, MCS3 Channel 4 General Purpose Register 4 */
#define GTM_MCS3_CH4_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3210u)

/** \brief F3214, MCS3 Channel 4 General Purpose Register 5 */
#define GTM_MCS3_CH4_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3214u)

/** \brief F3218, MCS3 Channel 4 General Purpose Register 6 */
#define GTM_MCS3_CH4_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3218u)

/** \brief F321C, MCS3 Channel 4 General Purpose Register 7 */
#define GTM_MCS3_CH4_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F321Cu)

/** \brief F3220, MCS3 Channel 4 Control Register */
#define GTM_MCS3_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F3220u)

/** \brief F3224, MCS3 Channel 4 ARU Control Bit Register */
#define GTM_MCS3_CH4_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F3224u)

/** \brief F323C, MCS3 Channel 4 Memory High Byte Register */
#define GTM_MCS3_CH4_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F323Cu)

/** \brief F3240, MCS3 Channel 4 Program Counter Register */
#define GTM_MCS3_CH4_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F3240u)

/** \brief F3244, MCS3 Channel 4 Interrupt Notification Register */
#define GTM_MCS3_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F3244u)

/** \brief F3248, MCS3 Channel 4 Interrupt Enable Register */
#define GTM_MCS3_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F3248u)

/** \brief F324C, MCS3 Channel 4 Force Interrupt Register */
#define GTM_MCS3_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F324Cu)

/** \brief F3250, MCS3 Channel 4 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F3250u)

/** \brief F3254, MCS3 Channel 4 Error Interrupt Enable Register */
#define GTM_MCS3_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F3254u)

/** \brief F3280, MCS3 Channel 5 General Purpose Register 0 */
#define GTM_MCS3_CH5_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3280u)

/** \brief F3284, MCS3 Channel 5 General Purpose Register 1 */
#define GTM_MCS3_CH5_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3284u)

/** \brief F3288, MCS3 Channel 5 General Purpose Register 2 */
#define GTM_MCS3_CH5_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3288u)

/** \brief F328C, MCS3 Channel 5 General Purpose Register 3 */
#define GTM_MCS3_CH5_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F328Cu)

/** \brief F3290, MCS3 Channel 5 General Purpose Register 4 */
#define GTM_MCS3_CH5_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3290u)

/** \brief F3294, MCS3 Channel 5 General Purpose Register 5 */
#define GTM_MCS3_CH5_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3294u)

/** \brief F3298, MCS3 Channel 5 General Purpose Register 6 */
#define GTM_MCS3_CH5_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3298u)

/** \brief F329C, MCS3 Channel 5 General Purpose Register 7 */
#define GTM_MCS3_CH5_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F329Cu)

/** \brief F32A0, MCS3 Channel 5 Control Register */
#define GTM_MCS3_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F32A0u)

/** \brief F32A4, MCS3 Channel 5 ARU Control Bit Register */
#define GTM_MCS3_CH5_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F32A4u)

/** \brief F32BC, MCS3 Channel 5 Memory High Byte Register */
#define GTM_MCS3_CH5_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F32BCu)

/** \brief F32C0, MCS3 Channel 5 Program Counter Register */
#define GTM_MCS3_CH5_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F32C0u)

/** \brief F32C4, MCS3 Channel 5 Interrupt Notification Register */
#define GTM_MCS3_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F32C4u)

/** \brief F32C8, MCS3 Channel 5 Interrupt Enable Register */
#define GTM_MCS3_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F32C8u)

/** \brief F32CC, MCS3 Channel 5 Force Interrupt Register */
#define GTM_MCS3_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F32CCu)

/** \brief F32D0, MCS3 Channel 5 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F32D0u)

/** \brief F32D4, MCS3 Channel 5 Error Interrupt Enable Register */
#define GTM_MCS3_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F32D4u)

/** \brief F3300, MCS3 Channel 6 General Purpose Register 0 */
#define GTM_MCS3_CH6_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3300u)

/** \brief F3304, MCS3 Channel 6 General Purpose Register 1 */
#define GTM_MCS3_CH6_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3304u)

/** \brief F3308, MCS3 Channel 6 General Purpose Register 2 */
#define GTM_MCS3_CH6_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3308u)

/** \brief F330C, MCS3 Channel 6 General Purpose Register 3 */
#define GTM_MCS3_CH6_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F330Cu)

/** \brief F3310, MCS3 Channel 6 General Purpose Register 4 */
#define GTM_MCS3_CH6_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3310u)

/** \brief F3314, MCS3 Channel 6 General Purpose Register 5 */
#define GTM_MCS3_CH6_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3314u)

/** \brief F3318, MCS3 Channel 6 General Purpose Register 6 */
#define GTM_MCS3_CH6_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3318u)

/** \brief F331C, MCS3 Channel 6 General Purpose Register 7 */
#define GTM_MCS3_CH6_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F331Cu)

/** \brief F3320, MCS3 Channel 6 Control Register */
#define GTM_MCS3_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F3320u)

/** \brief F3324, MCS3 Channel 6 ARU Control Bit Register */
#define GTM_MCS3_CH6_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F3324u)

/** \brief F333C, MCS3 Channel 6 Memory High Byte Register */
#define GTM_MCS3_CH6_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F333Cu)

/** \brief F3340, MCS3 Channel 6 Program Counter Register */
#define GTM_MCS3_CH6_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F3340u)

/** \brief F3344, MCS3 Channel 6 Interrupt Notification Register */
#define GTM_MCS3_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F3344u)

/** \brief F3348, MCS3 Channel 6 Interrupt Enable Register */
#define GTM_MCS3_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F3348u)

/** \brief F334C, MCS3 Channel 6 Force Interrupt Register */
#define GTM_MCS3_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F334Cu)

/** \brief F3350, MCS3 Channel 6 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F3350u)

/** \brief F3354, MCS3 Channel 6 Error Interrupt Enable Register */
#define GTM_MCS3_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F3354u)

/** \brief F3380, MCS3 Channel 7 General Purpose Register 0 */
#define GTM_MCS3_CH7_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3380u)

/** \brief F3384, MCS3 Channel 7 General Purpose Register 1 */
#define GTM_MCS3_CH7_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3384u)

/** \brief F3388, MCS3 Channel 7 General Purpose Register 2 */
#define GTM_MCS3_CH7_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3388u)

/** \brief F338C, MCS3 Channel 7 General Purpose Register 3 */
#define GTM_MCS3_CH7_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F338Cu)

/** \brief F3390, MCS3 Channel 7 General Purpose Register 4 */
#define GTM_MCS3_CH7_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3390u)

/** \brief F3394, MCS3 Channel 7 General Purpose Register 5 */
#define GTM_MCS3_CH7_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3394u)

/** \brief F3398, MCS3 Channel 7 General Purpose Register 6 */
#define GTM_MCS3_CH7_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F3398u)

/** \brief F339C, MCS3 Channel 7 General Purpose Register 7 */
#define GTM_MCS3_CH7_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F339Cu)

/** \brief F33A0, MCS3 Channel 7 Control Register */
#define GTM_MCS3_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F33A0u)

/** \brief F33A4, MCS3 Channel 7 ARU Control Bit Register */
#define GTM_MCS3_CH7_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F33A4u)

/** \brief F33BC, MCS3 Channel 7 Memory High Byte Register */
#define GTM_MCS3_CH7_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F33BCu)

/** \brief F33C0, MCS3 Channel 7 Program Counter Register */
#define GTM_MCS3_CH7_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F33C0u)

/** \brief F33C4, MCS3 Channel 7 Interrupt Notification Register */
#define GTM_MCS3_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F33C4u)

/** \brief F33C8, MCS3 Channel 7 Interrupt Enable Register */
#define GTM_MCS3_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F33C8u)

/** \brief F33CC, MCS3 Channel 7 Force Interrupt Register */
#define GTM_MCS3_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F33CCu)

/** \brief F33D0, MCS3 Channel 7 Interrupt Mode Configuration Register */
#define GTM_MCS3_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F33D0u)

/** \brief F33D4, MCS3 Channel 7 Error Interrupt Enable Register */
#define GTM_MCS3_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F33D4u)

/** \brief F4000, MCS4 Channel 0 General Purpose Register 0 */
#define GTM_MCS4_CH0_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4000u)

/** \brief F4004, MCS4 Channel 0 General Purpose Register 1 */
#define GTM_MCS4_CH0_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4004u)

/** \brief F4008, MCS4 Channel 0 General Purpose Register 2 */
#define GTM_MCS4_CH0_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4008u)

/** \brief F400C, MCS4 Channel 0 General Purpose Register 3 */
#define GTM_MCS4_CH0_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F400Cu)

/** \brief F4010, MCS4 Channel 0 General Purpose Register 4 */
#define GTM_MCS4_CH0_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4010u)

/** \brief F4014, MCS4 Channel 0 General Purpose Register 5 */
#define GTM_MCS4_CH0_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4014u)

/** \brief F4018, MCS4 Channel 0 General Purpose Register 6 */
#define GTM_MCS4_CH0_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4018u)

/** \brief F401C, MCS4 Channel 0 General Purpose Register 7 */
#define GTM_MCS4_CH0_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F401Cu)

/** \brief F4020, MCS4 Channel 0 Control Register */
#define GTM_MCS4_CH0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F4020u)

/** \brief F4024, MCS4 Channel 0 ARU Control Bit Register */
#define GTM_MCS4_CH0_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F4024u)

/** \brief F4028, MCS4 Clear Trigger Control Register */
#define GTM_MCS4_CH0_CTRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRG*)0xF01F4028u)
/** Alias (User Manual Name) for GTM_MCS4_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS4_CH0_CTRG.
*/
#define GTM_MCS4_CTRG (GTM_MCS4_CH0_CTRG)

/** \brief F402C, MCS4 Set Trigger Control Register */
#define GTM_MCS4_CH0_STRG /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_STRG*)0xF01F402Cu)
/** Alias (User Manual Name) for GTM_MCS4_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS4_CH0_STRG.
*/
#define GTM_MCS4_STRG (GTM_MCS4_CH0_STRG)

/** \brief F403C, MCS4 Channel 0 Memory High Byte Register */
#define GTM_MCS4_CH0_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F403Cu)

/** \brief F4040, MCS4 Channel 0 Program Counter Register */
#define GTM_MCS4_CH0_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F4040u)

/** \brief F4044, MCS4 Channel 0 Interrupt Notification Register */
#define GTM_MCS4_CH0_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F4044u)

/** \brief F4048, MCS4 Channel 0 Interrupt Enable Register */
#define GTM_MCS4_CH0_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F4048u)

/** \brief F404C, MCS4 Channel 0 Force Interrupt Register */
#define GTM_MCS4_CH0_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F404Cu)

/** \brief F4050, MCS4 Channel 0 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH0_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F4050u)

/** \brief F4054, MCS4 Channel 0 Error Interrupt Enable Register */
#define GTM_MCS4_CH0_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F4054u)

/** \brief F4060, MCS4 Write Protection Register */
#define GTM_MCS4_REG_PROT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_REG_PROT*)0xF01F4060u)

/** \brief F4064, MCS4 Control and Status Register */
#define GTM_MCS4_CTRL_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CTRL_STAT*)0xF01F4064u)

/** \brief F4068, MCS4 Reset Register */
#define GTM_MCS4_RESET /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_RESET*)0xF01F4068u)

/** \brief F406C, MCS4 Cancel ARU Transfer Instruction Register */
#define GTM_MCS4_CAT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CAT*)0xF01F406Cu)

/** \brief F4070, MCS4 Cancel WURM Instruction Register */
#define GTM_MCS4_CWT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CWT*)0xF01F4070u)

/** \brief F407C, MCS4 error register */
#define GTM_MCS4_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF01F407Cu)

/** \brief F4080, MCS4 Channel 1 General Purpose Register 0 */
#define GTM_MCS4_CH1_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4080u)

/** \brief F4084, MCS4 Channel 1 General Purpose Register 1 */
#define GTM_MCS4_CH1_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4084u)

/** \brief F4088, MCS4 Channel 1 General Purpose Register 2 */
#define GTM_MCS4_CH1_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4088u)

/** \brief F408C, MCS4 Channel 1 General Purpose Register 3 */
#define GTM_MCS4_CH1_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F408Cu)

/** \brief F4090, MCS4 Channel 1 General Purpose Register 4 */
#define GTM_MCS4_CH1_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4090u)

/** \brief F4094, MCS4 Channel 1 General Purpose Register 5 */
#define GTM_MCS4_CH1_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4094u)

/** \brief F4098, MCS4 Channel 1 General Purpose Register 6 */
#define GTM_MCS4_CH1_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4098u)

/** \brief F409C, MCS4 Channel 1 General Purpose Register 7 */
#define GTM_MCS4_CH1_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F409Cu)

/** \brief F40A0, MCS4 Channel 1 Control Register */
#define GTM_MCS4_CH1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F40A0u)

/** \brief F40A4, MCS4 Channel 1 ARU Control Bit Register */
#define GTM_MCS4_CH1_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F40A4u)

/** \brief F40BC, MCS4 Channel 1 Memory High Byte Register */
#define GTM_MCS4_CH1_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F40BCu)

/** \brief F40C0, MCS4 Channel 1 Program Counter Register */
#define GTM_MCS4_CH1_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F40C0u)

/** \brief F40C4, MCS4 Channel 1 Interrupt Notification Register */
#define GTM_MCS4_CH1_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F40C4u)

/** \brief F40C8, MCS4 Channel 1 Interrupt Enable Register */
#define GTM_MCS4_CH1_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F40C8u)

/** \brief F40CC, MCS4 Channel 1 Force Interrupt Register */
#define GTM_MCS4_CH1_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F40CCu)

/** \brief F40D0, MCS4 Channel 1 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH1_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F40D0u)

/** \brief F40D4, MCS4 Channel 1 Error Interrupt Enable Register */
#define GTM_MCS4_CH1_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F40D4u)

/** \brief F4100, MCS4 Channel 2 General Purpose Register 0 */
#define GTM_MCS4_CH2_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4100u)

/** \brief F4104, MCS4 Channel 2 General Purpose Register 1 */
#define GTM_MCS4_CH2_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4104u)

/** \brief F4108, MCS4 Channel 2 General Purpose Register 2 */
#define GTM_MCS4_CH2_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4108u)

/** \brief F410C, MCS4 Channel 2 General Purpose Register 3 */
#define GTM_MCS4_CH2_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F410Cu)

/** \brief F4110, MCS4 Channel 2 General Purpose Register 4 */
#define GTM_MCS4_CH2_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4110u)

/** \brief F4114, MCS4 Channel 2 General Purpose Register 5 */
#define GTM_MCS4_CH2_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4114u)

/** \brief F4118, MCS4 Channel 2 General Purpose Register 6 */
#define GTM_MCS4_CH2_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4118u)

/** \brief F411C, MCS4 Channel 2 General Purpose Register 7 */
#define GTM_MCS4_CH2_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F411Cu)

/** \brief F4120, MCS4 Channel 2 Control Register */
#define GTM_MCS4_CH2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F4120u)

/** \brief F4124, MCS4 Channel 2 ARU Control Bit Register */
#define GTM_MCS4_CH2_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F4124u)

/** \brief F413C, MCS4 Channel 2 Memory High Byte Register */
#define GTM_MCS4_CH2_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F413Cu)

/** \brief F4140, MCS4 Channel 2 Program Counter Register */
#define GTM_MCS4_CH2_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F4140u)

/** \brief F4144, MCS4 Channel 2 Interrupt Notification Register */
#define GTM_MCS4_CH2_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F4144u)

/** \brief F4148, MCS4 Channel 2 Interrupt Enable Register */
#define GTM_MCS4_CH2_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F4148u)

/** \brief F414C, MCS4 Channel 2 Force Interrupt Register */
#define GTM_MCS4_CH2_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F414Cu)

/** \brief F4150, MCS4 Channel 2 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH2_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F4150u)

/** \brief F4154, MCS4 Channel 2 Error Interrupt Enable Register */
#define GTM_MCS4_CH2_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F4154u)

/** \brief F4180, MCS4 Channel 3 General Purpose Register 0 */
#define GTM_MCS4_CH3_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4180u)

/** \brief F4184, MCS4 Channel 3 General Purpose Register 1 */
#define GTM_MCS4_CH3_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4184u)

/** \brief F4188, MCS4 Channel 3 General Purpose Register 2 */
#define GTM_MCS4_CH3_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4188u)

/** \brief F418C, MCS4 Channel 3 General Purpose Register 3 */
#define GTM_MCS4_CH3_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F418Cu)

/** \brief F4190, MCS4 Channel 3 General Purpose Register 4 */
#define GTM_MCS4_CH3_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4190u)

/** \brief F4194, MCS4 Channel 3 General Purpose Register 5 */
#define GTM_MCS4_CH3_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4194u)

/** \brief F4198, MCS4 Channel 3 General Purpose Register 6 */
#define GTM_MCS4_CH3_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4198u)

/** \brief F419C, MCS4 Channel 3 General Purpose Register 7 */
#define GTM_MCS4_CH3_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F419Cu)

/** \brief F41A0, MCS4 Channel 3 Control Register */
#define GTM_MCS4_CH3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F41A0u)

/** \brief F41A4, MCS4 Channel 3 ARU Control Bit Register */
#define GTM_MCS4_CH3_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F41A4u)

/** \brief F41BC, MCS4 Channel 3 Memory High Byte Register */
#define GTM_MCS4_CH3_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F41BCu)

/** \brief F41C0, MCS4 Channel 3 Program Counter Register */
#define GTM_MCS4_CH3_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F41C0u)

/** \brief F41C4, MCS4 Channel 3 Interrupt Notification Register */
#define GTM_MCS4_CH3_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F41C4u)

/** \brief F41C8, MCS4 Channel 3 Interrupt Enable Register */
#define GTM_MCS4_CH3_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F41C8u)

/** \brief F41CC, MCS4 Channel 3 Force Interrupt Register */
#define GTM_MCS4_CH3_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F41CCu)

/** \brief F41D0, MCS4 Channel 3 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH3_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F41D0u)

/** \brief F41D4, MCS4 Channel 3 Error Interrupt Enable Register */
#define GTM_MCS4_CH3_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F41D4u)

/** \brief F4200, MCS4 Channel 4 General Purpose Register 0 */
#define GTM_MCS4_CH4_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4200u)

/** \brief F4204, MCS4 Channel 4 General Purpose Register 1 */
#define GTM_MCS4_CH4_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4204u)

/** \brief F4208, MCS4 Channel 4 General Purpose Register 2 */
#define GTM_MCS4_CH4_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4208u)

/** \brief F420C, MCS4 Channel 4 General Purpose Register 3 */
#define GTM_MCS4_CH4_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F420Cu)

/** \brief F4210, MCS4 Channel 4 General Purpose Register 4 */
#define GTM_MCS4_CH4_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4210u)

/** \brief F4214, MCS4 Channel 4 General Purpose Register 5 */
#define GTM_MCS4_CH4_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4214u)

/** \brief F4218, MCS4 Channel 4 General Purpose Register 6 */
#define GTM_MCS4_CH4_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4218u)

/** \brief F421C, MCS4 Channel 4 General Purpose Register 7 */
#define GTM_MCS4_CH4_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F421Cu)

/** \brief F4220, MCS4 Channel 4 Control Register */
#define GTM_MCS4_CH4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F4220u)

/** \brief F4224, MCS4 Channel 4 ARU Control Bit Register */
#define GTM_MCS4_CH4_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F4224u)

/** \brief F423C, MCS4 Channel 4 Memory High Byte Register */
#define GTM_MCS4_CH4_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F423Cu)

/** \brief F4240, MCS4 Channel 4 Program Counter Register */
#define GTM_MCS4_CH4_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F4240u)

/** \brief F4244, MCS4 Channel 4 Interrupt Notification Register */
#define GTM_MCS4_CH4_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F4244u)

/** \brief F4248, MCS4 Channel 4 Interrupt Enable Register */
#define GTM_MCS4_CH4_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F4248u)

/** \brief F424C, MCS4 Channel 4 Force Interrupt Register */
#define GTM_MCS4_CH4_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F424Cu)

/** \brief F4250, MCS4 Channel 4 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH4_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F4250u)

/** \brief F4254, MCS4 Channel 4 Error Interrupt Enable Register */
#define GTM_MCS4_CH4_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F4254u)

/** \brief F4280, MCS4 Channel 5 General Purpose Register 0 */
#define GTM_MCS4_CH5_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4280u)

/** \brief F4284, MCS4 Channel 5 General Purpose Register 1 */
#define GTM_MCS4_CH5_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4284u)

/** \brief F4288, MCS4 Channel 5 General Purpose Register 2 */
#define GTM_MCS4_CH5_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4288u)

/** \brief F428C, MCS4 Channel 5 General Purpose Register 3 */
#define GTM_MCS4_CH5_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F428Cu)

/** \brief F4290, MCS4 Channel 5 General Purpose Register 4 */
#define GTM_MCS4_CH5_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4290u)

/** \brief F4294, MCS4 Channel 5 General Purpose Register 5 */
#define GTM_MCS4_CH5_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4294u)

/** \brief F4298, MCS4 Channel 5 General Purpose Register 6 */
#define GTM_MCS4_CH5_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4298u)

/** \brief F429C, MCS4 Channel 5 General Purpose Register 7 */
#define GTM_MCS4_CH5_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F429Cu)

/** \brief F42A0, MCS4 Channel 5 Control Register */
#define GTM_MCS4_CH5_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F42A0u)

/** \brief F42A4, MCS4 Channel 5 ARU Control Bit Register */
#define GTM_MCS4_CH5_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F42A4u)

/** \brief F42BC, MCS4 Channel 5 Memory High Byte Register */
#define GTM_MCS4_CH5_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F42BCu)

/** \brief F42C0, MCS4 Channel 5 Program Counter Register */
#define GTM_MCS4_CH5_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F42C0u)

/** \brief F42C4, MCS4 Channel 5 Interrupt Notification Register */
#define GTM_MCS4_CH5_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F42C4u)

/** \brief F42C8, MCS4 Channel 5 Interrupt Enable Register */
#define GTM_MCS4_CH5_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F42C8u)

/** \brief F42CC, MCS4 Channel 5 Force Interrupt Register */
#define GTM_MCS4_CH5_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F42CCu)

/** \brief F42D0, MCS4 Channel 5 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH5_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F42D0u)

/** \brief F42D4, MCS4 Channel 5 Error Interrupt Enable Register */
#define GTM_MCS4_CH5_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F42D4u)

/** \brief F4300, MCS4 Channel 6 General Purpose Register 0 */
#define GTM_MCS4_CH6_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4300u)

/** \brief F4304, MCS4 Channel 6 General Purpose Register 1 */
#define GTM_MCS4_CH6_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4304u)

/** \brief F4308, MCS4 Channel 6 General Purpose Register 2 */
#define GTM_MCS4_CH6_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4308u)

/** \brief F430C, MCS4 Channel 6 General Purpose Register 3 */
#define GTM_MCS4_CH6_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F430Cu)

/** \brief F4310, MCS4 Channel 6 General Purpose Register 4 */
#define GTM_MCS4_CH6_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4310u)

/** \brief F4314, MCS4 Channel 6 General Purpose Register 5 */
#define GTM_MCS4_CH6_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4314u)

/** \brief F4318, MCS4 Channel 6 General Purpose Register 6 */
#define GTM_MCS4_CH6_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4318u)

/** \brief F431C, MCS4 Channel 6 General Purpose Register 7 */
#define GTM_MCS4_CH6_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F431Cu)

/** \brief F4320, MCS4 Channel 6 Control Register */
#define GTM_MCS4_CH6_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F4320u)

/** \brief F4324, MCS4 Channel 6 ARU Control Bit Register */
#define GTM_MCS4_CH6_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F4324u)

/** \brief F433C, MCS4 Channel 6 Memory High Byte Register */
#define GTM_MCS4_CH6_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F433Cu)

/** \brief F4340, MCS4 Channel 6 Program Counter Register */
#define GTM_MCS4_CH6_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F4340u)

/** \brief F4344, MCS4 Channel 6 Interrupt Notification Register */
#define GTM_MCS4_CH6_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F4344u)

/** \brief F4348, MCS4 Channel 6 Interrupt Enable Register */
#define GTM_MCS4_CH6_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F4348u)

/** \brief F434C, MCS4 Channel 6 Force Interrupt Register */
#define GTM_MCS4_CH6_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F434Cu)

/** \brief F4350, MCS4 Channel 6 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH6_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F4350u)

/** \brief F4354, MCS4 Channel 6 Error Interrupt Enable Register */
#define GTM_MCS4_CH6_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F4354u)

/** \brief F4380, MCS4 Channel 7 General Purpose Register 0 */
#define GTM_MCS4_CH7_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4380u)

/** \brief F4384, MCS4 Channel 7 General Purpose Register 1 */
#define GTM_MCS4_CH7_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4384u)

/** \brief F4388, MCS4 Channel 7 General Purpose Register 2 */
#define GTM_MCS4_CH7_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4388u)

/** \brief F438C, MCS4 Channel 7 General Purpose Register 3 */
#define GTM_MCS4_CH7_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F438Cu)

/** \brief F4390, MCS4 Channel 7 General Purpose Register 4 */
#define GTM_MCS4_CH7_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4390u)

/** \brief F4394, MCS4 Channel 7 General Purpose Register 5 */
#define GTM_MCS4_CH7_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4394u)

/** \brief F4398, MCS4 Channel 7 General Purpose Register 6 */
#define GTM_MCS4_CH7_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F4398u)

/** \brief F439C, MCS4 Channel 7 General Purpose Register 7 */
#define GTM_MCS4_CH7_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_R*)0xF01F439Cu)

/** \brief F43A0, MCS4 Channel 7 Control Register */
#define GTM_MCS4_CH7_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01F43A0u)

/** \brief F43A4, MCS4 Channel 7 ARU Control Bit Register */
#define GTM_MCS4_CH7_ACB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01F43A4u)

/** \brief F43BC, MCS4 Channel 7 Memory High Byte Register */
#define GTM_MCS4_CH7_MHB /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_MHB*)0xF01F43BCu)

/** \brief F43C0, MCS4 Channel 7 Program Counter Register */
#define GTM_MCS4_CH7_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01F43C0u)

/** \brief F43C4, MCS4 Channel 7 Interrupt Notification Register */
#define GTM_MCS4_CH7_IRQ_NOTIFY /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01F43C4u)

/** \brief F43C8, MCS4 Channel 7 Interrupt Enable Register */
#define GTM_MCS4_CH7_IRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01F43C8u)

/** \brief F43CC, MCS4 Channel 7 Force Interrupt Register */
#define GTM_MCS4_CH7_IRQ_FORCINT /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01F43CCu)

/** \brief F43D0, MCS4 Channel 7 Interrupt Mode Configuration Register */
#define GTM_MCS4_CH7_IRQ_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01F43D0u)

/** \brief F43D4, MCS4 Channel 7 Error Interrupt Enable Register */
#define GTM_MCS4_CH7_EIRQ_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01F43D4u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXGTM_REG_H */
