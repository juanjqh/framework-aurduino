/**
 * \file IfxEvadc_PinMap.h
 * \brief EVADC I/O map
 * \ingroup IfxLld_Evadc
 *
 * \version iLLD_1_0_1_7_0
 * \copyright Copyright (c) 2017 Infineon Technologies AG. All rights reserved.
 *
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
 * \defgroup IfxLld_Evadc_pinmap EVADC Pin Mapping
 * \ingroup IfxLld_Evadc
 */

#ifndef IFXEVADC_PINMAP_H
#define IFXEVADC_PINMAP_H

#include <IfxEvadc_reg.h>
#include <_Impl/IfxEvadc_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Evadc_pinmap
 * \{ */

/** \brief EVADC Boundary Flag pin mapping structure */
typedef const struct
{
    Ifx_EVADC*        module;    /**< \brief Base address */
    IfxEvadc_GroupId  groupId;   /**< \brief Group ID */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    IfxPort_OutputIdx select;    /**< \brief Port control code */
} IfxEvadc_GxBfl_Out;

/** \brief EVADC External Mux pin mapping structure */
typedef const struct
{
    Ifx_EVADC*        module;    /**< \brief Base address */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    IfxPort_OutputIdx select;    /**< \brief Port control code */
} IfxEvadc_Emux_Out;

/** \brief EVADC Analog Input */
typedef const struct
{
    Ifx_EVADC*        module;    /**< \brief Base address */
    IfxEvadc_GroupId  groupId;   /**< \brief Group ID */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    uint8             channelId; /**< \brief Channel ID */
} IfxEvadc_Vadcg_In;

IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX00_P02_6_OUT;  /**< \brief Control of external analog multiplexer interface 0 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX00_P33_3_OUT;  /**< \brief Control of external analog multiplexer interface 0 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX01_P02_7_OUT;  /**< \brief Control of external analog multiplexer interface 0 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX01_P33_2_OUT;  /**< \brief Control of external analog multiplexer interface 0 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX02_P02_8_OUT;  /**< \brief Control of external analog multiplexer interface 0 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX02_P33_1_OUT;  /**< \brief Control of external analog multiplexer interface 0 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX10_P00_6_OUT;  /**< \brief Control of external analog multiplexer interface 1 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX10_P33_6_OUT;  /**< \brief Control of external analog multiplexer interface 1 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX11_P00_7_OUT;  /**< \brief Control of external analog multiplexer interface 1 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX11_P33_5_OUT;  /**< \brief Control of external analog multiplexer interface 1 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX12_P00_8_OUT;  /**< \brief Control of external analog multiplexer interface 1 */
IFX_EXTERN IfxEvadc_Emux_Out IfxEvadc_EMUX12_P33_4_OUT;  /**< \brief Control of external analog multiplexer interface 1 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC0BFLOUT_P00_5_OUT;  /**< \brief Boundary flag output, FC channel 0 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC0BFLOUT_P33_4_OUT;  /**< \brief Boundary flag output, FC channel 0 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC1BFLOUT_P10_1_OUT;  /**< \brief Boundary flag output, FC channel 1 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC1BFLOUT_P33_6_OUT;  /**< \brief Boundary flag output, FC channel 1 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC2BFLOUT_P00_7_OUT;  /**< \brief Boundary flag output, FC channel 2 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC2BFLOUT_P33_0_OUT;  /**< \brief Boundary flag output, FC channel 2 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC2BFLOUT_P33_5_OUT;  /**< \brief Boundary flag output, FC channel 2 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC3BFLOUT_P10_2_OUT;  /**< \brief Boundary flag output, FC channel 3 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC3BFLOUT_P33_2_OUT;  /**< \brief Boundary flag output, FC channel 3 */
IFX_EXTERN IfxEvadc_GxBfl_Out IfxEvadc_FC3BFLOUT_P33_7_OUT;  /**< \brief Boundary flag output, FC channel 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_FC0CH0_AN16_IN;  /**< \brief Analog input FC channel 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_FC1CH0_P40_10_IN;  /**< \brief Analog input FC channel 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_FC2CH0_P00_12_IN;  /**< \brief Analog input FC channel 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_FC3CH0_P00_11_IN;  /**< \brief Analog input FC channel 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH0_AN0_IN;  /**< \brief Analog input channel 0, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH1_AN1_IN;  /**< \brief Analog input channel 1, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH2_AN2_IN;  /**< \brief Analog input channel 2, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH3_AN3_IN;  /**< \brief Analog input channel 3, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH4_AN4_IN;  /**< \brief Analog input channel 4, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH5_AN5_IN;  /**< \brief Analog input channel 5, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH6_AN6_IN;  /**< \brief Analog input channel 6, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G0CH7_AN7_IN;  /**< \brief Analog input channel 7, group 0 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH0_P33_7_IN;  /**< \brief Analog input channel 0, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH10_P34_2_IN;  /**< \brief Analog input channel 10, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH11_P34_1_IN;  /**< \brief Analog input channel 11, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH1_P33_6_IN;  /**< \brief Analog input channel 1, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH2_P33_5_IN;  /**< \brief Analog input channel 2, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH3_P33_4_IN;  /**< \brief Analog input channel 3, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH4_P33_3_IN;  /**< \brief Analog input channel 4, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH5_P33_2_IN;  /**< \brief Analog input channel 5, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH6_P33_1_IN;  /**< \brief Analog input channel 6, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH7_P33_0_IN;  /**< \brief Analog input channel 7, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH8_P34_4_IN;  /**< \brief Analog input channel 8, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G10CH9_P34_3_IN;  /**< \brief Analog input channel 9, group 10 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH0_AN4_IN;  /**< \brief Analog input channel 0, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH10_P40_2_IN;  /**< \brief Analog input channel 10, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH11_P40_3_IN;  /**< \brief Analog input channel 11, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH12_P40_4_IN;  /**< \brief Analog input channel 12, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH13_P40_5_IN;  /**< \brief Analog input channel 13, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH14_AN34_IN;  /**< \brief Analog input channel 14, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH15_AN35_IN;  /**< \brief Analog input channel 15, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH1_AN5_IN;  /**< \brief Analog input channel 1, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH2_AN6_IN;  /**< \brief Analog input channel 2, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH3_AN7_IN;  /**< \brief Analog input channel 3, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH4_AN8_IN;  /**< \brief Analog input channel 4, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH5_AN9_IN;  /**< \brief Analog input channel 5, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH6_AN10_IN;  /**< \brief Analog input channel 6, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH7_AN11_IN;  /**< \brief Analog input channel 7, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH8_P40_11_IN;  /**< \brief Analog input channel 8, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G11CH9_P40_12_IN;  /**< \brief Analog input channel 9, group 11 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH0_AN8_IN;  /**< \brief Analog input channel 0, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH1_AN9_IN;  /**< \brief Analog input channel 1, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH2_AN10_IN;  /**< \brief Analog input channel 2, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH3_AN11_IN;  /**< \brief Analog input channel 3, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH4_AN12_IN;  /**< \brief Analog input channel 4, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH5_AN13_IN;  /**< \brief Analog input channel 5, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH6_AN14_IN;  /**< \brief Analog input channel 6, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G1CH7_AN15_IN;  /**< \brief Analog input channel 7, group 1 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH0_AN16_IN;  /**< \brief Analog input channel 0, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH1_P40_10_IN;  /**< \brief Analog input channel 1, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH2_P40_11_IN;  /**< \brief Analog input channel 2, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH3_P40_12_IN;  /**< \brief Analog input channel 3, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH4_AN20_IN;  /**< \brief Analog input channel 4, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH5_AN21_IN;  /**< \brief Analog input channel 5, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH6_AN22_IN;  /**< \brief Analog input channel 6, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G2CH7_AN23_IN;  /**< \brief Analog input channel 7, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH0_P40_0_IN;  /**< \brief Analog input channel 0, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH1_P40_1_IN;  /**< \brief Analog input channel 1, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH2_P40_2_IN;  /**< \brief Analog input channel 2, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH3_P40_3_IN;  /**< \brief Analog input channel 3, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH4_P40_13_IN;  /**< \brief Analog input channel 4, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH5_P40_14_IN;  /**< \brief Analog input channel 5, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH6_AN30_IN;  /**< \brief Analog input channel 6, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G3CH7_AN31_IN;  /**< \brief Analog input channel 7, group 3 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH0_P40_4_IN;  /**< \brief Analog input channel 0, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH10_AN42_IN;  /**< \brief Analog input channel 10, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH11_AN43_IN;  /**< \brief Analog input channel 11, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH12_AN44_IN;  /**< \brief Analog input channel 12, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH13_AN45_IN;  /**< \brief Analog input channel 13, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH14_AN46_IN;  /**< \brief Analog input channel 14, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH15_AN47_IN;  /**< \brief Analog input channel 15, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH1_P40_5_IN;  /**< \brief Analog input channel 1, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH2_AN34_IN;  /**< \brief Analog input channel 2, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH3_AN35_IN;  /**< \brief Analog input channel 3, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH4_P40_6_IN;  /**< \brief Analog input channel 4, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH5_P40_7_IN;  /**< \brief Analog input channel 5, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH6_P40_8_IN;  /**< \brief Analog input channel 6, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH7_P40_9_IN;  /**< \brief Analog input channel 7, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH8_AN40_IN;  /**< \brief Analog input channel 8, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G8CH9_AN41_IN;  /**< \brief Analog input channel 9, group 8 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH0_P00_12_IN;  /**< \brief Analog input channel 0, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH10_P00_2_IN;  /**< \brief Analog input channel 10, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH11_P00_1_IN;  /**< \brief Analog input channel 11, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH12_P01_5_IN;  /**< \brief  */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH13_P01_4_IN;  /**< \brief Analog input channel 13, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH14_P01_3_IN;  /**< \brief Analog input channel 14, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH15_P02_11_IN;  /**< \brief Analog input channel 15, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH1_P00_11_IN;  /**< \brief Analog input channel 1, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH2_P00_10_IN;  /**< \brief Analog input channel 2, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH3_P00_9_IN;  /**< \brief Analog input channel 3, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH4_P00_8_IN;  /**< \brief Analog input channel 4, group 2 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH5_P00_7_IN;  /**< \brief Analog input channel 5, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH6_P00_6_IN;  /**< \brief Analog input channel 6, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH7_P00_5_IN;  /**< \brief Analog input channel 7, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH8_P00_4_IN;  /**< \brief Analog input channel 8, group 9 */
IFX_EXTERN IfxEvadc_Vadcg_In IfxEvadc_G9CH9_P00_3_IN;  /**< \brief Analog input channel 9, group 9 */

/** \brief Table dimensions */
#define IFXEVADC_PINMAP_NUM_MODULES 1
#define IFXEVADC_PINMAP_NUM_GROUPS 16
#define IFXEVADC_PINMAP_EMUX_OUT_NUM_ITEMS 12
#define IFXEVADC_PINMAP_GXBFL_OUT_NUM_ITEMS 3
#define IFXEVADC_PINMAP_VADCG_IN_NUM_ITEMS 16


/** \brief IfxEvadc_Emux_Out table */
IFX_EXTERN const IfxEvadc_Emux_Out *IfxEvadc_Emux_Out_pinTable[IFXEVADC_PINMAP_NUM_MODULES][IFXEVADC_PINMAP_EMUX_OUT_NUM_ITEMS];

/** \brief IfxEvadc_GxBfl_Out table */
IFX_EXTERN const IfxEvadc_GxBfl_Out *IfxEvadc_GxBfl_Out_pinTable[IFXEVADC_PINMAP_NUM_MODULES][IFXEVADC_PINMAP_NUM_GROUPS][IFXEVADC_PINMAP_GXBFL_OUT_NUM_ITEMS];

/** \brief IfxEvadc_Vadcg_In table */
IFX_EXTERN const IfxEvadc_Vadcg_In *IfxEvadc_Vadcg_In_pinTable[IFXEVADC_PINMAP_NUM_MODULES][IFXEVADC_PINMAP_NUM_GROUPS][IFXEVADC_PINMAP_VADCG_IN_NUM_ITEMS];

/** \} */

#endif /* IFXEVADC_PINMAP_H */
