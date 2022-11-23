/**
 * \file IfxEdsadc_Edsadc.h
 * \brief EDSADC EDSADC details
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
 * \defgroup IfxLld_Edsadc_Edsadc_Usage How to use the EDSADC Interface driver?
 * \ingroup IfxLld_Edsadc
 *
 * The EDSADC interface driver provides a default EDSADC configuration for converting analog data streams inputs from external modulators via digital input channels, into digital values by using the on-chip demodulator channels.
 *
 * In the following sections it will be described, how to integrate the driver into the application framework.
 *
 * \section IfxLld_Edsadc_Edsadc_Preparation Preparation
 * \subsection IfxLld_Edsadc_Edsadc_Include Include Files
 *
 * Include following header file into your C code:
 * \code
 *     #include <Edsadc/Edsadc/IfxEdsadc_Edsadc.h>
 *  \endcode
 *
 * \subsection IfxLld_Edsadc_Edsadc_Variables Variables
 *
 * Declare the EDSADC channel handle and available channels as global variables in your C code:
 *
 * \code
 *     static IfxEdsadc_Edsadc edsadc;
 *     IfxEdsadc_Edsadc_Channel edsadcChannel[IFXEDSADC_NUM_CHANNELS];
 *
 *     uint8 edsadcChannelAvailable[IFXEDSADC_NUM_CHANNELS] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
 * \endcode
 *
 *
 * \subsection IfxLld_Edsadc_Edsadc_Init Module Initialisation
 *
 * The module initialisation can be done in the same function. Here an example:
 * \code
 *
 *     // create module config
 *     IfxEdsadc_Edsadc_Config edsadcConfig;
 *     IfxEdsadc_Edsadc_initModuleConfig(&edsadcConfig, &MODULE_EDSADC);
 *
 *     // initialize module
 *    // IfxEdsadc_Edsadc edsadc; //declared globally
 *     IfxEdsadc_Edsadc_initModule(&edsadc, &edsadcConfig);
 *
 *     // create channel config
 *     IfxEdsadc_Edsadc_ChannelConfig edsadcChannelConfig;
 *     IfxEdsadc_Edsadc_initChannelConfig(&edsadcChannelConfig, &edsadc);
 *
 *     // modify default configuration
 *     edsadcChannelConfig.modulator.positiveInput      = IfxEdsadc_InputConfig_inputPin;
 *     edsadcChannelConfig.modulator.negativeInput      = IfxEdsadc_InputConfig_inputPin;
 *     edsadcChannelConfig.modulator.inputGain          = IfxEdsadc_InputGain_factor1;
 *     edsadcChannelConfig.modulator.inputPin           = IfxEdsadc_InputPin_a;
 *     edsadcChannelConfig.modulator.modulatorClockFreq = 10.0e6;
 *
 *     edsadcChannelConfig.combFilter.decimationFactor  = 32;
 *     edsadcChannelConfig.combFilter.startValue        = 32;
 *
 *     edsadcChannelConfig.firFilter.fir0Enabled        = TRUE;
 *     edsadcChannelConfig.firFilter.fir1Enabled        = TRUE;
 *     edsadcChannelConfig.firFilter.offsetCompensation = IfxEdsadc_OffsetCompensationFilter_disabled;
 *     edsadcChannelConfig.firFilter.fir1DecimateRate   = TRUE;
 *     edsadcChannelConfig.firFilter.prefilterEnabled   = TRUE;
 *
 *
 *     // initialize channels
 *     for(int chn=0; chn<IFXEDSADC_NUM_CHANNELS; ++chn) {
 *         if( edsadcChannelAvailable[chn] ) {
 *             edsadcChannelConfig.channelId = (IfxEdsadc_ChannelId)chn;
 *         //  Note:CICSHIFT Value has to update according to application need
 *            edsadcChannelConfig.cicShift = 15;
 *             IfxEdsadc_Edsadc_initChannel(&edsadcChannel[chn], &edsadcChannelConfig);
 *         }
 *     }
 *
 *
 * \endcode
 *
 * The EDSADC is ready for use now!
 *
 *
 * \section IfxLld_Edsadc_Edsadc_Conversions Conversions
 *
 * The EDSADC driver provides simple to use Conversion function,
 *
 * \code
 *     // start conversions
 *     IfxEdsadc_Edsadc_startScan(&edsadc, 0x3f, 0x3f);
 *
 *     // results are now available in IFXEDSADC(ds).CH[x].RESM.B.RESULT (x=0..5)
 * \endcode
 *
 * The converted data can be collected using the following function
 *
 * \code
 *     // declared globally
 *     // sint16 result[];
 *    for(int chn=0; chn<IFXEDSADC_NUM_CHANNELS; ++chn) {
 *         if( edsadcChannelAvailable[chn] ) {
 *     result = IfxEdsadc_Edsadc_getMainResult(&edsadcChannel[chn]);
 * }
 * }
 * \endcode
 *
 * \defgroup IfxLld_Edsadc_Edsadc EDSADC
 * \ingroup IfxLld_Edsadc
 * \defgroup IfxLld_Edsadc_Edsadc_DataStructures Data Structures
 * \ingroup IfxLld_Edsadc_Edsadc
 * \defgroup IfxLld_Edsadc_Edsadc_Module Module Functions
 * \ingroup IfxLld_Edsadc_Edsadc
 * \defgroup IfxLld_Edsadc_Edsadc_Channel Channel Functions
 * \ingroup IfxLld_Edsadc_Edsadc
 * \defgroup IfxLld_Edsadc_Edsadc_Operative Operative Functions
 * \ingroup IfxLld_Edsadc_Edsadc
 * \defgroup IfxLld_Edsadc_Edsadc_Results Result Functions
 * \ingroup IfxLld_Edsadc_Edsadc
 * \defgroup IfxLld_Edsadc_Edsadc_Interrupt Interrupt Functions
 * \ingroup IfxLld_Edsadc_Edsadc
 */

#ifndef IFXEDSADC_EDSADC_H
#define IFXEDSADC_EDSADC_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Edsadc/Std/IfxEdsadc.h"
#include "Scu/Std/IfxScuWdt.h"

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Edsadc_Edsadc_DataStructures
 * \{ */
/** \brief Channel Pins Configuration structure
 */
typedef struct
{
    IFX_CONST IfxEdsadc_Cin_In *cin;             /**< \brief the CIN Pin which should be configured */
    IfxPort_InputMode           cinMode;         /**< \brief the CIN pin input mode which should be configured */
    IFX_CONST IfxEdsadc_Din_In *din;             /**< \brief the DIN Pin which should be configured */
    IfxPort_InputMode           dinMode;         /**< \brief the DIN pin input mode which should be configured */
    IFX_CONST IfxEdsadc_Itr_In *itr;             /**< \brief the ITR Pin which should be configured */
    IfxPort_InputMode           itrMode;         /**< \brief the ITR pin input mode which should be configured */
    IFX_CONST IfxEdsadc_Dsn_In *dsn;             /**< \brief the DSN Pin which should be configured */
    IfxPort_InputMode           dsnMode;         /**< \brief the DSN pin output mode which should be configured */
    IFX_CONST IfxEdsadc_Dsp_In *dsp;             /**< \brief the DSP Pin which should be configured */
    IfxPort_InputMode           dspMode;         /**< \brief the DSP pin output mode which should be configured */
    IfxPort_PadDriver           pinDriver;       /**< \brief Pin Driver Configuration */
} IfxEdsadc_Edsadc_ChannelPins;

/** \brief Comb filter configuration structure
 */
typedef struct
{
    uint16 decimationFactor;       /**< \brief decimation rate of comb filter 4 .. 256 */
    uint16 startValue;             /**< \brief 4 .. decimationFactor */
} IfxEdsadc_Edsadc_CombFilterConfig;

/** \brief enable the voltage generators and select which input pins are connected to the common mode hold voltage
 */
typedef struct
{
    IfxEdsadc_FractionalRefVoltageSelection fractionalRefVoltage;        /**< \brief Fractional Reference Voltage selection */
    IfxEdsadc_FractionalRefVoltage          refVoltageEnable;            /**< \brief Fractional Reference Voltage enable/disable */
    IfxEdsadc_HalfSupplyVoltage             halfSupplyVoltge;            /**< \brief Half supply voltage Enable/Disable */
    IfxEdsadc_CommonModeHoldVoltage         commonModeHoldVoltage;       /**< \brief Common Mode hold Voltage Enable/ Disable */
    uint8                                   positiveInput;               /**< \brief Defines the connection of the respective positive input y to the common
                                                                          * mode hold voltage. */
    uint8                                   negativeInput;               /**< \brief Defines the connection of the respective negative input y to the common mode hold voltage */
} IfxEdsadc_Edsadc_CommonModeVoltageConfig;

/** \brief Demodulator configuration structure
 */
typedef struct
{
    IfxEdsadc_TriggerInput      triggerInput;             /**< \brief Trigger selection */
    IfxEdsadc_InputDataSource   inputDataSource;          /**< \brief Demodulator input data source selection */
    IfxEdsadc_DataStream        dataStream;               /**< \brief Data stream select */
    IfxEdsadc_SampleClockSource sampleClockSource;        /**< \brief Demodulator sample clock source selection */
    IfxEdsadc_IntegratorTrigger integrationTrigger;       /**< \brief Integrator trigger mode selection */
    IfxEdsadc_TimestampTrigger  timestampTrigger;         /**< \brief Timestamp trigger mode selection */
    IfxEdsadc_DataRead          dataReadMode;             /**< \brief Selects the data that is returned when register RESMx is read (). */
    boolean                     timeStampMode;            /**< \brief FALSE = no timeStamp
                                                           * True    = inserts timestamp upon trigger */
    IfxEdsadc_ResultDisplayMode resultDisplay;            /**< \brief Result Display Mode (Signed./Unsigned) */
} IfxEdsadc_Edsadc_DemodulatorConfig;

/** \brief FIR filters configuration structure
 */
typedef struct
{
    IfxEdsadc_MainServiceRequest       serviceRequest;                  /**< \brief Service Request generation for main service request */
    IfxEdsadc_AuxServiceRequest        auxServiceRequest;               /**< \brief Service Request Generation for Auxiliary Service Request */
    IfxEdsadc_ServiceRequestFifolevel  serviceRequestLevel;             /**< \brief Service Request FIFO Level */
    IfxEdsadc_EventSelect              eventSelect;                     /**< \brief Defines when a comparator event is generated. */
    IfxEdsadc_OffsetCompensationFilter offsetCompensation;              /**< \brief Offset Compensation Filter enable/disable selection */
    boolean                            fir0Enabled;                     /**< \brief FIR filter 0 enable/disable selection */
    boolean                            fir1Enabled;                     /**< \brief FIR filter 0 enable/disable selection */
    boolean                            rippleCompensationEnabled;       /**< \brief Ripple Compensation Enabled */
    boolean                            fir1DecimateRate;                /**< \brief FIR1 Filter Decimation Rate */
    boolean                            cicMode;                         /**< \brief CIC Filter mode */
    boolean                            prefilterEnabled;                /**< \brief Enable/Disable the PreFilter */
    boolean                            calibrationTrigger;              /**< \brief triggger the calibration */
    boolean                            calibrationControl;              /**< \brief Automatic Calibration Control */
    IfxEdsadc_OvershootCompensation    overshootCompensation;           /**< \brief Overshoot Compensation Enable/Disable */
} IfxEdsadc_Edsadc_FirFilterConfig;

/** \brief Integrator configuration structure
 */
typedef struct
{
    IfxEdsadc_IntegrationWindowSize   windowSize;              /**< \brief Integrator window size */
    uint16                            discardCount;            /**< \brief Number of discarded values to after active trigger: 1 .. 64 */
    uint16                            integrationCount;        /**< \brief Number of integrated values after discard step: 1 .. 64 */
    uint16                            integrationCycles;       /**< \brief Number of integration cycles: 1 .. 16. Used only when \ref IfxDsadc_IntegrationWindowSize_internalControl */
    IfxEdsadc_IntegrationShiftControl shiftControl;            /**< \brief Integrator shift control */
    IfxEdsadc_RestartFilterChain      fcRestartControl;        /**< \brief Filter Chain Restart Control */
} IfxEdsadc_Edsadc_IntegratorConfig;

/** \brief Modulator configuration structure
 */
typedef struct
{
    float32                        modulatorClockFreq;           /**< \brief Modulator clock frequency */
    IfxEdsadc_InputGain            inputGain;                    /**< \brief Modulator gain select of analog input path */
    IfxEdsadc_AnalogClockSyncDelay analogClockSyncDelay;         /**< \brief Define the delay in clock cycle after sync signal */
    IfxEdsadc_InputConfig          positiveInput;                /**< \brief Modulator configuration of positive input line */
    IfxEdsadc_InputConfig          negativeInput;                /**< \brief Modulator configuration of negative input line */
    IfxEdsadc_InputPin             inputPin;                     /**< \brief Modulator input pin selection */
    IfxEdsadc_dithering            ditheringEnabled;             /**< \brief Control the Dithering Function for each modulator */
    boolean                        integratorResetEnabled;       /**< \brief control the modulator overload handling */
    boolean                        inputMuxActionControl;        /**< \brief Defines the mechanism by which the input multiplexer is controlled */
    IfxEdsadc_InputMuxControlMode  triggerEvent;                 /**< \brief Defines the condition for a trigger event to control the input multiplexer */
} IfxEdsadc_Edsadc_ModulatorConfig;

/** \brief Rectifier configuration structure
 */
typedef struct
{
    uint8                         signDelay;        /**< \brief Sign delay value */
    uint8                         signPeriod;       /**< \brief Sign period */
    IfxEdsadc_RectifierSignSource signSource;       /**< \brief Rectifier sign source */
    boolean                       enabled;          /**< \brief Rectification enable/disable selection */
} IfxEdsadc_Edsadc_RectifierConfig;

/** \brief TimeStamp Counter Configuration
 */
typedef struct
{
    IfxEdsadc_TimeStampCounterClockSelection timeStampCounterClock;            /**< \brief Timestamp Counter Clock Selection */
    IfxEdsadc_TimeStampCounterControl        timeStampCounterRunControl;
    IfxEdsadc_AnalogMux                      analogMuxCopy;                    /**< \brief Allows copying of bitfield AMX into bitfield TIMESTAMP */
} IfxEdsadc_Edsadc_TimeStampCounter;

/** \} */

/** \brief Contains configurations for Gain Calibaration
 */
typedef struct
{
    uint16 gainFactor;              /**< \brief Multiplication Factor for Gain Correction During Calibration(in GAINCTR register) */
    uint8  cicShift;
    uint8  cicDecimationRate;       /**< \brief Decimation Rate of the CIC Filter During Calibration(GAINCTR register) */
    uint16 calFactor;               /**< \brief Multiplication Factor for Gain Calibration */
    uint16 calTarget;               /**< \brief Target Value for Calibrated Fullscale */
} IfxEdsadc_Edsadc_GainCalibrationConfig;

/** \addtogroup IfxLld_Edsadc_Edsadc_DataStructures
 * \{ */
/** \brief EDSADC handle data structure
 */
typedef struct
{
    Ifx_EDSADC *edsadc;       /**< \brief Specifies the pointer to the EDSADC module registers */
} IfxEdsadc_Edsadc;

/** \brief Carrier generation configuration structure
 */
typedef struct
{
    IfxEdsadc_CarrierWaveformMode  carrierWaveformMode;       /**< \brief Carrier generation mode */
    float32                        frequency;                 /**< \brief Expected excitation frequency in Hz. */
    IFX_CONST IfxEdsadc_Cgpwm_Out *pinPos;                    /**< \brief Positive-carrier pin configuration */
    IFX_CONST IfxEdsadc_Cgpwm_Out *pinNeg;                    /**< \brief Negative-carrier pin configuration */
    IfxPort_OutputMode             pinMode;                   /**< \brief Carrier pins output mode */
    IfxPort_PadDriver              pinDriver;                 /**< \brief Carrier pins pad driver */
    boolean                        inverted;                  /**< \brief Signal polarity (Normal / Inverted) selection */
    boolean                        bitReversed;               /**< \brief Bit-Reverse PWM Generation (Normal / Bit reverse mode) selection */
} IfxEdsadc_Edsadc_CarrierGenConfig;

/** \brief Channel handle structure
 */
typedef struct
{
    Ifx_EDSADC         *module;          /**< \brief Specifies the pointer to the EDSADC module registers */
    Ifx_EDSADC_CH      *channel;         /**< \brief Specifies the pointer to the EDSADC channel registers */
    IfxEdsadc_ChannelId channelId;       /**< \brief Channel Id */
} IfxEdsadc_Edsadc_Channel;

/** \brief Single channel configuration structure
 */
typedef struct
{
    Ifx_EDSADC                              *module;                      /**< \brief Specifies the pointer to the EDSADC module registers */
    IfxEdsadc_ChannelId                      channelId;                   /**< \brief Channel Id */
    IfxEdsadc_Edsadc_FirFilterConfig         firFilter;                   /**< \brief FIR filters configuration structure */
    IfxEdsadc_Edsadc_ModulatorConfig         modulator;                   /**< \brief Modulator configuration structure */
    IfxEdsadc_Edsadc_DemodulatorConfig       demodulator;                 /**< \brief Demodulator configuration structure */
    IfxEdsadc_Edsadc_IntegratorConfig        integrator;                  /**< \brief Integrator configuration structure */
    IfxEdsadc_Edsadc_RectifierConfig         rectifier;                   /**< \brief Rectifier configuration structure */
    IfxEdsadc_Edsadc_CombFilterConfig        combFilter;                  /**< \brief Comb filter configuration structure */
    IfxEdsadc_Edsadc_TimeStampCounter        timeStamp;                   /**< \brief Configure Time Stamp Counter */
    IfxEdsadc_Edsadc_CommonModeVoltageConfig commonMode;                  /**< \brief Common Mode Voltage Configuration */
    uint16                                   gainFactor;                  /**< \brief Multiplication Factor for Gain Correction */
    uint8                                    cicShift;                    /**< \brief Position of the CIC Filter Output Shifter */
    IFX_CONST IfxEdsadc_Edsadc_ChannelPins  *channelPins;                 /**< \brief Channel Pins Configuration structure */
    IfxEdsadc_Edsadc_GainCalibrationConfig   gainCalibrationConfig;       /**< \brief Configuration Settings for Gain Calibration */
} IfxEdsadc_Edsadc_ChannelConfig;

/** \brief Clock configuration data structure
 */
typedef struct
{
    Ifx_EDSADC                        *edsadc;                   /**< \brief Specifies the pointer to the EDSADC module registers */
    IfxEdsadc_DitheringIntensity       ditheringIntensity;       /**< \brief Trimming Value for the Dithering Function */
    IfxEdsadc_ModulatorClockGeneration modulatorClockMode;       /**< \brief Defines the way the modulator clock is generated. */
    IfxEdsadc_SupplyVoltageLevel       supplyVoltageLevel;       /**< \brief Adjusts the analog circuitry to the supply voltage used in the application
                                                                  * system */
} IfxEdsadc_Edsadc_Config;

/** \} */

/** \addtogroup IfxLld_Edsadc_Edsadc_Module
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initialise the EDSADC carrier generator
 * \param edsadc pointer to the EDSADC handle (it will be initialized by this function)
 * \param config pointer to the EDSADC carrier configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initCarrierGen(IfxEdsadc_Edsadc *edsadc, IfxEdsadc_Edsadc_CarrierGenConfig *config);

/** \brief Initialises the comb filter
 * \param channel Pointer to the EDSADC channel handle
 * \param config pointer to the EDSADC comb filter configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initCombFilter(IfxEdsadc_Edsadc_Channel *channel, const IfxEdsadc_Edsadc_CombFilterConfig *config);

/** \brief Initialises the demodulator
 * \param channel Pointer to the EDSADC channel handle
 * \param config pointer to the EDSADC demodulator configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initDemodulator(IfxEdsadc_Edsadc_Channel *channel, const IfxEdsadc_Edsadc_DemodulatorConfig *config);

/** \brief Initialises the fir filter
 * \param channel Pointer to the EDSADC channel handle
 * \param config pointer to the EDSADC fir filter configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initFirFilter(IfxEdsadc_Edsadc_Channel *channel, const IfxEdsadc_Edsadc_FirFilterConfig *config);

/** \brief Initialises the integrator
 * \param channel Pointer to the EDSADC channel handle
 * \param config pointer to the EDSADC fir integrator configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initIntegrator(IfxEdsadc_Edsadc_Channel *channel, const IfxEdsadc_Edsadc_IntegratorConfig *config);

/** \brief Initialises the modulator
 * \param channel Pointer to the EDSADC channel handle
 * \param config pointer to the EDSADC modulator configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initModulator(IfxEdsadc_Edsadc_Channel *channel, const IfxEdsadc_Edsadc_ModulatorConfig *config);

/** \brief Initialise the EDSADC with the supplied configuration
 * \param edsadc pointer to the EDSADC handle (it will be initialized by this function)
 * \param config pointer to the EDSADC module configuration
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initModule(IfxEdsadc_Edsadc *edsadc, IfxEdsadc_Edsadc_Config *config);

/** \brief Initialise the config struct with default EDSADC configuration
 * \param config pointer to the EDSADC module configuration
 * \param edsadc base address of the EDSADC register space
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initModuleConfig(IfxEdsadc_Edsadc_Config *config, Ifx_EDSADC *edsadc);

/** \brief Initialises the rectifier
 * \param channel Pointer to the EDSADC channel handle
 * \param config pointer to the EDSADC fir rectifier configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initRectifier(IfxEdsadc_Edsadc_Channel *channel, const IfxEdsadc_Edsadc_RectifierConfig *config);

/** \} */

/** \addtogroup IfxLld_Edsadc_Edsadc_Channel
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initialise a EDSADC channel with the supplied configuration
 * \param channel pointer to the EDSADC channel handle (it will be initialized by this function)
 * \param config pointer to the EDSADCChannel configuration
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initChannel(IfxEdsadc_Edsadc_Channel *channel, const IfxEdsadc_Edsadc_ChannelConfig *config);

/** \brief Initialise the config struct with default EDSADC channel configuration
 * \param config pointer to the EDSADC Channel configuration  (it will be initialized by this function)
 * \param edsadc pointer to the EDSADC handle
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initChannelConfig(IfxEdsadc_Edsadc_ChannelConfig *config, IfxEdsadc_Edsadc *edsadc);

/** \} */

/** \addtogroup IfxLld_Edsadc_Edsadc_Operative
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Enables the conversion of multiple channels
 * \param edsadc EDSADC handle
 * \param modulatorMask the modulator which should be running (bitwise selection)
 * \param channelMask the channels which should be scanned (bitwise selection)
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_INLINE void IfxEdsadc_Edsadc_startScan(IfxEdsadc_Edsadc *edsadc, uint32 modulatorMask, uint32 channelMask);

/** \brief Disables the conversion of multiple channels
 * \param edsadc Pointer to the EDSADC handle
 * \param modulatorMask the modulator which should be running (bitwise selection)
 * \return None
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_INLINE void IfxEdsadc_Edsadc_stopScan(IfxEdsadc_Edsadc *edsadc, uint32 modulatorMask);

/** \} */

/** \addtogroup IfxLld_Edsadc_Edsadc_Results
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Get result from the main chain
 * \param channel Pointer to the EDSADC channel handle
 * \return result from the main chain
 *
 * A coding example can be found in \ref fxLld_Edsadc_Edsadc_Usage
 *
 */
IFX_INLINE sint16 IfxEdsadc_Edsadc_getMainResult(IfxEdsadc_Edsadc_Channel *channel);

/** \brief give the subsequent result
 * \param channel channel ID
 * \return return the Subsequent Result
 */
IFX_INLINE sint32 IfxEdsadc_Edsadc_getSubsequentResult(IfxEdsadc_Edsadc_Channel *channel);

/** \} */

/** \addtogroup IfxLld_Edsadc_Edsadc_Interrupt
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Get the interrupt source register for a Aux event
 * \param channel Pointer to the EDSADC channel handle
 * \return Address/pointer to the interrupt source register
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxEdsadc_Edsadc_getAuxSrc(IfxEdsadc_Edsadc_Channel *channel);

/** \brief Get the interrupt source register for a Main event
 * \param channel Pointer to the EDSADC channel handle
 * \return Address/pointer to the interrupt source register
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxEdsadc_Edsadc_getMainSrc(IfxEdsadc_Edsadc_Channel *channel);

/** \} */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief set gain Correction Factor
 * \param edsadc Pointer to edsadc Module space
 * \param channel specifies channel number
 * \param gainFactor Mulitiplication factor for gain correction
 * \param cicShift Position of CIC filter output shifter
 * Note:Value has to update according to application need
 * \return None
 */
IFX_INLINE void IfxEdsadc_Edsadc_setGainCorrectionFactor(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, uint16 gainFactor, uint8 cicShift);

/** \brief Configure Time Stamp Counter
 * \param edsadc pointer to Module Space
 * \param channel specifies channel ID
 * \param timeStamp specifies the timeStamp Configuration
 * \return None
 */
IFX_INLINE void IfxEdsadc_Edsadc_initTimeStampCounter(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, const IfxEdsadc_Edsadc_TimeStampCounter *timeStamp);

/** \brief initialize common mode voltage configuration
 * \param edsadc pointer to Module space
 * \param commonMode pointer to common mode voltage config structure
 * \return None
 */
IFX_INLINE void IfxEdsadc_Edsadc_initCommonModeVoltage(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, const IfxEdsadc_Edsadc_CommonModeVoltageConfig *commonMode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/**
 * \param config Pointer to DSADC Carrier Configuration
 * \return None
 */
IFX_EXTERN void IfxEdsadc_Edsadc_initCarrierGenConfig(IfxEdsadc_Edsadc_CarrierGenConfig *config);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE volatile Ifx_SRC_SRCR *IfxEdsadc_Edsadc_getAuxSrc(IfxEdsadc_Edsadc_Channel *channel)
{
    return IfxEdsadc_getAuxSrc(channel->module, channel->channelId);
}


IFX_INLINE sint16 IfxEdsadc_Edsadc_getMainResult(IfxEdsadc_Edsadc_Channel *channel)
{
    return IfxEdsadc_getMainResult(channel->module, channel->channelId);
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxEdsadc_Edsadc_getMainSrc(IfxEdsadc_Edsadc_Channel *channel)
{
    return IfxEdsadc_getMainSrc(channel->module, channel->channelId);
}


IFX_INLINE sint32 IfxEdsadc_Edsadc_getSubsequentResult(IfxEdsadc_Edsadc_Channel *channel)
{
    return IfxEdsadc_getSubsequentResult(channel->module, channel->channelId);
}


IFX_INLINE void IfxEdsadc_Edsadc_startScan(IfxEdsadc_Edsadc *edsadc, uint32 modulatorMask, uint32 channelMask)
{
    IfxEdsadc_startScan(edsadc->edsadc, modulatorMask, channelMask);
}


IFX_INLINE void IfxEdsadc_Edsadc_stopScan(IfxEdsadc_Edsadc *edsadc, uint32 modulatorMask)
{
    IfxEdsadc_stopScan(edsadc->edsadc, modulatorMask);
}


IFX_INLINE void IfxEdsadc_Edsadc_setGainCorrectionFactor(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, uint16 gainFactor, uint8 cicShift)
{
    IfxEdsadc_setGainCorrectionFactor(edsadc, channel, gainFactor, cicShift);
}


IFX_INLINE void IfxEdsadc_Edsadc_initTimeStampCounter(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, const IfxEdsadc_Edsadc_TimeStampCounter *timeStamp)
{
    IfxEdsadc_setTimeStampCounter(edsadc, channel, timeStamp->timeStampCounterClock, timeStamp->timeStampCounterRunControl, timeStamp->analogMuxCopy);
}


IFX_INLINE void IfxEdsadc_Edsadc_initCommonModeVoltage(Ifx_EDSADC *edsadc, IfxEdsadc_ChannelId channel, const IfxEdsadc_Edsadc_CommonModeVoltageConfig *commonMode)
{
    IfxEdsadc_setCommonModeVoltage(edsadc, channel, commonMode->fractionalRefVoltage, commonMode->refVoltageEnable, commonMode->halfSupplyVoltge, commonMode->commonModeHoldVoltage, commonMode->positiveInput, commonMode->negativeInput);
}


#endif /* IFXEDSADC_EDSADC_H */
