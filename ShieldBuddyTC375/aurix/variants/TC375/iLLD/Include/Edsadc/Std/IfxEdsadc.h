/**
 * \file IfxEdsadc.h
 * \brief EDSADC  basic functionality
 * \ingroup IfxLld_Edsadc
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
 * \defgroup IfxLld_Edsadc_Std_Enum Enumerations
 * \ingroup IfxLld_Edsadc_Std
 * \defgroup IfxLld_Edsadc_Std_Operative Operative Functions
 * \ingroup IfxLld_Edsadc_Std
 * \defgroup IfxLld_Edsadc_Std_Support Support Functions
 * \ingroup IfxLld_Edsadc_Std
 * \defgroup IfxLld_Edsadc_Std_Interrupt Interrupt Functions
 * \ingroup IfxLld_Edsadc_Std
 * \defgroup IfxLld_Edsadc_Std_IO IO Pin Configuration Functions
 * \ingroup IfxLld_Edsadc_Std
 */

#ifndef IFXEDSADC_H
#define IFXEDSADC_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxEdsadc_cfg.h"
#include "Src/Std/IfxSrc.h"
#include "Scu/Std/IfxScuCcu.h"
#include "_PinMap/IfxEdsadc_PinMap.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "IfxEdsadc_reg.h"
#include "IfxEdsadc_bf.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Edsadc_Std_Enum
 * \{ */
/** \brief Analog Clock Synchronization Delay
 * Definition in Ifx_DSADC.MODCFG.B.ACSD
 */
typedef enum
{
    IfxEdsadc_AnalogClockSyncDelay_noDelay     = 0,    /**< \brief no delay */
    IfxEdsadc_AnalogClockSyncDelay_cycleDelay1 = 1,    /**< \brief Delay of 1 Cycle  */
    IfxEdsadc_AnalogClockSyncDelay_cycleDelay2,        /**< \brief Delay of 2 Cycle  */
    IfxEdsadc_AnalogClockSyncDelay_cycleDelay3,        /**< \brief Delay of 3 Cycle  */
    IfxEdsadc_AnalogClockSyncDelay_cycleDelay4,        /**< \brief Delay of 4 Cycle  */
    IfxEdsadc_AnalogClockSyncDelay_cycleDelay5,        /**< \brief Delay of 5 Cycle  */
    IfxEdsadc_AnalogClockSyncDelay_cycleDelay6,        /**< \brief Delay of 6 Cycle  */
    IfxEdsadc_AnalogClockSyncDelay_cycleDelay7         /**< \brief Delay of 7 Cycle  */
} IfxEdsadc_AnalogClockSyncDelay;

/** \brief Service request generation (auxiliary)\n
 * Definition in Ifx_EDSADC.FCFGM.B.SRGA
 */
typedef enum
{
    IfxEdsadc_AuxServiceRequest_never          = 0,  /**< \brief Never, service requests disabled */
    IfxEdsadc_AuxServiceRequest_compEvent      = 1,  /**< \brief As selected by bitfield ESEL */
    IfxEdsadc_AuxServiceRequest_timestampEvent = 2,  /**< \brief Timestamp Event */
    IfxEdsadc_AuxServiceRequest_altSource      = 3   /**< \brief Alternate source: Capturing of a sign delay value to register CGSYNCx (x = 0 - 5) */
} IfxEdsadc_AuxServiceRequest;

/** \brief Carrier generation mode\n
 * Definition in Ifx_EDSADC.CGCFG.B.CGMOD
 */
typedef enum
{
    IfxEdsadc_CarrierWaveformMode_stopped  = 0,  /**< \brief Carrier Generator stopped */
    IfxEdsadc_CarrierWaveformMode_square   = 1,  /**< \brief Carrier Generator generates square wave */
    IfxEdsadc_CarrierWaveformMode_triangle = 2,  /**< \brief Carrier Generator generates triangle wave */
    IfxEdsadc_CarrierWaveformMode_sine     = 3   /**< \brief Carrier Generator generates sine wave */
} IfxEdsadc_CarrierWaveformMode;

/** \brief Specifies the channel Index
 */
typedef enum
{
    IfxEdsadc_ChannelId_0  = 0,   /**< \brief Specifies the channel Index 0 */
    IfxEdsadc_ChannelId_1  = 1,   /**< \brief Specifies the channel Index 1 */
    IfxEdsadc_ChannelId_2  = 2,   /**< \brief Specifies the channel Index 2 */
    IfxEdsadc_ChannelId_3  = 3,   /**< \brief Specifies the channel Index 3 */
    IfxEdsadc_ChannelId_4  = 4,   /**< \brief Specifies the channel Index 4 */
    IfxEdsadc_ChannelId_5  = 5,   /**< \brief Specifies the channel Index 5 */
    IfxEdsadc_ChannelId_6  = 6,   /**< \brief Specifies the channel Index 6 */
    IfxEdsadc_ChannelId_7  = 7,   /**< \brief Specifies the channel Index 7 */
    IfxEdsadc_ChannelId_8  = 8,   /**< \brief Specifies the channel Index 8 */
    IfxEdsadc_ChannelId_9  = 9,   /**< \brief Specifies the channel Index 9 */
    IfxEdsadc_ChannelId_10 = 10,  /**< \brief Specifies the channel Index 10 */
    IfxEdsadc_ChannelId_11 = 11,  /**< \brief Specifies the channel Index 11 */
    IfxEdsadc_ChannelId_12 = 12,  /**< \brief Specifies the channel Index 12 */
    IfxEdsadc_ChannelId_13 = 13   /**< \brief Specifies the channel Index 13 */
} IfxEdsadc_ChannelId;

/** \brief Common Mode Hold Voltage Enable
 */
typedef enum
{
    IfxEdsadc_CommonModeHoldVoltage_disable = 0,  /**< \brief VCMH is off */
    IfxEdsadc_CommonModeHoldVoltage_enable  = 1   /**< \brief VCMH is generated */
} IfxEdsadc_CommonModeHoldVoltage;

/** \brief Select the data to be returned when register RESM is read
 * Definition in Ifx_DSADC.DICFG.B.DRM
 */
typedef enum
{
    IfxEdsadc_DataRead_signOnHighbit      = 0,  /**< \brief Single: Issue one 16-bit value per read access (sign on high bits) */
    IfxEdsadc_DataRead_timestampOnHighbit = 1,  /**< \brief Single: Issue one 16-bit value per read access (timestamp on high bits) */
    IfxEdsadc_DataRead_double             = 2   /**< \brief Double: Issue two 16-bit values per read access */
} IfxEdsadc_DataRead;

/** \brief Data stream select
 * Definition in Ifx_DSADC.DICFG.B.DSS
 */
typedef enum
{
    IfxEdsadc_DataStream_onChipModulator        = 0,  /**< \brief select data stream from on chip modulator */
    IfxEdsadc_DataStream_doubleDataClockEdge    = 3,  /**< \brief External modulator, use rising and falling clock edge */
    IfxEdsadc_DataStream_directFallingClockEdge = 4,  /**< \brief External modulator, use each falling clock edge */
    IfxEdsadc_DataStream_directRisingClockEdge  = 5,  /**< \brief External modulator, use each rising clock edge */
    IfxEdsadc_DataStream_secondFallingClockEdge = 6,  /**< \brief External modulator, use every 2nd falling clock edge */
    IfxEdsadc_DataStream_secondRisingClockEdge  = 7   /**< \brief External modulator, use every 2nd rising clock edge */
} IfxEdsadc_DataStream;

/** \brief Trimming Value for Dithering function
 * Definition in Ifx_DSADC.GLOBCFG.B.DITRIM
 */
typedef enum
{
    IfxEdsadc_DitheringIntensity_minimum = 0,  /**< \brief Minimum dithering intensity */
    IfxEdsadc_DitheringIntensity_low     = 1,  /**< \brief Low dithering intensity */
    IfxEdsadc_DitheringIntensity_medium  = 2,  /**< \brief Medium dithering intensity */
    IfxEdsadc_DitheringIntensity_high    = 3   /**< \brief High */
} IfxEdsadc_DitheringIntensity;

/** \brief Define when comparator event is generated
 * Definition in Ifx_DSADC.FCFGM.B.ESEL
 */
typedef enum
{
    IfxEdsadc_EventSelect_everyNewResult = 0,  /**< \brief Always, for each new result value */
    IfxEdsadc_EventSelect_insideBoundry  = 1,  /**< \brief If result is inside the boundary band */
    IfxEdsadc_EventSelect_outsideBoundry = 2   /**< \brief If result is outside the boundary band */
} IfxEdsadc_EventSelect;

/** \brief Defines the duration of the additional filter effect, based on values input to the
 * filter
 */
typedef enum
{
    IfxEdsadc_FilterRunTimeInputCycle_2  = 0, /**< \brief 2 input cycles */
    IfxEdsadc_FilterRunTimeInputCycle_4  = 1, /**< \brief 4 input cycles */
    IfxEdsadc_FilterRunTimeInputCycle_8  = 2, /**< \brief 8 input cycles */
    IfxEdsadc_FilterRunTimeInputCycle_16 = 3  /**< \brief 16 input cycles */
} IfxEdsadc_FilterRunTimeInputCycle;

/** \brief Specifies Slew Rate Filter Strength
 */
typedef enum
{
    IfxEdsadc_FilterStrength_minimum = 0,  /**< \brief Minimum filter effect, early attenuation, linear operation */
    IfxEdsadc_FilterStrength_weak    = 1,  /**< \brief Weak filter effect */
    IfxEdsadc_FilterStrength_medium  = 2,  /**< \brief Medium filter effect */
    IfxEdsadc_FilterStrength_maximum = 3   /**< \brief maximum filter effect */
} IfxEdsadc_FilterStrength;

/** \brief Fractional Reference Voltage Enable
 */
typedef enum
{
    IfxEdsadc_FractionalRefVoltage_disable = 0,  /**< \brief VREFX is not connected */
    IfxEdsadc_FractionalRefVoltage_enable  = 1   /**< \brief VREFX is connected, value according to VREFXSEL */
} IfxEdsadc_FractionalRefVoltage;

/** \brief Fraction reference voltage selection
 */
typedef enum
{
    IfxEdsadc_FractionalRefVoltageSelection_div2  = 0, /**< \brief VREFX = VAREF / 2 */
    IfxEdsadc_FractionalRefVoltageSelection_div4  = 1, /**< \brief VREFX = VAREF / 4 */
    IfxEdsadc_FractionalRefVoltageSelection_div8  = 2, /**< \brief VREFX = VAREF / 8 */
    IfxEdsadc_FractionalRefVoltageSelection_div16 = 3  /**< \brief VREFX = VAREF / 2 */
} IfxEdsadc_FractionalRefVoltageSelection;

/** \brief Half Supply Voltage Enable
 */
typedef enum
{
    IfxEdsadc_HalfSupplyVoltage_disable = 0,  /**< \brief VDDM / 2 is not connected */
    IfxEdsadc_HalfSupplyVoltage_enable  = 1   /**< \brief VDDM / 2 is connected */
} IfxEdsadc_HalfSupplyVoltage;

/** \brief Modulator configuration of positive/negative input line\n
 * Definition in Ifx_DSADC.MODCFGx.B.INCFGP and Ifx_DSADC.MODCFGx.B.INCFGN
 */
typedef enum
{
    IfxEdsadc_InputConfig_inputPin          = 0,  /**< \brief Modulator input connected to external pin */
    IfxEdsadc_InputConfig_supplyVoltage     = 1,  /**< \brief Modulator input connected to supply voltage V_ddm */
    IfxEdsadc_InputConfig_commonModeVoltage = 2,  /**< \brief Modulator input connected to common mode voltage V_cm */
    IfxEdsadc_InputConfig_referenceGround   = 3   /**< \brief Modulator input connected to reference ground V_ref */
} IfxEdsadc_InputConfig;

/** \brief Demodulator input data source selection\n
 * Definition in Ifx_EDSADC.DICFG.B.DSRC
 */
typedef enum
{
    IfxEdsadc_InputDataSource_directInputA   = 0,  /**< \brief External, from input A, direct */
    IfxEdsadc_InputDataSource_invertedInputA = 1,  /**< \brief External, from input A, inverted */
    IfxEdsadc_InputDataSource_directInputB   = 2,  /**< \brief External, from input B, direct */
    IfxEdsadc_InputDataSource_invertedInputB = 3,  /**< \brief External, from input B, inverted */
    IfxEdsadc_InputDataSource_directInputC   = 4,  /**< \brief External, from input C, direct */
    IfxEdsadc_InputDataSource_invertedInputC = 5,  /**< \brief External, from input C, inverted */
    IfxEdsadc_InputDataSource_directInputD   = 6,  /**< \brief External, from input D, direct */
    IfxEdsadc_InputDataSource_invertedInputD = 7   /**< \brief External, from input D, inverted */
} IfxEdsadc_InputDataSource;

/** \brief Modulator gain select of analog input path\n
 * Definition in Ifx_DSADC.MODCFGx.B.GAINSEL
 */
typedef enum
{
    IfxEdsadc_InputGain_factor1  = 0, /**< \brief Input gain factor: 1 */
    IfxEdsadc_InputGain_factor2  = 1, /**< \brief Input gain factor: 2 */
    IfxEdsadc_InputGain_factor4  = 2, /**< \brief Input gain factor: 4 */
    IfxEdsadc_InputGain_factor8  = 3, /**< \brief Input gain factor: 8 */
    IfxEdsadc_InputGain_factor16 = 4  /**< \brief Input gain factor: 16 */
} IfxEdsadc_InputGain;

/** \brief specifies input multiplexer control mode defined in MODULE_EDSADC.MODCFG.B.INMODE
 */
typedef enum
{
    IfxEdsadc_InputMuxControlMode_softwareControl = 0,  /**< \brief Trigger Event by software (INMUX follows INSEL) */
    IfxEdsadc_InputMuxControlMode_fallingEdge     = 1,  /**< \brief Trigger Event on Falling edge */
    IfxEdsadc_InputMuxControlMode_risingEdge      = 2,  /**< \brief Trigger Event on Rising edge */
    IfxEdsadc_InputMuxControlMode_always          = 3   /**< \brief Trigger event on any edge */
} IfxEdsadc_InputMuxControlMode;

/** \brief Modulator input pin selection\n
 * Definition in Ifx_DSADC.MODCFGx.B.INMUX
 */
typedef enum
{
    IfxEdsadc_InputPin_a = 0,  /**< \brief Pin A connected to modulator input */
    IfxEdsadc_InputPin_b = 1,  /**< \brief Pin B connected to modulator input */
    IfxEdsadc_InputPin_c = 2,  /**< \brief Pin C connected to modulator input */
    IfxEdsadc_InputPin_d = 3   /**< \brief Pin D connected to modulator input */
} IfxEdsadc_InputPin;

/** \brief Controls the data shifter after the integrator that selects the portion of the
 * integrator data for the result register
 */
typedef enum
{
    IfxEdsadc_IntegrationShiftControl_0 = 0,      /**< \brief Integration Shift value  */
    IfxEdsadc_IntegrationShiftControl_1,          /**< \brief Integration Shift value  */
    IfxEdsadc_IntegrationShiftControl_2,          /**< \brief Integration Shift value  */
    IfxEdsadc_IntegrationShiftControl_3,          /**< \brief Integration Shift value  */
    IfxEdsadc_IntegrationShiftControl_4,          /**< \brief Integration Shift value  */
    IfxEdsadc_IntegrationShiftControl_5           /**< \brief Integration Shift value  */
} IfxEdsadc_IntegrationShiftControl;

/** \brief Integrator window size\n
 * Definition in Ifx_DSADC.IWCTR.B.IWS
 */
typedef enum
{
    IfxEdsadc_IntegrationWindowSize_internalControl = 0,  /**< \brief Internal control: stop integrator after REPVAL+1 integration cycles */
    IfxEdsadc_IntegrationWindowSize_externalControl = 1   /**< \brief External control: stop integrator when bit INTEN becomes 0 */
} IfxEdsadc_IntegrationWindowSize;

/** \brief Integrator trigger mode\n
 * NOTE: switch-first to bypassed before using other mode\n
 * Definition in Ifx_EDSADC.DICFG.B.ITRMODE
 */
typedef enum
{
    IfxEdsadc_IntegratorTrigger_bypassed     = 0, /**< \brief No integration trigger, integrator bypassed */
    IfxEdsadc_IntegratorTrigger_fallingEdge  = 1, /**< \brief Trigger event upon a falling edge */
    IfxEdsadc_IntegratorTrigger_risingEdge   = 2, /**< \brief Trigger event upon a rising edge */
    IfxEdsadc_IntegratorTrigger_alwaysActive = 3  /**< \brief No trigger, integrator active all the time */
} IfxEdsadc_IntegratorTrigger;

/** \brief Service request generation (main chain)\n
 * Definition in Ifx_EDSADC.FCFGM.B.SRGM
 */
typedef enum
{
    IfxEdsadc_MainServiceRequest_never          = 0,  /**< \brief Never, service requests disabled */
    IfxEdsadc_MainServiceRequest_highGateSignal = 1,  /**< \brief While gate (selected trigger signal) is high */
    IfxEdsadc_MainServiceRequest_lowGateSignal  = 2,  /**< \brief While gate (selected trigger signal) is low */
    IfxEdsadc_MainServiceRequest_everyNewResult = 3   /**< \brief Always, for each new result value */
} IfxEdsadc_MainServiceRequest;

/** \brief Modulator divider factor for modulator clock\n
 * Definition in Ifx_EDSADC.MODCFGx.B.DIVM
 */
typedef enum
{
    IfxEdsadc_ModulatorClockDivider_div4 = 0,      /**< \brief f_mod = f_clk / 4  */
    IfxEdsadc_ModulatorClockDivider_div6,          /**< \brief f_mod = f_clk / 6  */
    IfxEdsadc_ModulatorClockDivider_div8,          /**< \brief f_mod = f_clk / 8  */
    IfxEdsadc_ModulatorClockDivider_div10,         /**< \brief f_mod = f_clk / 10  */
    IfxEdsadc_ModulatorClockDivider_div12,         /**< \brief f_mod = f_clk / 12  */
    IfxEdsadc_ModulatorClockDivider_div14,         /**< \brief f_mod = f_clk / 14  */
    IfxEdsadc_ModulatorClockDivider_div16,         /**< \brief f_mod = f_clk / 16  */
    IfxEdsadc_ModulatorClockDivider_div18          /**< \brief f_mod = f_clk / 18  */
} IfxEdsadc_ModulatorClockDivider;

/** \brief Defines the way the modulator clock is generated
 * Definition in Ifx_DSADC.GLOBCFG.B.USC
 */
typedef enum
{
    IfxEdsadc_ModulatorClockGeneration_syncMode   = 0,
    IfxEdsadc_ModulatorClockGeneration_unsyncMode = 1
} IfxEdsadc_ModulatorClockGeneration;

/** \brief Enable the offset compensation filter
 * Definition in Ifx_DSADC.FCFGM.B.OCEN
 */
typedef enum
{
    IfxEdsadc_OffsetCompensationFilter_disabled        = 0,  /**< \brief Offset Compensation filter disabled */
    IfxEdsadc_OffsetCompensationFilter_enablewithRateA = 1,  /**< \brief Enable offset compensation filter, adjust OFFCOMP with rate A */
    IfxEdsadc_OffsetCompensationFilter_enablewithRateB = 2,  /**< \brief Enable offset compensation filter, adjust OFFCOMP with rate B */
    IfxEdsadc_OffsetCompensationFilter_enablewithRateC = 3,  /**< \brief Enable offset compensation filter, adjust OFFCOMP with rate C */
    IfxEdsadc_OffsetCompensationFilter_enablewithRateD = 4,  /**< \brief Enable offset compensation filter, adjust OFFCOMP with rate D */
    IfxEdsadc_OffsetCompensationFilter_enablewithRateE = 5,  /**< \brief Enable offset compensation filter, adjust OFFCOMP with rate E */
    IfxEdsadc_OffsetCompensationFilter_enablewithRateF = 6,  /**< \brief Enable offset compensation filter, adjust OFFCOMP with rate F */
    IfxEdsadc_OffsetCompensationFilter_enablewithRateG = 7   /**< \brief Enable offset compensation filter, adjust OFFCOMP with rate G */
} IfxEdsadc_OffsetCompensationFilter;

/** \brief Overshoot Compensation Enable.
 * Defined in fx_DSADC.FCFGM.B.OVCEN
 */
typedef enum
{
    IfxEdsadc_OvershootCompensation_disabled = 0,  /**< \brief Disabled, feed FIR filter directly */
    IfxEdsadc_OvershootCompensation_enabled  = 1   /**< \brief Attenuate response to fast edges */
} IfxEdsadc_OvershootCompensation;

/** \brief Rectifier sign source\n
 * Selects the sign signal that is to be delayed.\n
 * Definition in Ifx_DSADC.RECT.B.SSRC
 */
typedef enum
{
    IfxEdsadc_RectifierSignSource_onChipGenerator = 0,  /**< \brief On-chip carrier generator */
    IfxEdsadc_RectifierSignSource_nextChannel     = 1,  /**< \brief Sign of result of next channel */
    IfxEdsadc_RectifierSignSource_externalA       = 2,  /**< \brief External sign signal A */
    IfxEdsadc_RectifierSignSource_externalB       = 3   /**< \brief External sign signal B */
} IfxEdsadc_RectifierSignSource;

/** \brief Restart the filter chain when an integration window starts
 */
typedef enum
{
    IfxEdsadc_RestartFilterChain_on  = 0,
    IfxEdsadc_RestartFilterChain_off = 1
} IfxEdsadc_RestartFilterChain;

/** \brief specifies result display mode (signed/unsigned)
 * Definition in Ifx_DSADC.DICFG.B.RDM
 */
typedef enum
{
    IfxEdsadc_ResultDisplayMode_signed   = 0, /**< \brief Signed: result values range from -215 to +215 */
    IfxEdsadc_ResultDisplayMode_unsigned = 1  /**< \brief Unsigned: result values range from 0 to +216 (shifted by 215) */
} IfxEdsadc_ResultDisplayMode;

/** \brief Demodulator sample clock source select\n
 * Definition in Ifx_EDSADC.DICFG.B.CSRC
 */
typedef enum
{
    IfxEdsadc_SampleClockSource_internal = 0,  /**< \brief Internal clock */
    IfxEdsadc_SampleClockSource_inputA   = 3,  /**< \brief External clock, from Input A */
    IfxEdsadc_SampleClockSource_inputB   = 4,  /**< \brief External clock, from Input B */
    IfxEdsadc_SampleClockSource_inputC   = 5   /**< \brief External clock, from Input C */
} IfxEdsadc_SampleClockSource;

/** \brief Service request fifo level
 * Definition in Ifx_EDSADC.RFC.B.SRLVL
 */
typedef enum
{
    IfxEdsadc_ServiceRequestFifolevel_1 = 0,      /**< \brief Generate a service request when Fifo contain level 1 Value  */
    IfxEdsadc_ServiceRequestFifolevel_2,          /**< \brief Generate a service request when Fifo contain level 2 Value  */
    IfxEdsadc_ServiceRequestFifolevel_3,          /**< \brief Generate a service request when Fifo contain level 3 Value  */
    IfxEdsadc_ServiceRequestFifolevel_4           /**< \brief Generate a service request when Fifo contain level 4 Value  */
} IfxEdsadc_ServiceRequestFifolevel;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in Ifx_EDSADC.CLC.B.EDIS
 */
typedef enum
{
    IfxEdsadc_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxEdsadc_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxEdsadc_SleepMode;

/** \brief Defines when the slew rate filter is activated
 */
typedef enum
{
    IfxEdsadc_StepDetectionMode_lastInput       = 0, /**< \brief Compare threshold to difference of current and last input */
    IfxEdsadc_StepDetectionMode_secondlastInput = 1  /**< \brief Compare threshold to difference of current and second-last input */
} IfxEdsadc_StepDetectionMode;

/** \brief Adjusts the analog circuitry to the supply voltage used in the application
 * system.Defined In defined in MODULE_EDSADC.GLOBCFG.B.SUPLEV
 */
typedef enum
{
    IfxEdsadc_SupplyVoltageLevel_automaticControl = 0,  /**< \brief voltage range is controlled by the power supply */
    IfxEdsadc_SupplyVoltageLevel_upperVoltage     = 1,  /**< \brief Upper voltage range: assume a 5 V power supply is connected */
    IfxEdsadc_SupplyVoltageLevel_lowerVoltage     = 2   /**< \brief Lower voltage range: assume a 3.3 V power supply is connected */
} IfxEdsadc_SupplyVoltageLevel;

/** \brief OCDS Suspend Control (OCDS.SUS)
 */
typedef enum
{
    IfxEdsadc_SuspendMode_none = 0,  /**< \brief No suspend */
    IfxEdsadc_SuspendMode_hard = 1,  /**< \brief Hard Suspend */
    IfxEdsadc_SuspendMode_soft = 2   /**< \brief Soft Suspend */
} IfxEdsadc_SuspendMode;

/** \brief Time Stamp Counter Clock Selection
 */
typedef enum
{
    IfxEdsadc_TimeStampCounterClockSelection_div1 = 0,  /**< \brief fTSTMP = fMOD */
    IfxEdsadc_TimeStampCounterClockSelection_div2 = 1,  /**< \brief fTSTMP = fMOD/2 */
    IfxEdsadc_TimeStampCounterClockSelection_div4 = 2,  /**< \brief fTSTMP = fMOD/4 */
    IfxEdsadc_TimeStampCounterClockSelection_div8 = 3   /**< \brief fTSTMP = fMOD/8 */
} IfxEdsadc_TimeStampCounterClockSelection;

/** \brief Timestamp trigger mode\n
 * Definition in Ifx_EDSADC.DICFG.B.TSTRMODE
 */
typedef enum
{
    IfxEdsadc_TimestampTrigger_noTrigger   = 0,  /**< \brief No timestamp trigger */
    IfxEdsadc_TimestampTrigger_fallingEdge = 1,  /**< \brief Trigger event upon a falling edge */
    IfxEdsadc_TimestampTrigger_risingEdge  = 2,  /**< \brief Trigger event upon a rising edge */
    IfxEdsadc_TimestampTrigger_eachEdge    = 3   /**< \brief Trigger event upon each edge */
} IfxEdsadc_TimestampTrigger;

/** \brief Trigger select\n
 * Definition in Ifx_EDSADC.DICFG.B.TRSEL
 */
typedef enum
{
    IfxEdsadc_TriggerInput_a = 0,   /**< \brief GTM EDSADC Trigger 0 */
    IfxEdsadc_TriggerInput_b = 1,   /**< \brief GTM EDSADC Trigger 1 */
    IfxEdsadc_TriggerInput_c = 2,   /**< \brief GTM ADC Trigger 0 */
    IfxEdsadc_TriggerInput_d = 3,   /**< \brief GTM ADC Trigger 1 */
    IfxEdsadc_TriggerInput_e = 4,   /**< \brief Trigger/gate via port input P33.0 */
    IfxEdsadc_TriggerInput_f = 5,   /**< \brief Trigger/gate via port input P33.4 */
    IfxEdsadc_TriggerInput_g = 6,   /**< \brief ERU pattern detection output 0 */
    IfxEdsadc_TriggerInput_h = 7,   /**< \brief Trigger/gate, channel 0,input H */
    IfxEdsadc_TriggerInput_i = 8,   /**< \brief Trigger/gate, channel 0,input I */
    IfxEdsadc_TriggerInput_j = 9,   /**< \brief Trigger/gate, channel 0,input J */
    IfxEdsadc_TriggerInput_k = 10,  /**< \brief GTM ADC Trigger 2 */
    IfxEdsadc_TriggerInput_l = 11,  /**< \brief GTM ADC Trigger 3 */
    IfxEdsadc_TriggerInput_m = 12,  /**< \brief GTM DSADC Trigger 2 */
    IfxEdsadc_TriggerInput_n = 13,  /**< \brief GTM DSADC Trigger 3 */
    IfxEdsadc_TriggerInput_o = 14,  /**< \brief Trigger/gate, channel 0,input O */
    IfxEdsadc_TriggerInput_p = 15   /**< \brief Trigger/gate, channel 0,input P */
} IfxEdsadc_TriggerInput;

/** \brief Controls the dithering function for each modulator separately
 * Definition in Ifx_DSADC.MODCFG.B.DITHEN
 */
typedef enum
{
    IfxEdsadc_dithering_disabled = 0,  /**< \brief dithering function disabled */
    IfxEdsadc_dithering_enabled  = 1   /**< \brief dithering function enabled */
} IfxEdsadc_dithering;

/** \} */

/** \brief Allows copying of bitfield AMX into bitfield TIMESTAMP
 */
typedef enum
{
    IfxEdsadc_AnalogMux_doNotCopyAmx = 0,  /**< \brief Do not copy, timestamp uses all 16 bits */
    IfxEdsadc_AnalogMux_copyAmx      = 1   /**< \brief Copy AMX to bits TIMESTAMP[15:14], timestamp uses lower 14 bits */
} IfxEdsadc_AnalogMux;

/** \brief Timestamp Counter Run Control
 */
typedef enum
{
    IfxEdsadc_TimeStampCounterControl_off = 0,  /**< \brief Timestamp counter is off */
    IfxEdsadc_TimeStampCounterControl_on  = 1   /**< \brief Timestamp counter is counting at the rate selected by bitfield TSCLK */
} IfxEdsadc_TimeStampCounterControl;

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \brief Modulator Configuration
 */
typedef struct
{
    float32                        modulatorClockPeriod;         /**< \brief Modulator clock period */
    IfxEdsadc_InputGain            inputGain;                    /**< \brief Modulator gain select of analog input path */
    IfxEdsadc_AnalogClockSyncDelay analogClockSyncDelay;         /**< \brief Define the delay in clock cycle after sync signal */
    IfxEdsadc_InputConfig          positiveInput;                /**< \brief Modulator configuration of positive input line */
    IfxEdsadc_InputConfig          negativeInput;                /**< \brief Modulator configuration of negative input line */
    IfxEdsadc_InputPin             inputPin;                     /**< \brief Modulator input pin selection */
    IfxEdsadc_dithering            ditheringEnabled;             /**< \brief Control the Dithering Function for each modulator */
    boolean                        integratorResetEnabled;       /**< \brief Control the modulator overload handling */
    boolean                        inputMuxActionControl;        /**< \brief Defines the mechanism by which the input multiplexer is controlled */
    IfxEdsadc_InputMuxControlMode  triggerEvent;                 /**< \brief Defines the condition for a trigger event to control the input multiplexer */
} IfxEdsadc_ModulatorConfig;

/** \addtogroup IfxLld_Edsadc_Std_Operative
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the module's suspend state.
 * TRUE :if module is suspended.
 * FALSE:if module is not yet suspended.
 * \param edsadc Pointer to EDSADC module registers
 * \return Suspend status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxEdsadc_isModuleSuspended(Ifx_EDSADC *edsadc);

/** \brief Sets the sensitivity of the module to sleep signal
 * \param edsadc pointer to EDSADC registers
 * \param mode mode selection (enable/disable)
 * \return None
 */
IFX_INLINE void IfxEdsadc_setSleepMode(Ifx_EDSADC *edsadc, IfxEdsadc_SleepMode mode);

/** \brief Configure the Module to Hard/Soft suspend mode.
 * Note: The api works only when the OCDS is enabled and in Supervisor Mode. When OCDS is disabled the OCS suspend control is ineffective.
 * \param edsadc Pointer to EDSADC module registers
 * \param mode Module suspend mode
 * \return None
 */
IFX_INLINE void IfxEdsadc_setSuspendMode(Ifx_EDSADC *edsadc, IfxEdsadc_SuspendMode mode);

/** \brief Enables the conversion of multiple channels
 * \param edsadc Pointer to the EDSADC register space
 * \param modulatorMask the modulator which should be running (bitwise selection)
 * \param channelMask the channels which should be scanned (bitwise selection)
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_INLINE void IfxEdsadc_startScan(Ifx_EDSADC *edsadc, uint32 modulatorMask, uint32 channelMask);

/** \brief Disables the conversion of multiple channels
 * \param edsadc Pointer to the EDSADC register space
 * \param modulatorMask the modulator which should be disabled (bitwise selection)
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_INLINE void IfxEdsadc_stopScan(Ifx_EDSADC *edsadc, uint32 modulatorMask);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the module
 * \param edsadc Pointer to Module space
 * \return None
 */
IFX_EXTERN void IfxEdsadc_disableModule(Ifx_EDSADC *edsadc);

/** \brief Enables the module
 * \param edsadc Pointer to Module space
 * \return None
 */
IFX_EXTERN void IfxEdsadc_enableModule(Ifx_EDSADC *edsadc);

/** \brief resets EDSADC kernel
 * \param edsadc pointer to EDSADC registers
 * \return None
 */
IFX_EXTERN void IfxEdsadc_resetModule(Ifx_EDSADC *edsadc);

/** \} */

/** \addtogroup IfxLld_Edsadc_Std_Support
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Get the main comb decimation factor
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return the main comb decimation factor
 */
IFX_INLINE uint16 IfxEdsadc_getMainCombDecimation(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Get result from the main chain
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return result from the main chain
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_INLINE sint16 IfxEdsadc_getMainResult(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Get the subsequent result
 */
IFX_INLINE sint32 IfxEdsadc_getSubsequentResult(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Return TRUE if EDSADC module is enabled
 * \param edsadc Pointer to the EDSADC register space
 * \return TRUE if EDSADC module is enabled
 */
IFX_INLINE boolean IfxEdsadc_isModuleEnabled(Ifx_EDSADC *edsadc);

/** \brief Set the carrier waveform mode
 * \param edsadc Pointer to the EDSADC register space
 * \param waveformMode the waveform mode
 * \return None
 */
IFX_INLINE void IfxEdsadc_setCarrierMode(Ifx_EDSADC *edsadc, IfxEdsadc_CarrierWaveformMode waveformMode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Get the sample frequency of the integrator output in Hz
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return frequency in Hz
 */
IFX_EXTERN float32 IfxEdsadc_getIntegratorOutFreq(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Get the sample frequency of the main COMB filter output in Hz
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return frequency in Hz
 */
IFX_EXTERN float32 IfxEdsadc_getMainCombOutFreq(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Estimate the group delay of main-chain filters in seconds
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return delay in seconds
 */
IFX_EXTERN float32 IfxEdsadc_getMainGroupDelay(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Get the modulator clock frequency in Hz
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return frequency in Hz
 */
IFX_EXTERN float32 IfxEdsadc_getModulatorClockFreq(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Get the input frequency of EDSADC in Hz
 * \param edsadc Pointer to the EDSADC register space
 * \return frequency in Hz
 */
IFX_EXTERN float32 IfxEdsadc_getModulatorInputClockFreq(Ifx_EDSADC *edsadc);

/** \} */

/** \addtogroup IfxLld_Edsadc_Std_Interrupt
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Address/pointer to the interrupt source register
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return Address/pointer to the interrupt source register
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxEdsadc_getAuxSrc(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Get the interrupt source register for a Main event
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Channel Id
 * \return Address/pointer to the interrupt source register
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxEdsadc_getMainSrc(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \} */

/** \addtogroup IfxLld_Edsadc_Std_IO
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initializes a CGPWM output
 * \param cgPwm the CGPWM Pin which should be configured
 * \param pinMode the pin output mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxEdsadc_initCgPwmPin(const IfxEdsadc_Cgpwm_Out *cgPwm, IfxPort_OutputMode pinMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a CIN input
 * \param cIn the CIN Pin which should be configured
 * \param cInMode the pin input mode which should be configured
 * \param padDriver Pad Driver Configuration
 * \return None
 */
IFX_INLINE void IfxEdsadc_initCinPin(const IfxEdsadc_Cin_In *cIn, IfxPort_InputMode cInMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a COUT output
 * \param cout the COUT Pin which should be configured
 * \param pinMode the pin output mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxEdsadc_initCoutPin(const IfxEdsadc_Cout_Out *cout, IfxPort_OutputMode pinMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a DIN input
 * \param dIn the DIN Pin which should be configured
 * \param dInMode the pin input mode which should be configured
 * \param padDriver Pad Driver Configuration
 * \return None
 */
IFX_INLINE void IfxEdsadc_initDinPin(const IfxEdsadc_Din_In *dIn, IfxPort_InputMode dInMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a DS input
 * \param dsn the DSN Pin which should be configured
 * \param pinMode the pin input mode which should be configured
 * \param padDriver Pad Driver Configuration
 * \return None
 */
IFX_INLINE void IfxEdsadc_initDsnPin(const IfxEdsadc_Dsn_In *dsn, IfxPort_InputMode pinMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a DS input
 * \param dsp the DSP Pin which should be configured
 * \param pinMode the pin input mode which should be configured
 * \param padDriver Pad Driver Configuration
 * \return None
 */
IFX_INLINE void IfxEdsadc_initDspPin(const IfxEdsadc_Dsp_In *dsp, IfxPort_InputMode pinMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a ITR input
 * \param itr the ITR Pin which should be configured
 * \param itrMode the pin input mode which should be configured
 * \param padDriver Pad Driver Configuration
 * \return None
 */
IFX_INLINE void IfxEdsadc_initItrPin(const IfxEdsadc_Itr_In *itr, IfxPort_InputMode itrMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a SG input
 * \param sg the SG Pin which should be configured
 * \param pinMode the pin input mode which should be configured
 * \param padDriver Pad Driver Configuration
 * \return None
 */
IFX_INLINE void IfxEdsadc_initSgPin(const IfxEdsadc_Sg_In *sg, IfxPort_InputMode pinMode, IfxPort_PadDriver padDriver);

/** \} */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the positive input line configuration
 * \param edsadc Pointer to EDSADC module SFRs
 * \param channel Channel Number
 * \return Positive Input Line Configuration
 */
IFX_INLINE uint8 IfxEdsadc_getPositiveInputLineConfiguration(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Returns the negative input line configuration
 * \param edsadc Pointer to EDSADC module SFRs
 * \param channel Channel Number
 * \return Negative Input Line Configuration
 */
IFX_INLINE uint8 IfxEdsadc_getNegativeInputLineConfiguration(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/** \brief Sets the Offset compensation Value
 * \param edsadc Pointer to EDSADC module SFRs
 * \param channel Channel Number to be configured
 * \param value Value to be set
 * \return None
 */
IFX_INLINE void IfxEdsadc_setOffsetCompensationValue(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, uint16 value);

/** \brief Returns the address of the result register
 * \param edsadc Pointer to EDSADC module SFRs
 * \param channel Channel Number
 * \return Address of the result register
 */
IFX_INLINE uint32 *IfxEdsadc_getResultRegisterAddress(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief set common mode voltage Parameters
 * \param edsadc Pointer to Module space
 * \param channel specifies channel Id
 * \param voltage select Fractional reference Voltage
 * \param refMode Fractional Reference Voltage Enable/ Disable
 * \param hsvMode Enable / Disable Half Supply Voltage
 * \param cmhvMode Enable / Disable Common Mode Hold Voltage
 * \param positiveInput Defines the connection of the respective positive input y to the common mode hold voltage
 * \param negativeInput Defines the connection of the respective negative input y to the common mode hold voltage.
 * \return None
 */
IFX_EXTERN void IfxEdsadc_setCommonModeVoltage(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, IfxEdsadc_FractionalRefVoltageSelection voltage, IfxEdsadc_FractionalRefVoltage refMode, IfxEdsadc_HalfSupplyVoltage hsvMode, IfxEdsadc_CommonModeHoldVoltage cmhvMode, uint8 positiveInput, uint8 negativeInput);

/** \brief configure gain correction
 * \param edsadc Pointer to the EDSADC register space
 * \param channel Specifies channel ID
 * \param gainFactor Multiplication Factor for gain correction
 * \param cicShift Position of CIC filter output shifter
 * \return None
 */
IFX_EXTERN void IfxEdsadc_setGainCorrectionFactor(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, uint16 gainFactor, uint8 cicShift);

/**
 * \param edsadc Pointer to module space
 * \param channel specifies channel ID
 * \param timeStampCounterClock Time Stamp Counter Clock selection
 * \param runControl TimeStamp Counter Run Control
 * \param analogMuxCopy Analog MUX Setting Copy Enable
 * \return None
 */
IFX_EXTERN void IfxEdsadc_setTimeStampCounter(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, IfxEdsadc_TimeStampCounterClockSelection timeStampCounterClock, IfxEdsadc_TimeStampCounterControl runControl, IfxEdsadc_AnalogMux analogMuxCopy);

/**
 * \param edsadc Pointer to EDSADC SFRs
 * \param gainFactor Multiplication Factor for Gain Correction During Calibration
 * \param cicShift Position of the CIC Filter Output Shifter During Calibration
 * \param cicDecimationRate Decimation Rate of the CIC Filter During Calibration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_setGainControl(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, uint16 gainFactor, uint8 cicShift, uint8 cicDecimationRate);

/**
 * \param edsadc Pointer to EDSADC module SFRs
 * \param channel Channel Number to be configured
 * \param calFactor Multiplication Factor for Gain Calibration
 * \param calTarget Target Value for Calibrated Fullscale
 * \return None
 */
IFX_EXTERN void IfxEdsadc_setGainCalibration(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, uint16 calFactor, uint16 calTarget);

/** \brief Set the Modulator configuration
 * \param edsadc Pointer to EDSADC module SFRs
 * \param channel Channel Number to be configured
 * \param config Modulator Configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_configureModulator(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, IfxEdsadc_ModulatorConfig *config);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE uint16 IfxEdsadc_getMainCombDecimation(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel)
{
    return (uint16)(1U + edsadc->CH[channel].FCFGC.B.CFMDF);
}


IFX_INLINE sint16 IfxEdsadc_getMainResult(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel)
{
    return edsadc->CH[channel].RESM.B.RESULTLO;
}


IFX_INLINE sint32 IfxEdsadc_getSubsequentResult(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel)
{
    return (sint32)(edsadc->CH[channel].RESM.U);
}


IFX_INLINE void IfxEdsadc_initCgPwmPin(const IfxEdsadc_Cgpwm_Out *cgPwm, IfxPort_OutputMode pinMode, IfxPort_PadDriver padDriver)
{
    if (cgPwm->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeOutput(cgPwm->pin.port, cgPwm->pin.pinIndex, pinMode, cgPwm->select);
        IfxPort_setPinPadDriver(cgPwm->pin.port, cgPwm->pin.pinIndex, padDriver);
    }
}


IFX_INLINE void IfxEdsadc_initCinPin(const IfxEdsadc_Cin_In *cIn, IfxPort_InputMode cInMode, IfxPort_PadDriver padDriver)
{
    if (cIn->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeInput(cIn->pin.port, cIn->pin.pinIndex, cInMode);
        IfxPort_setPinPadDriver(cIn->pin.port, cIn->pin.pinIndex, padDriver);
    }
}


IFX_INLINE void IfxEdsadc_initCoutPin(const IfxEdsadc_Cout_Out *cout, IfxPort_OutputMode pinMode, IfxPort_PadDriver padDriver)
{
    if (cout->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeOutput(cout->pin.port, cout->pin.pinIndex, pinMode, cout->select);
        IfxPort_setPinPadDriver(cout->pin.port, cout->pin.pinIndex, padDriver);
    }
}


IFX_INLINE void IfxEdsadc_initDinPin(const IfxEdsadc_Din_In *dIn, IfxPort_InputMode dInMode, IfxPort_PadDriver padDriver)
{
    if (dIn->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeInput(dIn->pin.port, dIn->pin.pinIndex, dInMode);
        IfxPort_setPinPadDriver(dIn->pin.port, dIn->pin.pinIndex, padDriver);
    }
}


IFX_INLINE void IfxEdsadc_initDsnPin(const IfxEdsadc_Dsn_In *dsn, IfxPort_InputMode pinMode, IfxPort_PadDriver padDriver)
{
    if (dsn->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeInput(dsn->pin.port, dsn->pin.pinIndex, pinMode);
        IfxPort_setPinPadDriver(dsn->pin.port, dsn->pin.pinIndex, padDriver);
    }
}


IFX_INLINE void IfxEdsadc_initDspPin(const IfxEdsadc_Dsp_In *dsp, IfxPort_InputMode pinMode, IfxPort_PadDriver padDriver)
{
    if (dsp->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeInput(dsp->pin.port, dsp->pin.pinIndex, pinMode);
        IfxPort_setPinPadDriver(dsp->pin.port, dsp->pin.pinIndex, padDriver);
    }
}


IFX_INLINE void IfxEdsadc_initItrPin(const IfxEdsadc_Itr_In *itr, IfxPort_InputMode itrMode, IfxPort_PadDriver padDriver)
{
    if (itr->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeInput(itr->pin.port, itr->pin.pinIndex, itrMode);
        IfxPort_setPinPadDriver(itr->pin.port, itr->pin.pinIndex, padDriver);
    }
}


IFX_INLINE void IfxEdsadc_initSgPin(const IfxEdsadc_Sg_In *sg, IfxPort_InputMode pinMode, IfxPort_PadDriver padDriver)
{
    if (sg->pin.port != NULL_PTR)
    {
        IfxPort_setPinModeInput(sg->pin.port, sg->pin.pinIndex, pinMode);
        IfxPort_setPinPadDriver(sg->pin.port, sg->pin.pinIndex, padDriver);
    }
}


IFX_INLINE boolean IfxEdsadc_isModuleEnabled(Ifx_EDSADC *edsadc)
{
    return edsadc->CLC.B.DISS == 0;
}


IFX_INLINE boolean IfxEdsadc_isModuleSuspended(Ifx_EDSADC *edsadc)
{
    boolean status = FALSE;

    if (edsadc->OCS.B.SUSSTA == 1)
    {
        status = TRUE;
    }
    else
    {
        status = FALSE;
    }

    return status;
}


IFX_INLINE void IfxEdsadc_setCarrierMode(Ifx_EDSADC *edsadc, IfxEdsadc_CarrierWaveformMode waveformMode)
{
    edsadc->CGCFG.B.CGMOD = waveformMode;
}


IFX_INLINE void IfxEdsadc_setSleepMode(Ifx_EDSADC *edsadc, IfxEdsadc_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    edsadc->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


IFX_INLINE void IfxEdsadc_setSuspendMode(Ifx_EDSADC *edsadc, IfxEdsadc_SuspendMode mode)
{
    Ifx_EDSADC_OCS ocs;

    ocs.U = edsadc->OCS.U;

    // remove protection and configure the suspend mode.
    ocs.B.SUS_P   = 1;
    ocs.B.SUS     = mode;
    edsadc->OCS.U = ocs.U;
}


IFX_INLINE void IfxEdsadc_startScan(Ifx_EDSADC *edsadc, uint32 modulatorMask, uint32 channelMask)
{
    edsadc->GLOBRC.U = edsadc->GLOBRC.U | ((modulatorMask << 16) | (channelMask));
}


IFX_INLINE void IfxEdsadc_stopScan(Ifx_EDSADC *edsadc, uint32 modulatorMask)
{
    edsadc->GLOBRC.U &= ~(modulatorMask << 16);
}


IFX_INLINE uint8 IfxEdsadc_getPositiveInputLineConfiguration(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel)
{
    return edsadc->CH[channel].MODCFG.B.INCFGP;
}


IFX_INLINE uint8 IfxEdsadc_getNegativeInputLineConfiguration(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel)
{
    return edsadc->CH[channel].MODCFG.B.INCFGN;
}


IFX_INLINE void IfxEdsadc_setOffsetCompensationValue(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, uint16 value)
{
    edsadc->CH[channel].OFFCOMP.B.OFFSET = value;
}


IFX_INLINE uint32 *IfxEdsadc_getResultRegisterAddress(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel)
{
    return (uint32 *)&(edsadc->CH[channel].RESM.U);
}


#endif /* IFXEDSADC_H */
