/**
 * \file IfxHssl.h
 * \brief HSSL  basic functionality
 * \ingroup IfxLld_Hssl
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
 * \defgroup IfxLld_Hssl_Std_Enumerations Enumerations
 * \ingroup IfxLld_Hssl_Std
 * \defgroup IfxLld_Hssl_Std_HsctFunctions Hsct Functions
 * \ingroup IfxLld_Hssl_Std
 * \defgroup IfxLld_Hssl_Std_Structures Data Structures
 * \ingroup IfxLld_Hssl_Std
 * \defgroup IfxLld_Hssl_Std_HsslFunctions Hssl Functions
 * \ingroup IfxLld_Hssl_Std
 */

#ifndef IFXHSSL_H
#define IFXHSSL_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxHssl_cfg.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "IfxHssl_reg.h"
#include "IfxHsct_reg.h"
#include "Scu/Std/IfxScuWdt.h"
#include "IfxHssl_bf.h"
#include "IfxHsct_bf.h"
#include "Src/Std/IfxSrc.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Hssl_Std_Enumerations
 * \{ */
/** \brief channel selection
 */
typedef enum
{
    IfxHssl_ChannelId_0,     /**< \brief Channel 0  */
    IfxHssl_ChannelId_1,     /**< \brief Channel 1  */
    IfxHssl_ChannelId_2,     /**< \brief Channel 2  */
    IfxHssl_ChannelId_3      /**< \brief Channel 3  */
} IfxHssl_ChannelId;

/** \brief SysClk / Reference Clock Frequency rate
 * Definition in Ifx_HSCT.INIT.B.SRCF
 */
typedef enum
{
    IfxHssl_ClockFrequencyRate_20Mhz = 0,  /**< \brief SysClk/ RefClk is 20 MHz (Divider 1/1) */
    IfxHssl_ClockFrequencyRate_10Mhz = 1   /**< \brief SysClk/ RefClk is 10 MHz (Divider 1/2) */
} IfxHssl_ClockFrequencyRate;

/** \brief communication command selection
 * Definition in Ifx_HSSL.I.ICON.B.RWT
 */
typedef enum
{
    IfxHssl_Command_noAction     = 0, /**< \brief command no action */
    IfxHssl_Command_readFrame    = 1, /**< \brief command read frame */
    IfxHssl_Command_writeFrame   = 2, /**< \brief command write frame */
    IfxHssl_Command_triggerFrame = 3  /**< \brief command trigger frame */
} IfxHssl_Command;

/** \brief predefined control command payload values
 */
typedef enum
{
    IfxHssl_ControlCommand_ping                  = 0,   /**< \brief ping (send by master. Slave sends back a fixed 32-bit payload result.) */
    IfxHssl_ControlCommand_highSpeedClockStart   = 2,   /**< \brief slave interface clock multiplier start (in preparation for high speed mode) */
    IfxHssl_ControlCommand_highSpeedClockStop    = 4,   /**< \brief slave interface clock multiplier stop (after fallback from high speed mode) */
    IfxHssl_ControlCommand_lowSpeedTransmission  = 8,   /**< \brief select low speed mode for transfers from the Master to the Slave */
    IfxHssl_ControlCommand_highSpeedTransmission = 16,  /**< \brief select high speed mode for transfers from the Master to the Slave */
    IfxHssl_ControlCommand_lowSpeedReception     = 32,  /**< \brief select low speed mode for transfers from the Slave to the Master */
    IfxHssl_ControlCommand_mediumSpeedReception  = 64,  /**< \brief select medium speed mode for transfers from the Slave to the master */
    IfxHssl_ControlCommand_highSpeedReception    = 128, /**< \brief select high speed mode for transfers from the Slave to the master */
    IfxHssl_ControlCommand_enableReception       = 49,  /**< \brief enable Slave interface transmitter */
    IfxHssl_ControlCommand_disableReception      = 50,  /**< \brief disable Slave interface transmitter */
    IfxHssl_ControlCommand_turnOnClockTestMode   = 52,  /**< \brief turn on clock test mode */
    IfxHssl_ControlCommand_turnOffClockTestMode  = 56,  /**< \brief turn off clock test mode */
    IfxHssl_ControlCommand_turnOnPayloadLoopback = 255  /**< \brief turn on payload loopback */
} IfxHssl_ControlCommand;

/** \brief Defines the length of the data in bits of the write and read command.
 * Definition in Ifx_HSSL.I.ICON.B.DATLEN
 */
typedef enum
{
    IfxHssl_DataLength_8bit  = 0,  /**< \brief 8 bit */
    IfxHssl_DataLength_16bit = 1,  /**< \brief 16 bit */
    IfxHssl_DataLength_32bit = 2   /**< \brief 32 bit */
} IfxHssl_DataLength;

/** \brief HSCT interrupt source
 * Definition in Ifx_HSCT.IRQ
 */
typedef enum
{
    IfxHssl_Hsct_InterruptSource_headerError                    = IFX_HSCT_IRQ_HER_OFF,    /**< \brief Header error detected */
    IfxHssl_Hsct_InterruptSource_payloadError                   = IFX_HSCT_IRQ_PYER_OFF,   /**< \brief Payload error detected */
    IfxHssl_Hsct_InterruptSource_commandError                   = IFX_HSCT_IRQ_CER_OFF,    /**< \brief HSCT Command error */
    IfxHssl_Hsct_InterruptSource_interfaceControlFrameSend      = IFX_HSCT_IRQ_IFCFS_OFF,  /**< \brief Interface control frame send */
    IfxHssl_Hsct_InterruptSource_speedModeSwitchError           = IFX_HSCT_IRQ_SMER_OFF,   /**< \brief Speed mode switch error */
    IfxHssl_Hsct_InterruptSource_unsolicitedMessageSendFinished = IFX_HSCT_IRQ_USMSF_OFF,  /**< \brief Unsolicited message frame send finished */
    IfxHssl_Hsct_InterruptSource_pllLockLosterror               = IFX_HSCT_IRQ_PLER_OFF,   /**< \brief Pll lock lost error */
    IfxHssl_Hsct_InterruptSource_UnsolicitedMessageReceived     = IFX_HSCT_IRQ_USM_OFF,    /**< \brief Unsolicited message received */
    IfxHssl_Hsct_InterruptSource_pingAnswerReceived             = IFX_HSCT_IRQ_PAR_OFF,    /**< \brief PING Answer Received */
    IfxHssl_Hsct_InterruptSource_txTransferError                = IFX_HSCT_IRQ_TXTE_OFF,   /**< \brief TX transfer error occurred on a disabled
                                                                                            * TX channel */
    IfxHssl_Hsct_InterruptSource_synchronizationFifoOverflow    = IFX_HSCT_IRQ_SFO_OFF,    /**< \brief Synchronization FIFO overflow (in RX
                                                                                            * direction) */
    IfxHssl_Hsct_InterruptSource_synchronizationFifoUnderflow   = IFX_HSCT_IRQ_SFU_OFF     /**< \brief Synchronization FIFO underflow (in TX
                                                                                            * direction) */
} IfxHssl_Hsct_InterruptSource;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in  Ifx_HSCT.CLC.B.EDIS
 */
typedef enum
{
    IfxHssl_Hsct_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxHssl_Hsct_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxHssl_Hsct_SleepMode;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in Ifx_HSSL.CLC.B.EDIS
 */
typedef enum
{
    IfxHssl_Hssl_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxHssl_Hssl_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxHssl_Hssl_SleepMode;

/** \brief interface mode (master IF /slave IF)
 * Definition in Ifx_HSCT.INIT.B.IFM
 */
typedef enum
{
    IfxHssl_InterfaceMode_master = 0,  /**< \brief master IF mode */
    IfxHssl_InterfaceMode_slave  = 1   /**< \brief slave IF mode */
} IfxHssl_InterfaceMode;

/** \brief master mode receive speed
 * Definition in Ifx_HSCT.IFCTRL.B.MRXSPEED
 */
typedef enum
{
    IfxHssl_MasterModeRxSpeed_lowSpeed    = 0,  /**< \brief low speed */
    IfxHssl_MasterModeRxSpeed_mediumSpeed = 1,  /**< \brief medium speed */
    IfxHssl_MasterModeRxSpeed_highSpeed   = 2   /**< \brief high speed */
} IfxHssl_MasterModeRxSpeed;

/** \brief master mode transmit speed
 * Definition in Ifx_HSCT.IFCTRL.B.MTXSPEED
 */
typedef enum
{
    IfxHssl_MasterModeTxSpeed_lowSpeed  = 0, /**< \brief low speed */
    IfxHssl_MasterModeTxSpeed_highSpeed = 2  /**< \brief high speed */
} IfxHssl_MasterModeTxSpeed;

/** \brief PLL reference clock
 * Definition in Ifx_HSCT.CONFIGPHY.B.OSCCLKEN
 */
typedef enum
{
    IfxHssl_PllReferenceClock_hsctSystemClockInput = 0,  /**< \brief hsct system clock input (HSCT SysClk_i) */
    IfxHssl_PllReferenceClock_oscillatorInput      = 1   /**< \brief oscillator input */
} IfxHssl_PllReferenceClock;

/** \brief streaming mode ( single / continuous )
 * Definition in Ifx_HSSL.CFG.B.SMT/SMR
 */
typedef enum
{
    IfxHssl_StreamingMode_continuous = 0,  /**< \brief streaming mode continuous (with two memory blocks) */
    IfxHssl_StreamingMode_single     = 1   /**< \brief streaming mode single (with one memory block) */
} IfxHssl_StreamingMode;

/** \} */

/** \brief HSSL channel error interrupt source, which triggers the ERR interrupt
 * Definition in Ifx_HSSL.MFLAGS
 */
typedef enum
{
    IfxHssl_Hssl_ERRInterruptSource_notAcknowledgeError = IFX_HSSL_MFLAGS_NACK_OFF,      /**< \brief NACK error (triggers ERR interrupt) */
    IfxHssl_Hssl_ERRInterruptSource_transactionTagError = IFX_HSSL_MFLAGS_TTE_OFF,       /**< \brief Transaction Tag Error (triggers ERR interrupt) */
    IfxHssl_Hssl_ERRInterruptSource_timeoutError        = IFX_HSSL_MFLAGS_TIMEOUT_OFF,   /**< \brief Timeout error (triggers ERR interrupt) */
    IfxHssl_Hssl_ERRInterruptSource_unexpectedError     = IFX_HSSL_MFLAGS_UNEXPECTED_OFF /**< \brief Unexpected error (triggers ERR interrupt) */
} IfxHssl_Hssl_ERRInterruptSource;

/** \brief HSSL global error interrupt source, which triggers the EXI interrupt
 * Definition in Ifx_HSSL.MFLAGS
 */
typedef enum
{
    IfxHssl_Hssl_EXIInterruptSource_memoryAccessViolation  = IFX_HSSL_MFLAGS_MAV_OFF,   /**< \brief Memory Access Violation error (triggers EXI interrupt) */
    IfxHssl_Hssl_EXIInterruptSource_busAccessError         = IFX_HSSL_MFLAGS_SRIE_OFF,  /**< \brief SRI/SPB Bus Access Error (triggers EXI interrupt) */
    IfxHssl_Hssl_EXIInterruptSource_channelNumberCodeError = IFX_HSSL_MFLAGS_PIE1_OFF,  /**< \brief PHY Inconsistency Error 1 (Channel Number
                                                                                         * Code Error,  triggers EXI interrupt) */
    IfxHssl_Hssl_EXIInterruptSource_dataLengthError        = IFX_HSSL_MFLAGS_PIE2_OFF,  /**< \brief PHY Inconsistency Error 2 (Data Length Error, triggers EXI interrupt) */
    IfxHssl_Hssl_EXIInterruptSource_crcError               = IFX_HSSL_MFLAGS_CRCE_OFF   /**< \brief CRC error (triggers EXI interrupt) */
} IfxHssl_Hssl_EXIInterruptSource;

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Hssl_Std_Structures
 * \{ */
/** \brief HSCT module handle
 */
typedef struct
{
    Ifx_HSCT *hsct;     /**< \brief pointer to HSCT registers */
} IfxHssl_Hsct;

/** \brief Configuration structure of the HSCT module
 */
typedef struct
{
    Ifx_HSCT             *hsct;              /**< \brief pointer to HSCT registers */
    IfxHssl_InterfaceMode interfaceMode;     /**< \brief interface mode (master IF /slave IF) */
    boolean               highSpeedMode;     /**< \brief high speed mode selection */
} IfxHssl_Hsct_Config;

/** \} */

/** \addtogroup IfxLld_Hssl_Std_HsctFunctions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Clears the HSCT interrupt flag
 * \param hsct pointer to HSCT registers
 * \param source HSCT interrupt source
 * \return None
 */
IFX_INLINE void IfxHssl_clearHsctInterruptFlag(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source);

/** \brief Enables HSCT interrupt flag
 * \param hsct pointer to HSCT registers
 * \param source HSCT interrupt source
 * \return None
 */
IFX_INLINE void IfxHssl_disableHsctInterruptFlag(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source);

/** \brief Enables HSCT interrupt
 * \param hsct pointer to HSCT registers
 * \param typeOfService Type of Service (Cpu or DMA)
 * \param priority Priority of the interrupt
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsctInterrupt(Ifx_HSCT *hsct, IfxSrc_Tos typeOfService, uint16 priority);

/** \brief Enables HSCT interrupt flag
 * \param hsct pointer to HSCT registers
 * \param source HSCT interrupt source
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsctInterruptFlag(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source);

/** \brief Returns the HSCT interrupt flag status
 * \param hsct pointer to HSCT registers
 * \param source HSCT interrupt source
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxHssl_getHsctInterruptFlagStatus(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source);

/** \brief Sets the sensitivity of the module to sleep signal
 * \param hsct pointer to HSCT registers
 * \param mode mode selection (enable/disable)
 * \return None
 */
IFX_INLINE void IfxHssl_setHsctSleepMode(Ifx_HSCT *hsct, IfxHssl_Hsct_SleepMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Enables hsct module
 * \param hsct pointer to HSCT registers
 * \return None
 */
IFX_EXTERN void IfxHssl_enableHsctModule(Ifx_HSCT *hsct);

/** \brief Returns the SRC pointer for HSCT
 * \param hsct pointer to HSCT registers
 * \return SRC pointer for HSCT
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxHssl_getHsctSrcPointer(Ifx_HSCT *hsct);

/** \} */

/** \addtogroup IfxLld_Hssl_Std_HsslFunctions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Clears the HSSl channel error interrupt flag
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \param channelId HSSL channel number
 * \return None
 */
IFX_INLINE void IfxHssl_clearHsslChannelErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId);

/** \brief Clears the HSSl global error interrupt flag
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \return None
 */
IFX_INLINE void IfxHssl_clearHsslGlobalErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source);

/** \brief Enables the HSSl channel error interrupt flag, which trggers the ERR interrupt
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \param channelId HSSL channel number
 * \return None
 */
IFX_INLINE void IfxHssl_disableHsslChannelErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId);

/** \brief Disables the HSSl channel error interrupt flag, which trggers the EXI interrupt
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \return None
 */
IFX_INLINE void IfxHssl_disableHsslGlobalErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source);

/** \brief Enables HSSL COK interrupt of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \param typeOfService Type of Service (Cpu or DMA)
 * \param priority Priority of the interrupt
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsslCOKInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority);

/** \brief Enables the HSSl channel error interrupt flag, which trggers the ERR interrupt
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \param channelId HSSL channel number
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsslChannelErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId);

/** \brief Enables HSSL ERR interrupt of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \param typeOfService Type of Service (Cpu or DMA)
 * \param priority Priority of the interrupt
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsslERRInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority);

/** \brief Enables HSSL EXI interrupt of specified channel
 * \param hssl pointer to HSSl registers
 * \param typeOfService Type of Service (Cpu or DMA)
 * \param priority Priority of the interrupt
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsslEXIInterrupt(Ifx_HSSL *hssl, IfxSrc_Tos typeOfService, uint16 priority);

/** \brief Enables the HSSl global error interrupt flag, which trggers the EXI interrupt
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsslGlobalErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source);

/** \brief Enables HSSL RDI interrupt of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \param typeOfService Type of Service (Cpu or DMA)
 * \param priority Priority of the interrupt
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsslRDIInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority);

/** \brief Enables HSSL TRG interrupt of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \param typeOfService Type of Service (Cpu or DMA)
 * \param priority Priority of the interrupt
 * \return None
 */
IFX_INLINE void IfxHssl_enableHsslTRGInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority);

/** \brief Clears the HSSl channel error interrupt flag
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \param channelId HSSL channel number
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxHssl_getHsslChannelErrorInterruptFlagStatus(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId);

/** \brief Clears the HSSl global error interrupt flag
 * \param hssl pointer to HSSl registers
 * \param source HSSL channel error interrupt source
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxHssl_getHsslGloabalErrorInterruptFlagStatus(Ifx_HSSL *hssl, IfxHssl_Hssl_EXIInterruptSource source);

/** \brief Sets the sensitivity of the module to sleep signal
 * \param hssl pointer to HSSL registers
 * \param mode mode selection (enable/disable)
 * \return None
 */
IFX_INLINE void IfxHssl_setHsslSleepMode(Ifx_HSSL *hssl, IfxHssl_Hssl_SleepMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Enables the hssl module
 * \param hssl pointer to HSSl registers
 * \return None
 */
IFX_EXTERN void IfxHssl_enableHsslModule(Ifx_HSSL *hssl);

/** \brief Returns the SRC pointer for HSSL COK of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \return SRC pointer for HSSL COK interrupt of specific channel
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxHssl_getHsslCOKSrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId);

/** \brief Returns the SRC pointer for HSSL ERR of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \return SRC pointer for HSSL ERR interrupt of specific channel
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxHssl_getHsslERRSrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId);

/** \brief Returns the SRC pointer for HSSL EXI interrupt
 * \param hssl pointer to HSSl registers
 * \return SRC pointer for HSSL EXI interrupt
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxHssl_getHsslEXISrcPointer(Ifx_HSSL *hssl);

/** \brief Returns the SRC pointer for HSSL COK of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \return SRC pointer for HSSL RDI interrupt of specific channel
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxHssl_getHsslRDISrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId);

/** \brief Returns the SRC pointer for HSSL TRG of specified channel
 * \param hssl pointer to HSSl registers
 * \param channelId HSSL channel number
 * \return SRC pointer for HSSL TRG interrupt of specific channel
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxHssl_getHsslTRGSrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId);

/** \brief resets the HSSL kernel
 * \param hssl pointer to HSSL registers
 * \return None
 */
IFX_EXTERN void IfxHssl_resetHsslKernel(Ifx_HSSL *hssl);

/** \} */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief resets HSCT kernel
 * \param hsct pointer to HSCT registers
 * \return None
 */
IFX_EXTERN void IfxHssl_resetHsctKernel(Ifx_HSCT *hsct);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxHssl_clearHsctInterruptFlag(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source)
{
    uint32 value = 1 << source;
    hsct->IRQCLR.U &= ~value;
}


IFX_INLINE void IfxHssl_clearHsslChannelErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId)
{
    uint32 value = 1 << ((uint32)(channelId + source));
    hssl->MFLAGSCL.U &= ~value;
}


IFX_INLINE void IfxHssl_clearHsslGlobalErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source)
{
    uint32 value = 1 << source;
    hssl->MFLAGSCL.U &= ~value;
}


IFX_INLINE void IfxHssl_disableHsctInterruptFlag(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source)
{
    uint32 value = 1 << source;
    hsct->IRQEN.U &= ~value;
}


IFX_INLINE void IfxHssl_disableHsslChannelErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId)
{
    uint32 value = 1 << ((uint32)(channelId + source));
    hssl->MFLAGSEN.U &= ~value;
}


IFX_INLINE void IfxHssl_disableHsslGlobalErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source)
{
    uint32 value = 1 << source;
    hssl->MFLAGSEN.U &= ~value;
}


IFX_INLINE void IfxHssl_enableHsctInterrupt(Ifx_HSCT *hsct, IfxSrc_Tos typeOfService, uint16 priority)
{
    volatile Ifx_SRC_SRCR *src;
    src = IfxHssl_getHsctSrcPointer(hsct);
    IfxSrc_init(src, typeOfService, priority);
    IfxSrc_enable(src);
}


IFX_INLINE void IfxHssl_enableHsctInterruptFlag(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source)
{
    uint32 value = 1 << source;
    hsct->IRQEN.U |= value;
}


IFX_INLINE void IfxHssl_enableHsslCOKInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority)
{
    volatile Ifx_SRC_SRCR *src;
    src = IfxHssl_getHsslCOKSrcPointer(hssl, channelId);
    IfxSrc_init(src, typeOfService, priority);
    IfxSrc_enable(src);
}


IFX_INLINE void IfxHssl_enableHsslChannelErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId)
{
    uint32 value = 1 << ((uint32)(channelId + source));
    hssl->MFLAGSEN.U |= value;
}


IFX_INLINE void IfxHssl_enableHsslERRInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority)
{
    volatile Ifx_SRC_SRCR *src;
    src = IfxHssl_getHsslERRSrcPointer(hssl, channelId);
    IfxSrc_init(src, typeOfService, priority);
    IfxSrc_enable(src);
}


IFX_INLINE void IfxHssl_enableHsslEXIInterrupt(Ifx_HSSL *hssl, IfxSrc_Tos typeOfService, uint16 priority)
{
    volatile Ifx_SRC_SRCR *src;
    src = IfxHssl_getHsslEXISrcPointer(hssl);
    IfxSrc_init(src, typeOfService, priority);
    IfxSrc_enable(src);
}


IFX_INLINE void IfxHssl_enableHsslGlobalErrorInterruptFlag(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source)
{
    uint32 value = 1 << source;
    hssl->MFLAGSEN.U |= value;
}


IFX_INLINE void IfxHssl_enableHsslRDIInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority)
{
    volatile Ifx_SRC_SRCR *src;
    src = IfxHssl_getHsslRDISrcPointer(hssl, channelId);
    IfxSrc_init(src, typeOfService, priority);
    IfxSrc_enable(src);
}


IFX_INLINE void IfxHssl_enableHsslTRGInterrupt(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId, IfxSrc_Tos typeOfService, uint16 priority)
{
    volatile Ifx_SRC_SRCR *src;
    src = IfxHssl_getHsslTRGSrcPointer(hssl, channelId);
    IfxSrc_init(src, typeOfService, priority);
    IfxSrc_enable(src);
}


IFX_INLINE boolean IfxHssl_getHsctInterruptFlagStatus(Ifx_HSCT *hsct, IfxHssl_Hsct_InterruptSource source)
{
    return (hsct->IRQ.U >> source) & 0x1;
}


IFX_INLINE boolean IfxHssl_getHsslChannelErrorInterruptFlagStatus(Ifx_HSSL *hssl, IfxHssl_Hssl_ERRInterruptSource source, IfxHssl_ChannelId channelId)
{
    return (hssl->MFLAGS.U >> ((uint32)(channelId + source))) & 0x1;
}


IFX_INLINE boolean IfxHssl_getHsslGloabalErrorInterruptFlagStatus(Ifx_HSSL *hssl, IfxHssl_Hssl_EXIInterruptSource source)
{
    return (hssl->MFLAGS.U >> source) & 0x1;
}


IFX_INLINE void IfxHssl_setHsctSleepMode(Ifx_HSCT *hsct, IfxHssl_Hsct_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    hsct->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


IFX_INLINE void IfxHssl_setHsslSleepMode(Ifx_HSSL *hssl, IfxHssl_Hssl_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    hssl->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


#endif /* IFXHSSL_H */
