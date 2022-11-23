/**
 * \file IfxGtm_Psm.h
 * \brief GTM  basic functionality
 * \ingroup IfxLld_Gtm
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
 *
 * This Module provides the standard interfaces to manipulate and read PSM sub-module registers in GTM.
 * This Module can be used to abstract the register names and addressing from higher layer software code.
 * PSM includes:
 * FIFO, A2F (AEI to FIFO) and F2A (FIFO to ARU) Interfaces.
 *
 * \defgroup IfxLld_Gtm_Std_Psm Psm Basic Functionality
 * \ingroup IfxLld_Gtm_Std
 * \defgroup IfxLld_Gtm_Std_Psm_Default PSM Data Structures
 * \ingroup IfxLld_Gtm_Std_Psm
 * \defgroup IfxLld_Gtm_Std_Psm_Default PSM Enumerations
 * \ingroup IfxLld_Gtm_Std_Psm
 * \defgroup IfxLld_Gtm_Std_Psm_Default PSM Functions
 * \ingroup IfxLld_Gtm_Std_Psm
 */

#ifndef IFXGTM_PSM_H
#define IFXGTM_PSM_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxGtm_cfg.h"
#include "IfxGtm.h"
#include "_Impl/IfxGtm_cfg.h"
#include "_Utilities/Ifx_Assert.h"
#include "Src/Std/IfxSrc.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gtm_Std_Psm_Default
 * \{ */
/** \brief Enumeration list for modes of FIFO operation.\n
 * Definition in FIFO_CH_CTRL.RBM
 */
typedef enum
{
    IfxGtm_Psm_FifoChannelMode_normal     = 0, /**< \brief normal mode of operation */
    IfxGtm_Psm_FifoChannelMode_ringBuffer = 1  /**< \brief Ring Buffer Mode */
} IfxGtm_Psm_FifoChannelMode;

/** \} */

/** \brief Enumeration listing the F2A streams
 */
typedef enum
{
    IfxGtm_Psm_F2aStream_0,     /**< \brief F2A Stream 0  */
    IfxGtm_Psm_F2aStream_1,     /**< \brief F2A Stream 1  */
    IfxGtm_Psm_F2aStream_2,     /**< \brief F2A Stream 2  */
    IfxGtm_Psm_F2aStream_3,     /**< \brief F2A Stream 3  */
    IfxGtm_Psm_F2aStream_4,     /**< \brief F2A Stream 4  */
    IfxGtm_Psm_F2aStream_5,     /**< \brief F2A Stream 5  */
    IfxGtm_Psm_F2aStream_6,     /**< \brief F2A Stream 6  */
    IfxGtm_Psm_F2aStream_7      /**< \brief F2A Stream 7  */
} IfxGtm_Psm_F2aStream;

/** \brief Enumeration lisitng the enabled/disabled state of the F2A channel streams.
 */
typedef enum
{
    IfxGtm_Psm_F2aStreamState_readDisabled = 0,  /**< \brief Read as disabled. */
    IfxGtm_Psm_F2aStreamState_disabled     = 1,  /**< \brief Stream disabled and states reset */
    IfxGtm_Psm_F2aStreamState_enabled      = 2,  /**< \brief Stream enabled */
    IfxGtm_Psm_F2aStreamState_readEnabled  = 3   /**< \brief Read as enabled. */
} IfxGtm_Psm_F2aStreamState;

/** \brief Enumeration listing the transfer direction of the F2a Streams.
 * Definition in F2A_CH_STR_CFG.B.DIR
 */
typedef enum
{
    IfxGtm_Psm_F2aTransferDirection_aruToFifo = 0,  /**< \brief ARU to FIFO transfer */
    IfxGtm_Psm_F2aTransferDirection_fifoToAru = 1   /**< \brief FIFO to ARU transfer */
} IfxGtm_Psm_F2aTransferDirection;

/** \brief Enumeration listing the Transfer Mode of the F2A.
 * Definition in F2A_CH_STR_CFG.TMODE
 */
typedef enum
{
    IfxGtm_Psm_F2aTransferMode_transferLowWord   = 0, /**< \brief Transfer ARU bits 23:0 from/to FIFO */
    IfxGtm_Psm_F2aTransferMode_transferHighWord  = 1, /**< \brief Transfer ARU bits 47:24 from/to FIFO */
    IfxGtm_Psm_F2aTransferMode_transferBothWords = 2  /**< \brief Transfer Both words from/to FIFO */
} IfxGtm_Psm_F2aTransferMode;

/** \brief Enumeration lisiting Fifo Channels
 */
typedef enum
{
    IfxGtm_Psm_FifoChannel_0,     /**< \brief FIFO  Channel 0  */
    IfxGtm_Psm_FifoChannel_1,     /**< \brief FIFO  Channel 1  */
    IfxGtm_Psm_FifoChannel_2,     /**< \brief FIFO  Channel 2  */
    IfxGtm_Psm_FifoChannel_3,     /**< \brief FIFO  Channel 3  */
    IfxGtm_Psm_FifoChannel_4,     /**< \brief FIFO  Channel 4  */
    IfxGtm_Psm_FifoChannel_5,     /**< \brief FIFO  Channel 5  */
    IfxGtm_Psm_FifoChannel_6,     /**< \brief FIFO  Channel 6  */
    IfxGtm_Psm_FifoChannel_7      /**< \brief FIFO  Channel 7  */
} IfxGtm_Psm_FifoChannel;

/** \brief Enumeration list of the DMA direction in hysteresis modes.\n
 * definition in FIFO_CH_IRQ_MODE.DMA_HYST_DIR
 */
typedef enum
{
    IfxGtm_Psm_FifoChannelDmaHystDir_read  = 0, /**< \brief read direction */
    IfxGtm_Psm_FifoChannelDmaHystDir_write = 1  /**< \brief write */
} IfxGtm_Psm_FifoChannelDmaHystDir;

/** \brief Interrupts of the Fifo Channel
 */
typedef enum
{
    IfxGtm_Psm_FifoChannelInterrupt_empty   = 0,  /**< \brief empty Fifo Channel */
    IfxGtm_Psm_FifoChannelInterrupt_full    = 1,  /**< \brief full fifo channel */
    IfxGtm_Psm_FifoChannelInterrupt_lowerWm = 2,  /**< \brief Lower watermark reached */
    IfxGtm_Psm_FifoChannelInterrupt_upperWm = 3   /**< \brief Upper watermark reached, */
} IfxGtm_Psm_FifoChannelInterrupt;

/** \brief Enumeration listing the Fifo Channel Status.\n
 * Definition in FIFO_CH_STATUS register.
 */
typedef enum
{
    IfxGtm_Psm_FifoChannelStatus_empty   = 0,  /**< \brief empty */
    IfxGtm_Psm_FifoChannelStatus_full    = 1,  /**< \brief full */
    IfxGtm_Psm_FifoChannelStatus_lowerWm = 2,  /**< \brief Lower Watermark reached */
    IfxGtm_Psm_FifoChannelStatus_upperWm = 3,  /**< \brief Upper Watermark reached */
    IfxGtm_Psm_FifoChannelStatus_normal  = 4   /**< \brief normal running status */
} IfxGtm_Psm_FifoChannelStatus;

/** \brief List of mode of interrupt
 * Definition in FIFO_CH_IRQ_MODE.IRQ_MODE
 */
typedef enum
{
    IfxGtm_Psm_InterruptMode_level       = 0,  /**< \brief level mode */
    IfxGtm_Psm_InterruptMode_pulse       = 1,  /**< \brief pulse mode */
    IfxGtm_Psm_InterruptMode_pulseNotify = 2,  /**< \brief pulse notify mode */
    IfxGtm_Psm_InterruptMode_singlePulse = 3   /**< \brief single pulse mode */
} IfxGtm_Psm_InterruptMode;

/** \addtogroup IfxLld_Gtm_Std_Psm_Default
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief sets the mode of operation of FIFO
 * \param fifo Fifo Object
 * \param channel Fifo Channel
 * \param mode Fifo Channel mode
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_setChannelMode(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelMode mode);

/** \} */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief get the Pointer to the Fifo Channel SFR
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Pointer to the FIFO channel SFR
 */
IFX_INLINE Ifx_GTM_PSM_FIFO_CH *IfxGtm_Psm_Fifo_getChannelPointer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get pointer to the FIFO object SFR block
 * \param fifo fifo object
 * \return Pointer to the FIFO SFR
 */
IFX_INLINE Ifx_GTM_PSM_FIFO *IfxGtm_Psm_Fifo_getPointer(IfxGtm_Psm_Fifo fifo);

/** \brief Flush the contents of the specified Fifo Channel.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_flushChannelFifo(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief Unlock the direct RAM access to the FIFO specified.
 * This control bit applies RAM write access to all channels of the specified FIFO.
 * \param fifo fifo object
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_enableRamAccess(IfxGtm_Psm_Fifo fifo);

/** \brief Disable Direct RAM access to the specified Fifo.
 * The setting is applicable to all channels of specified Fifo.
 * \param fifo fifo object
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_disableRamAccess(IfxGtm_Psm_Fifo fifo);

/** \brief get the logical start address of the Fifo Channel.
 * The address range is 0 - (IFXGTM_PSM_FIFORAMSIZE-1).
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return start address of fifo channel
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelStartAddress(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the logical end address of the Fifo Channel.
 * The address range is 0 - (IFXGTM_PSM_FIFORAMSIZE-1).
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return end address of the fifo channel
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelEndAddress(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the RAM size usage of the specified FIFO channel.
 * Returns the value : (END_ADDRESS - START_ADDRESS) + 1
 * Each unit is 29 bits wide.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return size of the Fifo Channel
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelSize(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the Fill level of the Fifo Channel specified.
 * The Fill level is in range: 0 < Level <= ( (END_ADDRESS - START_ADDRESS) + 1 )
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Fill level of the Fifo channel
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelFillLevel(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief Get the upper watermark level of the Fifo Channel.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Upper Watermark
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelUpperWatermark(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief Get the Lower watermark level of the Fifo Channel.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Lower Watermark
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelLowerWatermark(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the write pointer of the specified Fifo Channel
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Write Pointer
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelWritePtr(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the read pointer of the specified Fifo Channel
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Read Pointer
 */
IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelReadPtr(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the Status of Interrupt raised.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Interrupt Status
 */
IFX_INLINE boolean IfxGtm_Psm_Fifo_getChannelInterruptStatus(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelInterrupt interrupt);

/** \brief set the mode of interrupt
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param irqmode Interrupt Mode
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_setChannelInterruptMode(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_InterruptMode irqmode);

/** \brief set the mode of DMA hysteresis.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param enabled DMA hysteresis enable
 * \param dir direction
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_setChannelDmaHystMode(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, boolean enabled, IfxGtm_Psm_FifoChannelDmaHystDir dir);

/** \brief clear the interrupt of specified type.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_clearChannelInterrupt(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelInterrupt interrupt);

/** \brief clear all the interrupts for the Fifo Channel
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Fifo_clearAllChannelInterrupts(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the pointer to the F2A of the specified Fifo object.
 * \param f2a f2a object
 * \return pointer to f2a object sfr
 */
IFX_INLINE Ifx_GTM_PSM_F2A *IfxGtm_Psm_F2a_getPointer(IfxGtm_Psm_F2a f2a);

/** \brief set the ARU read address of the specified F2A stream
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \param address ARU read address
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_F2a_setAruReadAddress(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream, uint32 address);

/** \brief set the Transfer Mode of the F2A stream.
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \param mode transfer mode
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_F2a_setTransferMode(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream, IfxGtm_Psm_F2aTransferMode mode);

/** \brief get the Transfer mode of the specified F2A stream.
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \return transfer mode
 */
IFX_INLINE IfxGtm_Psm_F2aTransferMode IfxGtm_Psm_F2a_getTransferMode(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream);

/** \brief set the transfer direction of the F2A stream.
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \param dir transfer direction
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_F2a_setTransferDirection(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream, IfxGtm_Psm_F2aTransferDirection dir);

/** \brief get the transfer direction of the F2A stream.
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \return transfer direction
 */
IFX_INLINE IfxGtm_Psm_F2aTransferDirection IfxGtm_Psm_F2a_getTransferDirection(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream);

/** \brief get the SRC pointer for the specified FIFO channel.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return SRC pointer
 */
IFX_INLINE Ifx_SRC_SRCR *IfxGtm_Psm_Fifo_getChannelSrcPointer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief get the Pointer to the AFD buffer for Fifo channel.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return afd channel pointer
 */
IFX_INLINE Ifx_GTM_PSM_AFD_CH *IfxGtm_Psm_Afd_getChannelPointer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief write the data into the Buffer access register of specified Fifo Channel
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param data data to be written
 * \return None
 */
IFX_INLINE void IfxGtm_Psm_Afd_writeChannelBuffer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, uint32 data);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Set the logical end address for the specified Fifo Channel.
 * The address range is 0 - (IFXGTM_PSM_FIFORAMSIZE - 1).
 * END address should be in range: START address<address<IFXGTM_PSM_FIFORAMSIZE
 *
 * Caution: A modification of the address will flush the corresponding Fifo Channel.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param address End address of Fifo Channel
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_setChannelEndAddress(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, uint32 address);

/** \brief Set the logical start address for the specified Fifo Channel.
 * The address range is 0 - (IFXGTM_PSM_FIFORAMSIZE - 1).
 * START address should be in range: 0<address<IFXGTM_PSM_FIFORAMSIZE
 *
 * Caution: A modification of the address will flush the corresponding Fifo Channel.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param address Start address of Fifo Channel
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_setChannelStartAddress(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, uint32 address);

/** \brief set the RAM size of the specified FIFO channel.
 * The RAM size should be in range: 0 - ((IFXGTM_PSM_FIFORAMSIZE - START address) + 1)
 * Caution: This will modify the END address of the Fifo Channel RAM.
 * This will also flush the FIFO as the END address gets modified.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param size size of Fifo Channel
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_setChannelSize(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, uint32 size);

/** \brief set the upper watermark of the specified Fifo Channel.
 * Upper watermark must be in range: 0 < addr < (END_ADDRESS - START_ADDRESS)
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param upperWm Upper Watermark level
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_setChannelUpperWatermark(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, uint32 upperWm);

/** \brief set the upper watermark of the specified Fifo Channel.
 * Upper watermark must be in range: 0 < addr < (END_ADDRESS - START_ADDRESS)
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param lowerWm Lower Watermark level
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_setChannelLowerWatermark(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, uint32 lowerWm);

/** \brief get the Status of the Fifo Channel.
 * Returns either Full, Empty, Upper WM or Lower WM reached status.
 * If none of the above, it will return "normal" status.
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return Status of the Fifo Channel
 */
IFX_EXTERN IfxGtm_Psm_FifoChannelStatus IfxGtm_Psm_Fifo_getChannelStatus(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel);

/** \brief enable the interrupt type
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_enableChannelInterrupt(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelInterrupt interrupt);

/** \brief disable the interrupt for Fifo Channel
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_disableChannelInterrupt(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelInterrupt interrupt);

/** \brief forces the Interrupt from Fifo Channel
 * \param fifo fifo object
 * \param channel Fifo Channel
 * \param interrupt interrupt type
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_Fifo_setChannelInterrupt(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelInterrupt interrupt);

/** \brief enable the selected stream of the F2A.
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_F2a_enableStream(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream);

/** \brief disables the specified stream of the F2A
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \return None
 */
IFX_EXTERN void IfxGtm_Psm_F2a_disableStream(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream);

/** \brief get the state of the specified fifo stream.
 * \param f2a f2a object number
 * \param f2aStream f2a stream number
 * \return stream state
 */
IFX_EXTERN IfxGtm_Psm_F2aStreamState IfxGtm_Psm_F2a_getStreamState(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxGtm_Psm_Fifo_setChannelMode(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelMode mode)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    fifoCh->CTRL.B.RBM = (uint32)mode;
}


IFX_INLINE Ifx_GTM_PSM_FIFO_CH *IfxGtm_Psm_Fifo_getChannelPointer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    return (Ifx_GTM_PSM_FIFO_CH *)&(MODULE_GTM.PSM[fifo].FIFO.CH[channel]);
}


IFX_INLINE Ifx_GTM_PSM_FIFO *IfxGtm_Psm_Fifo_getPointer(IfxGtm_Psm_Fifo fifo)
{
    return (Ifx_GTM_PSM_FIFO *)&(MODULE_GTM.PSM[fifo].FIFO);
}


IFX_INLINE void IfxGtm_Psm_Fifo_flushChannelFifo(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    fifoCh->CTRL.B.FLUSH = (uint32)1;
}


IFX_INLINE void IfxGtm_Psm_Fifo_enableRamAccess(IfxGtm_Psm_Fifo fifo)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, (IfxGtm_Psm_FifoChannel)0);
    fifoCh->CTRL.B.WULOCK = (uint32)1;
}


IFX_INLINE void IfxGtm_Psm_Fifo_disableRamAccess(IfxGtm_Psm_Fifo fifo)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, (IfxGtm_Psm_FifoChannel)0);
    fifoCh->CTRL.B.WULOCK = (uint32)0;
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelStartAddress(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    return (uint32)fifoCh->START_ADDR.B.ADDR;
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelEndAddress(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    return (uint32)fifoCh->END_ADDR.B.ADDR;
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelSize(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    return (uint32)(((uint32)fifoCh->END_ADDR.B.ADDR - (uint32)fifoCh->START_ADDR.B.ADDR) + (uint32)1);
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelFillLevel(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    return (uint32)fifoCh->FILL_LEVEL.B.LEVEL;
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelUpperWatermark(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    return (uint32)fifoCh->UPPER_WM.B.ADDR;
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelLowerWatermark(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    return (uint32)fifoCh->LOWER_WM.B.ADDR;
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelWritePtr(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);

    return (uint32)fifoCh->WR_PTR.B.ADDR;
}


IFX_INLINE uint32 IfxGtm_Psm_Fifo_getChannelReadPtr(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);

    return (uint32)fifoCh->RD_PTR.B.ADDR;
}


IFX_INLINE boolean IfxGtm_Psm_Fifo_getChannelInterruptStatus(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelInterrupt interrupt)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh     = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    uint32               irq_notify = (uint32)fifoCh->IRQ.NOTIFY.U;
    return ((irq_notify >> interrupt) & (uint32)1) == (uint32)1;
}


IFX_INLINE void IfxGtm_Psm_Fifo_setChannelInterruptMode(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_InterruptMode irqmode)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    fifoCh->IRQ.MODE.B.IRQ_MODE = irqmode;
}


IFX_INLINE void IfxGtm_Psm_Fifo_setChannelDmaHystMode(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, boolean enabled, IfxGtm_Psm_FifoChannelDmaHystDir dir)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    fifoCh->IRQ.MODE.B.DMA_HYSTERESIS = (uint32)enabled;
    fifoCh->IRQ.MODE.B.DMA_HYST_DIR   = (uint32)dir;
}


IFX_INLINE void IfxGtm_Psm_Fifo_clearChannelInterrupt(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, IfxGtm_Psm_FifoChannelInterrupt interrupt)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    fifoCh->IRQ.NOTIFY.U |= ((uint32)1 << (uint32)interrupt);
}


IFX_INLINE void IfxGtm_Psm_Fifo_clearAllChannelInterrupts(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    Ifx_GTM_PSM_FIFO_CH *fifoCh = IfxGtm_Psm_Fifo_getChannelPointer(fifo, channel);
    fifoCh->IRQ.NOTIFY.U |= (uint32)0xFu;
}


IFX_INLINE Ifx_GTM_PSM_F2A *IfxGtm_Psm_F2a_getPointer(IfxGtm_Psm_F2a f2a)
{
    return (Ifx_GTM_PSM_F2A *)&(MODULE_GTM.PSM[f2a].F2A);
}


IFX_INLINE void IfxGtm_Psm_F2a_setAruReadAddress(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream, uint32 address)
{
    Ifx_GTM_PSM_F2A *f2aPtr = IfxGtm_Psm_F2a_getPointer(f2a);

    f2aPtr->RD_CH[f2aStream].ARU_RD_FIFO.B.ADDR = address;
}


IFX_INLINE void IfxGtm_Psm_F2a_setTransferMode(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream, IfxGtm_Psm_F2aTransferMode mode)
{
    Ifx_GTM_PSM_F2A *f2aPtr = IfxGtm_Psm_F2a_getPointer(f2a);

    f2aPtr->STR_CH[f2aStream].STR_CFG.B.TMODE = (uint32)mode;
}


IFX_INLINE IfxGtm_Psm_F2aTransferMode IfxGtm_Psm_F2a_getTransferMode(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream)
{
    Ifx_GTM_PSM_F2A *f2aPtr = IfxGtm_Psm_F2a_getPointer(f2a);

    return (IfxGtm_Psm_F2aTransferMode)(f2aPtr->STR_CH[f2aStream].STR_CFG.B.TMODE);
}


IFX_INLINE void IfxGtm_Psm_F2a_setTransferDirection(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream, IfxGtm_Psm_F2aTransferDirection dir)
{
    Ifx_GTM_PSM_F2A *f2aPtr = IfxGtm_Psm_F2a_getPointer(f2a);

    f2aPtr->STR_CH[f2aStream].STR_CFG.B.DIR = (uint32)dir;
}


IFX_INLINE IfxGtm_Psm_F2aTransferDirection IfxGtm_Psm_F2a_getTransferDirection(IfxGtm_Psm_F2a f2a, IfxGtm_Psm_F2aStream f2aStream)
{
    Ifx_GTM_PSM_F2A *f2aPtr = IfxGtm_Psm_F2a_getPointer(f2a);

    return (IfxGtm_Psm_F2aTransferDirection)f2aPtr->STR_CH[f2aStream].STR_CFG.B.DIR;
}


IFX_INLINE Ifx_SRC_SRCR *IfxGtm_Psm_Fifo_getChannelSrcPointer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    return (Ifx_SRC_SRCR *)&MODULE_SRC.GTM_PSM[fifo][channel];
}


IFX_INLINE Ifx_GTM_PSM_AFD_CH *IfxGtm_Psm_Afd_getChannelPointer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel)
{
    return (Ifx_GTM_PSM_AFD_CH *)&(MODULE_GTM.PSM[fifo].AFD.CH[channel]);
}


IFX_INLINE void IfxGtm_Psm_Afd_writeChannelBuffer(IfxGtm_Psm_Fifo fifo, IfxGtm_Psm_FifoChannel channel, uint32 data)
{
    Ifx_GTM_PSM_AFD_CH *AfdCh = IfxGtm_Psm_Afd_getChannelPointer(fifo, channel);

    AfdCh->BUF_ACC.B.DATA = data;
}


#endif /* IFXGTM_PSM_H */
