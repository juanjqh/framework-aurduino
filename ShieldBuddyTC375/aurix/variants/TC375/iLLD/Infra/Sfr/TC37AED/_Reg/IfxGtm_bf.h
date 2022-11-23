/**
 * \file IfxGtm_bf.h
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
 * \defgroup IfxSfr_Gtm_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Gtm_Registers
 * 
 */
#ifndef IFXGTM_BF_H
#define IFXGTM_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Gtm_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_GTM_REV_Bits.STEP */
#define IFX_GTM_REV_STEP_LEN (8u)

/** \brief Mask for Ifx_GTM_REV_Bits.STEP */
#define IFX_GTM_REV_STEP_MSK (0xffu)

/** \brief Offset for Ifx_GTM_REV_Bits.STEP */
#define IFX_GTM_REV_STEP_OFF (0u)

/** \brief Length for Ifx_GTM_REV_Bits.NO */
#define IFX_GTM_REV_NO_LEN (4u)

/** \brief Mask for Ifx_GTM_REV_Bits.NO */
#define IFX_GTM_REV_NO_MSK (0xfu)

/** \brief Offset for Ifx_GTM_REV_Bits.NO */
#define IFX_GTM_REV_NO_OFF (8u)

/** \brief Length for Ifx_GTM_REV_Bits.MINOR */
#define IFX_GTM_REV_MINOR_LEN (4u)

/** \brief Mask for Ifx_GTM_REV_Bits.MINOR */
#define IFX_GTM_REV_MINOR_MSK (0xfu)

/** \brief Offset for Ifx_GTM_REV_Bits.MINOR */
#define IFX_GTM_REV_MINOR_OFF (12u)

/** \brief Length for Ifx_GTM_REV_Bits.MAJOR */
#define IFX_GTM_REV_MAJOR_LEN (4u)

/** \brief Mask for Ifx_GTM_REV_Bits.MAJOR */
#define IFX_GTM_REV_MAJOR_MSK (0xfu)

/** \brief Offset for Ifx_GTM_REV_Bits.MAJOR */
#define IFX_GTM_REV_MAJOR_OFF (16u)

/** \brief Length for Ifx_GTM_REV_Bits.DEV_CODE0 */
#define IFX_GTM_REV_DEV_CODE0_LEN (4u)

/** \brief Mask for Ifx_GTM_REV_Bits.DEV_CODE0 */
#define IFX_GTM_REV_DEV_CODE0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_REV_Bits.DEV_CODE0 */
#define IFX_GTM_REV_DEV_CODE0_OFF (20u)

/** \brief Length for Ifx_GTM_REV_Bits.DEV_CODE1 */
#define IFX_GTM_REV_DEV_CODE1_LEN (4u)

/** \brief Mask for Ifx_GTM_REV_Bits.DEV_CODE1 */
#define IFX_GTM_REV_DEV_CODE1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_REV_Bits.DEV_CODE1 */
#define IFX_GTM_REV_DEV_CODE1_OFF (24u)

/** \brief Length for Ifx_GTM_REV_Bits.DEV_CODE2 */
#define IFX_GTM_REV_DEV_CODE2_LEN (4u)

/** \brief Mask for Ifx_GTM_REV_Bits.DEV_CODE2 */
#define IFX_GTM_REV_DEV_CODE2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_REV_Bits.DEV_CODE2 */
#define IFX_GTM_REV_DEV_CODE2_OFF (28u)

/** \brief Length for Ifx_GTM_RST_Bits.BRIDGE_MODE_WRDIS */
#define IFX_GTM_RST_BRIDGE_MODE_WRDIS_LEN (1u)

/** \brief Mask for Ifx_GTM_RST_Bits.BRIDGE_MODE_WRDIS */
#define IFX_GTM_RST_BRIDGE_MODE_WRDIS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_RST_Bits.BRIDGE_MODE_WRDIS */
#define IFX_GTM_RST_BRIDGE_MODE_WRDIS_OFF (27u)

/** \brief Length for Ifx_GTM_CTRL_Bits.RF_PROT */
#define IFX_GTM_CTRL_RF_PROT_LEN (1u)

/** \brief Mask for Ifx_GTM_CTRL_Bits.RF_PROT */
#define IFX_GTM_CTRL_RF_PROT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CTRL_Bits.RF_PROT */
#define IFX_GTM_CTRL_RF_PROT_OFF (0u)

/** \brief Length for Ifx_GTM_CTRL_Bits.TO_MODE */
#define IFX_GTM_CTRL_TO_MODE_LEN (1u)

/** \brief Mask for Ifx_GTM_CTRL_Bits.TO_MODE */
#define IFX_GTM_CTRL_TO_MODE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CTRL_Bits.TO_MODE */
#define IFX_GTM_CTRL_TO_MODE_OFF (1u)

/** \brief Length for Ifx_GTM_CTRL_Bits.TO_VAL */
#define IFX_GTM_CTRL_TO_VAL_LEN (5u)

/** \brief Mask for Ifx_GTM_CTRL_Bits.TO_VAL */
#define IFX_GTM_CTRL_TO_VAL_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_CTRL_Bits.TO_VAL */
#define IFX_GTM_CTRL_TO_VAL_OFF (4u)

/** \brief Length for Ifx_GTM_CTRL_Bits.AEIM_CLUSTER */
#define IFX_GTM_CTRL_AEIM_CLUSTER_LEN (4u)

/** \brief Mask for Ifx_GTM_CTRL_Bits.AEIM_CLUSTER */
#define IFX_GTM_CTRL_AEIM_CLUSTER_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CTRL_Bits.AEIM_CLUSTER */
#define IFX_GTM_CTRL_AEIM_CLUSTER_OFF (12u)

/** \brief Length for Ifx_GTM_AEI_ADDR_XPT_Bits.TO_ADDR */
#define IFX_GTM_AEI_ADDR_XPT_TO_ADDR_LEN (20u)

/** \brief Mask for Ifx_GTM_AEI_ADDR_XPT_Bits.TO_ADDR */
#define IFX_GTM_AEI_ADDR_XPT_TO_ADDR_MSK (0xfffffu)

/** \brief Offset for Ifx_GTM_AEI_ADDR_XPT_Bits.TO_ADDR */
#define IFX_GTM_AEI_ADDR_XPT_TO_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_AEI_ADDR_XPT_Bits.TO_W1R0 */
#define IFX_GTM_AEI_ADDR_XPT_TO_W1R0_LEN (1u)

/** \brief Mask for Ifx_GTM_AEI_ADDR_XPT_Bits.TO_W1R0 */
#define IFX_GTM_AEI_ADDR_XPT_TO_W1R0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AEI_ADDR_XPT_Bits.TO_W1R0 */
#define IFX_GTM_AEI_ADDR_XPT_TO_W1R0_OFF (20u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_TO_XPT */
#define IFX_GTM_IRQ_NOTIFY_AEI_TO_XPT_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_TO_XPT */
#define IFX_GTM_IRQ_NOTIFY_AEI_TO_XPT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_TO_XPT */
#define IFX_GTM_IRQ_NOTIFY_AEI_TO_XPT_OFF (0u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_USP_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEI_USP_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_USP_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEI_USP_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_USP_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEI_USP_ADDR_OFF (1u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_IM_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEI_IM_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_IM_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEI_IM_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_IM_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEI_IM_ADDR_OFF (2u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_USP_BE */
#define IFX_GTM_IRQ_NOTIFY_AEI_USP_BE_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_USP_BE */
#define IFX_GTM_IRQ_NOTIFY_AEI_USP_BE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.AEI_USP_BE */
#define IFX_GTM_IRQ_NOTIFY_AEI_USP_BE_OFF (3u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_USP_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEIM_USP_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_USP_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEIM_USP_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_USP_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEIM_USP_ADDR_OFF (4u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_IM_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEIM_IM_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_IM_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEIM_IM_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_IM_ADDR */
#define IFX_GTM_IRQ_NOTIFY_AEIM_IM_ADDR_OFF (5u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_USP_BE */
#define IFX_GTM_IRQ_NOTIFY_AEIM_USP_BE_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_USP_BE */
#define IFX_GTM_IRQ_NOTIFY_AEIM_USP_BE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.AEIM_USP_BE */
#define IFX_GTM_IRQ_NOTIFY_AEIM_USP_BE_OFF (6u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_OFF (7u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_PER_ERR */
#define IFX_GTM_IRQ_NOTIFY_CLK_PER_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_PER_ERR */
#define IFX_GTM_IRQ_NOTIFY_CLK_PER_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_PER_ERR */
#define IFX_GTM_IRQ_NOTIFY_CLK_PER_ERR_OFF (8u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR_STATE0 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_STATE0_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR_STATE0 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_STATE0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR_STATE0 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_STATE0_OFF (24u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR_STATE1 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_STATE1_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR_STATE1 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_STATE1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_ERR_STATE1 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_ERR_STATE1_OFF (25u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_EXP_STATE0 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_EXP_STATE0_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_EXP_STATE0 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_EXP_STATE0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_EXP_STATE0 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_EXP_STATE0_OFF (28u)

/** \brief Length for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_EXP_STATE1 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_EXP_STATE1_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_EXP_STATE1 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_EXP_STATE1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_NOTIFY_Bits.CLK_EN_EXP_STATE1 */
#define IFX_GTM_IRQ_NOTIFY_CLK_EN_EXP_STATE1_OFF (29u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.AEI_TO_XPT_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_TO_XPT_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.AEI_TO_XPT_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_TO_XPT_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.AEI_TO_XPT_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_TO_XPT_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.AEI_USP_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_USP_ADDR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.AEI_USP_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_USP_ADDR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.AEI_USP_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_USP_ADDR_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.AEI_IM_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_IM_ADDR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.AEI_IM_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_IM_ADDR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.AEI_IM_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_IM_ADDR_IRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.AEI_USP_BE_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_USP_BE_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.AEI_USP_BE_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_USP_BE_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.AEI_USP_BE_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEI_USP_BE_IRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.AEIM_USP_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_USP_ADDR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.AEIM_USP_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_USP_ADDR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.AEIM_USP_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_USP_ADDR_IRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.AEIM_IM_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_IM_ADDR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.AEIM_IM_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_IM_ADDR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.AEIM_IM_ADDR_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_IM_ADDR_IRQ_EN_OFF (5u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.AEIM_USP_BE_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_USP_BE_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.AEIM_USP_BE_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_USP_BE_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.AEIM_USP_BE_IRQ_EN */
#define IFX_GTM_IRQ_EN_AEIM_USP_BE_IRQ_EN_OFF (6u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.CLK_EN_ERR_IRQ_EN */
#define IFX_GTM_IRQ_EN_CLK_EN_ERR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.CLK_EN_ERR_IRQ_EN */
#define IFX_GTM_IRQ_EN_CLK_EN_ERR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.CLK_EN_ERR_IRQ_EN */
#define IFX_GTM_IRQ_EN_CLK_EN_ERR_IRQ_EN_OFF (7u)

/** \brief Length for Ifx_GTM_IRQ_EN_Bits.CLK_PER_ERR_IRQ_EN */
#define IFX_GTM_IRQ_EN_CLK_PER_ERR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_EN_Bits.CLK_PER_ERR_IRQ_EN */
#define IFX_GTM_IRQ_EN_CLK_PER_ERR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_EN_Bits.CLK_PER_ERR_IRQ_EN */
#define IFX_GTM_IRQ_EN_CLK_PER_ERR_IRQ_EN_OFF (8u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_TO_XPT */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_TO_XPT_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_TO_XPT */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_TO_XPT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_TO_XPT */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_TO_XPT_OFF (0u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_USP_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_USP_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_USP_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_USP_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_USP_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_USP_ADDR_OFF (1u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_IM_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_IM_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_IM_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_IM_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_IM_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_IM_ADDR_OFF (2u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_USP_BE */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_USP_BE_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_USP_BE */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_USP_BE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEI_USP_BE */
#define IFX_GTM_IRQ_FORCINT_TRG_AEI_USP_BE_OFF (3u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_USP_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_USP_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_USP_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_USP_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_USP_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_USP_ADDR_OFF (4u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_IM_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_IM_ADDR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_IM_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_IM_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_IM_ADDR */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_IM_ADDR_OFF (5u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_USP_BE */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_USP_BE_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_USP_BE */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_USP_BE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_AEIM_USP_BE */
#define IFX_GTM_IRQ_FORCINT_TRG_AEIM_USP_BE_OFF (6u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_CLK_EN_ERR */
#define IFX_GTM_IRQ_FORCINT_TRG_CLK_EN_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_CLK_EN_ERR */
#define IFX_GTM_IRQ_FORCINT_TRG_CLK_EN_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_CLK_EN_ERR */
#define IFX_GTM_IRQ_FORCINT_TRG_CLK_EN_ERR_OFF (7u)

/** \brief Length for Ifx_GTM_IRQ_FORCINT_Bits.TRG_CLK_PER_ERR */
#define IFX_GTM_IRQ_FORCINT_TRG_CLK_PER_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_IRQ_FORCINT_Bits.TRG_CLK_PER_ERR */
#define IFX_GTM_IRQ_FORCINT_TRG_CLK_PER_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_IRQ_FORCINT_Bits.TRG_CLK_PER_ERR */
#define IFX_GTM_IRQ_FORCINT_TRG_CLK_PER_ERR_OFF (8u)

/** \brief Length for Ifx_GTM_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.AEI_TO_XPT_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_TO_XPT_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.AEI_TO_XPT_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_TO_XPT_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.AEI_TO_XPT_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_TO_XPT_EIRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.AEI_USP_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_USP_ADDR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.AEI_USP_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_USP_ADDR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.AEI_USP_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_USP_ADDR_EIRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.AEI_IM_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_IM_ADDR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.AEI_IM_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_IM_ADDR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.AEI_IM_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_IM_ADDR_EIRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.AEI_USP_BE_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_USP_BE_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.AEI_USP_BE_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_USP_BE_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.AEI_USP_BE_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEI_USP_BE_EIRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.AEIM_USP_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_USP_ADDR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.AEIM_USP_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_USP_ADDR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.AEIM_USP_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_USP_ADDR_EIRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.AEIM_IM_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_IM_ADDR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.AEIM_IM_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_IM_ADDR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.AEIM_IM_ADDR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_IM_ADDR_EIRQ_EN_OFF (5u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.AEIM_USP_BE_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_USP_BE_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.AEIM_USP_BE_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_USP_BE_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.AEIM_USP_BE_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_AEIM_USP_BE_EIRQ_EN_OFF (6u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.CLK_EN_ERR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_CLK_EN_ERR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.CLK_EN_ERR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_CLK_EN_ERR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.CLK_EN_ERR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_CLK_EN_ERR_EIRQ_EN_OFF (7u)

/** \brief Length for Ifx_GTM_EIRQ_EN_Bits.CLK_PER_ERR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_CLK_PER_ERR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_EIRQ_EN_Bits.CLK_PER_ERR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_CLK_PER_ERR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_EIRQ_EN_Bits.CLK_PER_ERR_EIRQ_EN */
#define IFX_GTM_EIRQ_EN_CLK_PER_ERR_EIRQ_EN_OFF (8u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.GRSTEN */
#define IFX_GTM_HW_CONF_GRSTEN_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.GRSTEN */
#define IFX_GTM_HW_CONF_GRSTEN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.GRSTEN */
#define IFX_GTM_HW_CONF_GRSTEN_OFF (0u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.BRIDGE_MODE_RST */
#define IFX_GTM_HW_CONF_BRIDGE_MODE_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.BRIDGE_MODE_RST */
#define IFX_GTM_HW_CONF_BRIDGE_MODE_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.BRIDGE_MODE_RST */
#define IFX_GTM_HW_CONF_BRIDGE_MODE_RST_OFF (1u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.SYNC_INPUT_REG */
#define IFX_GTM_HW_CONF_SYNC_INPUT_REG_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.SYNC_INPUT_REG */
#define IFX_GTM_HW_CONF_SYNC_INPUT_REG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.SYNC_INPUT_REG */
#define IFX_GTM_HW_CONF_SYNC_INPUT_REG_OFF (2u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.CFG_CLOCK_RATE */
#define IFX_GTM_HW_CONF_CFG_CLOCK_RATE_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.CFG_CLOCK_RATE */
#define IFX_GTM_HW_CONF_CFG_CLOCK_RATE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.CFG_CLOCK_RATE */
#define IFX_GTM_HW_CONF_CFG_CLOCK_RATE_OFF (3u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.ATOM_OUT_RST */
#define IFX_GTM_HW_CONF_ATOM_OUT_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.ATOM_OUT_RST */
#define IFX_GTM_HW_CONF_ATOM_OUT_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.ATOM_OUT_RST */
#define IFX_GTM_HW_CONF_ATOM_OUT_RST_OFF (4u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.ATOM_TRIG_CHAIN */
#define IFX_GTM_HW_CONF_ATOM_TRIG_CHAIN_LEN (3u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.ATOM_TRIG_CHAIN */
#define IFX_GTM_HW_CONF_ATOM_TRIG_CHAIN_MSK (0x7u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.ATOM_TRIG_CHAIN */
#define IFX_GTM_HW_CONF_ATOM_TRIG_CHAIN_OFF (5u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.TOM_OUT_RST */
#define IFX_GTM_HW_CONF_TOM_OUT_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.TOM_OUT_RST */
#define IFX_GTM_HW_CONF_TOM_OUT_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.TOM_OUT_RST */
#define IFX_GTM_HW_CONF_TOM_OUT_RST_OFF (8u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.TOM_TRIG_CHAIN */
#define IFX_GTM_HW_CONF_TOM_TRIG_CHAIN_LEN (3u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.TOM_TRIG_CHAIN */
#define IFX_GTM_HW_CONF_TOM_TRIG_CHAIN_MSK (0x7u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.TOM_TRIG_CHAIN */
#define IFX_GTM_HW_CONF_TOM_TRIG_CHAIN_OFF (9u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.RAM_INIT_RST */
#define IFX_GTM_HW_CONF_RAM_INIT_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.RAM_INIT_RST */
#define IFX_GTM_HW_CONF_RAM_INIT_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.RAM_INIT_RST */
#define IFX_GTM_HW_CONF_RAM_INIT_RST_OFF (12u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.ERM */
#define IFX_GTM_HW_CONF_ERM_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.ERM */
#define IFX_GTM_HW_CONF_ERM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.ERM */
#define IFX_GTM_HW_CONF_ERM_OFF (13u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.ARU_CONNECT_CONFIG */
#define IFX_GTM_HW_CONF_ARU_CONNECT_CONFIG_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.ARU_CONNECT_CONFIG */
#define IFX_GTM_HW_CONF_ARU_CONNECT_CONFIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.ARU_CONNECT_CONFIG */
#define IFX_GTM_HW_CONF_ARU_CONNECT_CONFIG_OFF (14u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_LEVEL */
#define IFX_GTM_HW_CONF_IRQ_MODE_LEVEL_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_LEVEL */
#define IFX_GTM_HW_CONF_IRQ_MODE_LEVEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_LEVEL */
#define IFX_GTM_HW_CONF_IRQ_MODE_LEVEL_OFF (16u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_PULSE */
#define IFX_GTM_HW_CONF_IRQ_MODE_PULSE_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_PULSE */
#define IFX_GTM_HW_CONF_IRQ_MODE_PULSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_PULSE */
#define IFX_GTM_HW_CONF_IRQ_MODE_PULSE_OFF (17u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_PULSE_NOTIFY */
#define IFX_GTM_HW_CONF_IRQ_MODE_PULSE_NOTIFY_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_PULSE_NOTIFY */
#define IFX_GTM_HW_CONF_IRQ_MODE_PULSE_NOTIFY_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_PULSE_NOTIFY */
#define IFX_GTM_HW_CONF_IRQ_MODE_PULSE_NOTIFY_OFF (18u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_SINGLE_PULSE */
#define IFX_GTM_HW_CONF_IRQ_MODE_SINGLE_PULSE_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_SINGLE_PULSE */
#define IFX_GTM_HW_CONF_IRQ_MODE_SINGLE_PULSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.IRQ_MODE_SINGLE_PULSE */
#define IFX_GTM_HW_CONF_IRQ_MODE_SINGLE_PULSE_OFF (19u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.ATOM_TRIG_INTCHAIN */
#define IFX_GTM_HW_CONF_ATOM_TRIG_INTCHAIN_LEN (4u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.ATOM_TRIG_INTCHAIN */
#define IFX_GTM_HW_CONF_ATOM_TRIG_INTCHAIN_MSK (0xfu)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.ATOM_TRIG_INTCHAIN */
#define IFX_GTM_HW_CONF_ATOM_TRIG_INTCHAIN_OFF (20u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.TOM_TRIG_INTCHAIN */
#define IFX_GTM_HW_CONF_TOM_TRIG_INTCHAIN_LEN (5u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.TOM_TRIG_INTCHAIN */
#define IFX_GTM_HW_CONF_TOM_TRIG_INTCHAIN_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.TOM_TRIG_INTCHAIN */
#define IFX_GTM_HW_CONF_TOM_TRIG_INTCHAIN_OFF (24u)

/** \brief Length for Ifx_GTM_HW_CONF_Bits.INT_CLK_EN_GEN */
#define IFX_GTM_HW_CONF_INT_CLK_EN_GEN_LEN (1u)

/** \brief Mask for Ifx_GTM_HW_CONF_Bits.INT_CLK_EN_GEN */
#define IFX_GTM_HW_CONF_INT_CLK_EN_GEN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_HW_CONF_Bits.INT_CLK_EN_GEN */
#define IFX_GTM_HW_CONF_INT_CLK_EN_GEN_OFF (29u)

/** \brief Length for Ifx_GTM_CFG_Bits.SRC_IN_MUX */
#define IFX_GTM_CFG_SRC_IN_MUX_LEN (1u)

/** \brief Mask for Ifx_GTM_CFG_Bits.SRC_IN_MUX */
#define IFX_GTM_CFG_SRC_IN_MUX_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CFG_Bits.SRC_IN_MUX */
#define IFX_GTM_CFG_SRC_IN_MUX_OFF (0u)

/** \brief Length for Ifx_GTM_AEI_STA_XPT_Bits.ADDR */
#define IFX_GTM_AEI_STA_XPT_ADDR_LEN (20u)

/** \brief Mask for Ifx_GTM_AEI_STA_XPT_Bits.ADDR */
#define IFX_GTM_AEI_STA_XPT_ADDR_MSK (0xfffffu)

/** \brief Offset for Ifx_GTM_AEI_STA_XPT_Bits.ADDR */
#define IFX_GTM_AEI_STA_XPT_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_AEI_STA_XPT_Bits.W1R0 */
#define IFX_GTM_AEI_STA_XPT_W1R0_LEN (1u)

/** \brief Mask for Ifx_GTM_AEI_STA_XPT_Bits.W1R0 */
#define IFX_GTM_AEI_STA_XPT_W1R0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AEI_STA_XPT_Bits.W1R0 */
#define IFX_GTM_AEI_STA_XPT_W1R0_OFF (20u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.BRG_MODE */
#define IFX_GTM_BRIDGE_MODE_BRG_MODE_LEN (1u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.BRG_MODE */
#define IFX_GTM_BRIDGE_MODE_BRG_MODE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.BRG_MODE */
#define IFX_GTM_BRIDGE_MODE_BRG_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.MSK_WR_RSP */
#define IFX_GTM_BRIDGE_MODE_MSK_WR_RSP_LEN (1u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.MSK_WR_RSP */
#define IFX_GTM_BRIDGE_MODE_MSK_WR_RSP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.MSK_WR_RSP */
#define IFX_GTM_BRIDGE_MODE_MSK_WR_RSP_OFF (1u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.BYPASS_SYNC */
#define IFX_GTM_BRIDGE_MODE_BYPASS_SYNC_LEN (1u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.BYPASS_SYNC */
#define IFX_GTM_BRIDGE_MODE_BYPASS_SYNC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.BYPASS_SYNC */
#define IFX_GTM_BRIDGE_MODE_BYPASS_SYNC_OFF (2u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.MODE_UP_PGR */
#define IFX_GTM_BRIDGE_MODE_MODE_UP_PGR_LEN (1u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.MODE_UP_PGR */
#define IFX_GTM_BRIDGE_MODE_MODE_UP_PGR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.MODE_UP_PGR */
#define IFX_GTM_BRIDGE_MODE_MODE_UP_PGR_OFF (8u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.BUFF_OVL */
#define IFX_GTM_BRIDGE_MODE_BUFF_OVL_LEN (1u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.BUFF_OVL */
#define IFX_GTM_BRIDGE_MODE_BUFF_OVL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.BUFF_OVL */
#define IFX_GTM_BRIDGE_MODE_BUFF_OVL_OFF (9u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.SYNC_INPUT_REG */
#define IFX_GTM_BRIDGE_MODE_SYNC_INPUT_REG_LEN (1u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.SYNC_INPUT_REG */
#define IFX_GTM_BRIDGE_MODE_SYNC_INPUT_REG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.SYNC_INPUT_REG */
#define IFX_GTM_BRIDGE_MODE_SYNC_INPUT_REG_OFF (12u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.BRG_RST */
#define IFX_GTM_BRIDGE_MODE_BRG_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.BRG_RST */
#define IFX_GTM_BRIDGE_MODE_BRG_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.BRG_RST */
#define IFX_GTM_BRIDGE_MODE_BRG_RST_OFF (16u)

/** \brief Length for Ifx_GTM_BRIDGE_MODE_Bits.BUFF_DPT */
#define IFX_GTM_BRIDGE_MODE_BUFF_DPT_LEN (8u)

/** \brief Mask for Ifx_GTM_BRIDGE_MODE_Bits.BUFF_DPT */
#define IFX_GTM_BRIDGE_MODE_BUFF_DPT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_BRIDGE_MODE_Bits.BUFF_DPT */
#define IFX_GTM_BRIDGE_MODE_BUFF_DPT_OFF (24u)

/** \brief Length for Ifx_GTM_BRIDGE_PTR1_Bits.NEW_TRAN_PTR */
#define IFX_GTM_BRIDGE_PTR1_NEW_TRAN_PTR_LEN (5u)

/** \brief Mask for Ifx_GTM_BRIDGE_PTR1_Bits.NEW_TRAN_PTR */
#define IFX_GTM_BRIDGE_PTR1_NEW_TRAN_PTR_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_BRIDGE_PTR1_Bits.NEW_TRAN_PTR */
#define IFX_GTM_BRIDGE_PTR1_NEW_TRAN_PTR_OFF (0u)

/** \brief Length for Ifx_GTM_BRIDGE_PTR1_Bits.FIRST_RSP_PTR */
#define IFX_GTM_BRIDGE_PTR1_FIRST_RSP_PTR_LEN (5u)

/** \brief Mask for Ifx_GTM_BRIDGE_PTR1_Bits.FIRST_RSP_PTR */
#define IFX_GTM_BRIDGE_PTR1_FIRST_RSP_PTR_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_BRIDGE_PTR1_Bits.FIRST_RSP_PTR */
#define IFX_GTM_BRIDGE_PTR1_FIRST_RSP_PTR_OFF (5u)

/** \brief Length for Ifx_GTM_BRIDGE_PTR1_Bits.TRAN_IN_PGR */
#define IFX_GTM_BRIDGE_PTR1_TRAN_IN_PGR_LEN (5u)

/** \brief Mask for Ifx_GTM_BRIDGE_PTR1_Bits.TRAN_IN_PGR */
#define IFX_GTM_BRIDGE_PTR1_TRAN_IN_PGR_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_BRIDGE_PTR1_Bits.TRAN_IN_PGR */
#define IFX_GTM_BRIDGE_PTR1_TRAN_IN_PGR_OFF (10u)

/** \brief Length for Ifx_GTM_BRIDGE_PTR1_Bits.ABT_TRAN_PGR */
#define IFX_GTM_BRIDGE_PTR1_ABT_TRAN_PGR_LEN (5u)

/** \brief Mask for Ifx_GTM_BRIDGE_PTR1_Bits.ABT_TRAN_PGR */
#define IFX_GTM_BRIDGE_PTR1_ABT_TRAN_PGR_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_BRIDGE_PTR1_Bits.ABT_TRAN_PGR */
#define IFX_GTM_BRIDGE_PTR1_ABT_TRAN_PGR_OFF (15u)

/** \brief Length for Ifx_GTM_BRIDGE_PTR1_Bits.FBC */
#define IFX_GTM_BRIDGE_PTR1_FBC_LEN (6u)

/** \brief Mask for Ifx_GTM_BRIDGE_PTR1_Bits.FBC */
#define IFX_GTM_BRIDGE_PTR1_FBC_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_BRIDGE_PTR1_Bits.FBC */
#define IFX_GTM_BRIDGE_PTR1_FBC_OFF (20u)

/** \brief Length for Ifx_GTM_BRIDGE_PTR1_Bits.RSP_TRAN_RDY */
#define IFX_GTM_BRIDGE_PTR1_RSP_TRAN_RDY_LEN (6u)

/** \brief Mask for Ifx_GTM_BRIDGE_PTR1_Bits.RSP_TRAN_RDY */
#define IFX_GTM_BRIDGE_PTR1_RSP_TRAN_RDY_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_BRIDGE_PTR1_Bits.RSP_TRAN_RDY */
#define IFX_GTM_BRIDGE_PTR1_RSP_TRAN_RDY_OFF (26u)

/** \brief Length for Ifx_GTM_BRIDGE_PTR2_Bits.TRAN_IN_PGR2 */
#define IFX_GTM_BRIDGE_PTR2_TRAN_IN_PGR2_LEN (5u)

/** \brief Mask for Ifx_GTM_BRIDGE_PTR2_Bits.TRAN_IN_PGR2 */
#define IFX_GTM_BRIDGE_PTR2_TRAN_IN_PGR2_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_BRIDGE_PTR2_Bits.TRAN_IN_PGR2 */
#define IFX_GTM_BRIDGE_PTR2_TRAN_IN_PGR2_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS0 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS0_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS0 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS0 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS1 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS1_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS1 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS1 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS1_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS2 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS2_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS2 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS2 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS2_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS3 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS3_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS3 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS3 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS3_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS4 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS4_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS4 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS4 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS4_OFF (8u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS5 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS5_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS5 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS5 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS5_OFF (10u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS6 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS6_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS6 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS6 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS6_OFF (12u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS7 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS7_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS7 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS7 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS7_OFF (14u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS8 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS8_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS8 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS8_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS8 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS8_OFF (16u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS9 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS9_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS9 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS9_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS9 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS9_OFF (18u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS10 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS10_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS10 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS10_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS10 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS10_OFF (20u)

/** \brief Length for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS11 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS11_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS11 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS11_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_AEM_DIS_Bits.DIS_CLS11 */
#define IFX_GTM_MCS_AEM_DIS_DIS_CLS11_OFF (22u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH0 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH0_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH0 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH0 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH0_OFF (0u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH1 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH1_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH1 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH1 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH1_OFF (1u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH2 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH2 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH2 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH2_OFF (2u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH3 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH3_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH3 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH3 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH3_OFF (3u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH4 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH4_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH4 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH4 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH4_OFF (4u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH5 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH5_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH5 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH5 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH5_OFF (5u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH6 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH6_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH6 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH6 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH6_OFF (6u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH7 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH7_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH7 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SRC_CH7 */
#define IFX_GTM_AUX_IN_SRC_TIM_SRC_CH7_OFF (7u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH0 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH0_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH0 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH0 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH0_OFF (16u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH1 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH1_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH1 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH1 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH1_OFF (17u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH2 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH2 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH2 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH2_OFF (18u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH3 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH3_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH3 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH3 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH3_OFF (19u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH4 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH4_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH4 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH4 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH4_OFF (20u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH5 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH5_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH5 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH5 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH5_OFF (21u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH6 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH6_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH6 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH6 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH6_OFF (22u)

/** \brief Length for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH7 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH7_LEN (1u)

/** \brief Mask for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH7 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_AUX_IN_SRC_TIM_Bits.SEL_OUT_N_CH7 */
#define IFX_GTM_AUX_IN_SRC_TIM_SEL_OUT_N_CH7_OFF (23u)

/** \brief Length for Ifx_GTM_EXT_CAP_EN_Bits.TIM_I_EXT_CAP_EN */
#define IFX_GTM_EXT_CAP_EN_TIM_I_EXT_CAP_EN_LEN (8u)

/** \brief Mask for Ifx_GTM_EXT_CAP_EN_Bits.TIM_I_EXT_CAP_EN */
#define IFX_GTM_EXT_CAP_EN_TIM_I_EXT_CAP_EN_MSK (0xffu)

/** \brief Offset for Ifx_GTM_EXT_CAP_EN_Bits.TIM_I_EXT_CAP_EN */
#define IFX_GTM_EXT_CAP_EN_TIM_I_EXT_CAP_EN_OFF (0u)

/** \brief Length for Ifx_GTM_EXT_CAP_EN_Bits.TIM_IP1_EXT_CAP_EN */
#define IFX_GTM_EXT_CAP_EN_TIM_IP1_EXT_CAP_EN_LEN (8u)

/** \brief Mask for Ifx_GTM_EXT_CAP_EN_Bits.TIM_IP1_EXT_CAP_EN */
#define IFX_GTM_EXT_CAP_EN_TIM_IP1_EXT_CAP_EN_MSK (0xffu)

/** \brief Offset for Ifx_GTM_EXT_CAP_EN_Bits.TIM_IP1_EXT_CAP_EN */
#define IFX_GTM_EXT_CAP_EN_TIM_IP1_EXT_CAP_EN_OFF (8u)

/** \brief Length for Ifx_GTM_OUT_TOM_Bits.TOM_OUT */
#define IFX_GTM_OUT_TOM_TOM_OUT_LEN (16u)

/** \brief Mask for Ifx_GTM_OUT_TOM_Bits.TOM_OUT */
#define IFX_GTM_OUT_TOM_TOM_OUT_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_OUT_TOM_Bits.TOM_OUT */
#define IFX_GTM_OUT_TOM_TOM_OUT_OFF (0u)

/** \brief Length for Ifx_GTM_OUT_TOM_Bits.TOM_OUT_N */
#define IFX_GTM_OUT_TOM_TOM_OUT_N_LEN (16u)

/** \brief Mask for Ifx_GTM_OUT_TOM_Bits.TOM_OUT_N */
#define IFX_GTM_OUT_TOM_TOM_OUT_N_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_OUT_TOM_Bits.TOM_OUT_N */
#define IFX_GTM_OUT_TOM_TOM_OUT_N_OFF (16u)

/** \brief Length for Ifx_GTM_OUT_ATOM_Bits.ATOM_I_OUT */
#define IFX_GTM_OUT_ATOM_ATOM_I_OUT_LEN (8u)

/** \brief Mask for Ifx_GTM_OUT_ATOM_Bits.ATOM_I_OUT */
#define IFX_GTM_OUT_ATOM_ATOM_I_OUT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_OUT_ATOM_Bits.ATOM_I_OUT */
#define IFX_GTM_OUT_ATOM_ATOM_I_OUT_OFF (0u)

/** \brief Length for Ifx_GTM_OUT_ATOM_Bits.ATOM_I_OUT_N */
#define IFX_GTM_OUT_ATOM_ATOM_I_OUT_N_LEN (8u)

/** \brief Mask for Ifx_GTM_OUT_ATOM_Bits.ATOM_I_OUT_N */
#define IFX_GTM_OUT_ATOM_ATOM_I_OUT_N_MSK (0xffu)

/** \brief Offset for Ifx_GTM_OUT_ATOM_Bits.ATOM_I_OUT_N */
#define IFX_GTM_OUT_ATOM_ATOM_I_OUT_N_OFF (8u)

/** \brief Length for Ifx_GTM_OUT_ATOM_Bits.ATOM_IP1_OUT */
#define IFX_GTM_OUT_ATOM_ATOM_IP1_OUT_LEN (8u)

/** \brief Mask for Ifx_GTM_OUT_ATOM_Bits.ATOM_IP1_OUT */
#define IFX_GTM_OUT_ATOM_ATOM_IP1_OUT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_OUT_ATOM_Bits.ATOM_IP1_OUT */
#define IFX_GTM_OUT_ATOM_ATOM_IP1_OUT_OFF (16u)

/** \brief Length for Ifx_GTM_OUT_ATOM_Bits.ATOM_IP1_OUT_N */
#define IFX_GTM_OUT_ATOM_ATOM_IP1_OUT_N_LEN (8u)

/** \brief Mask for Ifx_GTM_OUT_ATOM_Bits.ATOM_IP1_OUT_N */
#define IFX_GTM_OUT_ATOM_ATOM_IP1_OUT_N_MSK (0xffu)

/** \brief Offset for Ifx_GTM_OUT_ATOM_Bits.ATOM_IP1_OUT_N */
#define IFX_GTM_OUT_ATOM_ATOM_IP1_OUT_N_OFF (24u)

/** \brief Length for Ifx_GTM_CLS_CLK_CFG_Bits.CLS0_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS0_CLK_DIV_LEN (2u)

/** \brief Mask for Ifx_GTM_CLS_CLK_CFG_Bits.CLS0_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS0_CLK_DIV_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CLS_CLK_CFG_Bits.CLS0_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS0_CLK_DIV_OFF (0u)

/** \brief Length for Ifx_GTM_CLS_CLK_CFG_Bits.CLS1_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS1_CLK_DIV_LEN (2u)

/** \brief Mask for Ifx_GTM_CLS_CLK_CFG_Bits.CLS1_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS1_CLK_DIV_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CLS_CLK_CFG_Bits.CLS1_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS1_CLK_DIV_OFF (2u)

/** \brief Length for Ifx_GTM_CLS_CLK_CFG_Bits.CLS2_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS2_CLK_DIV_LEN (2u)

/** \brief Mask for Ifx_GTM_CLS_CLK_CFG_Bits.CLS2_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS2_CLK_DIV_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CLS_CLK_CFG_Bits.CLS2_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS2_CLK_DIV_OFF (4u)

/** \brief Length for Ifx_GTM_CLS_CLK_CFG_Bits.CLS3_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS3_CLK_DIV_LEN (2u)

/** \brief Mask for Ifx_GTM_CLS_CLK_CFG_Bits.CLS3_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS3_CLK_DIV_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CLS_CLK_CFG_Bits.CLS3_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS3_CLK_DIV_OFF (6u)

/** \brief Length for Ifx_GTM_CLS_CLK_CFG_Bits.CLS4_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS4_CLK_DIV_LEN (2u)

/** \brief Mask for Ifx_GTM_CLS_CLK_CFG_Bits.CLS4_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS4_CLK_DIV_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CLS_CLK_CFG_Bits.CLS4_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS4_CLK_DIV_OFF (8u)

/** \brief Length for Ifx_GTM_CLS_CLK_CFG_Bits.CLS5_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS5_CLK_DIV_LEN (2u)

/** \brief Mask for Ifx_GTM_CLS_CLK_CFG_Bits.CLS5_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS5_CLK_DIV_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CLS_CLK_CFG_Bits.CLS5_CLK_DIV */
#define IFX_GTM_CLS_CLK_CFG_CLS5_CLK_DIV_OFF (10u)

/** \brief Length for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH0 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH0_LEN (2u)

/** \brief Mask for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH0 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH0 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH0_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH1 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH1_LEN (2u)

/** \brief Mask for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH1 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH1 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH1_OFF (2u)

/** \brief Length for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH2 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH2_LEN (2u)

/** \brief Mask for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH2 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH2 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH2_OFF (4u)

/** \brief Length for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH3 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH3_LEN (2u)

/** \brief Mask for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH3 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TBU_CHEN_Bits.ENDIS_CH3 */
#define IFX_GTM_TBU_CHEN_ENDIS_CH3_OFF (6u)

/** \brief Length for Ifx_GTM_TBU_CH0_CTRL_Bits.LOW_RES */
#define IFX_GTM_TBU_CH0_CTRL_LOW_RES_LEN (1u)

/** \brief Mask for Ifx_GTM_TBU_CH0_CTRL_Bits.LOW_RES */
#define IFX_GTM_TBU_CH0_CTRL_LOW_RES_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TBU_CH0_CTRL_Bits.LOW_RES */
#define IFX_GTM_TBU_CH0_CTRL_LOW_RES_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH0_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH0_CTRL_CH_CLK_SRC_LEN (3u)

/** \brief Mask for Ifx_GTM_TBU_CH0_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH0_CTRL_CH_CLK_SRC_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TBU_CH0_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH0_CTRL_CH_CLK_SRC_OFF (1u)

/** \brief Length for Ifx_GTM_TBU_CH0_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH0_BASE_BASE_LEN (27u)

/** \brief Mask for Ifx_GTM_TBU_CH0_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH0_BASE_BASE_MSK (0x7ffffffu)

/** \brief Offset for Ifx_GTM_TBU_CH0_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH0_BASE_BASE_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH1_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH1_CTRL_CH_MODE_LEN (1u)

/** \brief Mask for Ifx_GTM_TBU_CH1_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH1_CTRL_CH_MODE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TBU_CH1_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH1_CTRL_CH_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH1_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH1_CTRL_CH_CLK_SRC_LEN (3u)

/** \brief Mask for Ifx_GTM_TBU_CH1_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH1_CTRL_CH_CLK_SRC_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TBU_CH1_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH1_CTRL_CH_CLK_SRC_OFF (1u)

/** \brief Length for Ifx_GTM_TBU_CH1_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH1_BASE_BASE_LEN (24u)

/** \brief Mask for Ifx_GTM_TBU_CH1_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH1_BASE_BASE_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TBU_CH1_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH1_BASE_BASE_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH2_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH2_CTRL_CH_MODE_LEN (1u)

/** \brief Mask for Ifx_GTM_TBU_CH2_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH2_CTRL_CH_MODE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TBU_CH2_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH2_CTRL_CH_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH2_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH2_CTRL_CH_CLK_SRC_LEN (3u)

/** \brief Mask for Ifx_GTM_TBU_CH2_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH2_CTRL_CH_CLK_SRC_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TBU_CH2_CTRL_Bits.CH_CLK_SRC */
#define IFX_GTM_TBU_CH2_CTRL_CH_CLK_SRC_OFF (1u)

/** \brief Length for Ifx_GTM_TBU_CH2_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH2_BASE_BASE_LEN (24u)

/** \brief Mask for Ifx_GTM_TBU_CH2_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH2_BASE_BASE_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TBU_CH2_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH2_BASE_BASE_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH3_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH3_CTRL_CH_MODE_LEN (1u)

/** \brief Mask for Ifx_GTM_TBU_CH3_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH3_CTRL_CH_MODE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TBU_CH3_CTRL_Bits.CH_MODE */
#define IFX_GTM_TBU_CH3_CTRL_CH_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH3_CTRL_Bits.USE_CH2 */
#define IFX_GTM_TBU_CH3_CTRL_USE_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_TBU_CH3_CTRL_Bits.USE_CH2 */
#define IFX_GTM_TBU_CH3_CTRL_USE_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TBU_CH3_CTRL_Bits.USE_CH2 */
#define IFX_GTM_TBU_CH3_CTRL_USE_CH2_OFF (4u)

/** \brief Length for Ifx_GTM_TBU_CH3_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH3_BASE_BASE_LEN (24u)

/** \brief Mask for Ifx_GTM_TBU_CH3_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH3_BASE_BASE_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TBU_CH3_BASE_Bits.BASE */
#define IFX_GTM_TBU_CH3_BASE_BASE_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH3_BASE_MARK_Bits.BASE_MARK */
#define IFX_GTM_TBU_CH3_BASE_MARK_BASE_MARK_LEN (24u)

/** \brief Mask for Ifx_GTM_TBU_CH3_BASE_MARK_Bits.BASE_MARK */
#define IFX_GTM_TBU_CH3_BASE_MARK_BASE_MARK_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TBU_CH3_BASE_MARK_Bits.BASE_MARK */
#define IFX_GTM_TBU_CH3_BASE_MARK_BASE_MARK_OFF (0u)

/** \brief Length for Ifx_GTM_TBU_CH3_BASE_CAPTURE_Bits.BASE_CAPTURE */
#define IFX_GTM_TBU_CH3_BASE_CAPTURE_BASE_CAPTURE_LEN (24u)

/** \brief Mask for Ifx_GTM_TBU_CH3_BASE_CAPTURE_Bits.BASE_CAPTURE */
#define IFX_GTM_TBU_CH3_BASE_CAPTURE_BASE_CAPTURE_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TBU_CH3_BASE_CAPTURE_Bits.BASE_CAPTURE */
#define IFX_GTM_TBU_CH3_BASE_CAPTURE_BASE_CAPTURE_OFF (0u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU0 */
#define IFX_GTM_MON_STATUS_ACT_CMU0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU0 */
#define IFX_GTM_MON_STATUS_ACT_CMU0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU0 */
#define IFX_GTM_MON_STATUS_ACT_CMU0_OFF (0u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU1 */
#define IFX_GTM_MON_STATUS_ACT_CMU1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU1 */
#define IFX_GTM_MON_STATUS_ACT_CMU1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU1 */
#define IFX_GTM_MON_STATUS_ACT_CMU1_OFF (1u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU2 */
#define IFX_GTM_MON_STATUS_ACT_CMU2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU2 */
#define IFX_GTM_MON_STATUS_ACT_CMU2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU2 */
#define IFX_GTM_MON_STATUS_ACT_CMU2_OFF (2u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU3 */
#define IFX_GTM_MON_STATUS_ACT_CMU3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU3 */
#define IFX_GTM_MON_STATUS_ACT_CMU3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU3 */
#define IFX_GTM_MON_STATUS_ACT_CMU3_OFF (3u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU4 */
#define IFX_GTM_MON_STATUS_ACT_CMU4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU4 */
#define IFX_GTM_MON_STATUS_ACT_CMU4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU4 */
#define IFX_GTM_MON_STATUS_ACT_CMU4_OFF (4u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU5 */
#define IFX_GTM_MON_STATUS_ACT_CMU5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU5 */
#define IFX_GTM_MON_STATUS_ACT_CMU5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU5 */
#define IFX_GTM_MON_STATUS_ACT_CMU5_OFF (5u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU6 */
#define IFX_GTM_MON_STATUS_ACT_CMU6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU6 */
#define IFX_GTM_MON_STATUS_ACT_CMU6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU6 */
#define IFX_GTM_MON_STATUS_ACT_CMU6_OFF (6u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU7 */
#define IFX_GTM_MON_STATUS_ACT_CMU7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU7 */
#define IFX_GTM_MON_STATUS_ACT_CMU7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU7 */
#define IFX_GTM_MON_STATUS_ACT_CMU7_OFF (7u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX0 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX0 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX0 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX0_OFF (8u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX1 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX1 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX1 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX1_OFF (9u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX2 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX2 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX2 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX2_OFF (10u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX3 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX3 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX3 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX3_OFF (11u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX4 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX4 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMUFX4 */
#define IFX_GTM_MON_STATUS_ACT_CMUFX4_OFF (12u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.ACT_CMU8 */
#define IFX_GTM_MON_STATUS_ACT_CMU8_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.ACT_CMU8 */
#define IFX_GTM_MON_STATUS_ACT_CMU8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.ACT_CMU8 */
#define IFX_GTM_MON_STATUS_ACT_CMU8_OFF (14u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.CMP_ERR */
#define IFX_GTM_MON_STATUS_CMP_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.CMP_ERR */
#define IFX_GTM_MON_STATUS_CMP_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.CMP_ERR */
#define IFX_GTM_MON_STATUS_CMP_ERR_OFF (16u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.MCS0_ERR */
#define IFX_GTM_MON_STATUS_MCS0_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.MCS0_ERR */
#define IFX_GTM_MON_STATUS_MCS0_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.MCS0_ERR */
#define IFX_GTM_MON_STATUS_MCS0_ERR_OFF (20u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.MCS1_ERR */
#define IFX_GTM_MON_STATUS_MCS1_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.MCS1_ERR */
#define IFX_GTM_MON_STATUS_MCS1_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.MCS1_ERR */
#define IFX_GTM_MON_STATUS_MCS1_ERR_OFF (21u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.MCS2_ERR */
#define IFX_GTM_MON_STATUS_MCS2_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.MCS2_ERR */
#define IFX_GTM_MON_STATUS_MCS2_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.MCS2_ERR */
#define IFX_GTM_MON_STATUS_MCS2_ERR_OFF (22u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.MCS3_ERR */
#define IFX_GTM_MON_STATUS_MCS3_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.MCS3_ERR */
#define IFX_GTM_MON_STATUS_MCS3_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.MCS3_ERR */
#define IFX_GTM_MON_STATUS_MCS3_ERR_OFF (23u)

/** \brief Length for Ifx_GTM_MON_STATUS_Bits.MCS4_ERR */
#define IFX_GTM_MON_STATUS_MCS4_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_STATUS_Bits.MCS4_ERR */
#define IFX_GTM_MON_STATUS_MCS4_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_STATUS_Bits.MCS4_ERR */
#define IFX_GTM_MON_STATUS_MCS4_ERR_OFF (24u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_0_OFF (0u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_1_OFF (1u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_2_OFF (2u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_3_OFF (3u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_4_OFF (4u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_5_OFF (5u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_6_OFF (6u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_0_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_0_7_OFF (7u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_0_OFF (8u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_1_OFF (9u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_2_OFF (10u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_3_OFF (11u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_4_OFF (12u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_5_OFF (13u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_6_OFF (14u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_1_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_1_7_OFF (15u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_0_OFF (16u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_1_OFF (17u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_2_OFF (18u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_3_OFF (19u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_4_OFF (20u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_5_OFF (21u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_6_OFF (22u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_2_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_2_7_OFF (23u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_0 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_0_OFF (24u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_1 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_1_OFF (25u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_2 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_2_OFF (26u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_3 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_3_OFF (27u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_4 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_4_OFF (28u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_5 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_5_OFF (29u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_6 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_6_OFF (30u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R0_Bits.MCA_3_7 */
#define IFX_GTM_MON_ACTIVITY_R0_MCA_3_7_OFF (31u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_0_OFF (0u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_1_OFF (1u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_2_OFF (2u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_3_OFF (3u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_4_OFF (4u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_5_OFF (5u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_6_OFF (6u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_4_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_4_7_OFF (7u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_0_OFF (8u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_1_OFF (9u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_2_OFF (10u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_3_OFF (11u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_4_OFF (12u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_5_OFF (13u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_6_OFF (14u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_5_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_5_7_OFF (15u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_0_OFF (16u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_1_OFF (17u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_2_OFF (18u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_3_OFF (19u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_4_OFF (20u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_5_OFF (21u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_6_OFF (22u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_6_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_6_7_OFF (23u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_0 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_0_OFF (24u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_1 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_1_OFF (25u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_2 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_2_OFF (26u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_3 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_3_OFF (27u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_4 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_4_OFF (28u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_5 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_5_OFF (29u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_6 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_6_OFF (30u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_R1_Bits.MCA_7_7 */
#define IFX_GTM_MON_ACTIVITY_R1_MCA_7_7_OFF (31u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_0 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_0_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_0 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_0 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_0_OFF (0u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_1 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_1_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_1 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_1 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_1_OFF (1u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_2 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_2_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_2 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_2 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_2_OFF (2u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_3 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_3_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_3 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_3 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_3_OFF (3u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_4 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_4_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_4 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_4 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_4_OFF (4u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_5 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_5_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_5 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_5 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_5_OFF (5u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_6 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_6_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_6 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_6 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_6_OFF (6u)

/** \brief Length for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_7 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_7_LEN (1u)

/** \brief Mask for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_7 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MON_ACTIVITY_MCS_Bits.MCA_7 */
#define IFX_GTM_MON_ACTIVITY_MCS_MCA_7_OFF (7u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC0_EN */
#define IFX_GTM_CMP_EN_ABWC0_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC0_EN */
#define IFX_GTM_CMP_EN_ABWC0_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC0_EN */
#define IFX_GTM_CMP_EN_ABWC0_EN_OFF (0u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC1_EN */
#define IFX_GTM_CMP_EN_ABWC1_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC1_EN */
#define IFX_GTM_CMP_EN_ABWC1_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC1_EN */
#define IFX_GTM_CMP_EN_ABWC1_EN_OFF (1u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC2_EN */
#define IFX_GTM_CMP_EN_ABWC2_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC2_EN */
#define IFX_GTM_CMP_EN_ABWC2_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC2_EN */
#define IFX_GTM_CMP_EN_ABWC2_EN_OFF (2u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC3_EN */
#define IFX_GTM_CMP_EN_ABWC3_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC3_EN */
#define IFX_GTM_CMP_EN_ABWC3_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC3_EN */
#define IFX_GTM_CMP_EN_ABWC3_EN_OFF (3u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC4_EN */
#define IFX_GTM_CMP_EN_ABWC4_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC4_EN */
#define IFX_GTM_CMP_EN_ABWC4_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC4_EN */
#define IFX_GTM_CMP_EN_ABWC4_EN_OFF (4u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC5_EN */
#define IFX_GTM_CMP_EN_ABWC5_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC5_EN */
#define IFX_GTM_CMP_EN_ABWC5_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC5_EN */
#define IFX_GTM_CMP_EN_ABWC5_EN_OFF (5u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC6_EN */
#define IFX_GTM_CMP_EN_ABWC6_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC6_EN */
#define IFX_GTM_CMP_EN_ABWC6_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC6_EN */
#define IFX_GTM_CMP_EN_ABWC6_EN_OFF (6u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC7_EN */
#define IFX_GTM_CMP_EN_ABWC7_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC7_EN */
#define IFX_GTM_CMP_EN_ABWC7_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC7_EN */
#define IFX_GTM_CMP_EN_ABWC7_EN_OFF (7u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC8_EN */
#define IFX_GTM_CMP_EN_ABWC8_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC8_EN */
#define IFX_GTM_CMP_EN_ABWC8_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC8_EN */
#define IFX_GTM_CMP_EN_ABWC8_EN_OFF (8u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC9_EN */
#define IFX_GTM_CMP_EN_ABWC9_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC9_EN */
#define IFX_GTM_CMP_EN_ABWC9_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC9_EN */
#define IFX_GTM_CMP_EN_ABWC9_EN_OFF (9u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC10_EN */
#define IFX_GTM_CMP_EN_ABWC10_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC10_EN */
#define IFX_GTM_CMP_EN_ABWC10_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC10_EN */
#define IFX_GTM_CMP_EN_ABWC10_EN_OFF (10u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.ABWC11_EN */
#define IFX_GTM_CMP_EN_ABWC11_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.ABWC11_EN */
#define IFX_GTM_CMP_EN_ABWC11_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.ABWC11_EN */
#define IFX_GTM_CMP_EN_ABWC11_EN_OFF (11u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC0_EN */
#define IFX_GTM_CMP_EN_TBWC0_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC0_EN */
#define IFX_GTM_CMP_EN_TBWC0_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC0_EN */
#define IFX_GTM_CMP_EN_TBWC0_EN_OFF (12u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC1_EN */
#define IFX_GTM_CMP_EN_TBWC1_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC1_EN */
#define IFX_GTM_CMP_EN_TBWC1_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC1_EN */
#define IFX_GTM_CMP_EN_TBWC1_EN_OFF (13u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC2_EN */
#define IFX_GTM_CMP_EN_TBWC2_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC2_EN */
#define IFX_GTM_CMP_EN_TBWC2_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC2_EN */
#define IFX_GTM_CMP_EN_TBWC2_EN_OFF (14u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC3_EN */
#define IFX_GTM_CMP_EN_TBWC3_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC3_EN */
#define IFX_GTM_CMP_EN_TBWC3_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC3_EN */
#define IFX_GTM_CMP_EN_TBWC3_EN_OFF (15u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC4_EN */
#define IFX_GTM_CMP_EN_TBWC4_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC4_EN */
#define IFX_GTM_CMP_EN_TBWC4_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC4_EN */
#define IFX_GTM_CMP_EN_TBWC4_EN_OFF (16u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC5_EN */
#define IFX_GTM_CMP_EN_TBWC5_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC5_EN */
#define IFX_GTM_CMP_EN_TBWC5_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC5_EN */
#define IFX_GTM_CMP_EN_TBWC5_EN_OFF (17u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC6_EN */
#define IFX_GTM_CMP_EN_TBWC6_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC6_EN */
#define IFX_GTM_CMP_EN_TBWC6_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC6_EN */
#define IFX_GTM_CMP_EN_TBWC6_EN_OFF (18u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC7_EN */
#define IFX_GTM_CMP_EN_TBWC7_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC7_EN */
#define IFX_GTM_CMP_EN_TBWC7_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC7_EN */
#define IFX_GTM_CMP_EN_TBWC7_EN_OFF (19u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC8_EN */
#define IFX_GTM_CMP_EN_TBWC8_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC8_EN */
#define IFX_GTM_CMP_EN_TBWC8_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC8_EN */
#define IFX_GTM_CMP_EN_TBWC8_EN_OFF (20u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC9_EN */
#define IFX_GTM_CMP_EN_TBWC9_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC9_EN */
#define IFX_GTM_CMP_EN_TBWC9_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC9_EN */
#define IFX_GTM_CMP_EN_TBWC9_EN_OFF (21u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC10_EN */
#define IFX_GTM_CMP_EN_TBWC10_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC10_EN */
#define IFX_GTM_CMP_EN_TBWC10_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC10_EN */
#define IFX_GTM_CMP_EN_TBWC10_EN_OFF (22u)

/** \brief Length for Ifx_GTM_CMP_EN_Bits.TBWC11_EN */
#define IFX_GTM_CMP_EN_TBWC11_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EN_Bits.TBWC11_EN */
#define IFX_GTM_CMP_EN_TBWC11_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EN_Bits.TBWC11_EN */
#define IFX_GTM_CMP_EN_TBWC11_EN_OFF (23u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC0 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC0_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC0 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC0 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC0_OFF (0u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC1 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC1_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC1 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC1 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC1_OFF (1u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC2 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC2_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC2 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC2 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC2_OFF (2u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC3 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC3_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC3 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC3 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC3_OFF (3u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC4 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC4_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC4 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC4 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC4_OFF (4u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC5 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC5_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC5 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC5 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC5_OFF (5u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC6 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC6_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC6 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC6 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC6_OFF (6u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC7 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC7_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC7 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC7 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC7_OFF (7u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC8 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC8_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC8 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC8 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC8_OFF (8u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC9 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC9_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC9 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC9 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC9_OFF (9u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC10 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC10_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC10 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC10 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC10_OFF (10u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC11 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC11_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC11 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.ABWC11 */
#define IFX_GTM_CMP_IRQ_NOTIFY_ABWC11_OFF (11u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC0 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC0_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC0 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC0 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC0_OFF (12u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC1 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC1_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC1 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC1 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC1_OFF (13u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC2 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC2_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC2 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC2 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC2_OFF (14u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC3 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC3_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC3 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC3 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC3_OFF (15u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC4 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC4_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC4 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC4 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC4_OFF (16u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC5 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC5_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC5 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC5 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC5_OFF (17u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC6 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC6_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC6 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC6 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC6_OFF (18u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC7 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC7_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC7 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC7 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC7_OFF (19u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC8 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC8_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC8 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC8 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC8_OFF (20u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC9 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC9_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC9 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC9 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC9_OFF (21u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC10 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC10_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC10 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC10 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC10_OFF (22u)

/** \brief Length for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC11 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC11_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC11 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_NOTIFY_Bits.TBWC11 */
#define IFX_GTM_CMP_IRQ_NOTIFY_TBWC11_OFF (23u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC0_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC0_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC0_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC0_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC0_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC0_EN_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC1_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC1_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC1_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC1_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC1_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC1_EN_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC2_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC2_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC2_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC2_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC2_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC2_EN_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC3_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC3_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC3_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC3_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC3_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC3_EN_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC4_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC4_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC4_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC4_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC4_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC4_EN_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC5_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC5_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC5_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC5_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC5_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC5_EN_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC6_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC6_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC6_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC6_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC6_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC6_EN_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC7_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC7_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC7_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC7_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC7_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC7_EN_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC8_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC8_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC8_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC8_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC8_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC8_EN_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC9_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC9_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC9_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC9_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC9_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC9_EN_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC10_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC10_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC10_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC10_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC10_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC10_EN_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC11_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC11_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC11_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC11_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.ABWC11_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_ABWC11_EN_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC0_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC0_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC0_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC0_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC0_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC0_EN_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC1_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC1_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC1_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC1_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC1_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC1_EN_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC2_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC2_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC2_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC2_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC2_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC2_EN_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC3_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC3_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC3_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC3_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC3_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC3_EN_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC4_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC4_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC4_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC4_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC4_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC4_EN_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC5_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC5_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC5_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC5_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC5_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC5_EN_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC6_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC6_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC6_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC6_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC6_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC6_EN_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC7_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC7_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC7_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC7_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC7_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC7_EN_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC8_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC8_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC8_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC8_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC8_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC8_EN_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC9_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC9_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC9_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC9_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC9_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC9_EN_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC10_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC10_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC10_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC10_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC10_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC10_EN_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC11_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC11_EN_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC11_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC11_EN_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_EN_Bits.TBWC11_EN_IRQ */
#define IFX_GTM_CMP_IRQ_EN_TBWC11_EN_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC0 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC0_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC0 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC0 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC0_OFF (0u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC1 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC1_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC1 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC1 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC1_OFF (1u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC2 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC2_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC2 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC2 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC2_OFF (2u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC3 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC3_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC3 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC3 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC3_OFF (3u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC4 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC4_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC4 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC4 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC4_OFF (4u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC5 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC5_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC5 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC5 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC5_OFF (5u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC6 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC6_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC6 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC6 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC6_OFF (6u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC7 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC7_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC7 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC7 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC7_OFF (7u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC8 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC8_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC8 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC8 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC8_OFF (8u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC9 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC9_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC9 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC9 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC9_OFF (9u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC10 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC10_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC10 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC10 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC10_OFF (10u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC11 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC11_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC11 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_ABWC11 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_ABWC11_OFF (11u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC0 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC0_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC0 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC0 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC0_OFF (12u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC1 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC1_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC1 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC1 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC1_OFF (13u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC2 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC2_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC2 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC2 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC2_OFF (14u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC3 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC3_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC3 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC3 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC3_OFF (15u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC4 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC4_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC4 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC4 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC4_OFF (16u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC5 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC5_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC5 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC5 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC5_OFF (17u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC6 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC6_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC6 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC6 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC6_OFF (18u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC7 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC7_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC7 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC7 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC7_OFF (19u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC8 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC8_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC8 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC8 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC8_OFF (20u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC9 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC9_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC9 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC9 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC9_OFF (21u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC10 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC10_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC10 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC10 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC10_OFF (22u)

/** \brief Length for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC11 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC11_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC11 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_FORCINT_Bits.TRG_TBWC11 */
#define IFX_GTM_CMP_IRQ_FORCINT_TRG_TBWC11_OFF (23u)

/** \brief Length for Ifx_GTM_CMP_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_CMP_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_CMP_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_CMP_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMP_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_CMP_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC0_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC0_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC0_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC0_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC0_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC0_EN_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC1_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC1_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC1_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC1_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC1_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC1_EN_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC2_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC2_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC2_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC2_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC2_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC2_EN_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC3_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC3_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC3_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC3_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC3_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC3_EN_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC4_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC4_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC4_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC4_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC4_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC4_EN_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC5_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC5_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC5_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC5_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC5_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC5_EN_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC6_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC6_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC6_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC6_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC6_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC6_EN_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC7_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC7_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC7_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC7_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC7_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC7_EN_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC8_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC8_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC8_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC8_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC8_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC8_EN_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC9_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC9_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC9_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC9_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC9_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC9_EN_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC10_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC10_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC10_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC10_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC10_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC10_EN_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC11_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC11_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC11_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC11_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.ABWC11_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_ABWC11_EN_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC0_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC0_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC0_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC0_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC0_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC0_EN_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC1_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC1_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC1_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC1_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC1_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC1_EN_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC2_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC2_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC2_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC2_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC2_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC2_EN_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC3_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC3_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC3_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC3_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC3_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC3_EN_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC4_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC4_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC4_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC4_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC4_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC4_EN_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC5_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC5_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC5_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC5_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC5_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC5_EN_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC6_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC6_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC6_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC6_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC6_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC6_EN_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC7_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC7_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC7_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC7_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC7_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC7_EN_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC8_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC8_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC8_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC8_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC8_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC8_EN_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC9_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC9_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC9_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC9_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC9_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC9_EN_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC10_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC10_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC10_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC10_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC10_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC10_EN_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC11_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC11_EN_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC11_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC11_EN_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMP_EIRQ_EN_Bits.TBWC11_EN_EIRQ */
#define IFX_GTM_CMP_EIRQ_EN_TBWC11_EN_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ARU_ACCESS_Bits.ADDR */
#define IFX_GTM_ARU_ACCESS_ADDR_LEN (9u)

/** \brief Mask for Ifx_GTM_ARU_ACCESS_Bits.ADDR */
#define IFX_GTM_ARU_ACCESS_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_ARU_ACCESS_Bits.ADDR */
#define IFX_GTM_ARU_ACCESS_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_ACCESS_Bits.RREQ */
#define IFX_GTM_ARU_ACCESS_RREQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_ACCESS_Bits.RREQ */
#define IFX_GTM_ARU_ACCESS_RREQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_ACCESS_Bits.RREQ */
#define IFX_GTM_ARU_ACCESS_RREQ_OFF (12u)

/** \brief Length for Ifx_GTM_ARU_ACCESS_Bits.WREQ */
#define IFX_GTM_ARU_ACCESS_WREQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_ACCESS_Bits.WREQ */
#define IFX_GTM_ARU_ACCESS_WREQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_ACCESS_Bits.WREQ */
#define IFX_GTM_ARU_ACCESS_WREQ_OFF (13u)

/** \brief Length for Ifx_GTM_ARU_DATA_H_Bits.DATA */
#define IFX_GTM_ARU_DATA_H_DATA_LEN (29u)

/** \brief Mask for Ifx_GTM_ARU_DATA_H_Bits.DATA */
#define IFX_GTM_ARU_DATA_H_DATA_MSK (0x1fffffffu)

/** \brief Offset for Ifx_GTM_ARU_DATA_H_Bits.DATA */
#define IFX_GTM_ARU_DATA_H_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DATA_L_Bits.DATA */
#define IFX_GTM_ARU_DATA_L_DATA_LEN (29u)

/** \brief Mask for Ifx_GTM_ARU_DATA_L_Bits.DATA */
#define IFX_GTM_ARU_DATA_L_DATA_MSK (0x1fffffffu)

/** \brief Offset for Ifx_GTM_ARU_DATA_L_Bits.DATA */
#define IFX_GTM_ARU_DATA_L_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DBG_ACCESS0_Bits.ADDR */
#define IFX_GTM_ARU_DBG_ACCESS0_ADDR_LEN (9u)

/** \brief Mask for Ifx_GTM_ARU_DBG_ACCESS0_Bits.ADDR */
#define IFX_GTM_ARU_DBG_ACCESS0_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_ARU_DBG_ACCESS0_Bits.ADDR */
#define IFX_GTM_ARU_DBG_ACCESS0_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DBG_DATA0_H_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA0_H_DATA_LEN (29u)

/** \brief Mask for Ifx_GTM_ARU_DBG_DATA0_H_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA0_H_DATA_MSK (0x1fffffffu)

/** \brief Offset for Ifx_GTM_ARU_DBG_DATA0_H_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA0_H_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DBG_DATA0_L_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA0_L_DATA_LEN (29u)

/** \brief Mask for Ifx_GTM_ARU_DBG_DATA0_L_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA0_L_DATA_MSK (0x1fffffffu)

/** \brief Offset for Ifx_GTM_ARU_DBG_DATA0_L_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA0_L_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DBG_ACCESS1_Bits.ADDR */
#define IFX_GTM_ARU_DBG_ACCESS1_ADDR_LEN (9u)

/** \brief Mask for Ifx_GTM_ARU_DBG_ACCESS1_Bits.ADDR */
#define IFX_GTM_ARU_DBG_ACCESS1_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_ARU_DBG_ACCESS1_Bits.ADDR */
#define IFX_GTM_ARU_DBG_ACCESS1_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DBG_DATA1_H_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA1_H_DATA_LEN (29u)

/** \brief Mask for Ifx_GTM_ARU_DBG_DATA1_H_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA1_H_DATA_MSK (0x1fffffffu)

/** \brief Offset for Ifx_GTM_ARU_DBG_DATA1_H_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA1_H_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DBG_DATA1_L_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA1_L_DATA_LEN (29u)

/** \brief Mask for Ifx_GTM_ARU_DBG_DATA1_L_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA1_L_DATA_MSK (0x1fffffffu)

/** \brief Offset for Ifx_GTM_ARU_DBG_DATA1_L_Bits.DATA */
#define IFX_GTM_ARU_DBG_DATA1_L_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.NEW_DATA0 */
#define IFX_GTM_ARU_IRQ_NOTIFY_NEW_DATA0_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.NEW_DATA0 */
#define IFX_GTM_ARU_IRQ_NOTIFY_NEW_DATA0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.NEW_DATA0 */
#define IFX_GTM_ARU_IRQ_NOTIFY_NEW_DATA0_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.NEW_DATA1 */
#define IFX_GTM_ARU_IRQ_NOTIFY_NEW_DATA1_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.NEW_DATA1 */
#define IFX_GTM_ARU_IRQ_NOTIFY_NEW_DATA1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.NEW_DATA1 */
#define IFX_GTM_ARU_IRQ_NOTIFY_NEW_DATA1_OFF (1u)

/** \brief Length for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.ACC_ACK */
#define IFX_GTM_ARU_IRQ_NOTIFY_ACC_ACK_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.ACC_ACK */
#define IFX_GTM_ARU_IRQ_NOTIFY_ACC_ACK_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_NOTIFY_Bits.ACC_ACK */
#define IFX_GTM_ARU_IRQ_NOTIFY_ACC_ACK_OFF (2u)

/** \brief Length for Ifx_GTM_ARU_IRQ_EN_Bits.NEW_DATA0_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_NEW_DATA0_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_EN_Bits.NEW_DATA0_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_NEW_DATA0_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_EN_Bits.NEW_DATA0_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_NEW_DATA0_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_IRQ_EN_Bits.NEW_DATA1_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_NEW_DATA1_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_EN_Bits.NEW_DATA1_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_NEW_DATA1_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_EN_Bits.NEW_DATA1_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_NEW_DATA1_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_ARU_IRQ_EN_Bits.ACC_ACK_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_ACC_ACK_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_EN_Bits.ACC_ACK_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_ACC_ACK_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_EN_Bits.ACC_ACK_IRQ_EN */
#define IFX_GTM_ARU_IRQ_EN_ACC_ACK_IRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_NEW_DATA0 */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_NEW_DATA0_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_NEW_DATA0 */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_NEW_DATA0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_NEW_DATA0 */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_NEW_DATA0_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_NEW_DATA1 */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_NEW_DATA1_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_NEW_DATA1 */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_NEW_DATA1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_NEW_DATA1 */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_NEW_DATA1_OFF (1u)

/** \brief Length for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_ACC_ACK */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_ACC_ACK_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_ACC_ACK */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_ACC_ACK_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_FORCINT_Bits.TRG_ACC_ACK */
#define IFX_GTM_ARU_IRQ_FORCINT_TRG_ACC_ACK_OFF (2u)

/** \brief Length for Ifx_GTM_ARU_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_ARU_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ARU_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_ARU_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ARU_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_ARU_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_CADDR_END_Bits.CADDR_END */
#define IFX_GTM_ARU_CADDR_END_CADDR_END_LEN (7u)

/** \brief Mask for Ifx_GTM_ARU_CADDR_END_Bits.CADDR_END */
#define IFX_GTM_ARU_CADDR_END_CADDR_END_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_ARU_CADDR_END_Bits.CADDR_END */
#define IFX_GTM_ARU_CADDR_END_CADDR_END_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_CTRL_Bits.ARU_0_DYN_EN */
#define IFX_GTM_ARU_CTRL_ARU_0_DYN_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_ARU_CTRL_Bits.ARU_0_DYN_EN */
#define IFX_GTM_ARU_CTRL_ARU_0_DYN_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ARU_CTRL_Bits.ARU_0_DYN_EN */
#define IFX_GTM_ARU_CTRL_ARU_0_DYN_EN_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_CTRL_Bits.ARU_1_DYN_EN */
#define IFX_GTM_ARU_CTRL_ARU_1_DYN_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_ARU_CTRL_Bits.ARU_1_DYN_EN */
#define IFX_GTM_ARU_CTRL_ARU_1_DYN_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ARU_CTRL_Bits.ARU_1_DYN_EN */
#define IFX_GTM_ARU_CTRL_ARU_1_DYN_EN_OFF (2u)

/** \brief Length for Ifx_GTM_ARU_CTRL_Bits.ARU_DYN_RING_MODE */
#define IFX_GTM_ARU_CTRL_ARU_DYN_RING_MODE_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_CTRL_Bits.ARU_DYN_RING_MODE */
#define IFX_GTM_ARU_CTRL_ARU_DYN_RING_MODE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_CTRL_Bits.ARU_DYN_RING_MODE */
#define IFX_GTM_ARU_CTRL_ARU_DYN_RING_MODE_OFF (4u)

/** \brief Length for Ifx_GTM_ARU_DYN_CTRL_Bits.DYN_ARU_UPDATE_EN */
#define IFX_GTM_ARU_DYN_CTRL_DYN_ARU_UPDATE_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_DYN_CTRL_Bits.DYN_ARU_UPDATE_EN */
#define IFX_GTM_ARU_DYN_CTRL_DYN_ARU_UPDATE_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_DYN_CTRL_Bits.DYN_ARU_UPDATE_EN */
#define IFX_GTM_ARU_DYN_CTRL_DYN_ARU_UPDATE_EN_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DYN_CTRL_Bits.DYN_ROUTE_SWAP */
#define IFX_GTM_ARU_DYN_CTRL_DYN_ROUTE_SWAP_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_DYN_CTRL_Bits.DYN_ROUTE_SWAP */
#define IFX_GTM_ARU_DYN_CTRL_DYN_ROUTE_SWAP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_DYN_CTRL_Bits.DYN_ROUTE_SWAP */
#define IFX_GTM_ARU_DYN_CTRL_DYN_ROUTE_SWAP_OFF (1u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID0 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID0_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID0 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID0_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID0 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID0_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID1 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID1_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID1 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID1_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID1 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID1_OFF (8u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID2 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID2_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID2 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID2_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_LOW_Bits.DYN_READ_ID2 */
#define IFX_GTM_ARU_DYN_ROUTE_LOW_DYN_READ_ID2_OFF (16u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID3 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID3_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID3 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID3_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID3 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID3_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID4 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID4_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID4 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID4_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID4 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID4_OFF (8u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID5 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID5_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID5 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID5_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_READ_ID5 */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_READ_ID5_OFF (16u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_CLK_WAIT */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_CLK_WAIT_LEN (4u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_CLK_WAIT */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_CLK_WAIT_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_HIGH_Bits.DYN_CLK_WAIT */
#define IFX_GTM_ARU_DYN_ROUTE_HIGH_DYN_CLK_WAIT_OFF (24u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID6 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID6_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID6 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID6_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID6 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID6_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID7 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID7_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID7 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID7_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID7 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID7_OFF (8u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID8 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID8_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID8 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID8_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_LOW_Bits.DYN_READ_ID8 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_LOW_DYN_READ_ID8_OFF (16u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID9 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID9_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID9 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID9_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID9 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID9_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID10 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID10_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID10 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID10_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID10 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID10_OFF (8u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID11 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID11_LEN (8u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID11 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID11_MSK (0xffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_READ_ID11 */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_READ_ID11_OFF (16u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_CLK_WAIT */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_CLK_WAIT_LEN (4u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_CLK_WAIT */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_CLK_WAIT_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_CLK_WAIT */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_CLK_WAIT_OFF (24u)

/** \brief Length for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_UPDATE_EN */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_UPDATE_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_UPDATE_EN */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_UPDATE_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ARU_DYN_ROUTE_SR_HIGH_Bits.DYN_UPDATE_EN */
#define IFX_GTM_ARU_DYN_ROUTE_SR_HIGH_DYN_UPDATE_EN_OFF (28u)

/** \brief Length for Ifx_GTM_ARU_DYN_RDADDR_Bits.DYN_ARU_RDADDR */
#define IFX_GTM_ARU_DYN_RDADDR_DYN_ARU_RDADDR_LEN (9u)

/** \brief Mask for Ifx_GTM_ARU_DYN_RDADDR_Bits.DYN_ARU_RDADDR */
#define IFX_GTM_ARU_DYN_RDADDR_DYN_ARU_RDADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_ARU_DYN_RDADDR_Bits.DYN_ARU_RDADDR */
#define IFX_GTM_ARU_DYN_RDADDR_DYN_ARU_RDADDR_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_CADDR_Bits.CADDR_0 */
#define IFX_GTM_ARU_CADDR_CADDR_0_LEN (7u)

/** \brief Mask for Ifx_GTM_ARU_CADDR_Bits.CADDR_0 */
#define IFX_GTM_ARU_CADDR_CADDR_0_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_ARU_CADDR_Bits.CADDR_0 */
#define IFX_GTM_ARU_CADDR_CADDR_0_OFF (0u)

/** \brief Length for Ifx_GTM_ARU_CADDR_Bits.CADDR_1 */
#define IFX_GTM_ARU_CADDR_CADDR_1_LEN (7u)

/** \brief Mask for Ifx_GTM_ARU_CADDR_Bits.CADDR_1 */
#define IFX_GTM_ARU_CADDR_CADDR_1_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_ARU_CADDR_Bits.CADDR_1 */
#define IFX_GTM_ARU_CADDR_CADDR_1_OFF (16u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK0 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK0_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK0 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK0 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK0_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK1 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK1_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK1 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK1 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK1_OFF (2u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK2 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK2_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK2 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK2 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK2_OFF (4u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK3 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK3_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK3 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK3 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK3_OFF (6u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK4 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK4_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK4 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK4 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK4_OFF (8u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK5 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK5_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK5 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK5 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK5_OFF (10u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK6 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK6_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK6 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK6 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK6_OFF (12u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK7 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK7_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK7 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_CLK7 */
#define IFX_GTM_CMU_CLK_EN_EN_CLK7_OFF (14u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK0 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK0_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK0 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK0 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK0_OFF (16u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK1 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK1_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK1 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK1 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK1_OFF (18u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK2 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK2_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK2 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_ECLK2 */
#define IFX_GTM_CMU_CLK_EN_EN_ECLK2_OFF (20u)

/** \brief Length for Ifx_GTM_CMU_CLK_EN_Bits.EN_FXCLK */
#define IFX_GTM_CMU_CLK_EN_EN_FXCLK_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK_EN_Bits.EN_FXCLK */
#define IFX_GTM_CMU_CLK_EN_EN_FXCLK_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK_EN_Bits.EN_FXCLK */
#define IFX_GTM_CMU_CLK_EN_EN_FXCLK_OFF (22u)

/** \brief Length for Ifx_GTM_CMU_GCLK_NUM_Bits.GCLK_NUM */
#define IFX_GTM_CMU_GCLK_NUM_GCLK_NUM_LEN (24u)

/** \brief Mask for Ifx_GTM_CMU_GCLK_NUM_Bits.GCLK_NUM */
#define IFX_GTM_CMU_GCLK_NUM_GCLK_NUM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_CMU_GCLK_NUM_Bits.GCLK_NUM */
#define IFX_GTM_CMU_GCLK_NUM_GCLK_NUM_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_GCLK_DEN_Bits.GCLK_DEN */
#define IFX_GTM_CMU_GCLK_DEN_GCLK_DEN_LEN (24u)

/** \brief Mask for Ifx_GTM_CMU_GCLK_DEN_Bits.GCLK_DEN */
#define IFX_GTM_CMU_GCLK_DEN_GCLK_DEN_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_CMU_GCLK_DEN_Bits.GCLK_DEN */
#define IFX_GTM_CMU_GCLK_DEN_GCLK_DEN_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_CLK__CTRL_Bits.CLK_CNT */
#define IFX_GTM_CMU_CLK__CTRL_CLK_CNT_LEN (24u)

/** \brief Mask for Ifx_GTM_CMU_CLK__CTRL_Bits.CLK_CNT */
#define IFX_GTM_CMU_CLK__CTRL_CLK_CNT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_CMU_CLK__CTRL_Bits.CLK_CNT */
#define IFX_GTM_CMU_CLK__CTRL_CLK_CNT_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_CLK__CTRL_Bits.CLK_SEL */
#define IFX_GTM_CMU_CLK__CTRL_CLK_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_CMU_CLK__CTRL_Bits.CLK_SEL */
#define IFX_GTM_CMU_CLK__CTRL_CLK_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CMU_CLK__CTRL_Bits.CLK_SEL */
#define IFX_GTM_CMU_CLK__CTRL_CLK_SEL_OFF (24u)

/** \brief Length for Ifx_GTM_CMU_ECLK_NUM_Bits.ECLK_NUM */
#define IFX_GTM_CMU_ECLK_NUM_ECLK_NUM_LEN (24u)

/** \brief Mask for Ifx_GTM_CMU_ECLK_NUM_Bits.ECLK_NUM */
#define IFX_GTM_CMU_ECLK_NUM_ECLK_NUM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_CMU_ECLK_NUM_Bits.ECLK_NUM */
#define IFX_GTM_CMU_ECLK_NUM_ECLK_NUM_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_ECLK_DEN_Bits.ECLK_DEN */
#define IFX_GTM_CMU_ECLK_DEN_ECLK_DEN_LEN (24u)

/** \brief Mask for Ifx_GTM_CMU_ECLK_DEN_Bits.ECLK_DEN */
#define IFX_GTM_CMU_ECLK_DEN_ECLK_DEN_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_CMU_ECLK_DEN_Bits.ECLK_DEN */
#define IFX_GTM_CMU_ECLK_DEN_ECLK_DEN_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_FXCLK_CTRL_Bits.FXCLK_SEL */
#define IFX_GTM_CMU_FXCLK_CTRL_FXCLK_SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_CMU_FXCLK_CTRL_Bits.FXCLK_SEL */
#define IFX_GTM_CMU_FXCLK_CTRL_FXCLK_SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CMU_FXCLK_CTRL_Bits.FXCLK_SEL */
#define IFX_GTM_CMU_FXCLK_CTRL_FXCLK_SEL_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_GLB_CTRL_Bits.ARU_ADDR_RSTGLB */
#define IFX_GTM_CMU_GLB_CTRL_ARU_ADDR_RSTGLB_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_GLB_CTRL_Bits.ARU_ADDR_RSTGLB */
#define IFX_GTM_CMU_GLB_CTRL_ARU_ADDR_RSTGLB_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_GLB_CTRL_Bits.ARU_ADDR_RSTGLB */
#define IFX_GTM_CMU_GLB_CTRL_ARU_ADDR_RSTGLB_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK0_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK0_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK0_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK0_EXT_DIVIDER_OFF (0u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK1_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK1_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK1_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK1_EXT_DIVIDER_OFF (1u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK2_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK2_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK2_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK2_EXT_DIVIDER_OFF (2u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK3_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK3_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK3_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK3_EXT_DIVIDER_OFF (3u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK4_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK4_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK4_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK4_EXT_DIVIDER_OFF (4u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK5_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK5_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK5_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK5_EXT_DIVIDER_OFF (5u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK6_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK6_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK6_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK6_EXT_DIVIDER_OFF (6u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK7_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK7_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK7_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK7_EXT_DIVIDER_OFF (7u)

/** \brief Length for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK8_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_LEN (1u)

/** \brief Mask for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK8_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CMU_CLK_CTRL_Bits.CLK8_EXT_DIVIDER */
#define IFX_GTM_CMU_CLK_CTRL_CLK8_EXT_DIVIDER_OFF (8u)

/** \brief Length for Ifx_GTM_BRC_SRC_ADDR_Bits.ADDR */
#define IFX_GTM_BRC_SRC_ADDR_ADDR_LEN (9u)

/** \brief Mask for Ifx_GTM_BRC_SRC_ADDR_Bits.ADDR */
#define IFX_GTM_BRC_SRC_ADDR_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_BRC_SRC_ADDR_Bits.ADDR */
#define IFX_GTM_BRC_SRC_ADDR_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_SRC_ADDR_Bits.BRC_MODE */
#define IFX_GTM_BRC_SRC_ADDR_BRC_MODE_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_ADDR_Bits.BRC_MODE */
#define IFX_GTM_BRC_SRC_ADDR_BRC_MODE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_ADDR_Bits.BRC_MODE */
#define IFX_GTM_BRC_SRC_ADDR_BRC_MODE_OFF (12u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST0 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST0_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST0 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST0 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST0_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST1 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST1_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST1 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST1 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST1_OFF (1u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST2 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST2_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST2 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST2 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST2_OFF (2u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST3 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST3_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST3 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST3 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST3_OFF (3u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST4 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST4_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST4 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST4 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST4_OFF (4u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST5 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST5_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST5 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST5 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST5_OFF (5u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST6 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST6_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST6 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST6 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST6_OFF (6u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST7 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST7_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST7 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST7 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST7_OFF (7u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST8 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST8_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST8 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST8 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST8_OFF (8u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST9 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST9_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST9 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST9 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST9_OFF (9u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST10 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST10_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST10 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST10 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST10_OFF (10u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST11 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST11_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST11 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST11 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST11_OFF (11u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST12 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST12_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST12 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST12_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST12 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST12_OFF (12u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST13 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST13_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST13 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST13_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST13 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST13_OFF (13u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST14 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST14_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST14 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST14_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST14 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST14_OFF (14u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST15 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST15_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST15 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST15_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST15 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST15_OFF (15u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST16 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST16_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST16 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST16_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST16 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST16_OFF (16u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST17 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST17_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST17 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST17_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST17 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST17_OFF (17u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST18 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST18_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST18 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST18_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST18 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST18_OFF (18u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST19 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST19_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST19 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST19_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST19 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST19_OFF (19u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST20 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST20_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST20 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST20_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST20 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST20_OFF (20u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST21 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST21_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST21 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST21_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_DEST21 */
#define IFX_GTM_BRC_SRC_DEST_EN_DEST21_OFF (21u)

/** \brief Length for Ifx_GTM_BRC_SRC_DEST_Bits.EN_TRASHBIN */
#define IFX_GTM_BRC_SRC_DEST_EN_TRASHBIN_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_SRC_DEST_Bits.EN_TRASHBIN */
#define IFX_GTM_BRC_SRC_DEST_EN_TRASHBIN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_SRC_DEST_Bits.EN_TRASHBIN */
#define IFX_GTM_BRC_SRC_DEST_EN_TRASHBIN_OFF (22u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DEST_ERR */
#define IFX_GTM_BRC_IRQ_NOTIFY_DEST_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DEST_ERR */
#define IFX_GTM_BRC_IRQ_NOTIFY_DEST_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DEST_ERR */
#define IFX_GTM_BRC_IRQ_NOTIFY_DEST_ERR_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID0 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID0_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID0 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID0 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID0_OFF (1u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID1 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID1_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID1 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID1 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID1_OFF (2u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID2 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID2_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID2 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID2 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID2_OFF (3u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID3 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID3_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID3 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID3 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID3_OFF (4u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID4 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID4_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID4 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID4 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID4_OFF (5u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID5 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID5_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID5 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID5 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID5_OFF (6u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID6 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID6_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID6 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID6 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID6_OFF (7u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID7 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID7_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID7 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID7 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID7_OFF (8u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID8 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID8_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID8 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID8 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID8_OFF (9u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID9 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID9_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID9 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID9 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID9_OFF (10u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID10 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID10_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID10 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID10 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID10_OFF (11u)

/** \brief Length for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID11 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID11_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID11 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_NOTIFY_Bits.DID11 */
#define IFX_GTM_BRC_IRQ_NOTIFY_DID11_OFF (12u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DEST_ERR_IRQ_EN */
#define IFX_GTM_BRC_IRQ_EN_DEST_ERR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DEST_ERR_IRQ_EN */
#define IFX_GTM_BRC_IRQ_EN_DEST_ERR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DEST_ERR_IRQ_EN */
#define IFX_GTM_BRC_IRQ_EN_DEST_ERR_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN0 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN0_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN0 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN0 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN0_OFF (1u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN1 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN1_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN1 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN1 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN1_OFF (2u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN2 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN2_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN2 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN2 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN2_OFF (3u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN3 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN3_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN3 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN3 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN3_OFF (4u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN4 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN4_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN4 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN4 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN4_OFF (5u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN5 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN5_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN5 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN5 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN5_OFF (6u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN6 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN6_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN6 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN6 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN6_OFF (7u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN7 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN7_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN7 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN7 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN7_OFF (8u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN8 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN8_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN8 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN8 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN8_OFF (9u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN9 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN9_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN9 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN9 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN9_OFF (10u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN10 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN10_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN10 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN10 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN10_OFF (11u)

/** \brief Length for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN11 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN11_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN11 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_EN_Bits.DID_IRQ_EN11 */
#define IFX_GTM_BRC_IRQ_EN_DID_IRQ_EN11_OFF (12u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DEST_ERR */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DEST_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DEST_ERR */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DEST_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DEST_ERR */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DEST_ERR_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID0 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID0_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID0 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID0 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID0_OFF (1u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID1 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID1_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID1 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID1 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID1_OFF (2u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID2 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID2_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID2 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID2 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID2_OFF (3u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID3 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID3_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID3 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID3 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID3_OFF (4u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID4 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID4_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID4 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID4 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID4_OFF (5u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID5 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID5_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID5 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID5 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID5_OFF (6u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID6 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID6_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID6 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID6 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID6_OFF (7u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID7 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID7_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID7 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID7 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID7_OFF (8u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID8 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID8_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID8 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID8 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID8_OFF (9u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID9 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID9_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID9 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID9 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID9_OFF (10u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID10 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID10_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID10 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID10 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID10_OFF (11u)

/** \brief Length for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID11 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID11_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID11 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_FORCINT_Bits.TRG_DID11 */
#define IFX_GTM_BRC_IRQ_FORCINT_TRG_DID11_OFF (12u)

/** \brief Length for Ifx_GTM_BRC_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_BRC_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_BRC_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_BRC_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_BRC_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_BRC_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_RST_Bits.RST */
#define IFX_GTM_BRC_RST_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_RST_Bits.RST */
#define IFX_GTM_BRC_RST_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_RST_Bits.RST */
#define IFX_GTM_BRC_RST_RST_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DEST_ERR_EIRQ_EN */
#define IFX_GTM_BRC_EIRQ_EN_DEST_ERR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DEST_ERR_EIRQ_EN */
#define IFX_GTM_BRC_EIRQ_EN_DEST_ERR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DEST_ERR_EIRQ_EN */
#define IFX_GTM_BRC_EIRQ_EN_DEST_ERR_EIRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN0 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN0_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN0 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN0 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN0_OFF (1u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN1 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN1_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN1 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN1 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN1_OFF (2u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN2 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN2_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN2 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN2 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN2_OFF (3u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN3 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN3_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN3 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN3 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN3_OFF (4u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN4 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN4_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN4 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN4 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN4_OFF (5u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN5 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN5_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN5 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN5 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN5_OFF (6u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN6 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN6_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN6 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN6 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN6_OFF (7u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN7 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN7_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN7 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN7 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN7_OFF (8u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN8 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN8_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN8 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN8 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN8_OFF (9u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN9 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN9_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN9 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN9 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN9_OFF (10u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN10 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN10_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN10 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN10 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN10_OFF (11u)

/** \brief Length for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN11 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN11_LEN (1u)

/** \brief Mask for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN11 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_BRC_EIRQ_EN_Bits.DID_EIRQ_EN11 */
#define IFX_GTM_BRC_EIRQ_EN_DID_EIRQ_EN11_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_NEW_DATA0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_NEW_DATA0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_NEW_DATA0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_NEW_DATA0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_NEW_DATA0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_NEW_DATA0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_NEW_DATA1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_NEW_DATA1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_NEW_DATA1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_NEW_DATA1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_NEW_DATA1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_NEW_DATA1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_ACC_ACK_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_ACC_ACK_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_ACC_ACK_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_ACC_ACK_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.ARU_ACC_ACK_IRQ */
#define IFX_GTM_ICM_IRQG_R0_ARU_ACC_ACK_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.BRC_IRQ */
#define IFX_GTM_ICM_IRQG_R0_BRC_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.BRC_IRQ */
#define IFX_GTM_ICM_IRQG_R0_BRC_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.BRC_IRQ */
#define IFX_GTM_ICM_IRQG_R0_BRC_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.AEI_IRQ */
#define IFX_GTM_ICM_IRQG_R0_AEI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.AEI_IRQ */
#define IFX_GTM_ICM_IRQG_R0_AEI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.AEI_IRQ */
#define IFX_GTM_ICM_IRQG_R0_AEI_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.CMP_IRQ */
#define IFX_GTM_ICM_IRQG_R0_CMP_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.CMP_IRQ */
#define IFX_GTM_ICM_IRQG_R0_CMP_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.CMP_IRQ */
#define IFX_GTM_ICM_IRQG_R0_CMP_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.SPE0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.SPE0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.SPE0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE0_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.SPE1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.SPE1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.SPE1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE1_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.SPE2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.SPE2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.SPE2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE2_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.SPE3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.SPE3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.SPE3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE3_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.SPE4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.SPE4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.SPE4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE4_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.SPE5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.SPE5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.SPE5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_SPE5_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM0_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R0_Bits.PSM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R0_PSM1_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_DCGI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_DCGI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_DCGI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_DCGI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_DCGI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_DCGI_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_EDI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_EDI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_EDI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_EDI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_EDI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_EDI_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TINI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TINI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TINI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TINI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TINI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TINI_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TAXI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TAXI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TAXI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TAXI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TAXI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TAXI_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SISI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SISI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SISI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SISI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SISI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SISI_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TISI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TISI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TISI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TISI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TISI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TISI_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_MSI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_MSI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_MSI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_MSI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_MSI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_MSI_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_MTI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_MTI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_MTI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_MTI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_MTI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_MTI_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SASI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SASI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SASI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SASI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SASI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SASI_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TASI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TASI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TASI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TASI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TASI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TASI_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_PWI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_PWI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_PWI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_PWI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_PWI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_PWI_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_W2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_W2I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_W2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_W2I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_W2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_W2I_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_W1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_W1I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_W1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_W1I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_W1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_W1I_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_GL1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_GL1I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_GL1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_GL1I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_GL1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_GL1I_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_LL1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_LL1I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_LL1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_LL1I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_LL1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_LL1I_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_EI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_EI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_EI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_EI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_EI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_EI_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_GL2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_GL2I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_GL2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_GL2I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_GL2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_GL2I_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_LL2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_LL2I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_LL2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_LL2I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_LL2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_LL2I_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE0I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE0I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE0I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE0I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE0I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE0I_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE1I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE1I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE1I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE1I_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE2I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE2I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE2I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE2I_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE3I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE3I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE3I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE3I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE3I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE3I_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE4I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE4I_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE4I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE4I_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TE4I_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TE4I_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_CDTI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_CDTI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_CDTI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_CDTI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_CDTI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_CDTI_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_CDSI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_CDSI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_CDSI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_CDSI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_CDSI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_CDSI_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TORI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TORI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TORI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TORI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_TORI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_TORI_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SORI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SORI_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SORI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SORI_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R1_Bits.DPLL_SORI_IRQ */
#define IFX_GTM_ICM_IRQG_R1_DPLL_SORI_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM0_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM1_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM2_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R2_Bits.TIM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R2_TIM3_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM4_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM5_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM6_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R3_Bits.TIM7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R3_TIM7_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS0_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS1_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS2_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R4_Bits.MCS3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R4_MCS3_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS4_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS5_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS6_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R5_Bits.MCS7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R5_MCS7_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH8_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH8_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH8_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH9_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH9_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH9_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH10_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH10_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH10_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH11_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH11_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH11_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH12_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH12_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH12_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH13_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH13_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH13_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH14_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH14_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH14_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH15_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH15_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM0_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM0_CH15_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH8_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH8_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH8_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH9_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH9_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH9_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH10_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH10_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH10_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH11_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH11_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH11_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH12_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH12_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH12_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH13_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH13_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH13_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH14_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH14_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH14_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH15_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH15_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R6_Bits.TOM1_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R6_TOM1_CH15_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH8_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH8_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH8_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH9_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH9_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH9_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH10_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH10_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH10_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH11_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH11_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH11_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH12_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH12_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH12_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH13_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH13_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH13_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH14_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH14_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH14_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH15_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH15_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM2_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM2_CH15_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH8_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH8_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH8_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH9_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH9_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH9_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH10_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH10_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH10_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH11_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH11_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH11_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH12_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH12_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH12_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH13_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH13_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH13_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH14_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH14_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH14_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH15_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH15_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R7_Bits.TOM3_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_R7_TOM3_CH15_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM0_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM1_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM2_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R9_Bits.ATOM3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R9_ATOM3_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM4_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM4_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM5_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM5_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM6_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM6_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_R10_Bits.ATOM7_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_R10_ATOM7_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.GTM_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_GTM_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.GTM_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_GTM_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.GTM_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_GTM_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.BRC_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_BRC_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.BRC_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_BRC_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.BRC_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_BRC_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.FIFO0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_FIFO0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.FIFO0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_FIFO0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.FIFO0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_FIFO0_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.FIFO1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_FIFO1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.FIFO1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_FIFO1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.FIFO1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_FIFO1_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM0_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM1_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM2_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM3_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM4_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM4_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM4_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM4_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM5_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM5_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM5_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM5_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM6_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM6_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM6_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM6_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM7_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM7_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.TIM7_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_TIM7_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS0_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS1_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS2_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS3_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS4_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS4_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS4_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS4_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS5_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS5_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS5_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS5_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS6_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS6_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS6_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS6_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS7_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS7_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.MCS7_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_MCS7_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE0_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE1_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE2_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.SPE3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_SPE3_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.CMP_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CMP_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.CMP_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CMP_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.CMP_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CMP_EIRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_Bits.DPLL_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_DPLL_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_Bits.DPLL_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_DPLL_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_Bits.DPLL_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_DPLL_EIRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH6_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO0_CH7_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH0_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH1_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH2_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH3_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH4_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH5_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH6_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO1_CH7_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH0_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH1_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH2_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH3_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH4_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH5_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH6_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI0_Bits.FIFO2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI0_FIFO2_CH7_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH6_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM0_CH7_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH0_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH1_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH2_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH3_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH4_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH5_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH6_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM1_CH7_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH0_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH1_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH2_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH3_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH4_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH5_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH6_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM2_CH7_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH0_EIRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH1_EIRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH2_EIRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH3_EIRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH4_EIRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH5_EIRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH6_EIRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI1_Bits.TIM3_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI1_TIM3_CH7_EIRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH6_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM4_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM4_CH7_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH0_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH1_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH2_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH3_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH4_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH5_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH6_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM5_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM5_CH7_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH0_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH1_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH2_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH3_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH4_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH5_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH6_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM6_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM6_CH7_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH0_EIRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH1_EIRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH2_EIRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH3_EIRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH4_EIRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH5_EIRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH6_EIRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI2_Bits.TIM7_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI2_TIM7_CH7_EIRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH6_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS0_CH7_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH0_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH1_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH2_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH3_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH4_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH5_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH6_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS1_CH7_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH0_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH1_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH2_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH3_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH4_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH5_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH6_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS2_CH7_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH0_EIRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH1_EIRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH2_EIRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH3_EIRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH4_EIRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH5_EIRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH6_EIRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI3_Bits.MCS3_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI3_MCS3_CH7_EIRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH6_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS4_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS4_CH7_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH0_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH1_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH2_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH3_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH4_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH5_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH6_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS5_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS5_CH7_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH0_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH1_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH2_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH3_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH4_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH5_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH6_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS6_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS6_CH7_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH0_EIRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH1_EIRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH2_EIRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH3_EIRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH4_EIRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH5_EIRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH6_EIRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI4_Bits.MCS7_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI4_MCS7_CH7_EIRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH6_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_MCS_Bits.MCS_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_MCS_MCS_CH7_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH6_EIRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M0_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M0_CH7_EIRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH0_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH1_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH2_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH3_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH4_EIRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH5_EIRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH6_EIRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M1_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M1_CH7_EIRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH0_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH1_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH2_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH3_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH4_EIRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH5_EIRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH6_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH6_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH6_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH6_EIRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH7_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH7_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_PSM_Bits.PSM_M2_CH7_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_PSM_PSM_M2_CH7_EIRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE0_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE1_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE1_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE2_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE2_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE3_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE3_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE4_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE4_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE4_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE4_EIRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE5_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE5_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CEI_SPE_Bits.SPE5_EIRQ */
#define IFX_GTM_ICM_IRQG_CEI_SPE_SPE5_EIRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M0_EIRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M0_EIRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M0_EIRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M0_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M0_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M0_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M0_EIRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M1_EIRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M1_EIRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M1_EIRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M1_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M1_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M1_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M1_EIRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M2_EIRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M2_EIRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M2_EIRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M2_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M2_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M2_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M2_EIRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.TIM_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_TIM_M3_EIRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.MCS_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_MCS_M3_EIRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.SPE_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_SPE_M3_EIRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M3_EIRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M3_EIRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_MEI_CLS_Bits.FIFO_M3_EIRQ */
#define IFX_GTM_ICM_IRQG_MEI_CLS_FIFO_M3_EIRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_MCS_Bits.MCS_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_MCS_MCS_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M0_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M1_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_PSM_Bits.PSM_M2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_PSM_PSM_M2_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_SPE_Bits.SPE5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_SPE_SPE5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M0_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH0_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH1_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH2_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH3_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH4_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH5_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH6_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M1_CH7_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M2_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M2_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH0_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH1_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH2_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH3_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH4_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH5_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH6_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_ATOM_Bits.ATOM_M3_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_ATOM_ATOM_M3_CH7_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH0_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH1_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH2_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH3_IRQ_OFF (3u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH4_IRQ_OFF (4u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH5_IRQ_OFF (5u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH6_IRQ_OFF (6u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH7_IRQ_OFF (7u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH8_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH8_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH8_IRQ_OFF (8u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH9_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH9_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH9_IRQ_OFF (9u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH10_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH10_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH10_IRQ_OFF (10u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH11_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH11_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH11_IRQ_OFF (11u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH12_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH12_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH12_IRQ_OFF (12u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH13_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH13_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH13_IRQ_OFF (13u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH14_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH14_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH14_IRQ_OFF (14u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH15_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH15_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M0_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M0_CH15_IRQ_OFF (15u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH0_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH0_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH0_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH0_IRQ_OFF (16u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH1_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH1_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH1_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH1_IRQ_OFF (17u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH2_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH2_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH2_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH2_IRQ_OFF (18u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH3_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH3_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH3_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH3_IRQ_OFF (19u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH4_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH4_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH4_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH4_IRQ_OFF (20u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH5_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH5_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH5_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH5_IRQ_OFF (21u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH6_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH6_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH6_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH6_IRQ_OFF (22u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH7_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH7_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH7_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH7_IRQ_OFF (23u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH8_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH8_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH8_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH8_IRQ_OFF (24u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH9_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH9_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH9_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH9_IRQ_OFF (25u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH10_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH10_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH10_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH10_IRQ_OFF (26u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH11_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH11_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH11_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH11_IRQ_OFF (27u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH12_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH12_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH12_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH12_IRQ_OFF (28u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH13_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH13_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH13_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH13_IRQ_OFF (29u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH14_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH14_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH14_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH14_IRQ_OFF (30u)

/** \brief Length for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH15_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH15_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ICM_IRQG_CI_TOM_Bits.TOM_M1_CH15_IRQ */
#define IFX_GTM_ICM_IRQG_CI_TOM_TOM_M1_CH15_IRQ_OFF (31u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.EN */
#define IFX_GTM_SPE_CTRL_STAT_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.EN */
#define IFX_GTM_SPE_CTRL_STAT_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.EN */
#define IFX_GTM_SPE_CTRL_STAT_EN_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE0 */
#define IFX_GTM_SPE_CTRL_STAT_SIE0_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE0 */
#define IFX_GTM_SPE_CTRL_STAT_SIE0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE0 */
#define IFX_GTM_SPE_CTRL_STAT_SIE0_OFF (1u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE1 */
#define IFX_GTM_SPE_CTRL_STAT_SIE1_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE1 */
#define IFX_GTM_SPE_CTRL_STAT_SIE1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE1 */
#define IFX_GTM_SPE_CTRL_STAT_SIE1_OFF (2u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE2 */
#define IFX_GTM_SPE_CTRL_STAT_SIE2_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE2 */
#define IFX_GTM_SPE_CTRL_STAT_SIE2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.SIE2 */
#define IFX_GTM_SPE_CTRL_STAT_SIE2_OFF (3u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.TRIG_SEL */
#define IFX_GTM_SPE_CTRL_STAT_TRIG_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.TRIG_SEL */
#define IFX_GTM_SPE_CTRL_STAT_TRIG_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.TRIG_SEL */
#define IFX_GTM_SPE_CTRL_STAT_TRIG_SEL_OFF (4u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.TIM_SEL */
#define IFX_GTM_SPE_CTRL_STAT_TIM_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.TIM_SEL */
#define IFX_GTM_SPE_CTRL_STAT_TIM_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.TIM_SEL */
#define IFX_GTM_SPE_CTRL_STAT_TIM_SEL_OFF (6u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.FSOM */
#define IFX_GTM_SPE_CTRL_STAT_FSOM_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.FSOM */
#define IFX_GTM_SPE_CTRL_STAT_FSOM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.FSOM */
#define IFX_GTM_SPE_CTRL_STAT_FSOM_OFF (7u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.SPE_PAT_PTR */
#define IFX_GTM_SPE_CTRL_STAT_SPE_PAT_PTR_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.SPE_PAT_PTR */
#define IFX_GTM_SPE_CTRL_STAT_SPE_PAT_PTR_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.SPE_PAT_PTR */
#define IFX_GTM_SPE_CTRL_STAT_SPE_PAT_PTR_OFF (8u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.AIP */
#define IFX_GTM_SPE_CTRL_STAT_AIP_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.AIP */
#define IFX_GTM_SPE_CTRL_STAT_AIP_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.AIP */
#define IFX_GTM_SPE_CTRL_STAT_AIP_OFF (12u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.ADIR */
#define IFX_GTM_SPE_CTRL_STAT_ADIR_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.ADIR */
#define IFX_GTM_SPE_CTRL_STAT_ADIR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.ADIR */
#define IFX_GTM_SPE_CTRL_STAT_ADIR_OFF (15u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.PIP */
#define IFX_GTM_SPE_CTRL_STAT_PIP_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.PIP */
#define IFX_GTM_SPE_CTRL_STAT_PIP_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.PIP */
#define IFX_GTM_SPE_CTRL_STAT_PIP_OFF (16u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.PDIR */
#define IFX_GTM_SPE_CTRL_STAT_PDIR_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.PDIR */
#define IFX_GTM_SPE_CTRL_STAT_PDIR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.PDIR */
#define IFX_GTM_SPE_CTRL_STAT_PDIR_OFF (19u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.NIP */
#define IFX_GTM_SPE_CTRL_STAT_NIP_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.NIP */
#define IFX_GTM_SPE_CTRL_STAT_NIP_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.NIP */
#define IFX_GTM_SPE_CTRL_STAT_NIP_OFF (20u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.ETRIG_SEL */
#define IFX_GTM_SPE_CTRL_STAT_ETRIG_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.ETRIG_SEL */
#define IFX_GTM_SPE_CTRL_STAT_ETRIG_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.ETRIG_SEL */
#define IFX_GTM_SPE_CTRL_STAT_ETRIG_SEL_OFF (23u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT_Bits.FSOL */
#define IFX_GTM_SPE_CTRL_STAT_FSOL_LEN (8u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT_Bits.FSOL */
#define IFX_GTM_SPE_CTRL_STAT_FSOL_MSK (0xffu)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT_Bits.FSOL */
#define IFX_GTM_SPE_CTRL_STAT_FSOL_OFF (24u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP0_VAL */
#define IFX_GTM_SPE_PAT_IP0_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP0_VAL */
#define IFX_GTM_SPE_PAT_IP0_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP0_VAL */
#define IFX_GTM_SPE_PAT_IP0_VAL_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP0_PAT */
#define IFX_GTM_SPE_PAT_IP0_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP0_PAT */
#define IFX_GTM_SPE_PAT_IP0_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP0_PAT */
#define IFX_GTM_SPE_PAT_IP0_PAT_OFF (1u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP1_VAL */
#define IFX_GTM_SPE_PAT_IP1_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP1_VAL */
#define IFX_GTM_SPE_PAT_IP1_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP1_VAL */
#define IFX_GTM_SPE_PAT_IP1_VAL_OFF (4u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP1_PAT */
#define IFX_GTM_SPE_PAT_IP1_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP1_PAT */
#define IFX_GTM_SPE_PAT_IP1_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP1_PAT */
#define IFX_GTM_SPE_PAT_IP1_PAT_OFF (5u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP2_VAL */
#define IFX_GTM_SPE_PAT_IP2_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP2_VAL */
#define IFX_GTM_SPE_PAT_IP2_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP2_VAL */
#define IFX_GTM_SPE_PAT_IP2_VAL_OFF (8u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP2_PAT */
#define IFX_GTM_SPE_PAT_IP2_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP2_PAT */
#define IFX_GTM_SPE_PAT_IP2_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP2_PAT */
#define IFX_GTM_SPE_PAT_IP2_PAT_OFF (9u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP3_VAL */
#define IFX_GTM_SPE_PAT_IP3_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP3_VAL */
#define IFX_GTM_SPE_PAT_IP3_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP3_VAL */
#define IFX_GTM_SPE_PAT_IP3_VAL_OFF (12u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP3_PAT */
#define IFX_GTM_SPE_PAT_IP3_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP3_PAT */
#define IFX_GTM_SPE_PAT_IP3_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP3_PAT */
#define IFX_GTM_SPE_PAT_IP3_PAT_OFF (13u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP4_VAL */
#define IFX_GTM_SPE_PAT_IP4_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP4_VAL */
#define IFX_GTM_SPE_PAT_IP4_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP4_VAL */
#define IFX_GTM_SPE_PAT_IP4_VAL_OFF (16u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP4_PAT */
#define IFX_GTM_SPE_PAT_IP4_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP4_PAT */
#define IFX_GTM_SPE_PAT_IP4_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP4_PAT */
#define IFX_GTM_SPE_PAT_IP4_PAT_OFF (17u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP5_VAL */
#define IFX_GTM_SPE_PAT_IP5_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP5_VAL */
#define IFX_GTM_SPE_PAT_IP5_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP5_VAL */
#define IFX_GTM_SPE_PAT_IP5_VAL_OFF (20u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP5_PAT */
#define IFX_GTM_SPE_PAT_IP5_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP5_PAT */
#define IFX_GTM_SPE_PAT_IP5_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP5_PAT */
#define IFX_GTM_SPE_PAT_IP5_PAT_OFF (21u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP6_VAL */
#define IFX_GTM_SPE_PAT_IP6_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP6_VAL */
#define IFX_GTM_SPE_PAT_IP6_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP6_VAL */
#define IFX_GTM_SPE_PAT_IP6_VAL_OFF (24u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP6_PAT */
#define IFX_GTM_SPE_PAT_IP6_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP6_PAT */
#define IFX_GTM_SPE_PAT_IP6_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP6_PAT */
#define IFX_GTM_SPE_PAT_IP6_PAT_OFF (25u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP7_VAL */
#define IFX_GTM_SPE_PAT_IP7_VAL_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP7_VAL */
#define IFX_GTM_SPE_PAT_IP7_VAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP7_VAL */
#define IFX_GTM_SPE_PAT_IP7_VAL_OFF (28u)

/** \brief Length for Ifx_GTM_SPE_PAT_Bits.IP7_PAT */
#define IFX_GTM_SPE_PAT_IP7_PAT_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_PAT_Bits.IP7_PAT */
#define IFX_GTM_SPE_PAT_IP7_PAT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_PAT_Bits.IP7_PAT */
#define IFX_GTM_SPE_PAT_IP7_PAT_OFF (29u)

/** \brief Length for Ifx_GTM_SPE_OUT_PAT_Bits.SPE_OUT_PAT */
#define IFX_GTM_SPE_OUT_PAT_SPE_OUT_PAT_LEN (16u)

/** \brief Mask for Ifx_GTM_SPE_OUT_PAT_Bits.SPE_OUT_PAT */
#define IFX_GTM_SPE_OUT_PAT_SPE_OUT_PAT_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_SPE_OUT_PAT_Bits.SPE_OUT_PAT */
#define IFX_GTM_SPE_OUT_PAT_SPE_OUT_PAT_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_OUT_CTRL_Bits.SPE_OUT_CTRL */
#define IFX_GTM_SPE_OUT_CTRL_SPE_OUT_CTRL_LEN (16u)

/** \brief Mask for Ifx_GTM_SPE_OUT_CTRL_Bits.SPE_OUT_CTRL */
#define IFX_GTM_SPE_OUT_CTRL_SPE_OUT_CTRL_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_SPE_OUT_CTRL_Bits.SPE_OUT_CTRL */
#define IFX_GTM_SPE_OUT_CTRL_SPE_OUT_CTRL_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_NIPD */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_NIPD_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_NIPD */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_NIPD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_NIPD */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_NIPD_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_DCHG */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_DCHG_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_DCHG */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_DCHG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_DCHG */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_DCHG_OFF (1u)

/** \brief Length for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_PERR */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_PERR_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_PERR */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_PERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_PERR */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_PERR_OFF (2u)

/** \brief Length for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_BIS */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_BIS_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_BIS */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_BIS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_BIS */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_BIS_OFF (3u)

/** \brief Length for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_RCMP */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_RCMP_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_RCMP */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_RCMP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_NOTIFY_Bits.SPE_RCMP */
#define IFX_GTM_SPE_IRQ_NOTIFY_SPE_RCMP_OFF (4u)

/** \brief Length for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_NIPD_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_NIPD_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_NIPD_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_NIPD_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_NIPD_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_NIPD_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_DCHG_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_DCHG_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_DCHG_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_DCHG_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_DCHG_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_DCHG_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_PERR_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_PERR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_PERR_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_PERR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_PERR_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_PERR_IRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_BIS_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_BIS_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_BIS_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_BIS_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_BIS_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_BIS_IRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_RCMP_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_RCMP_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_RCMP_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_RCMP_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_EN_Bits.SPE_RCMP_IRQ_EN */
#define IFX_GTM_SPE_IRQ_EN_SPE_RCMP_IRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_NIPD */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_NIPD_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_NIPD */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_NIPD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_NIPD */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_NIPD_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_DCHG */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_DCHG_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_DCHG */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_DCHG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_DCHG */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_DCHG_OFF (1u)

/** \brief Length for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_PERR */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_PERR_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_PERR */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_PERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_PERR */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_PERR_OFF (2u)

/** \brief Length for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_BIS */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_BIS_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_BIS */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_BIS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_BIS */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_BIS_OFF (3u)

/** \brief Length for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_RCMP */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_RCMP_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_RCMP */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_RCMP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_FORCINT_Bits.TRG_SPE_RCMP */
#define IFX_GTM_SPE_IRQ_FORCINT_TRG_SPE_RCMP_OFF (4u)

/** \brief Length for Ifx_GTM_SPE_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_SPE_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_SPE_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_SPE_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_SPE_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_SPE_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_NIPD_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_NIPD_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_NIPD_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_NIPD_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_NIPD_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_NIPD_EIRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_DCHG_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_DCHG_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_DCHG_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_DCHG_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_DCHG_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_DCHG_EIRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_PERR_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_PERR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_PERR_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_PERR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_PERR_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_PERR_EIRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_BIS_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_BIS_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_BIS_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_BIS_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_BIS_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_BIS_EIRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_RCMP_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_RCMP_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_RCMP_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_RCMP_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_EIRQ_EN_Bits.SPE_RCMP_EIRQ_EN */
#define IFX_GTM_SPE_EIRQ_EN_SPE_RCMP_EIRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_SPE_REV_CNT_Bits.REV_CNT */
#define IFX_GTM_SPE_REV_CNT_REV_CNT_LEN (24u)

/** \brief Mask for Ifx_GTM_SPE_REV_CNT_Bits.REV_CNT */
#define IFX_GTM_SPE_REV_CNT_REV_CNT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_SPE_REV_CNT_Bits.REV_CNT */
#define IFX_GTM_SPE_REV_CNT_REV_CNT_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_REV_CMP_Bits.REV_CMP */
#define IFX_GTM_SPE_REV_CMP_REV_CMP_LEN (24u)

/** \brief Mask for Ifx_GTM_SPE_REV_CMP_Bits.REV_CMP */
#define IFX_GTM_SPE_REV_CMP_REV_CMP_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_SPE_REV_CMP_Bits.REV_CMP */
#define IFX_GTM_SPE_REV_CMP_REV_CMP_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_CTRL_STAT2_Bits.SPE_PAT_PTR_BWD */
#define IFX_GTM_SPE_CTRL_STAT2_SPE_PAT_PTR_BWD_LEN (3u)

/** \brief Mask for Ifx_GTM_SPE_CTRL_STAT2_Bits.SPE_PAT_PTR_BWD */
#define IFX_GTM_SPE_CTRL_STAT2_SPE_PAT_PTR_BWD_MSK (0x7u)

/** \brief Offset for Ifx_GTM_SPE_CTRL_STAT2_Bits.SPE_PAT_PTR_BWD */
#define IFX_GTM_SPE_CTRL_STAT2_SPE_PAT_PTR_BWD_OFF (8u)

/** \brief Length for Ifx_GTM_SPE_CMD_Bits.SPE_CTRL_CMD */
#define IFX_GTM_SPE_CMD_SPE_CTRL_CMD_LEN (2u)

/** \brief Mask for Ifx_GTM_SPE_CMD_Bits.SPE_CTRL_CMD */
#define IFX_GTM_SPE_CMD_SPE_CTRL_CMD_MSK (0x3u)

/** \brief Offset for Ifx_GTM_SPE_CMD_Bits.SPE_CTRL_CMD */
#define IFX_GTM_SPE_CMD_SPE_CTRL_CMD_OFF (0u)

/** \brief Length for Ifx_GTM_SPE_CMD_Bits.SPE_UPD_TRIG */
#define IFX_GTM_SPE_CMD_SPE_UPD_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_SPE_CMD_Bits.SPE_UPD_TRIG */
#define IFX_GTM_SPE_CMD_SPE_UPD_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_SPE_CMD_Bits.SPE_UPD_TRIG */
#define IFX_GTM_SPE_CMD_SPE_UPD_TRIG_OFF (16u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSEL */
#define IFX_GTM_MAP_CTRL_TSEL_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSEL */
#define IFX_GTM_MAP_CTRL_TSEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSEL */
#define IFX_GTM_MAP_CTRL_TSEL_OFF (0u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.SSL */
#define IFX_GTM_MAP_CTRL_SSL_LEN (3u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.SSL */
#define IFX_GTM_MAP_CTRL_SSL_MSK (0x7u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.SSL */
#define IFX_GTM_MAP_CTRL_SSL_OFF (1u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.LSEL */
#define IFX_GTM_MAP_CTRL_LSEL_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.LSEL */
#define IFX_GTM_MAP_CTRL_LSEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.LSEL */
#define IFX_GTM_MAP_CTRL_LSEL_OFF (4u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP0_EN */
#define IFX_GTM_MAP_CTRL_TSPP0_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP0_EN */
#define IFX_GTM_MAP_CTRL_TSPP0_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP0_EN */
#define IFX_GTM_MAP_CTRL_TSPP0_EN_OFF (16u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP0_DLD */
#define IFX_GTM_MAP_CTRL_TSPP0_DLD_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP0_DLD */
#define IFX_GTM_MAP_CTRL_TSPP0_DLD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP0_DLD */
#define IFX_GTM_MAP_CTRL_TSPP0_DLD_OFF (17u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I0V */
#define IFX_GTM_MAP_CTRL_TSPP0_I0V_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I0V */
#define IFX_GTM_MAP_CTRL_TSPP0_I0V_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I0V */
#define IFX_GTM_MAP_CTRL_TSPP0_I0V_OFF (20u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I1V */
#define IFX_GTM_MAP_CTRL_TSPP0_I1V_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I1V */
#define IFX_GTM_MAP_CTRL_TSPP0_I1V_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I1V */
#define IFX_GTM_MAP_CTRL_TSPP0_I1V_OFF (21u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I2V */
#define IFX_GTM_MAP_CTRL_TSPP0_I2V_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I2V */
#define IFX_GTM_MAP_CTRL_TSPP0_I2V_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP0_I2V */
#define IFX_GTM_MAP_CTRL_TSPP0_I2V_OFF (22u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP1_EN */
#define IFX_GTM_MAP_CTRL_TSPP1_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP1_EN */
#define IFX_GTM_MAP_CTRL_TSPP1_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP1_EN */
#define IFX_GTM_MAP_CTRL_TSPP1_EN_OFF (24u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP1_DLD */
#define IFX_GTM_MAP_CTRL_TSPP1_DLD_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP1_DLD */
#define IFX_GTM_MAP_CTRL_TSPP1_DLD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP1_DLD */
#define IFX_GTM_MAP_CTRL_TSPP1_DLD_OFF (25u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I0V */
#define IFX_GTM_MAP_CTRL_TSPP1_I0V_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I0V */
#define IFX_GTM_MAP_CTRL_TSPP1_I0V_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I0V */
#define IFX_GTM_MAP_CTRL_TSPP1_I0V_OFF (28u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I1V */
#define IFX_GTM_MAP_CTRL_TSPP1_I1V_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I1V */
#define IFX_GTM_MAP_CTRL_TSPP1_I1V_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I1V */
#define IFX_GTM_MAP_CTRL_TSPP1_I1V_OFF (29u)

/** \brief Length for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I2V */
#define IFX_GTM_MAP_CTRL_TSPP1_I2V_LEN (1u)

/** \brief Mask for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I2V */
#define IFX_GTM_MAP_CTRL_TSPP1_I2V_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MAP_CTRL_Bits.TSPP1_I2V */
#define IFX_GTM_MAP_CTRL_TSPP1_I2V_OFF (30u)

/** \brief Length for Ifx_GTM_MCFG_CTRL_Bits.MEM0 */
#define IFX_GTM_MCFG_CTRL_MEM0_LEN (2u)

/** \brief Mask for Ifx_GTM_MCFG_CTRL_Bits.MEM0 */
#define IFX_GTM_MCFG_CTRL_MEM0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCFG_CTRL_Bits.MEM0 */
#define IFX_GTM_MCFG_CTRL_MEM0_OFF (0u)

/** \brief Length for Ifx_GTM_MCFG_CTRL_Bits.MEM1 */
#define IFX_GTM_MCFG_CTRL_MEM1_LEN (2u)

/** \brief Mask for Ifx_GTM_MCFG_CTRL_Bits.MEM1 */
#define IFX_GTM_MCFG_CTRL_MEM1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCFG_CTRL_Bits.MEM1 */
#define IFX_GTM_MCFG_CTRL_MEM1_OFF (2u)

/** \brief Length for Ifx_GTM_MCFG_CTRL_Bits.MEM2 */
#define IFX_GTM_MCFG_CTRL_MEM2_LEN (2u)

/** \brief Mask for Ifx_GTM_MCFG_CTRL_Bits.MEM2 */
#define IFX_GTM_MCFG_CTRL_MEM2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCFG_CTRL_Bits.MEM2 */
#define IFX_GTM_MCFG_CTRL_MEM2_OFF (4u)

/** \brief Length for Ifx_GTM_MCFG_CTRL_Bits.MEM3 */
#define IFX_GTM_MCFG_CTRL_MEM3_LEN (2u)

/** \brief Mask for Ifx_GTM_MCFG_CTRL_Bits.MEM3 */
#define IFX_GTM_MCFG_CTRL_MEM3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCFG_CTRL_Bits.MEM3 */
#define IFX_GTM_MCFG_CTRL_MEM3_OFF (6u)

/** \brief Length for Ifx_GTM_MCFG_CTRL_Bits.MEM4 */
#define IFX_GTM_MCFG_CTRL_MEM4_LEN (2u)

/** \brief Mask for Ifx_GTM_MCFG_CTRL_Bits.MEM4 */
#define IFX_GTM_MCFG_CTRL_MEM4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCFG_CTRL_Bits.MEM4 */
#define IFX_GTM_MCFG_CTRL_MEM4_OFF (8u)

/** \brief Length for Ifx_GTM_TIM_CH_GPR0_Bits.GPR0 */
#define IFX_GTM_TIM_CH_GPR0_GPR0_LEN (24u)

/** \brief Mask for Ifx_GTM_TIM_CH_GPR0_Bits.GPR0 */
#define IFX_GTM_TIM_CH_GPR0_GPR0_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TIM_CH_GPR0_Bits.GPR0 */
#define IFX_GTM_TIM_CH_GPR0_GPR0_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_GPR0_Bits.ECNT */
#define IFX_GTM_TIM_CH_GPR0_ECNT_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_GPR0_Bits.ECNT */
#define IFX_GTM_TIM_CH_GPR0_ECNT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_GPR0_Bits.ECNT */
#define IFX_GTM_TIM_CH_GPR0_ECNT_OFF (24u)

/** \brief Length for Ifx_GTM_TIM_CH_GPR1_Bits.GPR1 */
#define IFX_GTM_TIM_CH_GPR1_GPR1_LEN (24u)

/** \brief Mask for Ifx_GTM_TIM_CH_GPR1_Bits.GPR1 */
#define IFX_GTM_TIM_CH_GPR1_GPR1_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TIM_CH_GPR1_Bits.GPR1 */
#define IFX_GTM_TIM_CH_GPR1_GPR1_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_GPR1_Bits.ECNT */
#define IFX_GTM_TIM_CH_GPR1_ECNT_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_GPR1_Bits.ECNT */
#define IFX_GTM_TIM_CH_GPR1_ECNT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_GPR1_Bits.ECNT */
#define IFX_GTM_TIM_CH_GPR1_ECNT_OFF (24u)

/** \brief Length for Ifx_GTM_TIM_CH_CNT_Bits.CNT */
#define IFX_GTM_TIM_CH_CNT_CNT_LEN (24u)

/** \brief Mask for Ifx_GTM_TIM_CH_CNT_Bits.CNT */
#define IFX_GTM_TIM_CH_CNT_CNT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TIM_CH_CNT_Bits.CNT */
#define IFX_GTM_TIM_CH_CNT_CNT_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_ECNT_Bits.ECNT */
#define IFX_GTM_TIM_CH_ECNT_ECNT_LEN (16u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECNT_Bits.ECNT */
#define IFX_GTM_TIM_CH_ECNT_ECNT_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_TIM_CH_ECNT_Bits.ECNT */
#define IFX_GTM_TIM_CH_ECNT_ECNT_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_CNTS_Bits.CNTS */
#define IFX_GTM_TIM_CH_CNTS_CNTS_LEN (24u)

/** \brief Mask for Ifx_GTM_TIM_CH_CNTS_Bits.CNTS */
#define IFX_GTM_TIM_CH_CNTS_CNTS_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TIM_CH_CNTS_Bits.CNTS */
#define IFX_GTM_TIM_CH_CNTS_CNTS_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_CNTS_Bits.ECNT */
#define IFX_GTM_TIM_CH_CNTS_ECNT_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_CNTS_Bits.ECNT */
#define IFX_GTM_TIM_CH_CNTS_ECNT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_CNTS_Bits.ECNT */
#define IFX_GTM_TIM_CH_CNTS_ECNT_OFF (24u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT1 */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT1_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT1 */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT1_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT1 */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT1_OFF (8u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT2 */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT2_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT2 */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT2_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUC_Bits.TO_CNT2 */
#define IFX_GTM_TIM_CH_TDUC_TO_CNT2_OFF (16u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUV_Bits.TOV */
#define IFX_GTM_TIM_CH_TDUV_TOV_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUV_Bits.TOV */
#define IFX_GTM_TIM_CH_TDUV_TOV_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUV_Bits.TOV */
#define IFX_GTM_TIM_CH_TDUV_TOV_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUV_Bits.TOV1 */
#define IFX_GTM_TIM_CH_TDUV_TOV1_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUV_Bits.TOV1 */
#define IFX_GTM_TIM_CH_TDUV_TOV1_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUV_Bits.TOV1 */
#define IFX_GTM_TIM_CH_TDUV_TOV1_OFF (8u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUV_Bits.TOV2 */
#define IFX_GTM_TIM_CH_TDUV_TOV2_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUV_Bits.TOV2 */
#define IFX_GTM_TIM_CH_TDUV_TOV2_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUV_Bits.TOV2 */
#define IFX_GTM_TIM_CH_TDUV_TOV2_OFF (16u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUV_Bits.SLICING */
#define IFX_GTM_TIM_CH_TDUV_SLICING_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUV_Bits.SLICING */
#define IFX_GTM_TIM_CH_TDUV_SLICING_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUV_Bits.SLICING */
#define IFX_GTM_TIM_CH_TDUV_SLICING_OFF (24u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUV_Bits.TCS_USE_SAMPLE_EVT */
#define IFX_GTM_TIM_CH_TDUV_TCS_USE_SAMPLE_EVT_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUV_Bits.TCS_USE_SAMPLE_EVT */
#define IFX_GTM_TIM_CH_TDUV_TCS_USE_SAMPLE_EVT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUV_Bits.TCS_USE_SAMPLE_EVT */
#define IFX_GTM_TIM_CH_TDUV_TCS_USE_SAMPLE_EVT_OFF (26u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUV_Bits.TDU_SAME_CNT_CLK */
#define IFX_GTM_TIM_CH_TDUV_TDU_SAME_CNT_CLK_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUV_Bits.TDU_SAME_CNT_CLK */
#define IFX_GTM_TIM_CH_TDUV_TDU_SAME_CNT_CLK_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUV_Bits.TDU_SAME_CNT_CLK */
#define IFX_GTM_TIM_CH_TDUV_TDU_SAME_CNT_CLK_OFF (27u)

/** \brief Length for Ifx_GTM_TIM_CH_TDUV_Bits.TCS */
#define IFX_GTM_TIM_CH_TDUV_TCS_LEN (3u)

/** \brief Mask for Ifx_GTM_TIM_CH_TDUV_Bits.TCS */
#define IFX_GTM_TIM_CH_TDUV_TCS_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TIM_CH_TDUV_Bits.TCS */
#define IFX_GTM_TIM_CH_TDUV_TCS_OFF (28u)

/** \brief Length for Ifx_GTM_TIM_CH_FLT_RE_Bits.FLT_RE */
#define IFX_GTM_TIM_CH_FLT_RE_FLT_RE_LEN (24u)

/** \brief Mask for Ifx_GTM_TIM_CH_FLT_RE_Bits.FLT_RE */
#define IFX_GTM_TIM_CH_FLT_RE_FLT_RE_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TIM_CH_FLT_RE_Bits.FLT_RE */
#define IFX_GTM_TIM_CH_FLT_RE_FLT_RE_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_FLT_FE_Bits.FLT_FE */
#define IFX_GTM_TIM_CH_FLT_FE_FLT_FE_LEN (24u)

/** \brief Mask for Ifx_GTM_TIM_CH_FLT_FE_Bits.FLT_FE */
#define IFX_GTM_TIM_CH_FLT_FE_FLT_FE_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TIM_CH_FLT_FE_Bits.FLT_FE */
#define IFX_GTM_TIM_CH_FLT_FE_FLT_FE_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.TIM_EN */
#define IFX_GTM_TIM_CH_CTRL_TIM_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.TIM_EN */
#define IFX_GTM_TIM_CH_CTRL_TIM_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.TIM_EN */
#define IFX_GTM_TIM_CH_CTRL_TIM_EN_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.TIM_MODE */
#define IFX_GTM_TIM_CH_CTRL_TIM_MODE_LEN (3u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.TIM_MODE */
#define IFX_GTM_TIM_CH_CTRL_TIM_MODE_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.TIM_MODE */
#define IFX_GTM_TIM_CH_CTRL_TIM_MODE_OFF (1u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.OSM */
#define IFX_GTM_TIM_CH_CTRL_OSM_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.OSM */
#define IFX_GTM_TIM_CH_CTRL_OSM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.OSM */
#define IFX_GTM_TIM_CH_CTRL_OSM_OFF (4u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.ARU_EN */
#define IFX_GTM_TIM_CH_CTRL_ARU_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.ARU_EN */
#define IFX_GTM_TIM_CH_CTRL_ARU_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.ARU_EN */
#define IFX_GTM_TIM_CH_CTRL_ARU_EN_OFF (5u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.CICTRL */
#define IFX_GTM_TIM_CH_CTRL_CICTRL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.CICTRL */
#define IFX_GTM_TIM_CH_CTRL_CICTRL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.CICTRL */
#define IFX_GTM_TIM_CH_CTRL_CICTRL_OFF (6u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.TBU0_SEL */
#define IFX_GTM_TIM_CH_CTRL_TBU0_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.TBU0_SEL */
#define IFX_GTM_TIM_CH_CTRL_TBU0_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.TBU0_SEL */
#define IFX_GTM_TIM_CH_CTRL_TBU0_SEL_OFF (7u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.GPR0_SEL */
#define IFX_GTM_TIM_CH_CTRL_GPR0_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.GPR0_SEL */
#define IFX_GTM_TIM_CH_CTRL_GPR0_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.GPR0_SEL */
#define IFX_GTM_TIM_CH_CTRL_GPR0_SEL_OFF (8u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.GPR1_SEL */
#define IFX_GTM_TIM_CH_CTRL_GPR1_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.GPR1_SEL */
#define IFX_GTM_TIM_CH_CTRL_GPR1_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.GPR1_SEL */
#define IFX_GTM_TIM_CH_CTRL_GPR1_SEL_OFF (10u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.CNTS_SEL */
#define IFX_GTM_TIM_CH_CTRL_CNTS_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.CNTS_SEL */
#define IFX_GTM_TIM_CH_CTRL_CNTS_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.CNTS_SEL */
#define IFX_GTM_TIM_CH_CTRL_CNTS_SEL_OFF (12u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.DSL */
#define IFX_GTM_TIM_CH_CTRL_DSL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.DSL */
#define IFX_GTM_TIM_CH_CTRL_DSL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.DSL */
#define IFX_GTM_TIM_CH_CTRL_DSL_OFF (13u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.ISL */
#define IFX_GTM_TIM_CH_CTRL_ISL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.ISL */
#define IFX_GTM_TIM_CH_CTRL_ISL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.ISL */
#define IFX_GTM_TIM_CH_CTRL_ISL_OFF (14u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.ECNT_RESET */
#define IFX_GTM_TIM_CH_CTRL_ECNT_RESET_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.ECNT_RESET */
#define IFX_GTM_TIM_CH_CTRL_ECNT_RESET_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.ECNT_RESET */
#define IFX_GTM_TIM_CH_CTRL_ECNT_RESET_OFF (15u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_EN */
#define IFX_GTM_TIM_CH_CTRL_FLT_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_EN */
#define IFX_GTM_TIM_CH_CTRL_FLT_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_EN */
#define IFX_GTM_TIM_CH_CTRL_FLT_EN_OFF (16u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CNT_FRQ */
#define IFX_GTM_TIM_CH_CTRL_FLT_CNT_FRQ_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CNT_FRQ */
#define IFX_GTM_TIM_CH_CTRL_FLT_CNT_FRQ_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CNT_FRQ */
#define IFX_GTM_TIM_CH_CTRL_FLT_CNT_FRQ_OFF (17u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.EXT_CAP_EN */
#define IFX_GTM_TIM_CH_CTRL_EXT_CAP_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.EXT_CAP_EN */
#define IFX_GTM_TIM_CH_CTRL_EXT_CAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.EXT_CAP_EN */
#define IFX_GTM_TIM_CH_CTRL_EXT_CAP_EN_OFF (19u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_MODE_RE */
#define IFX_GTM_TIM_CH_CTRL_FLT_MODE_RE_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_MODE_RE */
#define IFX_GTM_TIM_CH_CTRL_FLT_MODE_RE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_MODE_RE */
#define IFX_GTM_TIM_CH_CTRL_FLT_MODE_RE_OFF (20u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CTR_RE */
#define IFX_GTM_TIM_CH_CTRL_FLT_CTR_RE_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CTR_RE */
#define IFX_GTM_TIM_CH_CTRL_FLT_CTR_RE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CTR_RE */
#define IFX_GTM_TIM_CH_CTRL_FLT_CTR_RE_OFF (21u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_MODE_FE */
#define IFX_GTM_TIM_CH_CTRL_FLT_MODE_FE_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_MODE_FE */
#define IFX_GTM_TIM_CH_CTRL_FLT_MODE_FE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_MODE_FE */
#define IFX_GTM_TIM_CH_CTRL_FLT_MODE_FE_OFF (22u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CTR_FE */
#define IFX_GTM_TIM_CH_CTRL_FLT_CTR_FE_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CTR_FE */
#define IFX_GTM_TIM_CH_CTRL_FLT_CTR_FE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.FLT_CTR_FE */
#define IFX_GTM_TIM_CH_CTRL_FLT_CTR_FE_OFF (23u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.CLK_SEL */
#define IFX_GTM_TIM_CH_CTRL_CLK_SEL_LEN (3u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.CLK_SEL */
#define IFX_GTM_TIM_CH_CTRL_CLK_SEL_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.CLK_SEL */
#define IFX_GTM_TIM_CH_CTRL_CLK_SEL_OFF (24u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.FR_ECNT_OFL */
#define IFX_GTM_TIM_CH_CTRL_FR_ECNT_OFL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.FR_ECNT_OFL */
#define IFX_GTM_TIM_CH_CTRL_FR_ECNT_OFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.FR_ECNT_OFL */
#define IFX_GTM_TIM_CH_CTRL_FR_ECNT_OFL_OFF (27u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.EGPR0_SEL */
#define IFX_GTM_TIM_CH_CTRL_EGPR0_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.EGPR0_SEL */
#define IFX_GTM_TIM_CH_CTRL_EGPR0_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.EGPR0_SEL */
#define IFX_GTM_TIM_CH_CTRL_EGPR0_SEL_OFF (28u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.EGPR1_SEL */
#define IFX_GTM_TIM_CH_CTRL_EGPR1_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.EGPR1_SEL */
#define IFX_GTM_TIM_CH_CTRL_EGPR1_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.EGPR1_SEL */
#define IFX_GTM_TIM_CH_CTRL_EGPR1_SEL_OFF (29u)

/** \brief Length for Ifx_GTM_TIM_CH_CTRL_Bits.TOCTRL */
#define IFX_GTM_TIM_CH_CTRL_TOCTRL_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_CTRL_Bits.TOCTRL */
#define IFX_GTM_TIM_CH_CTRL_TOCTRL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_CTRL_Bits.TOCTRL */
#define IFX_GTM_TIM_CH_CTRL_TOCTRL_OFF (30u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.EXT_CAP_SRC */
#define IFX_GTM_TIM_CH_ECTRL_EXT_CAP_SRC_LEN (4u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.EXT_CAP_SRC */
#define IFX_GTM_TIM_CH_ECTRL_EXT_CAP_SRC_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.EXT_CAP_SRC */
#define IFX_GTM_TIM_CH_ECTRL_EXT_CAP_SRC_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_PREV_TDU_IN */
#define IFX_GTM_TIM_CH_ECTRL_USE_PREV_TDU_IN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_PREV_TDU_IN */
#define IFX_GTM_TIM_CH_ECTRL_USE_PREV_TDU_IN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_PREV_TDU_IN */
#define IFX_GTM_TIM_CH_ECTRL_USE_PREV_TDU_IN_OFF (5u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.TODET_IRQ_SRC */
#define IFX_GTM_TIM_CH_ECTRL_TODET_IRQ_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.TODET_IRQ_SRC */
#define IFX_GTM_TIM_CH_ECTRL_TODET_IRQ_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.TODET_IRQ_SRC */
#define IFX_GTM_TIM_CH_ECTRL_TODET_IRQ_SRC_OFF (6u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_START */
#define IFX_GTM_TIM_CH_ECTRL_TDU_START_LEN (3u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_START */
#define IFX_GTM_TIM_CH_ECTRL_TDU_START_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_START */
#define IFX_GTM_TIM_CH_ECTRL_TDU_START_OFF (8u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_STOP */
#define IFX_GTM_TIM_CH_ECTRL_TDU_STOP_LEN (3u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_STOP */
#define IFX_GTM_TIM_CH_ECTRL_TDU_STOP_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_STOP */
#define IFX_GTM_TIM_CH_ECTRL_TDU_STOP_OFF (12u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_RESYNC */
#define IFX_GTM_TIM_CH_ECTRL_TDU_RESYNC_LEN (4u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_RESYNC */
#define IFX_GTM_TIM_CH_ECTRL_TDU_RESYNC_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.TDU_RESYNC */
#define IFX_GTM_TIM_CH_ECTRL_TDU_RESYNC_OFF (16u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_LUT */
#define IFX_GTM_TIM_CH_ECTRL_USE_LUT_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_LUT */
#define IFX_GTM_TIM_CH_ECTRL_USE_LUT_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_LUT */
#define IFX_GTM_TIM_CH_ECTRL_USE_LUT_OFF (22u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.EFLT_CTR_RE */
#define IFX_GTM_TIM_CH_ECTRL_EFLT_CTR_RE_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.EFLT_CTR_RE */
#define IFX_GTM_TIM_CH_ECTRL_EFLT_CTR_RE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.EFLT_CTR_RE */
#define IFX_GTM_TIM_CH_ECTRL_EFLT_CTR_RE_OFF (24u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.EFLT_CTR_FE */
#define IFX_GTM_TIM_CH_ECTRL_EFLT_CTR_FE_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.EFLT_CTR_FE */
#define IFX_GTM_TIM_CH_ECTRL_EFLT_CTR_FE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.EFLT_CTR_FE */
#define IFX_GTM_TIM_CH_ECTRL_EFLT_CTR_FE_OFF (25u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.SWAP_CAPTURE */
#define IFX_GTM_TIM_CH_ECTRL_SWAP_CAPTURE_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.SWAP_CAPTURE */
#define IFX_GTM_TIM_CH_ECTRL_SWAP_CAPTURE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.SWAP_CAPTURE */
#define IFX_GTM_TIM_CH_ECTRL_SWAP_CAPTURE_OFF (28u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.IMM_START */
#define IFX_GTM_TIM_CH_ECTRL_IMM_START_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.IMM_START */
#define IFX_GTM_TIM_CH_ECTRL_IMM_START_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.IMM_START */
#define IFX_GTM_TIM_CH_ECTRL_IMM_START_OFF (29u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.ECLK_SEL */
#define IFX_GTM_TIM_CH_ECTRL_ECLK_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.ECLK_SEL */
#define IFX_GTM_TIM_CH_ECTRL_ECLK_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.ECLK_SEL */
#define IFX_GTM_TIM_CH_ECTRL_ECLK_SEL_OFF (30u)

/** \brief Length for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_PREV_CH_IN */
#define IFX_GTM_TIM_CH_ECTRL_USE_PREV_CH_IN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_PREV_CH_IN */
#define IFX_GTM_TIM_CH_ECTRL_USE_PREV_CH_IN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_ECTRL_Bits.USE_PREV_CH_IN */
#define IFX_GTM_TIM_CH_ECTRL_USE_PREV_CH_IN_OFF (31u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.NEWVAL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_NEWVAL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.NEWVAL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_NEWVAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.NEWVAL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_NEWVAL_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.ECNTOFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_ECNTOFL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.ECNTOFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_ECNTOFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.ECNTOFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_ECNTOFL_OFF (1u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.CNTOFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_CNTOFL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.CNTOFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_CNTOFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.CNTOFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_CNTOFL_OFF (2u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.GPROFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_GPROFL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.GPROFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_GPROFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.GPROFL */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_GPROFL_OFF (3u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.TODET */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_TODET_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.TODET */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_TODET_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.TODET */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_TODET_OFF (4u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.GLITCHDET */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_GLITCHDET_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.GLITCHDET */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_GLITCHDET_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits.GLITCHDET */
#define IFX_GTM_TIM_CH_IRQ_NOTIFY_GLITCHDET_OFF (5u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_EN_Bits.NEWVAL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_NEWVAL_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_EN_Bits.NEWVAL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_NEWVAL_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_EN_Bits.NEWVAL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_NEWVAL_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_EN_Bits.ECNTOFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_ECNTOFL_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_EN_Bits.ECNTOFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_ECNTOFL_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_EN_Bits.ECNTOFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_ECNTOFL_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_EN_Bits.CNTOFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_CNTOFL_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_EN_Bits.CNTOFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_CNTOFL_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_EN_Bits.CNTOFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_CNTOFL_IRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_EN_Bits.GPROFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_GPROFL_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_EN_Bits.GPROFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_GPROFL_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_EN_Bits.GPROFL_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_GPROFL_IRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_EN_Bits.TODET_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_TODET_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_EN_Bits.TODET_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_TODET_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_EN_Bits.TODET_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_TODET_IRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_EN_Bits.GLITCHDET_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_GLITCHDET_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_EN_Bits.GLITCHDET_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_GLITCHDET_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_EN_Bits.GLITCHDET_IRQ_EN */
#define IFX_GTM_TIM_CH_IRQ_EN_GLITCHDET_IRQ_EN_OFF (5u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_NEWVAL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_NEWVAL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_NEWVAL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_NEWVAL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_NEWVAL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_NEWVAL_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_ECNTOFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_ECNTOFL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_ECNTOFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_ECNTOFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_ECNTOFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_ECNTOFL_OFF (1u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_CNTOFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_CNTOFL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_CNTOFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_CNTOFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_CNTOFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_CNTOFL_OFF (2u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_GPROFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_GPROFL_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_GPROFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_GPROFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_GPROFL */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_GPROFL_OFF (3u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_TODET */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_TODET_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_TODET */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_TODET_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_TODET */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_TODET_OFF (4u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_GLITCHDET */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_GLITCHDET_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_GLITCHDET */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_GLITCHDET_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits.TRG_GLITCHDET */
#define IFX_GTM_TIM_CH_IRQ_FORCINT_TRG_GLITCHDET_OFF (5u)

/** \brief Length for Ifx_GTM_TIM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_TIM_CH_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_TIM_CH_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_TIM_CH_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.NEWVAL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_NEWVAL_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.NEWVAL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_NEWVAL_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.NEWVAL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_NEWVAL_EIRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.ECNTOFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_ECNTOFL_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.ECNTOFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_ECNTOFL_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.ECNTOFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_ECNTOFL_EIRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.CNTOFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_CNTOFL_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.CNTOFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_CNTOFL_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.CNTOFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_CNTOFL_EIRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.GPROFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_GPROFL_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.GPROFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_GPROFL_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.GPROFL_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_GPROFL_EIRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.TODET_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_TODET_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.TODET_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_TODET_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.TODET_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_TODET_EIRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.GLITCHDET_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_GLITCHDET_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.GLITCHDET_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_GLITCHDET_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_CH_EIRQ_EN_Bits.GLITCHDET_EIRQ_EN */
#define IFX_GTM_TIM_CH_EIRQ_EN_GLITCHDET_EIRQ_EN_OFF (5u)

/** \brief Length for Ifx_GTM_TIM_INP_VAL_Bits.F_OUT */
#define IFX_GTM_TIM_INP_VAL_F_OUT_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_INP_VAL_Bits.F_OUT */
#define IFX_GTM_TIM_INP_VAL_F_OUT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_INP_VAL_Bits.F_OUT */
#define IFX_GTM_TIM_INP_VAL_F_OUT_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_INP_VAL_Bits.F_IN */
#define IFX_GTM_TIM_INP_VAL_F_IN_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_INP_VAL_Bits.F_IN */
#define IFX_GTM_TIM_INP_VAL_F_IN_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_INP_VAL_Bits.F_IN */
#define IFX_GTM_TIM_INP_VAL_F_IN_OFF (8u)

/** \brief Length for Ifx_GTM_TIM_INP_VAL_Bits.TIM_IN */
#define IFX_GTM_TIM_INP_VAL_TIM_IN_LEN (8u)

/** \brief Mask for Ifx_GTM_TIM_INP_VAL_Bits.TIM_IN */
#define IFX_GTM_TIM_INP_VAL_TIM_IN_MSK (0xffu)

/** \brief Offset for Ifx_GTM_TIM_INP_VAL_Bits.TIM_IN */
#define IFX_GTM_TIM_INP_VAL_TIM_IN_OFF (16u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_0 */
#define IFX_GTM_TIM_IN_SRC_VAL_0_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_0 */
#define IFX_GTM_TIM_IN_SRC_VAL_0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_0 */
#define IFX_GTM_TIM_IN_SRC_VAL_0_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_0 */
#define IFX_GTM_TIM_IN_SRC_MODE_0_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_0 */
#define IFX_GTM_TIM_IN_SRC_MODE_0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_0 */
#define IFX_GTM_TIM_IN_SRC_MODE_0_OFF (2u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_1 */
#define IFX_GTM_TIM_IN_SRC_VAL_1_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_1 */
#define IFX_GTM_TIM_IN_SRC_VAL_1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_1 */
#define IFX_GTM_TIM_IN_SRC_VAL_1_OFF (4u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_1 */
#define IFX_GTM_TIM_IN_SRC_MODE_1_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_1 */
#define IFX_GTM_TIM_IN_SRC_MODE_1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_1 */
#define IFX_GTM_TIM_IN_SRC_MODE_1_OFF (6u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_2 */
#define IFX_GTM_TIM_IN_SRC_VAL_2_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_2 */
#define IFX_GTM_TIM_IN_SRC_VAL_2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_2 */
#define IFX_GTM_TIM_IN_SRC_VAL_2_OFF (8u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_2 */
#define IFX_GTM_TIM_IN_SRC_MODE_2_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_2 */
#define IFX_GTM_TIM_IN_SRC_MODE_2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_2 */
#define IFX_GTM_TIM_IN_SRC_MODE_2_OFF (10u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_3 */
#define IFX_GTM_TIM_IN_SRC_VAL_3_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_3 */
#define IFX_GTM_TIM_IN_SRC_VAL_3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_3 */
#define IFX_GTM_TIM_IN_SRC_VAL_3_OFF (12u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_3 */
#define IFX_GTM_TIM_IN_SRC_MODE_3_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_3 */
#define IFX_GTM_TIM_IN_SRC_MODE_3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_3 */
#define IFX_GTM_TIM_IN_SRC_MODE_3_OFF (14u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_4 */
#define IFX_GTM_TIM_IN_SRC_VAL_4_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_4 */
#define IFX_GTM_TIM_IN_SRC_VAL_4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_4 */
#define IFX_GTM_TIM_IN_SRC_VAL_4_OFF (16u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_4 */
#define IFX_GTM_TIM_IN_SRC_MODE_4_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_4 */
#define IFX_GTM_TIM_IN_SRC_MODE_4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_4 */
#define IFX_GTM_TIM_IN_SRC_MODE_4_OFF (18u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_5 */
#define IFX_GTM_TIM_IN_SRC_VAL_5_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_5 */
#define IFX_GTM_TIM_IN_SRC_VAL_5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_5 */
#define IFX_GTM_TIM_IN_SRC_VAL_5_OFF (20u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_5 */
#define IFX_GTM_TIM_IN_SRC_MODE_5_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_5 */
#define IFX_GTM_TIM_IN_SRC_MODE_5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_5 */
#define IFX_GTM_TIM_IN_SRC_MODE_5_OFF (22u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_6 */
#define IFX_GTM_TIM_IN_SRC_VAL_6_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_6 */
#define IFX_GTM_TIM_IN_SRC_VAL_6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_6 */
#define IFX_GTM_TIM_IN_SRC_VAL_6_OFF (24u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_6 */
#define IFX_GTM_TIM_IN_SRC_MODE_6_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_6 */
#define IFX_GTM_TIM_IN_SRC_MODE_6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_6 */
#define IFX_GTM_TIM_IN_SRC_MODE_6_OFF (26u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.VAL_7 */
#define IFX_GTM_TIM_IN_SRC_VAL_7_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.VAL_7 */
#define IFX_GTM_TIM_IN_SRC_VAL_7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.VAL_7 */
#define IFX_GTM_TIM_IN_SRC_VAL_7_OFF (28u)

/** \brief Length for Ifx_GTM_TIM_IN_SRC_Bits.MODE_7 */
#define IFX_GTM_TIM_IN_SRC_MODE_7_LEN (2u)

/** \brief Mask for Ifx_GTM_TIM_IN_SRC_Bits.MODE_7 */
#define IFX_GTM_TIM_IN_SRC_MODE_7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TIM_IN_SRC_Bits.MODE_7 */
#define IFX_GTM_TIM_IN_SRC_MODE_7_OFF (30u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH0 */
#define IFX_GTM_TIM_RST_RST_CH0_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH0 */
#define IFX_GTM_TIM_RST_RST_CH0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH0 */
#define IFX_GTM_TIM_RST_RST_CH0_OFF (0u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH1 */
#define IFX_GTM_TIM_RST_RST_CH1_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH1 */
#define IFX_GTM_TIM_RST_RST_CH1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH1 */
#define IFX_GTM_TIM_RST_RST_CH1_OFF (1u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH2 */
#define IFX_GTM_TIM_RST_RST_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH2 */
#define IFX_GTM_TIM_RST_RST_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH2 */
#define IFX_GTM_TIM_RST_RST_CH2_OFF (2u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH3 */
#define IFX_GTM_TIM_RST_RST_CH3_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH3 */
#define IFX_GTM_TIM_RST_RST_CH3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH3 */
#define IFX_GTM_TIM_RST_RST_CH3_OFF (3u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH4 */
#define IFX_GTM_TIM_RST_RST_CH4_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH4 */
#define IFX_GTM_TIM_RST_RST_CH4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH4 */
#define IFX_GTM_TIM_RST_RST_CH4_OFF (4u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH5 */
#define IFX_GTM_TIM_RST_RST_CH5_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH5 */
#define IFX_GTM_TIM_RST_RST_CH5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH5 */
#define IFX_GTM_TIM_RST_RST_CH5_OFF (5u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH6 */
#define IFX_GTM_TIM_RST_RST_CH6_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH6 */
#define IFX_GTM_TIM_RST_RST_CH6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH6 */
#define IFX_GTM_TIM_RST_RST_CH6_OFF (6u)

/** \brief Length for Ifx_GTM_TIM_RST_Bits.RST_CH7 */
#define IFX_GTM_TIM_RST_RST_CH7_LEN (1u)

/** \brief Mask for Ifx_GTM_TIM_RST_Bits.RST_CH7 */
#define IFX_GTM_TIM_RST_RST_CH7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TIM_RST_Bits.RST_CH7 */
#define IFX_GTM_TIM_RST_RST_CH7_OFF (7u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.SR0_TRIG */
#define IFX_GTM_TOM_CH_CTRL_SR0_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.SR0_TRIG */
#define IFX_GTM_TOM_CH_CTRL_SR0_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.SR0_TRIG */
#define IFX_GTM_TOM_CH_CTRL_SR0_TRIG_OFF (7u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.SL */
#define IFX_GTM_TOM_CH_CTRL_SL_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.SL */
#define IFX_GTM_TOM_CH_CTRL_SL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.SL */
#define IFX_GTM_TOM_CH_CTRL_SL_OFF (11u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.CLK_SRC_SR */
#define IFX_GTM_TOM_CH_CTRL_CLK_SRC_SR_LEN (3u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.CLK_SRC_SR */
#define IFX_GTM_TOM_CH_CTRL_CLK_SRC_SR_MSK (0x7u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.CLK_SRC_SR */
#define IFX_GTM_TOM_CH_CTRL_CLK_SRC_SR_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.ECLK_SRC */
#define IFX_GTM_TOM_CH_CTRL_ECLK_SRC_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.ECLK_SRC */
#define IFX_GTM_TOM_CH_CTRL_ECLK_SRC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.ECLK_SRC */
#define IFX_GTM_TOM_CH_CTRL_ECLK_SRC_OFF (15u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.TRIG_PULSE */
#define IFX_GTM_TOM_CH_CTRL_TRIG_PULSE_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.TRIG_PULSE */
#define IFX_GTM_TOM_CH_CTRL_TRIG_PULSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.TRIG_PULSE */
#define IFX_GTM_TOM_CH_CTRL_TRIG_PULSE_OFF (17u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.UDMODE */
#define IFX_GTM_TOM_CH_CTRL_UDMODE_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.UDMODE */
#define IFX_GTM_TOM_CH_CTRL_UDMODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.UDMODE */
#define IFX_GTM_TOM_CH_CTRL_UDMODE_OFF (18u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.RST_CCU0 */
#define IFX_GTM_TOM_CH_CTRL_RST_CCU0_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.RST_CCU0 */
#define IFX_GTM_TOM_CH_CTRL_RST_CCU0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.RST_CCU0 */
#define IFX_GTM_TOM_CH_CTRL_RST_CCU0_OFF (20u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.OSM_TRIG */
#define IFX_GTM_TOM_CH_CTRL_OSM_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.OSM_TRIG */
#define IFX_GTM_TOM_CH_CTRL_OSM_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.OSM_TRIG */
#define IFX_GTM_TOM_CH_CTRL_OSM_TRIG_OFF (21u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.EXT_TRIG */
#define IFX_GTM_TOM_CH_CTRL_EXT_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.EXT_TRIG */
#define IFX_GTM_TOM_CH_CTRL_EXT_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.EXT_TRIG */
#define IFX_GTM_TOM_CH_CTRL_EXT_TRIG_OFF (22u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.EXTTRIGOUT */
#define IFX_GTM_TOM_CH_CTRL_EXTTRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.EXTTRIGOUT */
#define IFX_GTM_TOM_CH_CTRL_EXTTRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.EXTTRIGOUT */
#define IFX_GTM_TOM_CH_CTRL_EXTTRIGOUT_OFF (23u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.TRIGOUT */
#define IFX_GTM_TOM_CH_CTRL_TRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.TRIGOUT */
#define IFX_GTM_TOM_CH_CTRL_TRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.TRIGOUT */
#define IFX_GTM_TOM_CH_CTRL_TRIGOUT_OFF (24u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.SPE_TRIG */
#define IFX_GTM_TOM_CH_CTRL_SPE_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.SPE_TRIG */
#define IFX_GTM_TOM_CH_CTRL_SPE_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.SPE_TRIG */
#define IFX_GTM_TOM_CH_CTRL_SPE_TRIG_OFF (25u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.OSM */
#define IFX_GTM_TOM_CH_CTRL_OSM_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.OSM */
#define IFX_GTM_TOM_CH_CTRL_OSM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.OSM */
#define IFX_GTM_TOM_CH_CTRL_OSM_OFF (26u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.BITREV */
#define IFX_GTM_TOM_CH_CTRL_BITREV_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.BITREV */
#define IFX_GTM_TOM_CH_CTRL_BITREV_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.BITREV */
#define IFX_GTM_TOM_CH_CTRL_BITREV_OFF (27u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.SPEM */
#define IFX_GTM_TOM_CH_CTRL_SPEM_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.SPEM */
#define IFX_GTM_TOM_CH_CTRL_SPEM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.SPEM */
#define IFX_GTM_TOM_CH_CTRL_SPEM_OFF (28u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.GCM */
#define IFX_GTM_TOM_CH_CTRL_GCM_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.GCM */
#define IFX_GTM_TOM_CH_CTRL_GCM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.GCM */
#define IFX_GTM_TOM_CH_CTRL_GCM_OFF (29u)

/** \brief Length for Ifx_GTM_TOM_CH_CTRL_Bits.FREEZE */
#define IFX_GTM_TOM_CH_CTRL_FREEZE_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_CTRL_Bits.FREEZE */
#define IFX_GTM_TOM_CH_CTRL_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_CTRL_Bits.FREEZE */
#define IFX_GTM_TOM_CH_CTRL_FREEZE_OFF (31u)

/** \brief Length for Ifx_GTM_TOM_CH_SR0_Bits.SR0 */
#define IFX_GTM_TOM_CH_SR0_SR0_LEN (16u)

/** \brief Mask for Ifx_GTM_TOM_CH_SR0_Bits.SR0 */
#define IFX_GTM_TOM_CH_SR0_SR0_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_TOM_CH_SR0_Bits.SR0 */
#define IFX_GTM_TOM_CH_SR0_SR0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_SR1_Bits.SR1 */
#define IFX_GTM_TOM_CH_SR1_SR1_LEN (16u)

/** \brief Mask for Ifx_GTM_TOM_CH_SR1_Bits.SR1 */
#define IFX_GTM_TOM_CH_SR1_SR1_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_TOM_CH_SR1_Bits.SR1 */
#define IFX_GTM_TOM_CH_SR1_SR1_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_CM0_Bits.CM0 */
#define IFX_GTM_TOM_CH_CM0_CM0_LEN (16u)

/** \brief Mask for Ifx_GTM_TOM_CH_CM0_Bits.CM0 */
#define IFX_GTM_TOM_CH_CM0_CM0_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_TOM_CH_CM0_Bits.CM0 */
#define IFX_GTM_TOM_CH_CM0_CM0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_CM1_Bits.CM1 */
#define IFX_GTM_TOM_CH_CM1_CM1_LEN (16u)

/** \brief Mask for Ifx_GTM_TOM_CH_CM1_Bits.CM1 */
#define IFX_GTM_TOM_CH_CM1_CM1_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_TOM_CH_CM1_Bits.CM1 */
#define IFX_GTM_TOM_CH_CM1_CM1_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_CN0_Bits.CN0 */
#define IFX_GTM_TOM_CH_CN0_CN0_LEN (16u)

/** \brief Mask for Ifx_GTM_TOM_CH_CN0_Bits.CN0 */
#define IFX_GTM_TOM_CH_CN0_CN0_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_TOM_CH_CN0_Bits.CN0 */
#define IFX_GTM_TOM_CH_CN0_CN0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_STAT_Bits.OL */
#define IFX_GTM_TOM_CH_STAT_OL_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_STAT_Bits.OL */
#define IFX_GTM_TOM_CH_STAT_OL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_STAT_Bits.OL */
#define IFX_GTM_TOM_CH_STAT_OL_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits.CCU0TC */
#define IFX_GTM_TOM_CH_IRQ_NOTIFY_CCU0TC_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits.CCU0TC */
#define IFX_GTM_TOM_CH_IRQ_NOTIFY_CCU0TC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits.CCU0TC */
#define IFX_GTM_TOM_CH_IRQ_NOTIFY_CCU0TC_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits.CCU1TC */
#define IFX_GTM_TOM_CH_IRQ_NOTIFY_CCU1TC_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits.CCU1TC */
#define IFX_GTM_TOM_CH_IRQ_NOTIFY_CCU1TC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits.CCU1TC */
#define IFX_GTM_TOM_CH_IRQ_NOTIFY_CCU1TC_OFF (1u)

/** \brief Length for Ifx_GTM_TOM_CH_IRQ_EN_Bits.CCU0TC_IRQ_EN */
#define IFX_GTM_TOM_CH_IRQ_EN_CCU0TC_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_IRQ_EN_Bits.CCU0TC_IRQ_EN */
#define IFX_GTM_TOM_CH_IRQ_EN_CCU0TC_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_IRQ_EN_Bits.CCU0TC_IRQ_EN */
#define IFX_GTM_TOM_CH_IRQ_EN_CCU0TC_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_IRQ_EN_Bits.CCU1TC_IRQ_EN */
#define IFX_GTM_TOM_CH_IRQ_EN_CCU1TC_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_IRQ_EN_Bits.CCU1TC_IRQ_EN */
#define IFX_GTM_TOM_CH_IRQ_EN_CCU1TC_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_IRQ_EN_Bits.CCU1TC_IRQ_EN */
#define IFX_GTM_TOM_CH_IRQ_EN_CCU1TC_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits.TRG_CCU0TC0 */
#define IFX_GTM_TOM_CH_IRQ_FORCINT_TRG_CCU0TC0_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits.TRG_CCU0TC0 */
#define IFX_GTM_TOM_CH_IRQ_FORCINT_TRG_CCU0TC0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits.TRG_CCU0TC0 */
#define IFX_GTM_TOM_CH_IRQ_FORCINT_TRG_CCU0TC0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits.TRG_CCU1TC0 */
#define IFX_GTM_TOM_CH_IRQ_FORCINT_TRG_CCU1TC0_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits.TRG_CCU1TC0 */
#define IFX_GTM_TOM_CH_IRQ_FORCINT_TRG_CCU1TC0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits.TRG_CCU1TC0 */
#define IFX_GTM_TOM_CH_IRQ_FORCINT_TRG_CCU1TC0_OFF (1u)

/** \brief Length for Ifx_GTM_TOM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_TOM_CH_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_TOM_CH_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_TOM_CH_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.HOST_TRIG */
#define IFX_GTM_TOM_TGC_GLB_CTRL_HOST_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.HOST_TRIG */
#define IFX_GTM_TOM_TGC_GLB_CTRL_HOST_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.HOST_TRIG */
#define IFX_GTM_TOM_TGC_GLB_CTRL_HOST_TRIG_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH0 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH0_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH0 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH0 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH0_OFF (8u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH1 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH1_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH1 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH1 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH1_OFF (9u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH2 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH2 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH2 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH2_OFF (10u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH3 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH3_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH3 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH3 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH3_OFF (11u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH4 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH4_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH4 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH4 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH4_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH5 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH5_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH5 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH5 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH5_OFF (13u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH6 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH6_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH6 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH6 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH6_OFF (14u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH7 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH7_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH7 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.RST_CH7 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_RST_CH7_OFF (15u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL0 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL0 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL0 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL0_OFF (16u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL1 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL1 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL1 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL1_OFF (18u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL2 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL2 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL2 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL2_OFF (20u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL3 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL3 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL3 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL3_OFF (22u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL4 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL4 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL4 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL4_OFF (24u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL5 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL5 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL5 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL5_OFF (26u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL6 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL6 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL6 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL6_OFF (28u)

/** \brief Length for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL7 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL7 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_GLB_CTRL_Bits.UPEN_CTRL7 */
#define IFX_GTM_TOM_TGC_GLB_CTRL_UPEN_CTRL7_OFF (30u)

/** \brief Length for Ifx_GTM_TOM_TGC_ACT_TB_Bits.ACT_TB */
#define IFX_GTM_TOM_TGC_ACT_TB_ACT_TB_LEN (24u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ACT_TB_Bits.ACT_TB */
#define IFX_GTM_TOM_TGC_ACT_TB_ACT_TB_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_TOM_TGC_ACT_TB_Bits.ACT_TB */
#define IFX_GTM_TOM_TGC_ACT_TB_ACT_TB_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_ACT_TB_Bits.TB_TRIG */
#define IFX_GTM_TOM_TGC_ACT_TB_TB_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ACT_TB_Bits.TB_TRIG */
#define IFX_GTM_TOM_TGC_ACT_TB_TB_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ACT_TB_Bits.TB_TRIG */
#define IFX_GTM_TOM_TGC_ACT_TB_TB_TRIG_OFF (24u)

/** \brief Length for Ifx_GTM_TOM_TGC_ACT_TB_Bits.TBU_SEL */
#define IFX_GTM_TOM_TGC_ACT_TB_TBU_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ACT_TB_Bits.TBU_SEL */
#define IFX_GTM_TOM_TGC_ACT_TB_TBU_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ACT_TB_Bits.TBU_SEL */
#define IFX_GTM_TOM_TGC_ACT_TB_TBU_SEL_OFF (25u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL0 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL0 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL0 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL1 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL1 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL1 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL1_OFF (2u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL2 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL2 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL2 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL2_OFF (4u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL3 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL3 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL3 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL3_OFF (6u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL4 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL4 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL4 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL4_OFF (8u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL5 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL5 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL5 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL5_OFF (10u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL6 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL6 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL6 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL6_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL7 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL7 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.FUPD_CTRL7 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_FUPD_CTRL7_OFF (14u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH0 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH0 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH0 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH0_OFF (16u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH1 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH1 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH1 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH1_OFF (18u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH2 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH2 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH2 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH2_OFF (20u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH3 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH3 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH3 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH3_OFF (22u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH4 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH4 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH4 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH4_OFF (24u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH5 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH5 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH5 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH5_OFF (26u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH6 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH6 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH6 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH6_OFF (28u)

/** \brief Length for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH7 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH7 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_FUPD_CTRL_Bits.RSTCN0_CH7 */
#define IFX_GTM_TOM_TGC_FUPD_CTRL_RSTCN0_CH7_OFF (30u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG0 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG0 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG0 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG1 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG1 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG1 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG1_OFF (2u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG2 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG2 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG2 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG2_OFF (4u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG3 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG3 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG3 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG3_OFF (6u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG4 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG4 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG4 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG4_OFF (8u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG5 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG5 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG5 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG5_OFF (10u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG6 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG6 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG6 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG6_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG7 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG7 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_INT_TRIG_Bits.INT_TRIG7 */
#define IFX_GTM_TOM_TGC_INT_TRIG_INT_TRIG7_OFF (14u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL0 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL0 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL0 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL1 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL1 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL1 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL1_OFF (2u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL2 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL2 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL2 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL2_OFF (4u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL3 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL3 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL3 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3_OFF (6u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL4 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL4 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL4 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4_OFF (8u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL5 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL5 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL5 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5_OFF (10u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL6 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL6 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL6 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL7 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL7 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_CTRL_Bits.ENDIS_CTRL7 */
#define IFX_GTM_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7_OFF (14u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT0 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT0 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT0 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT1 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT1 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT1 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT1_OFF (2u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT2 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT2 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT2 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT2_OFF (4u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT3 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT3 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT3 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT3_OFF (6u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT4 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT4 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT4 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT4_OFF (8u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT5 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT5 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT5 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT5_OFF (10u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT6 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT6 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT6 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT6_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT7 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT7 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_ENDIS_STAT_Bits.ENDIS_STAT7 */
#define IFX_GTM_TOM_TGC_ENDIS_STAT_ENDIS_STAT7_OFF (14u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL0 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL0 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL0 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL1 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL1 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL1 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL1_OFF (2u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL2 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL2 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL2 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL2_OFF (4u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL3 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL3 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL3 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3_OFF (6u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL4 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL4 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL4 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4_OFF (8u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL5 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL5 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL5 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5_OFF (10u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL6 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL6 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL6 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL7 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL7 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_CTRL_Bits.OUTEN_CTRL7 */
#define IFX_GTM_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7_OFF (14u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT0 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT0 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT0 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_OFF (0u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT1 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT1_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT1 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT1 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT1_OFF (2u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT2 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT2_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT2 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT2 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT2_OFF (4u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT3 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT3_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT3 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT3 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT3_OFF (6u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT4 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT4_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT4 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT4 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT4_OFF (8u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT5 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT5_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT5 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT5 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT5_OFF (10u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT6 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT6_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT6 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT6 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT6_OFF (12u)

/** \brief Length for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT7 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT7_LEN (2u)

/** \brief Mask for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT7 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TOM_TGC_OUTEN_STAT_Bits.OUTEN_STAT7 */
#define IFX_GTM_TOM_TGC_OUTEN_STAT_OUTEN_STAT7_OFF (14u)

/** \brief Length for Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO_Bits.ADDR */
#define IFX_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO_ADDR_LEN (9u)

/** \brief Mask for Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO_Bits.ADDR */
#define IFX_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO_Bits.ADDR */
#define IFX_GTM_PSM_F2A_RD_CH_ARU_RD_FIFO_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_F2A_STR_CH_STR_CFG_Bits.TMODE */
#define IFX_GTM_PSM_F2A_STR_CH_STR_CFG_TMODE_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_STR_CH_STR_CFG_Bits.TMODE */
#define IFX_GTM_PSM_F2A_STR_CH_STR_CFG_TMODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_STR_CH_STR_CFG_Bits.TMODE */
#define IFX_GTM_PSM_F2A_STR_CH_STR_CFG_TMODE_OFF (16u)

/** \brief Length for Ifx_GTM_PSM_F2A_STR_CH_STR_CFG_Bits.DIR */
#define IFX_GTM_PSM_F2A_STR_CH_STR_CFG_DIR_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_F2A_STR_CH_STR_CFG_Bits.DIR */
#define IFX_GTM_PSM_F2A_STR_CH_STR_CFG_DIR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_F2A_STR_CH_STR_CFG_Bits.DIR */
#define IFX_GTM_PSM_F2A_STR_CH_STR_CFG_DIR_OFF (18u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR0_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR0_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR0_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR0_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR0_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR0_EN_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR1_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR1_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR1_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR1_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR1_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR1_EN_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR2_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR2_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR2_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR2_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR2_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR2_EN_OFF (4u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR3_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR3_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR3_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR3_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR3_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR3_EN_OFF (6u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR4_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR4_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR4_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR4_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR4_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR4_EN_OFF (8u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR5_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR5_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR5_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR5_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR5_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR5_EN_OFF (10u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR6_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR6_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR6_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR6_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR6_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR6_EN_OFF (12u)

/** \brief Length for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR7_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR7_EN_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR7_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR7_EN_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_ENABLE_Bits.STR7_EN */
#define IFX_GTM_PSM_F2A_ENABLE_STR7_EN_OFF (14u)

/** \brief Length for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR4_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR4_CONF_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR4_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR4_CONF_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR4_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR4_CONF_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR5_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR5_CONF_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR5_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR5_CONF_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR5_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR5_CONF_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR6_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR6_CONF_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR6_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR6_CONF_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR6_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR6_CONF_OFF (4u)

/** \brief Length for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR7_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR7_CONF_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR7_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR7_CONF_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_F2A_F2A_CTRL_Bits.STR7_CONF */
#define IFX_GTM_PSM_F2A_F2A_CTRL_STR7_CONF_OFF (6u)

/** \brief Length for Ifx_GTM_PSM_AFD_CH_BUF_ACC_Bits.DATA */
#define IFX_GTM_PSM_AFD_CH_BUF_ACC_DATA_LEN (29u)

/** \brief Mask for Ifx_GTM_PSM_AFD_CH_BUF_ACC_Bits.DATA */
#define IFX_GTM_PSM_AFD_CH_BUF_ACC_DATA_MSK (0x1fffffffu)

/** \brief Offset for Ifx_GTM_PSM_AFD_CH_BUF_ACC_Bits.DATA */
#define IFX_GTM_PSM_AFD_CH_BUF_ACC_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.RBM */
#define IFX_GTM_PSM_FIFO_CH_CTRL_RBM_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.RBM */
#define IFX_GTM_PSM_FIFO_CH_CTRL_RBM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.RBM */
#define IFX_GTM_PSM_FIFO_CH_CTRL_RBM_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.RAP */
#define IFX_GTM_PSM_FIFO_CH_CTRL_RAP_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.RAP */
#define IFX_GTM_PSM_FIFO_CH_CTRL_RAP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.RAP */
#define IFX_GTM_PSM_FIFO_CH_CTRL_RAP_OFF (1u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.FLUSH */
#define IFX_GTM_PSM_FIFO_CH_CTRL_FLUSH_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.FLUSH */
#define IFX_GTM_PSM_FIFO_CH_CTRL_FLUSH_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.FLUSH */
#define IFX_GTM_PSM_FIFO_CH_CTRL_FLUSH_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.WULOCK */
#define IFX_GTM_PSM_FIFO_CH_CTRL_WULOCK_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.WULOCK */
#define IFX_GTM_PSM_FIFO_CH_CTRL_WULOCK_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_CTRL_Bits.WULOCK */
#define IFX_GTM_PSM_FIFO_CH_CTRL_WULOCK_OFF (3u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_END_ADDR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_END_ADDR_ADDR_LEN (10u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_END_ADDR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_END_ADDR_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_END_ADDR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_END_ADDR_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_START_ADDR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_START_ADDR_ADDR_LEN (10u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_START_ADDR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_START_ADDR_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_START_ADDR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_START_ADDR_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_UPPER_WM_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_UPPER_WM_ADDR_LEN (10u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_UPPER_WM_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_UPPER_WM_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_UPPER_WM_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_UPPER_WM_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_LOWER_WM_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_LOWER_WM_ADDR_LEN (10u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_LOWER_WM_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_LOWER_WM_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_LOWER_WM_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_LOWER_WM_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.EMPTY */
#define IFX_GTM_PSM_FIFO_CH_STATUS_EMPTY_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.EMPTY */
#define IFX_GTM_PSM_FIFO_CH_STATUS_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.EMPTY */
#define IFX_GTM_PSM_FIFO_CH_STATUS_EMPTY_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.FULL */
#define IFX_GTM_PSM_FIFO_CH_STATUS_FULL_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.FULL */
#define IFX_GTM_PSM_FIFO_CH_STATUS_FULL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.FULL */
#define IFX_GTM_PSM_FIFO_CH_STATUS_FULL_OFF (1u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.LOW_WM */
#define IFX_GTM_PSM_FIFO_CH_STATUS_LOW_WM_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.LOW_WM */
#define IFX_GTM_PSM_FIFO_CH_STATUS_LOW_WM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.LOW_WM */
#define IFX_GTM_PSM_FIFO_CH_STATUS_LOW_WM_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.UP_WM */
#define IFX_GTM_PSM_FIFO_CH_STATUS_UP_WM_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.UP_WM */
#define IFX_GTM_PSM_FIFO_CH_STATUS_UP_WM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_STATUS_Bits.UP_WM */
#define IFX_GTM_PSM_FIFO_CH_STATUS_UP_WM_OFF (3u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL_Bits.LEVEL */
#define IFX_GTM_PSM_FIFO_CH_FILL_LEVEL_LEVEL_LEN (11u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL_Bits.LEVEL */
#define IFX_GTM_PSM_FIFO_CH_FILL_LEVEL_LEVEL_MSK (0x7ffu)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_FILL_LEVEL_Bits.LEVEL */
#define IFX_GTM_PSM_FIFO_CH_FILL_LEVEL_LEVEL_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_WR_PTR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_WR_PTR_ADDR_LEN (10u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_WR_PTR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_WR_PTR_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_WR_PTR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_WR_PTR_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_RD_PTR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_RD_PTR_ADDR_LEN (10u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_RD_PTR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_RD_PTR_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_RD_PTR_Bits.ADDR */
#define IFX_GTM_PSM_FIFO_CH_RD_PTR_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_EMPTY */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_EMPTY_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_EMPTY */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_EMPTY */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_EMPTY_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_FULL */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_FULL_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_FULL */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_FULL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_FULL */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_FULL_OFF (1u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_LWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_LWM_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_LWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_LWM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_LWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_LWM_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_UWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_UWM_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_UWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_UWM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_NOTIFY_Bits.FIFO_UWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_NOTIFY_FIFO_UWM_OFF (3u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_EMPTY_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_EMPTY_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_EMPTY_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_EMPTY_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_EMPTY_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_EMPTY_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_FULL_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_FULL_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_FULL_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_FULL_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_FULL_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_FULL_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_LWM_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_LWM_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_LWM_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_LWM_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_LWM_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_LWM_IRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_UWM_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_UWM_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_UWM_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_UWM_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_EN_Bits.FIFO_UWM_IRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_IRQ_EN_FIFO_UWM_IRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_EMPTY */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_EMPTY_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_EMPTY */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_EMPTY */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_EMPTY_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_FULL */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_FULL_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_FULL */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_FULL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_FULL */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_FULL_OFF (1u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_LWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_LWM_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_LWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_LWM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_LWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_LWM_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_UWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_UWM_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_UWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_UWM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_FORCINT_Bits.TRG_FIFO_UWM */
#define IFX_GTM_PSM_FIFO_CH_IRQ_FORCINT_TRG_FIFO_UWM_OFF (3u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.DMA_HYSTERESIS */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_DMA_HYSTERESIS_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.DMA_HYSTERESIS */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_DMA_HYSTERESIS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.DMA_HYSTERESIS */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_DMA_HYSTERESIS_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.DMA_HYST_DIR */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_DMA_HYST_DIR_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.DMA_HYST_DIR */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_DMA_HYST_DIR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_IRQ_MODE_Bits.DMA_HYST_DIR */
#define IFX_GTM_PSM_FIFO_CH_IRQ_MODE_DMA_HYST_DIR_OFF (3u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_EMPTY_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_EMPTY_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_EMPTY_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_EMPTY_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_EMPTY_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_EMPTY_EIRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_FULL_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_FULL_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_FULL_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_FULL_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_FULL_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_FULL_EIRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_LWM_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_LWM_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_LWM_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_LWM_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_LWM_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_LWM_EIRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_UWM_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_UWM_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_UWM_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_UWM_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_PSM_FIFO_CH_EIRQ_EN_Bits.FIFO_UWM_EIRQ_EN */
#define IFX_GTM_PSM_FIFO_CH_EIRQ_EN_FIFO_UWM_EIRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.MLT */
#define IFX_GTM_DPLL_CTRL_0_MLT_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.MLT */
#define IFX_GTM_DPLL_CTRL_0_MLT_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.MLT */
#define IFX_GTM_DPLL_CTRL_0_MLT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_IFP_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_IFP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_IFP_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.SNU */
#define IFX_GTM_DPLL_CTRL_0_SNU_LEN (5u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.SNU */
#define IFX_GTM_DPLL_CTRL_0_SNU_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.SNU */
#define IFX_GTM_DPLL_CTRL_0_SNU_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.TNU */
#define IFX_GTM_DPLL_CTRL_0_TNU_LEN (9u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.TNU */
#define IFX_GTM_DPLL_CTRL_0_TNU_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.TNU */
#define IFX_GTM_DPLL_CTRL_0_TNU_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.AMS */
#define IFX_GTM_DPLL_CTRL_0_AMS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.AMS */
#define IFX_GTM_DPLL_CTRL_0_AMS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.AMS */
#define IFX_GTM_DPLL_CTRL_0_AMS_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.AMT */
#define IFX_GTM_DPLL_CTRL_0_AMT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.AMT */
#define IFX_GTM_DPLL_CTRL_0_AMT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.AMT */
#define IFX_GTM_DPLL_CTRL_0_AMT_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.IDS */
#define IFX_GTM_DPLL_CTRL_0_IDS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.IDS */
#define IFX_GTM_DPLL_CTRL_0_IDS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.IDS */
#define IFX_GTM_DPLL_CTRL_0_IDS_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.IDT */
#define IFX_GTM_DPLL_CTRL_0_IDT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.IDT */
#define IFX_GTM_DPLL_CTRL_0_IDT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.IDT */
#define IFX_GTM_DPLL_CTRL_0_IDT_OFF (28u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.SEN */
#define IFX_GTM_DPLL_CTRL_0_SEN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.SEN */
#define IFX_GTM_DPLL_CTRL_0_SEN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.SEN */
#define IFX_GTM_DPLL_CTRL_0_SEN_OFF (29u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.TEN */
#define IFX_GTM_DPLL_CTRL_0_TEN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.TEN */
#define IFX_GTM_DPLL_CTRL_0_TEN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.TEN */
#define IFX_GTM_DPLL_CTRL_0_TEN_OFF (30u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_RMO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_RMO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_RMO_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_DMO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_DMO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_DMO_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.DEN */
#define IFX_GTM_DPLL_CTRL_1_DEN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.DEN */
#define IFX_GTM_DPLL_CTRL_1_DEN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.DEN */
#define IFX_GTM_DPLL_CTRL_1_DEN_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.IDDS */
#define IFX_GTM_DPLL_CTRL_1_IDDS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.IDDS */
#define IFX_GTM_DPLL_CTRL_1_IDDS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.IDDS */
#define IFX_GTM_DPLL_CTRL_1_IDDS_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_COA_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_COA_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_COA_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.PIT */
#define IFX_GTM_DPLL_CTRL_1_PIT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.PIT */
#define IFX_GTM_DPLL_CTRL_1_PIT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.PIT */
#define IFX_GTM_DPLL_CTRL_1_PIT_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SGE1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SGE1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SGE1_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_DLM1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_DLM1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_DLM1_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_PCM1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_PCM1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_PCM1_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SGE2 */
#define IFX_GTM_DPLL_CTRL_1_SGE2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SGE2 */
#define IFX_GTM_DPLL_CTRL_1_SGE2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SGE2 */
#define IFX_GTM_DPLL_CTRL_1_SGE2_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.DLM2 */
#define IFX_GTM_DPLL_CTRL_1_DLM2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.DLM2 */
#define IFX_GTM_DPLL_CTRL_1_DLM2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.DLM2 */
#define IFX_GTM_DPLL_CTRL_1_DLM2_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.PCM2 */
#define IFX_GTM_DPLL_CTRL_1_PCM2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.PCM2 */
#define IFX_GTM_DPLL_CTRL_1_PCM2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.PCM2 */
#define IFX_GTM_DPLL_CTRL_1_PCM2_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SYN_NS */
#define IFX_GTM_DPLL_CTRL_1_SYN_NS_LEN (5u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SYN_NS */
#define IFX_GTM_DPLL_CTRL_1_SYN_NS_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SYN_NS */
#define IFX_GTM_DPLL_CTRL_1_SYN_NS_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SYN_NT */
#define IFX_GTM_DPLL_CTRL_1_SYN_NT_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SYN_NT */
#define IFX_GTM_DPLL_CTRL_1_SYN_NT_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SYN_NT */
#define IFX_GTM_DPLL_CTRL_1_SYN_NT_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.LCD */
#define IFX_GTM_DPLL_CTRL_1_LCD_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.LCD */
#define IFX_GTM_DPLL_CTRL_1_LCD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.LCD */
#define IFX_GTM_DPLL_CTRL_1_LCD_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SWR */
#define IFX_GTM_DPLL_CTRL_1_SWR_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SWR */
#define IFX_GTM_DPLL_CTRL_1_SWR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SWR */
#define IFX_GTM_DPLL_CTRL_1_SWR_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SYSF */
#define IFX_GTM_DPLL_CTRL_1_SYSF_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SYSF */
#define IFX_GTM_DPLL_CTRL_1_SYSF_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SYSF */
#define IFX_GTM_DPLL_CTRL_1_SYSF_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.TS0_HRS */
#define IFX_GTM_DPLL_CTRL_1_TS0_HRS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.TS0_HRS */
#define IFX_GTM_DPLL_CTRL_1_TS0_HRS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.TS0_HRS */
#define IFX_GTM_DPLL_CTRL_1_TS0_HRS_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.TS0_HRT */
#define IFX_GTM_DPLL_CTRL_1_TS0_HRT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.TS0_HRT */
#define IFX_GTM_DPLL_CTRL_1_TS0_HRT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.TS0_HRT */
#define IFX_GTM_DPLL_CTRL_1_TS0_HRT_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SMC */
#define IFX_GTM_DPLL_CTRL_1_SMC_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SMC */
#define IFX_GTM_DPLL_CTRL_1_SMC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SMC */
#define IFX_GTM_DPLL_CTRL_1_SMC_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.SSL */
#define IFX_GTM_DPLL_CTRL_1_SSL_LEN (2u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.SSL */
#define IFX_GTM_DPLL_CTRL_1_SSL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.SSL */
#define IFX_GTM_DPLL_CTRL_1_SSL_OFF (28u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_Bits.TSL */
#define IFX_GTM_DPLL_CTRL_1_TSL_LEN (2u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_Bits.TSL */
#define IFX_GTM_DPLL_CTRL_1_TSL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_Bits.TSL */
#define IFX_GTM_DPLL_CTRL_1_TSL_OFF (30u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN0 */
#define IFX_GTM_DPLL_CTRL_2_AEN0_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN0 */
#define IFX_GTM_DPLL_CTRL_2_AEN0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN0 */
#define IFX_GTM_DPLL_CTRL_2_AEN0_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN1 */
#define IFX_GTM_DPLL_CTRL_2_AEN1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN1 */
#define IFX_GTM_DPLL_CTRL_2_AEN1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN1 */
#define IFX_GTM_DPLL_CTRL_2_AEN1_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN2 */
#define IFX_GTM_DPLL_CTRL_2_AEN2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN2 */
#define IFX_GTM_DPLL_CTRL_2_AEN2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN2 */
#define IFX_GTM_DPLL_CTRL_2_AEN2_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN3 */
#define IFX_GTM_DPLL_CTRL_2_AEN3_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN3 */
#define IFX_GTM_DPLL_CTRL_2_AEN3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN3 */
#define IFX_GTM_DPLL_CTRL_2_AEN3_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN4 */
#define IFX_GTM_DPLL_CTRL_2_AEN4_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN4 */
#define IFX_GTM_DPLL_CTRL_2_AEN4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN4 */
#define IFX_GTM_DPLL_CTRL_2_AEN4_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN5 */
#define IFX_GTM_DPLL_CTRL_2_AEN5_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN5 */
#define IFX_GTM_DPLL_CTRL_2_AEN5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN5 */
#define IFX_GTM_DPLL_CTRL_2_AEN5_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN6 */
#define IFX_GTM_DPLL_CTRL_2_AEN6_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN6 */
#define IFX_GTM_DPLL_CTRL_2_AEN6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN6 */
#define IFX_GTM_DPLL_CTRL_2_AEN6_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.AEN7 */
#define IFX_GTM_DPLL_CTRL_2_AEN7_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.AEN7 */
#define IFX_GTM_DPLL_CTRL_2_AEN7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.AEN7 */
#define IFX_GTM_DPLL_CTRL_2_AEN7_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD0 */
#define IFX_GTM_DPLL_CTRL_2_WAD0_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD0 */
#define IFX_GTM_DPLL_CTRL_2_WAD0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD0 */
#define IFX_GTM_DPLL_CTRL_2_WAD0_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD1 */
#define IFX_GTM_DPLL_CTRL_2_WAD1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD1 */
#define IFX_GTM_DPLL_CTRL_2_WAD1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD1 */
#define IFX_GTM_DPLL_CTRL_2_WAD1_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD2 */
#define IFX_GTM_DPLL_CTRL_2_WAD2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD2 */
#define IFX_GTM_DPLL_CTRL_2_WAD2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD2 */
#define IFX_GTM_DPLL_CTRL_2_WAD2_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD3 */
#define IFX_GTM_DPLL_CTRL_2_WAD3_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD3 */
#define IFX_GTM_DPLL_CTRL_2_WAD3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD3 */
#define IFX_GTM_DPLL_CTRL_2_WAD3_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD4 */
#define IFX_GTM_DPLL_CTRL_2_WAD4_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD4 */
#define IFX_GTM_DPLL_CTRL_2_WAD4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD4 */
#define IFX_GTM_DPLL_CTRL_2_WAD4_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD5 */
#define IFX_GTM_DPLL_CTRL_2_WAD5_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD5 */
#define IFX_GTM_DPLL_CTRL_2_WAD5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD5 */
#define IFX_GTM_DPLL_CTRL_2_WAD5_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD6 */
#define IFX_GTM_DPLL_CTRL_2_WAD6_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD6 */
#define IFX_GTM_DPLL_CTRL_2_WAD6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD6 */
#define IFX_GTM_DPLL_CTRL_2_WAD6_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_2_Bits.WAD7 */
#define IFX_GTM_DPLL_CTRL_2_WAD7_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_2_Bits.WAD7 */
#define IFX_GTM_DPLL_CTRL_2_WAD7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_2_Bits.WAD7 */
#define IFX_GTM_DPLL_CTRL_2_WAD7_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN8 */
#define IFX_GTM_DPLL_CTRL_3_AEN8_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN8 */
#define IFX_GTM_DPLL_CTRL_3_AEN8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN8 */
#define IFX_GTM_DPLL_CTRL_3_AEN8_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN9 */
#define IFX_GTM_DPLL_CTRL_3_AEN9_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN9 */
#define IFX_GTM_DPLL_CTRL_3_AEN9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN9 */
#define IFX_GTM_DPLL_CTRL_3_AEN9_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN10 */
#define IFX_GTM_DPLL_CTRL_3_AEN10_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN10 */
#define IFX_GTM_DPLL_CTRL_3_AEN10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN10 */
#define IFX_GTM_DPLL_CTRL_3_AEN10_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN11 */
#define IFX_GTM_DPLL_CTRL_3_AEN11_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN11 */
#define IFX_GTM_DPLL_CTRL_3_AEN11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN11 */
#define IFX_GTM_DPLL_CTRL_3_AEN11_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN12 */
#define IFX_GTM_DPLL_CTRL_3_AEN12_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN12 */
#define IFX_GTM_DPLL_CTRL_3_AEN12_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN12 */
#define IFX_GTM_DPLL_CTRL_3_AEN12_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN13 */
#define IFX_GTM_DPLL_CTRL_3_AEN13_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN13 */
#define IFX_GTM_DPLL_CTRL_3_AEN13_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN13 */
#define IFX_GTM_DPLL_CTRL_3_AEN13_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN14 */
#define IFX_GTM_DPLL_CTRL_3_AEN14_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN14 */
#define IFX_GTM_DPLL_CTRL_3_AEN14_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN14 */
#define IFX_GTM_DPLL_CTRL_3_AEN14_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.AEN15 */
#define IFX_GTM_DPLL_CTRL_3_AEN15_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.AEN15 */
#define IFX_GTM_DPLL_CTRL_3_AEN15_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.AEN15 */
#define IFX_GTM_DPLL_CTRL_3_AEN15_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD8 */
#define IFX_GTM_DPLL_CTRL_3_WAD8_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD8 */
#define IFX_GTM_DPLL_CTRL_3_WAD8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD8 */
#define IFX_GTM_DPLL_CTRL_3_WAD8_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD9 */
#define IFX_GTM_DPLL_CTRL_3_WAD9_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD9 */
#define IFX_GTM_DPLL_CTRL_3_WAD9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD9 */
#define IFX_GTM_DPLL_CTRL_3_WAD9_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD10 */
#define IFX_GTM_DPLL_CTRL_3_WAD10_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD10 */
#define IFX_GTM_DPLL_CTRL_3_WAD10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD10 */
#define IFX_GTM_DPLL_CTRL_3_WAD10_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD11 */
#define IFX_GTM_DPLL_CTRL_3_WAD11_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD11 */
#define IFX_GTM_DPLL_CTRL_3_WAD11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD11 */
#define IFX_GTM_DPLL_CTRL_3_WAD11_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD12 */
#define IFX_GTM_DPLL_CTRL_3_WAD12_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD12 */
#define IFX_GTM_DPLL_CTRL_3_WAD12_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD12 */
#define IFX_GTM_DPLL_CTRL_3_WAD12_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD13 */
#define IFX_GTM_DPLL_CTRL_3_WAD13_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD13 */
#define IFX_GTM_DPLL_CTRL_3_WAD13_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD13 */
#define IFX_GTM_DPLL_CTRL_3_WAD13_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD14 */
#define IFX_GTM_DPLL_CTRL_3_WAD14_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD14 */
#define IFX_GTM_DPLL_CTRL_3_WAD14_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD14 */
#define IFX_GTM_DPLL_CTRL_3_WAD14_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_3_Bits.WAD15 */
#define IFX_GTM_DPLL_CTRL_3_WAD15_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_3_Bits.WAD15 */
#define IFX_GTM_DPLL_CTRL_3_WAD15_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_3_Bits.WAD15 */
#define IFX_GTM_DPLL_CTRL_3_WAD15_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN16 */
#define IFX_GTM_DPLL_CTRL_4_AEN16_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN16 */
#define IFX_GTM_DPLL_CTRL_4_AEN16_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN16 */
#define IFX_GTM_DPLL_CTRL_4_AEN16_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN17 */
#define IFX_GTM_DPLL_CTRL_4_AEN17_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN17 */
#define IFX_GTM_DPLL_CTRL_4_AEN17_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN17 */
#define IFX_GTM_DPLL_CTRL_4_AEN17_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN18 */
#define IFX_GTM_DPLL_CTRL_4_AEN18_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN18 */
#define IFX_GTM_DPLL_CTRL_4_AEN18_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN18 */
#define IFX_GTM_DPLL_CTRL_4_AEN18_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN19 */
#define IFX_GTM_DPLL_CTRL_4_AEN19_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN19 */
#define IFX_GTM_DPLL_CTRL_4_AEN19_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN19 */
#define IFX_GTM_DPLL_CTRL_4_AEN19_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN20 */
#define IFX_GTM_DPLL_CTRL_4_AEN20_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN20 */
#define IFX_GTM_DPLL_CTRL_4_AEN20_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN20 */
#define IFX_GTM_DPLL_CTRL_4_AEN20_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN21 */
#define IFX_GTM_DPLL_CTRL_4_AEN21_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN21 */
#define IFX_GTM_DPLL_CTRL_4_AEN21_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN21 */
#define IFX_GTM_DPLL_CTRL_4_AEN21_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN22 */
#define IFX_GTM_DPLL_CTRL_4_AEN22_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN22 */
#define IFX_GTM_DPLL_CTRL_4_AEN22_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN22 */
#define IFX_GTM_DPLL_CTRL_4_AEN22_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.AEN23 */
#define IFX_GTM_DPLL_CTRL_4_AEN23_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.AEN23 */
#define IFX_GTM_DPLL_CTRL_4_AEN23_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.AEN23 */
#define IFX_GTM_DPLL_CTRL_4_AEN23_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD16 */
#define IFX_GTM_DPLL_CTRL_4_WAD16_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD16 */
#define IFX_GTM_DPLL_CTRL_4_WAD16_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD16 */
#define IFX_GTM_DPLL_CTRL_4_WAD16_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD17 */
#define IFX_GTM_DPLL_CTRL_4_WAD17_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD17 */
#define IFX_GTM_DPLL_CTRL_4_WAD17_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD17 */
#define IFX_GTM_DPLL_CTRL_4_WAD17_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD18 */
#define IFX_GTM_DPLL_CTRL_4_WAD18_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD18 */
#define IFX_GTM_DPLL_CTRL_4_WAD18_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD18 */
#define IFX_GTM_DPLL_CTRL_4_WAD18_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD19 */
#define IFX_GTM_DPLL_CTRL_4_WAD19_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD19 */
#define IFX_GTM_DPLL_CTRL_4_WAD19_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD19 */
#define IFX_GTM_DPLL_CTRL_4_WAD19_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD20 */
#define IFX_GTM_DPLL_CTRL_4_WAD20_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD20 */
#define IFX_GTM_DPLL_CTRL_4_WAD20_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD20 */
#define IFX_GTM_DPLL_CTRL_4_WAD20_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD21 */
#define IFX_GTM_DPLL_CTRL_4_WAD21_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD21 */
#define IFX_GTM_DPLL_CTRL_4_WAD21_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD21 */
#define IFX_GTM_DPLL_CTRL_4_WAD21_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD22 */
#define IFX_GTM_DPLL_CTRL_4_WAD22_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD22 */
#define IFX_GTM_DPLL_CTRL_4_WAD22_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD22 */
#define IFX_GTM_DPLL_CTRL_4_WAD22_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_4_Bits.WAD23 */
#define IFX_GTM_DPLL_CTRL_4_WAD23_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_4_Bits.WAD23 */
#define IFX_GTM_DPLL_CTRL_4_WAD23_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_4_Bits.WAD23 */
#define IFX_GTM_DPLL_CTRL_4_WAD23_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN24 */
#define IFX_GTM_DPLL_CTRL_5_AEN24_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN24 */
#define IFX_GTM_DPLL_CTRL_5_AEN24_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN24 */
#define IFX_GTM_DPLL_CTRL_5_AEN24_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN25 */
#define IFX_GTM_DPLL_CTRL_5_AEN25_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN25 */
#define IFX_GTM_DPLL_CTRL_5_AEN25_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN25 */
#define IFX_GTM_DPLL_CTRL_5_AEN25_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN26 */
#define IFX_GTM_DPLL_CTRL_5_AEN26_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN26 */
#define IFX_GTM_DPLL_CTRL_5_AEN26_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN26 */
#define IFX_GTM_DPLL_CTRL_5_AEN26_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN27 */
#define IFX_GTM_DPLL_CTRL_5_AEN27_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN27 */
#define IFX_GTM_DPLL_CTRL_5_AEN27_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN27 */
#define IFX_GTM_DPLL_CTRL_5_AEN27_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN28 */
#define IFX_GTM_DPLL_CTRL_5_AEN28_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN28 */
#define IFX_GTM_DPLL_CTRL_5_AEN28_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN28 */
#define IFX_GTM_DPLL_CTRL_5_AEN28_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN29 */
#define IFX_GTM_DPLL_CTRL_5_AEN29_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN29 */
#define IFX_GTM_DPLL_CTRL_5_AEN29_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN29 */
#define IFX_GTM_DPLL_CTRL_5_AEN29_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN30 */
#define IFX_GTM_DPLL_CTRL_5_AEN30_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN30 */
#define IFX_GTM_DPLL_CTRL_5_AEN30_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN30 */
#define IFX_GTM_DPLL_CTRL_5_AEN30_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.AEN31 */
#define IFX_GTM_DPLL_CTRL_5_AEN31_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.AEN31 */
#define IFX_GTM_DPLL_CTRL_5_AEN31_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.AEN31 */
#define IFX_GTM_DPLL_CTRL_5_AEN31_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD24 */
#define IFX_GTM_DPLL_CTRL_5_WAD24_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD24 */
#define IFX_GTM_DPLL_CTRL_5_WAD24_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD24 */
#define IFX_GTM_DPLL_CTRL_5_WAD24_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD25 */
#define IFX_GTM_DPLL_CTRL_5_WAD25_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD25 */
#define IFX_GTM_DPLL_CTRL_5_WAD25_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD25 */
#define IFX_GTM_DPLL_CTRL_5_WAD25_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD26 */
#define IFX_GTM_DPLL_CTRL_5_WAD26_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD26 */
#define IFX_GTM_DPLL_CTRL_5_WAD26_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD26 */
#define IFX_GTM_DPLL_CTRL_5_WAD26_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD27 */
#define IFX_GTM_DPLL_CTRL_5_WAD27_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD27 */
#define IFX_GTM_DPLL_CTRL_5_WAD27_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD27 */
#define IFX_GTM_DPLL_CTRL_5_WAD27_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD28 */
#define IFX_GTM_DPLL_CTRL_5_WAD28_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD28 */
#define IFX_GTM_DPLL_CTRL_5_WAD28_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD28 */
#define IFX_GTM_DPLL_CTRL_5_WAD28_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD29 */
#define IFX_GTM_DPLL_CTRL_5_WAD29_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD29 */
#define IFX_GTM_DPLL_CTRL_5_WAD29_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD29 */
#define IFX_GTM_DPLL_CTRL_5_WAD29_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD30 */
#define IFX_GTM_DPLL_CTRL_5_WAD30_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD30 */
#define IFX_GTM_DPLL_CTRL_5_WAD30_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD30 */
#define IFX_GTM_DPLL_CTRL_5_WAD30_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_5_Bits.WAD31 */
#define IFX_GTM_DPLL_CTRL_5_WAD31_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_5_Bits.WAD31 */
#define IFX_GTM_DPLL_CTRL_5_WAD31_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_5_Bits.WAD31 */
#define IFX_GTM_DPLL_CTRL_5_WAD31_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_ACT_STA_Bits.ACT_N */
#define IFX_GTM_DPLL_ACT_STA_ACT_N_LEN (32u)

/** \brief Mask for Ifx_GTM_DPLL_ACT_STA_Bits.ACT_N */
#define IFX_GTM_DPLL_ACT_STA_ACT_N_MSK (0xffffffffu)

/** \brief Offset for Ifx_GTM_DPLL_ACT_STA_Bits.ACT_N */
#define IFX_GTM_DPLL_ACT_STA_ACT_N_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_OSW_Bits.SWON_S */
#define IFX_GTM_DPLL_OSW_SWON_S_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_OSW_Bits.SWON_S */
#define IFX_GTM_DPLL_OSW_SWON_S_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_OSW_Bits.SWON_S */
#define IFX_GTM_DPLL_OSW_SWON_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_OSW_Bits.SWON_T */
#define IFX_GTM_DPLL_OSW_SWON_T_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_OSW_Bits.SWON_T */
#define IFX_GTM_DPLL_OSW_SWON_T_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_OSW_Bits.SWON_T */
#define IFX_GTM_DPLL_OSW_SWON_T_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_OSW_Bits.OSS */
#define IFX_GTM_DPLL_OSW_OSS_LEN (2u)

/** \brief Mask for Ifx_GTM_DPLL_OSW_Bits.OSS */
#define IFX_GTM_DPLL_OSW_OSS_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DPLL_OSW_Bits.OSS */
#define IFX_GTM_DPLL_OSW_OSS_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2A */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2A_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2A */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2A_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2A */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2A_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2B */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2B_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2B */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2B_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2B */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2B_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2C */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2C_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2C */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2C_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2C */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2C_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2D */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2D_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2D */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2D_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_AOSV_2_Bits.AOSV_2D */
#define IFX_GTM_DPLL_AOSV_2_AOSV_2D_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_APT_Bits.WAPT */
#define IFX_GTM_DPLL_APT_WAPT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APT_Bits.WAPT */
#define IFX_GTM_DPLL_APT_WAPT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APT_Bits.WAPT */
#define IFX_GTM_DPLL_APT_WAPT_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_APT_Bits.APT */
#define IFX_GTM_DPLL_APT_APT_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_APT_Bits.APT */
#define IFX_GTM_DPLL_APT_APT_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_APT_Bits.APT */
#define IFX_GTM_DPLL_APT_APT_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_APT_Bits.WAPT_2B */
#define IFX_GTM_DPLL_APT_WAPT_2B_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APT_Bits.WAPT_2B */
#define IFX_GTM_DPLL_APT_WAPT_2B_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APT_Bits.WAPT_2B */
#define IFX_GTM_DPLL_APT_WAPT_2B_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_APT_Bits.APT_2B */
#define IFX_GTM_DPLL_APT_APT_2B_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_APT_Bits.APT_2B */
#define IFX_GTM_DPLL_APT_APT_2B_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_APT_Bits.APT_2B */
#define IFX_GTM_DPLL_APT_APT_2B_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_APS_Bits.WAPS */
#define IFX_GTM_DPLL_APS_WAPS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APS_Bits.WAPS */
#define IFX_GTM_DPLL_APS_WAPS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APS_Bits.WAPS */
#define IFX_GTM_DPLL_APS_WAPS_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_APS_Bits.APS */
#define IFX_GTM_DPLL_APS_APS_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_APS_Bits.APS */
#define IFX_GTM_DPLL_APS_APS_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_Bits.APS */
#define IFX_GTM_DPLL_APS_APS_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_APS_Bits.WAPS_1C2 */
#define IFX_GTM_DPLL_APS_WAPS_1C2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APS_Bits.WAPS_1C2 */
#define IFX_GTM_DPLL_APS_WAPS_1C2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APS_Bits.WAPS_1C2 */
#define IFX_GTM_DPLL_APS_WAPS_1C2_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_APS_Bits.APS_1C2 */
#define IFX_GTM_DPLL_APS_APS_1C2_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_APS_Bits.APS_1C2 */
#define IFX_GTM_DPLL_APS_APS_1C2_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_Bits.APS_1C2 */
#define IFX_GTM_DPLL_APS_APS_1C2_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_APT_2C_Bits.APT_2C */
#define IFX_GTM_DPLL_APT_2C_APT_2C_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_APT_2C_Bits.APT_2C */
#define IFX_GTM_DPLL_APT_2C_APT_2C_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_APT_2C_Bits.APT_2C */
#define IFX_GTM_DPLL_APT_2C_APT_2C_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_APS_1C3_Bits.APS_1C3 */
#define IFX_GTM_DPLL_APS_1C3_APS_1C3_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_APS_1C3_Bits.APS_1C3 */
#define IFX_GTM_DPLL_APS_1C3_APS_1C3_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_1C3_Bits.APS_1C3 */
#define IFX_GTM_DPLL_APS_1C3_APS_1C3_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.NUTE */
#define IFX_GTM_DPLL_NUTC_NUTE_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.NUTE */
#define IFX_GTM_DPLL_NUTC_NUTE_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.NUTE */
#define IFX_GTM_DPLL_NUTC_NUTE_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.FST */
#define IFX_GTM_DPLL_NUTC_FST_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.FST */
#define IFX_GTM_DPLL_NUTC_FST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.FST */
#define IFX_GTM_DPLL_NUTC_FST_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.SYN_T */
#define IFX_GTM_DPLL_NUTC_SYN_T_LEN (3u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.SYN_T */
#define IFX_GTM_DPLL_NUTC_SYN_T_MSK (0x7u)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.SYN_T */
#define IFX_GTM_DPLL_NUTC_SYN_T_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.SYN_T_OLD */
#define IFX_GTM_DPLL_NUTC_SYN_T_OLD_LEN (3u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.SYN_T_OLD */
#define IFX_GTM_DPLL_NUTC_SYN_T_OLD_MSK (0x7u)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.SYN_T_OLD */
#define IFX_GTM_DPLL_NUTC_SYN_T_OLD_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.VTN */
#define IFX_GTM_DPLL_NUTC_VTN_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.VTN */
#define IFX_GTM_DPLL_NUTC_VTN_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.VTN */
#define IFX_GTM_DPLL_NUTC_VTN_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.WNUT */
#define IFX_GTM_DPLL_NUTC_WNUT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.WNUT */
#define IFX_GTM_DPLL_NUTC_WNUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.WNUT */
#define IFX_GTM_DPLL_NUTC_WNUT_OFF (29u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.WSYN */
#define IFX_GTM_DPLL_NUTC_WSYN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.WSYN */
#define IFX_GTM_DPLL_NUTC_WSYN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.WSYN */
#define IFX_GTM_DPLL_NUTC_WSYN_OFF (30u)

/** \brief Length for Ifx_GTM_DPLL_NUTC_Bits.WVTN */
#define IFX_GTM_DPLL_NUTC_WVTN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUTC_Bits.WVTN */
#define IFX_GTM_DPLL_NUTC_WVTN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUTC_Bits.WVTN */
#define IFX_GTM_DPLL_NUTC_WVTN_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.NUSE */
#define IFX_GTM_DPLL_NUSC_NUSE_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.NUSE */
#define IFX_GTM_DPLL_NUSC_NUSE_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.NUSE */
#define IFX_GTM_DPLL_NUSC_NUSE_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.FSS */
#define IFX_GTM_DPLL_NUSC_FSS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.FSS */
#define IFX_GTM_DPLL_NUSC_FSS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.FSS */
#define IFX_GTM_DPLL_NUSC_FSS_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.SYN_S */
#define IFX_GTM_DPLL_NUSC_SYN_S_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.SYN_S */
#define IFX_GTM_DPLL_NUSC_SYN_S_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.SYN_S */
#define IFX_GTM_DPLL_NUSC_SYN_S_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.SYN_S_OLD */
#define IFX_GTM_DPLL_NUSC_SYN_S_OLD_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.SYN_S_OLD */
#define IFX_GTM_DPLL_NUSC_SYN_S_OLD_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.SYN_S_OLD */
#define IFX_GTM_DPLL_NUSC_SYN_S_OLD_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.VSN */
#define IFX_GTM_DPLL_NUSC_VSN_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.VSN */
#define IFX_GTM_DPLL_NUSC_VSN_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.VSN */
#define IFX_GTM_DPLL_NUSC_VSN_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.WNUS */
#define IFX_GTM_DPLL_NUSC_WNUS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.WNUS */
#define IFX_GTM_DPLL_NUSC_WNUS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.WNUS */
#define IFX_GTM_DPLL_NUSC_WNUS_OFF (29u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.WSYN */
#define IFX_GTM_DPLL_NUSC_WSYN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.WSYN */
#define IFX_GTM_DPLL_NUSC_WSYN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.WSYN */
#define IFX_GTM_DPLL_NUSC_WSYN_OFF (30u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_Bits.WVSN */
#define IFX_GTM_DPLL_NUSC_WVSN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_Bits.WVSN */
#define IFX_GTM_DPLL_NUSC_WVSN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_Bits.WVSN */
#define IFX_GTM_DPLL_NUSC_WVSN_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_NTI_CNT_Bits.NTI_CNT */
#define IFX_GTM_DPLL_NTI_CNT_NTI_CNT_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_NTI_CNT_Bits.NTI_CNT */
#define IFX_GTM_DPLL_NTI_CNT_NTI_CNT_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_NTI_CNT_Bits.NTI_CNT */
#define IFX_GTM_DPLL_NTI_CNT_NTI_CNT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PDI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PDI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PDI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PDI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PDI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PDI_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PEI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PEI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PEI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PEI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PEI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PEI_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TINI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TINI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TINI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TINI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TINI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TINI_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TAXI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TAXI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TAXI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TAXI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TAXI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TAXI_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SISI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SISI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SISI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SISI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SISI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SISI_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TISI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TISI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TISI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TISI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TISI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TISI_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.MSI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_MSI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.MSI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_MSI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.MSI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_MSI_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.MTI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_MTI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.MTI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_MTI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.MTI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_MTI_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SASI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SASI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SASI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SASI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SASI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SASI_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TASI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TASI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TASI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TASI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TASI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TASI_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PWI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PWI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PWI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PWI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.PWI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_PWI_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.W2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_W2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.W2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_W2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.W2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_W2I_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.W1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_W1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.W1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_W1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.W1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_W1I_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.GL1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_GL1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.GL1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_GL1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.GL1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_GL1I_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.LL1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_LL1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.LL1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_LL1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.LL1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_LL1I_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.EI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_EI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.EI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_EI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.EI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_EI_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.GL2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_GL2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.GL2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_GL2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.GL2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_GL2I_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.LL2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_LL2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.LL2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_LL2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.LL2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_LL2I_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE0I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE0I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE0I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE0I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE0I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE0I_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE1I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE1I_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE2I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE2I_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE3I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE3I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE3I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE3I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE3I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE3I_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE4I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE4I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE4I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE4I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TE4I */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TE4I_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.CDTI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_CDTI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.CDTI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_CDTI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.CDTI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_CDTI_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.CDSI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_CDSI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.CDSI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_CDSI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.CDSI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_CDSI_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TORI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TORI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TORI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TORI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.TORI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_TORI_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SORI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SORI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SORI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SORI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.SORI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_SORI_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.DCGI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_DCGI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.DCGI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_DCGI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_NOTIFY_Bits.DCGI */
#define IFX_GTM_DPLL_IRQ_NOTIFY_DCGI_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.PDI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PDI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.PDI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PDI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.PDI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PDI_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.PEI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PEI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.PEI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PEI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.PEI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PEI_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TINI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TINI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TINI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TINI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TINI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TINI_IRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TAXI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TAXI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TAXI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TAXI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TAXI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TAXI_IRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.SISI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SISI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.SISI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SISI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.SISI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SISI_IRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TISI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TISI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TISI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TISI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TISI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TISI_IRQ_EN_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.MSI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_MSI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.MSI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_MSI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.MSI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_MSI_IRQ_EN_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.MTI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_MTI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.MTI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_MTI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.MTI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_MTI_IRQ_EN_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.SASI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SASI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.SASI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SASI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.SASI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SASI_IRQ_EN_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TASI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TASI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TASI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TASI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TASI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TASI_IRQ_EN_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.PWI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PWI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.PWI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PWI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.PWI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_PWI_IRQ_EN_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.W2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_W2I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.W2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_W2I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.W2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_W2I_IRQ_EN_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.W1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_W1I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.W1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_W1I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.W1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_W1I_IRQ_EN_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.GL1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_GL1I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.GL1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_GL1I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.GL1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_GL1I_IRQ_EN_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.LL1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_LL1I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.LL1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_LL1I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.LL1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_LL1I_IRQ_EN_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.EI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_EI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.EI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_EI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.EI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_EI_IRQ_EN_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.GL2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_GL2I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.GL2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_GL2I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.GL2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_GL2I_IRQ_EN_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.LL2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_LL2I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.LL2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_LL2I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.LL2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_LL2I_IRQ_EN_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TE0I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE0I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TE0I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE0I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TE0I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE0I_IRQ_EN_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TE1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE1I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TE1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE1I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TE1I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE1I_IRQ_EN_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TE2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE2I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TE2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE2I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TE2I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE2I_IRQ_EN_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TE3I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE3I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TE3I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE3I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TE3I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE3I_IRQ_EN_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TE4I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE4I_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TE4I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE4I_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TE4I_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TE4I_IRQ_EN_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.CDTI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_CDTI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.CDTI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_CDTI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.CDTI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_CDTI_IRQ_EN_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.CDSI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_CDSI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.CDSI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_CDSI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.CDSI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_CDSI_IRQ_EN_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.TORI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TORI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.TORI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TORI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.TORI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_TORI_IRQ_EN_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.SORI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SORI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.SORI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SORI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.SORI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_SORI_IRQ_EN_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_EN_Bits.DCGI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_DCGI_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_EN_Bits.DCGI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_DCGI_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_EN_Bits.DCGI_IRQ_EN */
#define IFX_GTM_DPLL_IRQ_EN_DCGI_IRQ_EN_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PDI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PDI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PDI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PDI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PDI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PDI_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PEI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PEI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PEI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PEI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PEI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PEI_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TINI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TINI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TINI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TINI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TINI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TINI_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TAXI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TAXI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TAXI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TAXI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TAXI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TAXI_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SISI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SISI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SISI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SISI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SISI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SISI_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TISI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TISI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TISI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TISI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TISI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TISI_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_MSI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_MSI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_MSI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_MSI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_MSI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_MSI_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_MTI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_MTI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_MTI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_MTI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_MTI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_MTI_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SASI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SASI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SASI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SASI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SASI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SASI_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TASI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TASI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TASI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TASI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TASI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TASI_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PWI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PWI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PWI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PWI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_PWI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_PWI_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_W2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_W2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_W2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_W2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_W2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_W2I_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_W1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_W1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_W1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_W1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_W1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_W1I_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_GL1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_GL1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_GL1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_GL1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_GL1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_GL1I_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_LL1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_LL1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_LL1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_LL1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_LL1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_LL1I_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_EI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_EI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_EI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_EI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_EI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_EI_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_GL2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_GL2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_GL2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_GL2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_GL2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_GL2I_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_LL2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_LL2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_LL2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_LL2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_LL2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_LL2I_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE0I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE0I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE0I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE0I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE0I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE0I_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE1I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE1I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE1I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE1I_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE2I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE2I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE2I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE2I_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE3I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE3I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE3I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE3I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE3I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE3I_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE4I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE4I_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE4I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE4I_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TE4I */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TE4I_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_CDTI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_CDTI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_CDTI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_CDTI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_CDTI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_CDTI_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_CDSI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_CDSI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_CDSI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_CDSI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_CDSI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_CDSI_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TORI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TORI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TORI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TORI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_TORI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_TORI_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SORI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SORI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SORI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SORI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_SORI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_SORI_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_DCGI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_DCGI_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_DCGI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_DCGI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_FORCINT_Bits.TRG_DCGI */
#define IFX_GTM_DPLL_IRQ_FORCINT_TRG_DCGI_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_DPLL_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_DPLL_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_DPLL_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DPLL_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_DPLL_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.PDI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PDI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.PDI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PDI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.PDI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PDI_EIRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.PEI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PEI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.PEI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PEI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.PEI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PEI_EIRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TINI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TINI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TINI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TINI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TINI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TINI_EIRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TAXI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TAXI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TAXI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TAXI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TAXI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TAXI_EIRQ_EN_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.SISI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SISI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.SISI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SISI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.SISI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SISI_EIRQ_EN_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TISI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TISI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TISI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TISI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TISI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TISI_EIRQ_EN_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.MSI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_MSI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.MSI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_MSI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.MSI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_MSI_EIRQ_EN_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.MTI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_MTI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.MTI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_MTI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.MTI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_MTI_EIRQ_EN_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.SASI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SASI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.SASI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SASI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.SASI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SASI_EIRQ_EN_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TASI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TASI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TASI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TASI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TASI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TASI_EIRQ_EN_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.PWI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PWI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.PWI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PWI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.PWI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_PWI_EIRQ_EN_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.W2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_W2I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.W2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_W2I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.W2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_W2I_EIRQ_EN_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.W1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_W1I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.W1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_W1I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.W1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_W1I_EIRQ_EN_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.GL1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_GL1I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.GL1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_GL1I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.GL1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_GL1I_EIRQ_EN_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.LL1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_LL1I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.LL1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_LL1I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.LL1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_LL1I_EIRQ_EN_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.EI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_EI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.EI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_EI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.EI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_EI_EIRQ_EN_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.GL2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_GL2I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.GL2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_GL2I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.GL2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_GL2I_EIRQ_EN_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.LL2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_LL2I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.LL2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_LL2I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.LL2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_LL2I_EIRQ_EN_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE0I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE0I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE0I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE0I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE0I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE0I_EIRQ_EN_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE1I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE1I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE1I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE1I_EIRQ_EN_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE2I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE2I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE2I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE2I_EIRQ_EN_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE3I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE3I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE3I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE3I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE3I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE3I_EIRQ_EN_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE4I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE4I_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE4I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE4I_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TE4I_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TE4I_EIRQ_EN_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.CDTI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_CDTI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.CDTI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_CDTI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.CDTI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_CDTI_EIRQ_EN_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.CDSI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_CDSI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.CDSI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_CDSI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.CDSI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_CDSI_EIRQ_EN_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.TORI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TORI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.TORI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TORI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.TORI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_TORI_EIRQ_EN_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.SORI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SORI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.SORI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SORI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.SORI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_SORI_EIRQ_EN_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_EIRQ_EN_Bits.DCGI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_DCGI_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_EIRQ_EN_Bits.DCGI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_DCGI_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_EIRQ_EN_Bits.DCGI_EIRQ_EN */
#define IFX_GTM_DPLL_EIRQ_EN_DCGI_EIRQ_EN_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_INC_CNT1_Bits.INC_CNT1 */
#define IFX_GTM_DPLL_INC_CNT1_INC_CNT1_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_INC_CNT1_Bits.INC_CNT1 */
#define IFX_GTM_DPLL_INC_CNT1_INC_CNT1_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_INC_CNT1_Bits.INC_CNT1 */
#define IFX_GTM_DPLL_INC_CNT1_INC_CNT1_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_INC_CNT2_Bits.INC_CNT2 */
#define IFX_GTM_DPLL_INC_CNT2_INC_CNT2_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_INC_CNT2_Bits.INC_CNT2 */
#define IFX_GTM_DPLL_INC_CNT2_INC_CNT2_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_INC_CNT2_Bits.INC_CNT2 */
#define IFX_GTM_DPLL_INC_CNT2_INC_CNT2_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_EXT */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_EXT_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_EXT */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_EXT_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_EXT */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_EXT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_STATUS */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_STATUS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_STATUS */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_STATUS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_STATUS */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_STATUS_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_OLD */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_OLD_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_OLD */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_OLD_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_APT_SYNC_Bits.APT_2B_OLD */
#define IFX_GTM_DPLL_APT_SYNC_APT_2B_OLD_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_EXT */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_EXT_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_EXT */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_EXT_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_EXT */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_EXT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_STATUS */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_STATUS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_STATUS */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_STATUS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_STATUS */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_STATUS_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_OLD */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_OLD_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_OLD */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_OLD_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_SYNC_Bits.APS_1C2_OLD */
#define IFX_GTM_DPLL_APS_SYNC_APS_1C2_OLD_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_TBU_TS0_T_Bits.TBU_TS0_T */
#define IFX_GTM_DPLL_TBU_TS0_T_TBU_TS0_T_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TBU_TS0_T_Bits.TBU_TS0_T */
#define IFX_GTM_DPLL_TBU_TS0_T_TBU_TS0_T_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TBU_TS0_T_Bits.TBU_TS0_T */
#define IFX_GTM_DPLL_TBU_TS0_T_TBU_TS0_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TBU_TS0_S_Bits.TBU_TS0_S */
#define IFX_GTM_DPLL_TBU_TS0_S_TBU_TS0_S_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TBU_TS0_S_Bits.TBU_TS0_S */
#define IFX_GTM_DPLL_TBU_TS0_S_TBU_TS0_S_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TBU_TS0_S_Bits.TBU_TS0_S */
#define IFX_GTM_DPLL_TBU_TS0_S_TBU_TS0_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ADD_IN_LD1_Bits.ADD_IN_LD1 */
#define IFX_GTM_DPLL_ADD_IN_LD1_ADD_IN_LD1_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_ADD_IN_LD1_Bits.ADD_IN_LD1 */
#define IFX_GTM_DPLL_ADD_IN_LD1_ADD_IN_LD1_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_ADD_IN_LD1_Bits.ADD_IN_LD1 */
#define IFX_GTM_DPLL_ADD_IN_LD1_ADD_IN_LD1_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ADD_IN_LD2_Bits.ADD_IN_LD2 */
#define IFX_GTM_DPLL_ADD_IN_LD2_ADD_IN_LD2_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_ADD_IN_LD2_Bits.ADD_IN_LD2 */
#define IFX_GTM_DPLL_ADD_IN_LD2_ADD_IN_LD2_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_ADD_IN_LD2_Bits.ADD_IN_LD2 */
#define IFX_GTM_DPLL_ADD_IN_LD2_ADD_IN_LD2_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.FPCE */
#define IFX_GTM_DPLL_STATUS_FPCE_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.FPCE */
#define IFX_GTM_DPLL_STATUS_FPCE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.FPCE */
#define IFX_GTM_DPLL_STATUS_FPCE_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.CSO */
#define IFX_GTM_DPLL_STATUS_CSO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.CSO */
#define IFX_GTM_DPLL_STATUS_CSO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.CSO */
#define IFX_GTM_DPLL_STATUS_CSO_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.CTO */
#define IFX_GTM_DPLL_STATUS_CTO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.CTO */
#define IFX_GTM_DPLL_STATUS_CTO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.CTO */
#define IFX_GTM_DPLL_STATUS_CTO_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.CRO */
#define IFX_GTM_DPLL_STATUS_CRO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.CRO */
#define IFX_GTM_DPLL_STATUS_CRO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.CRO */
#define IFX_GTM_DPLL_STATUS_CRO_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.RCS */
#define IFX_GTM_DPLL_STATUS_RCS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.RCS */
#define IFX_GTM_DPLL_STATUS_RCS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.RCS */
#define IFX_GTM_DPLL_STATUS_RCS_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.RCT */
#define IFX_GTM_DPLL_STATUS_RCT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.RCT */
#define IFX_GTM_DPLL_STATUS_RCT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.RCT */
#define IFX_GTM_DPLL_STATUS_RCT_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.PSE */
#define IFX_GTM_DPLL_STATUS_PSE_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.PSE */
#define IFX_GTM_DPLL_STATUS_PSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.PSE */
#define IFX_GTM_DPLL_STATUS_PSE_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.SOR */
#define IFX_GTM_DPLL_STATUS_SOR_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.SOR */
#define IFX_GTM_DPLL_STATUS_SOR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.SOR */
#define IFX_GTM_DPLL_STATUS_SOR_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.MS */
#define IFX_GTM_DPLL_STATUS_MS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.MS */
#define IFX_GTM_DPLL_STATUS_MS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.MS */
#define IFX_GTM_DPLL_STATUS_MS_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.TOR */
#define IFX_GTM_DPLL_STATUS_TOR_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.TOR */
#define IFX_GTM_DPLL_STATUS_TOR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.TOR */
#define IFX_GTM_DPLL_STATUS_TOR_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.MT */
#define IFX_GTM_DPLL_STATUS_MT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.MT */
#define IFX_GTM_DPLL_STATUS_MT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.MT */
#define IFX_GTM_DPLL_STATUS_MT_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.RAM2_ERR */
#define IFX_GTM_DPLL_STATUS_RAM2_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.RAM2_ERR */
#define IFX_GTM_DPLL_STATUS_RAM2_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.RAM2_ERR */
#define IFX_GTM_DPLL_STATUS_RAM2_ERR_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.LOW_RES */
#define IFX_GTM_DPLL_STATUS_LOW_RES_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.LOW_RES */
#define IFX_GTM_DPLL_STATUS_LOW_RES_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.LOW_RES */
#define IFX_GTM_DPLL_STATUS_LOW_RES_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.CSVS */
#define IFX_GTM_DPLL_STATUS_CSVS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.CSVS */
#define IFX_GTM_DPLL_STATUS_CSVS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.CSVS */
#define IFX_GTM_DPLL_STATUS_CSVS_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.CSVT */
#define IFX_GTM_DPLL_STATUS_CSVT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.CSVT */
#define IFX_GTM_DPLL_STATUS_CSVT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.CSVT */
#define IFX_GTM_DPLL_STATUS_CSVT_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.CAIP2 */
#define IFX_GTM_DPLL_STATUS_CAIP2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.CAIP2 */
#define IFX_GTM_DPLL_STATUS_CAIP2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.CAIP2 */
#define IFX_GTM_DPLL_STATUS_CAIP2_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.CAIP1 */
#define IFX_GTM_DPLL_STATUS_CAIP1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.CAIP1 */
#define IFX_GTM_DPLL_STATUS_CAIP1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.CAIP1 */
#define IFX_GTM_DPLL_STATUS_CAIP1_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.ISN */
#define IFX_GTM_DPLL_STATUS_ISN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.ISN */
#define IFX_GTM_DPLL_STATUS_ISN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.ISN */
#define IFX_GTM_DPLL_STATUS_ISN_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.ITN */
#define IFX_GTM_DPLL_STATUS_ITN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.ITN */
#define IFX_GTM_DPLL_STATUS_ITN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.ITN */
#define IFX_GTM_DPLL_STATUS_ITN_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.BWD2 */
#define IFX_GTM_DPLL_STATUS_BWD2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.BWD2 */
#define IFX_GTM_DPLL_STATUS_BWD2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.BWD2 */
#define IFX_GTM_DPLL_STATUS_BWD2_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.BWD1 */
#define IFX_GTM_DPLL_STATUS_BWD1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.BWD1 */
#define IFX_GTM_DPLL_STATUS_BWD1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.BWD1 */
#define IFX_GTM_DPLL_STATUS_BWD1_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.LOCK2 */
#define IFX_GTM_DPLL_STATUS_LOCK2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.LOCK2 */
#define IFX_GTM_DPLL_STATUS_LOCK2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.LOCK2 */
#define IFX_GTM_DPLL_STATUS_LOCK2_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.SYS */
#define IFX_GTM_DPLL_STATUS_SYS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.SYS */
#define IFX_GTM_DPLL_STATUS_SYS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.SYS */
#define IFX_GTM_DPLL_STATUS_SYS_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.SYT */
#define IFX_GTM_DPLL_STATUS_SYT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.SYT */
#define IFX_GTM_DPLL_STATUS_SYT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.SYT */
#define IFX_GTM_DPLL_STATUS_SYT_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.FSD */
#define IFX_GTM_DPLL_STATUS_FSD_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.FSD */
#define IFX_GTM_DPLL_STATUS_FSD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.FSD */
#define IFX_GTM_DPLL_STATUS_FSD_OFF (28u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.FTD */
#define IFX_GTM_DPLL_STATUS_FTD_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.FTD */
#define IFX_GTM_DPLL_STATUS_FTD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.FTD */
#define IFX_GTM_DPLL_STATUS_FTD_OFF (29u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.LOCK1 */
#define IFX_GTM_DPLL_STATUS_LOCK1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.LOCK1 */
#define IFX_GTM_DPLL_STATUS_LOCK1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.LOCK1 */
#define IFX_GTM_DPLL_STATUS_LOCK1_OFF (30u)

/** \brief Length for Ifx_GTM_DPLL_STATUS_Bits.ERR */
#define IFX_GTM_DPLL_STATUS_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STATUS_Bits.ERR */
#define IFX_GTM_DPLL_STATUS_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STATUS_Bits.ERR */
#define IFX_GTM_DPLL_STATUS_ERR_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_ID_PMTR_Bits.ID_PMTR_X */
#define IFX_GTM_DPLL_ID_PMTR_ID_PMTR_X_LEN (9u)

/** \brief Mask for Ifx_GTM_DPLL_ID_PMTR_Bits.ID_PMTR_X */
#define IFX_GTM_DPLL_ID_PMTR_ID_PMTR_X_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_DPLL_ID_PMTR_Bits.ID_PMTR_X */
#define IFX_GTM_DPLL_ID_PMTR_ID_PMTR_X_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.MLT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_MLT_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.MLT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_MLT_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.MLT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_MLT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_IFP_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_IFP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_IFP_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.AMT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_AMT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.AMT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_AMT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.AMT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_AMT_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.IDT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_IDT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.IDT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_IDT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.IDT */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_IDT_OFF (28u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_RMO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_RMO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_RMO_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_IFP_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_IFP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.IFP */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_IFP_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.AMS */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_AMS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.AMS */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_AMS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.AMS */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_AMS_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.IDS */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_IDS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.IDS */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_IDS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.IDS */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_IDS_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_RMO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_RMO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits.RMO */
#define IFX_GTM_DPLL_CTRL_0_SHADOW_STATE_RMO_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_DMO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_DMO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_DMO_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_COA_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_COA_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_COA_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.PIT */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_PIT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.PIT */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_PIT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.PIT */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_PIT_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_SGE1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_SGE1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_SGE1_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_DLM1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_DLM1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_DLM1_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_PCM1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_PCM1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_PCM1_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DMO_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DMO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DMO */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DMO_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_COA_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_COA_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.COA */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_COA_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_SGE1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_SGE1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.SGE1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_SGE1_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DLM1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DLM1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DLM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DLM1_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_PCM1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_PCM1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.PCM1 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_PCM1_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.SGE2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_SGE2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.SGE2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_SGE2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.SGE2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_SGE2_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DLM2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DLM2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DLM2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DLM2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.DLM2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_DLM2_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.PCM2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_PCM2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.PCM2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_PCM2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits.PCM2 */
#define IFX_GTM_DPLL_CTRL_1_SHADOW_STATE_PCM2_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_1A */
#define IFX_GTM_DPLL_RAM_INI_INIT_1A_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_1A */
#define IFX_GTM_DPLL_RAM_INI_INIT_1A_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_1A */
#define IFX_GTM_DPLL_RAM_INI_INIT_1A_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_1BC */
#define IFX_GTM_DPLL_RAM_INI_INIT_1BC_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_1BC */
#define IFX_GTM_DPLL_RAM_INI_INIT_1BC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_1BC */
#define IFX_GTM_DPLL_RAM_INI_INIT_1BC_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_2 */
#define IFX_GTM_DPLL_RAM_INI_INIT_2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_2 */
#define IFX_GTM_DPLL_RAM_INI_INIT_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_2 */
#define IFX_GTM_DPLL_RAM_INI_INIT_2_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_RAM */
#define IFX_GTM_DPLL_RAM_INI_INIT_RAM_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_RAM */
#define IFX_GTM_DPLL_RAM_INI_INIT_RAM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_RAM_INI_Bits.INIT_RAM */
#define IFX_GTM_DPLL_RAM_INI_INIT_RAM_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_PSA_Bits.PSA */
#define IFX_GTM_DPLL_PSA_PSA_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSA_Bits.PSA */
#define IFX_GTM_DPLL_PSA_PSA_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSA_Bits.PSA */
#define IFX_GTM_DPLL_PSA_PSA_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_DLA_Bits.DLA */
#define IFX_GTM_DPLL_DLA_DLA_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DLA_Bits.DLA */
#define IFX_GTM_DPLL_DLA_DLA_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DLA_Bits.DLA */
#define IFX_GTM_DPLL_DLA_DLA_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NA_Bits.DB */
#define IFX_GTM_DPLL_NA_DB_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_NA_Bits.DB */
#define IFX_GTM_DPLL_NA_DB_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_NA_Bits.DB */
#define IFX_GTM_DPLL_NA_DB_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NA_Bits.DW */
#define IFX_GTM_DPLL_NA_DW_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_NA_Bits.DW */
#define IFX_GTM_DPLL_NA_DW_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_NA_Bits.DW */
#define IFX_GTM_DPLL_NA_DW_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_DTA_Bits.DTA */
#define IFX_GTM_DPLL_DTA_DTA_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DTA_Bits.DTA */
#define IFX_GTM_DPLL_DTA_DTA_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DTA_Bits.DTA */
#define IFX_GTM_DPLL_DTA_DTA_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TS_T_Bits.TRIGGER_TS */
#define IFX_GTM_DPLL_TS_T_TRIGGER_TS_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TS_T_Bits.TRIGGER_TS */
#define IFX_GTM_DPLL_TS_T_TRIGGER_TS_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TS_T_Bits.TRIGGER_TS */
#define IFX_GTM_DPLL_TS_T_TRIGGER_TS_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TS_T_OLD_Bits.TRIGGER_TS_OLD */
#define IFX_GTM_DPLL_TS_T_OLD_TRIGGER_TS_OLD_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TS_T_OLD_Bits.TRIGGER_TS_OLD */
#define IFX_GTM_DPLL_TS_T_OLD_TRIGGER_TS_OLD_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TS_T_OLD_Bits.TRIGGER_TS_OLD */
#define IFX_GTM_DPLL_TS_T_OLD_TRIGGER_TS_OLD_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_FTV_T_Bits.TRIGGER_FT */
#define IFX_GTM_DPLL_FTV_T_TRIGGER_FT_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_FTV_T_Bits.TRIGGER_FT */
#define IFX_GTM_DPLL_FTV_T_TRIGGER_FT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_FTV_T_Bits.TRIGGER_FT */
#define IFX_GTM_DPLL_FTV_T_TRIGGER_FT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TS_S_Bits.STATE_TS */
#define IFX_GTM_DPLL_TS_S_STATE_TS_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TS_S_Bits.STATE_TS */
#define IFX_GTM_DPLL_TS_S_STATE_TS_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TS_S_Bits.STATE_TS */
#define IFX_GTM_DPLL_TS_S_STATE_TS_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TS_S_OLD_Bits.STATE_TS_OLD */
#define IFX_GTM_DPLL_TS_S_OLD_STATE_TS_OLD_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TS_S_OLD_Bits.STATE_TS_OLD */
#define IFX_GTM_DPLL_TS_S_OLD_STATE_TS_OLD_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TS_S_OLD_Bits.STATE_TS_OLD */
#define IFX_GTM_DPLL_TS_S_OLD_STATE_TS_OLD_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_FTV_S_Bits.STATE_FT */
#define IFX_GTM_DPLL_FTV_S_STATE_FT_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_FTV_S_Bits.STATE_FT */
#define IFX_GTM_DPLL_FTV_S_STATE_FT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_FTV_S_Bits.STATE_FT */
#define IFX_GTM_DPLL_FTV_S_STATE_FT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_THMI_Bits.THMI */
#define IFX_GTM_DPLL_THMI_THMI_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_THMI_Bits.THMI */
#define IFX_GTM_DPLL_THMI_THMI_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_THMI_Bits.THMI */
#define IFX_GTM_DPLL_THMI_THMI_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_THMA_Bits.THMA */
#define IFX_GTM_DPLL_THMA_THMA_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_THMA_Bits.THMA */
#define IFX_GTM_DPLL_THMA_THMA_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_THMA_Bits.THMA */
#define IFX_GTM_DPLL_THMA_THMA_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_THVAL_Bits.THVAL */
#define IFX_GTM_DPLL_THVAL_THVAL_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_THVAL_Bits.THVAL */
#define IFX_GTM_DPLL_THVAL_THVAL_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_THVAL_Bits.THVAL */
#define IFX_GTM_DPLL_THVAL_THVAL_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TOV_Bits.TOV_DB */
#define IFX_GTM_DPLL_TOV_TOV_DB_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_TOV_Bits.TOV_DB */
#define IFX_GTM_DPLL_TOV_TOV_DB_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_TOV_Bits.TOV_DB */
#define IFX_GTM_DPLL_TOV_TOV_DB_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TOV_Bits.TOV_DW */
#define IFX_GTM_DPLL_TOV_TOV_DW_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_TOV_Bits.TOV_DW */
#define IFX_GTM_DPLL_TOV_TOV_DW_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_TOV_Bits.TOV_DW */
#define IFX_GTM_DPLL_TOV_TOV_DW_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_TOV_S_Bits.DB */
#define IFX_GTM_DPLL_TOV_S_DB_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_TOV_S_Bits.DB */
#define IFX_GTM_DPLL_TOV_S_DB_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_TOV_S_Bits.DB */
#define IFX_GTM_DPLL_TOV_S_DB_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TOV_S_Bits.DW */
#define IFX_GTM_DPLL_TOV_S_DW_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_TOV_S_Bits.DW */
#define IFX_GTM_DPLL_TOV_S_DW_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_TOV_S_Bits.DW */
#define IFX_GTM_DPLL_TOV_S_DW_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_ADD_IN_CAL1_Bits.ADD_IN_CAL1 */
#define IFX_GTM_DPLL_ADD_IN_CAL1_ADD_IN_CAL1_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_ADD_IN_CAL1_Bits.ADD_IN_CAL1 */
#define IFX_GTM_DPLL_ADD_IN_CAL1_ADD_IN_CAL1_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_ADD_IN_CAL1_Bits.ADD_IN_CAL1 */
#define IFX_GTM_DPLL_ADD_IN_CAL1_ADD_IN_CAL1_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ADD_IN_CAL2_Bits.ADD_IN_CAL2 */
#define IFX_GTM_DPLL_ADD_IN_CAL2_ADD_IN_CAL2_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_ADD_IN_CAL2_Bits.ADD_IN_CAL2 */
#define IFX_GTM_DPLL_ADD_IN_CAL2_ADD_IN_CAL2_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_ADD_IN_CAL2_Bits.ADD_IN_CAL2 */
#define IFX_GTM_DPLL_ADD_IN_CAL2_ADD_IN_CAL2_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_MPVAL1_Bits.MPVAL1 */
#define IFX_GTM_DPLL_MPVAL1_MPVAL1_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_MPVAL1_Bits.MPVAL1 */
#define IFX_GTM_DPLL_MPVAL1_MPVAL1_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_MPVAL1_Bits.MPVAL1 */
#define IFX_GTM_DPLL_MPVAL1_MPVAL1_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_MPVAL1_Bits.SIX1 */
#define IFX_GTM_DPLL_MPVAL1_SIX1_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_MPVAL1_Bits.SIX1 */
#define IFX_GTM_DPLL_MPVAL1_SIX1_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_MPVAL1_Bits.SIX1 */
#define IFX_GTM_DPLL_MPVAL1_SIX1_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_MPVAL2_Bits.MPVAL2 */
#define IFX_GTM_DPLL_MPVAL2_MPVAL2_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_MPVAL2_Bits.MPVAL2 */
#define IFX_GTM_DPLL_MPVAL2_MPVAL2_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_MPVAL2_Bits.MPVAL2 */
#define IFX_GTM_DPLL_MPVAL2_MPVAL2_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_MPVAL2_Bits.SIX2 */
#define IFX_GTM_DPLL_MPVAL2_SIX2_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_MPVAL2_Bits.SIX2 */
#define IFX_GTM_DPLL_MPVAL2_SIX2_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_MPVAL2_Bits.SIX2 */
#define IFX_GTM_DPLL_MPVAL2_SIX2_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_NMB_T_TAR_Bits.NMB_T_TAR */
#define IFX_GTM_DPLL_NMB_T_TAR_NMB_T_TAR_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_NMB_T_TAR_Bits.NMB_T_TAR */
#define IFX_GTM_DPLL_NMB_T_TAR_NMB_T_TAR_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_NMB_T_TAR_Bits.NMB_T_TAR */
#define IFX_GTM_DPLL_NMB_T_TAR_NMB_T_TAR_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NMB_T_TAR_OLD_Bits.NMB_T_TAR_OLD */
#define IFX_GTM_DPLL_NMB_T_TAR_OLD_NMB_T_TAR_OLD_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_NMB_T_TAR_OLD_Bits.NMB_T_TAR_OLD */
#define IFX_GTM_DPLL_NMB_T_TAR_OLD_NMB_T_TAR_OLD_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_NMB_T_TAR_OLD_Bits.NMB_T_TAR_OLD */
#define IFX_GTM_DPLL_NMB_T_TAR_OLD_NMB_T_TAR_OLD_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NMB_S_TAR_Bits.NMB_S_TAR */
#define IFX_GTM_DPLL_NMB_S_TAR_NMB_S_TAR_LEN (20u)

/** \brief Mask for Ifx_GTM_DPLL_NMB_S_TAR_Bits.NMB_S_TAR */
#define IFX_GTM_DPLL_NMB_S_TAR_NMB_S_TAR_MSK (0xfffffu)

/** \brief Offset for Ifx_GTM_DPLL_NMB_S_TAR_Bits.NMB_S_TAR */
#define IFX_GTM_DPLL_NMB_S_TAR_NMB_S_TAR_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NMB_S_TAR_OLD_Bits.NMB_S_TAR_OLD */
#define IFX_GTM_DPLL_NMB_S_TAR_OLD_NMB_S_TAR_OLD_LEN (20u)

/** \brief Mask for Ifx_GTM_DPLL_NMB_S_TAR_OLD_Bits.NMB_S_TAR_OLD */
#define IFX_GTM_DPLL_NMB_S_TAR_OLD_NMB_S_TAR_OLD_MSK (0xfffffu)

/** \brief Offset for Ifx_GTM_DPLL_NMB_S_TAR_OLD_Bits.NMB_S_TAR_OLD */
#define IFX_GTM_DPLL_NMB_S_TAR_OLD_NMB_S_TAR_OLD_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RCDT_TX_Bits.RCDT_TX */
#define IFX_GTM_DPLL_RCDT_TX_RCDT_TX_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RCDT_TX_Bits.RCDT_TX */
#define IFX_GTM_DPLL_RCDT_TX_RCDT_TX_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RCDT_TX_Bits.RCDT_TX */
#define IFX_GTM_DPLL_RCDT_TX_RCDT_TX_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RCDT_SX_Bits.RCDT_SX */
#define IFX_GTM_DPLL_RCDT_SX_RCDT_SX_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RCDT_SX_Bits.RCDT_SX */
#define IFX_GTM_DPLL_RCDT_SX_RCDT_SX_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RCDT_SX_Bits.RCDT_SX */
#define IFX_GTM_DPLL_RCDT_SX_RCDT_SX_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RCDT_TX_NOM_Bits.RCDT_TX_NOM */
#define IFX_GTM_DPLL_RCDT_TX_NOM_RCDT_TX_NOM_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RCDT_TX_NOM_Bits.RCDT_TX_NOM */
#define IFX_GTM_DPLL_RCDT_TX_NOM_RCDT_TX_NOM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RCDT_TX_NOM_Bits.RCDT_TX_NOM */
#define IFX_GTM_DPLL_RCDT_TX_NOM_RCDT_TX_NOM_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RCDT_SX_NOM_Bits.RCDT_SX_NOM */
#define IFX_GTM_DPLL_RCDT_SX_NOM_RCDT_SX_NOM_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RCDT_SX_NOM_Bits.RCDT_SX_NOM */
#define IFX_GTM_DPLL_RCDT_SX_NOM_RCDT_SX_NOM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RCDT_SX_NOM_Bits.RCDT_SX_NOM */
#define IFX_GTM_DPLL_RCDT_SX_NOM_RCDT_SX_NOM_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RDT_T_ACT_Bits.RDT_T_ACT */
#define IFX_GTM_DPLL_RDT_T_ACT_RDT_T_ACT_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RDT_T_ACT_Bits.RDT_T_ACT */
#define IFX_GTM_DPLL_RDT_T_ACT_RDT_T_ACT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RDT_T_ACT_Bits.RDT_T_ACT */
#define IFX_GTM_DPLL_RDT_T_ACT_RDT_T_ACT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RDT_S_ACT_Bits.RDT_S_ACT */
#define IFX_GTM_DPLL_RDT_S_ACT_RDT_S_ACT_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RDT_S_ACT_Bits.RDT_S_ACT */
#define IFX_GTM_DPLL_RDT_S_ACT_RDT_S_ACT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RDT_S_ACT_Bits.RDT_S_ACT */
#define IFX_GTM_DPLL_RDT_S_ACT_RDT_S_ACT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_DT_T_ACT_Bits.DT_T_ACT */
#define IFX_GTM_DPLL_DT_T_ACT_DT_T_ACT_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DT_T_ACT_Bits.DT_T_ACT */
#define IFX_GTM_DPLL_DT_T_ACT_DT_T_ACT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DT_T_ACT_Bits.DT_T_ACT */
#define IFX_GTM_DPLL_DT_T_ACT_DT_T_ACT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_DT_S_ACT_Bits.DT_S_ACT */
#define IFX_GTM_DPLL_DT_S_ACT_DT_S_ACT_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DT_S_ACT_Bits.DT_S_ACT */
#define IFX_GTM_DPLL_DT_S_ACT_DT_S_ACT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DT_S_ACT_Bits.DT_S_ACT */
#define IFX_GTM_DPLL_DT_S_ACT_DT_S_ACT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_EDT_T_Bits.EDT_T */
#define IFX_GTM_DPLL_EDT_T_EDT_T_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_EDT_T_Bits.EDT_T */
#define IFX_GTM_DPLL_EDT_T_EDT_T_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_EDT_T_Bits.EDT_T */
#define IFX_GTM_DPLL_EDT_T_EDT_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_MEDT_T_Bits.MEDT_T */
#define IFX_GTM_DPLL_MEDT_T_MEDT_T_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_MEDT_T_Bits.MEDT_T */
#define IFX_GTM_DPLL_MEDT_T_MEDT_T_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_MEDT_T_Bits.MEDT_T */
#define IFX_GTM_DPLL_MEDT_T_MEDT_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_EDT_S_Bits.EDT_S */
#define IFX_GTM_DPLL_EDT_S_EDT_S_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_EDT_S_Bits.EDT_S */
#define IFX_GTM_DPLL_EDT_S_EDT_S_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_EDT_S_Bits.EDT_S */
#define IFX_GTM_DPLL_EDT_S_EDT_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_MEDT_S_Bits.MEDT_S */
#define IFX_GTM_DPLL_MEDT_S_MEDT_S_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_MEDT_S_Bits.MEDT_S */
#define IFX_GTM_DPLL_MEDT_S_MEDT_S_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_MEDT_S_Bits.MEDT_S */
#define IFX_GTM_DPLL_MEDT_S_MEDT_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CDT_TX_Bits.CDT_TX */
#define IFX_GTM_DPLL_CDT_TX_CDT_TX_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CDT_TX_Bits.CDT_TX */
#define IFX_GTM_DPLL_CDT_TX_CDT_TX_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CDT_TX_Bits.CDT_TX */
#define IFX_GTM_DPLL_CDT_TX_CDT_TX_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CDT_SX_Bits.CDT_SX */
#define IFX_GTM_DPLL_CDT_SX_CDT_SX_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CDT_SX_Bits.CDT_SX */
#define IFX_GTM_DPLL_CDT_SX_CDT_SX_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CDT_SX_Bits.CDT_SX */
#define IFX_GTM_DPLL_CDT_SX_CDT_SX_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CDT_TX_NOM_Bits.CDT_TX_NOM */
#define IFX_GTM_DPLL_CDT_TX_NOM_CDT_TX_NOM_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CDT_TX_NOM_Bits.CDT_TX_NOM */
#define IFX_GTM_DPLL_CDT_TX_NOM_CDT_TX_NOM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CDT_TX_NOM_Bits.CDT_TX_NOM */
#define IFX_GTM_DPLL_CDT_TX_NOM_CDT_TX_NOM_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CDT_SX_NOM_Bits.CDT_SX_NOM */
#define IFX_GTM_DPLL_CDT_SX_NOM_CDT_SX_NOM_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CDT_SX_NOM_Bits.CDT_SX_NOM */
#define IFX_GTM_DPLL_CDT_SX_NOM_CDT_SX_NOM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CDT_SX_NOM_Bits.CDT_SX_NOM */
#define IFX_GTM_DPLL_CDT_SX_NOM_CDT_SX_NOM_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TLR_Bits.TLR */
#define IFX_GTM_DPLL_TLR_TLR_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_TLR_Bits.TLR */
#define IFX_GTM_DPLL_TLR_TLR_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_TLR_Bits.TLR */
#define IFX_GTM_DPLL_TLR_TLR_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_SLR_Bits.SLR */
#define IFX_GTM_DPLL_SLR_SLR_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_SLR_Bits.SLR */
#define IFX_GTM_DPLL_SLR_SLR_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_SLR_Bits.SLR */
#define IFX_GTM_DPLL_SLR_SLR_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PDT_Bits.DB */
#define IFX_GTM_DPLL_PDT_DB_LEN (14u)

/** \brief Mask for Ifx_GTM_DPLL_PDT_Bits.DB */
#define IFX_GTM_DPLL_PDT_DB_MSK (0x3fffu)

/** \brief Offset for Ifx_GTM_DPLL_PDT_Bits.DB */
#define IFX_GTM_DPLL_PDT_DB_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PDT_Bits.DW */
#define IFX_GTM_DPLL_PDT_DW_LEN (10u)

/** \brief Mask for Ifx_GTM_DPLL_PDT_Bits.DW */
#define IFX_GTM_DPLL_PDT_DW_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_DPLL_PDT_Bits.DW */
#define IFX_GTM_DPLL_PDT_DW_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_MLS1_Bits.MLS1 */
#define IFX_GTM_DPLL_MLS1_MLS1_LEN (18u)

/** \brief Mask for Ifx_GTM_DPLL_MLS1_Bits.MLS1 */
#define IFX_GTM_DPLL_MLS1_MLS1_MSK (0x3ffffu)

/** \brief Offset for Ifx_GTM_DPLL_MLS1_Bits.MLS1 */
#define IFX_GTM_DPLL_MLS1_MLS1_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_MLS2_Bits.MLS2 */
#define IFX_GTM_DPLL_MLS2_MLS2_LEN (18u)

/** \brief Mask for Ifx_GTM_DPLL_MLS2_Bits.MLS2 */
#define IFX_GTM_DPLL_MLS2_MLS2_MSK (0x3ffffu)

/** \brief Offset for Ifx_GTM_DPLL_MLS2_Bits.MLS2 */
#define IFX_GTM_DPLL_MLS2_MLS2_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CNT_NUM_1_Bits.CNT_NUM_1 */
#define IFX_GTM_DPLL_CNT_NUM_1_CNT_NUM_1_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CNT_NUM_1_Bits.CNT_NUM_1 */
#define IFX_GTM_DPLL_CNT_NUM_1_CNT_NUM_1_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CNT_NUM_1_Bits.CNT_NUM_1 */
#define IFX_GTM_DPLL_CNT_NUM_1_CNT_NUM_1_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CNT_NUM_2_Bits.CNT_NUM_2 */
#define IFX_GTM_DPLL_CNT_NUM_2_CNT_NUM_2_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CNT_NUM_2_Bits.CNT_NUM_2 */
#define IFX_GTM_DPLL_CNT_NUM_2_CNT_NUM_2_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CNT_NUM_2_Bits.CNT_NUM_2 */
#define IFX_GTM_DPLL_CNT_NUM_2_CNT_NUM_2_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PVT_Bits.PVT */
#define IFX_GTM_DPLL_PVT_PVT_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PVT_Bits.PVT */
#define IFX_GTM_DPLL_PVT_PVT_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PVT_Bits.PVT */
#define IFX_GTM_DPLL_PVT_PVT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PSTC_Bits.PSTC */
#define IFX_GTM_DPLL_PSTC_PSTC_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSTC_Bits.PSTC */
#define IFX_GTM_DPLL_PSTC_PSTC_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSTC_Bits.PSTC */
#define IFX_GTM_DPLL_PSTC_PSTC_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PSSC_Bits.PSSC */
#define IFX_GTM_DPLL_PSSC_PSSC_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSSC_Bits.PSSC */
#define IFX_GTM_DPLL_PSSC_PSSC_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSSC_Bits.PSSC */
#define IFX_GTM_DPLL_PSSC_PSSC_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PSTM_Bits.PSTM */
#define IFX_GTM_DPLL_PSTM_PSTM_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSTM_Bits.PSTM */
#define IFX_GTM_DPLL_PSTM_PSTM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSTM_Bits.PSTM */
#define IFX_GTM_DPLL_PSTM_PSTM_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PSTM_OLD_Bits.PSTM_OLD */
#define IFX_GTM_DPLL_PSTM_OLD_PSTM_OLD_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSTM_OLD_Bits.PSTM_OLD */
#define IFX_GTM_DPLL_PSTM_OLD_PSTM_OLD_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSTM_OLD_Bits.PSTM_OLD */
#define IFX_GTM_DPLL_PSTM_OLD_PSTM_OLD_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PSSM_Bits.PSSM */
#define IFX_GTM_DPLL_PSSM_PSSM_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSSM_Bits.PSSM */
#define IFX_GTM_DPLL_PSSM_PSSM_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSSM_Bits.PSSM */
#define IFX_GTM_DPLL_PSSM_PSSM_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PSSM_OLD_Bits.PSSM_OLD */
#define IFX_GTM_DPLL_PSSM_OLD_PSSM_OLD_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSSM_OLD_Bits.PSSM_OLD */
#define IFX_GTM_DPLL_PSSM_OLD_PSSM_OLD_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSSM_OLD_Bits.PSSM_OLD */
#define IFX_GTM_DPLL_PSSM_OLD_PSSM_OLD_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NMB_T_Bits.NMB_T */
#define IFX_GTM_DPLL_NMB_T_NMB_T_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_NMB_T_Bits.NMB_T */
#define IFX_GTM_DPLL_NMB_T_NMB_T_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_NMB_T_Bits.NMB_T */
#define IFX_GTM_DPLL_NMB_T_NMB_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NMB_S_Bits.NMB_S */
#define IFX_GTM_DPLL_NMB_S_NMB_S_LEN (20u)

/** \brief Mask for Ifx_GTM_DPLL_NMB_S_Bits.NMB_S */
#define IFX_GTM_DPLL_NMB_S_NMB_S_MSK (0xfffffu)

/** \brief Offset for Ifx_GTM_DPLL_NMB_S_Bits.NMB_S */
#define IFX_GTM_DPLL_NMB_S_NMB_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RDT_S_Bits.RDT_S */
#define IFX_GTM_DPLL_RDT_S_RDT_S_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RDT_S_Bits.RDT_S */
#define IFX_GTM_DPLL_RDT_S_RDT_S_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RDT_S_Bits.RDT_S */
#define IFX_GTM_DPLL_RDT_S_RDT_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TSF_S_Bits.TSF_S */
#define IFX_GTM_DPLL_TSF_S_TSF_S_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TSF_S_Bits.TSF_S */
#define IFX_GTM_DPLL_TSF_S_TSF_S_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TSF_S_Bits.TSF_S */
#define IFX_GTM_DPLL_TSF_S_TSF_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ADT_S_Bits.PD_S */
#define IFX_GTM_DPLL_ADT_S_PD_S_LEN (16u)

/** \brief Mask for Ifx_GTM_DPLL_ADT_S_Bits.PD_S */
#define IFX_GTM_DPLL_ADT_S_PD_S_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_DPLL_ADT_S_Bits.PD_S */
#define IFX_GTM_DPLL_ADT_S_PD_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ADT_S_Bits.NS */
#define IFX_GTM_DPLL_ADT_S_NS_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_ADT_S_Bits.NS */
#define IFX_GTM_DPLL_ADT_S_NS_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_ADT_S_Bits.NS */
#define IFX_GTM_DPLL_ADT_S_NS_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_DT_S_Bits.DT_S */
#define IFX_GTM_DPLL_DT_S_DT_S_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DT_S_Bits.DT_S */
#define IFX_GTM_DPLL_DT_S_DT_S_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DT_S_Bits.DT_S */
#define IFX_GTM_DPLL_DT_S_DT_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TSAC_Bits.TSAC */
#define IFX_GTM_DPLL_TSAC_TSAC_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TSAC_Bits.TSAC */
#define IFX_GTM_DPLL_TSAC_TSAC_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TSAC_Bits.TSAC */
#define IFX_GTM_DPLL_TSAC_TSAC_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_PSAC_Bits.PSAC */
#define IFX_GTM_DPLL_PSAC_PSAC_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_PSAC_Bits.PSAC */
#define IFX_GTM_DPLL_PSAC_PSAC_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_PSAC_Bits.PSAC */
#define IFX_GTM_DPLL_PSAC_PSAC_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ACB_Bits.ACB_0 */
#define IFX_GTM_DPLL_ACB_ACB_0_LEN (5u)

/** \brief Mask for Ifx_GTM_DPLL_ACB_Bits.ACB_0 */
#define IFX_GTM_DPLL_ACB_ACB_0_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_DPLL_ACB_Bits.ACB_0 */
#define IFX_GTM_DPLL_ACB_ACB_0_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ACB_Bits.ACB_1 */
#define IFX_GTM_DPLL_ACB_ACB_1_LEN (5u)

/** \brief Mask for Ifx_GTM_DPLL_ACB_Bits.ACB_1 */
#define IFX_GTM_DPLL_ACB_ACB_1_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_DPLL_ACB_Bits.ACB_1 */
#define IFX_GTM_DPLL_ACB_ACB_1_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_ACB_Bits.ACB_2 */
#define IFX_GTM_DPLL_ACB_ACB_2_LEN (5u)

/** \brief Mask for Ifx_GTM_DPLL_ACB_Bits.ACB_2 */
#define IFX_GTM_DPLL_ACB_ACB_2_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_DPLL_ACB_Bits.ACB_2 */
#define IFX_GTM_DPLL_ACB_ACB_2_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_ACB_Bits.ACB_3 */
#define IFX_GTM_DPLL_ACB_ACB_3_LEN (5u)

/** \brief Mask for Ifx_GTM_DPLL_ACB_Bits.ACB_3 */
#define IFX_GTM_DPLL_ACB_ACB_3_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_DPLL_ACB_Bits.ACB_3 */
#define IFX_GTM_DPLL_ACB_ACB_3_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.SIP1 */
#define IFX_GTM_DPLL_CTRL_11_SIP1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.SIP1 */
#define IFX_GTM_DPLL_CTRL_11_SIP1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.SIP1 */
#define IFX_GTM_DPLL_CTRL_11_SIP1_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.ERZ1 */
#define IFX_GTM_DPLL_CTRL_11_ERZ1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.ERZ1 */
#define IFX_GTM_DPLL_CTRL_11_ERZ1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.ERZ1 */
#define IFX_GTM_DPLL_CTRL_11_ERZ1_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF1 */
#define IFX_GTM_DPLL_CTRL_11_PCMF1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF1 */
#define IFX_GTM_DPLL_CTRL_11_PCMF1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF1 */
#define IFX_GTM_DPLL_CTRL_11_PCMF1_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.FSYL1 */
#define IFX_GTM_DPLL_CTRL_11_FSYL1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.FSYL1 */
#define IFX_GTM_DPLL_CTRL_11_FSYL1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.FSYL1 */
#define IFX_GTM_DPLL_CTRL_11_FSYL1_OFF (3u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.INCF1 */
#define IFX_GTM_DPLL_CTRL_11_INCF1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.INCF1 */
#define IFX_GTM_DPLL_CTRL_11_INCF1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.INCF1 */
#define IFX_GTM_DPLL_CTRL_11_INCF1_OFF (4u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF1_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_PCMF1_INCCNT_B_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF1_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_PCMF1_INCCNT_B_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF1_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_PCMF1_INCCNT_B_OFF (5u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.ADT */
#define IFX_GTM_DPLL_CTRL_11_ADT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.ADT */
#define IFX_GTM_DPLL_CTRL_11_ADT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.ADT */
#define IFX_GTM_DPLL_CTRL_11_ADT_OFF (6u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.ADS */
#define IFX_GTM_DPLL_CTRL_11_ADS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.ADS */
#define IFX_GTM_DPLL_CTRL_11_ADS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.ADS */
#define IFX_GTM_DPLL_CTRL_11_ADS_OFF (7u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.SIP2 */
#define IFX_GTM_DPLL_CTRL_11_SIP2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.SIP2 */
#define IFX_GTM_DPLL_CTRL_11_SIP2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.SIP2 */
#define IFX_GTM_DPLL_CTRL_11_SIP2_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.ERZ2 */
#define IFX_GTM_DPLL_CTRL_11_ERZ2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.ERZ2 */
#define IFX_GTM_DPLL_CTRL_11_ERZ2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.ERZ2 */
#define IFX_GTM_DPLL_CTRL_11_ERZ2_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF2 */
#define IFX_GTM_DPLL_CTRL_11_PCMF2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF2 */
#define IFX_GTM_DPLL_CTRL_11_PCMF2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF2 */
#define IFX_GTM_DPLL_CTRL_11_PCMF2_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.FSYL2 */
#define IFX_GTM_DPLL_CTRL_11_FSYL2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.FSYL2 */
#define IFX_GTM_DPLL_CTRL_11_FSYL2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.FSYL2 */
#define IFX_GTM_DPLL_CTRL_11_FSYL2_OFF (11u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.INCF2 */
#define IFX_GTM_DPLL_CTRL_11_INCF2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.INCF2 */
#define IFX_GTM_DPLL_CTRL_11_INCF2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.INCF2 */
#define IFX_GTM_DPLL_CTRL_11_INCF2_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF2_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_PCMF2_INCCNT_B_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF2_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_PCMF2_INCCNT_B_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.PCMF2_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_PCMF2_INCCNT_B_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.STATE_EXT */
#define IFX_GTM_DPLL_CTRL_11_STATE_EXT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.STATE_EXT */
#define IFX_GTM_DPLL_CTRL_11_STATE_EXT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.STATE_EXT */
#define IFX_GTM_DPLL_CTRL_11_STATE_EXT_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.ACBU */
#define IFX_GTM_DPLL_CTRL_11_ACBU_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.ACBU */
#define IFX_GTM_DPLL_CTRL_11_ACBU_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.ACBU */
#define IFX_GTM_DPLL_CTRL_11_ACBU_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WSIP1 */
#define IFX_GTM_DPLL_CTRL_11_WSIP1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WSIP1 */
#define IFX_GTM_DPLL_CTRL_11_WSIP1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WSIP1 */
#define IFX_GTM_DPLL_CTRL_11_WSIP1_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WERZ1 */
#define IFX_GTM_DPLL_CTRL_11_WERZ1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WERZ1 */
#define IFX_GTM_DPLL_CTRL_11_WERZ1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WERZ1 */
#define IFX_GTM_DPLL_CTRL_11_WERZ1_OFF (17u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF1 */
#define IFX_GTM_DPLL_CTRL_11_WPCMF1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF1 */
#define IFX_GTM_DPLL_CTRL_11_WPCMF1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF1 */
#define IFX_GTM_DPLL_CTRL_11_WPCMF1_OFF (18u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WFSYL1 */
#define IFX_GTM_DPLL_CTRL_11_WFSYL1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WFSYL1 */
#define IFX_GTM_DPLL_CTRL_11_WFSYL1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WFSYL1 */
#define IFX_GTM_DPLL_CTRL_11_WFSYL1_OFF (19u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WINCF1 */
#define IFX_GTM_DPLL_CTRL_11_WINCF1_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WINCF1 */
#define IFX_GTM_DPLL_CTRL_11_WINCF1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WINCF1 */
#define IFX_GTM_DPLL_CTRL_11_WINCF1_OFF (20u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF1_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_WPCMF1_INCCNT_B_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF1_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_WPCMF1_INCCNT_B_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF1_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_WPCMF1_INCCNT_B_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WADT */
#define IFX_GTM_DPLL_CTRL_11_WADT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WADT */
#define IFX_GTM_DPLL_CTRL_11_WADT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WADT */
#define IFX_GTM_DPLL_CTRL_11_WADT_OFF (22u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WADS */
#define IFX_GTM_DPLL_CTRL_11_WADS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WADS */
#define IFX_GTM_DPLL_CTRL_11_WADS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WADS */
#define IFX_GTM_DPLL_CTRL_11_WADS_OFF (23u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WSIP2 */
#define IFX_GTM_DPLL_CTRL_11_WSIP2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WSIP2 */
#define IFX_GTM_DPLL_CTRL_11_WSIP2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WSIP2 */
#define IFX_GTM_DPLL_CTRL_11_WSIP2_OFF (24u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WERZ2 */
#define IFX_GTM_DPLL_CTRL_11_WERZ2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WERZ2 */
#define IFX_GTM_DPLL_CTRL_11_WERZ2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WERZ2 */
#define IFX_GTM_DPLL_CTRL_11_WERZ2_OFF (25u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF2 */
#define IFX_GTM_DPLL_CTRL_11_WPCMF2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF2 */
#define IFX_GTM_DPLL_CTRL_11_WPCMF2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF2 */
#define IFX_GTM_DPLL_CTRL_11_WPCMF2_OFF (26u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WFSYL2 */
#define IFX_GTM_DPLL_CTRL_11_WFSYL2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WFSYL2 */
#define IFX_GTM_DPLL_CTRL_11_WFSYL2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WFSYL2 */
#define IFX_GTM_DPLL_CTRL_11_WFSYL2_OFF (27u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WINCF2 */
#define IFX_GTM_DPLL_CTRL_11_WINCF2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WINCF2 */
#define IFX_GTM_DPLL_CTRL_11_WINCF2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WINCF2 */
#define IFX_GTM_DPLL_CTRL_11_WINCF2_OFF (28u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF2_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_WPCMF2_INCCNT_B_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF2_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_WPCMF2_INCCNT_B_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WPCMF2_INCCNT_B */
#define IFX_GTM_DPLL_CTRL_11_WPCMF2_INCCNT_B_OFF (29u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WSTATE_EXT */
#define IFX_GTM_DPLL_CTRL_11_WSTATE_EXT_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WSTATE_EXT */
#define IFX_GTM_DPLL_CTRL_11_WSTATE_EXT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WSTATE_EXT */
#define IFX_GTM_DPLL_CTRL_11_WSTATE_EXT_OFF (30u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_11_Bits.WACBU */
#define IFX_GTM_DPLL_CTRL_11_WACBU_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_11_Bits.WACBU */
#define IFX_GTM_DPLL_CTRL_11_WACBU_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_11_Bits.WACBU */
#define IFX_GTM_DPLL_CTRL_11_WACBU_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_THVAL2_Bits.THVAL */
#define IFX_GTM_DPLL_THVAL2_THVAL_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_THVAL2_Bits.THVAL */
#define IFX_GTM_DPLL_THVAL2_THVAL_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_THVAL2_Bits.THVAL */
#define IFX_GTM_DPLL_THVAL2_THVAL_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TIDEL_Bits.TIDEL */
#define IFX_GTM_DPLL_TIDEL_TIDEL_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TIDEL_Bits.TIDEL */
#define IFX_GTM_DPLL_TIDEL_TIDEL_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TIDEL_Bits.TIDEL */
#define IFX_GTM_DPLL_TIDEL_TIDEL_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_SIDEL_Bits.SIDEL */
#define IFX_GTM_DPLL_SIDEL_SIDEL_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_SIDEL_Bits.SIDEL */
#define IFX_GTM_DPLL_SIDEL_SIDEL_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_SIDEL_Bits.SIDEL */
#define IFX_GTM_DPLL_SIDEL_SIDEL_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_EXT */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_EXT_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_EXT */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_EXT_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_EXT */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_EXT_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_STATUS */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_STATUS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_STATUS */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_STATUS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_STATUS */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_STATUS_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_OLD */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_OLD_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_OLD */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_OLD_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_SYNC_EXT_Bits.APS_1C2_OLD */
#define IFX_GTM_DPLL_APS_SYNC_EXT_APS_1C2_OLD_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_EXT_Bits.SNU */
#define IFX_GTM_DPLL_CTRL_EXT_SNU_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_EXT_Bits.SNU */
#define IFX_GTM_DPLL_CTRL_EXT_SNU_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_EXT_Bits.SNU */
#define IFX_GTM_DPLL_CTRL_EXT_SNU_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTRL_EXT_Bits.SYN_NS */
#define IFX_GTM_DPLL_CTRL_EXT_SYN_NS_LEN (6u)

/** \brief Mask for Ifx_GTM_DPLL_CTRL_EXT_Bits.SYN_NS */
#define IFX_GTM_DPLL_CTRL_EXT_SYN_NS_MSK (0x3fu)

/** \brief Offset for Ifx_GTM_DPLL_CTRL_EXT_Bits.SYN_NS */
#define IFX_GTM_DPLL_CTRL_EXT_SYN_NS_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_APS_EXT_Bits.WAPS */
#define IFX_GTM_DPLL_APS_EXT_WAPS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APS_EXT_Bits.WAPS */
#define IFX_GTM_DPLL_APS_EXT_WAPS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APS_EXT_Bits.WAPS */
#define IFX_GTM_DPLL_APS_EXT_WAPS_OFF (1u)

/** \brief Length for Ifx_GTM_DPLL_APS_EXT_Bits.APS */
#define IFX_GTM_DPLL_APS_EXT_APS_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_APS_EXT_Bits.APS */
#define IFX_GTM_DPLL_APS_EXT_APS_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_EXT_Bits.APS */
#define IFX_GTM_DPLL_APS_EXT_APS_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_APS_EXT_Bits.WAPS_1C2 */
#define IFX_GTM_DPLL_APS_EXT_WAPS_1C2_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_APS_EXT_Bits.WAPS_1C2 */
#define IFX_GTM_DPLL_APS_EXT_WAPS_1C2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_APS_EXT_Bits.WAPS_1C2 */
#define IFX_GTM_DPLL_APS_EXT_WAPS_1C2_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_APS_EXT_Bits.APS_1C2 */
#define IFX_GTM_DPLL_APS_EXT_APS_1C2_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_APS_EXT_Bits.APS_1C2 */
#define IFX_GTM_DPLL_APS_EXT_APS_1C2_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_EXT_Bits.APS_1C2 */
#define IFX_GTM_DPLL_APS_EXT_APS_1C2_OFF (14u)

/** \brief Length for Ifx_GTM_DPLL_APS_1C3_EXT_Bits.APS_1C3 */
#define IFX_GTM_DPLL_APS_1C3_EXT_APS_1C3_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_APS_1C3_EXT_Bits.APS_1C3 */
#define IFX_GTM_DPLL_APS_1C3_EXT_APS_1C3_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_APS_1C3_EXT_Bits.APS_1C3 */
#define IFX_GTM_DPLL_APS_1C3_EXT_APS_1C3_OFF (2u)

/** \brief Length for Ifx_GTM_DPLL_STA_Bits.STA_T */
#define IFX_GTM_DPLL_STA_STA_T_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_STA_Bits.STA_T */
#define IFX_GTM_DPLL_STA_STA_T_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_STA_Bits.STA_T */
#define IFX_GTM_DPLL_STA_STA_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_STA_Bits.CNT_T */
#define IFX_GTM_DPLL_STA_CNT_T_LEN (3u)

/** \brief Mask for Ifx_GTM_DPLL_STA_Bits.CNT_T */
#define IFX_GTM_DPLL_STA_CNT_T_MSK (0x7u)

/** \brief Offset for Ifx_GTM_DPLL_STA_Bits.CNT_T */
#define IFX_GTM_DPLL_STA_CNT_T_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_STA_Bits.STA_S */
#define IFX_GTM_DPLL_STA_STA_S_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_STA_Bits.STA_S */
#define IFX_GTM_DPLL_STA_STA_S_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_STA_Bits.STA_S */
#define IFX_GTM_DPLL_STA_STA_S_OFF (12u)

/** \brief Length for Ifx_GTM_DPLL_STA_Bits.CNT_S */
#define IFX_GTM_DPLL_STA_CNT_S_LEN (3u)

/** \brief Mask for Ifx_GTM_DPLL_STA_Bits.CNT_S */
#define IFX_GTM_DPLL_STA_CNT_S_MSK (0x7u)

/** \brief Offset for Ifx_GTM_DPLL_STA_Bits.CNT_S */
#define IFX_GTM_DPLL_STA_CNT_S_OFF (21u)

/** \brief Length for Ifx_GTM_DPLL_INCF1_OFFSET_Bits.DPLL_INCF1_OFFSET */
#define IFX_GTM_DPLL_INCF1_OFFSET_DPLL_INCF1_OFFSET_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_INCF1_OFFSET_Bits.DPLL_INCF1_OFFSET */
#define IFX_GTM_DPLL_INCF1_OFFSET_DPLL_INCF1_OFFSET_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_INCF1_OFFSET_Bits.DPLL_INCF1_OFFSET */
#define IFX_GTM_DPLL_INCF1_OFFSET_DPLL_INCF1_OFFSET_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_INCF2_OFFSET_Bits.DPLL_INCF2_OFFSET */
#define IFX_GTM_DPLL_INCF2_OFFSET_DPLL_INCF2_OFFSET_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_INCF2_OFFSET_Bits.DPLL_INCF2_OFFSET */
#define IFX_GTM_DPLL_INCF2_OFFSET_DPLL_INCF2_OFFSET_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_INCF2_OFFSET_Bits.DPLL_INCF2_OFFSET */
#define IFX_GTM_DPLL_INCF2_OFFSET_DPLL_INCF2_OFFSET_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_DT_T_START_Bits.DPLL_DT_T_START */
#define IFX_GTM_DPLL_DT_T_START_DPLL_DT_T_START_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DT_T_START_Bits.DPLL_DT_T_START */
#define IFX_GTM_DPLL_DT_T_START_DPLL_DT_T_START_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DT_T_START_Bits.DPLL_DT_T_START */
#define IFX_GTM_DPLL_DT_T_START_DPLL_DT_T_START_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_DT_S_START_Bits.DPLL_DT_S_START */
#define IFX_GTM_DPLL_DT_S_START_DPLL_DT_S_START_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DT_S_START_Bits.DPLL_DT_S_START */
#define IFX_GTM_DPLL_DT_S_START_DPLL_DT_S_START_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DT_S_START_Bits.DPLL_DT_S_START */
#define IFX_GTM_DPLL_DT_S_START_DPLL_DT_S_START_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_STA_MASK_Bits.STA_NOTIFY_T */
#define IFX_GTM_DPLL_STA_MASK_STA_NOTIFY_T_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_STA_MASK_Bits.STA_NOTIFY_T */
#define IFX_GTM_DPLL_STA_MASK_STA_NOTIFY_T_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_STA_MASK_Bits.STA_NOTIFY_T */
#define IFX_GTM_DPLL_STA_MASK_STA_NOTIFY_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_STA_MASK_Bits.STA_NOTIFY_S */
#define IFX_GTM_DPLL_STA_MASK_STA_NOTIFY_S_LEN (8u)

/** \brief Mask for Ifx_GTM_DPLL_STA_MASK_Bits.STA_NOTIFY_S */
#define IFX_GTM_DPLL_STA_MASK_STA_NOTIFY_S_MSK (0xffu)

/** \brief Offset for Ifx_GTM_DPLL_STA_MASK_Bits.STA_NOTIFY_S */
#define IFX_GTM_DPLL_STA_MASK_STA_NOTIFY_S_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_STA_FLAG_Bits.STA_FLAG_T */
#define IFX_GTM_DPLL_STA_FLAG_STA_FLAG_T_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STA_FLAG_Bits.STA_FLAG_T */
#define IFX_GTM_DPLL_STA_FLAG_STA_FLAG_T_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STA_FLAG_Bits.STA_FLAG_T */
#define IFX_GTM_DPLL_STA_FLAG_STA_FLAG_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_STA_FLAG_Bits.STA_FLAG_S */
#define IFX_GTM_DPLL_STA_FLAG_STA_FLAG_S_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STA_FLAG_Bits.STA_FLAG_S */
#define IFX_GTM_DPLL_STA_FLAG_STA_FLAG_S_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STA_FLAG_Bits.STA_FLAG_S */
#define IFX_GTM_DPLL_STA_FLAG_STA_FLAG_S_OFF (8u)

/** \brief Length for Ifx_GTM_DPLL_STA_FLAG_Bits.INC_CNT1_FLAG */
#define IFX_GTM_DPLL_STA_FLAG_INC_CNT1_FLAG_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STA_FLAG_Bits.INC_CNT1_FLAG */
#define IFX_GTM_DPLL_STA_FLAG_INC_CNT1_FLAG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STA_FLAG_Bits.INC_CNT1_FLAG */
#define IFX_GTM_DPLL_STA_FLAG_INC_CNT1_FLAG_OFF (9u)

/** \brief Length for Ifx_GTM_DPLL_STA_FLAG_Bits.INC_CNT2_FLAG */
#define IFX_GTM_DPLL_STA_FLAG_INC_CNT2_FLAG_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_STA_FLAG_Bits.INC_CNT2_FLAG */
#define IFX_GTM_DPLL_STA_FLAG_INC_CNT2_FLAG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_STA_FLAG_Bits.INC_CNT2_FLAG */
#define IFX_GTM_DPLL_STA_FLAG_INC_CNT2_FLAG_OFF (10u)

/** \brief Length for Ifx_GTM_DPLL_INC_CNT1_MASK_Bits.INC_CNT1_NOTIFY */
#define IFX_GTM_DPLL_INC_CNT1_MASK_INC_CNT1_NOTIFY_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_INC_CNT1_MASK_Bits.INC_CNT1_NOTIFY */
#define IFX_GTM_DPLL_INC_CNT1_MASK_INC_CNT1_NOTIFY_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_INC_CNT1_MASK_Bits.INC_CNT1_NOTIFY */
#define IFX_GTM_DPLL_INC_CNT1_MASK_INC_CNT1_NOTIFY_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_INC_CNT2_MASK_Bits.INC_CNT2_NOTIFY */
#define IFX_GTM_DPLL_INC_CNT2_MASK_INC_CNT2_NOTIFY_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_INC_CNT2_MASK_Bits.INC_CNT2_NOTIFY */
#define IFX_GTM_DPLL_INC_CNT2_MASK_INC_CNT2_NOTIFY_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_INC_CNT2_MASK_Bits.INC_CNT2_NOTIFY */
#define IFX_GTM_DPLL_INC_CNT2_MASK_INC_CNT2_NOTIFY_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT1_Bits.SYN_S */
#define IFX_GTM_DPLL_NUSC_EXT1_SYN_S_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT1_Bits.SYN_S */
#define IFX_GTM_DPLL_NUSC_EXT1_SYN_S_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT1_Bits.SYN_S */
#define IFX_GTM_DPLL_NUSC_EXT1_SYN_S_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT1_Bits.SYN_S_OLD */
#define IFX_GTM_DPLL_NUSC_EXT1_SYN_S_OLD_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT1_Bits.SYN_S_OLD */
#define IFX_GTM_DPLL_NUSC_EXT1_SYN_S_OLD_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT1_Bits.SYN_S_OLD */
#define IFX_GTM_DPLL_NUSC_EXT1_SYN_S_OLD_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT1_Bits.WSYN */
#define IFX_GTM_DPLL_NUSC_EXT1_WSYN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT1_Bits.WSYN */
#define IFX_GTM_DPLL_NUSC_EXT1_WSYN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT1_Bits.WSYN */
#define IFX_GTM_DPLL_NUSC_EXT1_WSYN_OFF (30u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT2_Bits.NUSE */
#define IFX_GTM_DPLL_NUSC_EXT2_NUSE_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT2_Bits.NUSE */
#define IFX_GTM_DPLL_NUSC_EXT2_NUSE_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT2_Bits.NUSE */
#define IFX_GTM_DPLL_NUSC_EXT2_NUSE_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT2_Bits.FSS */
#define IFX_GTM_DPLL_NUSC_EXT2_FSS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT2_Bits.FSS */
#define IFX_GTM_DPLL_NUSC_EXT2_FSS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT2_Bits.FSS */
#define IFX_GTM_DPLL_NUSC_EXT2_FSS_OFF (15u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT2_Bits.VSN */
#define IFX_GTM_DPLL_NUSC_EXT2_VSN_LEN (7u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT2_Bits.VSN */
#define IFX_GTM_DPLL_NUSC_EXT2_VSN_MSK (0x7fu)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT2_Bits.VSN */
#define IFX_GTM_DPLL_NUSC_EXT2_VSN_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT2_Bits.WNUS */
#define IFX_GTM_DPLL_NUSC_EXT2_WNUS_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT2_Bits.WNUS */
#define IFX_GTM_DPLL_NUSC_EXT2_WNUS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT2_Bits.WNUS */
#define IFX_GTM_DPLL_NUSC_EXT2_WNUS_OFF (29u)

/** \brief Length for Ifx_GTM_DPLL_NUSC_EXT2_Bits.WVSN */
#define IFX_GTM_DPLL_NUSC_EXT2_WVSN_LEN (1u)

/** \brief Mask for Ifx_GTM_DPLL_NUSC_EXT2_Bits.WVSN */
#define IFX_GTM_DPLL_NUSC_EXT2_WVSN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DPLL_NUSC_EXT2_Bits.WVSN */
#define IFX_GTM_DPLL_NUSC_EXT2_WVSN_OFF (31u)

/** \brief Length for Ifx_GTM_DPLL_CTN_MIN_Bits.CTN_MIN */
#define IFX_GTM_DPLL_CTN_MIN_CTN_MIN_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CTN_MIN_Bits.CTN_MIN */
#define IFX_GTM_DPLL_CTN_MIN_CTN_MIN_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CTN_MIN_Bits.CTN_MIN */
#define IFX_GTM_DPLL_CTN_MIN_CTN_MIN_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CTN_MAX_Bits.CTN_MAX */
#define IFX_GTM_DPLL_CTN_MAX_CTN_MAX_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CTN_MAX_Bits.CTN_MAX */
#define IFX_GTM_DPLL_CTN_MAX_CTN_MAX_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CTN_MAX_Bits.CTN_MAX */
#define IFX_GTM_DPLL_CTN_MAX_CTN_MAX_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CSN_MIN_Bits.CSN_MIN */
#define IFX_GTM_DPLL_CSN_MIN_CSN_MIN_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CSN_MIN_Bits.CSN_MIN */
#define IFX_GTM_DPLL_CSN_MIN_CSN_MIN_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CSN_MIN_Bits.CSN_MIN */
#define IFX_GTM_DPLL_CSN_MIN_CSN_MIN_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_CSN_MAX_Bits.CSN_MAX */
#define IFX_GTM_DPLL_CSN_MAX_CSN_MAX_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_CSN_MAX_Bits.CSN_MAX */
#define IFX_GTM_DPLL_CSN_MAX_CSN_MAX_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_CSN_MAX_Bits.CSN_MAX */
#define IFX_GTM_DPLL_CSN_MAX_CSN_MAX_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_RDT_TI_Bits.RDT_T */
#define IFX_GTM_DPLL_RDT_TI_RDT_T_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_RDT_TI_Bits.RDT_T */
#define IFX_GTM_DPLL_RDT_TI_RDT_T_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_RDT_TI_Bits.RDT_T */
#define IFX_GTM_DPLL_RDT_TI_RDT_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_TSF_TI_Bits.TSF_T */
#define IFX_GTM_DPLL_TSF_TI_TSF_T_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_TSF_TI_Bits.TSF_T */
#define IFX_GTM_DPLL_TSF_TI_TSF_T_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_TSF_TI_Bits.TSF_T */
#define IFX_GTM_DPLL_TSF_TI_TSF_T_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ADT_TI_Bits.PD */
#define IFX_GTM_DPLL_ADT_TI_PD_LEN (13u)

/** \brief Mask for Ifx_GTM_DPLL_ADT_TI_Bits.PD */
#define IFX_GTM_DPLL_ADT_TI_PD_MSK (0x1fffu)

/** \brief Offset for Ifx_GTM_DPLL_ADT_TI_Bits.PD */
#define IFX_GTM_DPLL_ADT_TI_PD_OFF (0u)

/** \brief Length for Ifx_GTM_DPLL_ADT_TI_Bits.TINT */
#define IFX_GTM_DPLL_ADT_TI_TINT_LEN (3u)

/** \brief Mask for Ifx_GTM_DPLL_ADT_TI_Bits.TINT */
#define IFX_GTM_DPLL_ADT_TI_TINT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_DPLL_ADT_TI_Bits.TINT */
#define IFX_GTM_DPLL_ADT_TI_TINT_OFF (13u)

/** \brief Length for Ifx_GTM_DPLL_ADT_TI_Bits.NT */
#define IFX_GTM_DPLL_ADT_TI_NT_LEN (3u)

/** \brief Mask for Ifx_GTM_DPLL_ADT_TI_Bits.NT */
#define IFX_GTM_DPLL_ADT_TI_NT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_DPLL_ADT_TI_Bits.NT */
#define IFX_GTM_DPLL_ADT_TI_NT_OFF (16u)

/** \brief Length for Ifx_GTM_DPLL_DT_TI_Bits.DT_T */
#define IFX_GTM_DPLL_DT_TI_DT_T_LEN (24u)

/** \brief Mask for Ifx_GTM_DPLL_DT_TI_Bits.DT_T */
#define IFX_GTM_DPLL_DT_TI_DT_T_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_DPLL_DT_TI_Bits.DT_T */
#define IFX_GTM_DPLL_DT_TI_DT_T_OFF (0u)

/** \brief Length for Ifx_GTM_CLC_Bits.DISR */
#define IFX_GTM_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_GTM_CLC_Bits.DISR */
#define IFX_GTM_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CLC_Bits.DISR */
#define IFX_GTM_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_GTM_CLC_Bits.DISS */
#define IFX_GTM_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_GTM_CLC_Bits.DISS */
#define IFX_GTM_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CLC_Bits.DISS */
#define IFX_GTM_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_GTM_CLC_Bits.EDIS */
#define IFX_GTM_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_GTM_CLC_Bits.EDIS */
#define IFX_GTM_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CLC_Bits.EDIS */
#define IFX_GTM_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_GTM_RESET_CLR_Bits.CLR */
#define IFX_GTM_RESET_CLR_CLR_LEN (1u)

/** \brief Mask for Ifx_GTM_RESET_CLR_Bits.CLR */
#define IFX_GTM_RESET_CLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_RESET_CLR_Bits.CLR */
#define IFX_GTM_RESET_CLR_CLR_OFF (0u)

/** \brief Length for Ifx_GTM_RESET1_Bits.RST */
#define IFX_GTM_RESET1_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_RESET1_Bits.RST */
#define IFX_GTM_RESET1_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_RESET1_Bits.RST */
#define IFX_GTM_RESET1_RST_OFF (0u)

/** \brief Length for Ifx_GTM_RESET1_Bits.RSTSTAT */
#define IFX_GTM_RESET1_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_GTM_RESET1_Bits.RSTSTAT */
#define IFX_GTM_RESET1_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_RESET1_Bits.RSTSTAT */
#define IFX_GTM_RESET1_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_GTM_RESET2_Bits.RST */
#define IFX_GTM_RESET2_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_RESET2_Bits.RST */
#define IFX_GTM_RESET2_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_RESET2_Bits.RST */
#define IFX_GTM_RESET2_RST_OFF (0u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN0 */
#define IFX_GTM_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN0 */
#define IFX_GTM_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN0 */
#define IFX_GTM_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN1 */
#define IFX_GTM_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN1 */
#define IFX_GTM_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN1 */
#define IFX_GTM_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN2 */
#define IFX_GTM_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN2 */
#define IFX_GTM_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN2 */
#define IFX_GTM_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN3 */
#define IFX_GTM_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN3 */
#define IFX_GTM_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN3 */
#define IFX_GTM_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN4 */
#define IFX_GTM_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN4 */
#define IFX_GTM_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN4 */
#define IFX_GTM_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN5 */
#define IFX_GTM_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN5 */
#define IFX_GTM_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN5 */
#define IFX_GTM_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN6 */
#define IFX_GTM_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN6 */
#define IFX_GTM_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN6 */
#define IFX_GTM_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN7 */
#define IFX_GTM_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN7 */
#define IFX_GTM_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN7 */
#define IFX_GTM_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN8 */
#define IFX_GTM_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN8 */
#define IFX_GTM_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN8 */
#define IFX_GTM_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN9 */
#define IFX_GTM_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN9 */
#define IFX_GTM_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN9 */
#define IFX_GTM_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN10 */
#define IFX_GTM_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN10 */
#define IFX_GTM_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN10 */
#define IFX_GTM_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN11 */
#define IFX_GTM_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN11 */
#define IFX_GTM_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN11 */
#define IFX_GTM_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN12 */
#define IFX_GTM_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN12 */
#define IFX_GTM_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN12 */
#define IFX_GTM_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN13 */
#define IFX_GTM_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN13 */
#define IFX_GTM_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN13 */
#define IFX_GTM_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN14 */
#define IFX_GTM_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN14 */
#define IFX_GTM_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN14 */
#define IFX_GTM_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN15 */
#define IFX_GTM_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN15 */
#define IFX_GTM_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN15 */
#define IFX_GTM_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN16 */
#define IFX_GTM_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN16 */
#define IFX_GTM_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN16 */
#define IFX_GTM_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN17 */
#define IFX_GTM_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN17 */
#define IFX_GTM_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN17 */
#define IFX_GTM_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN18 */
#define IFX_GTM_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN18 */
#define IFX_GTM_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN18 */
#define IFX_GTM_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN19 */
#define IFX_GTM_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN19 */
#define IFX_GTM_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN19 */
#define IFX_GTM_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN20 */
#define IFX_GTM_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN20 */
#define IFX_GTM_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN20 */
#define IFX_GTM_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN21 */
#define IFX_GTM_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN21 */
#define IFX_GTM_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN21 */
#define IFX_GTM_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN22 */
#define IFX_GTM_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN22 */
#define IFX_GTM_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN22 */
#define IFX_GTM_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN23 */
#define IFX_GTM_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN23 */
#define IFX_GTM_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN23 */
#define IFX_GTM_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN24 */
#define IFX_GTM_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN24 */
#define IFX_GTM_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN24 */
#define IFX_GTM_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN25 */
#define IFX_GTM_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN25 */
#define IFX_GTM_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN25 */
#define IFX_GTM_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN26 */
#define IFX_GTM_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN26 */
#define IFX_GTM_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN26 */
#define IFX_GTM_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN27 */
#define IFX_GTM_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN27 */
#define IFX_GTM_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN27 */
#define IFX_GTM_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN28 */
#define IFX_GTM_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN28 */
#define IFX_GTM_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN28 */
#define IFX_GTM_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN29 */
#define IFX_GTM_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN29 */
#define IFX_GTM_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN29 */
#define IFX_GTM_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN30 */
#define IFX_GTM_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN30 */
#define IFX_GTM_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN30 */
#define IFX_GTM_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_GTM_ACCEN0_Bits.EN31 */
#define IFX_GTM_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_GTM_ACCEN0_Bits.EN31 */
#define IFX_GTM_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ACCEN0_Bits.EN31 */
#define IFX_GTM_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_GTM_OCDS_OTBU0T_Bits.CV */
#define IFX_GTM_OCDS_OTBU0T_CV_LEN (27u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU0T_Bits.CV */
#define IFX_GTM_OCDS_OTBU0T_CV_MSK (0x7ffffffu)

/** \brief Offset for Ifx_GTM_OCDS_OTBU0T_Bits.CV */
#define IFX_GTM_OCDS_OTBU0T_CV_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OTBU0T_Bits.CM */
#define IFX_GTM_OCDS_OTBU0T_CM_LEN (2u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU0T_Bits.CM */
#define IFX_GTM_OCDS_OTBU0T_CM_MSK (0x3u)

/** \brief Offset for Ifx_GTM_OCDS_OTBU0T_Bits.CM */
#define IFX_GTM_OCDS_OTBU0T_CM_OFF (28u)

/** \brief Length for Ifx_GTM_OCDS_OTBU1T_Bits.CV */
#define IFX_GTM_OCDS_OTBU1T_CV_LEN (24u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU1T_Bits.CV */
#define IFX_GTM_OCDS_OTBU1T_CV_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_OCDS_OTBU1T_Bits.CV */
#define IFX_GTM_OCDS_OTBU1T_CV_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OTBU1T_Bits.EN */
#define IFX_GTM_OCDS_OTBU1T_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU1T_Bits.EN */
#define IFX_GTM_OCDS_OTBU1T_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_OCDS_OTBU1T_Bits.EN */
#define IFX_GTM_OCDS_OTBU1T_EN_OFF (28u)

/** \brief Length for Ifx_GTM_OCDS_OTBU2T_Bits.CV */
#define IFX_GTM_OCDS_OTBU2T_CV_LEN (24u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU2T_Bits.CV */
#define IFX_GTM_OCDS_OTBU2T_CV_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_OCDS_OTBU2T_Bits.CV */
#define IFX_GTM_OCDS_OTBU2T_CV_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OTBU2T_Bits.EN */
#define IFX_GTM_OCDS_OTBU2T_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU2T_Bits.EN */
#define IFX_GTM_OCDS_OTBU2T_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_OCDS_OTBU2T_Bits.EN */
#define IFX_GTM_OCDS_OTBU2T_EN_OFF (28u)

/** \brief Length for Ifx_GTM_OCDS_OTBU3T_Bits.CV */
#define IFX_GTM_OCDS_OTBU3T_CV_LEN (24u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU3T_Bits.CV */
#define IFX_GTM_OCDS_OTBU3T_CV_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_OCDS_OTBU3T_Bits.CV */
#define IFX_GTM_OCDS_OTBU3T_CV_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OTBU3T_Bits.EN */
#define IFX_GTM_OCDS_OTBU3T_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_OCDS_OTBU3T_Bits.EN */
#define IFX_GTM_OCDS_OTBU3T_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_OCDS_OTBU3T_Bits.EN */
#define IFX_GTM_OCDS_OTBU3T_EN_OFF (28u)

/** \brief Length for Ifx_GTM_OCDS_OTSS_Bits.OTGB0 */
#define IFX_GTM_OCDS_OTSS_OTGB0_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSS_Bits.OTGB0 */
#define IFX_GTM_OCDS_OTSS_OTGB0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSS_Bits.OTGB0 */
#define IFX_GTM_OCDS_OTSS_OTGB0_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OTSS_Bits.OTGB1 */
#define IFX_GTM_OCDS_OTSS_OTGB1_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSS_Bits.OTGB1 */
#define IFX_GTM_OCDS_OTSS_OTGB1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSS_Bits.OTGB1 */
#define IFX_GTM_OCDS_OTSS_OTGB1_OFF (8u)

/** \brief Length for Ifx_GTM_OCDS_OTSS_Bits.OTGBM0 */
#define IFX_GTM_OCDS_OTSS_OTGBM0_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSS_Bits.OTGBM0 */
#define IFX_GTM_OCDS_OTSS_OTGBM0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSS_Bits.OTGBM0 */
#define IFX_GTM_OCDS_OTSS_OTGBM0_OFF (16u)

/** \brief Length for Ifx_GTM_OCDS_OTSS_Bits.OTGBM1 */
#define IFX_GTM_OCDS_OTSS_OTGBM1_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSS_Bits.OTGBM1 */
#define IFX_GTM_OCDS_OTSS_OTGBM1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSS_Bits.OTGBM1 */
#define IFX_GTM_OCDS_OTSS_OTGBM1_OFF (24u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B0LMT */
#define IFX_GTM_OCDS_OTSC0_B0LMT_LEN (3u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B0LMT */
#define IFX_GTM_OCDS_OTSC0_B0LMT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B0LMT */
#define IFX_GTM_OCDS_OTSC0_B0LMT_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B0LMI */
#define IFX_GTM_OCDS_OTSC0_B0LMI_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B0LMI */
#define IFX_GTM_OCDS_OTSC0_B0LMI_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B0LMI */
#define IFX_GTM_OCDS_OTSC0_B0LMI_OFF (4u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B0HMT */
#define IFX_GTM_OCDS_OTSC0_B0HMT_LEN (3u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B0HMT */
#define IFX_GTM_OCDS_OTSC0_B0HMT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B0HMT */
#define IFX_GTM_OCDS_OTSC0_B0HMT_OFF (8u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B0HMI */
#define IFX_GTM_OCDS_OTSC0_B0HMI_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B0HMI */
#define IFX_GTM_OCDS_OTSC0_B0HMI_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B0HMI */
#define IFX_GTM_OCDS_OTSC0_B0HMI_OFF (12u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B1LMT */
#define IFX_GTM_OCDS_OTSC0_B1LMT_LEN (3u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B1LMT */
#define IFX_GTM_OCDS_OTSC0_B1LMT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B1LMT */
#define IFX_GTM_OCDS_OTSC0_B1LMT_OFF (16u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B1LMI */
#define IFX_GTM_OCDS_OTSC0_B1LMI_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B1LMI */
#define IFX_GTM_OCDS_OTSC0_B1LMI_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B1LMI */
#define IFX_GTM_OCDS_OTSC0_B1LMI_OFF (20u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B1HMT */
#define IFX_GTM_OCDS_OTSC0_B1HMT_LEN (3u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B1HMT */
#define IFX_GTM_OCDS_OTSC0_B1HMT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B1HMT */
#define IFX_GTM_OCDS_OTSC0_B1HMT_OFF (24u)

/** \brief Length for Ifx_GTM_OCDS_OTSC0_Bits.B1HMI */
#define IFX_GTM_OCDS_OTSC0_B1HMI_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC0_Bits.B1HMI */
#define IFX_GTM_OCDS_OTSC0_B1HMI_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSC0_Bits.B1HMI */
#define IFX_GTM_OCDS_OTSC0_B1HMI_OFF (28u)

/** \brief Length for Ifx_GTM_OCDS_OTSC1_Bits.MCS */
#define IFX_GTM_OCDS_OTSC1_MCS_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC1_Bits.MCS */
#define IFX_GTM_OCDS_OTSC1_MCS_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSC1_Bits.MCS */
#define IFX_GTM_OCDS_OTSC1_MCS_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OTSC1_Bits.MI */
#define IFX_GTM_OCDS_OTSC1_MI_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC1_Bits.MI */
#define IFX_GTM_OCDS_OTSC1_MI_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OTSC1_Bits.MI */
#define IFX_GTM_OCDS_OTSC1_MI_OFF (4u)

/** \brief Length for Ifx_GTM_OCDS_OTSC1_Bits.MOE */
#define IFX_GTM_OCDS_OTSC1_MOE_LEN (1u)

/** \brief Mask for Ifx_GTM_OCDS_OTSC1_Bits.MOE */
#define IFX_GTM_OCDS_OTSC1_MOE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_OCDS_OTSC1_Bits.MOE */
#define IFX_GTM_OCDS_OTSC1_MOE_OFF (9u)

/** \brief Length for Ifx_GTM_OCDS_ODA_Bits.DRAC */
#define IFX_GTM_OCDS_ODA_DRAC_LEN (2u)

/** \brief Mask for Ifx_GTM_OCDS_ODA_Bits.DRAC */
#define IFX_GTM_OCDS_ODA_DRAC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_OCDS_ODA_Bits.DRAC */
#define IFX_GTM_OCDS_ODA_DRAC_OFF (0u)

/** \brief Length for Ifx_GTM_OCDS_OCS_Bits.SUS */
#define IFX_GTM_OCDS_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_GTM_OCDS_OCS_Bits.SUS */
#define IFX_GTM_OCDS_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_GTM_OCDS_OCS_Bits.SUS */
#define IFX_GTM_OCDS_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_GTM_OCDS_OCS_Bits.SUS_P */
#define IFX_GTM_OCDS_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_GTM_OCDS_OCS_Bits.SUS_P */
#define IFX_GTM_OCDS_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_GTM_OCDS_OCS_Bits.SUS_P */
#define IFX_GTM_OCDS_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_GTM_OCDS_OCS_Bits.SUSSTA */
#define IFX_GTM_OCDS_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_GTM_OCDS_OCS_Bits.SUSSTA */
#define IFX_GTM_OCDS_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_GTM_OCDS_OCS_Bits.SUSSTA */
#define IFX_GTM_OCDS_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH0SEL */
#define IFX_GTM_TIMINSEL_CH0SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH0SEL */
#define IFX_GTM_TIMINSEL_CH0SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH0SEL */
#define IFX_GTM_TIMINSEL_CH0SEL_OFF (0u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH1SEL */
#define IFX_GTM_TIMINSEL_CH1SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH1SEL */
#define IFX_GTM_TIMINSEL_CH1SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH1SEL */
#define IFX_GTM_TIMINSEL_CH1SEL_OFF (4u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH2SEL */
#define IFX_GTM_TIMINSEL_CH2SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH2SEL */
#define IFX_GTM_TIMINSEL_CH2SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH2SEL */
#define IFX_GTM_TIMINSEL_CH2SEL_OFF (8u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH3SEL */
#define IFX_GTM_TIMINSEL_CH3SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH3SEL */
#define IFX_GTM_TIMINSEL_CH3SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH3SEL */
#define IFX_GTM_TIMINSEL_CH3SEL_OFF (12u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH4SEL */
#define IFX_GTM_TIMINSEL_CH4SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH4SEL */
#define IFX_GTM_TIMINSEL_CH4SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH4SEL */
#define IFX_GTM_TIMINSEL_CH4SEL_OFF (16u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH5SEL */
#define IFX_GTM_TIMINSEL_CH5SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH5SEL */
#define IFX_GTM_TIMINSEL_CH5SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH5SEL */
#define IFX_GTM_TIMINSEL_CH5SEL_OFF (20u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH6SEL */
#define IFX_GTM_TIMINSEL_CH6SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH6SEL */
#define IFX_GTM_TIMINSEL_CH6SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH6SEL */
#define IFX_GTM_TIMINSEL_CH6SEL_OFF (24u)

/** \brief Length for Ifx_GTM_TIMINSEL_Bits.CH7SEL */
#define IFX_GTM_TIMINSEL_CH7SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_TIMINSEL_Bits.CH7SEL */
#define IFX_GTM_TIMINSEL_CH7SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TIMINSEL_Bits.CH7SEL */
#define IFX_GTM_TIMINSEL_CH7SEL_OFF (28u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL0 */
#define IFX_GTM_TOUTSEL_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL0 */
#define IFX_GTM_TOUTSEL_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL0 */
#define IFX_GTM_TOUTSEL_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL1 */
#define IFX_GTM_TOUTSEL_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL1 */
#define IFX_GTM_TOUTSEL_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL1 */
#define IFX_GTM_TOUTSEL_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL2 */
#define IFX_GTM_TOUTSEL_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL2 */
#define IFX_GTM_TOUTSEL_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL2 */
#define IFX_GTM_TOUTSEL_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL3 */
#define IFX_GTM_TOUTSEL_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL3 */
#define IFX_GTM_TOUTSEL_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL3 */
#define IFX_GTM_TOUTSEL_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL4 */
#define IFX_GTM_TOUTSEL_SEL4_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL4 */
#define IFX_GTM_TOUTSEL_SEL4_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL4 */
#define IFX_GTM_TOUTSEL_SEL4_OFF (16u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL5 */
#define IFX_GTM_TOUTSEL_SEL5_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL5 */
#define IFX_GTM_TOUTSEL_SEL5_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL5 */
#define IFX_GTM_TOUTSEL_SEL5_OFF (20u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL6 */
#define IFX_GTM_TOUTSEL_SEL6_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL6 */
#define IFX_GTM_TOUTSEL_SEL6_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL6 */
#define IFX_GTM_TOUTSEL_SEL6_OFF (24u)

/** \brief Length for Ifx_GTM_TOUTSEL_Bits.SEL7 */
#define IFX_GTM_TOUTSEL_SEL7_LEN (4u)

/** \brief Mask for Ifx_GTM_TOUTSEL_Bits.SEL7 */
#define IFX_GTM_TOUTSEL_SEL7_MSK (0xfu)

/** \brief Offset for Ifx_GTM_TOUTSEL_Bits.SEL7 */
#define IFX_GTM_TOUTSEL_SEL7_OFF (28u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL0 */
#define IFX_GTM_DSADCINSEL_INSEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL0 */
#define IFX_GTM_DSADCINSEL_INSEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL0 */
#define IFX_GTM_DSADCINSEL_INSEL0_OFF (0u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL1 */
#define IFX_GTM_DSADCINSEL_INSEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL1 */
#define IFX_GTM_DSADCINSEL_INSEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL1 */
#define IFX_GTM_DSADCINSEL_INSEL1_OFF (4u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL2 */
#define IFX_GTM_DSADCINSEL_INSEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL2 */
#define IFX_GTM_DSADCINSEL_INSEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL2 */
#define IFX_GTM_DSADCINSEL_INSEL2_OFF (8u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL3 */
#define IFX_GTM_DSADCINSEL_INSEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL3 */
#define IFX_GTM_DSADCINSEL_INSEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL3 */
#define IFX_GTM_DSADCINSEL_INSEL3_OFF (12u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL4 */
#define IFX_GTM_DSADCINSEL_INSEL4_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL4 */
#define IFX_GTM_DSADCINSEL_INSEL4_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL4 */
#define IFX_GTM_DSADCINSEL_INSEL4_OFF (16u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL5 */
#define IFX_GTM_DSADCINSEL_INSEL5_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL5 */
#define IFX_GTM_DSADCINSEL_INSEL5_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL5 */
#define IFX_GTM_DSADCINSEL_INSEL5_OFF (20u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL6 */
#define IFX_GTM_DSADCINSEL_INSEL6_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL6 */
#define IFX_GTM_DSADCINSEL_INSEL6_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL6 */
#define IFX_GTM_DSADCINSEL_INSEL6_OFF (24u)

/** \brief Length for Ifx_GTM_DSADCINSEL_Bits.INSEL7 */
#define IFX_GTM_DSADCINSEL_INSEL7_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADCINSEL_Bits.INSEL7 */
#define IFX_GTM_DSADCINSEL_INSEL7_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADCINSEL_Bits.INSEL7 */
#define IFX_GTM_DSADCINSEL_INSEL7_OFF (28u)

/** \brief Length for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL0 */
#define IFX_GTM_DSADC_OUTSEL0_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL0 */
#define IFX_GTM_DSADC_OUTSEL0_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL0 */
#define IFX_GTM_DSADC_OUTSEL0_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL1 */
#define IFX_GTM_DSADC_OUTSEL0_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL1 */
#define IFX_GTM_DSADC_OUTSEL0_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL1 */
#define IFX_GTM_DSADC_OUTSEL0_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL2 */
#define IFX_GTM_DSADC_OUTSEL0_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL2 */
#define IFX_GTM_DSADC_OUTSEL0_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL2 */
#define IFX_GTM_DSADC_OUTSEL0_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL3 */
#define IFX_GTM_DSADC_OUTSEL0_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL3 */
#define IFX_GTM_DSADC_OUTSEL0_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL3 */
#define IFX_GTM_DSADC_OUTSEL0_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL4 */
#define IFX_GTM_DSADC_OUTSEL0_SEL4_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL4 */
#define IFX_GTM_DSADC_OUTSEL0_SEL4_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL4 */
#define IFX_GTM_DSADC_OUTSEL0_SEL4_OFF (16u)

/** \brief Length for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL5 */
#define IFX_GTM_DSADC_OUTSEL0_SEL5_LEN (4u)

/** \brief Mask for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL5 */
#define IFX_GTM_DSADC_OUTSEL0_SEL5_MSK (0xfu)

/** \brief Offset for Ifx_GTM_DSADC_OUTSEL0_Bits.SEL5 */
#define IFX_GTM_DSADC_OUTSEL0_SEL5_OFF (20u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL0 */
#define IFX_GTM_ADCTRIG_OUT0_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL0 */
#define IFX_GTM_ADCTRIG_OUT0_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL0 */
#define IFX_GTM_ADCTRIG_OUT0_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL1 */
#define IFX_GTM_ADCTRIG_OUT0_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL1 */
#define IFX_GTM_ADCTRIG_OUT0_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL1 */
#define IFX_GTM_ADCTRIG_OUT0_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL2 */
#define IFX_GTM_ADCTRIG_OUT0_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL2 */
#define IFX_GTM_ADCTRIG_OUT0_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL2 */
#define IFX_GTM_ADCTRIG_OUT0_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL3 */
#define IFX_GTM_ADCTRIG_OUT0_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL3 */
#define IFX_GTM_ADCTRIG_OUT0_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL3 */
#define IFX_GTM_ADCTRIG_OUT0_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL4 */
#define IFX_GTM_ADCTRIG_OUT0_SEL4_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL4 */
#define IFX_GTM_ADCTRIG_OUT0_SEL4_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL4 */
#define IFX_GTM_ADCTRIG_OUT0_SEL4_OFF (16u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL5 */
#define IFX_GTM_ADCTRIG_OUT0_SEL5_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL5 */
#define IFX_GTM_ADCTRIG_OUT0_SEL5_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL5 */
#define IFX_GTM_ADCTRIG_OUT0_SEL5_OFF (20u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL6 */
#define IFX_GTM_ADCTRIG_OUT0_SEL6_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL6 */
#define IFX_GTM_ADCTRIG_OUT0_SEL6_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL6 */
#define IFX_GTM_ADCTRIG_OUT0_SEL6_OFF (24u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL7 */
#define IFX_GTM_ADCTRIG_OUT0_SEL7_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL7 */
#define IFX_GTM_ADCTRIG_OUT0_SEL7_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT0_Bits.SEL7 */
#define IFX_GTM_ADCTRIG_OUT0_SEL7_OFF (28u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL0 */
#define IFX_GTM_ADCTRIG_OUT1_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL0 */
#define IFX_GTM_ADCTRIG_OUT1_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL0 */
#define IFX_GTM_ADCTRIG_OUT1_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL1 */
#define IFX_GTM_ADCTRIG_OUT1_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL1 */
#define IFX_GTM_ADCTRIG_OUT1_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL1 */
#define IFX_GTM_ADCTRIG_OUT1_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL2 */
#define IFX_GTM_ADCTRIG_OUT1_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL2 */
#define IFX_GTM_ADCTRIG_OUT1_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL2 */
#define IFX_GTM_ADCTRIG_OUT1_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL3 */
#define IFX_GTM_ADCTRIG_OUT1_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL3 */
#define IFX_GTM_ADCTRIG_OUT1_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_ADCTRIG_OUT1_Bits.SEL3 */
#define IFX_GTM_ADCTRIG_OUT1_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_DXOUTCON_Bits.OUT0 */
#define IFX_GTM_DXOUTCON_OUT0_LEN (1u)

/** \brief Mask for Ifx_GTM_DXOUTCON_Bits.OUT0 */
#define IFX_GTM_DXOUTCON_OUT0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXOUTCON_Bits.OUT0 */
#define IFX_GTM_DXOUTCON_OUT0_OFF (0u)

/** \brief Length for Ifx_GTM_DXOUTCON_Bits.OUT1 */
#define IFX_GTM_DXOUTCON_OUT1_LEN (1u)

/** \brief Mask for Ifx_GTM_DXOUTCON_Bits.OUT1 */
#define IFX_GTM_DXOUTCON_OUT1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXOUTCON_Bits.OUT1 */
#define IFX_GTM_DXOUTCON_OUT1_OFF (1u)

/** \brief Length for Ifx_GTM_DXOUTCON_Bits.OUT2 */
#define IFX_GTM_DXOUTCON_OUT2_LEN (1u)

/** \brief Mask for Ifx_GTM_DXOUTCON_Bits.OUT2 */
#define IFX_GTM_DXOUTCON_OUT2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXOUTCON_Bits.OUT2 */
#define IFX_GTM_DXOUTCON_OUT2_OFF (2u)

/** \brief Length for Ifx_GTM_DXOUTCON_Bits.OUT3 */
#define IFX_GTM_DXOUTCON_OUT3_LEN (1u)

/** \brief Mask for Ifx_GTM_DXOUTCON_Bits.OUT3 */
#define IFX_GTM_DXOUTCON_OUT3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXOUTCON_Bits.OUT3 */
#define IFX_GTM_DXOUTCON_OUT3_OFF (3u)

/** \brief Length for Ifx_GTM_DXOUTCON_Bits.OUT4 */
#define IFX_GTM_DXOUTCON_OUT4_LEN (1u)

/** \brief Mask for Ifx_GTM_DXOUTCON_Bits.OUT4 */
#define IFX_GTM_DXOUTCON_OUT4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXOUTCON_Bits.OUT4 */
#define IFX_GTM_DXOUTCON_OUT4_OFF (4u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG0 */
#define IFX_GTM_TRIGOUT_TRIG0_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG0 */
#define IFX_GTM_TRIGOUT_TRIG0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG0 */
#define IFX_GTM_TRIGOUT_TRIG0_OFF (0u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG1 */
#define IFX_GTM_TRIGOUT_TRIG1_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG1 */
#define IFX_GTM_TRIGOUT_TRIG1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG1 */
#define IFX_GTM_TRIGOUT_TRIG1_OFF (2u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG2 */
#define IFX_GTM_TRIGOUT_TRIG2_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG2 */
#define IFX_GTM_TRIGOUT_TRIG2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG2 */
#define IFX_GTM_TRIGOUT_TRIG2_OFF (4u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG3 */
#define IFX_GTM_TRIGOUT_TRIG3_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG3 */
#define IFX_GTM_TRIGOUT_TRIG3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG3 */
#define IFX_GTM_TRIGOUT_TRIG3_OFF (6u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG4 */
#define IFX_GTM_TRIGOUT_TRIG4_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG4 */
#define IFX_GTM_TRIGOUT_TRIG4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG4 */
#define IFX_GTM_TRIGOUT_TRIG4_OFF (8u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG5 */
#define IFX_GTM_TRIGOUT_TRIG5_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG5 */
#define IFX_GTM_TRIGOUT_TRIG5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG5 */
#define IFX_GTM_TRIGOUT_TRIG5_OFF (10u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG6 */
#define IFX_GTM_TRIGOUT_TRIG6_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG6 */
#define IFX_GTM_TRIGOUT_TRIG6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG6 */
#define IFX_GTM_TRIGOUT_TRIG6_OFF (12u)

/** \brief Length for Ifx_GTM_TRIGOUT_Bits.TRIG7 */
#define IFX_GTM_TRIGOUT_TRIG7_LEN (2u)

/** \brief Mask for Ifx_GTM_TRIGOUT_Bits.TRIG7 */
#define IFX_GTM_TRIGOUT_TRIG7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_TRIGOUT_Bits.TRIG7 */
#define IFX_GTM_TRIGOUT_TRIG7_OFF (14u)

/** \brief Length for Ifx_GTM_INTOUT_Bits.INT0 */
#define IFX_GTM_INTOUT_INT0_LEN (2u)

/** \brief Mask for Ifx_GTM_INTOUT_Bits.INT0 */
#define IFX_GTM_INTOUT_INT0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_INTOUT_Bits.INT0 */
#define IFX_GTM_INTOUT_INT0_OFF (0u)

/** \brief Length for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL0 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL0 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL0 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL1 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL1 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL1 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL2 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL2 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL2 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL3 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL3 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_MCSTRIGOUTSEL_Bits.SEL3 */
#define IFX_GTM_MCSTRIGOUTSEL_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_MCSINTSTAT_Bits.MCS00 */
#define IFX_GTM_MCSINTSTAT_MCS00_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTSTAT_Bits.MCS00 */
#define IFX_GTM_MCSINTSTAT_MCS00_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTSTAT_Bits.MCS00 */
#define IFX_GTM_MCSINTSTAT_MCS00_OFF (0u)

/** \brief Length for Ifx_GTM_MCSINTSTAT_Bits.MCS10 */
#define IFX_GTM_MCSINTSTAT_MCS10_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTSTAT_Bits.MCS10 */
#define IFX_GTM_MCSINTSTAT_MCS10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTSTAT_Bits.MCS10 */
#define IFX_GTM_MCSINTSTAT_MCS10_OFF (1u)

/** \brief Length for Ifx_GTM_MCSINTSTAT_Bits.MCS20 */
#define IFX_GTM_MCSINTSTAT_MCS20_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTSTAT_Bits.MCS20 */
#define IFX_GTM_MCSINTSTAT_MCS20_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTSTAT_Bits.MCS20 */
#define IFX_GTM_MCSINTSTAT_MCS20_OFF (2u)

/** \brief Length for Ifx_GTM_MCSINTSTAT_Bits.MCS30 */
#define IFX_GTM_MCSINTSTAT_MCS30_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTSTAT_Bits.MCS30 */
#define IFX_GTM_MCSINTSTAT_MCS30_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTSTAT_Bits.MCS30 */
#define IFX_GTM_MCSINTSTAT_MCS30_OFF (3u)

/** \brief Length for Ifx_GTM_MCSINTSTAT_Bits.MCS40 */
#define IFX_GTM_MCSINTSTAT_MCS40_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTSTAT_Bits.MCS40 */
#define IFX_GTM_MCSINTSTAT_MCS40_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTSTAT_Bits.MCS40 */
#define IFX_GTM_MCSINTSTAT_MCS40_OFF (4u)

/** \brief Length for Ifx_GTM_MCSINTCLR_Bits.MCS0 */
#define IFX_GTM_MCSINTCLR_MCS0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTCLR_Bits.MCS0 */
#define IFX_GTM_MCSINTCLR_MCS0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTCLR_Bits.MCS0 */
#define IFX_GTM_MCSINTCLR_MCS0_OFF (0u)

/** \brief Length for Ifx_GTM_MCSINTCLR_Bits.MCS1 */
#define IFX_GTM_MCSINTCLR_MCS1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTCLR_Bits.MCS1 */
#define IFX_GTM_MCSINTCLR_MCS1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTCLR_Bits.MCS1 */
#define IFX_GTM_MCSINTCLR_MCS1_OFF (1u)

/** \brief Length for Ifx_GTM_MCSINTCLR_Bits.MCS2 */
#define IFX_GTM_MCSINTCLR_MCS2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTCLR_Bits.MCS2 */
#define IFX_GTM_MCSINTCLR_MCS2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTCLR_Bits.MCS2 */
#define IFX_GTM_MCSINTCLR_MCS2_OFF (2u)

/** \brief Length for Ifx_GTM_MCSINTCLR_Bits.MCS3 */
#define IFX_GTM_MCSINTCLR_MCS3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTCLR_Bits.MCS3 */
#define IFX_GTM_MCSINTCLR_MCS3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTCLR_Bits.MCS3 */
#define IFX_GTM_MCSINTCLR_MCS3_OFF (3u)

/** \brief Length for Ifx_GTM_MCSINTCLR_Bits.MCS4 */
#define IFX_GTM_MCSINTCLR_MCS4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCSINTCLR_Bits.MCS4 */
#define IFX_GTM_MCSINTCLR_MCS4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCSINTCLR_Bits.MCS4 */
#define IFX_GTM_MCSINTCLR_MCS4_OFF (4u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.IN0 */
#define IFX_GTM_DXINCON_IN0_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.IN0 */
#define IFX_GTM_DXINCON_IN0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.IN0 */
#define IFX_GTM_DXINCON_IN0_OFF (0u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.IN1 */
#define IFX_GTM_DXINCON_IN1_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.IN1 */
#define IFX_GTM_DXINCON_IN1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.IN1 */
#define IFX_GTM_DXINCON_IN1_OFF (1u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.IN2 */
#define IFX_GTM_DXINCON_IN2_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.IN2 */
#define IFX_GTM_DXINCON_IN2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.IN2 */
#define IFX_GTM_DXINCON_IN2_OFF (2u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.IN3 */
#define IFX_GTM_DXINCON_IN3_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.IN3 */
#define IFX_GTM_DXINCON_IN3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.IN3 */
#define IFX_GTM_DXINCON_IN3_OFF (3u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.IN4 */
#define IFX_GTM_DXINCON_IN4_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.IN4 */
#define IFX_GTM_DXINCON_IN4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.IN4 */
#define IFX_GTM_DXINCON_IN4_OFF (4u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.DSS0 */
#define IFX_GTM_DXINCON_DSS0_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.DSS0 */
#define IFX_GTM_DXINCON_DSS0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.DSS0 */
#define IFX_GTM_DXINCON_DSS0_OFF (16u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.DSS1 */
#define IFX_GTM_DXINCON_DSS1_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.DSS1 */
#define IFX_GTM_DXINCON_DSS1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.DSS1 */
#define IFX_GTM_DXINCON_DSS1_OFF (17u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.DSS2 */
#define IFX_GTM_DXINCON_DSS2_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.DSS2 */
#define IFX_GTM_DXINCON_DSS2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.DSS2 */
#define IFX_GTM_DXINCON_DSS2_OFF (18u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.DSS3 */
#define IFX_GTM_DXINCON_DSS3_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.DSS3 */
#define IFX_GTM_DXINCON_DSS3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.DSS3 */
#define IFX_GTM_DXINCON_DSS3_OFF (19u)

/** \brief Length for Ifx_GTM_DXINCON_Bits.DSS4 */
#define IFX_GTM_DXINCON_DSS4_LEN (1u)

/** \brief Mask for Ifx_GTM_DXINCON_Bits.DSS4 */
#define IFX_GTM_DXINCON_DSS4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_DXINCON_Bits.DSS4 */
#define IFX_GTM_DXINCON_DSS4_OFF (20u)

/** \brief Length for Ifx_GTM_DATAIN_Bits.DATA */
#define IFX_GTM_DATAIN_DATA_LEN (32u)

/** \brief Mask for Ifx_GTM_DATAIN_Bits.DATA */
#define IFX_GTM_DATAIN_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_GTM_DATAIN_Bits.DATA */
#define IFX_GTM_DATAIN_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_SET_CON2_Bits.SEL8 */
#define IFX_GTM_MSC_SET_CON2_SEL8_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON2_Bits.SEL8 */
#define IFX_GTM_MSC_SET_CON2_SEL8_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON2_Bits.SEL8 */
#define IFX_GTM_MSC_SET_CON2_SEL8_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_SET_CON2_Bits.SEL9 */
#define IFX_GTM_MSC_SET_CON2_SEL9_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON2_Bits.SEL9 */
#define IFX_GTM_MSC_SET_CON2_SEL9_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON2_Bits.SEL9 */
#define IFX_GTM_MSC_SET_CON2_SEL9_OFF (8u)

/** \brief Length for Ifx_GTM_MSC_SET_CON2_Bits.SEL10 */
#define IFX_GTM_MSC_SET_CON2_SEL10_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON2_Bits.SEL10 */
#define IFX_GTM_MSC_SET_CON2_SEL10_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON2_Bits.SEL10 */
#define IFX_GTM_MSC_SET_CON2_SEL10_OFF (16u)

/** \brief Length for Ifx_GTM_MSC_SET_CON2_Bits.SEL11 */
#define IFX_GTM_MSC_SET_CON2_SEL11_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON2_Bits.SEL11 */
#define IFX_GTM_MSC_SET_CON2_SEL11_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON2_Bits.SEL11 */
#define IFX_GTM_MSC_SET_CON2_SEL11_OFF (24u)

/** \brief Length for Ifx_GTM_MSC_SET_CON3_Bits.SEL12 */
#define IFX_GTM_MSC_SET_CON3_SEL12_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON3_Bits.SEL12 */
#define IFX_GTM_MSC_SET_CON3_SEL12_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON3_Bits.SEL12 */
#define IFX_GTM_MSC_SET_CON3_SEL12_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_SET_CON3_Bits.SEL13 */
#define IFX_GTM_MSC_SET_CON3_SEL13_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON3_Bits.SEL13 */
#define IFX_GTM_MSC_SET_CON3_SEL13_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON3_Bits.SEL13 */
#define IFX_GTM_MSC_SET_CON3_SEL13_OFF (8u)

/** \brief Length for Ifx_GTM_MSC_SET_CON3_Bits.SEL14 */
#define IFX_GTM_MSC_SET_CON3_SEL14_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON3_Bits.SEL14 */
#define IFX_GTM_MSC_SET_CON3_SEL14_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON3_Bits.SEL14 */
#define IFX_GTM_MSC_SET_CON3_SEL14_OFF (16u)

/** \brief Length for Ifx_GTM_MSC_SET_CON3_Bits.SEL15 */
#define IFX_GTM_MSC_SET_CON3_SEL15_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON3_Bits.SEL15 */
#define IFX_GTM_MSC_SET_CON3_SEL15_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON3_Bits.SEL15 */
#define IFX_GTM_MSC_SET_CON3_SEL15_OFF (24u)

/** \brief Length for Ifx_GTM_MSC_SET_CON1_Bits.SEL4 */
#define IFX_GTM_MSC_SET_CON1_SEL4_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON1_Bits.SEL4 */
#define IFX_GTM_MSC_SET_CON1_SEL4_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON1_Bits.SEL4 */
#define IFX_GTM_MSC_SET_CON1_SEL4_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_SET_CON1_Bits.SEL5 */
#define IFX_GTM_MSC_SET_CON1_SEL5_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON1_Bits.SEL5 */
#define IFX_GTM_MSC_SET_CON1_SEL5_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON1_Bits.SEL5 */
#define IFX_GTM_MSC_SET_CON1_SEL5_OFF (8u)

/** \brief Length for Ifx_GTM_MSC_SET_CON1_Bits.SEL6 */
#define IFX_GTM_MSC_SET_CON1_SEL6_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON1_Bits.SEL6 */
#define IFX_GTM_MSC_SET_CON1_SEL6_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON1_Bits.SEL6 */
#define IFX_GTM_MSC_SET_CON1_SEL6_OFF (16u)

/** \brief Length for Ifx_GTM_MSC_SET_CON1_Bits.SEL7 */
#define IFX_GTM_MSC_SET_CON1_SEL7_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON1_Bits.SEL7 */
#define IFX_GTM_MSC_SET_CON1_SEL7_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON1_Bits.SEL7 */
#define IFX_GTM_MSC_SET_CON1_SEL7_OFF (24u)

/** \brief Length for Ifx_GTM_MSC_SET_CON0_Bits.SEL0 */
#define IFX_GTM_MSC_SET_CON0_SEL0_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON0_Bits.SEL0 */
#define IFX_GTM_MSC_SET_CON0_SEL0_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON0_Bits.SEL0 */
#define IFX_GTM_MSC_SET_CON0_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_SET_CON0_Bits.SEL1 */
#define IFX_GTM_MSC_SET_CON0_SEL1_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON0_Bits.SEL1 */
#define IFX_GTM_MSC_SET_CON0_SEL1_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON0_Bits.SEL1 */
#define IFX_GTM_MSC_SET_CON0_SEL1_OFF (8u)

/** \brief Length for Ifx_GTM_MSC_SET_CON0_Bits.SEL2 */
#define IFX_GTM_MSC_SET_CON0_SEL2_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON0_Bits.SEL2 */
#define IFX_GTM_MSC_SET_CON0_SEL2_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON0_Bits.SEL2 */
#define IFX_GTM_MSC_SET_CON0_SEL2_OFF (16u)

/** \brief Length for Ifx_GTM_MSC_SET_CON0_Bits.SEL3 */
#define IFX_GTM_MSC_SET_CON0_SEL3_LEN (5u)

/** \brief Mask for Ifx_GTM_MSC_SET_CON0_Bits.SEL3 */
#define IFX_GTM_MSC_SET_CON0_SEL3_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_MSC_SET_CON0_Bits.SEL3 */
#define IFX_GTM_MSC_SET_CON0_SEL3_OFF (24u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL0_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL1_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL1_OFF (2u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL2_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL2_OFF (4u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL3_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL3_OFF (6u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL4_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL4_OFF (8u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL5_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL5_OFF (10u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL6_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL6_OFF (12u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL7_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL7_OFF (14u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL8_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL8_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL8_OFF (16u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL9_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL9_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL9_OFF (18u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL10_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL10_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL10_OFF (20u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL11_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL11_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL11_OFF (22u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL12_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL12_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL12_OFF (24u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL13_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL13_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL13_OFF (26u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL14_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL14_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL14_OFF (28u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL15_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL15_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INLCON_SEL15_OFF (30u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL0_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL1_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL1_OFF (2u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL2_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL2_OFF (4u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL3_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL3_OFF (6u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL4_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL4_OFF (8u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL5_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL5_OFF (10u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL6_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL6_OFF (12u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL7_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL7_OFF (14u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL8_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL8_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL8_OFF (16u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL9_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL9_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL9_OFF (18u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL10_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL10_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL10_OFF (20u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL11_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL11_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL11_OFF (22u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL12_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL12_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL12_OFF (24u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL13_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL13_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL13_OFF (26u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL14_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL14_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL14_OFF (28u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL15_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL15_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INHCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INHCON_SEL15_OFF (30u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL0_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL0 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL1_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL1 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL1_OFF (2u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL2_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL2 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL2_OFF (4u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL3_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL3 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL3_OFF (6u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL4_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL4 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL4_OFF (8u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL5_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL5 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL5_OFF (10u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL6_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL6 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL6_OFF (12u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL7_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL7 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL7_OFF (14u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL8_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL8_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL8 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL8_OFF (16u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL9_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL9_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL9 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL9_OFF (18u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL10_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL10_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL10 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL10_OFF (20u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL11_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL11_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL11 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL11_OFF (22u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL12_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL12_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL12 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL12_OFF (24u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL13_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL13_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL13 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL13_OFF (26u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL14_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL14_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL14 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL14_OFF (28u)

/** \brief Length for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL15_LEN (2u)

/** \brief Mask for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL15_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MSC_MSCQ_INLEXTCON_Bits.SEL15 */
#define IFX_GTM_MSC_MSCQ_INLEXTCON_SEL15_OFF (30u)

/** \brief Length for Ifx_GTM_PSI5OUTSEL_Bits.SEL0 */
#define IFX_GTM_PSI5OUTSEL_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5OUTSEL_Bits.SEL0 */
#define IFX_GTM_PSI5OUTSEL_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5OUTSEL_Bits.SEL0 */
#define IFX_GTM_PSI5OUTSEL_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_PSI5OUTSEL_Bits.SEL1 */
#define IFX_GTM_PSI5OUTSEL_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5OUTSEL_Bits.SEL1 */
#define IFX_GTM_PSI5OUTSEL_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5OUTSEL_Bits.SEL1 */
#define IFX_GTM_PSI5OUTSEL_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_PSI5OUTSEL_Bits.SEL2 */
#define IFX_GTM_PSI5OUTSEL_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5OUTSEL_Bits.SEL2 */
#define IFX_GTM_PSI5OUTSEL_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5OUTSEL_Bits.SEL2 */
#define IFX_GTM_PSI5OUTSEL_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_PSI5OUTSEL_Bits.SEL3 */
#define IFX_GTM_PSI5OUTSEL_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5OUTSEL_Bits.SEL3 */
#define IFX_GTM_PSI5OUTSEL_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5OUTSEL_Bits.SEL3 */
#define IFX_GTM_PSI5OUTSEL_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_PSI5OUTSEL_Bits.SEL4 */
#define IFX_GTM_PSI5OUTSEL_SEL4_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5OUTSEL_Bits.SEL4 */
#define IFX_GTM_PSI5OUTSEL_SEL4_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5OUTSEL_Bits.SEL4 */
#define IFX_GTM_PSI5OUTSEL_SEL4_OFF (16u)

/** \brief Length for Ifx_GTM_PSI5OUTSEL_Bits.SEL5 */
#define IFX_GTM_PSI5OUTSEL_SEL5_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5OUTSEL_Bits.SEL5 */
#define IFX_GTM_PSI5OUTSEL_SEL5_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5OUTSEL_Bits.SEL5 */
#define IFX_GTM_PSI5OUTSEL_SEL5_OFF (20u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL0 */
#define IFX_GTM_PSI5SOUTSEL_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL0 */
#define IFX_GTM_PSI5SOUTSEL_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL0 */
#define IFX_GTM_PSI5SOUTSEL_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL1 */
#define IFX_GTM_PSI5SOUTSEL_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL1 */
#define IFX_GTM_PSI5SOUTSEL_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL1 */
#define IFX_GTM_PSI5SOUTSEL_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL2 */
#define IFX_GTM_PSI5SOUTSEL_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL2 */
#define IFX_GTM_PSI5SOUTSEL_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL2 */
#define IFX_GTM_PSI5SOUTSEL_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL3 */
#define IFX_GTM_PSI5SOUTSEL_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL3 */
#define IFX_GTM_PSI5SOUTSEL_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL3 */
#define IFX_GTM_PSI5SOUTSEL_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL4 */
#define IFX_GTM_PSI5SOUTSEL_SEL4_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL4 */
#define IFX_GTM_PSI5SOUTSEL_SEL4_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL4 */
#define IFX_GTM_PSI5SOUTSEL_SEL4_OFF (16u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL5 */
#define IFX_GTM_PSI5SOUTSEL_SEL5_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL5 */
#define IFX_GTM_PSI5SOUTSEL_SEL5_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL5 */
#define IFX_GTM_PSI5SOUTSEL_SEL5_OFF (20u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL6 */
#define IFX_GTM_PSI5SOUTSEL_SEL6_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL6 */
#define IFX_GTM_PSI5SOUTSEL_SEL6_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL6 */
#define IFX_GTM_PSI5SOUTSEL_SEL6_OFF (24u)

/** \brief Length for Ifx_GTM_PSI5SOUTSEL_Bits.SEL7 */
#define IFX_GTM_PSI5SOUTSEL_SEL7_LEN (4u)

/** \brief Mask for Ifx_GTM_PSI5SOUTSEL_Bits.SEL7 */
#define IFX_GTM_PSI5SOUTSEL_SEL7_MSK (0xfu)

/** \brief Offset for Ifx_GTM_PSI5SOUTSEL_Bits.SEL7 */
#define IFX_GTM_PSI5SOUTSEL_SEL7_OFF (28u)

/** \brief Length for Ifx_GTM_LCDCDCOUTSEL_Bits.SEL */
#define IFX_GTM_LCDCDCOUTSEL_SEL_LEN (4u)

/** \brief Mask for Ifx_GTM_LCDCDCOUTSEL_Bits.SEL */
#define IFX_GTM_LCDCDCOUTSEL_SEL_MSK (0xfu)

/** \brief Offset for Ifx_GTM_LCDCDCOUTSEL_Bits.SEL */
#define IFX_GTM_LCDCDCOUTSEL_SEL_OFF (0u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.ASEL0 */
#define IFX_GTM_DTMAUXINSEL_ASEL0_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.ASEL0 */
#define IFX_GTM_DTMAUXINSEL_ASEL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.ASEL0 */
#define IFX_GTM_DTMAUXINSEL_ASEL0_OFF (0u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.ASEL1 */
#define IFX_GTM_DTMAUXINSEL_ASEL1_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.ASEL1 */
#define IFX_GTM_DTMAUXINSEL_ASEL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.ASEL1 */
#define IFX_GTM_DTMAUXINSEL_ASEL1_OFF (2u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.ASEL2 */
#define IFX_GTM_DTMAUXINSEL_ASEL2_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.ASEL2 */
#define IFX_GTM_DTMAUXINSEL_ASEL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.ASEL2 */
#define IFX_GTM_DTMAUXINSEL_ASEL2_OFF (4u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.ASEL3 */
#define IFX_GTM_DTMAUXINSEL_ASEL3_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.ASEL3 */
#define IFX_GTM_DTMAUXINSEL_ASEL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.ASEL3 */
#define IFX_GTM_DTMAUXINSEL_ASEL3_OFF (6u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.ASEL4 */
#define IFX_GTM_DTMAUXINSEL_ASEL4_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.ASEL4 */
#define IFX_GTM_DTMAUXINSEL_ASEL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.ASEL4 */
#define IFX_GTM_DTMAUXINSEL_ASEL4_OFF (8u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.TSEL0 */
#define IFX_GTM_DTMAUXINSEL_TSEL0_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.TSEL0 */
#define IFX_GTM_DTMAUXINSEL_TSEL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.TSEL0 */
#define IFX_GTM_DTMAUXINSEL_TSEL0_OFF (16u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.TSEL1 */
#define IFX_GTM_DTMAUXINSEL_TSEL1_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.TSEL1 */
#define IFX_GTM_DTMAUXINSEL_TSEL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.TSEL1 */
#define IFX_GTM_DTMAUXINSEL_TSEL1_OFF (18u)

/** \brief Length for Ifx_GTM_DTMAUXINSEL_Bits.TSEL2 */
#define IFX_GTM_DTMAUXINSEL_TSEL2_LEN (2u)

/** \brief Mask for Ifx_GTM_DTMAUXINSEL_Bits.TSEL2 */
#define IFX_GTM_DTMAUXINSEL_TSEL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_DTMAUXINSEL_Bits.TSEL2 */
#define IFX_GTM_DTMAUXINSEL_TSEL2_OFF (20u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL0 */
#define IFX_GTM_CANOUTSEL0_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL0 */
#define IFX_GTM_CANOUTSEL0_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL0 */
#define IFX_GTM_CANOUTSEL0_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL1 */
#define IFX_GTM_CANOUTSEL0_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL1 */
#define IFX_GTM_CANOUTSEL0_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL1 */
#define IFX_GTM_CANOUTSEL0_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL2 */
#define IFX_GTM_CANOUTSEL0_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL2 */
#define IFX_GTM_CANOUTSEL0_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL2 */
#define IFX_GTM_CANOUTSEL0_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL3 */
#define IFX_GTM_CANOUTSEL0_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL3 */
#define IFX_GTM_CANOUTSEL0_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL3 */
#define IFX_GTM_CANOUTSEL0_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL4 */
#define IFX_GTM_CANOUTSEL0_SEL4_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL4 */
#define IFX_GTM_CANOUTSEL0_SEL4_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL4 */
#define IFX_GTM_CANOUTSEL0_SEL4_OFF (16u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL5 */
#define IFX_GTM_CANOUTSEL0_SEL5_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL5 */
#define IFX_GTM_CANOUTSEL0_SEL5_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL5 */
#define IFX_GTM_CANOUTSEL0_SEL5_OFF (20u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL6 */
#define IFX_GTM_CANOUTSEL0_SEL6_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL6 */
#define IFX_GTM_CANOUTSEL0_SEL6_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL6 */
#define IFX_GTM_CANOUTSEL0_SEL6_OFF (24u)

/** \brief Length for Ifx_GTM_CANOUTSEL0_Bits.SEL7 */
#define IFX_GTM_CANOUTSEL0_SEL7_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL0_Bits.SEL7 */
#define IFX_GTM_CANOUTSEL0_SEL7_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL0_Bits.SEL7 */
#define IFX_GTM_CANOUTSEL0_SEL7_OFF (28u)

/** \brief Length for Ifx_GTM_CANOUTSEL1_Bits.SEL0 */
#define IFX_GTM_CANOUTSEL1_SEL0_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL1_Bits.SEL0 */
#define IFX_GTM_CANOUTSEL1_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL1_Bits.SEL0 */
#define IFX_GTM_CANOUTSEL1_SEL0_OFF (0u)

/** \brief Length for Ifx_GTM_CANOUTSEL1_Bits.SEL1 */
#define IFX_GTM_CANOUTSEL1_SEL1_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL1_Bits.SEL1 */
#define IFX_GTM_CANOUTSEL1_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL1_Bits.SEL1 */
#define IFX_GTM_CANOUTSEL1_SEL1_OFF (4u)

/** \brief Length for Ifx_GTM_CANOUTSEL1_Bits.SEL2 */
#define IFX_GTM_CANOUTSEL1_SEL2_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL1_Bits.SEL2 */
#define IFX_GTM_CANOUTSEL1_SEL2_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL1_Bits.SEL2 */
#define IFX_GTM_CANOUTSEL1_SEL2_OFF (8u)

/** \brief Length for Ifx_GTM_CANOUTSEL1_Bits.SEL3 */
#define IFX_GTM_CANOUTSEL1_SEL3_LEN (4u)

/** \brief Mask for Ifx_GTM_CANOUTSEL1_Bits.SEL3 */
#define IFX_GTM_CANOUTSEL1_SEL3_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CANOUTSEL1_Bits.SEL3 */
#define IFX_GTM_CANOUTSEL1_SEL3_OFF (12u)

/** \brief Length for Ifx_GTM_CCM_ARP_CTRL_Bits.ADDR */
#define IFX_GTM_CCM_ARP_CTRL_ADDR_LEN (16u)

/** \brief Mask for Ifx_GTM_CCM_ARP_CTRL_Bits.ADDR */
#define IFX_GTM_CCM_ARP_CTRL_ADDR_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_CCM_ARP_CTRL_Bits.ADDR */
#define IFX_GTM_CCM_ARP_CTRL_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_ARP_CTRL_Bits.SIZE */
#define IFX_GTM_CCM_ARP_CTRL_SIZE_LEN (4u)

/** \brief Mask for Ifx_GTM_CCM_ARP_CTRL_Bits.SIZE */
#define IFX_GTM_CCM_ARP_CTRL_SIZE_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CCM_ARP_CTRL_Bits.SIZE */
#define IFX_GTM_CCM_ARP_CTRL_SIZE_OFF (16u)

/** \brief Length for Ifx_GTM_CCM_ARP_CTRL_Bits.DIS_PROT */
#define IFX_GTM_CCM_ARP_CTRL_DIS_PROT_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_CTRL_Bits.DIS_PROT */
#define IFX_GTM_CCM_ARP_CTRL_DIS_PROT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_CTRL_Bits.DIS_PROT */
#define IFX_GTM_CCM_ARP_CTRL_DIS_PROT_OFF (24u)

/** \brief Length for Ifx_GTM_CCM_ARP_CTRL_Bits.WPROT_AEI */
#define IFX_GTM_CCM_ARP_CTRL_WPROT_AEI_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_CTRL_Bits.WPROT_AEI */
#define IFX_GTM_CCM_ARP_CTRL_WPROT_AEI_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_CTRL_Bits.WPROT_AEI */
#define IFX_GTM_CCM_ARP_CTRL_WPROT_AEI_OFF (31u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT0 */
#define IFX_GTM_CCM_ARP_PROT_WPROT0_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT0 */
#define IFX_GTM_CCM_ARP_PROT_WPROT0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT0 */
#define IFX_GTM_CCM_ARP_PROT_WPROT0_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT1 */
#define IFX_GTM_CCM_ARP_PROT_WPROT1_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT1 */
#define IFX_GTM_CCM_ARP_PROT_WPROT1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT1 */
#define IFX_GTM_CCM_ARP_PROT_WPROT1_OFF (1u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT2 */
#define IFX_GTM_CCM_ARP_PROT_WPROT2_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT2 */
#define IFX_GTM_CCM_ARP_PROT_WPROT2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT2 */
#define IFX_GTM_CCM_ARP_PROT_WPROT2_OFF (2u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT3 */
#define IFX_GTM_CCM_ARP_PROT_WPROT3_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT3 */
#define IFX_GTM_CCM_ARP_PROT_WPROT3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT3 */
#define IFX_GTM_CCM_ARP_PROT_WPROT3_OFF (3u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT4 */
#define IFX_GTM_CCM_ARP_PROT_WPROT4_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT4 */
#define IFX_GTM_CCM_ARP_PROT_WPROT4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT4 */
#define IFX_GTM_CCM_ARP_PROT_WPROT4_OFF (4u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT5 */
#define IFX_GTM_CCM_ARP_PROT_WPROT5_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT5 */
#define IFX_GTM_CCM_ARP_PROT_WPROT5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT5 */
#define IFX_GTM_CCM_ARP_PROT_WPROT5_OFF (5u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT6 */
#define IFX_GTM_CCM_ARP_PROT_WPROT6_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT6 */
#define IFX_GTM_CCM_ARP_PROT_WPROT6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT6 */
#define IFX_GTM_CCM_ARP_PROT_WPROT6_OFF (6u)

/** \brief Length for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT7 */
#define IFX_GTM_CCM_ARP_PROT_WPROT7_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT7 */
#define IFX_GTM_CCM_ARP_PROT_WPROT7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_ARP_PROT_Bits.WPROT7 */
#define IFX_GTM_CCM_ARP_PROT_WPROT7_OFF (7u)

/** \brief Length for Ifx_GTM_CCM_AEIM_STA_Bits.AEIM_XPT_ADDR */
#define IFX_GTM_CCM_AEIM_STA_AEIM_XPT_ADDR_LEN (16u)

/** \brief Mask for Ifx_GTM_CCM_AEIM_STA_Bits.AEIM_XPT_ADDR */
#define IFX_GTM_CCM_AEIM_STA_AEIM_XPT_ADDR_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_CCM_AEIM_STA_Bits.AEIM_XPT_ADDR */
#define IFX_GTM_CCM_AEIM_STA_AEIM_XPT_ADDR_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_AEIM_STA_Bits.AEIM_XPT_STA */
#define IFX_GTM_CCM_AEIM_STA_AEIM_XPT_STA_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_AEIM_STA_Bits.AEIM_XPT_STA */
#define IFX_GTM_CCM_AEIM_STA_AEIM_XPT_STA_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_AEIM_STA_Bits.AEIM_XPT_STA */
#define IFX_GTM_CCM_AEIM_STA_AEIM_XPT_STA_OFF (24u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.GRSTEN */
#define IFX_GTM_CCM_HW_CONF_GRSTEN_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.GRSTEN */
#define IFX_GTM_CCM_HW_CONF_GRSTEN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.GRSTEN */
#define IFX_GTM_CCM_HW_CONF_GRSTEN_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.BRIDGE_MODE_RST */
#define IFX_GTM_CCM_HW_CONF_BRIDGE_MODE_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.BRIDGE_MODE_RST */
#define IFX_GTM_CCM_HW_CONF_BRIDGE_MODE_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.BRIDGE_MODE_RST */
#define IFX_GTM_CCM_HW_CONF_BRIDGE_MODE_RST_OFF (1u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.SYNC_INPUT_REG */
#define IFX_GTM_CCM_HW_CONF_SYNC_INPUT_REG_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.SYNC_INPUT_REG */
#define IFX_GTM_CCM_HW_CONF_SYNC_INPUT_REG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.SYNC_INPUT_REG */
#define IFX_GTM_CCM_HW_CONF_SYNC_INPUT_REG_OFF (2u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.CFG_CLOCK_RATE */
#define IFX_GTM_CCM_HW_CONF_CFG_CLOCK_RATE_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.CFG_CLOCK_RATE */
#define IFX_GTM_CCM_HW_CONF_CFG_CLOCK_RATE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.CFG_CLOCK_RATE */
#define IFX_GTM_CCM_HW_CONF_CFG_CLOCK_RATE_OFF (3u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_OUT_RST */
#define IFX_GTM_CCM_HW_CONF_ATOM_OUT_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_OUT_RST */
#define IFX_GTM_CCM_HW_CONF_ATOM_OUT_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_OUT_RST */
#define IFX_GTM_CCM_HW_CONF_ATOM_OUT_RST_OFF (4u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_TRIG_CHAIN */
#define IFX_GTM_CCM_HW_CONF_ATOM_TRIG_CHAIN_LEN (3u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_TRIG_CHAIN */
#define IFX_GTM_CCM_HW_CONF_ATOM_TRIG_CHAIN_MSK (0x7u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_TRIG_CHAIN */
#define IFX_GTM_CCM_HW_CONF_ATOM_TRIG_CHAIN_OFF (5u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.TOM_OUT_RST */
#define IFX_GTM_CCM_HW_CONF_TOM_OUT_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.TOM_OUT_RST */
#define IFX_GTM_CCM_HW_CONF_TOM_OUT_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.TOM_OUT_RST */
#define IFX_GTM_CCM_HW_CONF_TOM_OUT_RST_OFF (8u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.TOM_TRIG_CHAIN */
#define IFX_GTM_CCM_HW_CONF_TOM_TRIG_CHAIN_LEN (3u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.TOM_TRIG_CHAIN */
#define IFX_GTM_CCM_HW_CONF_TOM_TRIG_CHAIN_MSK (0x7u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.TOM_TRIG_CHAIN */
#define IFX_GTM_CCM_HW_CONF_TOM_TRIG_CHAIN_OFF (9u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.RAM_INIT_RST */
#define IFX_GTM_CCM_HW_CONF_RAM_INIT_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.RAM_INIT_RST */
#define IFX_GTM_CCM_HW_CONF_RAM_INIT_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.RAM_INIT_RST */
#define IFX_GTM_CCM_HW_CONF_RAM_INIT_RST_OFF (12u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.ERM */
#define IFX_GTM_CCM_HW_CONF_ERM_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.ERM */
#define IFX_GTM_CCM_HW_CONF_ERM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.ERM */
#define IFX_GTM_CCM_HW_CONF_ERM_OFF (13u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.ARU_CONNECT_CONFIG */
#define IFX_GTM_CCM_HW_CONF_ARU_CONNECT_CONFIG_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.ARU_CONNECT_CONFIG */
#define IFX_GTM_CCM_HW_CONF_ARU_CONNECT_CONFIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.ARU_CONNECT_CONFIG */
#define IFX_GTM_CCM_HW_CONF_ARU_CONNECT_CONFIG_OFF (14u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_LEVEL */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_LEVEL_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_LEVEL */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_LEVEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_LEVEL */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_LEVEL_OFF (16u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_PULSE */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_PULSE_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_PULSE */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_PULSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_PULSE */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_PULSE_OFF (17u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_PULSE_NOTIFY */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_PULSE_NOTIFY_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_PULSE_NOTIFY */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_PULSE_NOTIFY_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_PULSE_NOTIFY */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_PULSE_NOTIFY_OFF (18u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_SINGLE_PULSE */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_SINGLE_PULSE_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_SINGLE_PULSE */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_SINGLE_PULSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.IRQ_MODE_SINGLE_PULSE */
#define IFX_GTM_CCM_HW_CONF_IRQ_MODE_SINGLE_PULSE_OFF (19u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_TRIG_INTCHAIN */
#define IFX_GTM_CCM_HW_CONF_ATOM_TRIG_INTCHAIN_LEN (4u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_TRIG_INTCHAIN */
#define IFX_GTM_CCM_HW_CONF_ATOM_TRIG_INTCHAIN_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.ATOM_TRIG_INTCHAIN */
#define IFX_GTM_CCM_HW_CONF_ATOM_TRIG_INTCHAIN_OFF (20u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.TOM_TRIG_INTCHAIN */
#define IFX_GTM_CCM_HW_CONF_TOM_TRIG_INTCHAIN_LEN (5u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.TOM_TRIG_INTCHAIN */
#define IFX_GTM_CCM_HW_CONF_TOM_TRIG_INTCHAIN_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.TOM_TRIG_INTCHAIN */
#define IFX_GTM_CCM_HW_CONF_TOM_TRIG_INTCHAIN_OFF (24u)

/** \brief Length for Ifx_GTM_CCM_HW_CONF_Bits.INT_CLK_EN_GEN */
#define IFX_GTM_CCM_HW_CONF_INT_CLK_EN_GEN_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_HW_CONF_Bits.INT_CLK_EN_GEN */
#define IFX_GTM_CCM_HW_CONF_INT_CLK_EN_GEN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_HW_CONF_Bits.INT_CLK_EN_GEN */
#define IFX_GTM_CCM_HW_CONF_INT_CLK_EN_GEN_OFF (29u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH0 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH0_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH0 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH0 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH0_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH1 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH1_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH1 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH1 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH1_OFF (1u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH2 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH2 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH2 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH2_OFF (2u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH3 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH3_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH3 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH3 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH3_OFF (3u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH4 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH4_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH4 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH4 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH4_OFF (4u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH5 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH5_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH5 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH5 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH5_OFF (5u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH6 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH6_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH6 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH6 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH6_OFF (6u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH7 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH7_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH7 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SRC_CH7 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SRC_CH7_OFF (7u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH0 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH0_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH0 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH0 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH0_OFF (16u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH1 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH1_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH1 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH1 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH1_OFF (17u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH2 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH2 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH2 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH2_OFF (18u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH3 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH3_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH3 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH3 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH3_OFF (19u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH4 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH4_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH4 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH4 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH4_OFF (20u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH5 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH5_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH5 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH5 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH5_OFF (21u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH6 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH6_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH6 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH6 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH6_OFF (22u)

/** \brief Length for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH7 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH7_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH7 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits.SEL_OUT_N_CH7 */
#define IFX_GTM_CCM_TIM_AUX_IN_SRC_SEL_OUT_N_CH7_OFF (23u)

/** \brief Length for Ifx_GTM_CCM_EXT_CAP_EN_Bits.TIM_I_EXT_CAP_EN */
#define IFX_GTM_CCM_EXT_CAP_EN_TIM_I_EXT_CAP_EN_LEN (8u)

/** \brief Mask for Ifx_GTM_CCM_EXT_CAP_EN_Bits.TIM_I_EXT_CAP_EN */
#define IFX_GTM_CCM_EXT_CAP_EN_TIM_I_EXT_CAP_EN_MSK (0xffu)

/** \brief Offset for Ifx_GTM_CCM_EXT_CAP_EN_Bits.TIM_I_EXT_CAP_EN */
#define IFX_GTM_CCM_EXT_CAP_EN_TIM_I_EXT_CAP_EN_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_EXT_CAP_EN_Bits.TIM_IP1_EXT_CAP_EN */
#define IFX_GTM_CCM_EXT_CAP_EN_TIM_IP1_EXT_CAP_EN_LEN (8u)

/** \brief Mask for Ifx_GTM_CCM_EXT_CAP_EN_Bits.TIM_IP1_EXT_CAP_EN */
#define IFX_GTM_CCM_EXT_CAP_EN_TIM_IP1_EXT_CAP_EN_MSK (0xffu)

/** \brief Offset for Ifx_GTM_CCM_EXT_CAP_EN_Bits.TIM_IP1_EXT_CAP_EN */
#define IFX_GTM_CCM_EXT_CAP_EN_TIM_IP1_EXT_CAP_EN_OFF (8u)

/** \brief Length for Ifx_GTM_CCM_TOM_OUT_Bits.TOM_OUT */
#define IFX_GTM_CCM_TOM_OUT_TOM_OUT_LEN (16u)

/** \brief Mask for Ifx_GTM_CCM_TOM_OUT_Bits.TOM_OUT */
#define IFX_GTM_CCM_TOM_OUT_TOM_OUT_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_CCM_TOM_OUT_Bits.TOM_OUT */
#define IFX_GTM_CCM_TOM_OUT_TOM_OUT_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_TOM_OUT_Bits.TOM_OUT_N */
#define IFX_GTM_CCM_TOM_OUT_TOM_OUT_N_LEN (16u)

/** \brief Mask for Ifx_GTM_CCM_TOM_OUT_Bits.TOM_OUT_N */
#define IFX_GTM_CCM_TOM_OUT_TOM_OUT_N_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_CCM_TOM_OUT_Bits.TOM_OUT_N */
#define IFX_GTM_CCM_TOM_OUT_TOM_OUT_N_OFF (16u)

/** \brief Length for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_I_OUT */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_I_OUT_LEN (8u)

/** \brief Mask for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_I_OUT */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_I_OUT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_I_OUT */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_I_OUT_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_I_OUT_N */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_I_OUT_N_LEN (8u)

/** \brief Mask for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_I_OUT_N */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_I_OUT_N_MSK (0xffu)

/** \brief Offset for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_I_OUT_N */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_I_OUT_N_OFF (8u)

/** \brief Length for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_IP1_OUT */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_IP1_OUT_LEN (8u)

/** \brief Mask for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_IP1_OUT */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_IP1_OUT_MSK (0xffu)

/** \brief Offset for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_IP1_OUT */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_IP1_OUT_OFF (16u)

/** \brief Length for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_IP1_OUT_N */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_IP1_OUT_N_LEN (8u)

/** \brief Mask for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_IP1_OUT_N */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_IP1_OUT_N_MSK (0xffu)

/** \brief Offset for Ifx_GTM_CCM_ATOM_OUT_Bits.ATOM_IP1_OUT_N */
#define IFX_GTM_CCM_ATOM_OUT_ATOM_IP1_OUT_N_OFF (24u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK0_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK0_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK0_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK0_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK0_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK0_SRC_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK1_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK1_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK1_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK1_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK1_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK1_SRC_OFF (4u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK2_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK2_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK2_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK2_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK2_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK2_SRC_OFF (8u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK3_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK3_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK3_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK3_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK3_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK3_SRC_OFF (12u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK4_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK4_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK4_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK4_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK4_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK4_SRC_OFF (16u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK5_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK5_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK5_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK5_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK5_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK5_SRC_OFF (20u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK6_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK6_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK6_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK6_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK6_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK6_SRC_OFF (24u)

/** \brief Length for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK7_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK7_SRC_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK7_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK7_SRC_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CMU_CLK_CFG_Bits.CLK7_SRC */
#define IFX_GTM_CCM_CMU_CLK_CFG_CLK7_SRC_OFF (28u)

/** \brief Length for Ifx_GTM_CCM_CMU_FXCLK_CFG_Bits.FXCLK0_SRC */
#define IFX_GTM_CCM_CMU_FXCLK_CFG_FXCLK0_SRC_LEN (4u)

/** \brief Mask for Ifx_GTM_CCM_CMU_FXCLK_CFG_Bits.FXCLK0_SRC */
#define IFX_GTM_CCM_CMU_FXCLK_CFG_FXCLK0_SRC_MSK (0xfu)

/** \brief Offset for Ifx_GTM_CCM_CMU_FXCLK_CFG_Bits.FXCLK0_SRC */
#define IFX_GTM_CCM_CMU_FXCLK_CFG_FXCLK0_SRC_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_TIM */
#define IFX_GTM_CCM_CFG_EN_TIM_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_TIM */
#define IFX_GTM_CCM_CFG_EN_TIM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_TIM */
#define IFX_GTM_CCM_CFG_EN_TIM_OFF (0u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_TOM_SPE_TDTM */
#define IFX_GTM_CCM_CFG_EN_TOM_SPE_TDTM_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_TOM_SPE_TDTM */
#define IFX_GTM_CCM_CFG_EN_TOM_SPE_TDTM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_TOM_SPE_TDTM */
#define IFX_GTM_CCM_CFG_EN_TOM_SPE_TDTM_OFF (1u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_ATOM_ADTM */
#define IFX_GTM_CCM_CFG_EN_ATOM_ADTM_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_ATOM_ADTM */
#define IFX_GTM_CCM_CFG_EN_ATOM_ADTM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_ATOM_ADTM */
#define IFX_GTM_CCM_CFG_EN_ATOM_ADTM_OFF (2u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_MCS */
#define IFX_GTM_CCM_CFG_EN_MCS_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_MCS */
#define IFX_GTM_CCM_CFG_EN_MCS_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_MCS */
#define IFX_GTM_CCM_CFG_EN_MCS_OFF (3u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_DPLL_MAP */
#define IFX_GTM_CCM_CFG_EN_DPLL_MAP_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_DPLL_MAP */
#define IFX_GTM_CCM_CFG_EN_DPLL_MAP_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_DPLL_MAP */
#define IFX_GTM_CCM_CFG_EN_DPLL_MAP_OFF (4u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_BRC */
#define IFX_GTM_CCM_CFG_EN_BRC_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_BRC */
#define IFX_GTM_CCM_CFG_EN_BRC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_BRC */
#define IFX_GTM_CCM_CFG_EN_BRC_OFF (5u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_PSM */
#define IFX_GTM_CCM_CFG_EN_PSM_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_PSM */
#define IFX_GTM_CCM_CFG_EN_PSM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_PSM */
#define IFX_GTM_CCM_CFG_EN_PSM_OFF (6u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.EN_CMP_MON */
#define IFX_GTM_CCM_CFG_EN_CMP_MON_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.EN_CMP_MON */
#define IFX_GTM_CCM_CFG_EN_CMP_MON_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.EN_CMP_MON */
#define IFX_GTM_CCM_CFG_EN_CMP_MON_OFF (7u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.CLS_CLK_DIV */
#define IFX_GTM_CCM_CFG_CLS_CLK_DIV_LEN (2u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.CLS_CLK_DIV */
#define IFX_GTM_CCM_CFG_CLS_CLK_DIV_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.CLS_CLK_DIV */
#define IFX_GTM_CCM_CFG_CLS_CLK_DIV_OFF (16u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.TBU_DIR1 */
#define IFX_GTM_CCM_CFG_TBU_DIR1_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.TBU_DIR1 */
#define IFX_GTM_CCM_CFG_TBU_DIR1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.TBU_DIR1 */
#define IFX_GTM_CCM_CFG_TBU_DIR1_OFF (30u)

/** \brief Length for Ifx_GTM_CCM_CFG_Bits.TBU_DIR2 */
#define IFX_GTM_CCM_CFG_TBU_DIR2_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_CFG_Bits.TBU_DIR2 */
#define IFX_GTM_CCM_CFG_TBU_DIR2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_CFG_Bits.TBU_DIR2 */
#define IFX_GTM_CCM_CFG_TBU_DIR2_OFF (31u)

/** \brief Length for Ifx_GTM_CCM_PROT_Bits.CLS_PROT */
#define IFX_GTM_CCM_PROT_CLS_PROT_LEN (1u)

/** \brief Mask for Ifx_GTM_CCM_PROT_Bits.CLS_PROT */
#define IFX_GTM_CCM_PROT_CLS_PROT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CCM_PROT_Bits.CLS_PROT */
#define IFX_GTM_CCM_PROT_CLS_PROT_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CTRL_Bits.CLK_SEL */
#define IFX_GTM_CDTM_DTM_CTRL_CLK_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CTRL_Bits.CLK_SEL */
#define IFX_GTM_CDTM_DTM_CTRL_CLK_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CTRL_Bits.CLK_SEL */
#define IFX_GTM_CDTM_DTM_CTRL_CLK_SEL_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CTRL_Bits.DTM_SEL */
#define IFX_GTM_CDTM_DTM_CTRL_DTM_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CTRL_Bits.DTM_SEL */
#define IFX_GTM_CDTM_DTM_CTRL_DTM_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CTRL_Bits.DTM_SEL */
#define IFX_GTM_CDTM_DTM_CTRL_DTM_SEL_OFF (2u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CTRL_Bits.UPD_MODE */
#define IFX_GTM_CDTM_DTM_CTRL_UPD_MODE_LEN (3u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CTRL_Bits.UPD_MODE */
#define IFX_GTM_CDTM_DTM_CTRL_UPD_MODE_MSK (0x7u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CTRL_Bits.UPD_MODE */
#define IFX_GTM_CDTM_DTM_CTRL_UPD_MODE_OFF (4u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CTRL_Bits.SR_UPD_EN */
#define IFX_GTM_CDTM_DTM_CTRL_SR_UPD_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CTRL_Bits.SR_UPD_EN */
#define IFX_GTM_CDTM_DTM_CTRL_SR_UPD_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CTRL_Bits.SR_UPD_EN */
#define IFX_GTM_CDTM_DTM_CTRL_SR_UPD_EN_OFF (8u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CTRL_Bits.SHUT_OFF_RST */
#define IFX_GTM_CDTM_DTM_CTRL_SHUT_OFF_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CTRL_Bits.SHUT_OFF_RST */
#define IFX_GTM_CDTM_DTM_CTRL_SHUT_OFF_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CTRL_Bits.SHUT_OFF_RST */
#define IFX_GTM_CDTM_DTM_CTRL_SHUT_OFF_RST_OFF (16u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_0_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_0_OFF (1u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_0_OFF (3u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_0_LEN (2u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_0_OFF (4u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.XDT_EN_0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_XDT_EN_0_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.XDT_EN_0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_XDT_EN_0_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.XDT_EN_0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_XDT_EN_0_1_OFF (6u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_1_OFF (8u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_1_OFF (9u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_1_OFF (10u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_1_OFF (11u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_1_LEN (2u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_1_OFF (12u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_2_OFF (16u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_2_OFF (17u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_2_OFF (18u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_2_OFF (19u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_2_LEN (2u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_2_OFF (20u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.XDT_EN_2_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_XDT_EN_2_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.XDT_EN_2_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_XDT_EN_2_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.XDT_EN_2_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_XDT_EN_2_3_OFF (22u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1SEL_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1SEL_3_OFF (24u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.I1SEL_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_I1SEL_3_OFF (25u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SH_EN_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SH_EN_3_OFF (26u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.SWAP_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_SWAP_3_OFF (27u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_3_LEN (2u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits.O1F_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL1_O1F_3_OFF (28u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_0_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_0_OFF (1u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_0_OFF (2u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_0_OFF (3u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_0_OFF (4u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_0_OFF (5u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_0_OFF (6u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_0_OFF (7u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_1_OFF (8u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_1_OFF (9u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_1_OFF (10u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_1_OFF (11u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_1_OFF (12u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_1_OFF (13u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_1_OFF (14u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_1_OFF (15u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_2_OFF (16u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_2_OFF (17u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_2_OFF (18u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_2_OFF (19u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_2_OFF (20u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_2_OFF (21u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_2_OFF (22u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_2_OFF (23u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL0_3_OFF (24u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC0_3_OFF (25u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL0_3_OFF (26u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT0_3_OFF (27u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.POL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_POL1_3_OFF (28u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.OC1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_OC1_3_OFF (29u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.SL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SL1_3_OFF (30u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits.DT1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_DT1_3_OFF (31u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_0_SR_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_0_SR_OFF (1u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_0_SR_OFF (2u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_0_SR_OFF (3u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_0_SR_OFF (4u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_0_SR_OFF (5u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_0_SR_OFF (6u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_0_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_0_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_0_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_0_SR_OFF (7u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_1_SR_OFF (8u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_1_SR_OFF (9u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_1_SR_OFF (10u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_1_SR_OFF (11u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_1_SR_OFF (12u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_1_SR_OFF (13u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_1_SR_OFF (14u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_1_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_1_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_1_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_1_SR_OFF (15u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_2_SR_OFF (16u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_2_SR_OFF (17u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_2_SR_OFF (18u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_2_SR_OFF (19u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_2_SR_OFF (20u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_2_SR_OFF (21u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_2_SR_OFF (22u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_2_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_2_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_2_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_2_SR_OFF (23u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL0_3_SR_OFF (24u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC0_3_SR_OFF (25u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL0_3_SR_OFF (26u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT0_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT0_3_SR_OFF (27u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.POL1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_POL1_3_SR_OFF (28u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.OC1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_OC1_3_SR_OFF (29u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.SL1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_SL1_3_SR_OFF (30u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_3_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_3_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits.DT1_3_SR */
#define IFX_GTM_CDTM_DTM_CH_CTRL2_SR_DT1_3_SR_OFF (31u)

/** \brief Length for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.RELBLK */
#define IFX_GTM_CDTM_DTM_PS_CTRL_RELBLK_LEN (10u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.RELBLK */
#define IFX_GTM_CDTM_DTM_PS_CTRL_RELBLK_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.RELBLK */
#define IFX_GTM_CDTM_DTM_PS_CTRL_RELBLK_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.PSU_IN_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_PSU_IN_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.PSU_IN_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_PSU_IN_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.PSU_IN_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_PSU_IN_SEL_OFF (16u)

/** \brief Length for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.IN_POL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_IN_POL_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.IN_POL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_IN_POL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.IN_POL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_IN_POL_OFF (17u)

/** \brief Length for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.TIM_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_TIM_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.TIM_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_TIM_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.TIM_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_TIM_SEL_OFF (18u)

/** \brief Length for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.SHIFT_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_SHIFT_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.SHIFT_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_SHIFT_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_PS_CTRL_Bits.SHIFT_SEL */
#define IFX_GTM_CDTM_DTM_PS_CTRL_SHIFT_SEL_OFF (20u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_DTV_Bits.RELRISE */
#define IFX_GTM_CDTM_DTM_CH_DTV_RELRISE_LEN (10u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_DTV_Bits.RELRISE */
#define IFX_GTM_CDTM_DTM_CH_DTV_RELRISE_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_DTV_Bits.RELRISE */
#define IFX_GTM_CDTM_DTM_CH_DTV_RELRISE_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_DTV_Bits.RELFALL */
#define IFX_GTM_CDTM_DTM_CH_DTV_RELFALL_LEN (10u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_DTV_Bits.RELFALL */
#define IFX_GTM_CDTM_DTM_CH_DTV_RELFALL_MSK (0x3ffu)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_DTV_Bits.RELFALL */
#define IFX_GTM_CDTM_DTM_CH_DTV_RELFALL_OFF (16u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_0_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_0_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_0_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_0_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_0_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_0_SR_SR_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_0_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_0_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_0_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_0_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_0_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_0_SR_SR_OFF (1u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_1_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_1_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_1_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_1_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_1_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_1_SR_SR_OFF (2u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_1_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_1_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_1_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_1_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_1_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_1_SR_SR_OFF (3u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_2_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_2_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_2_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_2_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_2_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_2_SR_SR_OFF (4u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_2_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_2_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_2_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_2_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_2_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_2_SR_SR_OFF (5u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_3_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_3_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_3_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_3_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL0_3_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL0_3_SR_SR_OFF (6u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_3_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_3_SR_SR_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_3_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_3_SR_SR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_SR_Bits.SL1_3_SR_SR */
#define IFX_GTM_CDTM_DTM_CH_SR_SL1_3_SR_SR_OFF (7u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII0_OFF (0u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS0_OFF (1u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_0_OFF (2u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_0_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_0 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_0_OFF (3u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII1_OFF (8u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS1_OFF (9u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_1_OFF (10u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_1_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_1 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_1_OFF (11u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII2_OFF (16u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS2_OFF (17u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_2_OFF (18u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_2_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_2 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_2_OFF (19u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CII3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CII3_OFF (24u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.CIS3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_CIS3_OFF (25u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL0_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL0_3_OFF (26u)

/** \brief Length for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_3_LEN (1u)

/** \brief Mask for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits.TSEL1_3 */
#define IFX_GTM_CDTM_DTM_CH_CTRL3_TSEL1_3_OFF (27u)

/** \brief Length for Ifx_GTM_ATOM_CH_RDADDR_Bits.RDADDR0 */
#define IFX_GTM_ATOM_CH_RDADDR_RDADDR0_LEN (9u)

/** \brief Mask for Ifx_GTM_ATOM_CH_RDADDR_Bits.RDADDR0 */
#define IFX_GTM_ATOM_CH_RDADDR_RDADDR0_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_ATOM_CH_RDADDR_Bits.RDADDR0 */
#define IFX_GTM_ATOM_CH_RDADDR_RDADDR0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_RDADDR_Bits.RDADDR1 */
#define IFX_GTM_ATOM_CH_RDADDR_RDADDR1_LEN (9u)

/** \brief Mask for Ifx_GTM_ATOM_CH_RDADDR_Bits.RDADDR1 */
#define IFX_GTM_ATOM_CH_RDADDR_RDADDR1_MSK (0x1ffu)

/** \brief Offset for Ifx_GTM_ATOM_CH_RDADDR_Bits.RDADDR1 */
#define IFX_GTM_ATOM_CH_RDADDR_RDADDR1_OFF (16u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.MODE */
#define IFX_GTM_ATOM_CH_CTRL_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.MODE */
#define IFX_GTM_ATOM_CH_CTRL_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.MODE */
#define IFX_GTM_ATOM_CH_CTRL_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_CTRL_TB12_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_CTRL_TB12_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_CTRL_TB12_SEL_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_CTRL_ARU_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_CTRL_ARU_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_CTRL_ARU_EN_OFF (3u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.ACB */
#define IFX_GTM_ATOM_CH_CTRL_ACB_LEN (5u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.ACB */
#define IFX_GTM_ATOM_CH_CTRL_ACB_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.ACB */
#define IFX_GTM_ATOM_CH_CTRL_ACB_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_CTRL_CMP_CTRL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_CTRL_CMP_CTRL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_CTRL_CMP_CTRL_OFF (9u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.EUPM */
#define IFX_GTM_ATOM_CH_CTRL_EUPM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.EUPM */
#define IFX_GTM_ATOM_CH_CTRL_EUPM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.EUPM */
#define IFX_GTM_ATOM_CH_CTRL_EUPM_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.SL */
#define IFX_GTM_ATOM_CH_CTRL_SL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.SL */
#define IFX_GTM_ATOM_CH_CTRL_SL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.SL */
#define IFX_GTM_ATOM_CH_CTRL_SL_OFF (11u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_CTRL_CLK_SRC_SR_LEN (3u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_CTRL_CLK_SRC_SR_MSK (0x7u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_CTRL_CLK_SRC_SR_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_CTRL_ECLK_SRC_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_CTRL_ECLK_SRC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_CTRL_ECLK_SRC_OFF (15u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_CTRL_WR_REQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_CTRL_WR_REQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_CTRL_WR_REQ_OFF (16u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.TRIG_PULSE */
#define IFX_GTM_ATOM_CH_CTRL_TRIG_PULSE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.TRIG_PULSE */
#define IFX_GTM_ATOM_CH_CTRL_TRIG_PULSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.TRIG_PULSE */
#define IFX_GTM_ATOM_CH_CTRL_TRIG_PULSE_OFF (17u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.UDMODE */
#define IFX_GTM_ATOM_CH_CTRL_UDMODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.UDMODE */
#define IFX_GTM_ATOM_CH_CTRL_UDMODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.UDMODE */
#define IFX_GTM_ATOM_CH_CTRL_UDMODE_OFF (18u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.RST_CCU0 */
#define IFX_GTM_ATOM_CH_CTRL_RST_CCU0_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.RST_CCU0 */
#define IFX_GTM_ATOM_CH_CTRL_RST_CCU0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.RST_CCU0 */
#define IFX_GTM_ATOM_CH_CTRL_RST_CCU0_OFF (20u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.OSM_TRIG */
#define IFX_GTM_ATOM_CH_CTRL_OSM_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.OSM_TRIG */
#define IFX_GTM_ATOM_CH_CTRL_OSM_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.OSM_TRIG */
#define IFX_GTM_ATOM_CH_CTRL_OSM_TRIG_OFF (21u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.EXT_TRIG */
#define IFX_GTM_ATOM_CH_CTRL_EXT_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.EXT_TRIG */
#define IFX_GTM_ATOM_CH_CTRL_EXT_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.EXT_TRIG */
#define IFX_GTM_ATOM_CH_CTRL_EXT_TRIG_OFF (22u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_CTRL_EXTTRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_CTRL_EXTTRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_CTRL_EXTTRIGOUT_OFF (23u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_CTRL_TRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_CTRL_TRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_CTRL_TRIGOUT_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.SLA */
#define IFX_GTM_ATOM_CH_CTRL_SLA_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.SLA */
#define IFX_GTM_ATOM_CH_CTRL_SLA_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.SLA */
#define IFX_GTM_ATOM_CH_CTRL_SLA_OFF (25u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.OSM */
#define IFX_GTM_ATOM_CH_CTRL_OSM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.OSM */
#define IFX_GTM_ATOM_CH_CTRL_OSM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.OSM */
#define IFX_GTM_ATOM_CH_CTRL_OSM_OFF (26u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.ABM */
#define IFX_GTM_ATOM_CH_CTRL_ABM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.ABM */
#define IFX_GTM_ATOM_CH_CTRL_ABM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.ABM */
#define IFX_GTM_ATOM_CH_CTRL_ABM_OFF (27u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_CTRL_EXT_FUPD_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_CTRL_EXT_FUPD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_CTRL_EXT_FUPD_OFF (29u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.SOMB */
#define IFX_GTM_ATOM_CH_CTRL_SOMB_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.SOMB */
#define IFX_GTM_ATOM_CH_CTRL_SOMB_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.SOMB */
#define IFX_GTM_ATOM_CH_CTRL_SOMB_OFF (30u)

/** \brief Length for Ifx_GTM_ATOM_CH_CTRL_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_CTRL_FREEZE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CTRL_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_CTRL_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_CTRL_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_CTRL_FREEZE_OFF (31u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMB_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMB_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMB_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_SOMB_TB12_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_SOMB_TB12_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_SOMB_TB12_SEL_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMB_ARU_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMB_ARU_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMB_ARU_EN_OFF (3u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.ACB_1_0 */
#define IFX_GTM_ATOM_CH_SOMB_ACB_1_0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.ACB_1_0 */
#define IFX_GTM_ATOM_CH_SOMB_ACB_1_0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.ACB_1_0 */
#define IFX_GTM_ATOM_CH_SOMB_ACB_1_0_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.ACB_4_3_2 */
#define IFX_GTM_ATOM_CH_SOMB_ACB_4_3_2_LEN (3u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.ACB_4_3_2 */
#define IFX_GTM_ATOM_CH_SOMB_ACB_4_3_2_MSK (0x7u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.ACB_4_3_2 */
#define IFX_GTM_ATOM_CH_SOMB_ACB_4_3_2_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_SOMB_CMP_CTRL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_SOMB_CMP_CTRL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_SOMB_CMP_CTRL_OFF (9u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.EUPM */
#define IFX_GTM_ATOM_CH_SOMB_EUPM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.EUPM */
#define IFX_GTM_ATOM_CH_SOMB_EUPM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.EUPM */
#define IFX_GTM_ATOM_CH_SOMB_EUPM_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMB_SL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMB_SL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMB_SL_OFF (11u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_SOMB_WR_REQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_SOMB_WR_REQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_SOMB_WR_REQ_OFF (16u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMB_EXTTRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMB_EXTTRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMB_EXTTRIGOUT_OFF (23u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMB_TRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMB_TRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMB_TRIGOUT_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.ABM */
#define IFX_GTM_ATOM_CH_SOMB_ABM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.ABM */
#define IFX_GTM_ATOM_CH_SOMB_ABM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.ABM */
#define IFX_GTM_ATOM_CH_SOMB_ABM_OFF (27u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.SOMB */
#define IFX_GTM_ATOM_CH_SOMB_SOMB_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.SOMB */
#define IFX_GTM_ATOM_CH_SOMB_SOMB_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.SOMB */
#define IFX_GTM_ATOM_CH_SOMB_SOMB_OFF (30u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMB_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMB_FREEZE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMB_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMB_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMB_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMB_FREEZE_OFF (31u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMC_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMC_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMC_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_SOMC_TB12_SEL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_SOMC_TB12_SEL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.TB12_SEL */
#define IFX_GTM_ATOM_CH_SOMC_TB12_SEL_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMC_ARU_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMC_ARU_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMC_ARU_EN_OFF (3u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.ACB_1_0 */
#define IFX_GTM_ATOM_CH_SOMC_ACB_1_0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.ACB_1_0 */
#define IFX_GTM_ATOM_CH_SOMC_ACB_1_0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.ACB_1_0 */
#define IFX_GTM_ATOM_CH_SOMC_ACB_1_0_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.ACB_4_3_2 */
#define IFX_GTM_ATOM_CH_SOMC_ACB_4_3_2_LEN (3u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.ACB_4_3_2 */
#define IFX_GTM_ATOM_CH_SOMC_ACB_4_3_2_MSK (0x7u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.ACB_4_3_2 */
#define IFX_GTM_ATOM_CH_SOMC_ACB_4_3_2_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_SOMC_CMP_CTRL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_SOMC_CMP_CTRL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.CMP_CTRL */
#define IFX_GTM_ATOM_CH_SOMC_CMP_CTRL_OFF (9u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.EUPM */
#define IFX_GTM_ATOM_CH_SOMC_EUPM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.EUPM */
#define IFX_GTM_ATOM_CH_SOMC_EUPM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.EUPM */
#define IFX_GTM_ATOM_CH_SOMC_EUPM_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMC_SL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMC_SL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMC_SL_OFF (11u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_SOMC_WR_REQ_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_SOMC_WR_REQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.WR_REQ */
#define IFX_GTM_ATOM_CH_SOMC_WR_REQ_OFF (16u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMC_EXTTRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMC_EXTTRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMC_EXTTRIGOUT_OFF (23u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMC_TRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMC_TRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMC_TRIGOUT_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.SLA */
#define IFX_GTM_ATOM_CH_SOMC_SLA_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.SLA */
#define IFX_GTM_ATOM_CH_SOMC_SLA_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.SLA */
#define IFX_GTM_ATOM_CH_SOMC_SLA_OFF (25u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.ABM */
#define IFX_GTM_ATOM_CH_SOMC_ABM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.ABM */
#define IFX_GTM_ATOM_CH_SOMC_ABM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.ABM */
#define IFX_GTM_ATOM_CH_SOMC_ABM_OFF (27u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMC_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMC_FREEZE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMC_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMC_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMC_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMC_FREEZE_OFF (31u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMI_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMI_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMI_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMI_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMI_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMI_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMI_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMI_ARU_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMI_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMI_ARU_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMI_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMI_ARU_EN_OFF (3u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMI_Bits.ACB0 */
#define IFX_GTM_ATOM_CH_SOMI_ACB0_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMI_Bits.ACB0 */
#define IFX_GTM_ATOM_CH_SOMI_ACB0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMI_Bits.ACB0 */
#define IFX_GTM_ATOM_CH_SOMI_ACB0_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMI_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMI_SL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMI_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMI_SL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMI_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMI_SL_OFF (11u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMI_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMI_FREEZE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMI_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMI_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMI_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMI_FREEZE_OFF (31u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMP_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMP_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMP_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMP_ARU_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMP_ARU_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMP_ARU_EN_OFF (3u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.ADL */
#define IFX_GTM_ATOM_CH_SOMP_ADL_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.ADL */
#define IFX_GTM_ATOM_CH_SOMP_ADL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.ADL */
#define IFX_GTM_ATOM_CH_SOMP_ADL_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.BITREV */
#define IFX_GTM_ATOM_CH_SOMP_BITREV_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.BITREV */
#define IFX_GTM_ATOM_CH_SOMP_BITREV_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.BITREV */
#define IFX_GTM_ATOM_CH_SOMP_BITREV_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.SR0_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_SR0_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.SR0_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_SR0_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.SR0_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_SR0_TRIG_OFF (7u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMP_SL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMP_SL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMP_SL_OFF (11u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_SOMP_CLK_SRC_SR_LEN (3u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_SOMP_CLK_SRC_SR_MSK (0x7u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_SOMP_CLK_SRC_SR_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_SOMP_ECLK_SRC_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_SOMP_ECLK_SRC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_SOMP_ECLK_SRC_OFF (15u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.TRIG_PULSE */
#define IFX_GTM_ATOM_CH_SOMP_TRIG_PULSE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.TRIG_PULSE */
#define IFX_GTM_ATOM_CH_SOMP_TRIG_PULSE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.TRIG_PULSE */
#define IFX_GTM_ATOM_CH_SOMP_TRIG_PULSE_OFF (17u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.UDMODE */
#define IFX_GTM_ATOM_CH_SOMP_UDMODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.UDMODE */
#define IFX_GTM_ATOM_CH_SOMP_UDMODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.UDMODE */
#define IFX_GTM_ATOM_CH_SOMP_UDMODE_OFF (18u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.RST_CCU0 */
#define IFX_GTM_ATOM_CH_SOMP_RST_CCU0_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.RST_CCU0 */
#define IFX_GTM_ATOM_CH_SOMP_RST_CCU0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.RST_CCU0 */
#define IFX_GTM_ATOM_CH_SOMP_RST_CCU0_OFF (20u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.OSM_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_OSM_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.OSM_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_OSM_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.OSM_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_OSM_TRIG_OFF (21u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.EXT_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_EXT_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.EXT_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_EXT_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.EXT_TRIG */
#define IFX_GTM_ATOM_CH_SOMP_EXT_TRIG_OFF (22u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMP_EXTTRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMP_EXTTRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.EXTTRIGOUT */
#define IFX_GTM_ATOM_CH_SOMP_EXTTRIGOUT_OFF (23u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMP_TRIGOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMP_TRIGOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.TRIGOUT */
#define IFX_GTM_ATOM_CH_SOMP_TRIGOUT_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.OSM */
#define IFX_GTM_ATOM_CH_SOMP_OSM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.OSM */
#define IFX_GTM_ATOM_CH_SOMP_OSM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.OSM */
#define IFX_GTM_ATOM_CH_SOMP_OSM_OFF (26u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_SOMP_EXT_FUPD_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_SOMP_EXT_FUPD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_SOMP_EXT_FUPD_OFF (29u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMP_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMP_FREEZE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMP_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMP_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMP_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMP_FREEZE_OFF (31u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMS_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMS_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.MODE */
#define IFX_GTM_ATOM_CH_SOMS_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMS_ARU_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMS_ARU_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.ARU_EN */
#define IFX_GTM_ATOM_CH_SOMS_ARU_EN_OFF (3u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.ACB0 */
#define IFX_GTM_ATOM_CH_SOMS_ACB0_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.ACB0 */
#define IFX_GTM_ATOM_CH_SOMS_ACB0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.ACB0 */
#define IFX_GTM_ATOM_CH_SOMS_ACB0_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.DSO */
#define IFX_GTM_ATOM_CH_SOMS_DSO_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.DSO */
#define IFX_GTM_ATOM_CH_SOMS_DSO_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.DSO */
#define IFX_GTM_ATOM_CH_SOMS_DSO_OFF (7u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMS_SL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMS_SL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.SL */
#define IFX_GTM_ATOM_CH_SOMS_SL_OFF (11u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_SOMS_CLK_SRC_SR_LEN (3u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_SOMS_CLK_SRC_SR_MSK (0x7u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.CLK_SRC_SR */
#define IFX_GTM_ATOM_CH_SOMS_CLK_SRC_SR_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_SOMS_ECLK_SRC_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_SOMS_ECLK_SRC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.ECLK_SRC */
#define IFX_GTM_ATOM_CH_SOMS_ECLK_SRC_OFF (15u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.OSM */
#define IFX_GTM_ATOM_CH_SOMS_OSM_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.OSM */
#define IFX_GTM_ATOM_CH_SOMS_OSM_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.OSM */
#define IFX_GTM_ATOM_CH_SOMS_OSM_OFF (26u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_SOMS_EXT_FUPD_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_SOMS_EXT_FUPD_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.EXT_FUPD */
#define IFX_GTM_ATOM_CH_SOMS_EXT_FUPD_OFF (29u)

/** \brief Length for Ifx_GTM_ATOM_CH_SOMS_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMS_FREEZE_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SOMS_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMS_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_SOMS_Bits.FREEZE */
#define IFX_GTM_ATOM_CH_SOMS_FREEZE_OFF (31u)

/** \brief Length for Ifx_GTM_ATOM_CH_SR0_Bits.SR0 */
#define IFX_GTM_ATOM_CH_SR0_SR0_LEN (24u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SR0_Bits.SR0 */
#define IFX_GTM_ATOM_CH_SR0_SR0_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_ATOM_CH_SR0_Bits.SR0 */
#define IFX_GTM_ATOM_CH_SR0_SR0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_SR1_Bits.SR1 */
#define IFX_GTM_ATOM_CH_SR1_SR1_LEN (24u)

/** \brief Mask for Ifx_GTM_ATOM_CH_SR1_Bits.SR1 */
#define IFX_GTM_ATOM_CH_SR1_SR1_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_ATOM_CH_SR1_Bits.SR1 */
#define IFX_GTM_ATOM_CH_SR1_SR1_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_CM0_Bits.CM0 */
#define IFX_GTM_ATOM_CH_CM0_CM0_LEN (24u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CM0_Bits.CM0 */
#define IFX_GTM_ATOM_CH_CM0_CM0_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_ATOM_CH_CM0_Bits.CM0 */
#define IFX_GTM_ATOM_CH_CM0_CM0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_CM1_Bits.CM1 */
#define IFX_GTM_ATOM_CH_CM1_CM1_LEN (24u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CM1_Bits.CM1 */
#define IFX_GTM_ATOM_CH_CM1_CM1_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_ATOM_CH_CM1_Bits.CM1 */
#define IFX_GTM_ATOM_CH_CM1_CM1_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_CN0_Bits.CN0 */
#define IFX_GTM_ATOM_CH_CN0_CN0_LEN (24u)

/** \brief Mask for Ifx_GTM_ATOM_CH_CN0_Bits.CN0 */
#define IFX_GTM_ATOM_CH_CN0_CN0_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_ATOM_CH_CN0_Bits.CN0 */
#define IFX_GTM_ATOM_CH_CN0_CN0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_STAT_Bits.OL */
#define IFX_GTM_ATOM_CH_STAT_OL_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_STAT_Bits.OL */
#define IFX_GTM_ATOM_CH_STAT_OL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_STAT_Bits.OL */
#define IFX_GTM_ATOM_CH_STAT_OL_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_STAT_Bits.ACBI */
#define IFX_GTM_ATOM_CH_STAT_ACBI_LEN (5u)

/** \brief Mask for Ifx_GTM_ATOM_CH_STAT_Bits.ACBI */
#define IFX_GTM_ATOM_CH_STAT_ACBI_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_ATOM_CH_STAT_Bits.ACBI */
#define IFX_GTM_ATOM_CH_STAT_ACBI_OFF (16u)

/** \brief Length for Ifx_GTM_ATOM_CH_STAT_Bits.DV */
#define IFX_GTM_ATOM_CH_STAT_DV_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_STAT_Bits.DV */
#define IFX_GTM_ATOM_CH_STAT_DV_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_STAT_Bits.DV */
#define IFX_GTM_ATOM_CH_STAT_DV_OFF (21u)

/** \brief Length for Ifx_GTM_ATOM_CH_STAT_Bits.WRF */
#define IFX_GTM_ATOM_CH_STAT_WRF_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_STAT_Bits.WRF */
#define IFX_GTM_ATOM_CH_STAT_WRF_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_STAT_Bits.WRF */
#define IFX_GTM_ATOM_CH_STAT_WRF_OFF (22u)

/** \brief Length for Ifx_GTM_ATOM_CH_STAT_Bits.DR */
#define IFX_GTM_ATOM_CH_STAT_DR_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_STAT_Bits.DR */
#define IFX_GTM_ATOM_CH_STAT_DR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_STAT_Bits.DR */
#define IFX_GTM_ATOM_CH_STAT_DR_OFF (23u)

/** \brief Length for Ifx_GTM_ATOM_CH_STAT_Bits.ACBO */
#define IFX_GTM_ATOM_CH_STAT_ACBO_LEN (5u)

/** \brief Mask for Ifx_GTM_ATOM_CH_STAT_Bits.ACBO */
#define IFX_GTM_ATOM_CH_STAT_ACBO_MSK (0x1fu)

/** \brief Offset for Ifx_GTM_ATOM_CH_STAT_Bits.ACBO */
#define IFX_GTM_ATOM_CH_STAT_ACBO_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits.CCU0TC */
#define IFX_GTM_ATOM_CH_IRQ_NOTIFY_CCU0TC_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits.CCU0TC */
#define IFX_GTM_ATOM_CH_IRQ_NOTIFY_CCU0TC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits.CCU0TC */
#define IFX_GTM_ATOM_CH_IRQ_NOTIFY_CCU0TC_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits.CCU1TC */
#define IFX_GTM_ATOM_CH_IRQ_NOTIFY_CCU1TC_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits.CCU1TC */
#define IFX_GTM_ATOM_CH_IRQ_NOTIFY_CCU1TC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits.CCU1TC */
#define IFX_GTM_ATOM_CH_IRQ_NOTIFY_CCU1TC_OFF (1u)

/** \brief Length for Ifx_GTM_ATOM_CH_IRQ_EN_Bits.CCU0TC_IRQ_EN */
#define IFX_GTM_ATOM_CH_IRQ_EN_CCU0TC_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_IRQ_EN_Bits.CCU0TC_IRQ_EN */
#define IFX_GTM_ATOM_CH_IRQ_EN_CCU0TC_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_IRQ_EN_Bits.CCU0TC_IRQ_EN */
#define IFX_GTM_ATOM_CH_IRQ_EN_CCU0TC_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_IRQ_EN_Bits.CCU1TC_IRQ_EN */
#define IFX_GTM_ATOM_CH_IRQ_EN_CCU1TC_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_IRQ_EN_Bits.CCU1TC_IRQ_EN */
#define IFX_GTM_ATOM_CH_IRQ_EN_CCU1TC_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_IRQ_EN_Bits.CCU1TC_IRQ_EN */
#define IFX_GTM_ATOM_CH_IRQ_EN_CCU1TC_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits.TRG_CCU0TC */
#define IFX_GTM_ATOM_CH_IRQ_FORCINT_TRG_CCU0TC_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits.TRG_CCU0TC */
#define IFX_GTM_ATOM_CH_IRQ_FORCINT_TRG_CCU0TC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits.TRG_CCU0TC */
#define IFX_GTM_ATOM_CH_IRQ_FORCINT_TRG_CCU0TC_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits.TRG_CCU1TC */
#define IFX_GTM_ATOM_CH_IRQ_FORCINT_TRG_CCU1TC_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits.TRG_CCU1TC */
#define IFX_GTM_ATOM_CH_IRQ_FORCINT_TRG_CCU1TC_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits.TRG_CCU1TC */
#define IFX_GTM_ATOM_CH_IRQ_FORCINT_TRG_CCU1TC_OFF (1u)

/** \brief Length for Ifx_GTM_ATOM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_ATOM_CH_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_ATOM_CH_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_ATOM_CH_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.HOST_TRIG */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_HOST_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.HOST_TRIG */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_HOST_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.HOST_TRIG */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_HOST_TRIG_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH0 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH0_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH0 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH0 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH0_OFF (8u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH1 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH1_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH1 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH1 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH1_OFF (9u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH2 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH2_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH2 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH2 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH2_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH3 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH3_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH3 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH3 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH3_OFF (11u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH4 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH4_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH4 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH4 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH4_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH5 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH5_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH5 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH5 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH5_OFF (13u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH6 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH6_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH6 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH6 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH6_OFF (14u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH7 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH7_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH7 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.RST_CH7 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_RST_CH7_OFF (15u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL0 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL0 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL0 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL0_OFF (16u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL1 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL1 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL1 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL1_OFF (18u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL2 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL2 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL2 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL2_OFF (20u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL3 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL3 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL3 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL3_OFF (22u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL4 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL4 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL4 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL4_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL5 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL5 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL5 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL5_OFF (26u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL6 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL6 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL6 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL6_OFF (28u)

/** \brief Length for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL7 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL7 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits.UPEN_CTRL7 */
#define IFX_GTM_ATOM_AGC_GLB_CTRL_UPEN_CTRL7_OFF (30u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL0 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL0 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL0 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL1 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL1 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL1 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL1_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL2 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL2 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL2 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL2_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL3 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL3 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL3 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL3_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL4 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL4 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL4 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL4_OFF (8u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL5 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL5 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL5 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL5_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL6 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL6 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL6 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL6_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL7 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL7 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits.ENDIS_CTRL7 */
#define IFX_GTM_ATOM_AGC_ENDIS_CTRL_ENDIS_CTRL7_OFF (14u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL0 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL0 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL0 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL1 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL1 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL1 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL1_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL2 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL2 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL2 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL2_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL3 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL3 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL3 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL3_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL4 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL4 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL4 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL4_OFF (8u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL5 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL5 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL5 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL5_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL6 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL6 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL6 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL6_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL7 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL7 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits.ENDIS_CTRL7 */
#define IFX_GTM_ATOM_AGC_ENDIS_STAT_ENDIS_CTRL7_OFF (14u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.ACT_TB */
#define IFX_GTM_ATOM_AGC_ACT_TB_ACT_TB_LEN (24u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.ACT_TB */
#define IFX_GTM_ATOM_AGC_ACT_TB_ACT_TB_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.ACT_TB */
#define IFX_GTM_ATOM_AGC_ACT_TB_ACT_TB_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.TB_TRIG */
#define IFX_GTM_ATOM_AGC_ACT_TB_TB_TRIG_LEN (1u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.TB_TRIG */
#define IFX_GTM_ATOM_AGC_ACT_TB_TB_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.TB_TRIG */
#define IFX_GTM_ATOM_AGC_ACT_TB_TB_TRIG_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.TBU_SEL */
#define IFX_GTM_ATOM_AGC_ACT_TB_TBU_SEL_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.TBU_SEL */
#define IFX_GTM_ATOM_AGC_ACT_TB_TBU_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_ACT_TB_Bits.TBU_SEL */
#define IFX_GTM_ATOM_AGC_ACT_TB_TBU_SEL_OFF (25u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL0 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL0 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL0 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL1 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL1 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL1 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL1_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL2 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL2 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL2 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL2_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL3 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL3 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL3 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL3_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL4 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL4 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL4 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL4_OFF (8u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL5 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL5 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL5 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL5_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL6 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL6 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL6 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL6_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL7 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL7 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits.OUTEN_CTRL7 */
#define IFX_GTM_ATOM_AGC_OUTEN_CTRL_OUTEN_CTRL7_OFF (14u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT0 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT0 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT0 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT1 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT1 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT1 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT1_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT2 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT2 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT2 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT2_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT3 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT3 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT3 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT3_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT4 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT4 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT4 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT4_OFF (8u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT5 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT5 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT5 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT5_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT6 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT6 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT6 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT6_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT7 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT7 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits.OUTEN_STAT7 */
#define IFX_GTM_ATOM_AGC_OUTEN_STAT_OUTEN_STAT7_OFF (14u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL0 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL0 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL0 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL1 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL1 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL1 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL1_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL2 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL2 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL2 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL2_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL3 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL3 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL3 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL3_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL4 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL4 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL4 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL4_OFF (8u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL5 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL5 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL5 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL5_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL6 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL6 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL6 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL6_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL7 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL7 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.FUPD_CTRL7 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_FUPD_CTRL7_OFF (14u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH0 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH0 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH0 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH0_OFF (16u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH1 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH1 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH1 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH1_OFF (18u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH2 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH2 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH2 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH2_OFF (20u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH3 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH3 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH3 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH3_OFF (22u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH4 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH4 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH4 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH4_OFF (24u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH5 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH5 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH5 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH5_OFF (26u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH6 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH6 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH6 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH6_OFF (28u)

/** \brief Length for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH7 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH7 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits.RSTCN0_CH7 */
#define IFX_GTM_ATOM_AGC_FUPD_CTRL_RSTCN0_CH7_OFF (30u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG0 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG0_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG0 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG0 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG0_OFF (0u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG1 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG1_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG1 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG1 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG1_OFF (2u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG2 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG2_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG2 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG2 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG2_OFF (4u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG3 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG3_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG3 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG3 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG3_OFF (6u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG4 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG4_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG4 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG4 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG4_OFF (8u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG5 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG5_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG5 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG5 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG5_OFF (10u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG6 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG6_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG6 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG6 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG6_OFF (12u)

/** \brief Length for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG7 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG7_LEN (2u)

/** \brief Mask for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG7 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_ATOM_AGC_INT_TRIG_Bits.INT_TRIG7 */
#define IFX_GTM_ATOM_AGC_INT_TRIG_INT_TRIG7_OFF (14u)

/** \brief Length for Ifx_GTM_MCS_CH_R_Bits.DATA */
#define IFX_GTM_MCS_CH_R_DATA_LEN (24u)

/** \brief Mask for Ifx_GTM_MCS_CH_R_Bits.DATA */
#define IFX_GTM_MCS_CH_R_DATA_MSK (0xffffffu)

/** \brief Offset for Ifx_GTM_MCS_CH_R_Bits.DATA */
#define IFX_GTM_MCS_CH_R_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.EN */
#define IFX_GTM_MCS_CH_CTRL_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.EN */
#define IFX_GTM_MCS_CH_CTRL_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.EN */
#define IFX_GTM_MCS_CH_CTRL_EN_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.IRQ */
#define IFX_GTM_MCS_CH_CTRL_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.IRQ */
#define IFX_GTM_MCS_CH_CTRL_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.IRQ */
#define IFX_GTM_MCS_CH_CTRL_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.ERR */
#define IFX_GTM_MCS_CH_CTRL_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.ERR */
#define IFX_GTM_MCS_CH_CTRL_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.ERR */
#define IFX_GTM_MCS_CH_CTRL_ERR_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.CY */
#define IFX_GTM_MCS_CH_CTRL_CY_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.CY */
#define IFX_GTM_MCS_CH_CTRL_CY_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.CY */
#define IFX_GTM_MCS_CH_CTRL_CY_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.Z */
#define IFX_GTM_MCS_CH_CTRL_Z_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.Z */
#define IFX_GTM_MCS_CH_CTRL_Z_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.Z */
#define IFX_GTM_MCS_CH_CTRL_Z_OFF (5u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.V */
#define IFX_GTM_MCS_CH_CTRL_V_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.V */
#define IFX_GTM_MCS_CH_CTRL_V_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.V */
#define IFX_GTM_MCS_CH_CTRL_V_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.N */
#define IFX_GTM_MCS_CH_CTRL_N_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.N */
#define IFX_GTM_MCS_CH_CTRL_N_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.N */
#define IFX_GTM_MCS_CH_CTRL_N_OFF (7u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.CAT */
#define IFX_GTM_MCS_CH_CTRL_CAT_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.CAT */
#define IFX_GTM_MCS_CH_CTRL_CAT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.CAT */
#define IFX_GTM_MCS_CH_CTRL_CAT_OFF (8u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.CWT */
#define IFX_GTM_MCS_CH_CTRL_CWT_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.CWT */
#define IFX_GTM_MCS_CH_CTRL_CWT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.CWT */
#define IFX_GTM_MCS_CH_CTRL_CWT_OFF (9u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.SAT */
#define IFX_GTM_MCS_CH_CTRL_SAT_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.SAT */
#define IFX_GTM_MCS_CH_CTRL_SAT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.SAT */
#define IFX_GTM_MCS_CH_CTRL_SAT_OFF (10u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRL_Bits.SP_CNT */
#define IFX_GTM_MCS_CH_CTRL_SP_CNT_LEN (3u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRL_Bits.SP_CNT */
#define IFX_GTM_MCS_CH_CTRL_SP_CNT_MSK (0x7u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRL_Bits.SP_CNT */
#define IFX_GTM_MCS_CH_CTRL_SP_CNT_OFF (16u)

/** \brief Length for Ifx_GTM_MCS_CH_ACB_Bits.ACB0 */
#define IFX_GTM_MCS_CH_ACB_ACB0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_ACB_Bits.ACB0 */
#define IFX_GTM_MCS_CH_ACB_ACB0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_ACB_Bits.ACB0 */
#define IFX_GTM_MCS_CH_ACB_ACB0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_ACB_Bits.ACB1 */
#define IFX_GTM_MCS_CH_ACB_ACB1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_ACB_Bits.ACB1 */
#define IFX_GTM_MCS_CH_ACB_ACB1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_ACB_Bits.ACB1 */
#define IFX_GTM_MCS_CH_ACB_ACB1_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_ACB_Bits.ACB2 */
#define IFX_GTM_MCS_CH_ACB_ACB2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_ACB_Bits.ACB2 */
#define IFX_GTM_MCS_CH_ACB_ACB2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_ACB_Bits.ACB2 */
#define IFX_GTM_MCS_CH_ACB_ACB2_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CH_ACB_Bits.ACB3 */
#define IFX_GTM_MCS_CH_ACB_ACB3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_ACB_Bits.ACB3 */
#define IFX_GTM_MCS_CH_ACB_ACB3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_ACB_Bits.ACB3 */
#define IFX_GTM_MCS_CH_ACB_ACB3_OFF (3u)

/** \brief Length for Ifx_GTM_MCS_CH_ACB_Bits.ACB4 */
#define IFX_GTM_MCS_CH_ACB_ACB4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_ACB_Bits.ACB4 */
#define IFX_GTM_MCS_CH_ACB_ACB4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_ACB_Bits.ACB4 */
#define IFX_GTM_MCS_CH_ACB_ACB4_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG0 */
#define IFX_GTM_MCS_CH_CTRG_TRG0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG0 */
#define IFX_GTM_MCS_CH_CTRG_TRG0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG0 */
#define IFX_GTM_MCS_CH_CTRG_TRG0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG1 */
#define IFX_GTM_MCS_CH_CTRG_TRG1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG1 */
#define IFX_GTM_MCS_CH_CTRG_TRG1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG1 */
#define IFX_GTM_MCS_CH_CTRG_TRG1_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG2 */
#define IFX_GTM_MCS_CH_CTRG_TRG2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG2 */
#define IFX_GTM_MCS_CH_CTRG_TRG2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG2 */
#define IFX_GTM_MCS_CH_CTRG_TRG2_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG3 */
#define IFX_GTM_MCS_CH_CTRG_TRG3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG3 */
#define IFX_GTM_MCS_CH_CTRG_TRG3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG3 */
#define IFX_GTM_MCS_CH_CTRG_TRG3_OFF (3u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG4 */
#define IFX_GTM_MCS_CH_CTRG_TRG4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG4 */
#define IFX_GTM_MCS_CH_CTRG_TRG4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG4 */
#define IFX_GTM_MCS_CH_CTRG_TRG4_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG5 */
#define IFX_GTM_MCS_CH_CTRG_TRG5_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG5 */
#define IFX_GTM_MCS_CH_CTRG_TRG5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG5 */
#define IFX_GTM_MCS_CH_CTRG_TRG5_OFF (5u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG6 */
#define IFX_GTM_MCS_CH_CTRG_TRG6_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG6 */
#define IFX_GTM_MCS_CH_CTRG_TRG6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG6 */
#define IFX_GTM_MCS_CH_CTRG_TRG6_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG7 */
#define IFX_GTM_MCS_CH_CTRG_TRG7_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG7 */
#define IFX_GTM_MCS_CH_CTRG_TRG7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG7 */
#define IFX_GTM_MCS_CH_CTRG_TRG7_OFF (7u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG8 */
#define IFX_GTM_MCS_CH_CTRG_TRG8_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG8 */
#define IFX_GTM_MCS_CH_CTRG_TRG8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG8 */
#define IFX_GTM_MCS_CH_CTRG_TRG8_OFF (8u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG9 */
#define IFX_GTM_MCS_CH_CTRG_TRG9_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG9 */
#define IFX_GTM_MCS_CH_CTRG_TRG9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG9 */
#define IFX_GTM_MCS_CH_CTRG_TRG9_OFF (9u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG10 */
#define IFX_GTM_MCS_CH_CTRG_TRG10_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG10 */
#define IFX_GTM_MCS_CH_CTRG_TRG10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG10 */
#define IFX_GTM_MCS_CH_CTRG_TRG10_OFF (10u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG11 */
#define IFX_GTM_MCS_CH_CTRG_TRG11_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG11 */
#define IFX_GTM_MCS_CH_CTRG_TRG11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG11 */
#define IFX_GTM_MCS_CH_CTRG_TRG11_OFF (11u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG12 */
#define IFX_GTM_MCS_CH_CTRG_TRG12_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG12 */
#define IFX_GTM_MCS_CH_CTRG_TRG12_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG12 */
#define IFX_GTM_MCS_CH_CTRG_TRG12_OFF (12u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG13 */
#define IFX_GTM_MCS_CH_CTRG_TRG13_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG13 */
#define IFX_GTM_MCS_CH_CTRG_TRG13_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG13 */
#define IFX_GTM_MCS_CH_CTRG_TRG13_OFF (13u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG14 */
#define IFX_GTM_MCS_CH_CTRG_TRG14_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG14 */
#define IFX_GTM_MCS_CH_CTRG_TRG14_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG14 */
#define IFX_GTM_MCS_CH_CTRG_TRG14_OFF (14u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG15 */
#define IFX_GTM_MCS_CH_CTRG_TRG15_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG15 */
#define IFX_GTM_MCS_CH_CTRG_TRG15_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG15 */
#define IFX_GTM_MCS_CH_CTRG_TRG15_OFF (15u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG16 */
#define IFX_GTM_MCS_CH_CTRG_TRG16_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG16 */
#define IFX_GTM_MCS_CH_CTRG_TRG16_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG16 */
#define IFX_GTM_MCS_CH_CTRG_TRG16_OFF (16u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG17 */
#define IFX_GTM_MCS_CH_CTRG_TRG17_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG17 */
#define IFX_GTM_MCS_CH_CTRG_TRG17_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG17 */
#define IFX_GTM_MCS_CH_CTRG_TRG17_OFF (17u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG18 */
#define IFX_GTM_MCS_CH_CTRG_TRG18_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG18 */
#define IFX_GTM_MCS_CH_CTRG_TRG18_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG18 */
#define IFX_GTM_MCS_CH_CTRG_TRG18_OFF (18u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG19 */
#define IFX_GTM_MCS_CH_CTRG_TRG19_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG19 */
#define IFX_GTM_MCS_CH_CTRG_TRG19_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG19 */
#define IFX_GTM_MCS_CH_CTRG_TRG19_OFF (19u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG20 */
#define IFX_GTM_MCS_CH_CTRG_TRG20_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG20 */
#define IFX_GTM_MCS_CH_CTRG_TRG20_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG20 */
#define IFX_GTM_MCS_CH_CTRG_TRG20_OFF (20u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG21 */
#define IFX_GTM_MCS_CH_CTRG_TRG21_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG21 */
#define IFX_GTM_MCS_CH_CTRG_TRG21_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG21 */
#define IFX_GTM_MCS_CH_CTRG_TRG21_OFF (21u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG22 */
#define IFX_GTM_MCS_CH_CTRG_TRG22_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG22 */
#define IFX_GTM_MCS_CH_CTRG_TRG22_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG22 */
#define IFX_GTM_MCS_CH_CTRG_TRG22_OFF (22u)

/** \brief Length for Ifx_GTM_MCS_CH_CTRG_Bits.TRG23 */
#define IFX_GTM_MCS_CH_CTRG_TRG23_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_CTRG_Bits.TRG23 */
#define IFX_GTM_MCS_CH_CTRG_TRG23_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_CTRG_Bits.TRG23 */
#define IFX_GTM_MCS_CH_CTRG_TRG23_OFF (23u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG0 */
#define IFX_GTM_MCS_CH_STRG_TRG0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG0 */
#define IFX_GTM_MCS_CH_STRG_TRG0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG0 */
#define IFX_GTM_MCS_CH_STRG_TRG0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG1 */
#define IFX_GTM_MCS_CH_STRG_TRG1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG1 */
#define IFX_GTM_MCS_CH_STRG_TRG1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG1 */
#define IFX_GTM_MCS_CH_STRG_TRG1_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG2 */
#define IFX_GTM_MCS_CH_STRG_TRG2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG2 */
#define IFX_GTM_MCS_CH_STRG_TRG2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG2 */
#define IFX_GTM_MCS_CH_STRG_TRG2_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG3 */
#define IFX_GTM_MCS_CH_STRG_TRG3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG3 */
#define IFX_GTM_MCS_CH_STRG_TRG3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG3 */
#define IFX_GTM_MCS_CH_STRG_TRG3_OFF (3u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG4 */
#define IFX_GTM_MCS_CH_STRG_TRG4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG4 */
#define IFX_GTM_MCS_CH_STRG_TRG4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG4 */
#define IFX_GTM_MCS_CH_STRG_TRG4_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG5 */
#define IFX_GTM_MCS_CH_STRG_TRG5_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG5 */
#define IFX_GTM_MCS_CH_STRG_TRG5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG5 */
#define IFX_GTM_MCS_CH_STRG_TRG5_OFF (5u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG6 */
#define IFX_GTM_MCS_CH_STRG_TRG6_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG6 */
#define IFX_GTM_MCS_CH_STRG_TRG6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG6 */
#define IFX_GTM_MCS_CH_STRG_TRG6_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG7 */
#define IFX_GTM_MCS_CH_STRG_TRG7_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG7 */
#define IFX_GTM_MCS_CH_STRG_TRG7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG7 */
#define IFX_GTM_MCS_CH_STRG_TRG7_OFF (7u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG8 */
#define IFX_GTM_MCS_CH_STRG_TRG8_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG8 */
#define IFX_GTM_MCS_CH_STRG_TRG8_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG8 */
#define IFX_GTM_MCS_CH_STRG_TRG8_OFF (8u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG9 */
#define IFX_GTM_MCS_CH_STRG_TRG9_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG9 */
#define IFX_GTM_MCS_CH_STRG_TRG9_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG9 */
#define IFX_GTM_MCS_CH_STRG_TRG9_OFF (9u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG10 */
#define IFX_GTM_MCS_CH_STRG_TRG10_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG10 */
#define IFX_GTM_MCS_CH_STRG_TRG10_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG10 */
#define IFX_GTM_MCS_CH_STRG_TRG10_OFF (10u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG11 */
#define IFX_GTM_MCS_CH_STRG_TRG11_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG11 */
#define IFX_GTM_MCS_CH_STRG_TRG11_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG11 */
#define IFX_GTM_MCS_CH_STRG_TRG11_OFF (11u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG12 */
#define IFX_GTM_MCS_CH_STRG_TRG12_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG12 */
#define IFX_GTM_MCS_CH_STRG_TRG12_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG12 */
#define IFX_GTM_MCS_CH_STRG_TRG12_OFF (12u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG13 */
#define IFX_GTM_MCS_CH_STRG_TRG13_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG13 */
#define IFX_GTM_MCS_CH_STRG_TRG13_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG13 */
#define IFX_GTM_MCS_CH_STRG_TRG13_OFF (13u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG14 */
#define IFX_GTM_MCS_CH_STRG_TRG14_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG14 */
#define IFX_GTM_MCS_CH_STRG_TRG14_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG14 */
#define IFX_GTM_MCS_CH_STRG_TRG14_OFF (14u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG15 */
#define IFX_GTM_MCS_CH_STRG_TRG15_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG15 */
#define IFX_GTM_MCS_CH_STRG_TRG15_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG15 */
#define IFX_GTM_MCS_CH_STRG_TRG15_OFF (15u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG16 */
#define IFX_GTM_MCS_CH_STRG_TRG16_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG16 */
#define IFX_GTM_MCS_CH_STRG_TRG16_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG16 */
#define IFX_GTM_MCS_CH_STRG_TRG16_OFF (16u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG17 */
#define IFX_GTM_MCS_CH_STRG_TRG17_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG17 */
#define IFX_GTM_MCS_CH_STRG_TRG17_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG17 */
#define IFX_GTM_MCS_CH_STRG_TRG17_OFF (17u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG18 */
#define IFX_GTM_MCS_CH_STRG_TRG18_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG18 */
#define IFX_GTM_MCS_CH_STRG_TRG18_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG18 */
#define IFX_GTM_MCS_CH_STRG_TRG18_OFF (18u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG19 */
#define IFX_GTM_MCS_CH_STRG_TRG19_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG19 */
#define IFX_GTM_MCS_CH_STRG_TRG19_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG19 */
#define IFX_GTM_MCS_CH_STRG_TRG19_OFF (19u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG20 */
#define IFX_GTM_MCS_CH_STRG_TRG20_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG20 */
#define IFX_GTM_MCS_CH_STRG_TRG20_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG20 */
#define IFX_GTM_MCS_CH_STRG_TRG20_OFF (20u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG21 */
#define IFX_GTM_MCS_CH_STRG_TRG21_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG21 */
#define IFX_GTM_MCS_CH_STRG_TRG21_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG21 */
#define IFX_GTM_MCS_CH_STRG_TRG21_OFF (21u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG22 */
#define IFX_GTM_MCS_CH_STRG_TRG22_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG22 */
#define IFX_GTM_MCS_CH_STRG_TRG22_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG22 */
#define IFX_GTM_MCS_CH_STRG_TRG22_OFF (22u)

/** \brief Length for Ifx_GTM_MCS_CH_STRG_Bits.TRG23 */
#define IFX_GTM_MCS_CH_STRG_TRG23_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_STRG_Bits.TRG23 */
#define IFX_GTM_MCS_CH_STRG_TRG23_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_STRG_Bits.TRG23 */
#define IFX_GTM_MCS_CH_STRG_TRG23_OFF (23u)

/** \brief Length for Ifx_GTM_MCS_CH_MHB_Bits.DATA */
#define IFX_GTM_MCS_CH_MHB_DATA_LEN (8u)

/** \brief Mask for Ifx_GTM_MCS_CH_MHB_Bits.DATA */
#define IFX_GTM_MCS_CH_MHB_DATA_MSK (0xffu)

/** \brief Offset for Ifx_GTM_MCS_CH_MHB_Bits.DATA */
#define IFX_GTM_MCS_CH_MHB_DATA_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_PC_Bits.PC */
#define IFX_GTM_MCS_CH_PC_PC_LEN (16u)

/** \brief Mask for Ifx_GTM_MCS_CH_PC_Bits.PC */
#define IFX_GTM_MCS_CH_PC_PC_MSK (0xffffu)

/** \brief Offset for Ifx_GTM_MCS_CH_PC_Bits.PC */
#define IFX_GTM_MCS_CH_PC_PC_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.MCS_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_MCS_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.MCS_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_MCS_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.MCS_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_MCS_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.STK_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_STK_ERR_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.STK_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_STK_ERR_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.STK_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_STK_ERR_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_ERR_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_ERR_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits.ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_NOTIFY_ERR_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_EN_Bits.MCS_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_MCS_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_EN_Bits.MCS_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_MCS_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_EN_Bits.MCS_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_MCS_IRQ_EN_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_EN_Bits.STK_ERR_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_STK_ERR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_EN_Bits.STK_ERR_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_STK_ERR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_EN_Bits.STK_ERR_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_STK_ERR_IRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_EN_Bits.ERR_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_ERR_IRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_EN_Bits.ERR_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_ERR_IRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_EN_Bits.ERR_IRQ_EN */
#define IFX_GTM_MCS_CH_IRQ_EN_ERR_IRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_MCS_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_MCS_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_MCS_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_MCS_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_MCS_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_MCS_IRQ_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_STK_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_STK_ERR_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_STK_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_STK_ERR_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_STK_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_STK_ERR_IRQ_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_ERR_IRQ_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_ERR_IRQ_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits.TRG_ERR_IRQ */
#define IFX_GTM_MCS_CH_IRQ_FORCINT_TRG_ERR_IRQ_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_MCS_CH_IRQ_MODE_IRQ_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_MCS_CH_IRQ_MODE_IRQ_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_CH_IRQ_MODE_Bits.IRQ_MODE */
#define IFX_GTM_MCS_CH_IRQ_MODE_IRQ_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.MCS_EIRQ_EN0 */
#define IFX_GTM_MCS_CH_EIRQ_EN_MCS_EIRQ_EN0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.MCS_EIRQ_EN0 */
#define IFX_GTM_MCS_CH_EIRQ_EN_MCS_EIRQ_EN0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.MCS_EIRQ_EN0 */
#define IFX_GTM_MCS_CH_EIRQ_EN_MCS_EIRQ_EN0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.STK_ERR_EIRQ_EN */
#define IFX_GTM_MCS_CH_EIRQ_EN_STK_ERR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.STK_ERR_EIRQ_EN */
#define IFX_GTM_MCS_CH_EIRQ_EN_STK_ERR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.STK_ERR_EIRQ_EN */
#define IFX_GTM_MCS_CH_EIRQ_EN_STK_ERR_EIRQ_EN_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.ERR_EIRQ_EN */
#define IFX_GTM_MCS_CH_EIRQ_EN_ERR_EIRQ_EN_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.ERR_EIRQ_EN */
#define IFX_GTM_MCS_CH_EIRQ_EN_ERR_EIRQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CH_EIRQ_EN_Bits.ERR_EIRQ_EN */
#define IFX_GTM_MCS_CH_EIRQ_EN_ERR_EIRQ_EN_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT0 */
#define IFX_GTM_MCS_REG_PROT_WPROT0_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT0 */
#define IFX_GTM_MCS_REG_PROT_WPROT0_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT0 */
#define IFX_GTM_MCS_REG_PROT_WPROT0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT1 */
#define IFX_GTM_MCS_REG_PROT_WPROT1_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT1 */
#define IFX_GTM_MCS_REG_PROT_WPROT1_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT1 */
#define IFX_GTM_MCS_REG_PROT_WPROT1_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT2 */
#define IFX_GTM_MCS_REG_PROT_WPROT2_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT2 */
#define IFX_GTM_MCS_REG_PROT_WPROT2_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT2 */
#define IFX_GTM_MCS_REG_PROT_WPROT2_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT3 */
#define IFX_GTM_MCS_REG_PROT_WPROT3_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT3 */
#define IFX_GTM_MCS_REG_PROT_WPROT3_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT3 */
#define IFX_GTM_MCS_REG_PROT_WPROT3_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT4 */
#define IFX_GTM_MCS_REG_PROT_WPROT4_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT4 */
#define IFX_GTM_MCS_REG_PROT_WPROT4_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT4 */
#define IFX_GTM_MCS_REG_PROT_WPROT4_OFF (8u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT5 */
#define IFX_GTM_MCS_REG_PROT_WPROT5_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT5 */
#define IFX_GTM_MCS_REG_PROT_WPROT5_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT5 */
#define IFX_GTM_MCS_REG_PROT_WPROT5_OFF (10u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT6 */
#define IFX_GTM_MCS_REG_PROT_WPROT6_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT6 */
#define IFX_GTM_MCS_REG_PROT_WPROT6_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT6 */
#define IFX_GTM_MCS_REG_PROT_WPROT6_OFF (12u)

/** \brief Length for Ifx_GTM_MCS_REG_PROT_Bits.WPROT7 */
#define IFX_GTM_MCS_REG_PROT_WPROT7_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_REG_PROT_Bits.WPROT7 */
#define IFX_GTM_MCS_REG_PROT_WPROT7_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_REG_PROT_Bits.WPROT7 */
#define IFX_GTM_MCS_REG_PROT_WPROT7_OFF (14u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.SCD_MODE */
#define IFX_GTM_MCS_CTRL_STAT_SCD_MODE_LEN (2u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.SCD_MODE */
#define IFX_GTM_MCS_CTRL_STAT_SCD_MODE_MSK (0x3u)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.SCD_MODE */
#define IFX_GTM_MCS_CTRL_STAT_SCD_MODE_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.SCD_CH */
#define IFX_GTM_MCS_CTRL_STAT_SCD_CH_LEN (4u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.SCD_CH */
#define IFX_GTM_MCS_CTRL_STAT_SCD_CH_MSK (0xfu)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.SCD_CH */
#define IFX_GTM_MCS_CTRL_STAT_SCD_CH_OFF (8u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.RAM_RST */
#define IFX_GTM_MCS_CTRL_STAT_RAM_RST_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.RAM_RST */
#define IFX_GTM_MCS_CTRL_STAT_RAM_RST_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.RAM_RST */
#define IFX_GTM_MCS_CTRL_STAT_RAM_RST_OFF (16u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.HLT_SP_OFL */
#define IFX_GTM_MCS_CTRL_STAT_HLT_SP_OFL_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.HLT_SP_OFL */
#define IFX_GTM_MCS_CTRL_STAT_HLT_SP_OFL_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.HLT_SP_OFL */
#define IFX_GTM_MCS_CTRL_STAT_HLT_SP_OFL_OFF (17u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.ERR_SRC_ID */
#define IFX_GTM_MCS_CTRL_STAT_ERR_SRC_ID_LEN (3u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.ERR_SRC_ID */
#define IFX_GTM_MCS_CTRL_STAT_ERR_SRC_ID_MSK (0x7u)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.ERR_SRC_ID */
#define IFX_GTM_MCS_CTRL_STAT_ERR_SRC_ID_OFF (20u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.EN_TIM_FOUT */
#define IFX_GTM_MCS_CTRL_STAT_EN_TIM_FOUT_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.EN_TIM_FOUT */
#define IFX_GTM_MCS_CTRL_STAT_EN_TIM_FOUT_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.EN_TIM_FOUT */
#define IFX_GTM_MCS_CTRL_STAT_EN_TIM_FOUT_OFF (24u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.EN_XOREG */
#define IFX_GTM_MCS_CTRL_STAT_EN_XOREG_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.EN_XOREG */
#define IFX_GTM_MCS_CTRL_STAT_EN_XOREG_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.EN_XOREG */
#define IFX_GTM_MCS_CTRL_STAT_EN_XOREG_OFF (25u)

/** \brief Length for Ifx_GTM_MCS_CTRL_STAT_Bits.HLT_AEIM_ERR */
#define IFX_GTM_MCS_CTRL_STAT_HLT_AEIM_ERR_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CTRL_STAT_Bits.HLT_AEIM_ERR */
#define IFX_GTM_MCS_CTRL_STAT_HLT_AEIM_ERR_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CTRL_STAT_Bits.HLT_AEIM_ERR */
#define IFX_GTM_MCS_CTRL_STAT_HLT_AEIM_ERR_OFF (26u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST0 */
#define IFX_GTM_MCS_RESET_RST0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST0 */
#define IFX_GTM_MCS_RESET_RST0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST0 */
#define IFX_GTM_MCS_RESET_RST0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST1 */
#define IFX_GTM_MCS_RESET_RST1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST1 */
#define IFX_GTM_MCS_RESET_RST1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST1 */
#define IFX_GTM_MCS_RESET_RST1_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST2 */
#define IFX_GTM_MCS_RESET_RST2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST2 */
#define IFX_GTM_MCS_RESET_RST2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST2 */
#define IFX_GTM_MCS_RESET_RST2_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST3 */
#define IFX_GTM_MCS_RESET_RST3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST3 */
#define IFX_GTM_MCS_RESET_RST3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST3 */
#define IFX_GTM_MCS_RESET_RST3_OFF (3u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST4 */
#define IFX_GTM_MCS_RESET_RST4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST4 */
#define IFX_GTM_MCS_RESET_RST4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST4 */
#define IFX_GTM_MCS_RESET_RST4_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST5 */
#define IFX_GTM_MCS_RESET_RST5_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST5 */
#define IFX_GTM_MCS_RESET_RST5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST5 */
#define IFX_GTM_MCS_RESET_RST5_OFF (5u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST6 */
#define IFX_GTM_MCS_RESET_RST6_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST6 */
#define IFX_GTM_MCS_RESET_RST6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST6 */
#define IFX_GTM_MCS_RESET_RST6_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_RESET_Bits.RST7 */
#define IFX_GTM_MCS_RESET_RST7_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_RESET_Bits.RST7 */
#define IFX_GTM_MCS_RESET_RST7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_RESET_Bits.RST7 */
#define IFX_GTM_MCS_RESET_RST7_OFF (7u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT0 */
#define IFX_GTM_MCS_CAT_CAT0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT0 */
#define IFX_GTM_MCS_CAT_CAT0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT0 */
#define IFX_GTM_MCS_CAT_CAT0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT1 */
#define IFX_GTM_MCS_CAT_CAT1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT1 */
#define IFX_GTM_MCS_CAT_CAT1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT1 */
#define IFX_GTM_MCS_CAT_CAT1_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT2 */
#define IFX_GTM_MCS_CAT_CAT2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT2 */
#define IFX_GTM_MCS_CAT_CAT2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT2 */
#define IFX_GTM_MCS_CAT_CAT2_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT3 */
#define IFX_GTM_MCS_CAT_CAT3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT3 */
#define IFX_GTM_MCS_CAT_CAT3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT3 */
#define IFX_GTM_MCS_CAT_CAT3_OFF (3u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT4 */
#define IFX_GTM_MCS_CAT_CAT4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT4 */
#define IFX_GTM_MCS_CAT_CAT4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT4 */
#define IFX_GTM_MCS_CAT_CAT4_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT5 */
#define IFX_GTM_MCS_CAT_CAT5_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT5 */
#define IFX_GTM_MCS_CAT_CAT5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT5 */
#define IFX_GTM_MCS_CAT_CAT5_OFF (5u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT6 */
#define IFX_GTM_MCS_CAT_CAT6_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT6 */
#define IFX_GTM_MCS_CAT_CAT6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT6 */
#define IFX_GTM_MCS_CAT_CAT6_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_CAT_Bits.CAT7 */
#define IFX_GTM_MCS_CAT_CAT7_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CAT_Bits.CAT7 */
#define IFX_GTM_MCS_CAT_CAT7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CAT_Bits.CAT7 */
#define IFX_GTM_MCS_CAT_CAT7_OFF (7u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT0 */
#define IFX_GTM_MCS_CWT_CWT0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT0 */
#define IFX_GTM_MCS_CWT_CWT0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT0 */
#define IFX_GTM_MCS_CWT_CWT0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT1 */
#define IFX_GTM_MCS_CWT_CWT1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT1 */
#define IFX_GTM_MCS_CWT_CWT1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT1 */
#define IFX_GTM_MCS_CWT_CWT1_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT2 */
#define IFX_GTM_MCS_CWT_CWT2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT2 */
#define IFX_GTM_MCS_CWT_CWT2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT2 */
#define IFX_GTM_MCS_CWT_CWT2_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT3 */
#define IFX_GTM_MCS_CWT_CWT3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT3 */
#define IFX_GTM_MCS_CWT_CWT3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT3 */
#define IFX_GTM_MCS_CWT_CWT3_OFF (3u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT4 */
#define IFX_GTM_MCS_CWT_CWT4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT4 */
#define IFX_GTM_MCS_CWT_CWT4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT4 */
#define IFX_GTM_MCS_CWT_CWT4_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT5 */
#define IFX_GTM_MCS_CWT_CWT5_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT5 */
#define IFX_GTM_MCS_CWT_CWT5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT5 */
#define IFX_GTM_MCS_CWT_CWT5_OFF (5u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT6 */
#define IFX_GTM_MCS_CWT_CWT6_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT6 */
#define IFX_GTM_MCS_CWT_CWT6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT6 */
#define IFX_GTM_MCS_CWT_CWT6_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_CWT_Bits.CWT7 */
#define IFX_GTM_MCS_CWT_CWT7_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_CWT_Bits.CWT7 */
#define IFX_GTM_MCS_CWT_CWT7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_CWT_Bits.CWT7 */
#define IFX_GTM_MCS_CWT_CWT7_OFF (7u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR0 */
#define IFX_GTM_MCS_ERR_ERR0_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR0 */
#define IFX_GTM_MCS_ERR_ERR0_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR0 */
#define IFX_GTM_MCS_ERR_ERR0_OFF (0u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR1 */
#define IFX_GTM_MCS_ERR_ERR1_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR1 */
#define IFX_GTM_MCS_ERR_ERR1_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR1 */
#define IFX_GTM_MCS_ERR_ERR1_OFF (1u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR2 */
#define IFX_GTM_MCS_ERR_ERR2_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR2 */
#define IFX_GTM_MCS_ERR_ERR2_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR2 */
#define IFX_GTM_MCS_ERR_ERR2_OFF (2u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR3 */
#define IFX_GTM_MCS_ERR_ERR3_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR3 */
#define IFX_GTM_MCS_ERR_ERR3_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR3 */
#define IFX_GTM_MCS_ERR_ERR3_OFF (3u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR4 */
#define IFX_GTM_MCS_ERR_ERR4_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR4 */
#define IFX_GTM_MCS_ERR_ERR4_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR4 */
#define IFX_GTM_MCS_ERR_ERR4_OFF (4u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR5 */
#define IFX_GTM_MCS_ERR_ERR5_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR5 */
#define IFX_GTM_MCS_ERR_ERR5_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR5 */
#define IFX_GTM_MCS_ERR_ERR5_OFF (5u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR6 */
#define IFX_GTM_MCS_ERR_ERR6_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR6 */
#define IFX_GTM_MCS_ERR_ERR6_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR6 */
#define IFX_GTM_MCS_ERR_ERR6_OFF (6u)

/** \brief Length for Ifx_GTM_MCS_ERR_Bits.ERR7 */
#define IFX_GTM_MCS_ERR_ERR7_LEN (1u)

/** \brief Mask for Ifx_GTM_MCS_ERR_Bits.ERR7 */
#define IFX_GTM_MCS_ERR_ERR7_MSK (0x1u)

/** \brief Offset for Ifx_GTM_MCS_ERR_Bits.ERR7 */
#define IFX_GTM_MCS_ERR_ERR7_OFF (7u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXGTM_BF_H */