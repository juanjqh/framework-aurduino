/**
 * \file IfxCif_reg.h
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
 * \defgroup IfxSfr_Cif_Registers_Cfg Cif address
 * \ingroup IfxSfr_Cif_Registers
 * 
 * \defgroup IfxSfr_Cif_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Cif_Registers_Cfg
 *
 * \defgroup IfxSfr_Cif_Registers_Cfg_Cif 2-CIF
 * \ingroup IfxSfr_Cif_Registers_Cfg
 *
 *
 */
#ifndef IFXCIF_REG_H
#define IFXCIF_REG_H 1
/******************************************************************************/
#include "IfxCif_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Cif_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CIF object */
#define MODULE_CIF /*lint --e(923, 9078)*/ ((*(Ifx_CIF*)0xFA001F00u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_Registers_Cfg_Cif
 * \{  */
/** \brief 0, Clock Control Register */
#define CIF_BBB_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_CLC*)0xFA001F00u)

/** \brief 4, Module Identification Register */
#define CIF_BBB_MODID /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_MODID*)0xFA001F04u)

/** \brief 8, General Purpose Control Register */
#define CIF_BBB_GPCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_GPCTL*)0xFA001F08u)

/** \brief C, Access Enable Register 0 */
#define CIF_BBB_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_ACCEN0*)0xFA001F0Cu)

/** \brief 10, Access Enable Register 1 */
#define CIF_BBB_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_ACCEN1*)0xFA001F10u)

/** \brief 14, Kernel Reset Register 0 */
#define CIF_BBB_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_KRST0*)0xFA001F14u)

/** \brief 18, Kernel Reset Register 1 */
#define CIF_BBB_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_KRST1*)0xFA001F18u)

/** \brief 1C, Kernel Reset Status Clear Register */
#define CIF_BBB_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_BBB_KRSTCLR*)0xFA001F1Cu)

/** \brief 0, Clock Control Register */
#define CIF_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_CCL*)0xFA002000u)

/** \brief 8, CIF Revision Identification Register */
#define CIF_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ID*)0xFA002008u)

/** \brief 10, CIF Internal Clock Control Register */
#define CIF_ICCL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ICCL*)0xFA002010u)

/** \brief 14, CIF Internal Reset Control Register */
#define CIF_IRCL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_IRCL*)0xFA002014u)

/** \brief 18, CIF Data Path Control Register */
#define CIF_DPCL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DPCL*)0xFA002018u)

/** \brief 0, ISP Global Control Register */
#define CIF_ISP_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_CTRL*)0xFA002400u)

/** \brief 4, ISP Acquisition Properties Register */
#define CIF_ISP_ACQ_PROP /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ACQ_PROP*)0xFA002404u)

/** \brief 8, ISP Acquisition Horizontal Offset Register */
#define CIF_ISP_ACQ_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ACQ_H_OFFS*)0xFA002408u)

/** \brief C, ISP Acquistion Vertical Offset Register */
#define CIF_ISP_ACQ_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ACQ_V_OFFS*)0xFA00240Cu)

/** \brief 10, ISP Acquisition Horizontal Size Register */
#define CIF_ISP_ACQ_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ACQ_H_SIZE*)0xFA002410u)

/** \brief 14, ISP Acquisition Vertical Size Register */
#define CIF_ISP_ACQ_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ACQ_V_SIZE*)0xFA002414u)

/** \brief 18, ISP Acquisition Number of Frames Register */
#define CIF_ISP_ACQ_NR_FRAMES /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ACQ_NR_FRAMES*)0xFA002418u)

/** \brief 194, ISP Output Window Horizontal Offset Register */
#define CIF_ISP_OUT_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_H_OFFS*)0xFA002594u)

/** \brief 198, ISP Output Window Vertical Offset Register */
#define CIF_ISP_OUT_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_V_OFFS*)0xFA002598u)

/** \brief 19C, ISP Output Horizontal Picture Size Register */
#define CIF_ISP_OUT_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_H_SIZE*)0xFA00259Cu)

/** \brief 1A0, ISP Output Vertical Picture Size Register */
#define CIF_ISP_OUT_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_V_SIZE*)0xFA0025A0u)

/** \brief 1A8, ISP Shadow Flags Register */
#define CIF_ISP_FLAGS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_FLAGS_SHD*)0xFA0025A8u)

/** \brief 1AC, ISP Output Window Horizontal Offset Shadow Register */
#define CIF_ISP_OUT_H_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_H_OFFS_SHD*)0xFA0025ACu)

/** \brief 1B0, ISP Output Window Vertical Offset Shadow Register */
#define CIF_ISP_OUT_V_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_V_OFFS_SHD*)0xFA0025B0u)

/** \brief 1B4, ISP Output Horizontal Picture Size Shadow Register */
#define CIF_ISP_OUT_H_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_H_SIZE_SHD*)0xFA0025B4u)

/** \brief 1B8, ISP Output Vertical Picture Size Shadow Register */
#define CIF_ISP_OUT_V_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_OUT_V_SIZE_SHD*)0xFA0025B8u)

/** \brief 1BC, ISP Interrupt Mask Register */
#define CIF_ISP_IMSC /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_IMSC*)0xFA0025BCu)

/** \brief 1C0, ISP Raw Interrupt Status Register */
#define CIF_ISP_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_RIS*)0xFA0025C0u)

/** \brief 1C4, ISP Masked Interrupt Status Register */
#define CIF_ISP_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_MIS*)0xFA0025C4u)

/** \brief 1C8, ISP Interrupt Clear Register */
#define CIF_ISP_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ICR*)0xFA0025C8u)

/** \brief 1CC, ISP Interrupt Set Register */
#define CIF_ISP_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ISR*)0xFA0025CCu)

/** \brief 23C, ISP Error Register */
#define CIF_ISP_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ERR*)0xFA00263Cu)

/** \brief 240, ISP Error Clear Register */
#define CIF_ISP_ERR_CLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_ERR_CLR*)0xFA002640u)

/** \brief 244, ISP Frame Counter Register */
#define CIF_ISP_FRAME_COUNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISP_FRAME_COUNT*)0xFA002644u)

/** \brief 0, Memory Interface Global Control Register */
#define CIF_MI_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_CTRL*)0xFA003400u)

/** \brief 4, Memory Interface Control Register For Address Init And Skip Function Register */
#define CIF_MI_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_INIT*)0xFA003404u)

/** \brief 8, Memory Interface Base Address For Main Picture Y Component, JPEG or RAW Data Register */
#define CIF_MI_MP_Y_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_BASE_AD_INIT*)0xFA003408u)

/** \brief C, Memory Interface Size of main picture Y component, JPEG or RAW data Register */
#define CIF_MI_MP_Y_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_SIZE_INIT*)0xFA00340Cu)

/** \brief 10, Memory Interface Offset Counter Init Value For Main Picture Y, JPEG or RAW Data Register */
#define CIF_MI_MP_Y_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_OFFS_CNT_INIT*)0xFA003410u)

/** \brief 14, Memory Interface Offset Counter Start Value For Main Picture Y, JPEG or RAW Data Register */
#define CIF_MI_MP_Y_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_OFFS_CNT_START*)0xFA003414u)

/** \brief 18, Memory Interface Fill Level Interrupt Offset Value For Main Picture Y, JPEG or RAW Data Register */
#define CIF_MI_MP_Y_IRQ_OFFS_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_IRQ_OFFS_INIT*)0xFA003418u)

/** \brief 1C, Memory Interface Base Address For Main Picture Cb Component Ring Buffer Register */
#define CIF_MI_MP_CB_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CB_BASE_AD_INIT*)0xFA00341Cu)

/** \brief 20, Memory Interface Size Of Main Picture Cb Component Ring Buffer Register */
#define CIF_MI_MP_CB_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CB_SIZE_INIT*)0xFA003420u)

/** \brief 24, Memory Interface Offset Counter Init Value For Main Picture Cb Component Ring Buffer Register */
#define CIF_MI_MP_CB_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CB_OFFS_CNT_INIT*)0xFA003424u)

/** \brief 28, Memory Interface Offset Counter Start Value For Main Picture Cb Component Ring Buffer Register */
#define CIF_MI_MP_CB_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CB_OFFS_CNT_START*)0xFA003428u)

/** \brief 2C, Memory Interface Base Address For Main Picture Cr Component Ring Buffer Register */
#define CIF_MI_MP_CR_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CR_BASE_AD_INIT*)0xFA00342Cu)

/** \brief 30, Memory Interface Size Of Main Picture Cr Component Ring Buffer Register */
#define CIF_MI_MP_CR_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CR_SIZE_INIT*)0xFA003430u)

/** \brief 34, Memory Interface Offset Counter Init value For Main Picture Cr Component Ring Buffer Register */
#define CIF_MI_MP_CR_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CR_OFFS_CNT_INIT*)0xFA003434u)

/** \brief 38, Memory Interface Offset Counter Start Value For Main Picture Cr Component Ring Buffer Register */
#define CIF_MI_MP_CR_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CR_OFFS_CNT_START*)0xFA003438u)

/** \brief 70, Memory Interface Counter Value of JPEG or RAW Data Bytes Register */
#define CIF_MI_BYTE_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_BYTE_CNT*)0xFA003470u)

/** \brief 74, Memory Interface Global Control Internal Shadow Register */
#define CIF_MI_CTRL_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_CTRL_SHD*)0xFA003474u)

/** \brief 78, Memory Interface Base Address Shadow Register For Main Picture Y Component, JPEG Register */
#define CIF_MI_MP_Y_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_BASE_AD_SHD*)0xFA003478u)

/** \brief 7C, Memory Interface Size Shadow Register of Main Picture Y Component,JPEG or RAW Data Register */
#define CIF_MI_MP_Y_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_SIZE_SHD*)0xFA00347Cu)

/** \brief 80, Memory Interface Current Offset Counter of Main Picture Y Component JPEG or RAW Register */
#define CIF_MI_MP_Y_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_OFFS_CNT_SHD*)0xFA003480u)

/** \brief 84, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Main Picture Y Register */
#define CIF_MI_MP_Y_IRQ_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_Y_IRQ_OFFS_SHD*)0xFA003484u)

/** \brief 88, Memory Interface Base Address Shadow Register For Main Picture Cb Component Ring Register */
#define CIF_MI_MP_CB_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CB_BASE_AD_SHD*)0xFA003488u)

/** \brief 8C, Memory Interface Size Shadow Register Of Main Picture Cb Component Ring Buffer Register */
#define CIF_MI_MP_CB_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CB_SIZE_SHD*)0xFA00348Cu)

/** \brief 90, Memory Interface Current Offset Counter Of Main Picture Cb Component Ring Buffer Register */
#define CIF_MI_MP_CB_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CB_OFFS_CNT_SHD*)0xFA003490u)

/** \brief 94, Memory Interface Base Address Shadow Register For Main Picture Cr Component Ring Register */
#define CIF_MI_MP_CR_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CR_BASE_AD_SHD*)0xFA003494u)

/** \brief 98, Memory Interface Size Shadow Register Of Main Picture Cr Component Ring Buffer Register */
#define CIF_MI_MP_CR_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CR_SIZE_SHD*)0xFA003498u)

/** \brief 9C, Memory Interface Current Offset Counter Of Main Picture Cr Component Ring Buffer Register */
#define CIF_MI_MP_CR_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MP_CR_OFFS_CNT_SHD*)0xFA00349Cu)

/** \brief F8, MI Interrupt Mask \u20181\u2019 interrupt active \u20180\u2019 interrupt masked */
#define CIF_MI_IMSC /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_IMSC*)0xFA0034F8u)

/** \brief FC, MI Raw Interrupt Status Register */
#define CIF_MI_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_RIS*)0xFA0034FCu)

/** \brief 100, MI Masked Interrupt Status Registe */
#define CIF_MI_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_MIS*)0xFA003500u)

/** \brief 104, MI Interrupt Clear Register */
#define CIF_MI_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_ICR*)0xFA003504u)

/** \brief 108, MI Interrupt Set Register */
#define CIF_MI_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_ISR*)0xFA003508u)

/** \brief 10C, MI Status Register */
#define CIF_MI_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_STATUS*)0xFA00350Cu)

/** \brief 110, MI Status Clear Register */
#define CIF_MI_STATUS_CLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MI_STATUS_CLR*)0xFA003510u)

/** \brief 0, JPE Command To Start Stream Header Generation Register */
#define CIF_JPE_GEN_HEADER /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_GEN_HEADER*)0xFA003800u)

/** \brief 4, JPE Start Command To Start JFIF Stream Encoding Register */
#define CIF_JPE_ENCODE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ENCODE*)0xFA003804u)

/** \brief 8, JPE Automatic Configuration Update Register */
#define CIF_JPE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_INIT*)0xFA003808u)

/** \brief C, JPE Y Value Scaling Control Register */
#define CIF_JPE_Y_SCALE_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_Y_SCALE_EN*)0xFA00380Cu)

/** \brief 10, JPE Cb/Cr Value Scaling Control Register */
#define CIF_JPE_CBCR_SCALE_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_CBCR_SCALE_EN*)0xFA003810u)

/** \brief 14, JPE Header Generation Debug Register */
#define CIF_JPE_TABLE_FLUSH /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TABLE_FLUSH*)0xFA003814u)

/** \brief 18, JPEG Codec Horizontal Image Size For Encoding Register */
#define CIF_JPE_ENC_HSIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ENC_HSIZE*)0xFA003818u)

/** \brief 1C, JPEG Codec Vertical Image Size For Encoding Register */
#define CIF_JPE_ENC_VSIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ENC_VSIZE*)0xFA00381Cu)

/** \brief 20, JPEG Picture Encoding Format Register */
#define CIF_JPE_PIC_FORMAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_PIC_FORMAT*)0xFA003820u)

/** \brief 24, JPE Restart Marker Insertion Register */
#define CIF_JPE_RESTART_INTERVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_RESTART_INTERVAL*)0xFA003824u)

/** \brief 28, Q- table Selector 0, Quant. Table For Y Component */
#define CIF_JPE_TQ_Y_SELECT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TQ_Y_SELECT*)0xFA003828u)

/** \brief 2C, Q- table Selector 1, Quant. Table For U Component */
#define CIF_JPE_TQ_U_SELECT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TQ_U_SELECT*)0xFA00382Cu)

/** \brief 30, Q- table Selector 2 Quant Table For V Component */
#define CIF_JPE_TQ_V_SELECT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TQ_V_SELECT*)0xFA003830u)

/** \brief 34, JPE Huffman Table Selector For DC Values Register */
#define CIF_JPE_DC_TABLE_SELECT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_DC_TABLE_SELECT*)0xFA003834u)

/** \brief 38, JPE Huffman Table Selector For AC Values Register */
#define CIF_JPE_AC_TABLE_SELECT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_AC_TABLE_SELECT*)0xFA003838u)

/** \brief 3C, JPE Table Programming Register */
#define CIF_JPE_TABLE_DATA /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TABLE_DATA*)0xFA00383Cu)

/** \brief 40, JPE Table Programming Select Register */
#define CIF_JPE_TABLE_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TABLE_ID*)0xFA003840u)

/** \brief 44, JPE Huffman AC Table 0 Length Register */
#define CIF_JPE_TAC0_LEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TAC0_LEN*)0xFA003844u)

/** \brief 48, JPE Huffman DC Table 0 Length Register */
#define CIF_JPE_TDC0_LEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TDC0_LEN*)0xFA003848u)

/** \brief 4C, JPE Huffman AC Table 1 Length Register */
#define CIF_JPE_TAC1_LEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TAC1_LEN*)0xFA00384Cu)

/** \brief 50, JPE Huffman DC Table 1 Length Register */
#define CIF_JPE_TDC1_LEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_TDC1_LEN*)0xFA003850u)

/** \brief 58, JPE Encoder Status Flag Register */
#define CIF_JPE_ENCODER_BUSY /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ENCODER_BUSY*)0xFA003858u)

/** \brief 5C, JPE Header Mode Definition Register */
#define CIF_JPE_HEADER_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_HEADER_MODE*)0xFA00385Cu)

/** \brief 60, JPE Encode Mode Register */
#define CIF_JPE_ENCODE_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ENCODE_MODE*)0xFA003860u)

/** \brief 64, JPE Debug Information Register */
#define CIF_JPE_DEBUG /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_DEBUG*)0xFA003864u)

/** \brief 68, JPE Error Interrupt Mask Register */
#define CIF_JPE_ERROR_IMR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ERROR_IMR*)0xFA003868u)

/** \brief 6C, JPE Error Raw Interrupt Status Register */
#define CIF_JPE_ERROR_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ERROR_RIS*)0xFA00386Cu)

/** \brief 70, JPE Error Masked Interrupt Status Register */
#define CIF_JPE_ERROR_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ERROR_MIS*)0xFA003870u)

/** \brief 74, JPE Error Interrupt Clear Register */
#define CIF_JPE_ERROR_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ERROR_ICR*)0xFA003874u)

/** \brief 78, JPE Error Interrupt Set Register */
#define CIF_JPE_ERROR_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_ERROR_ISR*)0xFA003878u)

/** \brief 7C, JPEG Status Interrupt Mask Register */
#define CIF_JPE_STATUS_IMR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_STATUS_IMR*)0xFA00387Cu)

/** \brief 80, JPEG Status Raw Interrupt Status Register */
#define CIF_JPE_STATUS_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_STATUS_RIS*)0xFA003880u)

/** \brief 84, JPEG Status Masked Interrupt Status Register */
#define CIF_JPE_STATUS_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_STATUS_MIS*)0xFA003884u)

/** \brief 88, JPEG Status Interrupt Clear Register */
#define CIF_JPE_STATUS_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_STATUS_ICR*)0xFA003888u)

/** \brief 8C, JPEG Status Interrupt Set Register */
#define CIF_JPE_STATUS_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_JPE_STATUS_ISR*)0xFA00388Cu)

/** \brief 0, ISP Image Stabilization Control Register */
#define CIF_ISPIS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_CTRL*)0xFA004300u)

/** \brief 4, ISP Image Stabilization Recenter Register */
#define CIF_ISPIS_RECENTER /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_RECENTER*)0xFA004304u)

/** \brief 8, ISP Image Stabilization Horizontal Offset Of Output Window Register */
#define CIF_ISPIS_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_H_OFFS*)0xFA004308u)

/** \brief C, ISP Image Stabilization Vertical Offset Of Output Window Register */
#define CIF_ISPIS_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_V_OFFS*)0xFA00430Cu)

/** \brief 10, ISP Image Stabilization Output Horizontal Picture Size Register */
#define CIF_ISPIS_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_H_SIZE*)0xFA004310u)

/** \brief 14, ISP Image Stabilization Output Vertical Picture Size Register */
#define CIF_ISPIS_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_V_SIZE*)0xFA004314u)

/** \brief 18, ISP Image Stabilization Maximum Horizontal Displacement Register */
#define CIF_ISPIS_MAX_DX /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_MAX_DX*)0xFA004318u)

/** \brief 1C, ISP Image Stabilization Maximum Vertical Displacement Register */
#define CIF_ISPIS_MAX_DY /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_MAX_DY*)0xFA00431Cu)

/** \brief 20, ISP Image Stabilization Camera Displacement Register */
#define CIF_ISPIS_DISPLACE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_DISPLACE*)0xFA004320u)

/** \brief 24, ISP Image Current Horizontal Offset Of Output Window Shadow Register */
#define CIF_ISPIS_H_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_H_OFFS_SHD*)0xFA004324u)

/** \brief 28, ISP Image Current Vertical Offset Of Output Window Shadow Register */
#define CIF_ISPIS_V_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_V_OFFS_SHD*)0xFA004328u)

/** \brief 2C, ISP Image Current Output Horizontal Picture Size Shadow Register */
#define CIF_ISPIS_H_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_H_SIZE_SHD*)0xFA00432Cu)

/** \brief 30, ISP Image Current Output Vertical Picture Size Shadow Register */
#define CIF_ISPIS_V_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_ISPIS_V_SIZE_SHD*)0xFA004330u)

/** \brief 0, Watchdog Control Register */
#define CIF_WD_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_CTRL*)0xFA004400u)

/** \brief 4, Watchdog Vertical Timeout Register */
#define CIF_WD_V_TIMEOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_V_TIMEOUT*)0xFA004404u)

/** \brief 8, Watchdog Horizontal Timeout Register */
#define CIF_WD_H_TIMEOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_H_TIMEOUT*)0xFA004408u)

/** \brief C, Watchdog Interrupt Mask Register */
#define CIF_WD_IMSC /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_IMSC*)0xFA00440Cu)

/** \brief 10, Watchdog Raw Interrupt Status Register */
#define CIF_WD_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_RIS*)0xFA004410u)

/** \brief 14, Watchdog Masked Interrupt Status Register */
#define CIF_WD_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_MIS*)0xFA004414u)

/** \brief 18, Watchdog Interrupt Clear Register */
#define CIF_WD_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_ICR*)0xFA004418u)

/** \brief 1C, Watchdog Interrupt Set Register */
#define CIF_WD_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_WD_ISR*)0xFA00441Cu)

/** \brief 0, Linear Downscaler Control Register */
#define CIF_LDS_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_LDS_CTRL*)0xFA004500u)

/** \brief 4, Linear Downscaler Factor Register */
#define CIF_LDS_FAC /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_LDS_FAC*)0xFA004504u)

/** \brief 0, Debug Path Control Register */
#define CIF_DP_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_CTRL*)0xFA004700u)

/** \brief 4, Debug Path Predivider Control Register */
#define CIF_DP_PDIV_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_PDIV_CTRL*)0xFA004704u)

/** \brief 8, Debug Path Frame/Line Counter Status Register */
#define CIF_DP_FLC_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_FLC_STAT*)0xFA004708u)

/** \brief C, Debug Path Predivider Counter Status Register */
#define CIF_DP_PDIV_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_PDIV_STAT*)0xFA00470Cu)

/** \brief 10, Debug Path Timestamp Counter Status Register */
#define CIF_DP_TSC_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_TSC_STAT*)0xFA004710u)

/** \brief 14, Debug Path User Defined Symbol 0 Register */
#define CIF_DP_UDS_1S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA004714u)
/** Alias (User Manual Name) for CIF_DP_UDS_1S0.
* To use register names with standard convension, please use CIF_DP_UDS_1S0.
*/
#define CIF_DP_UDS_0 (CIF_DP_UDS_1S0)

/** \brief 18, Debug Path User Defined Symbol 1 Register */
#define CIF_DP_UDS_1S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA004718u)
/** Alias (User Manual Name) for CIF_DP_UDS_1S1.
* To use register names with standard convension, please use CIF_DP_UDS_1S1.
*/
#define CIF_DP_UDS_1 (CIF_DP_UDS_1S1)

/** \brief 1C, Debug Path User Defined Symbol 2 Register */
#define CIF_DP_UDS_1S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA00471Cu)
/** Alias (User Manual Name) for CIF_DP_UDS_1S2.
* To use register names with standard convension, please use CIF_DP_UDS_1S2.
*/
#define CIF_DP_UDS_2 (CIF_DP_UDS_1S2)

/** \brief 20, Debug Path User Defined Symbol 3 Register */
#define CIF_DP_UDS_1S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA004720u)
/** Alias (User Manual Name) for CIF_DP_UDS_1S3.
* To use register names with standard convension, please use CIF_DP_UDS_1S3.
*/
#define CIF_DP_UDS_3 (CIF_DP_UDS_1S3)

/** \brief 24, Debug Path User Defined Symbol 4 Register */
#define CIF_DP_UDS_1S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA004724u)
/** Alias (User Manual Name) for CIF_DP_UDS_1S4.
* To use register names with standard convension, please use CIF_DP_UDS_1S4.
*/
#define CIF_DP_UDS_4 (CIF_DP_UDS_1S4)

/** \brief 28, Debug Path User Defined Symbol 5 Register */
#define CIF_DP_UDS_1S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA004728u)
/** Alias (User Manual Name) for CIF_DP_UDS_1S5.
* To use register names with standard convension, please use CIF_DP_UDS_1S5.
*/
#define CIF_DP_UDS_5 (CIF_DP_UDS_1S5)

/** \brief 2C, Debug Path User Defined Symbol 6 Register */
#define CIF_DP_UDS_1S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA00472Cu)
/** Alias (User Manual Name) for CIF_DP_UDS_1S6.
* To use register names with standard convension, please use CIF_DP_UDS_1S6.
*/
#define CIF_DP_UDS_6 (CIF_DP_UDS_1S6)

/** \brief 30, Debug Path User Defined Symbol 7 Register */
#define CIF_DP_UDS_1S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_DP_UDS_1S*)0xFA004730u)
/** Alias (User Manual Name) for CIF_DP_UDS_1S7.
* To use register names with standard convension, please use CIF_DP_UDS_1S7.
*/
#define CIF_DP_UDS_7 (CIF_DP_UDS_1S7)

/** \brief 0, Extra Path 0 Image Cropping Control Register */
#define CIF_EP_IC_1S0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_CTRL*)0xFA004900u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_CTRL.
* To use register names with standard convension, please use CIF_EP_IC_1S0_CTRL.
*/
#define CIF_EP_0_IC_CTRL (CIF_EP_IC_1S0_CTRL)

/** \brief 4, Extra Path 0 Image Cropping Recenter Register */
#define CIF_EP_IC_1S0_RECENTER /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_RECENTER*)0xFA004904u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_RECENTER.
* To use register names with standard convension, please use CIF_EP_IC_1S0_RECENTER.
*/
#define CIF_EP_0_IC_RECENTER (CIF_EP_IC_1S0_RECENTER)

/** \brief 8, Extra Path 0 Image Cropping Horizontal Offset of Output Window Register */
#define CIF_EP_IC_1S0_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS*)0xFA004908u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_H_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S0_H_OFFS.
*/
#define CIF_EP_0_IC_H_OFFS (CIF_EP_IC_1S0_H_OFFS)

/** \brief C, Extra Path 0 Image Cropping Vertical Offset Of Output Window Register */
#define CIF_EP_IC_1S0_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS*)0xFA00490Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_V_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S0_V_OFFS.
*/
#define CIF_EP_0_IC_V_OFFS (CIF_EP_IC_1S0_V_OFFS)

/** \brief 10, Extra Path 0 Image Cropping Output Horizontal Picture Size Register */
#define CIF_EP_IC_1S0_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE*)0xFA004910u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_H_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S0_H_SIZE.
*/
#define CIF_EP_0_IC_H_SIZE (CIF_EP_IC_1S0_H_SIZE)

/** \brief 14, Extra Path 0 Image Cropping Output Vertical Picture Size Register */
#define CIF_EP_IC_1S0_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE*)0xFA004914u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_V_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S0_V_SIZE.
*/
#define CIF_EP_0_IC_V_SIZE (CIF_EP_IC_1S0_V_SIZE)

/** \brief 18, Extra Path 0 Image Cropping Maximum Horizontal Displacement Register */
#define CIF_EP_IC_1S0_MAX_DX /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DX*)0xFA004918u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_MAX_DX.
* To use register names with standard convension, please use CIF_EP_IC_1S0_MAX_DX.
*/
#define CIF_EP_0_IC_MAX_DX (CIF_EP_IC_1S0_MAX_DX)

/** \brief 1C, Extra Path 0 Image Cropping Maximum Vertical Displacement Register */
#define CIF_EP_IC_1S0_MAX_DY /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DY*)0xFA00491Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_MAX_DY.
* To use register names with standard convension, please use CIF_EP_IC_1S0_MAX_DY.
*/
#define CIF_EP_0_IC_MAX_DY (CIF_EP_IC_1S0_MAX_DY)

/** \brief 20, Extra Path 0 Image Cropping Camera Displacement Register */
#define CIF_EP_IC_1S0_DISPLACE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_DISPLACE*)0xFA004920u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_DISPLACE.
* To use register names with standard convension, please use CIF_EP_IC_1S0_DISPLACE.
*/
#define CIF_EP_0_IC_DISPLACE (CIF_EP_IC_1S0_DISPLACE)

/** \brief 24, Extra Path 0 Image Cropping Current Horizontal Offset of Output Window Shadow Register */
#define CIF_EP_IC_1S0_H_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS_SHD*)0xFA004924u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_H_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S0_H_OFFS_SHD.
*/
#define CIF_EP_0_IC_H_OFFS_SHD (CIF_EP_IC_1S0_H_OFFS_SHD)

/** \brief 28, Extra Path 0 Image Cropping Current Vertical Offset Of Output Window Shadow Register */
#define CIF_EP_IC_1S0_V_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS_SHD*)0xFA004928u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_V_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S0_V_OFFS_SHD.
*/
#define CIF_EP_0_IC_V_OFFS_SHD (CIF_EP_IC_1S0_V_OFFS_SHD)

/** \brief 2C, Extra Path 0 Image Cropping Current Output Horizontal Picture Size Shadow Register */
#define CIF_EP_IC_1S0_H_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE_SHD*)0xFA00492Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_H_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S0_H_SIZE_SHD.
*/
#define CIF_EP_0_IC_H_SIZE_SHD (CIF_EP_IC_1S0_H_SIZE_SHD)

/** \brief 30, Extra Path 0 Image Cropping Current Output Vertical Picture Size Shadow Register */
#define CIF_EP_IC_1S0_V_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE_SHD*)0xFA004930u)
/** Alias (User Manual Name) for CIF_EP_IC_1S0_V_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S0_V_SIZE_SHD.
*/
#define CIF_EP_0_IC_V_SIZE_SHD (CIF_EP_IC_1S0_V_SIZE_SHD)

/** \brief 100, Extra Path 1 Image Cropping Control Register */
#define CIF_EP_IC_1S1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_CTRL*)0xFA004A00u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_CTRL.
* To use register names with standard convension, please use CIF_EP_IC_1S1_CTRL.
*/
#define CIF_EP_1_IC_CTRL (CIF_EP_IC_1S1_CTRL)

/** \brief 104, Extra Path 1 Image Cropping Recenter Register */
#define CIF_EP_IC_1S1_RECENTER /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_RECENTER*)0xFA004A04u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_RECENTER.
* To use register names with standard convension, please use CIF_EP_IC_1S1_RECENTER.
*/
#define CIF_EP_1_IC_RECENTER (CIF_EP_IC_1S1_RECENTER)

/** \brief 108, Extra Path 1 Image Cropping Horizontal Offset of Output Window Register */
#define CIF_EP_IC_1S1_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS*)0xFA004A08u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_H_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S1_H_OFFS.
*/
#define CIF_EP_1_IC_H_OFFS (CIF_EP_IC_1S1_H_OFFS)

/** \brief 10C, Extra Path 1 Image Cropping Vertical Offset Of Output Window Register */
#define CIF_EP_IC_1S1_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS*)0xFA004A0Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_V_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S1_V_OFFS.
*/
#define CIF_EP_1_IC_V_OFFS (CIF_EP_IC_1S1_V_OFFS)

/** \brief 110, Extra Path 1 Image Cropping Output Horizontal Picture Size Register */
#define CIF_EP_IC_1S1_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE*)0xFA004A10u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_H_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S1_H_SIZE.
*/
#define CIF_EP_1_IC_H_SIZE (CIF_EP_IC_1S1_H_SIZE)

/** \brief 114, Extra Path 1 Image Cropping Output Vertical Picture Size Register */
#define CIF_EP_IC_1S1_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE*)0xFA004A14u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_V_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S1_V_SIZE.
*/
#define CIF_EP_1_IC_V_SIZE (CIF_EP_IC_1S1_V_SIZE)

/** \brief 118, Extra Path 1 Image Cropping Maximum Horizontal Displacement Register */
#define CIF_EP_IC_1S1_MAX_DX /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DX*)0xFA004A18u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_MAX_DX.
* To use register names with standard convension, please use CIF_EP_IC_1S1_MAX_DX.
*/
#define CIF_EP_1_IC_MAX_DX (CIF_EP_IC_1S1_MAX_DX)

/** \brief 11C, Extra Path 1 Image Cropping Maximum Vertical Displacement Register */
#define CIF_EP_IC_1S1_MAX_DY /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DY*)0xFA004A1Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_MAX_DY.
* To use register names with standard convension, please use CIF_EP_IC_1S1_MAX_DY.
*/
#define CIF_EP_1_IC_MAX_DY (CIF_EP_IC_1S1_MAX_DY)

/** \brief 120, Extra Path 1 Image Cropping Camera Displacement Register */
#define CIF_EP_IC_1S1_DISPLACE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_DISPLACE*)0xFA004A20u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_DISPLACE.
* To use register names with standard convension, please use CIF_EP_IC_1S1_DISPLACE.
*/
#define CIF_EP_1_IC_DISPLACE (CIF_EP_IC_1S1_DISPLACE)

/** \brief 124, Extra Path 1 Image Cropping Current Horizontal Offset of Output Window Shadow Register */
#define CIF_EP_IC_1S1_H_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS_SHD*)0xFA004A24u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_H_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S1_H_OFFS_SHD.
*/
#define CIF_EP_1_IC_H_OFFS_SHD (CIF_EP_IC_1S1_H_OFFS_SHD)

/** \brief 128, Extra Path 1 Image Cropping Current Vertical Offset Of Output Window Shadow Register */
#define CIF_EP_IC_1S1_V_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS_SHD*)0xFA004A28u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_V_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S1_V_OFFS_SHD.
*/
#define CIF_EP_1_IC_V_OFFS_SHD (CIF_EP_IC_1S1_V_OFFS_SHD)

/** \brief 12C, Extra Path 1 Image Cropping Current Output Horizontal Picture Size Shadow Register */
#define CIF_EP_IC_1S1_H_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE_SHD*)0xFA004A2Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_H_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S1_H_SIZE_SHD.
*/
#define CIF_EP_1_IC_H_SIZE_SHD (CIF_EP_IC_1S1_H_SIZE_SHD)

/** \brief 130, Extra Path 1 Image Cropping Current Output Vertical Picture Size Shadow Register */
#define CIF_EP_IC_1S1_V_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE_SHD*)0xFA004A30u)
/** Alias (User Manual Name) for CIF_EP_IC_1S1_V_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S1_V_SIZE_SHD.
*/
#define CIF_EP_1_IC_V_SIZE_SHD (CIF_EP_IC_1S1_V_SIZE_SHD)

/** \brief 200, Extra Path 2 Image Cropping Control Register */
#define CIF_EP_IC_1S2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_CTRL*)0xFA004B00u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_CTRL.
* To use register names with standard convension, please use CIF_EP_IC_1S2_CTRL.
*/
#define CIF_EP_2_IC_CTRL (CIF_EP_IC_1S2_CTRL)

/** \brief 204, Extra Path 2 Image Cropping Recenter Register */
#define CIF_EP_IC_1S2_RECENTER /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_RECENTER*)0xFA004B04u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_RECENTER.
* To use register names with standard convension, please use CIF_EP_IC_1S2_RECENTER.
*/
#define CIF_EP_2_IC_RECENTER (CIF_EP_IC_1S2_RECENTER)

/** \brief 208, Extra Path 2 Image Cropping Horizontal Offset of Output Window Register */
#define CIF_EP_IC_1S2_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS*)0xFA004B08u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_H_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S2_H_OFFS.
*/
#define CIF_EP_2_IC_H_OFFS (CIF_EP_IC_1S2_H_OFFS)

/** \brief 20C, Extra Path 2 Image Cropping Vertical Offset Of Output Window Register */
#define CIF_EP_IC_1S2_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS*)0xFA004B0Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_V_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S2_V_OFFS.
*/
#define CIF_EP_2_IC_V_OFFS (CIF_EP_IC_1S2_V_OFFS)

/** \brief 210, Extra Path 2 Image Cropping Output Horizontal Picture Size Register */
#define CIF_EP_IC_1S2_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE*)0xFA004B10u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_H_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S2_H_SIZE.
*/
#define CIF_EP_2_IC_H_SIZE (CIF_EP_IC_1S2_H_SIZE)

/** \brief 214, Extra Path 2 Image Cropping Output Vertical Picture Size Register */
#define CIF_EP_IC_1S2_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE*)0xFA004B14u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_V_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S2_V_SIZE.
*/
#define CIF_EP_2_IC_V_SIZE (CIF_EP_IC_1S2_V_SIZE)

/** \brief 218, Extra Path 2 Image Cropping Maximum Horizontal Displacement Register */
#define CIF_EP_IC_1S2_MAX_DX /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DX*)0xFA004B18u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_MAX_DX.
* To use register names with standard convension, please use CIF_EP_IC_1S2_MAX_DX.
*/
#define CIF_EP_2_IC_MAX_DX (CIF_EP_IC_1S2_MAX_DX)

/** \brief 21C, Extra Path 2 Image Cropping Maximum Vertical Displacement Register */
#define CIF_EP_IC_1S2_MAX_DY /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DY*)0xFA004B1Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_MAX_DY.
* To use register names with standard convension, please use CIF_EP_IC_1S2_MAX_DY.
*/
#define CIF_EP_2_IC_MAX_DY (CIF_EP_IC_1S2_MAX_DY)

/** \brief 220, Extra Path 2 Image Cropping Camera Displacement Register */
#define CIF_EP_IC_1S2_DISPLACE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_DISPLACE*)0xFA004B20u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_DISPLACE.
* To use register names with standard convension, please use CIF_EP_IC_1S2_DISPLACE.
*/
#define CIF_EP_2_IC_DISPLACE (CIF_EP_IC_1S2_DISPLACE)

/** \brief 224, Extra Path 2 Image Cropping Current Horizontal Offset of Output Window Shadow Register */
#define CIF_EP_IC_1S2_H_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS_SHD*)0xFA004B24u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_H_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S2_H_OFFS_SHD.
*/
#define CIF_EP_2_IC_H_OFFS_SHD (CIF_EP_IC_1S2_H_OFFS_SHD)

/** \brief 228, Extra Path 2 Image Cropping Current Vertical Offset Of Output Window Shadow Register */
#define CIF_EP_IC_1S2_V_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS_SHD*)0xFA004B28u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_V_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S2_V_OFFS_SHD.
*/
#define CIF_EP_2_IC_V_OFFS_SHD (CIF_EP_IC_1S2_V_OFFS_SHD)

/** \brief 22C, Extra Path 2 Image Cropping Current Output Horizontal Picture Size Shadow Register */
#define CIF_EP_IC_1S2_H_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE_SHD*)0xFA004B2Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_H_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S2_H_SIZE_SHD.
*/
#define CIF_EP_2_IC_H_SIZE_SHD (CIF_EP_IC_1S2_H_SIZE_SHD)

/** \brief 230, Extra Path 2 Image Cropping Current Output Vertical Picture Size Shadow Register */
#define CIF_EP_IC_1S2_V_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE_SHD*)0xFA004B30u)
/** Alias (User Manual Name) for CIF_EP_IC_1S2_V_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S2_V_SIZE_SHD.
*/
#define CIF_EP_2_IC_V_SIZE_SHD (CIF_EP_IC_1S2_V_SIZE_SHD)

/** \brief 300, Extra Path 3 Image Cropping Control Register */
#define CIF_EP_IC_1S3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_CTRL*)0xFA004C00u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_CTRL.
* To use register names with standard convension, please use CIF_EP_IC_1S3_CTRL.
*/
#define CIF_EP_3_IC_CTRL (CIF_EP_IC_1S3_CTRL)

/** \brief 304, Extra Path 3 Image Cropping Recenter Register */
#define CIF_EP_IC_1S3_RECENTER /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_RECENTER*)0xFA004C04u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_RECENTER.
* To use register names with standard convension, please use CIF_EP_IC_1S3_RECENTER.
*/
#define CIF_EP_3_IC_RECENTER (CIF_EP_IC_1S3_RECENTER)

/** \brief 308, Extra Path 3 Image Cropping Horizontal Offset of Output Window Register */
#define CIF_EP_IC_1S3_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS*)0xFA004C08u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_H_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S3_H_OFFS.
*/
#define CIF_EP_3_IC_H_OFFS (CIF_EP_IC_1S3_H_OFFS)

/** \brief 30C, Extra Path 3 Image Cropping Vertical Offset Of Output Window Register */
#define CIF_EP_IC_1S3_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS*)0xFA004C0Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_V_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S3_V_OFFS.
*/
#define CIF_EP_3_IC_V_OFFS (CIF_EP_IC_1S3_V_OFFS)

/** \brief 310, Extra Path 3 Image Cropping Output Horizontal Picture Size Register */
#define CIF_EP_IC_1S3_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE*)0xFA004C10u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_H_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S3_H_SIZE.
*/
#define CIF_EP_3_IC_H_SIZE (CIF_EP_IC_1S3_H_SIZE)

/** \brief 314, Extra Path 3 Image Cropping Output Vertical Picture Size Register */
#define CIF_EP_IC_1S3_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE*)0xFA004C14u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_V_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S3_V_SIZE.
*/
#define CIF_EP_3_IC_V_SIZE (CIF_EP_IC_1S3_V_SIZE)

/** \brief 318, Extra Path 3 Image Cropping Maximum Horizontal Displacement Register */
#define CIF_EP_IC_1S3_MAX_DX /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DX*)0xFA004C18u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_MAX_DX.
* To use register names with standard convension, please use CIF_EP_IC_1S3_MAX_DX.
*/
#define CIF_EP_3_IC_MAX_DX (CIF_EP_IC_1S3_MAX_DX)

/** \brief 31C, Extra Path 3 Image Cropping Maximum Vertical Displacement Register */
#define CIF_EP_IC_1S3_MAX_DY /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DY*)0xFA004C1Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_MAX_DY.
* To use register names with standard convension, please use CIF_EP_IC_1S3_MAX_DY.
*/
#define CIF_EP_3_IC_MAX_DY (CIF_EP_IC_1S3_MAX_DY)

/** \brief 320, Extra Path 3 Image Cropping Camera Displacement Register */
#define CIF_EP_IC_1S3_DISPLACE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_DISPLACE*)0xFA004C20u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_DISPLACE.
* To use register names with standard convension, please use CIF_EP_IC_1S3_DISPLACE.
*/
#define CIF_EP_3_IC_DISPLACE (CIF_EP_IC_1S3_DISPLACE)

/** \brief 324, Extra Path 3 Image Cropping Current Horizontal Offset of Output Window Shadow Register */
#define CIF_EP_IC_1S3_H_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS_SHD*)0xFA004C24u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_H_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S3_H_OFFS_SHD.
*/
#define CIF_EP_3_IC_H_OFFS_SHD (CIF_EP_IC_1S3_H_OFFS_SHD)

/** \brief 328, Extra Path 3 Image Cropping Current Vertical Offset Of Output Window Shadow Register */
#define CIF_EP_IC_1S3_V_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS_SHD*)0xFA004C28u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_V_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S3_V_OFFS_SHD.
*/
#define CIF_EP_3_IC_V_OFFS_SHD (CIF_EP_IC_1S3_V_OFFS_SHD)

/** \brief 32C, Extra Path 3 Image Cropping Current Output Horizontal Picture Size Shadow Register */
#define CIF_EP_IC_1S3_H_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE_SHD*)0xFA004C2Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_H_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S3_H_SIZE_SHD.
*/
#define CIF_EP_3_IC_H_SIZE_SHD (CIF_EP_IC_1S3_H_SIZE_SHD)

/** \brief 330, Extra Path 3 Image Cropping Current Output Vertical Picture Size Shadow Register */
#define CIF_EP_IC_1S3_V_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE_SHD*)0xFA004C30u)
/** Alias (User Manual Name) for CIF_EP_IC_1S3_V_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S3_V_SIZE_SHD.
*/
#define CIF_EP_3_IC_V_SIZE_SHD (CIF_EP_IC_1S3_V_SIZE_SHD)

/** \brief 400, Extra Path 4 Image Cropping Control Register */
#define CIF_EP_IC_1S4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_CTRL*)0xFA004D00u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_CTRL.
* To use register names with standard convension, please use CIF_EP_IC_1S4_CTRL.
*/
#define CIF_EP_4_IC_CTRL (CIF_EP_IC_1S4_CTRL)

/** \brief 404, Extra Path 4 Image Cropping Recenter Register */
#define CIF_EP_IC_1S4_RECENTER /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_RECENTER*)0xFA004D04u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_RECENTER.
* To use register names with standard convension, please use CIF_EP_IC_1S4_RECENTER.
*/
#define CIF_EP_4_IC_RECENTER (CIF_EP_IC_1S4_RECENTER)

/** \brief 408, Extra Path 4 Image Cropping Horizontal Offset of Output Window Register */
#define CIF_EP_IC_1S4_H_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS*)0xFA004D08u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_H_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S4_H_OFFS.
*/
#define CIF_EP_4_IC_H_OFFS (CIF_EP_IC_1S4_H_OFFS)

/** \brief 40C, Extra Path 4 Image Cropping Vertical Offset Of Output Window Register */
#define CIF_EP_IC_1S4_V_OFFS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS*)0xFA004D0Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_V_OFFS.
* To use register names with standard convension, please use CIF_EP_IC_1S4_V_OFFS.
*/
#define CIF_EP_4_IC_V_OFFS (CIF_EP_IC_1S4_V_OFFS)

/** \brief 410, Extra Path 4 Image Cropping Output Horizontal Picture Size Register */
#define CIF_EP_IC_1S4_H_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE*)0xFA004D10u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_H_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S4_H_SIZE.
*/
#define CIF_EP_4_IC_H_SIZE (CIF_EP_IC_1S4_H_SIZE)

/** \brief 414, Extra Path 4 Image Cropping Output Vertical Picture Size Register */
#define CIF_EP_IC_1S4_V_SIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE*)0xFA004D14u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_V_SIZE.
* To use register names with standard convension, please use CIF_EP_IC_1S4_V_SIZE.
*/
#define CIF_EP_4_IC_V_SIZE (CIF_EP_IC_1S4_V_SIZE)

/** \brief 418, Extra Path 4 Image Cropping Maximum Horizontal Displacement Register */
#define CIF_EP_IC_1S4_MAX_DX /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DX*)0xFA004D18u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_MAX_DX.
* To use register names with standard convension, please use CIF_EP_IC_1S4_MAX_DX.
*/
#define CIF_EP_4_IC_MAX_DX (CIF_EP_IC_1S4_MAX_DX)

/** \brief 41C, Extra Path 4 Image Cropping Maximum Vertical Displacement Register */
#define CIF_EP_IC_1S4_MAX_DY /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_MAX_DY*)0xFA004D1Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_MAX_DY.
* To use register names with standard convension, please use CIF_EP_IC_1S4_MAX_DY.
*/
#define CIF_EP_4_IC_MAX_DY (CIF_EP_IC_1S4_MAX_DY)

/** \brief 420, Extra Path 4 Image Cropping Camera Displacement Register */
#define CIF_EP_IC_1S4_DISPLACE /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_DISPLACE*)0xFA004D20u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_DISPLACE.
* To use register names with standard convension, please use CIF_EP_IC_1S4_DISPLACE.
*/
#define CIF_EP_4_IC_DISPLACE (CIF_EP_IC_1S4_DISPLACE)

/** \brief 424, Extra Path 4 Image Cropping Current Horizontal Offset of Output Window Shadow Register */
#define CIF_EP_IC_1S4_H_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_OFFS_SHD*)0xFA004D24u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_H_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S4_H_OFFS_SHD.
*/
#define CIF_EP_4_IC_H_OFFS_SHD (CIF_EP_IC_1S4_H_OFFS_SHD)

/** \brief 428, Extra Path 4 Image Cropping Current Vertical Offset Of Output Window Shadow Register */
#define CIF_EP_IC_1S4_V_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_OFFS_SHD*)0xFA004D28u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_V_OFFS_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S4_V_OFFS_SHD.
*/
#define CIF_EP_4_IC_V_OFFS_SHD (CIF_EP_IC_1S4_V_OFFS_SHD)

/** \brief 42C, Extra Path 4 Image Cropping Current Output Horizontal Picture Size Shadow Register */
#define CIF_EP_IC_1S4_H_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_H_SIZE_SHD*)0xFA004D2Cu)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_H_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S4_H_SIZE_SHD.
*/
#define CIF_EP_4_IC_H_SIZE_SHD (CIF_EP_IC_1S4_H_SIZE_SHD)

/** \brief 430, Extra Path 4 Image Cropping Current Output Vertical Picture Size Shadow Register */
#define CIF_EP_IC_1S4_V_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_EP_IC_1S_V_SIZE_SHD*)0xFA004D30u)
/** Alias (User Manual Name) for CIF_EP_IC_1S4_V_SIZE_SHD.
* To use register names with standard convension, please use CIF_EP_IC_1S4_V_SIZE_SHD.
*/
#define CIF_EP_4_IC_V_SIZE_SHD (CIF_EP_IC_1S4_V_SIZE_SHD)

/** \brief 0, Extra Path Error Register */
#define CIF_MIEP_STA_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_STA_ERR*)0xFA005400u)

/** \brief 4, Extra Path Status Error Clear Register */
#define CIF_MIEP_STA_ERR_CLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_STA_ERR_CLR*)0xFA005404u)

/** \brief 8, MI Extra Path Interrupt Mask \u20181\u2019: interrupt active, \u20180\u2019: interrupt masked */
#define CIF_MIEP_IMSC /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_IMSC*)0xFA005408u)

/** \brief C, MI Extra Path Raw Interrupt Status Register */
#define CIF_MIEP_RIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_RIS*)0xFA00540Cu)

/** \brief 10, MI Extra Path Masked Interrupt Status Register */
#define CIF_MIEP_MIS /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_MIS*)0xFA005410u)

/** \brief 14, MI Extra Path Interrupt Clear Register */
#define CIF_MIEP_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_ICR*)0xFA005414u)

/** \brief 18, MI Extra Path Interrupt Set Register */
#define CIF_MIEP_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_ISR*)0xFA005418u)

/** \brief 100, Memory Interface Extra Path 0 Control Register */
#define CIF_MIEP_CH_1S0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL*)0xFA005500u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_CTRL.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_CTRL.
*/
#define CIF_MIEP_0_CTRL (CIF_MIEP_CH_1S0_CTRL)

/** \brief 104, Memory Interface Extra Path 0 Control Register For Address Init And Skip Function Register */
#define CIF_MIEP_CH_1S0_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_INIT*)0xFA005504u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_INIT.
*/
#define CIF_MIEP_0_INIT (CIF_MIEP_CH_1S0_INIT)

/** \brief 108, Memory Interface Base Address for Extra Path 0 Data Buffer Register */
#define CIF_MIEP_CH_1S0_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT*)0xFA005508u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_BASE_AD_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_BASE_AD_INIT.
*/
#define CIF_MIEP_0_BASE_AD_INIT (CIF_MIEP_CH_1S0_BASE_AD_INIT)

/** \brief 10C, Memory Interface Size of Extra Path 0 Data Buffer Register */
#define CIF_MIEP_CH_1S0_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_INIT*)0xFA00550Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_SIZE_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_SIZE_INIT.
*/
#define CIF_MIEP_0_SIZE_INIT (CIF_MIEP_CH_1S0_SIZE_INIT)

/** \brief 110, Memory Interface Offset Counter Init Value For Extra Path 0 Buffer Register */
#define CIF_MIEP_CH_1S0_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT*)0xFA005510u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_OFFS_CNT_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_OFFS_CNT_INIT.
*/
#define CIF_MIEP_0_OFFS_CNT_INIT (CIF_MIEP_CH_1S0_OFFS_CNT_INIT)

/** \brief 114, Memory Interface Offset Counter Start Value for Extra Path 0 Register */
#define CIF_MIEP_CH_1S0_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START*)0xFA005514u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_OFFS_CNT_START.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_OFFS_CNT_START.
*/
#define CIF_MIEP_0_OFFS_CNT_START (CIF_MIEP_CH_1S0_OFFS_CNT_START)

/** \brief 118, Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register */
#define CIF_MIEP_CH_1S0_IRQ_OFFS_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT*)0xFA005518u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_IRQ_OFFS_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_IRQ_OFFS_INIT.
*/
#define CIF_MIEP_0_IRQ_OFFS_INIT (CIF_MIEP_CH_1S0_IRQ_OFFS_INIT)

/** \brief 11C, Memory Interface Extra Path 0 Control Internal Shadow Register */
#define CIF_MIEP_CH_1S0_CTRL_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL_SHD*)0xFA00551Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_CTRL_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_CTRL_SHD.
*/
#define CIF_MIEP_0_CTRL_SHD (CIF_MIEP_CH_1S0_CTRL_SHD)

/** \brief 120, Memory Interface Base Address Shadow Register for Extra Path 0 Buffer Register */
#define CIF_MIEP_CH_1S0_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD*)0xFA005520u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_BASE_AD_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_BASE_AD_SHD.
*/
#define CIF_MIEP_0_BASE_AD_SHD (CIF_MIEP_CH_1S0_BASE_AD_SHD)

/** \brief 124, Memory Interface Size Shadow Register of Extra Path 0 Buffer Register */
#define CIF_MIEP_CH_1S0_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_SHD*)0xFA005524u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_SIZE_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_SIZE_SHD.
*/
#define CIF_MIEP_0_SIZE_SHD (CIF_MIEP_CH_1S0_SIZE_SHD)

/** \brief 128, Memory Interface Current Offset Counter of Extra Path 0 Buffer Register */
#define CIF_MIEP_CH_1S0_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD*)0xFA005528u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_OFFS_CNT_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_OFFS_CNT_SHD.
*/
#define CIF_MIEP_0_OFFS_CNT_SHD (CIF_MIEP_CH_1S0_OFFS_CNT_SHD)

/** \brief 12C, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path 0 Register */
#define CIF_MIEP_CH_1S0_IRQ_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD*)0xFA00552Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S0_IRQ_OFFS_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S0_IRQ_OFFS_SHD.
*/
#define CIF_MIEP_0_IRQ_OFFS_SHD (CIF_MIEP_CH_1S0_IRQ_OFFS_SHD)

/** \brief 200, Memory Interface Extra Path 1 Control Register */
#define CIF_MIEP_CH_1S1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL*)0xFA005600u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_CTRL.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_CTRL.
*/
#define CIF_MIEP_1_CTRL (CIF_MIEP_CH_1S1_CTRL)

/** \brief 204, Memory Interface Extra Path 1 Control Register For Address Init And Skip Function Register */
#define CIF_MIEP_CH_1S1_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_INIT*)0xFA005604u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_INIT.
*/
#define CIF_MIEP_1_INIT (CIF_MIEP_CH_1S1_INIT)

/** \brief 208, Memory Interface Base Address for Extra Path 1 Data Buffer Register */
#define CIF_MIEP_CH_1S1_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT*)0xFA005608u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_BASE_AD_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_BASE_AD_INIT.
*/
#define CIF_MIEP_1_BASE_AD_INIT (CIF_MIEP_CH_1S1_BASE_AD_INIT)

/** \brief 20C, Memory Interface Size of Extra Path 1 Data Buffer Register */
#define CIF_MIEP_CH_1S1_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_INIT*)0xFA00560Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_SIZE_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_SIZE_INIT.
*/
#define CIF_MIEP_1_SIZE_INIT (CIF_MIEP_CH_1S1_SIZE_INIT)

/** \brief 210, Memory Interface Offset Counter Init Value For Extra Path 1 Buffer Register */
#define CIF_MIEP_CH_1S1_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT*)0xFA005610u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_OFFS_CNT_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_OFFS_CNT_INIT.
*/
#define CIF_MIEP_1_OFFS_CNT_INIT (CIF_MIEP_CH_1S1_OFFS_CNT_INIT)

/** \brief 214, Memory Interface Offset Counter Start Value for Extra Path 1 Register */
#define CIF_MIEP_CH_1S1_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START*)0xFA005614u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_OFFS_CNT_START.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_OFFS_CNT_START.
*/
#define CIF_MIEP_1_OFFS_CNT_START (CIF_MIEP_CH_1S1_OFFS_CNT_START)

/** \brief 218, Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register */
#define CIF_MIEP_CH_1S1_IRQ_OFFS_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT*)0xFA005618u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_IRQ_OFFS_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_IRQ_OFFS_INIT.
*/
#define CIF_MIEP_1_IRQ_OFFS_INIT (CIF_MIEP_CH_1S1_IRQ_OFFS_INIT)

/** \brief 21C, Memory Interface Extra Path 1 Control Internal Shadow Register */
#define CIF_MIEP_CH_1S1_CTRL_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL_SHD*)0xFA00561Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_CTRL_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_CTRL_SHD.
*/
#define CIF_MIEP_1_CTRL_SHD (CIF_MIEP_CH_1S1_CTRL_SHD)

/** \brief 220, Memory Interface Base Address Shadow Register for Extra Path 1 Buffer Register */
#define CIF_MIEP_CH_1S1_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD*)0xFA005620u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_BASE_AD_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_BASE_AD_SHD.
*/
#define CIF_MIEP_1_BASE_AD_SHD (CIF_MIEP_CH_1S1_BASE_AD_SHD)

/** \brief 224, Memory Interface Size Shadow Register of Extra Path 1 Buffer Register */
#define CIF_MIEP_CH_1S1_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_SHD*)0xFA005624u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_SIZE_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_SIZE_SHD.
*/
#define CIF_MIEP_1_SIZE_SHD (CIF_MIEP_CH_1S1_SIZE_SHD)

/** \brief 228, Memory Interface Current Offset Counter of Extra Path 1 Buffer Register */
#define CIF_MIEP_CH_1S1_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD*)0xFA005628u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_OFFS_CNT_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_OFFS_CNT_SHD.
*/
#define CIF_MIEP_1_OFFS_CNT_SHD (CIF_MIEP_CH_1S1_OFFS_CNT_SHD)

/** \brief 22C, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path 1 Register */
#define CIF_MIEP_CH_1S1_IRQ_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD*)0xFA00562Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S1_IRQ_OFFS_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S1_IRQ_OFFS_SHD.
*/
#define CIF_MIEP_1_IRQ_OFFS_SHD (CIF_MIEP_CH_1S1_IRQ_OFFS_SHD)

/** \brief 300, Memory Interface Extra Path 2 Control Register */
#define CIF_MIEP_CH_1S2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL*)0xFA005700u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_CTRL.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_CTRL.
*/
#define CIF_MIEP_2_CTRL (CIF_MIEP_CH_1S2_CTRL)

/** \brief 304, Memory Interface Extra Path 2 Control Register For Address Init And Skip Function Register */
#define CIF_MIEP_CH_1S2_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_INIT*)0xFA005704u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_INIT.
*/
#define CIF_MIEP_2_INIT (CIF_MIEP_CH_1S2_INIT)

/** \brief 308, Memory Interface Base Address for Extra Path 2 Data Buffer Register */
#define CIF_MIEP_CH_1S2_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT*)0xFA005708u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_BASE_AD_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_BASE_AD_INIT.
*/
#define CIF_MIEP_2_BASE_AD_INIT (CIF_MIEP_CH_1S2_BASE_AD_INIT)

/** \brief 30C, Memory Interface Size of Extra Path 2 Data Buffer Register */
#define CIF_MIEP_CH_1S2_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_INIT*)0xFA00570Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_SIZE_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_SIZE_INIT.
*/
#define CIF_MIEP_2_SIZE_INIT (CIF_MIEP_CH_1S2_SIZE_INIT)

/** \brief 310, Memory Interface Offset Counter Init Value For Extra Path 2 Buffer Register */
#define CIF_MIEP_CH_1S2_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT*)0xFA005710u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_OFFS_CNT_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_OFFS_CNT_INIT.
*/
#define CIF_MIEP_2_OFFS_CNT_INIT (CIF_MIEP_CH_1S2_OFFS_CNT_INIT)

/** \brief 314, Memory Interface Offset Counter Start Value for Extra Path 2 Register */
#define CIF_MIEP_CH_1S2_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START*)0xFA005714u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_OFFS_CNT_START.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_OFFS_CNT_START.
*/
#define CIF_MIEP_2_OFFS_CNT_START (CIF_MIEP_CH_1S2_OFFS_CNT_START)

/** \brief 318, Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register */
#define CIF_MIEP_CH_1S2_IRQ_OFFS_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT*)0xFA005718u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_IRQ_OFFS_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_IRQ_OFFS_INIT.
*/
#define CIF_MIEP_2_IRQ_OFFS_INIT (CIF_MIEP_CH_1S2_IRQ_OFFS_INIT)

/** \brief 31C, Memory Interface Extra Path 2 Control Internal Shadow Register */
#define CIF_MIEP_CH_1S2_CTRL_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL_SHD*)0xFA00571Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_CTRL_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_CTRL_SHD.
*/
#define CIF_MIEP_2_CTRL_SHD (CIF_MIEP_CH_1S2_CTRL_SHD)

/** \brief 320, Memory Interface Base Address Shadow Register for Extra Path 2 Buffer Register */
#define CIF_MIEP_CH_1S2_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD*)0xFA005720u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_BASE_AD_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_BASE_AD_SHD.
*/
#define CIF_MIEP_2_BASE_AD_SHD (CIF_MIEP_CH_1S2_BASE_AD_SHD)

/** \brief 324, Memory Interface Size Shadow Register of Extra Path 2 Buffer Register */
#define CIF_MIEP_CH_1S2_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_SHD*)0xFA005724u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_SIZE_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_SIZE_SHD.
*/
#define CIF_MIEP_2_SIZE_SHD (CIF_MIEP_CH_1S2_SIZE_SHD)

/** \brief 328, Memory Interface Current Offset Counter of Extra Path 2 Buffer Register */
#define CIF_MIEP_CH_1S2_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD*)0xFA005728u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_OFFS_CNT_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_OFFS_CNT_SHD.
*/
#define CIF_MIEP_2_OFFS_CNT_SHD (CIF_MIEP_CH_1S2_OFFS_CNT_SHD)

/** \brief 32C, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path 2 Register */
#define CIF_MIEP_CH_1S2_IRQ_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD*)0xFA00572Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S2_IRQ_OFFS_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S2_IRQ_OFFS_SHD.
*/
#define CIF_MIEP_2_IRQ_OFFS_SHD (CIF_MIEP_CH_1S2_IRQ_OFFS_SHD)

/** \brief 400, Memory Interface Extra Path 3 Control Register */
#define CIF_MIEP_CH_1S3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL*)0xFA005800u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_CTRL.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_CTRL.
*/
#define CIF_MIEP_3_CTRL (CIF_MIEP_CH_1S3_CTRL)

/** \brief 404, Memory Interface Extra Path 3 Control Register For Address Init And Skip Function Register */
#define CIF_MIEP_CH_1S3_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_INIT*)0xFA005804u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_INIT.
*/
#define CIF_MIEP_3_INIT (CIF_MIEP_CH_1S3_INIT)

/** \brief 408, Memory Interface Base Address for Extra Path 3 Data Buffer Register */
#define CIF_MIEP_CH_1S3_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT*)0xFA005808u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_BASE_AD_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_BASE_AD_INIT.
*/
#define CIF_MIEP_3_BASE_AD_INIT (CIF_MIEP_CH_1S3_BASE_AD_INIT)

/** \brief 40C, Memory Interface Size of Extra Path 3 Data Buffer Register */
#define CIF_MIEP_CH_1S3_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_INIT*)0xFA00580Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_SIZE_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_SIZE_INIT.
*/
#define CIF_MIEP_3_SIZE_INIT (CIF_MIEP_CH_1S3_SIZE_INIT)

/** \brief 410, Memory Interface Offset Counter Init Value For Extra Path 3 Buffer Register */
#define CIF_MIEP_CH_1S3_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT*)0xFA005810u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_OFFS_CNT_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_OFFS_CNT_INIT.
*/
#define CIF_MIEP_3_OFFS_CNT_INIT (CIF_MIEP_CH_1S3_OFFS_CNT_INIT)

/** \brief 414, Memory Interface Offset Counter Start Value for Extra Path 3 Register */
#define CIF_MIEP_CH_1S3_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START*)0xFA005814u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_OFFS_CNT_START.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_OFFS_CNT_START.
*/
#define CIF_MIEP_3_OFFS_CNT_START (CIF_MIEP_CH_1S3_OFFS_CNT_START)

/** \brief 418, Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register */
#define CIF_MIEP_CH_1S3_IRQ_OFFS_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT*)0xFA005818u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_IRQ_OFFS_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_IRQ_OFFS_INIT.
*/
#define CIF_MIEP_3_IRQ_OFFS_INIT (CIF_MIEP_CH_1S3_IRQ_OFFS_INIT)

/** \brief 41C, Memory Interface Extra Path 3 Control Internal Shadow Register */
#define CIF_MIEP_CH_1S3_CTRL_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL_SHD*)0xFA00581Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_CTRL_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_CTRL_SHD.
*/
#define CIF_MIEP_3_CTRL_SHD (CIF_MIEP_CH_1S3_CTRL_SHD)

/** \brief 420, Memory Interface Base Address Shadow Register for Extra Path 3 Buffer Register */
#define CIF_MIEP_CH_1S3_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD*)0xFA005820u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_BASE_AD_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_BASE_AD_SHD.
*/
#define CIF_MIEP_3_BASE_AD_SHD (CIF_MIEP_CH_1S3_BASE_AD_SHD)

/** \brief 424, Memory Interface Size Shadow Register of Extra Path 3 Buffer Register */
#define CIF_MIEP_CH_1S3_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_SHD*)0xFA005824u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_SIZE_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_SIZE_SHD.
*/
#define CIF_MIEP_3_SIZE_SHD (CIF_MIEP_CH_1S3_SIZE_SHD)

/** \brief 428, Memory Interface Current Offset Counter of Extra Path 3 Buffer Register */
#define CIF_MIEP_CH_1S3_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD*)0xFA005828u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_OFFS_CNT_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_OFFS_CNT_SHD.
*/
#define CIF_MIEP_3_OFFS_CNT_SHD (CIF_MIEP_CH_1S3_OFFS_CNT_SHD)

/** \brief 42C, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path 3 Register */
#define CIF_MIEP_CH_1S3_IRQ_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD*)0xFA00582Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S3_IRQ_OFFS_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S3_IRQ_OFFS_SHD.
*/
#define CIF_MIEP_3_IRQ_OFFS_SHD (CIF_MIEP_CH_1S3_IRQ_OFFS_SHD)

/** \brief 500, Memory Interface Extra Path 4 Control Register */
#define CIF_MIEP_CH_1S4_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL*)0xFA005900u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_CTRL.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_CTRL.
*/
#define CIF_MIEP_4_CTRL (CIF_MIEP_CH_1S4_CTRL)

/** \brief 504, Memory Interface Extra Path 4 Control Register For Address Init And Skip Function Register */
#define CIF_MIEP_CH_1S4_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_INIT*)0xFA005904u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_INIT.
*/
#define CIF_MIEP_4_INIT (CIF_MIEP_CH_1S4_INIT)

/** \brief 508, Memory Interface Base Address for Extra Path 4 Data Buffer Register */
#define CIF_MIEP_CH_1S4_BASE_AD_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT*)0xFA005908u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_BASE_AD_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_BASE_AD_INIT.
*/
#define CIF_MIEP_4_BASE_AD_INIT (CIF_MIEP_CH_1S4_BASE_AD_INIT)

/** \brief 50C, Memory Interface Size of Extra Path 4 Data Buffer Register */
#define CIF_MIEP_CH_1S4_SIZE_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_INIT*)0xFA00590Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_SIZE_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_SIZE_INIT.
*/
#define CIF_MIEP_4_SIZE_INIT (CIF_MIEP_CH_1S4_SIZE_INIT)

/** \brief 510, Memory Interface Offset Counter Init Value For Extra Path 4 Buffer Register */
#define CIF_MIEP_CH_1S4_OFFS_CNT_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT*)0xFA005910u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_OFFS_CNT_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_OFFS_CNT_INIT.
*/
#define CIF_MIEP_4_OFFS_CNT_INIT (CIF_MIEP_CH_1S4_OFFS_CNT_INIT)

/** \brief 514, Memory Interface Offset Counter Start Value for Extra Path 4 Register */
#define CIF_MIEP_CH_1S4_OFFS_CNT_START /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START*)0xFA005914u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_OFFS_CNT_START.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_OFFS_CNT_START.
*/
#define CIF_MIEP_4_OFFS_CNT_START (CIF_MIEP_CH_1S4_OFFS_CNT_START)

/** \brief 518, Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register */
#define CIF_MIEP_CH_1S4_IRQ_OFFS_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT*)0xFA005918u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_IRQ_OFFS_INIT.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_IRQ_OFFS_INIT.
*/
#define CIF_MIEP_4_IRQ_OFFS_INIT (CIF_MIEP_CH_1S4_IRQ_OFFS_INIT)

/** \brief 51C, Memory Interface Extra Path 4 Control Internal Shadow Register */
#define CIF_MIEP_CH_1S4_CTRL_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_CTRL_SHD*)0xFA00591Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_CTRL_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_CTRL_SHD.
*/
#define CIF_MIEP_4_CTRL_SHD (CIF_MIEP_CH_1S4_CTRL_SHD)

/** \brief 520, Memory Interface Base Address Shadow Register for Extra Path 4 Buffer Register */
#define CIF_MIEP_CH_1S4_BASE_AD_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD*)0xFA005920u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_BASE_AD_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_BASE_AD_SHD.
*/
#define CIF_MIEP_4_BASE_AD_SHD (CIF_MIEP_CH_1S4_BASE_AD_SHD)

/** \brief 524, Memory Interface Size Shadow Register of Extra Path 4 Buffer Register */
#define CIF_MIEP_CH_1S4_SIZE_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_SIZE_SHD*)0xFA005924u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_SIZE_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_SIZE_SHD.
*/
#define CIF_MIEP_4_SIZE_SHD (CIF_MIEP_CH_1S4_SIZE_SHD)

/** \brief 528, Memory Interface Current Offset Counter of Extra Path 4 Buffer Register */
#define CIF_MIEP_CH_1S4_OFFS_CNT_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD*)0xFA005928u)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_OFFS_CNT_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_OFFS_CNT_SHD.
*/
#define CIF_MIEP_4_OFFS_CNT_SHD (CIF_MIEP_CH_1S4_OFFS_CNT_SHD)

/** \brief 52C, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path 4 Register */
#define CIF_MIEP_CH_1S4_IRQ_OFFS_SHD /*lint --e(923, 9078)*/ (*(volatile Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD*)0xFA00592Cu)
/** Alias (User Manual Name) for CIF_MIEP_CH_1S4_IRQ_OFFS_SHD.
* To use register names with standard convension, please use CIF_MIEP_CH_1S4_IRQ_OFFS_SHD.
*/
#define CIF_MIEP_4_IRQ_OFFS_SHD (CIF_MIEP_CH_1S4_IRQ_OFFS_SHD)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXCIF_REG_H */
