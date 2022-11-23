/**
 * \file IfxAgbt_bf.h
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
 * \defgroup IfxSfr_Agbt_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Agbt_Registers
 * 
 */
#ifndef IFXAGBT_BF_H
#define IFXAGBT_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Agbt_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_AGBT_CLC_Bits.DISR */
#define IFX_AGBT_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_AGBT_CLC_Bits.DISR */
#define IFX_AGBT_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_CLC_Bits.DISR */
#define IFX_AGBT_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_AGBT_CLC_Bits.DISS */
#define IFX_AGBT_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_AGBT_CLC_Bits.DISS */
#define IFX_AGBT_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_CLC_Bits.DISS */
#define IFX_AGBT_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_AGBT_ID_Bits.MOD_REV */
#define IFX_AGBT_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_AGBT_ID_Bits.MOD_REV */
#define IFX_AGBT_ID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_AGBT_ID_Bits.MOD_REV */
#define IFX_AGBT_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_AGBT_ID_Bits.MOD_TYPE */
#define IFX_AGBT_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_AGBT_ID_Bits.MOD_TYPE */
#define IFX_AGBT_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_AGBT_ID_Bits.MOD_TYPE */
#define IFX_AGBT_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_AGBT_ID_Bits.MOD_NUM */
#define IFX_AGBT_ID_MOD_NUM_LEN (16u)

/** \brief Mask for Ifx_AGBT_ID_Bits.MOD_NUM */
#define IFX_AGBT_ID_MOD_NUM_MSK (0xffffu)

/** \brief Offset for Ifx_AGBT_ID_Bits.MOD_NUM */
#define IFX_AGBT_ID_MOD_NUM_OFF (16u)

/** \brief Length for Ifx_AGBT_TCR_Bits.TE */
#define IFX_AGBT_TCR_TE_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.TE */
#define IFX_AGBT_TCR_TE_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.TE */
#define IFX_AGBT_TCR_TE_OFF (0u)

/** \brief Length for Ifx_AGBT_TCR_Bits.PLLE */
#define IFX_AGBT_TCR_PLLE_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.PLLE */
#define IFX_AGBT_TCR_PLLE_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.PLLE */
#define IFX_AGBT_TCR_PLLE_OFF (1u)

/** \brief Length for Ifx_AGBT_TCR_Bits.TXA */
#define IFX_AGBT_TCR_TXA_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.TXA */
#define IFX_AGBT_TCR_TXA_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.TXA */
#define IFX_AGBT_TCR_TXA_OFF (2u)

/** \brief Length for Ifx_AGBT_TCR_Bits.PON */
#define IFX_AGBT_TCR_PON_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.PON */
#define IFX_AGBT_TCR_PON_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.PON */
#define IFX_AGBT_TCR_PON_OFF (3u)

/** \brief Length for Ifx_AGBT_TCR_Bits.TPV */
#define IFX_AGBT_TCR_TPV_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.TPV */
#define IFX_AGBT_TCR_TPV_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.TPV */
#define IFX_AGBT_TCR_TPV_OFF (4u)

/** \brief Length for Ifx_AGBT_TCR_Bits.BD */
#define IFX_AGBT_TCR_BD_LEN (3u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.BD */
#define IFX_AGBT_TCR_BD_MSK (0x7u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.BD */
#define IFX_AGBT_TCR_BD_OFF (5u)

/** \brief Length for Ifx_AGBT_TCR_Bits.AGBTON */
#define IFX_AGBT_TCR_AGBTON_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.AGBTON */
#define IFX_AGBT_TCR_AGBTON_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.AGBTON */
#define IFX_AGBT_TCR_AGBTON_OFF (16u)

/** \brief Length for Ifx_AGBT_TCR_Bits.CRCON */
#define IFX_AGBT_TCR_CRCON_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.CRCON */
#define IFX_AGBT_TCR_CRCON_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.CRCON */
#define IFX_AGBT_TCR_CRCON_OFF (18u)

/** \brief Length for Ifx_AGBT_TCR_Bits.ATPMON */
#define IFX_AGBT_TCR_ATPMON_LEN (1u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.ATPMON */
#define IFX_AGBT_TCR_ATPMON_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.ATPMON */
#define IFX_AGBT_TCR_ATPMON_OFF (19u)

/** \brief Length for Ifx_AGBT_TCR_Bits.ARDT */
#define IFX_AGBT_TCR_ARDT_LEN (2u)

/** \brief Mask for Ifx_AGBT_TCR_Bits.ARDT */
#define IFX_AGBT_TCR_ARDT_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_TCR_Bits.ARDT */
#define IFX_AGBT_TCR_ARDT_OFF (20u)

/** \brief Length for Ifx_AGBT_TSR_Bits.TXLNUP */
#define IFX_AGBT_TSR_TXLNUP_LEN (1u)

/** \brief Mask for Ifx_AGBT_TSR_Bits.TXLNUP */
#define IFX_AGBT_TSR_TXLNUP_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TSR_Bits.TXLNUP */
#define IFX_AGBT_TSR_TXLNUP_OFF (0u)

/** \brief Length for Ifx_AGBT_TSR_Bits.FBE */
#define IFX_AGBT_TSR_FBE_LEN (1u)

/** \brief Mask for Ifx_AGBT_TSR_Bits.FBE */
#define IFX_AGBT_TSR_FBE_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TSR_Bits.FBE */
#define IFX_AGBT_TSR_FBE_OFF (1u)

/** \brief Length for Ifx_AGBT_TSR_Bits.PLK */
#define IFX_AGBT_TSR_PLK_LEN (1u)

/** \brief Mask for Ifx_AGBT_TSR_Bits.PLK */
#define IFX_AGBT_TSR_PLK_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TSR_Bits.PLK */
#define IFX_AGBT_TSR_PLK_OFF (2u)

/** \brief Length for Ifx_AGBT_TSR_Bits.ATBS */
#define IFX_AGBT_TSR_ATBS_LEN (2u)

/** \brief Mask for Ifx_AGBT_TSR_Bits.ATBS */
#define IFX_AGBT_TSR_ATBS_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_TSR_Bits.ATBS */
#define IFX_AGBT_TSR_ATBS_OFF (3u)

/** \brief Length for Ifx_AGBT_TSR_Bits.CHUP */
#define IFX_AGBT_TSR_CHUP_LEN (1u)

/** \brief Mask for Ifx_AGBT_TSR_Bits.CHUP */
#define IFX_AGBT_TSR_CHUP_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TSR_Bits.CHUP */
#define IFX_AGBT_TSR_CHUP_OFF (31u)

/** \brief Length for Ifx_AGBT_FCTRL_Bits.WMLVL */
#define IFX_AGBT_FCTRL_WMLVL_LEN (8u)

/** \brief Mask for Ifx_AGBT_FCTRL_Bits.WMLVL */
#define IFX_AGBT_FCTRL_WMLVL_MSK (0xffu)

/** \brief Offset for Ifx_AGBT_FCTRL_Bits.WMLVL */
#define IFX_AGBT_FCTRL_WMLVL_OFF (0u)

/** \brief Length for Ifx_AGBT_TACU_Bits.ACIC */
#define IFX_AGBT_TACU_ACIC_LEN (31u)

/** \brief Mask for Ifx_AGBT_TACU_Bits.ACIC */
#define IFX_AGBT_TACU_ACIC_MSK (0x7fffffffu)

/** \brief Offset for Ifx_AGBT_TACU_Bits.ACIC */
#define IFX_AGBT_TACU_ACIC_OFF (0u)

/** \brief Length for Ifx_AGBT_TACU_Bits.ACIEN */
#define IFX_AGBT_TACU_ACIEN_LEN (1u)

/** \brief Mask for Ifx_AGBT_TACU_Bits.ACIEN */
#define IFX_AGBT_TACU_ACIEN_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_TACU_Bits.ACIEN */
#define IFX_AGBT_TACU_ACIEN_OFF (31u)

/** \brief Length for Ifx_AGBT_FBFLV_Bits.CURLVL */
#define IFX_AGBT_FBFLV_CURLVL_LEN (8u)

/** \brief Mask for Ifx_AGBT_FBFLV_Bits.CURLVL */
#define IFX_AGBT_FBFLV_CURLVL_MSK (0xffu)

/** \brief Offset for Ifx_AGBT_FBFLV_Bits.CURLVL */
#define IFX_AGBT_FBFLV_CURLVL_OFF (0u)

/** \brief Length for Ifx_AGBT_FBFLV_Bits.MAXLVL */
#define IFX_AGBT_FBFLV_MAXLVL_LEN (8u)

/** \brief Mask for Ifx_AGBT_FBFLV_Bits.MAXLVL */
#define IFX_AGBT_FBFLV_MAXLVL_MSK (0xffu)

/** \brief Offset for Ifx_AGBT_FBFLV_Bits.MAXLVL */
#define IFX_AGBT_FBFLV_MAXLVL_OFF (8u)

/** \brief Length for Ifx_AGBT_IRS_Bits.OFW */
#define IFX_AGBT_IRS_OFW_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRS_Bits.OFW */
#define IFX_AGBT_IRS_OFW_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRS_Bits.OFW */
#define IFX_AGBT_IRS_OFW_OFF (0u)

/** \brief Length for Ifx_AGBT_IRS_Bits.WM */
#define IFX_AGBT_IRS_WM_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRS_Bits.WM */
#define IFX_AGBT_IRS_WM_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRS_Bits.WM */
#define IFX_AGBT_IRS_WM_OFF (1u)

/** \brief Length for Ifx_AGBT_IRS_Bits.HW */
#define IFX_AGBT_IRS_HW_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRS_Bits.HW */
#define IFX_AGBT_IRS_HW_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRS_Bits.HW */
#define IFX_AGBT_IRS_HW_OFF (2u)

/** \brief Length for Ifx_AGBT_IRS_Bits.FER */
#define IFX_AGBT_IRS_FER_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRS_Bits.FER */
#define IFX_AGBT_IRS_FER_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRS_Bits.FER */
#define IFX_AGBT_IRS_FER_OFF (3u)

/** \brief Length for Ifx_AGBT_IRE_Bits.OFWE */
#define IFX_AGBT_IRE_OFWE_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRE_Bits.OFWE */
#define IFX_AGBT_IRE_OFWE_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRE_Bits.OFWE */
#define IFX_AGBT_IRE_OFWE_OFF (0u)

/** \brief Length for Ifx_AGBT_IRE_Bits.WME */
#define IFX_AGBT_IRE_WME_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRE_Bits.WME */
#define IFX_AGBT_IRE_WME_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRE_Bits.WME */
#define IFX_AGBT_IRE_WME_OFF (1u)

/** \brief Length for Ifx_AGBT_IRE_Bits.HWE */
#define IFX_AGBT_IRE_HWE_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRE_Bits.HWE */
#define IFX_AGBT_IRE_HWE_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRE_Bits.HWE */
#define IFX_AGBT_IRE_HWE_OFF (2u)

/** \brief Length for Ifx_AGBT_IRE_Bits.FERE */
#define IFX_AGBT_IRE_FERE_LEN (1u)

/** \brief Mask for Ifx_AGBT_IRE_Bits.FERE */
#define IFX_AGBT_IRE_FERE_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_IRE_Bits.FERE */
#define IFX_AGBT_IRE_FERE_OFF (3u)

/** \brief Length for Ifx_AGBT_PYCR1_Bits.IPLL25U */
#define IFX_AGBT_PYCR1_IPLL25U_LEN (2u)

/** \brief Mask for Ifx_AGBT_PYCR1_Bits.IPLL25U */
#define IFX_AGBT_PYCR1_IPLL25U_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PYCR1_Bits.IPLL25U */
#define IFX_AGBT_PYCR1_IPLL25U_OFF (2u)

/** \brief Length for Ifx_AGBT_PYCR1_Bits.ITXOCD25 */
#define IFX_AGBT_PYCR1_ITXOCD25_LEN (2u)

/** \brief Mask for Ifx_AGBT_PYCR1_Bits.ITXOCD25 */
#define IFX_AGBT_PYCR1_ITXOCD25_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PYCR1_Bits.ITXOCD25 */
#define IFX_AGBT_PYCR1_ITXOCD25_OFF (16u)

/** \brief Length for Ifx_AGBT_PYCR1_Bits.ITXOCD50 */
#define IFX_AGBT_PYCR1_ITXOCD50_LEN (2u)

/** \brief Mask for Ifx_AGBT_PYCR1_Bits.ITXOCD50 */
#define IFX_AGBT_PYCR1_ITXOCD50_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PYCR1_Bits.ITXOCD50 */
#define IFX_AGBT_PYCR1_ITXOCD50_OFF (18u)

/** \brief Length for Ifx_AGBT_PYCR1_Bits.ITXOCDVR */
#define IFX_AGBT_PYCR1_ITXOCDVR_LEN (2u)

/** \brief Mask for Ifx_AGBT_PYCR1_Bits.ITXOCDVR */
#define IFX_AGBT_PYCR1_ITXOCDVR_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PYCR1_Bits.ITXOCDVR */
#define IFX_AGBT_PYCR1_ITXOCDVR_OFF (20u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.TXLDOVS */
#define IFX_AGBT_PYCR2_TXLDOVS_LEN (3u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.TXLDOVS */
#define IFX_AGBT_PYCR2_TXLDOVS_MSK (0x7u)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.TXLDOVS */
#define IFX_AGBT_PYCR2_TXLDOVS_OFF (4u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.TXOCDSLE */
#define IFX_AGBT_PYCR2_TXOCDSLE_LEN (5u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.TXOCDSLE */
#define IFX_AGBT_PYCR2_TXOCDSLE_MSK (0x1fu)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.TXOCDSLE */
#define IFX_AGBT_PYCR2_TXOCDSLE_OFF (8u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.TXOCDSL */
#define IFX_AGBT_PYCR2_TXOCDSL_LEN (3u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.TXOCDSL */
#define IFX_AGBT_PYCR2_TXOCDSL_MSK (0x7u)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.TXOCDSL */
#define IFX_AGBT_PYCR2_TXOCDSL_OFF (16u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.TXDEEMPH */
#define IFX_AGBT_PYCR2_TXDEEMPH_LEN (1u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.TXDEEMPH */
#define IFX_AGBT_PYCR2_TXDEEMPH_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.TXDEEMPH */
#define IFX_AGBT_PYCR2_TXDEEMPH_OFF (19u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.TXSERRST */
#define IFX_AGBT_PYCR2_TXSERRST_LEN (1u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.TXSERRST */
#define IFX_AGBT_PYCR2_TXSERRST_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.TXSERRST */
#define IFX_AGBT_PYCR2_TXSERRST_OFF (20u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.CKRXDIV2 */
#define IFX_AGBT_PYCR2_CKRXDIV2_LEN (1u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.CKRXDIV2 */
#define IFX_AGBT_PYCR2_CKRXDIV2_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.CKRXDIV2 */
#define IFX_AGBT_PYCR2_CKRXDIV2_OFF (22u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.CKRXTERM */
#define IFX_AGBT_PYCR2_CKRXTERM_LEN (3u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.CKRXTERM */
#define IFX_AGBT_PYCR2_CKRXTERM_MSK (0x7u)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.CKRXTERM */
#define IFX_AGBT_PYCR2_CKRXTERM_OFF (24u)

/** \brief Length for Ifx_AGBT_PYCR2_Bits.TXSRINVC */
#define IFX_AGBT_PYCR2_TXSRINVC_LEN (1u)

/** \brief Mask for Ifx_AGBT_PYCR2_Bits.TXSRINVC */
#define IFX_AGBT_PYCR2_TXSRINVC_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PYCR2_Bits.TXSRINVC */
#define IFX_AGBT_PYCR2_TXSRINVC_OFF (27u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.RBUF2G5 */
#define IFX_AGBT_PACR1_RBUF2G5_LEN (4u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.RBUF2G5 */
#define IFX_AGBT_PACR1_RBUF2G5_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.RBUF2G5 */
#define IFX_AGBT_PACR1_RBUF2G5_OFF (8u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.IBUF2G5 */
#define IFX_AGBT_PACR1_IBUF2G5_LEN (2u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.IBUF2G5 */
#define IFX_AGBT_PACR1_IBUF2G5_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.IBUF2G5 */
#define IFX_AGBT_PACR1_IBUF2G5_OFF (12u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.IBUFDCO */
#define IFX_AGBT_PACR1_IBUFDCO_LEN (2u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.IBUFDCO */
#define IFX_AGBT_PACR1_IBUFDCO_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.IBUFDCO */
#define IFX_AGBT_PACR1_IBUFDCO_OFF (14u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.IDIV2F5G */
#define IFX_AGBT_PACR1_IDIV2F5G_LEN (2u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.IDIV2F5G */
#define IFX_AGBT_PACR1_IDIV2F5G_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.IDIV2F5G */
#define IFX_AGBT_PACR1_IDIV2F5G_OFF (16u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.IDIV4F5G */
#define IFX_AGBT_PACR1_IDIV4F5G_LEN (2u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.IDIV4F5G */
#define IFX_AGBT_PACR1_IDIV4F5G_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.IDIV4F5G */
#define IFX_AGBT_PACR1_IDIV4F5G_OFF (18u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.IDCOLDO */
#define IFX_AGBT_PACR1_IDCOLDO_LEN (2u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.IDCOLDO */
#define IFX_AGBT_PACR1_IDCOLDO_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.IDCOLDO */
#define IFX_AGBT_PACR1_IDCOLDO_OFF (20u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.IPICOND */
#define IFX_AGBT_PACR1_IPICOND_LEN (2u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.IPICOND */
#define IFX_AGBT_PACR1_IPICOND_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.IPICOND */
#define IFX_AGBT_PACR1_IPICOND_OFF (22u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.IPI */
#define IFX_AGBT_PACR1_IPI_LEN (2u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.IPI */
#define IFX_AGBT_PACR1_IPI_MSK (0x3u)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.IPI */
#define IFX_AGBT_PACR1_IPI_OFF (24u)

/** \brief Length for Ifx_AGBT_PACR1_Bits.BETALKD */
#define IFX_AGBT_PACR1_BETALKD_LEN (4u)

/** \brief Mask for Ifx_AGBT_PACR1_Bits.BETALKD */
#define IFX_AGBT_PACR1_BETALKD_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PACR1_Bits.BETALKD */
#define IFX_AGBT_PACR1_BETALKD_OFF (26u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.RDIV2F5G */
#define IFX_AGBT_PACR2_RDIV2F5G_LEN (4u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.RDIV2F5G */
#define IFX_AGBT_PACR2_RDIV2F5G_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.RDIV2F5G */
#define IFX_AGBT_PACR2_RDIV2F5G_OFF (0u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.RDIV4F5G */
#define IFX_AGBT_PACR2_RDIV4F5G_LEN (4u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.RDIV4F5G */
#define IFX_AGBT_PACR2_RDIV4F5G_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.RDIV4F5G */
#define IFX_AGBT_PACR2_RDIV4F5G_OFF (4u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.DCLKDEN */
#define IFX_AGBT_PACR2_DCLKDEN_LEN (1u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.DCLKDEN */
#define IFX_AGBT_PACR2_DCLKDEN_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.DCLKDEN */
#define IFX_AGBT_PACR2_DCLKDEN_OFF (8u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.DCLKIEN */
#define IFX_AGBT_PACR2_DCLKIEN_LEN (1u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.DCLKIEN */
#define IFX_AGBT_PACR2_DCLKIEN_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.DCLKIEN */
#define IFX_AGBT_PACR2_DCLKIEN_OFF (9u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.FRACMEN */
#define IFX_AGBT_PACR2_FRACMEN_LEN (1u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.FRACMEN */
#define IFX_AGBT_PACR2_FRACMEN_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.FRACMEN */
#define IFX_AGBT_PACR2_FRACMEN_OFF (10u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.LDOVREFS */
#define IFX_AGBT_PACR2_LDOVREFS_LEN (3u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.LDOVREFS */
#define IFX_AGBT_PACR2_LDOVREFS_MSK (0x7u)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.LDOVREFS */
#define IFX_AGBT_PACR2_LDOVREFS_OFF (12u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.MMDSEL */
#define IFX_AGBT_PACR2_MMDSEL_LEN (7u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.MMDSEL */
#define IFX_AGBT_PACR2_MMDSEL_MSK (0x7fu)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.MMDSEL */
#define IFX_AGBT_PACR2_MMDSEL_OFF (16u)

/** \brief Length for Ifx_AGBT_PACR2_Bits.PICAPSEL */
#define IFX_AGBT_PACR2_PICAPSEL_LEN (3u)

/** \brief Mask for Ifx_AGBT_PACR2_Bits.PICAPSEL */
#define IFX_AGBT_PACR2_PICAPSEL_MSK (0x7u)

/** \brief Offset for Ifx_AGBT_PACR2_Bits.PICAPSEL */
#define IFX_AGBT_PACR2_PICAPSEL_OFF (24u)

/** \brief Length for Ifx_AGBT_PDCR1_Bits.ALPHAP */
#define IFX_AGBT_PDCR1_ALPHAP_LEN (4u)

/** \brief Mask for Ifx_AGBT_PDCR1_Bits.ALPHAP */
#define IFX_AGBT_PDCR1_ALPHAP_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PDCR1_Bits.ALPHAP */
#define IFX_AGBT_PDCR1_ALPHAP_OFF (0u)

/** \brief Length for Ifx_AGBT_PDCR1_Bits.GAMMAP */
#define IFX_AGBT_PDCR1_GAMMAP_LEN (4u)

/** \brief Mask for Ifx_AGBT_PDCR1_Bits.GAMMAP */
#define IFX_AGBT_PDCR1_GAMMAP_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PDCR1_Bits.GAMMAP */
#define IFX_AGBT_PDCR1_GAMMAP_OFF (4u)

/** \brief Length for Ifx_AGBT_PDCR1_Bits.ACCFACQ */
#define IFX_AGBT_PDCR1_ACCFACQ_LEN (1u)

/** \brief Mask for Ifx_AGBT_PDCR1_Bits.ACCFACQ */
#define IFX_AGBT_PDCR1_ACCFACQ_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PDCR1_Bits.ACCFACQ */
#define IFX_AGBT_PDCR1_ACCFACQ_OFF (15u)

/** \brief Length for Ifx_AGBT_PDCR1_Bits.LFWACCM */
#define IFX_AGBT_PDCR1_LFWACCM_LEN (4u)

/** \brief Mask for Ifx_AGBT_PDCR1_Bits.LFWACCM */
#define IFX_AGBT_PDCR1_LFWACCM_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PDCR1_Bits.LFWACCM */
#define IFX_AGBT_PDCR1_LFWACCM_OFF (16u)

/** \brief Length for Ifx_AGBT_PDCR1_Bits.UDCW */
#define IFX_AGBT_PDCR1_UDCW_LEN (4u)

/** \brief Mask for Ifx_AGBT_PDCR1_Bits.UDCW */
#define IFX_AGBT_PDCR1_UDCW_MSK (0xfu)

/** \brief Offset for Ifx_AGBT_PDCR1_Bits.UDCW */
#define IFX_AGBT_PDCR1_UDCW_OFF (20u)

/** \brief Length for Ifx_AGBT_PDCR1_Bits.ENBYCAL */
#define IFX_AGBT_PDCR1_ENBYCAL_LEN (1u)

/** \brief Mask for Ifx_AGBT_PDCR1_Bits.ENBYCAL */
#define IFX_AGBT_PDCR1_ENBYCAL_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PDCR1_Bits.ENBYCAL */
#define IFX_AGBT_PDCR1_ENBYCAL_OFF (24u)

/** \brief Length for Ifx_AGBT_PDST1_Bits.PDST12 */
#define IFX_AGBT_PDST1_PDST12_LEN (1u)

/** \brief Mask for Ifx_AGBT_PDST1_Bits.PDST12 */
#define IFX_AGBT_PDST1_PDST12_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PDST1_Bits.PDST12 */
#define IFX_AGBT_PDST1_PDST12_OFF (0u)

/** \brief Length for Ifx_AGBT_PDST1_Bits.PDST13 */
#define IFX_AGBT_PDST1_PDST13_LEN (1u)

/** \brief Mask for Ifx_AGBT_PDST1_Bits.PDST13 */
#define IFX_AGBT_PDST1_PDST13_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_PDST1_Bits.PDST13 */
#define IFX_AGBT_PDST1_PDST13_OFF (1u)

/** \brief Length for Ifx_AGBT_KRSTCLR_Bits.CLR */
#define IFX_AGBT_KRSTCLR_CLR_LEN (1u)

/** \brief Mask for Ifx_AGBT_KRSTCLR_Bits.CLR */
#define IFX_AGBT_KRSTCLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_KRSTCLR_Bits.CLR */
#define IFX_AGBT_KRSTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_AGBT_KRST1_Bits.RST */
#define IFX_AGBT_KRST1_RST_LEN (1u)

/** \brief Mask for Ifx_AGBT_KRST1_Bits.RST */
#define IFX_AGBT_KRST1_RST_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_KRST1_Bits.RST */
#define IFX_AGBT_KRST1_RST_OFF (0u)

/** \brief Length for Ifx_AGBT_KRST0_Bits.RST */
#define IFX_AGBT_KRST0_RST_LEN (1u)

/** \brief Mask for Ifx_AGBT_KRST0_Bits.RST */
#define IFX_AGBT_KRST0_RST_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_KRST0_Bits.RST */
#define IFX_AGBT_KRST0_RST_OFF (0u)

/** \brief Length for Ifx_AGBT_KRST0_Bits.RSTSTAT */
#define IFX_AGBT_KRST0_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_AGBT_KRST0_Bits.RSTSTAT */
#define IFX_AGBT_KRST0_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_KRST0_Bits.RSTSTAT */
#define IFX_AGBT_KRST0_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN0 */
#define IFX_AGBT_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN0 */
#define IFX_AGBT_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN0 */
#define IFX_AGBT_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN1 */
#define IFX_AGBT_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN1 */
#define IFX_AGBT_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN1 */
#define IFX_AGBT_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN2 */
#define IFX_AGBT_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN2 */
#define IFX_AGBT_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN2 */
#define IFX_AGBT_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN3 */
#define IFX_AGBT_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN3 */
#define IFX_AGBT_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN3 */
#define IFX_AGBT_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN4 */
#define IFX_AGBT_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN4 */
#define IFX_AGBT_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN4 */
#define IFX_AGBT_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN5 */
#define IFX_AGBT_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN5 */
#define IFX_AGBT_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN5 */
#define IFX_AGBT_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN6 */
#define IFX_AGBT_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN6 */
#define IFX_AGBT_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN6 */
#define IFX_AGBT_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN7 */
#define IFX_AGBT_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN7 */
#define IFX_AGBT_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN7 */
#define IFX_AGBT_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN8 */
#define IFX_AGBT_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN8 */
#define IFX_AGBT_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN8 */
#define IFX_AGBT_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN9 */
#define IFX_AGBT_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN9 */
#define IFX_AGBT_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN9 */
#define IFX_AGBT_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN10 */
#define IFX_AGBT_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN10 */
#define IFX_AGBT_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN10 */
#define IFX_AGBT_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN11 */
#define IFX_AGBT_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN11 */
#define IFX_AGBT_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN11 */
#define IFX_AGBT_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN12 */
#define IFX_AGBT_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN12 */
#define IFX_AGBT_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN12 */
#define IFX_AGBT_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN13 */
#define IFX_AGBT_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN13 */
#define IFX_AGBT_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN13 */
#define IFX_AGBT_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN14 */
#define IFX_AGBT_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN14 */
#define IFX_AGBT_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN14 */
#define IFX_AGBT_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN15 */
#define IFX_AGBT_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN15 */
#define IFX_AGBT_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN15 */
#define IFX_AGBT_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN16 */
#define IFX_AGBT_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN16 */
#define IFX_AGBT_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN16 */
#define IFX_AGBT_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN17 */
#define IFX_AGBT_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN17 */
#define IFX_AGBT_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN17 */
#define IFX_AGBT_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN18 */
#define IFX_AGBT_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN18 */
#define IFX_AGBT_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN18 */
#define IFX_AGBT_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN19 */
#define IFX_AGBT_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN19 */
#define IFX_AGBT_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN19 */
#define IFX_AGBT_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN20 */
#define IFX_AGBT_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN20 */
#define IFX_AGBT_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN20 */
#define IFX_AGBT_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN21 */
#define IFX_AGBT_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN21 */
#define IFX_AGBT_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN21 */
#define IFX_AGBT_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN22 */
#define IFX_AGBT_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN22 */
#define IFX_AGBT_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN22 */
#define IFX_AGBT_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN23 */
#define IFX_AGBT_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN23 */
#define IFX_AGBT_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN23 */
#define IFX_AGBT_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN24 */
#define IFX_AGBT_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN24 */
#define IFX_AGBT_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN24 */
#define IFX_AGBT_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN25 */
#define IFX_AGBT_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN25 */
#define IFX_AGBT_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN25 */
#define IFX_AGBT_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN26 */
#define IFX_AGBT_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN26 */
#define IFX_AGBT_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN26 */
#define IFX_AGBT_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN27 */
#define IFX_AGBT_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN27 */
#define IFX_AGBT_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN27 */
#define IFX_AGBT_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN28 */
#define IFX_AGBT_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN28 */
#define IFX_AGBT_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN28 */
#define IFX_AGBT_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN29 */
#define IFX_AGBT_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN29 */
#define IFX_AGBT_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN29 */
#define IFX_AGBT_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN30 */
#define IFX_AGBT_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN30 */
#define IFX_AGBT_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN30 */
#define IFX_AGBT_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_AGBT_ACCEN0_Bits.EN31 */
#define IFX_AGBT_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_AGBT_ACCEN0_Bits.EN31 */
#define IFX_AGBT_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_AGBT_ACCEN0_Bits.EN31 */
#define IFX_AGBT_ACCEN0_EN31_OFF (31u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXAGBT_BF_H */
