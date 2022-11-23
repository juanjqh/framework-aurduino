/**
 * \file IfxGpt12.h
 * \brief GPT12  basic functionality
 * \ingroup IfxLld_Gpt12
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
 * \defgroup IfxLld_Gpt12_Std_Enumerations Enumerations
 * \ingroup IfxLld_Gpt12_Std
 * \defgroup IfxLld_Gpt12_Std_InterruptFunctions Interrupt Functions
 * \ingroup IfxLld_Gpt12_Std
 * \defgroup IfxLld_Gpt12_Std_ConfigurationFunctions Configuration Functions
 * \ingroup IfxLld_Gpt12_Std
 * \defgroup IfxLld_Gpt12_Std_UtilityFunctions Utility Functions
 * \ingroup IfxLld_Gpt12_Std
 * \defgroup IfxLld_Gpt12_Std_OperativeFunctions Operative Functions
 * \ingroup IfxLld_Gpt12_Std
 */

#ifndef IFXGPT12_H
#define IFXGPT12_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxGpt12_cfg.h"
#include "Src/Std/IfxSrc.h"
#include "_Utilities/Ifx_Assert.h"
#include "Scu/Std/IfxScuCcu.h"
#include "IfxGpt12_reg.h"
#include "_PinMap/IfxGpt12_PinMap.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gpt12_Std_Enumerations
 * \{ */
/** \brief Input Select for CAPIN \n
 * Definition in IfxGPT12.PISEL.B.ISCAPIN
 */
typedef enum
{
    IfxGpt12_CaptureInput_A = 0,  /**< \brief signal CAPINA selected */
    IfxGpt12_CaptureInput_B = 1,  /**< \brief signal CAPINB selected */
    IfxGpt12_CaptureInput_C = 2,  /**< \brief signal CAPINC selected */
    IfxGpt12_CaptureInput_D = 3   /**< \brief signal CAPIND selected */
} IfxGpt12_CaptureInput;

/** \brief Tx Input Edge Selection (Capture Mode, x=2,4)
 */
typedef enum
{
    IfxGpt12_CaptureInputMode_none            = 0,  /**< \brief None, Counter is disabled */
    IfxGpt12_CaptureInputMode_risingEdgeTxIN  = 1,  /**< \brief rising edge on TxIN */
    IfxGpt12_CaptureInputMode_fallingEdgeTxIN = 2,  /**< \brief falling edge on TxIN */
    IfxGpt12_CaptureInputMode_bothEdgesTxIN   = 3   /**< \brief (rising or falling edge) on TxIN */
} IfxGpt12_CaptureInputMode;

/** \brief Capture Trigger Enable \n
 * Definition in IfxGPT12.T5CON.B.CT3
 */
typedef enum
{
    IfxGpt12_CaptureTrigger_capin       = 0, /**< \brief Capture Trigger Enable from CAPIN */
    IfxGpt12_CaptureTrigger_t3inOrT3EUD = 1  /**< \brief Capture Trigger Enable from T3IN/T3EUD */
} IfxGpt12_CaptureTrigger;

/** \brief Capture Trigger Selection \n
 * Definition in IfxGPT12.T5CON.B.CI
 */
typedef enum
{
    IfxGpt12_CaptureTriggerMode_disabled    = 0,  /**< \brief capture disabled */
    IfxGpt12_CaptureTriggerMode_risingEdge  = 1,  /**< \brief positive Transition on CAPIN or any Transition on T3IN */
    IfxGpt12_CaptureTriggerMode_fallingEdge = 2,  /**< \brief negative Transition on CAPIN or any Transition on T3EUD */
    IfxGpt12_CaptureTriggerMode_randomEdge  = 3   /**< \brief Any Transition on CAPIN or any Transition on T3IN/T3EUD */
} IfxGpt12_CaptureTriggerMode;

/** \brief Input Edge Selection for counter mode\n
 * Definition in IfxGPT12.TxCON.B.TxI (x = 2 to 6)
 */
typedef enum
{
    IfxGpt12_CounterInputMode_counterDisabled  = 0,  /**< \brief Counter Tx is disabled */
    IfxGpt12_CounterInputMode_risingEdgeTxIN   = 1,  /**< \brief rising edge on TxIN */
    IfxGpt12_CounterInputMode_fallingEdgeTxIN  = 2,  /**< \brief falling edge on TxIN */
    IfxGpt12_CounterInputMode_bothEdgesTxIN    = 3,  /**< \brief rising or falling edge on TxIN */
    IfxGpt12_CounterInputMode_risingEdgeTxOTL  = 5,  /**< \brief rising edge of  TxOTL (x=3,6) */
    IfxGpt12_CounterInputMode_fallingEdgeTxOTL = 6,  /**< \brief falling edge of TxOTL */
    IfxGpt12_CounterInputMode_bothEdgesTxOTL   = 7   /**< \brief rising or falling edge of TxOTL */
} IfxGpt12_CounterInputMode;

/** \brief Input Select for TxEUD \n
 * Definition in IfxGPT12.PISEL.B.ISTxEUD (x = 2 to 4)
 */
typedef enum
{
    IfxGpt12_EudInput_A = 0,  /**< \brief signal TXEUDA selected */
    IfxGpt12_EudInput_B = 1,  /**< \brief signal TXEUDB selected */
    IfxGpt12_EudInput_C = 2,  /**< \brief signal TXEUDC selected */
    IfxGpt12_EudInput_D = 3   /**< \brief signal TXEUDD selected */
} IfxGpt12_EudInput;

/** \brief GPT1 block prescaler Selection\n
 * Definition in IfxGPT12.T3CON.B.BPS1
 */
typedef enum
{
    IfxGpt12_Gpt1BlockPrescaler_8  = 0,  /**< \brief fGPT/8 */
    IfxGpt12_Gpt1BlockPrescaler_4  = 1,  /**< \brief fGPT/4 */
    IfxGpt12_Gpt1BlockPrescaler_32 = 2,  /**< \brief fGPT/32 */
    IfxGpt12_Gpt1BlockPrescaler_16 = 3   /**< \brief fGPT/16 */
} IfxGpt12_Gpt1BlockPrescaler;

/** \brief Gpt2 block prescaler Selection\n
 * Definition in IfxGPT12.T6CON.B.BPS2
 */
typedef enum
{
    IfxGpt12_Gpt2BlockPrescaler_4  = 0,  /**< \brief fGPT/4 */
    IfxGpt12_Gpt2BlockPrescaler_2  = 1,  /**< \brief fGPT/2 */
    IfxGpt12_Gpt2BlockPrescaler_16 = 2,  /**< \brief fGPT/16 */
    IfxGpt12_Gpt2BlockPrescaler_8  = 3   /**< \brief fGPT/8 */
} IfxGpt12_Gpt2BlockPrescaler;

/** \brief Input Edge Selection for Incremental Interface mode\n
 * Definition in IfxGPT12.TxCON.B.TxI (x=2, 3 and 4)
 */
typedef enum
{
    IfxGpt12_IncrementalInterfaceInputMode_stopCounterTx        = 0, /**< \brief Counter Tx Stop */
    IfxGpt12_IncrementalInterfaceInputMode_bothEdgesTxIN        = 1, /**< \brief (rising or falling edge) on TxIN */
    IfxGpt12_IncrementalInterfaceInputMode_bothEdgesTxEUD       = 2, /**< \brief (rising or falling edge) on TxEUD */
    IfxGpt12_IncrementalInterfaceInputMode_bothEdgesTxINOrTxEUD = 3  /**< \brief (rising or falling edge) on any Tx input (TxIN or TxEUD) */
} IfxGpt12_IncrementalInterfaceInputMode;

/** \brief Input Select for TxIN \n
 * Definition in IfxGPT12.PISEL.B.ISTxIN (x = 2 to 4)
 */
typedef enum
{
    IfxGpt12_Input_A = 0,  /**< \brief signal TXINA selected */
    IfxGpt12_Input_B = 1,  /**< \brief signal TXINB selected */
    IfxGpt12_Input_C = 2,  /**< \brief signal TXINC selected */
    IfxGpt12_Input_D = 3   /**< \brief signal TXIND selected */
} IfxGpt12_Input;

/** \brief Timer operating mode \n
 * Definition in IfxGPT12.TxCON.B.TxM (x = 2 to 4)
 */
typedef enum
{
    IfxGpt12_Mode_timer                                 = 0,  /**< \brief Timer Mode selected */
    IfxGpt12_Mode_counter                               = 1,  /**< \brief Counter Mode selected */
    IfxGpt12_Mode_lowGatedTimer                         = 2,  /**< \brief Low Gated Timer Mode selected */
    IfxGpt12_Mode_highGatedTimer                        = 3,  /**< \brief High Gated Timer Mode selected */
    IfxGpt12_Mode_reload                                = 4,  /**< \brief Reload Mode selected */
    IfxGpt12_Mode_capture                               = 5,  /**< \brief Capture Mode selected */
    IfxGpt12_Mode_incrementalInterfaceRotationDetection = 6,  /**< \brief Incremental Interface Mode selected */
    IfxGpt12_Mode_incrementalInterfaceEdgeDetection     = 7   /**< \brief Incremental Interface Mode selected */
} IfxGpt12_Mode;

/** \brief Input Edge Selection for reload mode\n
 * Definition in IfxGPT12.TxCON.B.TxI (x = 2 and 4)
 */
typedef enum
{
    IfxGpt12_ReloadInputMode_counterDisabled  = 0,  /**< \brief Counter Tx is disabled */
    IfxGpt12_ReloadInputMode_risingEdgeTxIN   = 1,  /**< \brief rising edge on TxIN */
    IfxGpt12_ReloadInputMode_fallingEdgeTxIN  = 2,  /**< \brief falling edge on TxIN */
    IfxGpt12_ReloadInputMode_bothEdgesTxIN    = 3,  /**< \brief rising or falling edge on TxIN */
    IfxGpt12_ReloadInputMode_risingEdgeTxOTL  = 5,  /**< \brief rising edge of Tx toggle latch TxOTL */
    IfxGpt12_ReloadInputMode_fallingEdgeTxOTL = 6,  /**< \brief falling edge of Tx toggle latch TxOTL */
    IfxGpt12_ReloadInputMode_bothEdgesTxOTL   = 7   /**< \brief rising or falling edge of Tx toggle latch TxOTL */
} IfxGpt12_ReloadInputMode;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in Ifx_GPT12.CLC.B.EDIS
 */
typedef enum
{
    IfxGpt12_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxGpt12_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxGpt12_SleepMode;

/** \brief OCDS Suspend Control (OCDS.SUS)
 */
typedef enum
{
    IfxGpt12_SuspendMode_none = 0,  /**< \brief No suspend */
    IfxGpt12_SuspendMode_hard = 1,  /**< \brief Hard Suspend */
    IfxGpt12_SuspendMode_soft = 2   /**< \brief Soft Suspend */
} IfxGpt12_SuspendMode;

/** \brief Timer Count Direction\n
 * Definition in IfxGPT12.TxCON.B.TxUD (x=2 to 6)
 */
typedef enum
{
    IfxGpt12_TimerDirection_up   = 0, /**< \brief Timer Up Direction selected */
    IfxGpt12_TimerDirection_down = 1  /**< \brief Timer Down Direction selected */
} IfxGpt12_TimerDirection;

/** \brief Timer count direction control source\n
 * Definition in IfxGPT12.TxCON.B.TxUDE (x=2 to 6)
 */
typedef enum
{
    IfxGpt12_TimerDirectionSource_internal = 0,  /**< \brief Timer Dir Control = TxUD (x=2,3,4) */
    IfxGpt12_TimerDirectionSource_external = 1   /**< \brief Timer Dir Control = TxUD (x=2,3,4) */
} IfxGpt12_TimerDirectionSource;

/** \brief Input prescaler Selection for the timer\n
 * Definition in IfxGPT12.TxCON.B.TxI (x = 2 to 4)
 */
typedef enum
{
    IfxGpt12_TimerInputPrescaler_1   = 0,
    IfxGpt12_TimerInputPrescaler_2   = 1,
    IfxGpt12_TimerInputPrescaler_4   = 2,
    IfxGpt12_TimerInputPrescaler_8   = 3,
    IfxGpt12_TimerInputPrescaler_16  = 4,
    IfxGpt12_TimerInputPrescaler_32  = 5,
    IfxGpt12_TimerInputPrescaler_64  = 6,
    IfxGpt12_TimerInputPrescaler_128 = 7
} IfxGpt12_TimerInputPrescaler;

/** \brief Timer Reload Mode\n
 * Definition in IfxGPT12.T6CON.B.T6SR
 */
typedef enum
{
    IfxGpt12_TimerReloadMode_disable,  /**< \brief Reload mode disabled */
    IfxGpt12_TimerReloadMode_enable    /**< \brief Reload mode enabled */
} IfxGpt12_TimerReloadMode;

/** \brief Timer Remote Control enable choice \n
 * Definition in IfxGPT12.TxCON.B.TxRC (x = 2 and 4)
 */
typedef enum
{
    IfxGpt12_TimerRemoteControl_off = 0,  /**< \brief T2 RemoteControl Off */
    IfxGpt12_TimerRemoteControl_on  = 1   /**< \brief T2 RemoteControl On */
} IfxGpt12_TimerRemoteControl;

/** \brief Timer Run / stop control choice (only if TxCON.B.TxRC = 0)\n
 * Definition in IfxGPT12.TxCON.B.TxR (x = 2 to 6)
 */
typedef enum
{
    IfxGpt12_TimerRun_stop  = 0, /**< \brief Timer x Stops */
    IfxGpt12_TimerRun_start = 1  /**< \brief Timer X Run */
} IfxGpt12_TimerRun;

/** \} */

/** \addtogroup IfxLld_Gpt12_Std_InterruptFunctions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the address of Timer 2 service request
 * \param gpt12 Pointer to module base address
 * \return address of timer 2 Interrupt
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T2_getSrc(Ifx_GPT12 *gpt12);

/** \brief Returns the address of Timer 3 service request
 * \param gpt12 Pointer to module base address
 * \return address of  Timer 3 Interrupt
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T3_getSrc(Ifx_GPT12 *gpt12);

/** \brief Returns the address of Timer 4 service request
 * \param gpt12 Pointer to module base address
 * \return address of timer 4 interrupt
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T4_getSrc(Ifx_GPT12 *gpt12);

/** \brief Returns the address of Timer 5 service request
 * \param gpt12 Pointer to module base address
 * \return address of Timer 5 Interrupt
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T5_getSrc(Ifx_GPT12 *gpt12);

/** \brief Returns the address of Timer 6 service request
 * \param gpt12 Pointer to module base address
 * \return address of Timer 6 interrupt
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T6_getSrc(Ifx_GPT12 *gpt12);

/** \brief Returns the address of capture service request
 * \param gpt12 Pointer to module base address
 * \return address of capture Interrupt
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_getCaptureSrc(Ifx_GPT12 *gpt12);

/** \} */

/** \addtogroup IfxLld_Gpt12_Std_ConfigurationFunctions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Sets the input edge selection for the capture mode of the T2 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input prescaler value in capture mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setCaptureInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CaptureInputMode inputMode);

/** \brief Sets the input edge selection for the counter mode of the T2 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in counter mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode);

/** \brief Sets the T2 timer count direction source internal / external
 * \param gpt12 Pointer to module base address
 * \param source direction source
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source);

/** \brief Sets the EUD input for the T2 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the EUD input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input);

/** \brief Sets the input edge selection for the incremental interface mode of the T2 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in IIM mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setIncrementalInterfaceInputMode(Ifx_GPT12 *gpt12, IfxGpt12_IncrementalInterfaceInputMode inputMode);

/** \brief Sets the input for the T2 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the Input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input);

/** \brief Enables / Disables the interrupt generation of the T2 timer
 * \param gpt12 pointer to module base address
 * \param enabled Enable/Disable choice
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setInterruptEnable(Ifx_GPT12 *gpt12, boolean enabled);

/** \brief Sets the mode of operation od T2 timer
 * \param gpt12 Pointer to module base address
 * \param mode Select the mode of operation
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode);

/** \brief Sets the input edge selection for the reload mode of the T2 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input prescaler value in reload mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setReloadInputMode(Ifx_GPT12 *gpt12, IfxGpt12_ReloadInputMode inputMode);

/** \brief Sets the remote control of the T2 timer
 * \param gpt12 pointer to module base address
 * \param control enable the remote control
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setRemoteControl(Ifx_GPT12 *gpt12, IfxGpt12_TimerRemoteControl control);

/** \brief Sets the T2 timer count direction
 * \param gpt12 Pointer to module base address
 * \param direction select the Timer direction
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction);

/** \brief Sets the input prescaler for the Timer mode and Gated timer mode of T2 timer
 * \param gpt12 Pointer to module base address
 * \param inputPrescaler input prescaler value in timer mode and gated timer mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler);

/** \brief Enable / Disable the T3 Output on pin T3OUT
 * \param gpt12 Pointer to module base address
 * \param enable enable / disable choice for T3OE
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_enableOutput(Ifx_GPT12 *gpt12, boolean enable);

/** \brief Sets the input edge selection for the counter mode of the T3 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in counter mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode);

/** \brief Sets the T3 timer count direction source internal / external
 * \param gpt12 Pointer to module base address
 * \param source direction source
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source);

/** \brief Sets the EUD input for the T3 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the EUD input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input);

/** \brief Sets the input edge selection for the incremental interface mode of the T3 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in IIM mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setIncrementalInterfaceInputMode(Ifx_GPT12 *gpt12, IfxGpt12_IncrementalInterfaceInputMode inputMode);

/** \brief Sets the input for the T3 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the Input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input);

/** \brief Sets the mode of operation od T3 timer
 * \param gpt12 Pointer to module base address
 * \param mode Select the mode of operation
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode);

/** \brief Sets the T3 timer count direction
 * \param gpt12 Pointer to module base address
 * \param direction select the Timer direction
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction);

/** \brief Sets the input prescaler for the Timer mode and Gated timer mode of T3 timer
 * \param gpt12 Pointer to module base address
 * \param inputPrescaler input prescaler value in timer mode and gated timer mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler);

/** \brief Enables / Disables the clear timer T2 bit of the T4 timer
 * \param gpt12 pointer to module base address
 * \param enabled Enable/Disable choice
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_enableClearTimerT2(Ifx_GPT12 *gpt12, boolean enabled);

/** \brief Enables / Disables the clear timer T3 bit of the T4 timer
 * \param gpt12 pointer to module base address
 * \param enabled Enable/Disable choice
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_enableClearTimerT3(Ifx_GPT12 *gpt12, boolean enabled);

/** \brief Sets the input edge selection for the capture mode of the T4 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input prescaler value in capture mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setCaptureInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CaptureInputMode inputMode);

/** \brief Sets the input edge selection for the counter mode of the T4 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in counter mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode);

/** \brief Sets the T4 timer count direction source internal / external
 * \param gpt12 Pointer to module base address
 * \param source direction source
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source);

/** \brief Sets the EUD input for the T4 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the EUD input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input);

/** \brief Sets the input edge selection for the incremental interface mode of the T4 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in IIM mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setIncrementalInterfaceInputMode(Ifx_GPT12 *gpt12, IfxGpt12_IncrementalInterfaceInputMode inputMode);

/** \brief Sets the input for the T4 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the Input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input);

/** \brief Enables / Disables the interrupt generation of the T4 timer
 * \param gpt12 pointer to module base address
 * \param enabled Enable/Disable choice
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setInterruptEnable(Ifx_GPT12 *gpt12, boolean enabled);

/** \brief Sets the mode of operation od T4 timer
 * \param gpt12 Pointer to module base address
 * \param mode Select the mode of operation
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode);

/** \brief Sets the input edge selection for the reload mode of the T4 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input prescaler value in reload mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setReloadInputMode(Ifx_GPT12 *gpt12, IfxGpt12_ReloadInputMode inputMode);

/** \brief Sets the remote control of the T4 timer
 * \param gpt12 pointer to module base address
 * \param control enable the remote control
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setRemoteControl(Ifx_GPT12 *gpt12, IfxGpt12_TimerRemoteControl control);

/** \brief Sets the T4 timer count direction
 * \param gpt12 Pointer to module base address
 * \param direction select the Timer direction
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction);

/** \brief Sets the input prescaler for the Timer mode and Gated timer mode of T4 timer
 * \param gpt12 Pointer to module base address
 * \param inputPrescaler input prescaler value in timer mode and gated timer mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler);

/** \brief Enables / Disables the clear timer bit of the T5 timer
 * \param gpt12 pointer to module base address
 * \param enabled Enable/Disable choice
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_enableClearTimer(Ifx_GPT12 *gpt12, boolean enabled);

/** \brief Sets the capture trigger of teh T5 timer
 * \param gpt12 Pointer to Module base address
 * \param trigger Capture trigger
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setCaptureTrigger(Ifx_GPT12 *gpt12, IfxGpt12_CaptureTrigger trigger);

/** \brief Enables / Disables the capture trigger of the T5 timer
 * \param gpt12 pointer to module base address
 * \param enabled Enable/Disable choice
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setCaptureTriggerEnable(Ifx_GPT12 *gpt12, boolean enabled);

/** \brief Sets the capture trigger mode of the T5 timer
 * \param gpt12 Pointer to module base address
 * \param mode Select the capture trigger mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setCaptureTriggerMode(Ifx_GPT12 *gpt12, IfxGpt12_CaptureTriggerMode mode);

/** \brief Sets the input edge selection for the counter mode of the T5 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in counter mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode);

/** \brief Sets the T5 timer count direction source internal / external
 * \param gpt12 Pointer to module base address
 * \param source direction source
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source);

/** \brief Sets the EUD input for the T5 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the EUD input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input);

/** \brief Sets the input for the T5 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the Input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input);

/** \brief Sets the mode of operation od T5 timer
 * \param gpt12 Pointer to module base address
 * \param mode Select the mode of operation
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode);

/** \brief Sets the remote control of the T5 timer
 * \param gpt12 pointer to module base address
 * \param control enable the remote control
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setRemoteControl(Ifx_GPT12 *gpt12, IfxGpt12_TimerRemoteControl control);

/** \brief Sets the T5 timer count direction
 * \param gpt12 Pointer to module base address
 * \param direction select the Timer direction
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction);

/** \brief Sets the input prescaler for the Timer mode and Gated timer mode of T5 timer
 * \param gpt12 Pointer to module base address
 * \param inputPrescaler input prescaler value in timer mode and gated timer mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler);

/** \brief Enables / Disables the clear timer bit of the T6 timer
 * \param gpt12 pointer to module base address
 * \param enabled Enable/Disable choice
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_enableClearTimer(Ifx_GPT12 *gpt12, boolean enabled);

/** \brief Sets the input edge selection for the counter mode of the T6 timer
 * \param gpt12 Pointer to module base address
 * \param inputMode input edge selection in counter mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode);

/** \brief sets the T6 timer count direction source internal / external
 * \param gpt12 Pointer to module base address
 * \param source direction source
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source);

/** \brief Sets the EUD input for the T6 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the EUD input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input);

/** \brief Sets the input for the T6 timer
 * \param gpt12 Pointer to module base address
 * \param input Select the Input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input);

/** \brief Sets the mode of operation od T6 timer
 * \param gpt12 Pointer to module base address
 * \param mode Select the mode of operation
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode);

/** \brief sets the T6 timer count direction
 * \param gpt12 Pointer to module base address
 * \param mode Timer Reload Mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setReloadMode(Ifx_GPT12 *gpt12, IfxGpt12_TimerReloadMode mode);

/** \brief sets the T6 timer count direction
 * \param gpt12 Pointer to module base address
 * \param direction select the Timer direction
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction);

/** \brief Sets the input prescaler for the Timer mode and Gated timer mode of T6 timer
 * \param gpt12 Pointer to module base address
 * \param inputPrescaler input prescaler value in timer mode and gated timer mode
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler);

/** \brief Initializes a Capin_In input
 * \param capIn the TxIn Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxGpt12_initCapInPin(const IfxGpt12_TxIn_In *capIn, IfxPort_InputMode inputMode);

/** \brief Initializes a SLSO output
 * \param txOut the TxOUT Pin which should be configured
 * \param outputMode the pin output mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxGpt12_initTxOutPin(const IfxGpt12_TxOut_Out *txOut, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Sets the capture input
 * \param gpt12 Pointer to Module base address
 * \param input Select the capture input signal
 * \return None
 */
IFX_INLINE void IfxGpt12_setCaptureInput(Ifx_GPT12 *gpt12, IfxGpt12_CaptureInput input);

/** \brief Sets the GPT1 block prescaler
 * \param gpt12 Pointer to module base address
 * \param bps1 Select the GPT1 block Prescaler
 * \return None
 */
IFX_INLINE void IfxGpt12_setGpt1BlockPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_Gpt1BlockPrescaler bps1);

/** \brief Sets the GPT2 block prescaler
 * \param gpt12 Pointer to module base address
 * \param bps2 Select the GPT2 block Prescaler
 * \return None
 */
IFX_INLINE void IfxGpt12_setGpt2BlockPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_Gpt2BlockPrescaler bps2);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the module
 * \param gpt12 Pointer to module base address
 * \return None
 */
IFX_EXTERN void IfxGpt12_disableModule(Ifx_GPT12 *gpt12);

/** \brief Enables the module
 * \param gpt12 Pointer to module base address
 * \return None
 */
IFX_EXTERN void IfxGpt12_enableModule(Ifx_GPT12 *gpt12);

/** \brief Initializes a TxEUDIn_IN input
 * \param txEudIn the TxEUD_IN Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \return None
 */
IFX_EXTERN void IfxGpt12_initTxEudInPin(const IfxGpt12_TxEud_In *txEudIn, IfxPort_InputMode inputMode);

/** \brief Initializes a TxIn input
 * \param txIn the TxIn Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \return None
 */
IFX_EXTERN void IfxGpt12_initTxInPin(const IfxGpt12_TxIn_In *txIn, IfxPort_InputMode inputMode);

/** \} */

/** \addtogroup IfxLld_Gpt12_Std_UtilityFunctions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the operating mode of the T2 timer
 * \param gpt12 Pointer to module base address
 * \return mode of operation
 */
IFX_INLINE IfxGpt12_Mode IfxGpt12_T2_getMode(Ifx_GPT12 *gpt12);

/** \brief Returns the timer value of the T2 timer
 * \param gpt12 Pointer to module base address
 * \return timer current value
 */
IFX_INLINE uint16 IfxGpt12_T2_getTimerValue(Ifx_GPT12 *gpt12);

/** \brief Returns the operating mode of the T3 timer
 * \param gpt12 Pointer to module base address
 * \return mode of operation
 */
IFX_INLINE IfxGpt12_Mode IfxGpt12_T3_getMode(Ifx_GPT12 *gpt12);

/** \brief Returns the timer value of the T3 timer
 * \param gpt12 Pointer to module base address
 * \return timer current value
 */
IFX_INLINE uint16 IfxGpt12_T3_getTimerValue(Ifx_GPT12 *gpt12);

/** \brief Returns the operating mode of the T4 timer
 * \param gpt12 Pointer to module base address
 * \return mode of operation
 */
IFX_INLINE IfxGpt12_Mode IfxGpt12_T4_getMode(Ifx_GPT12 *gpt12);

/** \brief Returns the timer value of the T4 timer
 * \param gpt12 Pointer to module base address
 * \return timer current value
 */
IFX_INLINE uint16 IfxGpt12_T4_getTimerValue(Ifx_GPT12 *gpt12);

/** \brief Returns the operating mode of the T5 timer
 * \param gpt12 Pointer to module base address
 * \return mode of operation
 */
IFX_INLINE IfxGpt12_Mode IfxGpt12_T5_getMode(Ifx_GPT12 *gpt12);

/** \brief Returns the timer value of the T5 timer
 * \param gpt12 Pointer to module base address
 * \return timer current value
 */
IFX_INLINE uint16 IfxGpt12_T5_getTimerValue(Ifx_GPT12 *gpt12);

/** \brief Returns the operating mode of the T6 timer
 * \param gpt12 Pointer to module base address
 * \return mode of operation
 */
IFX_INLINE IfxGpt12_Mode IfxGpt12_T6_getMode(Ifx_GPT12 *gpt12);

/** \brief Returns the timer value of the T6 timer
 * \param gpt12 Pointer to module base address
 * \return timer current value
 */
IFX_INLINE uint16 IfxGpt12_T6_getTimerValue(Ifx_GPT12 *gpt12);

/** \brief Returns the gpt12 module frequency
 * \param gpt12 Pointer to module base address
 * \return gpt12 module frequency
 */
IFX_INLINE float32 IfxGpt12_getModuleFrequency(Ifx_GPT12 *gpt12);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the frequency of the T2 timer
 * \param gpt12 Pointer to Module base address
 * \return frequency
 */
IFX_EXTERN float32 IfxGpt12_T2_getFrequency(Ifx_GPT12 *gpt12);

/** \brief Returns the frequency of the T3 timer
 * \param gpt12 Pointer to Module base address
 * \return frequency
 */
IFX_EXTERN float32 IfxGpt12_T3_getFrequency(Ifx_GPT12 *gpt12);

/** \brief Returns the frequency of the T4 timer
 * \param gpt12 Pointer to Module base address
 * \return frequency
 */
IFX_EXTERN float32 IfxGpt12_T4_getFrequency(Ifx_GPT12 *gpt12);

/** \brief Returns the frequency of the T5 timer
 * \param gpt12 Pointer to Module base address
 * \return frequency
 */
IFX_EXTERN float32 IfxGpt12_T5_getFrequency(Ifx_GPT12 *gpt12);

/** \brief Returns the frequency of the T6 timer
 * \param gpt12 Pointer to Module base address
 * \return frequency
 */
IFX_EXTERN float32 IfxGpt12_T6_getFrequency(Ifx_GPT12 *gpt12);

/** \} */

/** \addtogroup IfxLld_Gpt12_Std_OperativeFunctions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Starts / stops the T2 Timer
 * \param gpt12 Pointer to Module base address
 * \param runTimer Start/stop Timer 2
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer);

/** \brief Sets value for the T2 timer
 * \param gpt12 pointer to module base address
 * \param value Timer Value
 * \return None
 */
IFX_INLINE void IfxGpt12_T2_setTimerValue(Ifx_GPT12 *gpt12, uint16 value);

/** \brief Starts / stops the T3 Timer
 * \param gpt12 Pointer to module base address
 * \param runTimer start/stop Timer 3
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer);

/** \brief Sets value for the T3 Timer
 * \param gpt12 pointer to module base address
 * \param value Timer Value
 * \return None
 */
IFX_INLINE void IfxGpt12_T3_setTimerValue(Ifx_GPT12 *gpt12, uint16 value);

/** \brief Starts / stops the T4 Timer
 * \param gpt12 Pointer to module base address
 * \param runTimer Start/stop Timer 4
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer);

/** \brief Sets value for the T4 timer
 * \param gpt12 pointer to module base address
 * \param value Timer Value
 * \return None
 */
IFX_INLINE void IfxGpt12_T4_setTimerValue(Ifx_GPT12 *gpt12, uint16 value);

/** \brief Starts / stops the T5 Timer
 * \param gpt12 Pointer to module base address
 * \param runTimer Start/stop Timer 5
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer);

/** \brief Sets value for the T5 timer
 * \param gpt12 pointer to module base address
 * \param value Timer Value
 * \return None
 */
IFX_INLINE void IfxGpt12_T5_setTimerValue(Ifx_GPT12 *gpt12, uint16 value);

/** \brief Starts / stops the T6 Timer
 * \param gpt12 Pointer to module base address
 * \param runTimer Start/stop Timer 6
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer);

/** \brief Sets value for the T6 timer
 * \param gpt12 pointer to module base address
 * \param value Timer Value
 * \return None
 */
IFX_INLINE void IfxGpt12_T6_setTimerValue(Ifx_GPT12 *gpt12, uint16 value);

/** \brief Sets the sensitivity of the module to sleep signal
 * \param gpt12 pointer to GPT12 registers
 * \param value Reload value
 * \return None
 */
IFX_INLINE void IfxGpt12_setCaptureReload(Ifx_GPT12 *gpt12, IfxGpt12_SleepMode value);

/** \brief Sets the sensitivity of the module to sleep signal
 * \param gpt12 pointer to GPT12 registers
 * \param mode mode selection (enable/disable)
 * \return None
 */
IFX_INLINE void IfxGpt12_setSleepMode(Ifx_GPT12 *gpt12, IfxGpt12_SleepMode mode);

/** \brief Configure the Module to Hard/Soft suspend mode.
 * Note: The api works only when the OCDS is enabled and in Supervisor Mode. When OCDS is disabled the OCS suspend control is ineffective.
 * \param gpt12 Pointer to GPT12 module registers
 * \param mode Module suspend mode
 * \return None
 */
IFX_INLINE void IfxGpt12_setSuspendMode(Ifx_GPT12 *gpt12, IfxGpt12_SuspendMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief resets GPT12 kernel
 * \param gpt12 pointer to GPT12 registers
 * \return None
 */
IFX_EXTERN void IfxGpt12_resetModule(Ifx_GPT12 *gpt12);

/** \} */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Provides functionality for both setting of CAPIN pin direction as input and configuring pad driver
 * \param capIn the TxIn Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxGpt12_initCapInPinWithPadLevel(const IfxGpt12_TxIn_In *capIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Returns the module's suspend state.
 * TRUE :if module is suspended.
 * FALSE:if module is not yet suspended.
 * \param gpt12 Pointer to GPT12 module registers
 * \return Suspend status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxGpt12_isModuleSuspended(Ifx_GPT12 *gpt12);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Provides functionality for both setting of TXEUD pin direction as input and configuring pad driver
 * \param txEudIn the TxEUD_IN Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_EXTERN void IfxGpt12_initTxEudInPinWithPadLevel(const IfxGpt12_TxEud_In *txEudIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/** \brief Provides functionality for both setting of TXIN pin direction as input and configuring pad driver
 * \param txIn the TxIn Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_EXTERN void IfxGpt12_initTxInPinWithPadLevel(const IfxGpt12_TxIn_In *txIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE IfxGpt12_Mode IfxGpt12_T2_getMode(Ifx_GPT12 *gpt12)
{
    return (IfxGpt12_Mode)gpt12->T2CON.B.T2M;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T2_getSrc(Ifx_GPT12 *gpt12)
{
    return &MODULE_SRC.GPT12.GPT12[0].T2;
}


IFX_INLINE uint16 IfxGpt12_T2_getTimerValue(Ifx_GPT12 *gpt12)
{
    return (uint16)gpt12->T2.U;
}


IFX_INLINE void IfxGpt12_T2_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer)
{
    gpt12->T2CON.B.T2R = runTimer;
}


IFX_INLINE void IfxGpt12_T2_setCaptureInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CaptureInputMode inputMode)
{
    gpt12->T2CON.B.T2I = inputMode;
}


IFX_INLINE void IfxGpt12_T2_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode)
{
    gpt12->T2CON.B.T2I = inputMode;
}


IFX_INLINE void IfxGpt12_T2_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source)
{
    gpt12->T2CON.B.T2UDE = source;
}


IFX_INLINE void IfxGpt12_T2_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, input <= 1); /* wrong selection  */
    gpt12->PISEL.B.IST2EUD = input;
}


IFX_INLINE void IfxGpt12_T2_setIncrementalInterfaceInputMode(Ifx_GPT12 *gpt12, IfxGpt12_IncrementalInterfaceInputMode inputMode)
{
    gpt12->T2CON.B.T2I = inputMode;
}


IFX_INLINE void IfxGpt12_T2_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, input <= 1); /* wrong selection  */
    gpt12->PISEL.B.IST2IN = input;
}


IFX_INLINE void IfxGpt12_T2_setInterruptEnable(Ifx_GPT12 *gpt12, boolean enabled)
{
    gpt12->T2CON.B.T2IRDIS = enabled ? 0 : 1;
}


IFX_INLINE void IfxGpt12_T2_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode)
{
    gpt12->T2CON.B.T2M = mode;
}


IFX_INLINE void IfxGpt12_T2_setReloadInputMode(Ifx_GPT12 *gpt12, IfxGpt12_ReloadInputMode inputMode)
{
    gpt12->T2CON.B.T2I = inputMode;
}


IFX_INLINE void IfxGpt12_T2_setRemoteControl(Ifx_GPT12 *gpt12, IfxGpt12_TimerRemoteControl control)
{
    gpt12->T2CON.B.T2RC = control;
}


IFX_INLINE void IfxGpt12_T2_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction)
{
    gpt12->T2CON.B.T2UD = direction;
}


IFX_INLINE void IfxGpt12_T2_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler)
{
    gpt12->T2CON.B.T2I = inputPrescaler;
}


IFX_INLINE void IfxGpt12_T2_setTimerValue(Ifx_GPT12 *gpt12, uint16 value)
{
    gpt12->T2.U = value;
}


IFX_INLINE void IfxGpt12_T3_enableOutput(Ifx_GPT12 *gpt12, boolean enable)
{
    gpt12->T3CON.B.T3OE = enable ? 1 : 0;
}


IFX_INLINE IfxGpt12_Mode IfxGpt12_T3_getMode(Ifx_GPT12 *gpt12)
{
    return (IfxGpt12_Mode)gpt12->T3CON.B.T3M;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T3_getSrc(Ifx_GPT12 *gpt12)
{
    return &MODULE_SRC.GPT12.GPT12[0].T3;
}


IFX_INLINE uint16 IfxGpt12_T3_getTimerValue(Ifx_GPT12 *gpt12)
{
    return (uint16)gpt12->T3.U;
}


IFX_INLINE void IfxGpt12_T3_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer)
{
    gpt12->T3CON.B.T3R = runTimer;
}


IFX_INLINE void IfxGpt12_T3_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, inputMode <= IfxGpt12_CounterInputMode_bothEdgesTxIN); /* wrong selection  */
    gpt12->T3CON.B.T3I = inputMode;
}


IFX_INLINE void IfxGpt12_T3_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source)
{
    gpt12->T3CON.B.T3UDE = source;
}


IFX_INLINE void IfxGpt12_T3_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input)
{
    gpt12->PISEL.B.IST3EUD = input;
}


IFX_INLINE void IfxGpt12_T3_setIncrementalInterfaceInputMode(Ifx_GPT12 *gpt12, IfxGpt12_IncrementalInterfaceInputMode inputMode)
{
    gpt12->T3CON.B.T3I = inputMode;
}


IFX_INLINE void IfxGpt12_T3_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input)
{
    gpt12->PISEL.B.IST3IN = input;
}


IFX_INLINE void IfxGpt12_T3_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, ((mode != IfxGpt12_Mode_reload) && (mode != IfxGpt12_Mode_capture))); /* wrong selection  */
    gpt12->T3CON.B.T3M = mode;
}


IFX_INLINE void IfxGpt12_T3_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction)
{
    gpt12->T3CON.B.T3UD = direction;
}


IFX_INLINE void IfxGpt12_T3_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler)
{
    gpt12->T3CON.B.T3I = inputPrescaler;
}


IFX_INLINE void IfxGpt12_T3_setTimerValue(Ifx_GPT12 *gpt12, uint16 value)
{
    gpt12->T3.U = value;
}


IFX_INLINE void IfxGpt12_T4_enableClearTimerT2(Ifx_GPT12 *gpt12, boolean enabled)
{
    gpt12->T4CON.B.CLRT2EN = enabled ? 1 : 0;
}


IFX_INLINE void IfxGpt12_T4_enableClearTimerT3(Ifx_GPT12 *gpt12, boolean enabled)
{
    gpt12->T4CON.B.CLRT3EN = enabled ? 1 : 0;
}


IFX_INLINE IfxGpt12_Mode IfxGpt12_T4_getMode(Ifx_GPT12 *gpt12)
{
    return (IfxGpt12_Mode)gpt12->T4CON.B.T4M;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T4_getSrc(Ifx_GPT12 *gpt12)
{
    return &MODULE_SRC.GPT12.GPT12[0].T4;
}


IFX_INLINE uint16 IfxGpt12_T4_getTimerValue(Ifx_GPT12 *gpt12)
{
    return (uint16)gpt12->T4.U;
}


IFX_INLINE void IfxGpt12_T4_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer)
{
    gpt12->T4CON.B.T4R = runTimer;
}


IFX_INLINE void IfxGpt12_T4_setCaptureInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CaptureInputMode inputMode)
{
    gpt12->T4CON.B.T4I = inputMode;
}


IFX_INLINE void IfxGpt12_T4_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode)
{
    gpt12->T4CON.B.T4I = inputMode;
}


IFX_INLINE void IfxGpt12_T4_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source)
{
    gpt12->T4CON.B.T4UDE = source;
}


IFX_INLINE void IfxGpt12_T4_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input)
{
    gpt12->PISEL.B.IST4EUD = input;
}


IFX_INLINE void IfxGpt12_T4_setIncrementalInterfaceInputMode(Ifx_GPT12 *gpt12, IfxGpt12_IncrementalInterfaceInputMode inputMode)
{
    gpt12->T4CON.B.T4I = inputMode;
}


IFX_INLINE void IfxGpt12_T4_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input)
{
    gpt12->PISEL.B.IST4IN = input;
}


IFX_INLINE void IfxGpt12_T4_setInterruptEnable(Ifx_GPT12 *gpt12, boolean enabled)
{
    gpt12->T4CON.B.T4IRDIS = enabled ? 0 : 1;
}


IFX_INLINE void IfxGpt12_T4_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode)
{
    gpt12->T4CON.B.T4M = mode;
}


IFX_INLINE void IfxGpt12_T4_setReloadInputMode(Ifx_GPT12 *gpt12, IfxGpt12_ReloadInputMode inputMode)
{
    gpt12->T4CON.B.T4I = inputMode;
}


IFX_INLINE void IfxGpt12_T4_setRemoteControl(Ifx_GPT12 *gpt12, IfxGpt12_TimerRemoteControl control)
{
    gpt12->T4CON.B.T4RC = control;
}


IFX_INLINE void IfxGpt12_T4_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction)
{
    gpt12->T4CON.B.T4UD = direction;
}


IFX_INLINE void IfxGpt12_T4_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler)
{
    gpt12->T4CON.B.T4I = inputPrescaler;
}


IFX_INLINE void IfxGpt12_T4_setTimerValue(Ifx_GPT12 *gpt12, uint16 value)
{
    gpt12->T4.U = value;
}


IFX_INLINE void IfxGpt12_T5_enableClearTimer(Ifx_GPT12 *gpt12, boolean enabled)
{
    gpt12->T5CON.B.T5CLR = enabled ? 1 : 0;
}


IFX_INLINE IfxGpt12_Mode IfxGpt12_T5_getMode(Ifx_GPT12 *gpt12)
{
    return (IfxGpt12_Mode)gpt12->T5CON.B.T5M;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T5_getSrc(Ifx_GPT12 *gpt12)
{
    return &MODULE_SRC.GPT12.GPT12[0].T5;
}


IFX_INLINE uint16 IfxGpt12_T5_getTimerValue(Ifx_GPT12 *gpt12)
{
    return (uint16)gpt12->T5.U;
}


IFX_INLINE void IfxGpt12_T5_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer)
{
    gpt12->T5CON.B.T5R = runTimer;
}


IFX_INLINE void IfxGpt12_T5_setCaptureTrigger(Ifx_GPT12 *gpt12, IfxGpt12_CaptureTrigger trigger)
{
    gpt12->T5CON.B.CT3 = trigger;
}


IFX_INLINE void IfxGpt12_T5_setCaptureTriggerEnable(Ifx_GPT12 *gpt12, boolean enabled)
{
    gpt12->T5CON.B.T5SC = enabled;
}


IFX_INLINE void IfxGpt12_T5_setCaptureTriggerMode(Ifx_GPT12 *gpt12, IfxGpt12_CaptureTriggerMode mode)
{
    gpt12->T5CON.B.CI = mode;
}


IFX_INLINE void IfxGpt12_T5_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode)
{
    gpt12->T5CON.B.T5I = inputMode;
}


IFX_INLINE void IfxGpt12_T5_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source)
{
    gpt12->T5CON.B.T5UDE = source;
}


IFX_INLINE void IfxGpt12_T5_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, input <= 1); /* wrong selection  */
    gpt12->PISEL.B.IST5EUD = input;
}


IFX_INLINE void IfxGpt12_T5_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, input <= 1); /* wrong selection  */
    gpt12->PISEL.B.IST5IN = input;
}


IFX_INLINE void IfxGpt12_T5_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, mode <= IfxGpt12_Mode_highGatedTimer); /* wrong selection  */
    gpt12->T5CON.B.T5M = mode;
}


IFX_INLINE void IfxGpt12_T5_setRemoteControl(Ifx_GPT12 *gpt12, IfxGpt12_TimerRemoteControl control)
{
    gpt12->T5CON.B.T5RC = control;
}


IFX_INLINE void IfxGpt12_T5_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction)
{
    gpt12->T5CON.B.T5UD = direction;
}


IFX_INLINE void IfxGpt12_T5_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler)
{
    gpt12->T5CON.B.T5I = inputPrescaler;
}


IFX_INLINE void IfxGpt12_T5_setTimerValue(Ifx_GPT12 *gpt12, uint16 value)
{
    gpt12->T5.U = value;
}


IFX_INLINE void IfxGpt12_T6_enableClearTimer(Ifx_GPT12 *gpt12, boolean enabled)
{
    gpt12->T6CON.B.T6CLR = enabled ? 1 : 0;
}


IFX_INLINE IfxGpt12_Mode IfxGpt12_T6_getMode(Ifx_GPT12 *gpt12)
{
    return (IfxGpt12_Mode)gpt12->T6CON.B.T6M;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_T6_getSrc(Ifx_GPT12 *gpt12)
{
    return &MODULE_SRC.GPT12.GPT12[0].T6;
}


IFX_INLINE uint16 IfxGpt12_T6_getTimerValue(Ifx_GPT12 *gpt12)
{
    return (uint16)gpt12->T6.U;
}


IFX_INLINE void IfxGpt12_T6_run(Ifx_GPT12 *gpt12, IfxGpt12_TimerRun runTimer)
{
    gpt12->T6CON.B.T6R = runTimer;
}


IFX_INLINE void IfxGpt12_T6_setCounterInputMode(Ifx_GPT12 *gpt12, IfxGpt12_CounterInputMode inputMode)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, inputMode <= IfxGpt12_CounterInputMode_bothEdgesTxIN); /* wrong selection  */
    gpt12->T6CON.B.T6I = inputMode;
}


IFX_INLINE void IfxGpt12_T6_setDirectionSource(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirectionSource source)
{
    gpt12->T6CON.B.T6UDE = source;
}


IFX_INLINE void IfxGpt12_T6_setEudInput(Ifx_GPT12 *gpt12, IfxGpt12_EudInput input)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, input <= 1); /* wrong selection  */
    gpt12->PISEL.B.IST6EUD = input;
}


IFX_INLINE void IfxGpt12_T6_setInput(Ifx_GPT12 *gpt12, IfxGpt12_Input input)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, input <= 1); /* wrong selection  */
    gpt12->PISEL.B.IST6IN = input;
}


IFX_INLINE void IfxGpt12_T6_setMode(Ifx_GPT12 *gpt12, IfxGpt12_Mode mode)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, mode <= IfxGpt12_Mode_highGatedTimer); /* wrong selection  */
    gpt12->T6CON.B.T6M = mode;
}


IFX_INLINE void IfxGpt12_T6_setReloadMode(Ifx_GPT12 *gpt12, IfxGpt12_TimerReloadMode mode)
{
    gpt12->T6CON.B.T6SR = mode;
}


IFX_INLINE void IfxGpt12_T6_setTimerDirection(Ifx_GPT12 *gpt12, IfxGpt12_TimerDirection direction)
{
    gpt12->T6CON.B.T6UD = direction;
}


IFX_INLINE void IfxGpt12_T6_setTimerPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_TimerInputPrescaler inputPrescaler)
{
    gpt12->T6CON.B.T6I = inputPrescaler;
}


IFX_INLINE void IfxGpt12_T6_setTimerValue(Ifx_GPT12 *gpt12, uint16 value)
{
    gpt12->T6.U = value;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxGpt12_getCaptureSrc(Ifx_GPT12 *gpt12)
{
    return &MODULE_SRC.GPT12.GPT12[0].CIRQ;
}


IFX_INLINE float32 IfxGpt12_getModuleFrequency(Ifx_GPT12 *gpt12)
{
    return IfxScuCcu_getSpbFrequency();
}


IFX_INLINE void IfxGpt12_initCapInPin(const IfxGpt12_TxIn_In *capIn, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(capIn->pin.port, capIn->pin.pinIndex, inputMode);
    IfxGpt12_setCaptureInput(capIn->module, (IfxGpt12_CaptureInput)capIn->select);
}


IFX_INLINE void IfxGpt12_initCapInPinWithPadLevel(const IfxGpt12_TxIn_In *capIn, IfxPort_InputMode inputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeInput(capIn->pin.port, capIn->pin.pinIndex, inputMode);
    IfxPort_setPinPadDriver(capIn->pin.port, capIn->pin.pinIndex, padDriver);
    IfxGpt12_setCaptureInput(capIn->module, (IfxGpt12_CaptureInput)capIn->select);
}


IFX_INLINE void IfxGpt12_initTxOutPin(const IfxGpt12_TxOut_Out *txOut, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(txOut->pin.port, txOut->pin.pinIndex, outputMode, txOut->select);
    IfxPort_setPinPadDriver(txOut->pin.port, txOut->pin.pinIndex, padDriver);
}


IFX_INLINE boolean IfxGpt12_isModuleSuspended(Ifx_GPT12 *gpt12)
{
    Ifx_GPT12_OCS ocs;

    // read the status
    ocs.U = gpt12->OCS.U;

    // return the status
    return ocs.B.SUSSTA;
}


IFX_INLINE void IfxGpt12_setCaptureInput(Ifx_GPT12 *gpt12, IfxGpt12_CaptureInput input)
{
    gpt12->PISEL.B.ISCAPIN = input;
}


IFX_INLINE void IfxGpt12_setCaptureReload(Ifx_GPT12 *gpt12, IfxGpt12_SleepMode value)
{
    gpt12->CAPREL.B.CAPREL = value;
}


IFX_INLINE void IfxGpt12_setGpt1BlockPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_Gpt1BlockPrescaler bps1)
{
    gpt12->T3CON.B.BPS1 = bps1;
}


IFX_INLINE void IfxGpt12_setGpt2BlockPrescaler(Ifx_GPT12 *gpt12, IfxGpt12_Gpt2BlockPrescaler bps2)
{
    gpt12->T6CON.B.BPS2 = bps2;
}


IFX_INLINE void IfxGpt12_setSleepMode(Ifx_GPT12 *gpt12, IfxGpt12_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    gpt12->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


IFX_INLINE void IfxGpt12_setSuspendMode(Ifx_GPT12 *gpt12, IfxGpt12_SuspendMode mode)
{
    Ifx_GPT12_OCS ocs;

    // remove protection and configure the suspend mode.
    ocs.B.SUS_P  = 1;
    ocs.B.SUS    = mode;
    gpt12->OCS.U = ocs.U;
}


#endif /* IFXGPT12_H */