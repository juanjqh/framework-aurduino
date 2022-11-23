/**
 * \file IfxPsi5s.h
 * \brief PSI5S  basic functionality
 * \ingroup IfxLld_Psi5s
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
 * \defgroup IfxLld_Psi5s_Std_Enumerations Enumerations
 * \ingroup IfxLld_Psi5s_Std
 * \defgroup IfxLld_Psi5s_Std_Channel Channel Operative Functions
 * \ingroup IfxLld_Psi5s_Std
 * \defgroup IfxLld_Psi5s_Std_IO IO Pin Configuration Functions
 * \ingroup IfxLld_Psi5s_Std
 * \defgroup IfxLld_Psi5s_Std_Interrupt Interrupt configuration functions
 * \ingroup IfxLld_Psi5s_Std
 * \defgroup IfxLld_Psi5s_Std_Module Module Functions
 * \ingroup IfxLld_Psi5s_Std
 */

#ifndef IFXPSI5S_H
#define IFXPSI5S_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxPsi5s_cfg.h"
#include "_PinMap/IfxPsi5s_PinMap.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "IfxPsi5s_bf.h"
#include "IfxPsi5s_reg.h"
#include "Src/Std/IfxSrc.h"
#include "Scu/Std/IfxScuCcu.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Psi5s_Std_Enumerations
 * \{ */
/** \brief MODULE_PSI5S.IOCR.ALTI:Alternate input
 */
typedef enum
{
    IfxPsi5s_AlternateInput_0 = 0,      /**< \brief Alternate Input 0  */
    IfxPsi5s_AlternateInput_1,          /**< \brief Alternate Input 1  */
    IfxPsi5s_AlternateInput_2,          /**< \brief Alternate Input 2  */
    IfxPsi5s_AlternateInput_3           /**< \brief Alternate Input 3  */
} IfxPsi5s_AlternateInput;

/** \brief MODULE_PSI5S.BG.BR_VALUE:Baudrate prescalar select
 */
typedef enum
{
    IfxPsi5s_AscBaudratePrescalar_divideBy2 = 0,  /**< \brief Divide by 2 is selected for baudrate timer prescalar */
    IfxPsi5s_AscBaudratePrescalar_divideBy3 = 1   /**< \brief Divide by 3 is selected for baudrate timer prescalar */
} IfxPsi5s_AscBaudratePrescalar;

/** \brief MODULE_PSI5S.CON.M:ASC mode of operation
 */
typedef enum
{
    IfxPsi5s_AscMode_sync                     = 0,  /**< \brief Synchronous mode */
    IfxPsi5s_AscMode_async_8bitData           = 1,  /**< \brief Asynchronous mode with 8 bit data */
    IfxPsi5s_AscMode_async_7bitDataWithParity = 3,  /**< \brief Asynchronous mode with 7 bit data with parity */
    IfxPsi5s_AscMode_async_9bitData           = 4,  /**< \brief Asynchronous mode with 9 bit data */
    IfxPsi5s_AscMode_async_8bitDataWithWakeup = 5,  /**< \brief Asynchronous mode with 8 bit data with wakeup */
    IfxPsi5s_AscMode_async_8bitDataWithParity = 7   /**< \brief Asynchronous mode with 8 bit data with parity */
} IfxPsi5s_AscMode;

/** \brief MODULE_PSI5S.CON.STP: Number of stop bits
 */
typedef enum
{
    IfxPsi5s_AscStopBits_1 = 0,      /**< \brief 1 stop bit  */
    IfxPsi5s_AscStopBits_2           /**< \brief 2 stop bit  */
} IfxPsi5s_AscStopBits;

/** \brief PSI5S Channel Id defined in MODULE_PSI5S.RDS.B.CID.
 */
typedef enum
{
    IfxPsi5s_ChannelId_0 = 0,     /**< \brief Ifx_PSI5S Channel 0  */
    IfxPsi5s_ChannelId_1,         /**< \brief Ifx_PSI5S Channel 1  */
    IfxPsi5s_ChannelId_2,         /**< \brief Ifx_PSI5S Channel 2  */
    IfxPsi5s_ChannelId_3,         /**< \brief Ifx_PSI5S Channel 3  */
    IfxPsi5s_ChannelId_4,         /**< \brief Ifx_PSI5S Channel 4  */
    IfxPsi5s_ChannelId_5,         /**< \brief Ifx_PSI5S Channel 5  */
    IfxPsi5s_ChannelId_6,         /**< \brief Ifx_PSI5S Channel 6  */
    IfxPsi5s_ChannelId_7,         /**< \brief Ifx_PSI5S Channel 7  */
    IfxPsi5s_ChannelId_none = -1  /**< \brief None of the Ifx_PSI5S Channels */
} IfxPsi5s_ChannelId;

/** \brief Clock Selection
 */
typedef enum
{
    IfxPsi5s_ClockType_fracDiv    = 0,  /**< \brief Fractional Divide clock */
    IfxPsi5s_ClockType_timeStamp  = 1,  /**< \brief Timestamp clock */
    IfxPsi5s_ClockType_ascFracDiv = 2,  /**< \brief Asc Fractional divider clock */
    IfxPsi5s_ClockType_ascOutput  = 3   /**< \brief Asc output clock */
} IfxPsi5s_ClockType;

/** \brief MODULE_PSI5S.RCRAx.CRCy(x= 0,1,..7:y=0,1,..,5),MODULE_PSI5S.RCRBx.CRCy(x= 0,1,..7:y=0,1,..,5)CRC or parity
 */
typedef enum
{
    IfxPsi5s_CrcOrParity_parity = 0,  /**< \brief parity selection */
    IfxPsi5s_CrcOrParity_crc    = 1   /**< \brief CRC selection */
} IfxPsi5s_CrcOrParity;

/** \brief MODULE_PSI5S.FDR.DM;MODULE_PSI5S.FDRT.B.DM:Divider mode
 */
typedef enum
{
    IfxPsi5s_DividerMode_spb        = 0,  /**< \brief divider mode is off */
    IfxPsi5s_DividerMode_normal     = 1,  /**< \brief divider mode is normal */
    IfxPsi5s_DividerMode_fractional = 2,  /**< \brief divider mode is fractional */
    IfxPsi5s_DividerMode_off        = 3   /**< \brief divider mode is off */
} IfxPsi5s_DividerMode;

/** \brief MODULE_PSI5S.SCRx.EPS(x=0,1,...,7):Enhanced protocol types
 */
typedef enum
{
    IfxPsi5s_EnhancedProtocol_toothGapMethod              = 0,  /**< \brief toothGapMethod Enhanced protocol type */
    IfxPsi5s_EnhancedProtocol_pulseWidth_frameFormat_1to3 = 1,  /**< \brief pulseWidth_frameFormat_1to3 Enhanced protocol type */
    IfxPsi5s_EnhancedProtocol_pulseWidth_frameFormat_4    = 3   /**< \brief pulseWidth_frameFormat_4 Enhanced protocol type */
} IfxPsi5s_EnhancedProtocol;

/** \brief MODULE_PSI5S.RCRAx.FIDS(x=0,1,....,7):.Frame ID updation
 */
typedef enum
{
    IfxPsi5s_FrameId_frameHeader   = 0, /**< \brief Frame ID is updated from packet frame header (Sync mode) */
    IfxPsi5s_FrameId_rollingNumber = 1  /**< \brief Frame ID is a rolling number 0 .. 5 copied from FCNT */
} IfxPsi5s_FrameId;

/** \brief MODULE_PSI5S.GCR.IDT:Idle time bit count
 */
typedef enum
{
    IfxPsi5s_IdleTime_1 = 0,      /**< \brief 1 bit Idle time  */
    IfxPsi5s_IdleTime_2,          /**< \brief 2 bit Idle time  */
    IfxPsi5s_IdleTime_3,          /**< \brief 3 bit Idle time  */
    IfxPsi5s_IdleTime_4,          /**< \brief 4 bit Idle time  */
    IfxPsi5s_IdleTime_5,          /**< \brief 5 bit Idle time  */
    IfxPsi5s_IdleTime_6,          /**< \brief 6 bit Idle time  */
    IfxPsi5s_IdleTime_7,          /**< \brief 7 bit Idle time  */
    IfxPsi5s_IdleTime_8,          /**< \brief 8 bit Idle time  */
    IfxPsi5s_IdleTime_9,          /**< \brief 9 bit Idle time  */
    IfxPsi5s_IdleTime_10,         /**< \brief 10 bit Idle time  */
    IfxPsi5s_IdleTime_11,         /**< \brief 11 bit Idle time  */
    IfxPsi5s_IdleTime_12,         /**< \brief 12 bit Idle time  */
    IfxPsi5s_IdleTime_13,         /**< \brief 13 bit Idle time  */
    IfxPsi5s_IdleTime_14,         /**< \brief 14 bit Idle time  */
    IfxPsi5s_IdleTime_15,         /**< \brief 15 bit Idle time  */
    IfxPsi5s_IdleTime_16          /**< \brief 16 bit Idle time  */
} IfxPsi5s_IdleTime;

/** \brief Messaging bits presence
 */
typedef enum
{
    IfxPsi5s_MessagingBits_absent  = 0, /**< \brief No messaging bits */
    IfxPsi5s_MessagingBits_present = 1  /**< \brief 2 messaging bits */
} IfxPsi5s_MessagingBits;

/** \brief MODULE_PSI5S.NFC.NFx:Expected Psi5s frames
 */
typedef enum
{
    IfxPsi5s_NumberExpectedFrames_1 = 1,      /**< \brief 1 psi5s frame expected  */
    IfxPsi5s_NumberExpectedFrames_2,          /**< \brief 2 psi5s frame expected  */
    IfxPsi5s_NumberExpectedFrames_3,          /**< \brief 3 psi5s frame expected  */
    IfxPsi5s_NumberExpectedFrames_4,          /**< \brief 4 psi5s frame expected  */
    IfxPsi5s_NumberExpectedFrames_5,          /**< \brief 5 psi5s frame expected  */
    IfxPsi5s_NumberExpectedFrames_6           /**< \brief 6 psi5s frame expected  */
} IfxPsi5s_NumberExpectedFrames;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in Ifx_PSI5S.CLC.B.EDIS
 */
typedef enum
{
    IfxPsi5s_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxPsi5s_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxPsi5s_SleepMode;

/** \brief MODULE_PSI5S.TSCNTA.B.TBS;MODULE_PSI5S.TSCNTB.B.TBS:Time base
 */
typedef enum
{
    IfxPsi5s_TimeBase_internal = 0,  /**< \brief Internal time stamp clock */
    IfxPsi5s_TimeBase_external = 1   /**< \brief External GTM inputs */
} IfxPsi5s_TimeBase;

/** \brief MODULE_PSI5S.TSCNTx(x= A,B):Timestamp register
 */
typedef enum
{
    IfxPsi5s_TimestampRegister_a = 0,  /**< \brief Timestamp register A */
    IfxPsi5s_TimestampRegister_b = 1   /**< \brief Timestamp register B */
} IfxPsi5s_TimestampRegister;

/** \brief MODULE_PSI5S.RCRAx.TSTS:Timestamp trigger
 */
typedef enum
{
    IfxPsi5s_TimestampTrigger_syncPulse = 0,  /**< \brief Timestamp trigger on sync pulse */
    IfxPsi5s_TimestampTrigger_frame     = 1   /**< \brief Timestamp trigger on any frame */
} IfxPsi5s_TimestampTrigger;

/** \brief MODULE_PSI5S.TSCNTA.B.ETB;MODULE_PSI5S.TSCNTB.B.ETB:Trigger Id
 */
typedef enum
{
    IfxPsi5s_Trigger_0 = 0,      /**< \brief Trigger 0  */
    IfxPsi5s_Trigger_1,          /**< \brief Trigger 1  */
    IfxPsi5s_Trigger_2,          /**< \brief Trigger 2  */
    IfxPsi5s_Trigger_3,          /**< \brief Trigger 3  */
    IfxPsi5s_Trigger_4,          /**< \brief Trigger 4  */
    IfxPsi5s_Trigger_5,          /**< \brief Trigger 5  */
    IfxPsi5s_Trigger_6,          /**< \brief Trigger 6  */
    IfxPsi5s_Trigger_7           /**< \brief Trigger 7  */
} IfxPsi5s_Trigger;

/** \brief Trigger type defined in
 */
typedef enum
{
    IfxPsi5s_TriggerType_periodic = 0,  /**< \brief Periodic trigger */
    IfxPsi5s_TriggerType_external = 1   /**< \brief External trigger */
} IfxPsi5s_TriggerType;

/** \brief MODULE_PSI5S.RCRAx.UFCY(x=0,1,...7;y=0,1...5):UART frame count
 */
typedef enum
{
    IfxPsi5s_UartFrameCount_3 = 0,      /**< \brief 3 UART frames  */
    IfxPsi5s_UartFrameCount_4,          /**< \brief 4 UART frames  */
    IfxPsi5s_UartFrameCount_5,          /**< \brief 5 UART frames  */
    IfxPsi5s_UartFrameCount_6           /**< \brief 6 UART frames  */
} IfxPsi5s_UartFrameCount;

/** \brief MODULE_PSI5S.RCRAx.WDMS:Watchdog timer mode
 */
typedef enum
{
    IfxPsi5s_WatchdogTimerMode_frame     = 0, /**< \brief Watch Dog Timer is restarted on reception of each recoverable frame (async mode) */
    IfxPsi5s_WatchdogTimerMode_syncPulse = 1  /**< \brief Watch Dog Timer is restarted on Sync Pulse and stopped at reception of the last frame configured in NFC.NFx.(sync mode) */
} IfxPsi5s_WatchdogTimerMode;

/** \} */

/** \addtogroup IfxLld_Psi5s_Std_Channel
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Enable ASC receiver
 * \param psi5s pointer to the PSI5S register space
 * \return None
 */
IFX_EXTERN void IfxPsi5s_enableAscReceiver(Ifx_PSI5S *psi5s);

/** \brief Enable/disable any combination of channel trigger counters selected by mask parameter
 * \param psi5s pointer to the PSI5S register space
 * \param channels specifies the channel trigger counters which should be enabled/disabled
 * \param mask specifies the channel trigger counters which should be modified
 * \return None
 */
IFX_EXTERN void IfxPsi5s_enableDisableChannelTriggerCounters(Ifx_PSI5S *psi5s, uint32 channels, uint32 mask);

/** \brief Enable/disable any combination of channels selected by mask parameter
 * \param psi5s pointer to the PSI5S register space
 * \param channels specifies the channels which should be enabled/disabled
 * \param mask specifies the channels which should be modified
 * \return None
 */
IFX_EXTERN void IfxPsi5s_enableDisableChannels(Ifx_PSI5S *psi5s, uint32 channels, uint32 mask);

/** \brief Start ASC transactions
 * \param psi5s pointer to the PSI5S register space
 * \return None
 */
IFX_EXTERN void IfxPsi5s_startAscTransactions(Ifx_PSI5S *psi5s);

/** \} */

/** \addtogroup IfxLld_Psi5s_Std_IO
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Initializes a CLK output
 * \param clk the CLK Pin which should be configured
 * \param outputMode the pin output mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxPsi5s_initClkPin(const IfxPsi5s_Clk_Out *clk, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Initializes a RX input
 * \param rx the RX Pin which should be configured
 * \param inputMode the pin input mode which should be configured
 * \return None
 */
IFX_INLINE void IfxPsi5s_initRxPin(const IfxPsi5s_Rx_In *rx, IfxPort_InputMode inputMode);

/** \brief Initializes a TX output
 * \param tx the TX Pin which should be configured
 * \param outputMode the pin output mode which should be configured
 * \param padDriver the pad driver mode which should be configured
 * \return None
 */
IFX_INLINE void IfxPsi5s_initTxPin(const IfxPsi5s_Tx_Out *tx, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver);

/** \brief Selects the alternate input for Rx signal
 * \param psi5s pointer to PSI5S registers
 * \param alti alternate input selection of Rx signal
 * \return None
 */
IFX_INLINE void IfxPsi5s_setRxInput(Ifx_PSI5S *psi5s, IfxPsi5s_AlternateInput alti);

/** \} */

/** \addtogroup IfxLld_Psi5s_Std_Module
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief enable / disable sleep mode
 * \param psi5s Pointer to PSI5S register
 * \param mode sleep mode (enable/disable)
 * \return None
 */
IFX_INLINE void IfxPsi5s_setSleepMode(Ifx_PSI5S *psi5s, IfxPsi5s_SleepMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief resets PSI5S kernel
 * \param psi5s pointer to PSI5S registers
 * \return None
 */
IFX_EXTERN void IfxPsi5s_resetModule(Ifx_PSI5S *psi5s);

/** \} */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Get the received psi5s frame for the channel
 * \param psi5s Pointer to PSI5S Module
 * \param channelId channel ID
 * \return Frame Status
 */
IFX_EXTERN boolean IfxPsi5s_getReadFrameStatus(Ifx_PSI5S *psi5s, IfxPsi5s_ChannelId channelId);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxPsi5s_initClkPin(const IfxPsi5s_Clk_Out *clk, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(clk->pin.port, clk->pin.pinIndex, outputMode, clk->select);
    IfxPort_setPinPadDriver(clk->pin.port, clk->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxPsi5s_initRxPin(const IfxPsi5s_Rx_In *rx, IfxPort_InputMode inputMode)
{
    IfxPort_setPinModeInput(rx->pin.port, rx->pin.pinIndex, inputMode);
    IfxPsi5s_setRxInput(rx->module, (IfxPsi5s_AlternateInput)rx->select);
}


IFX_INLINE void IfxPsi5s_initTxPin(const IfxPsi5s_Tx_Out *tx, IfxPort_OutputMode outputMode, IfxPort_PadDriver padDriver)
{
    IfxPort_setPinModeOutput(tx->pin.port, tx->pin.pinIndex, outputMode, tx->select);
    IfxPort_setPinPadDriver(tx->pin.port, tx->pin.pinIndex, padDriver);
}


IFX_INLINE void IfxPsi5s_setRxInput(Ifx_PSI5S *psi5s, IfxPsi5s_AlternateInput alti)
{
    psi5s->IOCR.B.ALTI = alti;
}


IFX_INLINE void IfxPsi5s_setSleepMode(Ifx_PSI5S *psi5s, IfxPsi5s_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    psi5s->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


#endif /* IFXPSI5S_H */