/**
 * \file IfxIom_Iom.h
 * \brief IOM IOM details
 * \ingroup IfxLld_Iom
 *
 * \version iLLD_1_0_1_7_0
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
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
 *
 * \defgroup IfxLld_Iom_obsoleteInterface  Obselete Interface for backward compatibility, (Not recommended for use)
 * \ingroup IfxLld_Iom
 *
 * \defgroup IfxLld_Iom_Iom_Usage How to use the IOM Iom Interface driver?
 * \ingroup IfxLld_Iom_obsoleteInterface
 *
 * IOM Module takes the monitor and reference signals from applicable system peripherals(GTM,CCU6,QSPI,PSI5,ASCLIN) and also from external hardware(Sensors) and compare them with respect to one another and generate the alarm events which are routed to SMU.
 *
 * In the following sections it will be described, how to integrate the driver into the application framework.
 *
 * \section IfxLld_Iom_Iom_Preparation Preparation
 * \subsection IfxLld_Iom_Iom_Include Include Files
 *
 * Include following header file into your C code:
 *
 * \code
 *
 * #include <Iom/Iom/IfxIom_Iom.h>
 *
 * \endcode
 *
 * \subsection IfxLld_Iom_Iom_Variables Variables
 *
 * Declare the IOM handle and the configuration buffers as global variables in your C code:
 * \code
 *
 * static IfxIom_Iom_EcmConfig ecmConfig;
 * static IfxIom_Iom_FpcConfig fpcConfig;
 * static IfxIom_Iom_LamConfig lamConfig;
 * static IfxIom_Iom iom;
 *
 * \endcode
 * \subsection IfxLld_Iom_Iom_Init Module Initialisation
 *
 * The module initialisation can be done in the same function. Here an example:
 * \code
 * //Initialize the module handle
 * IfxIom_Iom_initModuleConfig(&iom, &MODULE_IOM);
 *
 * //Enable the module control
 * IfxIom_Iom_initModule(&iom);
 *
 * //Initialize the default Filter & Prescaler Cell channel configuration buffer
 * IfxIom_Iom_initFpcChannelConfig(&fpcConfig);
 * //Filter & Prescaler Cell channel supplied configuration
 * fpcConfig.channelId           = IfxIom_FpcChannelId_2;
 * fpcConfig.filterMode          = IfxIom_FilterMode_delayedDebounce;
 * fpcConfig.comparatorThreshold = 15;
 * fpcConfig.monitorSignal       = IfxIom_MonitorSignal_portLogic;
 * fpcConfig.referenceSignal     = IfxIom_ReferenceSignal_0;
 * fpcConfig.timerReset          = TRUE;
 * //Initialize the Filter & Prescaler Cell channel with supplied configuration
 * IfxIom_Iom_initFpcChannel(&iom, &fpcConfig);
 *
 * //Initialize the default Logic Analyser Module configuration buffer
 * IfxIom_Iom_initAnalyserConfig(&lamConfig);
 * //Logic Analyser Module Block supplied configuration
 * lamConfig.monitorSignalInverted     = FALSE;
 * lamConfig.referenceSignalInverted   = FALSE;
 * lamConfig.lamMonitorSource    = IfxIom_LamMonitorSource_directFpcMonitor;
 * lamConfig.lamMode                   = IfxIom_LamRunMode_freeRunning;
 * lamConfig.eventSource         = IfxIom_EventSource_monitor;
 * lamConfig.eventActiveEdgeSelection = IfxIom_EventActiveEdgeSelection_negativeGateEitherClear;
 * lamConfig.eventWindowInverted       = TRUE;
 * lamConfig.lamMonitorInputChannel    = IfxIom_LamMonitorInputChannel_2;
 * lamConfig.lamReferenceInputChannel   = IfxIom_LamReferenceInputChannel_2;
 * lamConfig.lamId                     = IfxIom_LamId_2;
 * lamConfig.eventWindowThreshold = 15;
 * //Initialize the Logic Analyser Module with supplied configuration
 * IfxIom_Iom_initAnalyser(&iom, &lamConfig);
 *
 * //Initialize the default Event Combiner Module configuration buffer
 * IfxIom_Iom_initCombinerConfig(&ecmConfig);
 * //Initialize the Logic Analyser Module with supplied configuration
 * IfxIom_Iom_initCombiner(&iom, &ecmConfig);
 * \endcode
 *
 * The IOM is ready for use now!
 *
 * Once the Iom driver is initialized, GTM or CCU6 or QSPI or PSI5 or ASCLIN  should be configured to get the two signals with some delay by which event occur.
 *
 * The tested two signals are at below pins.
 *
 * To generate GTM signals see \ref IfxLld_Gtm_Tom_PwmHl_Usage
 *
 * Two GTM signals at below PWM out pins are used as monitor or reference to IOM
 *
 * Ifx_P* testPort0 = &MODULE_P33;
 * uint8 testPin0 = 2;
 * Ifx_P* testPort1 = &MODULE_P02;
 * uint8 testPin1 = 2;
 *
 * First pin is for Monitor and second pin is for reference. The above initialized IOM generates the event to SMU if pulse or duty cycle too short.
 *
 * \defgroup IfxLld_Iom_Iom_obsoleteInterface Obselete Interface for backward compatibility, (Not recommended for use)
 * \ingroup IfxLld_Iom
 * \defgroup IfxLld_Iom_Iom_obsoleteInterface_Structures Data Structures
 * \ingroup IfxLld_Iom_Iom_obsoleteInterface
 * \defgroup IfxLld_Iom_Iom_obsoleteInterface_Module Module Functions
 * \ingroup IfxLld_Iom_Iom_obsoleteInterface
 * \defgroup IfxLld_Iom_Iom_obsoleteInterface_Operative Operative Functions
 * \ingroup IfxLld_Iom_Iom_obsoleteInterface
 */

#ifndef IFXIOM_IOM_H
#define IFXIOM_IOM_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Iom/Std/IfxIom.h"

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \brief Event Combiner Module Global Event Selection Bit Field
 */
typedef struct
{
    uint32 eventCombinerSelection0 : 1;            /**< \brief Determines the inclusion of the channel0 event in the generation of the global event */
    uint32 eventCombinerSelection1 : 1;            /**< \brief Determines the inclusion of the channel1 event in the generation of the global event */
    uint32 eventCombinerSelection2 : 1;            /**< \brief Determines the inclusion of the channel2 event in the generation of the global event */
    uint32 eventCombinerSelection3 : 1;            /**< \brief Determines the inclusion of the channel3 event in the generation of the global event */
    uint32 eventCombinerSelection4 : 1;            /**< \brief Determines the inclusion of the channel4 event in the generation of the global event */
    uint32 eventCombinerSelection5 : 1;            /**< \brief Determines the inclusion of the channel5 event in the generation of the global event */
    uint32 eventCombinerSelection6 : 1;            /**< \brief Determines the inclusion of the channel6 event in the generation of the global event */
    uint32 eventCombinerSelection7 : 1;            /**< \brief Determines the inclusion of the channel7 event in the generation of the global event */
    uint32 eventCombinerSelection8 : 1;            /**< \brief Determines the inclusion of the channel8 event in the generation of the global event */
    uint32 eventCombinerSelection9 : 1;            /**< \brief Determines the inclusion of the channel9 event in the generation of the global event */
    uint32 eventCombinerSelection10 : 1;           /**< \brief Determines the inclusion of the channel10 event in the generation of the global event */
    uint32 eventCombinerSelection11 : 1;           /**< \brief Determines the inclusion of the channel11 event in the generation of the global event */
    uint32 eventCombinerSelection12 : 1;           /**< \brief Determines the inclusion of the channel12 event in the generation of the global event */
    uint32 eventCombinerSelection13 : 1;           /**< \brief Determines the inclusion of the channel13 event in the generation of the global event */
    uint32 eventCombinerSelection14 : 1;           /**< \brief Determines the inclusion of the channel14 event in the generation of the global event */
    uint32 eventCombinerSelection15 : 1;           /**< \brief Determines the inclusion of the channel15 event in the generation of the global event */
    uint32 countedEventCombinerSelection0 : 1;     /**< \brief Determines the inclusion of the respective channel event counter output (1 of 4) in the generation of the global event (AND function). */
    uint32 countedEventCombinerSelection1 : 1;     /**< \brief Determines the inclusion of the respective channel event counter output (1 of 4) in the generation of the global event (AND function). */
    uint32 countedEventCombinerSelection2 : 1;     /**< \brief Determines the inclusion of the respective channel event counter output (1 of 4) in the generation of the global event (AND function). */
    uint32 countedEventCombinerSelection3 : 1;     /**< \brief Determines the inclusion of the respective channel event counter output (1 of 4) in the generation of the global event (AND function). */
    uint32 reserved : 12;                          /**< \brief reserved */
} IfxIom_Iom_EcmGlobalEventSelectionBits;

typedef struct
{
    IfxIom_EventCounterChannel   input;           /**< \brief Specifies which channel output event to be routed to the Counter */
    IfxIom_EventCounterThreshold threshold;       /**< \brief Specifies the Counter threshold value */
} IfxIom_Iom_EcmConfigCounter;

/** \brief Event Combiner Module Global Event Selection
 */
typedef union
{
    IfxIom_Iom_EcmGlobalEventSelectionBits B;
    uint32                                 U;
} IfxIom_Iom_EcmGlobalEventSelection;

/** \brief Specifies handle to IOM module.
 */
typedef struct
{
    Ifx_IOM *iom;       /**< \brief Specifies the pointer to IOM registers. */
} IfxIom_Iom;

/** \brief Specifies the ECM block configuration structure
 */
typedef struct
{
    IfxIom_Iom_EcmConfigCounter        eventCounter[4];
    IfxIom_Iom_EcmGlobalEventSelection globalEventSelection;       /**< \brief Specifies which channel event & which counted event to be included in global event generation. bit [15:0] specifies the channel event selection and bit [19:16] specifies accumulated event */
} IfxIom_Iom_EcmConfig;

/** \brief Specifies Filter and Prescaler Cell configuration.
 */
typedef struct
{
    uint16                 comparatorThreshold;       /**< \brief Specifies the threshold value that is compared with timer */
    boolean                timerReset;                /**< \brief Specifies the timer reset bit */
    IfxIom_MonitorSignal   monitorSignal;             /**< \brief Specifies the monitor signal input for Filter & Prescaler cell */
    IfxIom_ReferenceSignal referenceSignal;           /**< \brief Specifies the reference signal input for Filter & Prescaler cell */
    IfxIom_FilterMode      filterMode;                /**< \brief Specifies the Filter & Prescaler Cell mode */
    IfxIom_FpcChannelId    channelId;                 /**< \brief Specifies the number of Filter & Prescaler Cell channel */
    IfxIom_EdgeClearType   edgeType;                  /**< \brief Specifies the edge type which need to be cleared. */
    boolean                exorInputEnable[8];        /**< \brief Specifies the EXOR GTM input signal enable array (8 GTM inputs can be selected by enabling them). */
} IfxIom_Iom_FpcConfig;

/** \brief Specifies Logic Analyser Module configuration.
 */
typedef struct
{
    IfxIom_LamId                    lamId;                          /**< \brief Specifies Id of Logic Analyser Module */
    uint32                          eventWindowThreshold;           /**< \brief This bit field determines the threshold value for the event window
                                                                     * counter from which an event is generated. */
    boolean                         monitorSignalInverted;          /**< \brief Specifies whether the monitor signal from the FPC channel to LAM is inverted or not. */
    boolean                         referenceSignalInverted;        /**< \brief Specifies whether the reference signal from the FPC channel to LAM is inverted or not. */
    IfxIom_EventSource              eventSource;                    /**< \brief Specifies whether the event window generation is from the monitor or reference signal. */
    IfxIom_LamMonitorInputChannel   lamMonitorInputChannel;         /**< \brief Specifies which FPC/mux block monitor output signal is to be used for LAM block */
    IfxIom_LamReferenceInputChannel lamReferenceInputChannel;       /**< \brief Specifies which FPC/mux block reference output signal is to be used for LAM block */
    IfxIom_LamMonitorSource         lamMonitorSource;               /**< \brief Specifies whether the monitor signal from the FPC monitor channel is sourced directly or compared with the reference signal from the FPC reference channel for the event compare. */
    IfxIom_LamRunMode               lamMode;                        /**< \brief Specifies whether the event window generation is free-running or gated with the monitor or reference. */
    boolean                         eventWindowInverted;            /**< \brief Specifies whether the event window polarity is inverted or not. */
    IfxIom_EventActiveEdgeSelection eventActiveEdgeSelection;       /**< \brief Specifies which active edges of the monitor and reference signals are used for the event window generation. */
} IfxIom_Iom_LamConfig;

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief clear the falling and rising edges which are detected.
 * \param fpcConfig Specifies Filter and Prescaler Cell configuration.
 * \param iom Specifies handle to IOM module.
 * \return None
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN void IfxIom_Iom_clearFpcEdges(IfxIom_Iom_FpcConfig *fpcConfig, IfxIom_Iom *iom);

/** \brief Reset the IOM module
 * \param iom Specifies handle to IOM module.
 * \return None
 */
IFX_EXTERN void IfxIom_Iom_deInitModule(IfxIom_Iom *iom);

/** \brief Initializes the Logic Analyser Module for internal event generation
 * \param iom Specifies handle to IOM module.
 * \param lamConfig Specifies Logic Analyser Module configuration.
 * \return Return TRUE if valid initialization otherwise FALSE
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN boolean IfxIom_Iom_initAnalyser(IfxIom_Iom *iom, const IfxIom_Iom_LamConfig *lamConfig);

/** \brief Initializes the default Logic Analyser Module buffer
 * \param lamConfig Specifies Logic Analyser Module configuration.
 * \return None
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN void IfxIom_Iom_initAnalyserConfig(IfxIom_Iom_LamConfig *lamConfig);

/** \brief Initializes the Event Combiner Module for Global event
 * \param iom Specifies handle to IOM module.
 * \param ecmConfig Specifies the ECM block configuration structure
 * \return Return TRUE if valid initialization otherwise FALSE
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN boolean IfxIom_Iom_initCombiner(IfxIom_Iom *iom, const IfxIom_Iom_EcmConfig *ecmConfig);

/** \brief Initializes the default Event Combiner Module buffer
 * \param ecmConfig Specifies the ECM block configuration structure
 * \return None
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN void IfxIom_Iom_initCombinerConfig(IfxIom_Iom_EcmConfig *ecmConfig);

/** \brief Initializes the Filter & Prescaler Cell for filtering the signals.
 * \param iom Specifies handle to IOM module.
 * \param fpcConfig Specifies Filter and Prescaler Cell configuration.
 * \return Return TRUE if valid initialization otherwise FALSE
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN boolean IfxIom_Iom_initFpcChannel(IfxIom_Iom *iom, const IfxIom_Iom_FpcConfig *fpcConfig);

/** \brief Initializes the default Filter & Prescaler Cell buffer
 * \param fpcConfig Specifies Filter and Prescaler Cell configuration.
 * \return None
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN void IfxIom_Iom_initFpcChannelConfig(IfxIom_Iom_FpcConfig *fpcConfig);

/** \brief Initialize the IOM module with supplied configuration.
 * \param iom Specifies handle to IOM module.
 * \return Return TRUE if valid module initialization otherwise FALSE.
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN boolean IfxIom_Iom_initModule(IfxIom_Iom *iom);

/** \brief Initializes the Module default configuration buffer.
 * \param iom Specifies the IOM configuration structure
 * \param module Specifies handle to IOM module.
 * \return None
 *
 * Usage example: see \ref IfxLld_Iom_Iom_Usage
 *
 */
IFX_EXTERN void IfxIom_Iom_initModuleConfig(IfxIom_Iom *iom, Ifx_IOM *module);

#endif /* IFXIOM_IOM_H */
