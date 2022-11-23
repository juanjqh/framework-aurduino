/**
 * \file IfxCcu6_Icu.h
 * \brief CCU6 ICU details
 * \ingroup IfxLld_Ccu6
 *
 * \version iLLD_1_0_0_11_0
 * \copyright Copyright (c) 2013 Infineon Technologies AG. All rights reserved.
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
 * \defgroup IfxLld_Ccu6_Icu_Usage How to use the CCU6 ICU Interface driver?
 * \ingroup IfxLld_Ccu6_Icu
 *
 * The ICU interface driver provides a default CCU6 configuration for capturing the input from the selected channel
 *
 * User can select the various configuration options that hardware allows
 *
 * In the following sections it will be described, how to integrate the driver into the application framework.
 *
 *
 * \section IfxLld_Ccu6_Icu_Preparation Preparation
 *
 *
 * \subsection IfxLld_Ccu6_Icu_Include Include Files
 *
 * Include following header file into your C code:
 *
 * \code
 *     #include <Ccu6/Icu/IfxCcu6_Icu.h>
 * \endcode
 *
 * \subsection IfxLld_Ccu6_Icu_Variables Variables
 *
 * Declare the ICU handle and channel handle as global variables in your C code:
 *
 * \code
 *     // used globally
 *     static IfxCcu6_Icu icu;
 *     static IfxCcu6_IcuChannel icuChannel;
 * \endcode
 *
 * \subsection IfxLld_Ccu6_Icu_Interrupt Interrupt Handler Installation
 *
 * See also \ref IfxLld_Cpu_Irq_Usage
 *
 * Define priority for the Interrrupt handler. This is normally done in the Ifx_IntPrioDef.h file:
 *
 * \code
 *     // priorities are normally defined in Ifx_IntPrioDef.h
 *     #define IFX_INTPRIO_CCU6 1
 * \endcode
 *
 * Add the interrupt service routine to your C code.
 *
 * \code
 *     IFX_INTERRUPT(ccu60ISR_Icu, 0, IFX_INTPRIO_CCU6)
 *     {
 *         //user code
 *     }
 * \endcode
 *
 * Finally install the interrupt handlers in your initialisation function:
 *
 * \code
 *     // install interrupt handlers
 *     IfxCpu_Irq_installInterruptHandler(&ccu60ISR_Icu, IFX_INTPRIO_CCU6);
 *     IfxCpu_enableInterrupts();
 * \endcode
 *
 * \subsection IfxLld_Ccu6_Icu_Init Module Initialisation
 *
 * The module can be initialised in two ways, as a stand alone driver or in conjunction with Timer driver
 * The module initialisation can be done in the same function. Here an example:
 *
 * \code
 *     // ---- when not using inconjunction with Timer driver ---- //
 *     // create configuration
 *     IfxCcu6_Icu_Config icuConfig;
 *     IfxCcu6_Icu_initModuleConfig(&icuConfig, &MODULE_CCU60);
 *
 *     // configure the frequency of the timer in case of internal start
 *     icuConfig.frequency = 400000;
 *
 *     // configure the period of the timer
 *     icuConfig.period = 100;
 *
 *     // configure the clock for internal mode
 *     icuConfig.clock.extClockEnabled   = FALSE;
 *     icuConfig.clock.extClockInput     = NULL_PTR;
 *     icuConfig.clock.countingInputMode = IfxCcu6_CountingInputMode_internal;
 *
 *     // configure count operation
 *     icuConfig.countMode     = IfxCcu6_T12CountMode_edgeAligned;
 *     icuConfig.counterValue     = 0;
 *
 *     // initialize the module
 *     IfxCcu6_Icu_initModule(&icu, &icuConfig);
 *     // -------------------------------------------------------- //
 *
 *     // ---- when not using inconjunction with Timer driver ---- //
 *     // after initialising the timer
 *     IfxCcu6_Timer timer;
 *     IfxCcu6_TimerChannelConfig TimerChannelConfig;
 *     IfxCcu6_Timer_initModule(&timer, &TimerChannelConfig); // e.g. Timer 12 is specified previously in TimerChannelConfig.
 *     // -------------------------------------------------------- //
 *
 *     // create Icu channel config
 *     IfxCcu6_Icu_channelConfig icuChannelConfig;
 *     IfxCcu6_Icu_initChannelConfig(&icuChannelConfig, &MODULE_CCU60);
 *
 *     // ---- when using inconjunction with Timer driver ---- //
 *     icuChannelConfig.timer = (Timer*)&timer;
 *     // ---------------------------------------------------- //
 *
 *     // configure the channel
 *     icuChannelConfig.channelNumber     = IfxCcu6_T12Channel_0;
 *     icuChannelConfig.channelMode     = IfxCcu6_T12ChannelMode_doubleRegisterCaptureRising;
 *
 *     // configure the interrupts
 *     icuChannelConfig.interrupt.interruptSource = IfxCcu6_InterruptSource_cc60RisingEdge;
 *     icuChannelConfig.interrupt.serviceRequest  = IfxCcu6_ServiceRequest_2;
 *     icuChannelConfig.interrupt.priority        = IFX_INTRPRIO_CCU6;
 *     icuChannelConfig.interrupt.typeOfService   = IfxSrc_Tos_cpu0;
 *
 *     // ---- when not using inconjunction with Timer driver ---- //
 *     // configure input and output triggers
 *     icuChannelConfig.trigger.extInputTrigger   = IfxCcu60_T12HRB_P00_7_IN;
 *     icuChannelConfig.trigger.extInputTriggerMode  = IfxCcu6_ExternalTriggerMode_risingEdge;
 *     // -------------------------------------------------------- //
 *
 *     // pin configuration, in case of multi input capture mode select the respective CC6xIn and CCPOSxIn pins of the selected channel
 *     const IfxCcu6_Icu_Pins pins = {
 *         IfxCcu60_CC60INA_P02_0_IN,	// CC60In pin
 *         NULL,	// CC61In pin not used
 *         NULL,	// CC62In pin not used
 *         NULL,	// CCPOS0In pin not used
 *         NULL,	// CCPOS1In pin not used
 *         NULL,	// CCPOS2In pin not used
 *         IfxPort_InputMode_pullUp,
 *         IfxPort_InputMode_pullUp
 *     };
 *     IcuConfig.pins = &pins;
 *
 *     // configure multi input capture mode
 *     icuChannelConfig->multiInputCaptureEnabled    = FALSE;
 *
 *     // initialize the channel
 *     IfxCcu6_Icu_initChannel(&icuChannel, &icuChannelConfig);
 * \endcode
 *
 *
 * The Icu is ready for use now!
 *
 *
 * \section IfxLld_Ccu6_Icu_Control Control
 *
 *
 * The ICU driver provides simple to use Capture Control functions
 *
 * This means: you can start and stop the capture process, and you can also get a time stamp at any point of time during the capture process
 *
 * Start Capture
 *
 * \code
 *     IfxCcu6_Icu_startCapture(&icuChannel);
 * \endcode
 *
 * Stop Capture
 *
 * \code
 *     IfxCcu6_Icu_stopCapture(&icuChannel);
 * \endcode
 *
 * Get time stamp at any point of time during the capture process
 * (can also be used in ISR)
 *
 * \code
 *     // assumed to be declared globally
 *     // uint32 timeStamp[100] = 0;
 *
 *     // store the time stamp in an array
 *     timeStamp[i] = IfxCcu6_Icu_getTimeStamp(&icuChannel);
 * \endcode
 *
 * \defgroup IfxLld_Ccu6_Icu ICU Interface driver
 * \ingroup IfxLld_Ccu6
 * \defgroup IfxLld_Ccu6_Icu_DataStructures Data Structures
 * \ingroup IfxLld_Ccu6_Icu
 * \defgroup IfxLld_Ccu6_Icu_Module_Initialize_Functions Module Initialize Functions
 * \ingroup IfxLld_Ccu6_Icu
 * \defgroup IfxLld_Ccu6_Icu_Capture_Control_Functions Capture Control Functions
 * \ingroup IfxLld_Ccu6_Icu
 * \defgroup IfxLld_Ccu6_Icu_Channel_Initialize_Functions Channel Initialize Functions
 * \ingroup IfxLld_Ccu6_Icu
 */

#ifndef IFXCCU6_ICU_H
#define IFXCCU6_ICU_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Ccu6/Std/IfxCcu6.h"
#include "If/Ccu6If/Icu.h"
#include "Ccu6/Timer/IfxCcu6_Timer.h"

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Ccu6_Icu_DataStructures
 * \{ */
/** \brief Structure for clock configuration
 */
typedef struct
{
    boolean                   extClockEnabled;       /**< \brief external clock enable / disable selection */
    IfxCcu6_T12hr_In         *extClockInput;         /**< \brief External input signal selection for timer 12 */
    IfxCcu6_CountingInputMode countingInputMode;     /**< \brief Input event leading to a counting action of the timer T12 */
} IfxCcu6_Icu_Clock;

/** \brief Structure for interrupt configuration
 */
typedef struct
{
    IfxCcu6_InterruptSource source;             /**< \brief Interrupt source selection */
    IfxCcu6_ServiceRequest  serviceRequest;     /**< \brief Selection of service request outputs */
    uint16                  priority;           /**< \brief Interrupt priority */
    IfxSrc_Tos              typeOfService;      /**< \brief type of interrupt service */
} IfxCcu6_Icu_InterruptConfig;

/** \brief Structure for capture input pins
 */
typedef struct
{
    const IfxCcu6_Cc60in_In *cc60In;              /**< \brief CC60 input signal */
    const IfxCcu6_Cc61in_In *cc61In;              /**< \brief CC61 input signal */
    const IfxCcu6_Cc62in_In *cc62In;              /**< \brief CC62 input signal */
    const IfxCcu6_Ccpos0_In *ccpos0;              /**< \brief CCPOS0 input signal */
    const IfxCcu6_Ccpos1_In *ccpos1;              /**< \brief CCPOS2 input signal */
    const IfxCcu6_Ccpos2_In *ccpos2;              /**< \brief CCPOS2 input signal */
    IfxPort_InputMode        cc6xInputMode;       /**< \brief The CC6x pin input mode which should be configured */
    IfxPort_InputMode        ccposxInputMode;     /**< \brief The CCPOSx pin input mode which should be configured */
    const IfxCcu6_T12hr_In  *t12hr;               /**< \brief T12HR input signal */
    const IfxCcu6_T13hr_In  *t13hr;               /**< \brief T13HR input signal */
    IfxPort_InputMode        t1xhrInputMode;      /**< \brief The T1xHR pin input mode which should be configured */
} IfxCcu6_Icu_Pins;

/** \brief Configuration structure for external triggers
 */
typedef struct
{
    IfxCcu6_T12hr_In           *extInputTrigger;         /**< \brief External input signal selection for timer */
    IfxCcu6_ExternalTriggerMode extInputTriggerMode;     /**< \brief Event of signal T12HR that can set the run bit T12R by HW */
} IfxCcu6_Icu_TriggerConfig;

/** \} */

/** \addtogroup IfxLld_Ccu6_Icu_DataStructures
 * \{ */
/** \brief Module handle
 */
typedef struct
{
    Ifx_CCU6 *ccu6;     /**< \brief Pointer to the base of CCU6 registers */
} IfxCcu6_Icu;

/** \brief Channel handle
 */
typedef struct
{
    Icu                       base;            /**< \brief Base ICU object */
    Ifx_CCU6                 *ccu6;            /**< \brief Pointer to the base of CCU6 registers */
    IfxCcu6_Icu_TriggerConfig trigger;         /**< \brief Structure for trigger configuration */
    IfxCcu6_T12Channel        channelId;       /**< \brief Capture compare channel of the Timer12 */
    IfxCcu6_T12ChannelMode    channelMode;     /**< \brief The operating mode for the T12 channel */
} IfxCcu6_Icu_Channel;

/** \brief Configuration structure of the channel
 */
typedef struct
{
    Icu_Config                  base;                         /**< \brief Base configuration */
    Ifx_CCU6                   *ccu6;                         /**< \brief Pointer to the base of CCU6 registers */
    IfxCcu6_T12Channel          channelId;                    /**< \brief Capture compare channel of the Timer12 */
    IfxCcu6_T12ChannelMode      channelMode;                  /**< \brief The operating mode for the T12 channel */
    IfxCcu6_Icu_InterruptConfig interrupt1;                   /**< \brief Structure for first interrupt configuration */
    IfxCcu6_Icu_InterruptConfig interrupt2;                   /**< \brief Structure for second interrupt configuration */
    IfxCcu6_Icu_InterruptConfig interrupt3;                   /**< \brief Structure for third interrupt configuration */
    IfxCcu6_Icu_InterruptConfig interrupt4;                   /**< \brief Structure for fourth interrupt configuration */
    IfxCcu6_Icu_TriggerConfig   trigger;                      /**< \brief Structure for trigger configuration */
    IfxCcu6_Icu_Pins           *pins;                         /**< \brief Structure for capture input pins */
    boolean                     multiInputCaptureEnabled;     /**< \brief Choice of multi input capture */
    IfxCcu6_Timer               timer;                        /**< \brief Timer handle */
} IfxCcu6_Icu_ChannelConfig;

/** \brief Configuration structure of the module
 */
typedef struct
{
    Ifx_CCU6            *ccu6;             /**< \brief Pointer to the base of CCU6 registers */
    float32              frequency;        /**< \brief Specify expected PWM frequency in Hertz */
    Ifx_TimerValue       period;           /**< \brief PWM period in ticks */
    IfxCcu6_Icu_Clock    clock;            /**< \brief Structure for clock configuration */
    IfxCcu6_T12CountMode countMode;        /**< \brief Operating mode of Timer 12 */
    uint16               counterValue;     /**< \brief 16-bit counter value of Timer12 */
} IfxCcu6_Icu_Config;

/** \} */

/** \addtogroup IfxLld_Ccu6_Icu_Module_Initialize_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initialises the module with default configuration
 * \param icu Module handle
 * \param config Configuration structure of the module
 * \return None
 *
 * A coding example can be found in \ref IfxLld_Ccu6_Icu_Usage
 *
 */
IFX_EXTERN void IfxCcu6_Icu_initModule(IfxCcu6_Icu *icu, const IfxCcu6_Icu_Config *config);

/** \brief Fills the config structure with default values
 * \param config Configuration structure of the module
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 *
 * A coding example can be found in \ref IfxLld_Ccu6_Icu_Usage
 *
 */
IFX_EXTERN void IfxCcu6_Icu_initModuleConfig(IfxCcu6_Icu_Config *config, Ifx_CCU6 *ccu6);

/** \} */

/** \addtogroup IfxLld_Ccu6_Icu_Capture_Control_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the cuurent value stored in the Compare Shadow register (current time stamp)
 * \param channel Channel handle
 * \return timeStamp (cuurent CC6xSR register value)
 *
 * A coding example can be found in \ref IfxLld_Ccu6_Icu_Usage
 *
 */
IFX_EXTERN uint32 IfxCcu6_Icu_getTimeStamp(IfxCcu6_Icu_Channel *channel);

/** \brief Starts the input capture
 * \param channel Channel handle
 * \return None
 *
 * A coding example can be found in \ref IfxLld_Ccu6_Icu_Usage
 *
 */
IFX_EXTERN void IfxCcu6_Icu_startCapture(IfxCcu6_Icu_Channel *channel);

/** \brief Stops the input capture
 * \param channel Channel handle
 * \return None
 *
 * A coding example can be found in \ref IfxLld_Ccu6_Icu_Usage
 *
 */
IFX_EXTERN void IfxCcu6_Icu_stopCapture(IfxCcu6_Icu_Channel *channel);

/** \} */

/** \addtogroup IfxLld_Ccu6_Icu_Channel_Initialize_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initialises the channel
 * \param channel Channel handle
 * \param channelConfig Configuration structure of the channel
 * \return None
 *
 * A coding example can be found in \ref IfxLld_Ccu6_Icu_Usage
 *
 */
IFX_EXTERN void IfxCcu6_Icu_initChannel(IfxCcu6_Icu_Channel *channel, const IfxCcu6_Icu_ChannelConfig *channelConfig);

/** \brief Fills the channel config structure with default values
 * \param channelConfig Configuration structure of the channel
 * \param ccu6 Pointer to the base of CCU6 registers
 * \return None
 *
 * A coding example can be found in \ref IfxLld_Ccu6_Icu_Usage
 *
 */
IFX_EXTERN void IfxCcu6_Icu_initChannelConfig(IfxCcu6_Icu_ChannelConfig *channelConfig, Ifx_CCU6 *ccu6);

/** \} */

#endif /* IFXCCU6_ICU_H */