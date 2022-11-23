/**
 * \file IfxCan.h
 * \brief CAN  basic functionality
 * \ingroup IfxLld_Can
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
 *
 *
 * \defgroup IfxLld_Can_Std_Enum Enumerations
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Data_Structures Data Structures
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Node_Functions Node Functions
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Tx_Element_Functions Tx Element Functions
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Rx_Element_Functions Rx Element Functions
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Filter_Functions Filter Functions
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Interrupt_Functions Interrupt Functions
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Module_Functions Module Functions
 * \ingroup IfxLld_Can_Std
 * \defgroup IfxLld_Can_Std_Tx_Event_FIFO_Element_Functions Tx Event FIFO Element Functions
 * \ingroup IfxLld_Can_Std
 */

#ifndef IFXCAN_H
#define IFXCAN_H 1

extern uint32 DummyVar; /* MJB */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxCan_cfg.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "_Utilities/Ifx_Assert.h"
#include "_PinMap/IfxCan_PinMap.h"
#include "Scu/Std/IfxScuCcu.h"
#include "Src/Std/IfxSrc.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Can_Std_Enum
 * \{ */
/** \brief Clock selection option\n
 * Description in Ifx_CAN.MCR.CLKSELx, (x = 0,1,2)
 */
typedef enum
{
    IfxCan_ClockSelect_0,     /**< \brief clock selection 0  */
    IfxCan_ClockSelect_1,     /**< \brief clock selection 1  */
    IfxCan_ClockSelect_2,     /**< \brief clock selection 2  */
    IfxCan_ClockSelect_3      /**< \brief clock selection 3  */
} IfxCan_ClockSelect;

/** \brief Type of Clock Source selection\n
 * Description in Ifx_CAN.MCR.CLKSELx, (x = 0,1,2)
 */
typedef enum
{
    IfxCan_ClockSource_noClock      = 0,  /**< \brief No clock is switched on */
    IfxCan_ClockSource_asynchronous = 1,  /**< \brief The Asynchronous clock source is switched on */
    IfxCan_ClockSource_synchronous  = 2,  /**< \brief The Synchronous clock source is switched on */
    IfxCan_ClockSource_both         = 3   /**< \brief Both clock sources are switched on */
} IfxCan_ClockSource;

/** \brief Data Field Size\n
 * Definition in Ifx_CAN.N[x]TX.ESC.B.TBDS, Ifx_CAN.N[x].RX.ESC.B.RBDS, Ifx_CAN.N[x].RX.ESC.B.FyDS (x= 0,1,2,3; y = 0, 1)
 */
typedef enum
{
    IfxCan_DataFieldSize_8,      /**< \brief 8 byte data field  */
    IfxCan_DataFieldSize_12,     /**< \brief 12 byte data field  */
    IfxCan_DataFieldSize_16,     /**< \brief 16 byte data field  */
    IfxCan_DataFieldSize_20,     /**< \brief 20 byte data field  */
    IfxCan_DataFieldSize_24,     /**< \brief 24 byte data field  */
    IfxCan_DataFieldSize_32,     /**< \brief 32 byte data field  */
    IfxCan_DataFieldSize_48,     /**< \brief 48 byte data field  */
    IfxCan_DataFieldSize_64      /**< \brief 64 byte data field  */
} IfxCan_DataFieldSize;

/** \brief Data Length code of the Message
 */
typedef enum
{
    IfxCan_DataLengthCode_0,      /**< \brief 0 data bytes  */
    IfxCan_DataLengthCode_1,      /**< \brief 1 data bytes  */
    IfxCan_DataLengthCode_2,      /**< \brief 2 data bytes  */
    IfxCan_DataLengthCode_3,      /**< \brief 3 data bytes  */
    IfxCan_DataLengthCode_4,      /**< \brief 4 data bytes  */
    IfxCan_DataLengthCode_5,      /**< \brief 5 data bytes  */
    IfxCan_DataLengthCode_6,      /**< \brief 6 data bytes  */
    IfxCan_DataLengthCode_7,      /**< \brief 7 data bytes  */
    IfxCan_DataLengthCode_8,      /**< \brief 8 data bytes  */
    IfxCan_DataLengthCode_12,     /**< \brief 12 data bytes  */
    IfxCan_DataLengthCode_16,     /**< \brief 16 data bytes  */
    IfxCan_DataLengthCode_20,     /**< \brief 20 data bytes  */
    IfxCan_DataLengthCode_24,     /**< \brief 24 data bytes  */
    IfxCan_DataLengthCode_32,     /**< \brief 32 data bytes  */
    IfxCan_DataLengthCode_48,     /**< \brief 48 data bytes  */
    IfxCan_DataLengthCode_64      /**< \brief 64 data bytes  */
} IfxCan_DataLengthCode;

/** \brief Filter Element Configuration
 */
typedef enum
{
    IfxCan_FilterElementConfiguration_disable,                     /**< \brief Disable filter element */
    IfxCan_FilterElementConfiguration_storeInRxFifo0,              /**< \brief Store in Rx FIFO 0 if filter matches */
    IfxCan_FilterElementConfiguration_storeInRxFifo1,              /**< \brief Store in Rx FIFO 1 if filter matches */
    IfxCan_FilterElementConfiguration_rejectId,                    /**< \brief Reject ID if filter matches */
    IfxCan_FilterElementConfiguration_setPriority,                 /**< \brief Set priority if filter matches */
    IfxCan_FilterElementConfiguration_setPriorityAndStoreInFifo0,  /**< \brief Set priority and store in FIFO 0 if filter matches */
    IfxCan_FilterElementConfiguration_setPriorityAndStoreInFifo1,  /**< \brief Set priority and store in FIFO 1 if filter matches */
    IfxCan_FilterElementConfiguration_storeInRxBuffer              /**< \brief Store into Rx Buffer */
} IfxCan_FilterElementConfiguration;

/** \brief Filter Type
 */
typedef enum
{
    IfxCan_FilterType_range,    /**< \brief Range filter from SF1ID to SF2ID (SF2ID is greater than SF1ID) */
    IfxCan_FilterType_dualId,   /**< \brief Dual ID filter for SF1ID or SF2ID */
    IfxCan_FilterType_classic,  /**< \brief Classic filter: SF1ID = filter, SF2ID = mask */
    IfxCan_FilterType_none      /**< \brief Reserved */
} IfxCan_FilterType;

/** \brief CAN Frame mode\n
 * Description in Ifx_CAN.N[x].CCCR.CME, (x= 0 to 3)
 */
typedef enum
{
    IfxCan_FrameMode_standard,      /**< \brief Standard CAN frame (transmit and receive) */
    IfxCan_FrameMode_fdLong,        /**< \brief CAN FD long frame in transmit and CAN FD long and fast frame in receive */
    IfxCan_FrameMode_fdLongAndFast  /**< \brief CAN FD long and fast frames (transmit and receive) */
} IfxCan_FrameMode;

/** \brief CAN frame type
 */
typedef enum
{
    IfxCan_FrameType_receive,             /**< \brief Data frame is received */
    IfxCan_FrameType_transmit,            /**< \brief Data frame is generated */
    IfxCan_FrameType_transmitAndReceive,  /**< \brief for both transmit and receive frames */
    IfxCan_FrameType_remoteRequest,       /**< \brief Remote request frame is generated */
    IfxCan_FrameType_remoteAnswer         /**< \brief Answer frame is generated on reception of the corresponding remote request */
} IfxCan_FrameType;

/** \brief Type of interrupt\n
 * Definition in Ifx_CAN.N[x].IE, Ifx_CAN.N[x].IR, Ifx_CAN.N[x].ILS, (x= 0 to 3)
 */
typedef enum
{
    IfxCan_Interrupt_rxFifo0NewMessage,                 /**< \brief Rx FIFO 0 New Message Interrupt */
    IfxCan_Interrupt_rxFifo0WatermarkReached,           /**< \brief Rx FIFO 0 Watermark Reached Interrupt */
    IfxCan_Interrupt_rxFifo0Full,                       /**< \brief Rx FIFO 0 Full Interrupt */
    IfxCan_Interrupt_rxFifo0MessageLost,                /**< \brief Rx FIFO 0 Message Lost Interrupt */
    IfxCan_Interrupt_rxFifo1NewMessage,                 /**< \brief Rx FIFO 1 New Message Interrupt */
    IfxCan_Interrupt_rxFifo1WatermarkReached,           /**< \brief Rx FIFO 1 Watermark Reached Interrupt */
    IfxCan_Interrupt_rxFifo1Full,                       /**< \brief Rx FIFO 1 Full Interrupt */
    IfxCan_Interrupt_rxFifo1MessageLost,                /**< \brief Rx FIFO 1 Message Lost Interrupt */
    IfxCan_Interrupt_highPriorityMessage,               /**< \brief High Priority Message Interrupt */
    IfxCan_Interrupt_transmissionCompleted,             /**< \brief Transmission Completed Interrupt */
    IfxCan_Interrupt_transmissionCancellationFinished,  /**< \brief Transmission Cancellation Finished Interrupt */
    IfxCan_Interrupt_txFifoEmpty,                       /**< \brief Tx FIFO Empty Interrupt */
    IfxCan_Interrupt_txEventFifoNewEntry,               /**< \brief Tx Event FIFO New Entry Interrupt */
    IfxCan_Interrupt_txEventFifoWatermarkReached,       /**< \brief Tx Event FIFO Watermark Reached Interrupt */
    IfxCan_Interrupt_txEventFifoFull,                   /**< \brief Tx Event FIFO Full Interrupt */
    IfxCan_Interrupt_txEventFifoEventLost,              /**< \brief Tx Event FIFO Event Lost Interrupt */
    IfxCan_Interrupt_timestampWraparound,               /**< \brief Timestamp Wraparound Interrupt */
    IfxCan_Interrupt_messageRAMAccessFailure,           /**< \brief Message RAM Access Failure Interrupt */
    IfxCan_Interrupt_timeoutOccurred,                   /**< \brief Timeout Occurred Interrupt */
    IfxCan_Interrupt_messageStoredToDedicatedRxBuffer,  /**< \brief Message stored to Dedicated Rx Buffer Interrupt */
    IfxCan_Interrupt_bitErrorCorrected,                 /**< \brief Bit Error Corrected Interrupt */
    IfxCan_Interrupt_bitErrorUncorrected,               /**< \brief Bit Error Uncorrected Interrupt */
    IfxCan_Interrupt_errorLoggingOverflow,              /**< \brief Error Logging Overflow Interrupt */
    IfxCan_Interrupt_errorPassive,                      /**< \brief Error Passive Interrupt */
    IfxCan_Interrupt_warningStatus,                     /**< \brief Warning Status Interrupt */
    IfxCan_Interrupt_busOffStatus,                      /**< \brief Bus_Off Status Interrupt */
    IfxCan_Interrupt_watchdog,                          /**< \brief Watchdog Interrupt */
    IfxCan_Interrupt_protocolErrorArbitration,          /**< \brief Protocol Error in Arbitration phase Interrupt */
    IfxCan_Interrupt_protocolErrorData,                 /**< \brief Protocol Error in Data phase Interrupt */
    IfxCan_Interrupt_AccessToReservedAddress            /**< \brief Access to Reserved Address Interrupt */
} IfxCan_Interrupt;

/** \brief Type of interrupt\n
 * Definition in Ifx_CAN.GRINT[x] (x= 0 , 1)
 */
typedef enum
{
    IfxCan_InterruptGroup_tefifo,  /**< \brief Transmit Event FIFO Incidents */
    IfxCan_InterruptGroup_hpe,     /**< \brief High Priority Events */
    IfxCan_InterruptGroup_wati,    /**< \brief Watermark interrupts are mapped here. */
    IfxCan_InterruptGroup_alrt,    /**< \brief Alerts */
    IfxCan_InterruptGroup_moer,    /**< \brief Module errors */
    IfxCan_InterruptGroup_safe,    /**< \brief Safety counter overflow */
    IfxCan_InterruptGroup_boff,    /**< \brief Bus Off */
    IfxCan_InterruptGroup_loi,     /**< \brief Last Error Interrupts */
    IfxCan_InterruptGroup_reint,   /**< \brief Message stored in dedicated receive buffer interrupt (IR.DRX) */
    IfxCan_InterruptGroup_rxf1f,   /**< \brief Receive FIFO1 full interrupt */
    IfxCan_InterruptGroup_rxf0f,   /**< \brief Receive FIFO0 full interrupt */
    IfxCan_InterruptGroup_rxf1n,   /**< \brief Receive FIFO1 new message Interrupt */
    IfxCan_InterruptGroup_rxf0n,   /**< \brief Receive FIFO0 new message Interrupt */
    IfxCan_InterruptGroup_reti,    /**< \brief Receive timeouts */
    IfxCan_InterruptGroup_traq,    /**< \brief Transmission Queue Events */
    IfxCan_InterruptGroup_traco    /**< \brief Interrupts of the transmission control */
} IfxCan_InterruptGroup;

/** \brief Interrupt line number INT_Ox (x= 0 - 15) \n
 */
typedef enum
{
    IfxCan_InterruptLine_0,     /**< \brief Interrupt Line 0  */
    IfxCan_InterruptLine_1,     /**< \brief Interrupt Line 1  */
    IfxCan_InterruptLine_2,     /**< \brief Interrupt Line 2  */
    IfxCan_InterruptLine_3,     /**< \brief Interrupt Line 3  */
    IfxCan_InterruptLine_4,     /**< \brief Interrupt Line 4  */
    IfxCan_InterruptLine_5,     /**< \brief Interrupt Line 5  */
    IfxCan_InterruptLine_6,     /**< \brief Interrupt Line 6  */
    IfxCan_InterruptLine_7,     /**< \brief Interrupt Line 7  */
    IfxCan_InterruptLine_8,     /**< \brief Interrupt Line 8  */
    IfxCan_InterruptLine_9,     /**< \brief Interrupt Line 9  */
    IfxCan_InterruptLine_10,    /**< \brief Interrupt Line 10  */
    IfxCan_InterruptLine_11,    /**< \brief Interrupt Line 11  */
    IfxCan_InterruptLine_12,    /**< \brief Interrupt Line 12  */
    IfxCan_InterruptLine_13,    /**< \brief Interrupt Line 13  */
    IfxCan_InterruptLine_14,    /**< \brief Interrupt Line 14  */
    IfxCan_InterruptLine_15     /**< \brief Interrupt Line 15  */
} IfxCan_InterruptLine;

/** \brief Message Id length (Standard / Extended)
 */
typedef enum
{
    IfxCan_MessageIdLength_standard,  /**< \brief Standard Message ID */
    IfxCan_MessageIdLength_extended,  /**< \brief Extended Message ID */
    IfxCan_MessageIdLength_both       /**< \brief Both Standard and Extended message IDs */
} IfxCan_MessageIdLength;

/** \brief Indicate the action to be taken with the messages which do not match with any element of the filter.
 */
typedef enum
{
    IfxCan_NonMatchingFrame_acceptToRxFifo0 = 0,  /**< \brief Accept the non matching messages into Rx FIFO 0 */
    IfxCan_NonMatchingFrame_acceptToRxFifo1 = 1,  /**< \brief Accepts the non matching messages into Rx FIFO 1 */
    IfxCan_NonMatchingFrame_reject          = 2   /**< \brief Reject the non-matching messages */
} IfxCan_NonMatchingFrame;

/** \brief Rx Buffer number
 */
typedef enum
{
    IfxCan_RxBufferId_0,     /**< \brief Rx buffer 0  */
    IfxCan_RxBufferId_1,     /**< \brief Rx buffer 1  */
    IfxCan_RxBufferId_2,     /**< \brief Rx buffer 2  */
    IfxCan_RxBufferId_3,     /**< \brief Rx buffer 3  */
    IfxCan_RxBufferId_4,     /**< \brief Rx buffer 4  */
    IfxCan_RxBufferId_5,     /**< \brief Rx buffer 5  */
    IfxCan_RxBufferId_6,     /**< \brief Rx buffer 6  */
    IfxCan_RxBufferId_7,     /**< \brief Rx buffer 7  */
    IfxCan_RxBufferId_8,     /**< \brief Rx buffer 8  */
    IfxCan_RxBufferId_9,     /**< \brief Rx buffer 9  */
    IfxCan_RxBufferId_10,    /**< \brief Rx buffer 10  */
    IfxCan_RxBufferId_11,    /**< \brief Rx buffer 11  */
    IfxCan_RxBufferId_12,    /**< \brief Rx buffer 12  */
    IfxCan_RxBufferId_13,    /**< \brief Rx buffer 13  */
    IfxCan_RxBufferId_14,    /**< \brief Rx buffer 14  */
    IfxCan_RxBufferId_15,    /**< \brief Rx buffer 15  */
    IfxCan_RxBufferId_16,    /**< \brief Rx buffer 16  */
    IfxCan_RxBufferId_17,    /**< \brief Rx buffer 17  */
    IfxCan_RxBufferId_18,    /**< \brief Rx buffer 18  */
    IfxCan_RxBufferId_19,    /**< \brief Rx buffer 19  */
    IfxCan_RxBufferId_20,    /**< \brief Rx buffer 20  */
    IfxCan_RxBufferId_21,    /**< \brief Rx buffer 21  */
    IfxCan_RxBufferId_22,    /**< \brief Rx buffer 22  */
    IfxCan_RxBufferId_23,    /**< \brief Rx buffer 23  */
    IfxCan_RxBufferId_24,    /**< \brief Rx buffer 24  */
    IfxCan_RxBufferId_25,    /**< \brief Rx buffer 25  */
    IfxCan_RxBufferId_26,    /**< \brief Rx buffer 26  */
    IfxCan_RxBufferId_27,    /**< \brief Rx buffer 27  */
    IfxCan_RxBufferId_28,    /**< \brief Rx buffer 28  */
    IfxCan_RxBufferId_29,    /**< \brief Rx buffer 29  */
    IfxCan_RxBufferId_30,    /**< \brief Rx buffer 30  */
    IfxCan_RxBufferId_31,    /**< \brief Rx buffer 31  */
    IfxCan_RxBufferId_32,    /**< \brief Rx buffer 32  */
    IfxCan_RxBufferId_33,    /**< \brief Rx buffer 33  */
    IfxCan_RxBufferId_34,    /**< \brief Rx buffer 34  */
    IfxCan_RxBufferId_35,    /**< \brief Rx buffer 35  */
    IfxCan_RxBufferId_36,    /**< \brief Rx buffer 36  */
    IfxCan_RxBufferId_37,    /**< \brief Rx buffer 37  */
    IfxCan_RxBufferId_38,    /**< \brief Rx buffer 38  */
    IfxCan_RxBufferId_39,    /**< \brief Rx buffer 39  */
    IfxCan_RxBufferId_40,    /**< \brief Rx buffer 40  */
    IfxCan_RxBufferId_41,    /**< \brief Rx buffer 41  */
    IfxCan_RxBufferId_42,    /**< \brief Rx buffer 42  */
    IfxCan_RxBufferId_43,    /**< \brief Rx buffer 43  */
    IfxCan_RxBufferId_44,    /**< \brief Rx buffer 44  */
    IfxCan_RxBufferId_45,    /**< \brief Rx buffer 45  */
    IfxCan_RxBufferId_46,    /**< \brief Rx buffer 46  */
    IfxCan_RxBufferId_47,    /**< \brief Rx buffer 47  */
    IfxCan_RxBufferId_48,    /**< \brief Rx buffer 48  */
    IfxCan_RxBufferId_49,    /**< \brief Rx buffer 49  */
    IfxCan_RxBufferId_50,    /**< \brief Rx buffer 50  */
    IfxCan_RxBufferId_51,    /**< \brief Rx buffer 51  */
    IfxCan_RxBufferId_52,    /**< \brief Rx buffer 52  */
    IfxCan_RxBufferId_53,    /**< \brief Rx buffer 53  */
    IfxCan_RxBufferId_54,    /**< \brief Rx buffer 54  */
    IfxCan_RxBufferId_55,    /**< \brief Rx buffer 55  */
    IfxCan_RxBufferId_56,    /**< \brief Rx buffer 56  */
    IfxCan_RxBufferId_57,    /**< \brief Rx buffer 57  */
    IfxCan_RxBufferId_58,    /**< \brief Rx buffer 58  */
    IfxCan_RxBufferId_59,    /**< \brief Rx buffer 59  */
    IfxCan_RxBufferId_60,    /**< \brief Rx buffer 60  */
    IfxCan_RxBufferId_61,    /**< \brief Rx buffer 61  */
    IfxCan_RxBufferId_62,    /**< \brief Rx buffer 62  */
    IfxCan_RxBufferId_63     /**< \brief Rx buffer 63  */
} IfxCan_RxBufferId;

/** \brief Rx FIFO 0/1 operating mode\n
 * Description in Ifx_CAN.N[x].RXFyC.FyOM, (x= 0 to 3; y = 0, 1)
 */
typedef enum
{
    IfxCan_RxFifoMode_blocking,  /**< \brief Blocking mode */
    IfxCan_RxFifoMode_overwrite  /**< \brief Overwrite mode */
} IfxCan_RxFifoMode;

/** \brief Rx Buffers or FIFO 0 or combination Mode of reception
 */
typedef enum
{
    IfxCan_RxMode_dedicatedBuffers,  /**< \brief Rx dedicated buffers operation */
    IfxCan_RxMode_fifo0,             /**< \brief Rx FIFO 0 operation */
    IfxCan_RxMode_fifo1,             /**< \brief Rx FIFO 1 operation */
    IfxCan_RxMode_sharedFifo0,       /**< \brief Rx shared dedicated buffers and Rx FIFO 0 operation */
    IfxCan_RxMode_sharedFifo1,       /**< \brief Rx shared dedicated buffers and Rx FIFO 1 operation */
    IfxCan_RxMode_sharedAll          /**< \brief Rx shared dedicated buffers and Rx FIFO 0 and Rx FIFO 1 operation */
} IfxCan_RxMode;

/** \brief Enable/disable the sensitivity of the module to sleep signal\n
 * Definition in Ifx_CAN.CLC.B.EDIS
 */
typedef enum
{
    IfxCan_SleepMode_enable  = 0, /**< \brief enables sleep mode */
    IfxCan_SleepMode_disable = 1  /**< \brief disables sleep mode */
} IfxCan_SleepMode;

/** \brief CAN API status definition
 */
typedef enum
{
    IfxCan_Status_ok                = 0x00000000,
    IfxCan_Status_notInitialised    = 0x00000001,
    IfxCan_Status_busOff            = 0x00000010,
    IfxCan_Status_notSentBusy       = 0x00000020,
    IfxCan_Status_receiveEmpty      = 0x00000040,
    IfxCan_Status_messageLost       = 0x00000080,
    IfxCan_Status_newData           = 0x00000100,
    IfxCan_Status_newDataButOneLost = 0x00000180
} IfxCan_Status;

/** \brief OCDS Suspend Control (OCDS.SUS)
 */
typedef enum
{
    IfxCan_SuspendMode_none = 0,  /**< \brief No suspend */
    IfxCan_SuspendMode_hard = 1,  /**< \brief Hard Suspend */
    IfxCan_SuspendMode_soft = 2   /**< \brief Soft Suspend */
} IfxCan_SuspendMode;

/** \brief Tx Buffer number
 */
typedef enum
{
    IfxCan_TxBufferId_0,     /**< \brief Tx buffer 0  */
    IfxCan_TxBufferId_1,     /**< \brief Tx buffer 1  */
    IfxCan_TxBufferId_2,     /**< \brief Tx buffer 2  */
    IfxCan_TxBufferId_3,     /**< \brief Tx buffer 3  */
    IfxCan_TxBufferId_4,     /**< \brief Tx buffer 4  */
    IfxCan_TxBufferId_5,     /**< \brief Tx buffer 5  */
    IfxCan_TxBufferId_6,     /**< \brief Tx buffer 6  */
    IfxCan_TxBufferId_7,     /**< \brief Tx buffer 7  */
    IfxCan_TxBufferId_8,     /**< \brief Tx buffer 8  */
    IfxCan_TxBufferId_9,     /**< \brief Tx buffer 9  */
    IfxCan_TxBufferId_10,    /**< \brief Tx buffer 10  */
    IfxCan_TxBufferId_11,    /**< \brief Tx buffer 11  */
    IfxCan_TxBufferId_12,    /**< \brief Tx buffer 12  */
    IfxCan_TxBufferId_13,    /**< \brief Tx buffer 13  */
    IfxCan_TxBufferId_14,    /**< \brief Tx buffer 14  */
    IfxCan_TxBufferId_15,    /**< \brief Tx buffer 15  */
    IfxCan_TxBufferId_16,    /**< \brief Tx buffer 16  */
    IfxCan_TxBufferId_17,    /**< \brief Tx buffer 17  */
    IfxCan_TxBufferId_18,    /**< \brief Tx buffer 18  */
    IfxCan_TxBufferId_19,    /**< \brief Tx buffer 19  */
    IfxCan_TxBufferId_20,    /**< \brief Tx buffer 20  */
    IfxCan_TxBufferId_21,    /**< \brief Tx buffer 21  */
    IfxCan_TxBufferId_22,    /**< \brief Tx buffer 22  */
    IfxCan_TxBufferId_23,    /**< \brief Tx buffer 23  */
    IfxCan_TxBufferId_24,    /**< \brief Tx buffer 24  */
    IfxCan_TxBufferId_25,    /**< \brief Tx buffer 25  */
    IfxCan_TxBufferId_26,    /**< \brief Tx buffer 26  */
    IfxCan_TxBufferId_27,    /**< \brief Tx buffer 27  */
    IfxCan_TxBufferId_28,    /**< \brief Tx buffer 28  */
    IfxCan_TxBufferId_29,    /**< \brief Tx buffer 29  */
    IfxCan_TxBufferId_30,    /**< \brief Tx buffer 30  */
    IfxCan_TxBufferId_31     /**< \brief Tx buffer 31  */
} IfxCan_TxBufferId;

/** \brief Tx FIFO/Queue Mode
 */
typedef enum
{
    IfxCan_TxMode_fifo,              /**< \brief Tx FIFO operation */
    IfxCan_TxMode_queue,             /**< \brief Tx Queue operation */
    IfxCan_TxMode_dedicatedBuffers,  /**< \brief Tx dedicated buffers operation */
    IfxCan_TxMode_sharedFifo,        /**< \brief Tx shared dedicated buffers and Tx FIFO operation */
    IfxCan_TxMode_sharedQueue        /**< \brief Tx shared dedicated buffers and Tx Queue operation */
} IfxCan_TxMode;

/** \} */

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Can_Std_Data_Structures
 * \{ */
/** \brief tructure for Filter configuration
 */
typedef struct
{
    uint8                             number;                     /**< \brief Filter Number */
    IfxCan_FilterElementConfiguration elementConfiguration;       /**< \brief *FEC, Filter Element Configuration of (standard / extended ID) filter element */
    IfxCan_FilterType                 type;                       /**< \brief *FT, Filter Type of (standard / extended ID) filter element */
    uint32                            id1;                        /**< \brief *FID1 First ID of (standard / extended ID) filter element */
    uint32                            id2;                        /**< \brief *FID2 Second ID of (standard / extended ID) filter element */
    IfxCan_RxBufferId                 rxBufferOffset;             /**< \brief Rx Buffer number to set the offset to the Rx Buffer Start Address */
} IfxCan_Filter;

/** \brief Configuration for Interrupt groups
 */
typedef struct
{
    IfxCan_InterruptLine interruptLine;       /**< \brief Intterupt line to which this interruipt has to be connetced to */
    Ifx_Priority         priority;            /**< \brief Priority of the interrupt */
    IfxSrc_Tos           typeOfService;       /**< \brief Type of Service */
} IfxCan_GroupInterruptConfig;

/** \brief Structure for CAN Message configuration (transmit/receive)
 */
typedef struct
{
    uint8                  bufferNumber;                /**< \brief (Tx / Rx) Buffer Element number */
    uint32                 messageId;                   /**< \brief ID, Identifier */
    boolean                remoteTransmitRequest;       /**< \brief RTR, Remote Transmit Request (enable / disable) */
    IfxCan_MessageIdLength messageIdLength;             /**< \brief XTD, Message Id length (Standard / Extended) */
    boolean                errorStateIndicator;         /**< \brief ESI, Error State Indicator (enable / disable) */
    IfxCan_DataLengthCode  dataLengthCode;              /**< \brief DLC, Data Length Code */
    IfxCan_FrameMode       frameMode;                   /**< \brief CAN frame mode */
    boolean                txEventFifoControl;          /**< \brief EFC, Tx Event FIFO Control (enable / disable) */
    boolean                storeInTxFifoQueue;          /**< \brief Write message in Tx FIFO/QUEUE */
    boolean                readFromRxFifo0;             /**< \brief Read message from Rx FIFO 0 */
    boolean                readFromRxFifo1;             /**< \brief Read message from Rx FIFO 1 */
} IfxCan_Message;

/** \brief Structure for Message RAM configuration
 */
typedef struct
{
    uint32 baseAddress;                          /**< \brief Message RAM base address of the CAN */
    uint16 standardFilterListStartAddress;       /**< \brief Start address of Standard Message ID filter list (32-bit word address) */
    uint16 extendedFilterListStartAddress;       /**< \brief Start address of Extended Message ID filter list (32-bit word address) */
    uint16 rxFifo0StartAddress;                  /**< \brief Start address of Rx FIFO 0 in Message RAM (32-bit word address) */
    uint16 rxFifo1StartAddress;                  /**< \brief Start address of Rx FIFO 1 in Message RAM (32-bit word address) */
    uint16 rxBuffersStartAddress;                /**< \brief Start address of Rx Buffers section in the Message RAM (32-bit word address). */
    uint16 txEventFifoStartAddress;              /**< \brief Start address of Tx Event FIFO in Message RAM (32-bit w ord address) */
    uint16 txBuffersStartAddress;                /**< \brief Start address of Tx Buffers section in the Message RAM (32-bit word address). */
} IfxCan_MessageRAM;

/** \} */

/** \addtogroup IfxLld_Can_Std_Node_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the configuration change\n
 * The CPU has no write access to the protected configuration registers
 * \param node Specifies the pointer to the CAN Node registers
 * \return None
 */
IFX_INLINE void IfxCan_Node_disableConfigurationChange(Ifx_CAN_N *node);

/** \brief Enables the configuration change\n
 * The CPU has write access to the protected configuration registers (while CCCR.INIT = 1)
 * \param node Specifies the pointer to the CAN Node registers
 * \return None
 */
IFX_INLINE void IfxCan_Node_enableConfigurationChange(Ifx_CAN_N *node);

/** \brief Enables the internal Virtual CAN bus loopback mode
 * \param node Specifies the pointer to the CAN Node registers
 * \return None
 */
IFX_INLINE void IfxCan_Node_enableLoopbackMode(Ifx_CAN_N *node);

/** \brief Returns the status of whether the CAN Node is synchronised or not
 * \param node Specifies the pointer to the CAN Node registers
 * \return Status TRUE: synchronized, FALSE : Sync in progress
 */
IFX_INLINE boolean IfxCan_Node_isNodeSynchronized(Ifx_CAN_N *node);

/** \brief Initialises the node\n
 * 0= Normal Operation\n
 * 1= Initialization is started
 * \param node Specifies the pointer to the CAN Node registers
 * \param enable Enable / Disable choice
 * \return None
 */
IFX_INLINE void IfxCan_Node_setInitialisation(Ifx_CAN_N *node, boolean enable);

/** \brief Sets Transceiver Delay Compensation offset
 * \param node Specifies the pointer to the CAN Node registers
 * \param delay delay offset value
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTransceiverDelayCompensationOffset(Ifx_CAN_N *node, uint8 delay);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Converts data length code (DLC) into number of data words
 * \param node Specifies the pointer to the CAN Node registers
 * \param dataLengthCode DLC, Data Length Code
 * \return Number of data words
 */
IFX_EXTERN uint32 IfxCan_Node_getDataLengthFromCode(Ifx_CAN_N *node, IfxCan_DataLengthCode dataLengthCode);

/** \brief Returns CAN frame mode of operation for a received frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param rxBufferElement Rx Buffer Element
 * \return CAN frame mode
 */
IFX_EXTERN IfxCan_FrameMode IfxCan_Node_getFrameMode(Ifx_CAN_N *node, Ifx_CAN_RXMSG *rxBufferElement);

/** \brief Select and initialise the CAN node receive pin
 * \param node Specifies the pointer to the CAN Node registers
 * \param rxd Rx pin
 * \param mode Input mode
 * \param padDriver Pad Driver Configuration
 * \return TRUE: Returns TRUE if the operation was successful\n
 * FALSE: Returns FALSE if the operation was errorneous
 */
IFX_EXTERN boolean IfxCan_Node_initRxPin(Ifx_CAN_N *node, IfxCan_Rxd_In *rxd, IfxPort_InputMode mode, IfxPort_PadDriver padDriver);

/** \brief Select and initialise the CAN node transmit pin
 * \param node Specifies the pointer to the CAN Node registers
 * \param txd Tx pin
 * \param mode Output mode
 * \param padDriver Pad driver Configuration
 * \return TRUE: Returns TRUE if the operation was successful\n
 * FALSE: Returns FALSE if the operation was errorneous
 */
IFX_EXTERN boolean IfxCan_Node_initTxPin(Ifx_CAN_N *node, IfxCan_Txd_Out *txd, IfxPort_OutputMode mode, IfxPort_PadDriver padDriver);

/** \brief Calculates and Sets the CAN baudrate for standard frames and arbitration phase of CAND FD frames
 * \param node Specifies the pointer to the CAN Node registers
 * \param moduleFreq Specifies the CAN module frequency
 * \param baudrate Specifies the baud rate. Unit: baud
 * \param samplePoint Specifies the sample point. Range = [0, 10000] resp. [0%, 100%] of the total bit time.
 * \param syncJumpWidth Specifies the re-synchronization jump width
 * \return None
 */
IFX_EXTERN void IfxCan_Node_setBitTiming(Ifx_CAN_N *node, float32 moduleFreq, uint32 baudrate, uint16 samplePoint, uint16 syncJumpWidth);

/** \brief Calulates and Sets the CAN fast baudrate for CAN FD frames data phase
 * \param node Specifies the pointer to the CAN Node registers
 * \param moduleFreq Specifies the CAN module frequency
 * \param baudrate Specifies the baud rate. Unit: baud
 * \param samplePoint Specifies the sample point. Range = [0, 10000] resp. [0%, 100%] of the total bit time.
 * \param syncJumpWidth Specifies the re-synchronization jump width
 * \return None
 */
IFX_EXTERN void IfxCan_Node_setFastBitTiming(Ifx_CAN_N *node, float32 moduleFreq, uint32 baudrate, uint16 samplePoint, uint16 syncJumpWidth);

/** \brief Enables the CAN frame mode for transmission
 * \param node Specifies the pointer to the CAN Node registers
 * \param frameMode CAN frame mode
 * \return None
 */
IFX_EXTERN void IfxCan_Node_setFrameMode(Ifx_CAN_N *node, IfxCan_FrameMode frameMode);

/** \brief Sets CAN frame mode request for transmission
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param frameMode CAN frame mode
 * \return None
 */
IFX_EXTERN void IfxCan_Node_setFrameModeRequest(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, IfxCan_FrameMode frameMode);

/** \} */

/** \addtogroup IfxLld_Can_Std_Tx_Element_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns Tx FIFO/Queue Put Index
 * \param node Specifies the pointer to the CAN Node registers
 * \return Tx Buffer Element Number
 */
IFX_INLINE IfxCan_TxBufferId IfxCan_Node_getTxFifoQueuePutIndex(Ifx_CAN_N *node);

/** \brief Returns the status of whether cancellation is finished on the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return Status
 */
IFX_INLINE boolean IfxCan_Node_isTxBufferCancellationFinished(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Returns the status of pending request of the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return Status
 */
IFX_INLINE boolean IfxCan_Node_isTxBufferRequestPending(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Returns the status of whether transmission occured on the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return Status
 */
IFX_INLINE boolean IfxCan_Node_isTxBufferTransmissionOccured(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Returns the status of Tx Fifo/Queue is full or not
 * \param node Specifies the pointer to the CAN Node registers
 * \return Status
 */
IFX_INLINE boolean IfxCan_Node_isTxFifoQueueFull(Ifx_CAN_N *node);

/** \brief pauses the CAN Node for two CAN bit times before starting the next transmission
 * \param node Specifies the pointer to the CAN Node registers
 * \param enable Enable / Disable choice
 * \return None
 */
IFX_INLINE void IfxCan_Node_pauseTransmission(Ifx_CAN_N *node, boolean enable);

/** \brief Sets the Data Length Code (DLC) for transmit frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param dataLengthCode DLC, data length code
 * \return None
 */
IFX_INLINE void IfxCan_Node_setDataLengthCode(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, IfxCan_DataLengthCode dataLengthCode);

/** \brief Sets the number of dedicated Tx Buffers
 * \param node Specifies the pointer to the CAN Node registers
 * \param number Number of Tx Buffers
 * \return None
 */
IFX_INLINE void IfxCan_Node_setDedicatedTxBuffersNumber(Ifx_CAN_N *node, uint8 number);

/** \brief Sets the Error State Indicator (ESI) for transmit frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param enable Choice (True/ False)
 * \return None
 */
IFX_INLINE void IfxCan_Node_setErrorStateIndicator(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, boolean enable);

/** \brief Sets the Message Marker (MM) for transmit frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param bufferId MM, Message Marker , Buffer Id
 * \return None
 */
IFX_INLINE void IfxCan_Node_setMessageMarker(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, IfxCan_TxBufferId bufferId);

/** \brief Sets the identifier (ID) for transmit frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param messageId Identifier
 * \param messageIdLength Message Id length (Standard / Extended)
 * \return None
 */
IFX_INLINE void IfxCan_Node_setMesssageId(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, uint32 messageId, IfxCan_MessageIdLength messageIdLength);

/** \brief Sets the remote Transmit Request (RTR) for transmit frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param enable Choice (True/ False)
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRemoteTransmitRequest(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, boolean enable);

/** \brief Sets Transmit FIFO/Queue Mode
 * \param node Specifies the pointer to the CAN Node registers
 * \param mode Tx FIFO/Queue Mode
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTransmitFifoQueueMode(Ifx_CAN_N *node, IfxCan_TxMode mode);

/** \brief Sets Transmit FIFO/Queue Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param number Number of Tx Buffers used for Tx FIFO/Queue
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTransmitFifoQueueSize(Ifx_CAN_N *node, uint8 number);

/** \brief Sets the Add Request for the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxBufferAddRequest(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Sets the Cancellation Request for the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxBufferCancellationRequest(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Sets Tx Buffer Data Field Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Tx Buffer Data Field Size
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxBufferDataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size);

/** \brief Sets the start address of Tx Buffers section in the Message RAM (32-bit word address)
 * \param node Specifies the pointer to the CAN Node registers
 * \param address Start address of Tx Buffers in the message RAM
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxBuffersStartAddress(Ifx_CAN_N *node, uint16 address);

/** \brief Sets the Tx Event Fifo Control (EFC) for transmit frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param enable Choice (True/ False)
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxEventFifoControl(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, boolean enable);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns Tx Buffer Data Field Size in bytes
 * \param node Specifies the pointer to the CAN Node registers
 * \return Data field size
 */
IFX_EXTERN uint8 IfxCan_Node_getTxBufferDataFieldSize(Ifx_CAN_N *node);

/** \brief Returns the address of selected Tx buffer element
 * \param node Specifies the pointer to the CAN Node registers
 * \param ramBaseAddress Message RAM base address of CAN module
 * \param txBuffersStartAddress Start address of Tx Buffers section in the Message RAM
 * \param txBufferNumber Tx buffer element number
 * \return Tx Buffer Element Address
 */
IFX_EXTERN Ifx_CAN_TXMSG *IfxCan_Node_getTxBufferElementAddress(Ifx_CAN_N *node, uint32 ramBaseAddress, uint16 txBuffersStartAddress, IfxCan_TxBufferId txBufferNumber);

/** \brief Writes Data into Tx buffer element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferElement Tx Buffer Element
 * \param dataLengthCode DLC, Data Length Code
 * \param data Pointer to data (in words)
 * \return None
 */
IFX_EXTERN void IfxCan_Node_writeData(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, IfxCan_DataLengthCode dataLengthCode, uint32 *data);

/** \} */

/** \addtogroup IfxLld_Can_Std_Rx_Element_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the Data Length Code from the received frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param rxBufferElement Rx Buffer Element
 * \return Data Length Code
 */
IFX_INLINE uint32 IfxCan_Node_getDataLengthCode(Ifx_CAN_N *node, Ifx_CAN_RXMSG *rxBufferElement);

/** \brief Returns the identifier (ID) from the received frame
 * \param node Specifies the pointer to the CAN Node registers
 * \param rxBufferElement Rx Buffer Element
 * \return Identifier
 */
IFX_INLINE uint32 IfxCan_Node_getMesssageId(Ifx_CAN_N *node, Ifx_CAN_RXMSG *rxBufferElement);

/** \brief Returns Rx FIFO 0 Fill Level
 * \param node Specifies the pointer to the CAN Node registers
 * \return Fill level
 */
IFX_INLINE uint8 IfxCan_Node_getRxFifo0FillLevel(Ifx_CAN_N *node);

/** \brief Returns Rx FIFO 0 get index
 * \param node Specifies the pointer to the CAN Node registers
 * \return Rx Buffer Element Number
 */
IFX_INLINE IfxCan_RxBufferId IfxCan_Node_getRxFifo0GetIndex(Ifx_CAN_N *node);

/** \brief Returns Rx FIFO 1 Fill Level
 * \param node Specifies the pointer to the CAN Node registers
 * \return Fill level
 */
IFX_INLINE uint8 IfxCan_Node_getRxFifo1FillLevel(Ifx_CAN_N *node);

/** \brief Returns Rx FIFO 1 get index
 * \param node Specifies the pointer to the CAN Node registers
 * \return Rx Buffer Element Number
 */
IFX_INLINE IfxCan_RxBufferId IfxCan_Node_getRxFifo1GetIndex(Ifx_CAN_N *node);

/** \brief Sets Rx Buffer Data Field Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Rx Buffer Data Field Size
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxBufferDataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size);

/** \brief Sets the start address of Rx Buffers section in the Message RAM (32-bit word address)
 * \param node Specifies the pointer to the CAN Node registers
 * \param address Start address of Rx Buffers in the Message RAM
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxBuffersStartAddress(Ifx_CAN_N *node, uint16 address);

/** \brief Sets Rx FIFO 0 Acknowledge Index
 * \param node Specifies the pointer to the CAN Node registers
 * \param RxBufferNumber Rx buffer element number
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo0AcknowledgeIndex(Ifx_CAN_N *node, IfxCan_RxBufferId RxBufferNumber);

/** \brief Sets Rx Buffer Fifo 0 Data Field Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Rx FIFO 0 Data Field Size
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo0DataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size);

/** \brief Sets Rx Buffer Fifo 0 operating mode
 * \param node Specifies the pointer to the CAN Node registers
 * \param mode Rx FIFO 0 operating Mode
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo0OperatingMode(Ifx_CAN_N *node, IfxCan_RxFifoMode mode);

/** \brief Sets Rx FIFO 0 Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Rx FIFO 0 Size
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo0Size(Ifx_CAN_N *node, uint8 size);

/** \brief Sets the start address of Rx FIFO 0 section in the Message RAM (32-bit word address)
 * \param node Specifies the pointer to the CAN Node registers
 * \param address Start address of Rx FIFO 0 in the Message RAM
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo0StartAddress(Ifx_CAN_N *node, uint16 address);

/** \brief Sets Rx FIFO 0 Watermark Level
 * \param node Specifies the pointer to the CAN Node registers
 * \param level Rx FIFO 0 Watermark Level
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo0WatermarkLevel(Ifx_CAN_N *node, uint8 level);

/** \brief Sets Rx FIFO 1 Acknowledge Index
 * \param node Specifies the pointer to the CAN Node registers
 * \param RxBufferNumber Rx buffer element number
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo1AcknowledgeIndex(Ifx_CAN_N *node, IfxCan_RxBufferId RxBufferNumber);

/** \brief Sets Rx Buffer Fifo 1 Data Field Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Rx FIFO 1 Data Field Size
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo1DataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size);

/** \brief Sets Rx Buffer Fifo 1 operating mode
 * \param node Specifies the pointer to the CAN Node registers
 * \param mode Rx FIFO 1 operating Mode
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo1OperatingMode(Ifx_CAN_N *node, IfxCan_RxFifoMode mode);

/** \brief Sets Rx FIFO 1 Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Rx FIFO 1 Size
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo1Size(Ifx_CAN_N *node, uint8 size);

/** \brief Sets the start address of Rx FIFO 1 section in the Message RAM (32-bit word address)
 * \param node Specifies the pointer to the CAN Node registers
 * \param address Start address of Rx FIFO 1 in the Message RAM
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo1StartAddress(Ifx_CAN_N *node, uint16 address);

/** \brief Sets Rx FIFO 1 Watermark Level
 * \param node Specifies the pointer to the CAN Node registers
 * \param level Rx FIFO 1 Watermark Level
 * \return None
 */
IFX_INLINE void IfxCan_Node_setRxFifo1WatermarkLevel(Ifx_CAN_N *node, uint8 level);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Clears the New Data flag of the selected Rx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param rxBufferId Rx Buffer number
 * \return None
 */
IFX_EXTERN void IfxCan_Node_clearRxBufferNewDataFlag(Ifx_CAN_N *node, IfxCan_RxBufferId rxBufferId);

/** \brief Returns Rx Buffer Data Field Size in bytes
 * \param node Specifies the pointer to the CAN Node registers
 * \return Data field size
 */
IFX_EXTERN uint8 IfxCan_Node_getRxBufferDataFieldSize(Ifx_CAN_N *node);

/** \brief Returns the address of selected Rx buffer element
 * \param node Specifies the pointer to the CAN Node registers
 * \param ramBaseAddress Message RAM base address of CAN Module
 * \param rxBuffersStartAddress Start address of Rx Buffers section in the Message RAM
 * \param rxBufferNumber Rx buffer element number
 * \return Rx Buffer Element Address
 */
IFX_EXTERN Ifx_CAN_RXMSG *IfxCan_Node_getRxBufferElementAddress(Ifx_CAN_N *node, uint32 ramBaseAddress, uint16 rxBuffersStartAddress, IfxCan_RxBufferId rxBufferNumber);

/** \brief Returns Rx FIFO 0 Data Field Size in bytes
 * \param node Specifies the pointer to the CAN Node registers
 * \return Data field size
 */
IFX_EXTERN uint8 IfxCan_Node_getRxFifo0DataFieldSize(Ifx_CAN_N *node);

/** \brief Returns the address of selected Rx FIFO 0 element
 * \param node Specifies the pointer to the CAN Node registers
 * \param ramBaseAddress Message RAM base address of CAN Module
 * \param rxFifo0StartAddress Start address of Rx FIFO 0 section in the Message RAM
 * \param rxBufferNumber Rx buffer element number
 * \return Rx FIFO 0 Element Address
 */
IFX_EXTERN Ifx_CAN_RXMSG *IfxCan_Node_getRxFifo0ElementAddress(Ifx_CAN_N *node, uint32 ramBaseAddress, uint16 rxFifo0StartAddress, IfxCan_RxBufferId rxBufferNumber);

/** \brief Returns Rx FIFO 1 Data Field Size in bytes
 * \param node Specifies the pointer to the CAN Node registers
 * \return Data field size
 */
IFX_EXTERN uint8 IfxCan_Node_getRxFifo1DataFieldSize(Ifx_CAN_N *node);

/** \brief Returns the address of selected Rx FIFO 1 element
 * \param node Specifies the pointer to the CAN Node registers
 * \param ramBaseAddress Message RAM base address of CAN Module
 * \param rxFifo1StartAddress Start address of Rx FIFO 1 section in the Message RAM
 * \param rxBufferNumber Rx buffer element number
 * \return Rx FIFO 1 Element Address
 */
IFX_EXTERN Ifx_CAN_RXMSG *IfxCan_Node_getRxFifo1ElementAddress(Ifx_CAN_N *node, uint32 ramBaseAddress, uint16 rxFifo1StartAddress, IfxCan_RxBufferId rxBufferNumber);

/** \brief Returns the status of whether the selcted Rx buffer has been updated from new data
 * \param node Specifies the pointer to the CAN Node registers
 * \param rxBufferId Rx Buffer number
 * \return Status
 */
IFX_EXTERN boolean IfxCan_Node_isRxBufferNewDataUpdated(Ifx_CAN_N *node, IfxCan_RxBufferId rxBufferId);

/** \brief Reads data from Rx buffer element
 * \param node Specifies the pointer to the CAN Node registers
 * \param rxBufferElement Rx Buffer Element
 * \param dataLengthCode DLC, Data Length Code
 * \param data Pointer to data (in words)
 * \return None
 */
IFX_EXTERN void IfxCan_Node_readData(Ifx_CAN_N *node, Ifx_CAN_RXMSG *rxBufferElement, IfxCan_DataLengthCode dataLengthCode, uint32 *data);

/** \} */

/** \addtogroup IfxLld_Can_Std_Filter_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the selected interrupt
 * \param node Specifies the pointer to the CAN Node registers
 * \return None
 */
IFX_INLINE void IfxCan_Node_acceptRemoteFramesWithStandardId(Ifx_CAN_N *node);

/** \brief Disables the selected interrupt
 * \param node Specifies the pointer to the CAN Node registers
 * \return None
 */
IFX_INLINE void IfxCan_Node_acceptRemoteFrameswithExtendedId(Ifx_CAN_N *node);

/** \brief Configure the filter for non matching frames with extended id.
 * \param node Specifies the pointer to the CAN Node registers
 * \param filter action to be performed on non matching messages.
 * \return None
 */
IFX_INLINE void IfxCan_Node_configureExtendedFilterForNonMatchingFrames(Ifx_CAN_N *node, IfxCan_NonMatchingFrame filter);

/** \brief Configure the filter for non matching frames with standard id.
 * \param node Specifies the pointer to the CAN Node registers
 * \param filter action to be performed on non matching messages.
 * \return None
 */
IFX_INLINE void IfxCan_Node_configureStandardFilterForNonMatchingFrames(Ifx_CAN_N *node, IfxCan_NonMatchingFrame filter);

/** \brief Reject the remote frames with extended id.
 * \param node Specifies the pointer to the CAN Node registers
 * \return None
 */
IFX_INLINE void IfxCan_Node_rejectRemoteFramesWithExtendedId(Ifx_CAN_N *node);

/** \brief Reject the remote frames with standard id.
 * \param node Specifies the pointer to the CAN Node registers
 * \return None
 */
IFX_INLINE void IfxCan_Node_rejectRemoteFramesWithStandardId(Ifx_CAN_N *node);

/** \brief Sets the Extended Filter Element Configuration
 * \param node Specifies the pointer to the CAN Node registers
 * \param extendedFilterElement Extended Filter Element
 * \param filterElementConfiguration Filter Element Configuration
 * \return None
 */
IFX_INLINE void IfxCan_Node_setExtendedFilterConfiguration(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, IfxCan_FilterElementConfiguration filterElementConfiguration);

/** \brief Sets the Extended Filter ID 1 for Extended Filter Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param extendedFilterElement Extended Filter Element
 * \param id Filter ID 1
 * \return None
 */
IFX_INLINE void IfxCan_Node_setExtendedFilterId1(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, uint32 id);

/** \brief Sets the Extended Filter ID 2 for Extended Filter Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param extendedFilterElement Extended Filter Element
 * \param id Filter ID 2
 * \return None
 */
IFX_INLINE void IfxCan_Node_setExtendedFilterId2(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, uint32 id);

/** \brief Sets the Extended Message ID filter list size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Number of Extended Message ID filter elements
 * \return None
 */
IFX_INLINE void IfxCan_Node_setExtendedFilterListSize(Ifx_CAN_N *node, uint8 size);

/** \brief Sets the start address of Extended Message ID filter list (32-bit word address)
 * \param node Specifies the pointer to the CAN Node registers
 * \param address Start address of Extended Message ID filter list in the Message RAM
 * \return None
 */
IFX_INLINE void IfxCan_Node_setExtendedFilterListStartAddress(Ifx_CAN_N *node, uint16 address);

/** \brief Sets the Offset to the Rx Buffer Start Address RXBC.RBSA for storage of a matching message for Extended filter element
 * \param node Specifies the pointer to the CAN Node registers
 * \param extendedFilterElement Extended Filter Element
 * \param rxBufferNumber Offset to the Rx Buffer Start Address RXBC.RBSA for storage of a matching message (Rx buffer number)
 * \return None
 */
IFX_INLINE void IfxCan_Node_setExtendedFilterRxBufferOffset(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, IfxCan_RxBufferId rxBufferNumber);

/** \brief Sets the Extended Filter Type for Extended Filter Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param extendedFilterElement Extended Filter Element
 * \param filterType Filter Type
 * \return None
 */
IFX_INLINE void IfxCan_Node_setExtendedFilterType(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, IfxCan_FilterType filterType);

/** \brief Sets the Standard Filter Element Configuration
 * \param node Specifies the pointer to the CAN Node registers
 * \param standardFilterElement Standard Filter Element
 * \param filterElementConfiguration Filter Element Configuration
 * \return None
 */
IFX_INLINE void IfxCan_Node_setStandardFilterConfiguration(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, IfxCan_FilterElementConfiguration filterElementConfiguration);

/** \brief Sets the Standard Filter ID 1 for Standard Filter Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param standardFilterElement Standard Filter Element
 * \param id Filter ID 1
 * \return None
 */
IFX_INLINE void IfxCan_Node_setStandardFilterId1(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, uint32 id);

/** \brief Sets the Standard Filter ID 2 for Standard Filter Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param standardFilterElement Standard Filter Element
 * \param id Filter ID 2
 * \return None
 */
IFX_INLINE void IfxCan_Node_setStandardFilterId2(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, uint32 id);

/** \brief Sets the Standard  Message ID filter list size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Number of Standard Message ID filter elements
 * \return None
 */
IFX_INLINE void IfxCan_Node_setStandardFilterListSize(Ifx_CAN_N *node, uint8 size);

/** \brief Sets the start address of Standard Message ID filter list (32-bit word address)
 * \param node Specifies the pointer to the CAN Node registers
 * \param address Start address of Standard Message ID filter in the Message RAM
 * \return None
 */
IFX_INLINE void IfxCan_Node_setStandardFilterListStartAddress(Ifx_CAN_N *node, uint16 address);

/** \brief Sets the Offset to the Rx Buffer Start Address RXBC.RBSA for storage of a matching message for standard filter element
 * \param node Specifies the pointer to the CAN Node registers
 * \param standardFilterElement Standard Filter Element
 * \param rxBufferNumber Offset to the Rx Buffer Start Address RXBC.RBSA for storage of a matching message (Rx buffer number)
 * \return None
 */
IFX_INLINE void IfxCan_Node_setStandardFilterRxBufferOffset(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, IfxCan_RxBufferId rxBufferNumber);

/** \brief Sets the Standard Filter Type for Standard Filter Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param standardFilterElement Standard Filter Element
 * \param filterType Filter Type
 * \return None
 */
IFX_INLINE void IfxCan_Node_setStandardFilterType(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, IfxCan_FilterType filterType);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the address of selected extended filter element
 * \param node Specifies the pointer to the CAN Node registers
 * \param ramBaseAddress Message RAM base address of CAN Module
 * \param extendedFilterListStartAddress Start address of Extended Message ID filter list (32-bit word address)
 * \param filterNumber extended filter element number
 * \return Extended Filter Element Address
 */
IFX_EXTERN Ifx_CAN_EXTMSG *IfxCan_Node_getExtendedFilterElementAddress(Ifx_CAN_N *node, uint32 ramBaseAddress, uint16 extendedFilterListStartAddress, uint8 filterNumber);

/** \brief Returns the address of selected standard filter element
 * \param node Specifies the pointer to the CAN Node registers
 * \param ramBaseAddress Message RAM base address of CAN Module
 * \param standardFilterListStartAddress Start address of Standard Message ID filter list (32-bit word address)
 * \param filterNumber Standard filter element number
 * \return Standard Filter Element Address
 */
IFX_EXTERN Ifx_CAN_STDMSG *IfxCan_Node_getStandardFilterElementAddress(Ifx_CAN_N *node, uint32 ramBaseAddress, uint16 standardFilterListStartAddress, uint8 filterNumber);

/** \} */

/** \addtogroup IfxLld_Can_Std_Interrupt_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Clears the selected interrupt Flag
 * \param node Specifies the pointer to the CAN Node registers
 * \param interrupt Type of Interrupt
 * \return None
 */
IFX_INLINE void IfxCan_Node_clearInterruptFlag(Ifx_CAN_N *node, IfxCan_Interrupt interrupt);

/** \brief Disables the selected interrupt
 * \param node Specifies the pointer to the CAN Node registers
 * \param interrupt Type of Interrupt
 * \return None
 */
IFX_INLINE void IfxCan_Node_disableInterrupt(Ifx_CAN_N *node, IfxCan_Interrupt interrupt);

/** \brief Disables the Cancellation Finished Interrupt of the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return None
 */
IFX_INLINE void IfxCan_Node_disableTxBufferCancellationFinishedInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Disables the Transmission Interrupt of the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return None
 */
IFX_INLINE void IfxCan_Node_disableTxBufferTransmissionInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Enables the selected interrupt
 * \param node Specifies the pointer to the CAN Node registers
 * \param interrupt Type of Interrupt
 * \return None
 */
IFX_INLINE void IfxCan_Node_enableInterrupt(Ifx_CAN_N *node, IfxCan_Interrupt interrupt);

/** \brief Enables the Cancellation Finished Interrupt of the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return None
 */
IFX_INLINE void IfxCan_Node_enableTxBufferCancellationFinishedInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Enables the Transmission Interrupt of the selected Tx buffer
 * \param node Specifies the pointer to the CAN Node registers
 * \param txBufferId Tx Buffer number
 * \return None
 */
IFX_INLINE void IfxCan_Node_enableTxBufferTransmissionInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId);

/** \brief Returns the status of selected interrupt flag
 * \param node Specifies the pointer to the CAN Node registers
 * \param interrupt Type of Interrupt
 * \return Status TRUE / FALSE
 */
IFX_INLINE boolean IfxCan_Node_getInterruptFlagStatus(Ifx_CAN_N *node, IfxCan_Interrupt interrupt);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Sets the slected interrupt to the selcted interrupt line
 * \param node Specifies the pointer to the CAN Node registers
 * \param interruptGroup Type of Interrupt group
 * \param interruptLine Interrupt line number
 * \return None
 */
IFX_EXTERN void IfxCan_Node_setGroupInterruptLine(Ifx_CAN_N *node, IfxCan_InterruptGroup interruptGroup, IfxCan_InterruptLine interruptLine);

/** \brief Sets the slected interrupt to the selcted interrupt line
 * \param node Specifies the pointer to the CAN Node registers
 * \param interrupt Type of Interrupt
 * \param interruptLine Interrupt line number
 * \return None
 */
IFX_EXTERN void IfxCan_Node_setInterruptLine(Ifx_CAN_N *node, IfxCan_Interrupt interrupt, IfxCan_InterruptLine interruptLine);

/** \} */

/** \addtogroup IfxLld_Can_Std_Module_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the base adress of the selected Node of CAN module
 * \param can Specifies the pointer to the CAN registers
 * \param nodeId Node number of the module
 * \return Specifies the pointer to the CAN Node registers
 */
IFX_INLINE Ifx_CAN_N *IfxCan_getNodePointer(Ifx_CAN *can, IfxCan_NodeId nodeId);

/** \brief Returns the status of module enabled or disabled
 * \param can Specifies the pointer to the CAN registers
 * \return Status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCan_isModuleEnabled(Ifx_CAN *can);

/** \brief Returns the module's suspend state.
 * TRUE :if module is suspended.
 * FALSE:if module is not yet suspended.
 * \param can Pointer to CAN module registers
 * \return Suspend status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxCan_isModuleSuspended(Ifx_CAN *can);

/** \brief Sets the sensitivity of the module to sleep signal
 * \param can pointer to CAN registers
 * \param mode mode selection (enable/disable)
 * \return None
 */
IFX_INLINE void IfxCan_setSleepMode(Ifx_CAN *can, IfxCan_SleepMode mode);

/** \brief Set the Module to Hard/Soft suspend mode.
 * Note: The api works only when the OCDS is enabled and in Supervisor Mode. When OCDS is disabled the OCS suspend control is ineffective.
 * \param can Pointer to CAN module registers
 * \param mode Module suspend mode
 * \return None
 */
IFX_INLINE void IfxCan_setSuspendMode(Ifx_CAN *can, IfxCan_SuspendMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the module (sets the disable request)
 * \param can Specifies the pointer to the CAN registers
 * \return None
 */
IFX_EXTERN void IfxCan_disableModule(Ifx_CAN *can);

/** \brief Enables the module (clears the disable request)
 * \param can Specifies the pointer to the CAN registers
 * \return None
 */
IFX_EXTERN void IfxCan_enableModule(Ifx_CAN *can);

/**
 * \param can Module index of the CAN
 * \return CAN module register address
 */
IFX_EXTERN Ifx_CAN *IfxCan_getAddress(IfxCan_Index can);

/** \brief API to get the resource index of the CAN specified.
 * \return can resource index
 */
IFX_EXTERN IfxCan_Index IfxCan_getIndex(Ifx_CAN *can);

/** \brief Returns the operatinf frequency of the CAN module
 * \param can Specifies the pointer to the CAN registers
 * \return Module Frequency
 */
IFX_EXTERN float32 IfxCan_getModuleFrequency(Ifx_CAN *can);

/** \brief resets CAN kernel
 * \param can pointer to CAN registers
 * \return None
 */
IFX_EXTERN void IfxCan_resetModule(Ifx_CAN *can);

/** \brief sets the clocksource selection
 * \param can Specifies the pointer to the CAN registers
 * \param clockSelect Clock selection option
 * \param clockSource Type of Clock Source selection
 * \return None
 */
IFX_EXTERN void IfxCan_setClockSource(Ifx_CAN *can, IfxCan_ClockSelect clockSelect, IfxCan_ClockSource clockSource);

/** \} */

/** \addtogroup IfxLld_Can_Std_Tx_Event_FIFO_Element_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the Bit Rate Switch (BRS) from the Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event FIFO Element
 * \return Bit Rate Switch (TRUE/FALSE)
 */
IFX_INLINE boolean IfxCan_Node_getBRSFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the Data Length Code from the Tx Event Fifo Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event Fifo Element
 * \return Data Length Code
 */
IFX_INLINE uint32 IfxCan_Node_getDLCFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the Error State Indicator (ESI) from the Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event FIFO Element
 * \return Error State Indicator
 */
IFX_INLINE boolean IfxCan_Node_getESIFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the FD Format (FDF) from the Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event FIFO Element
 * \return FD format (TRUE/FALSE)
 */
IFX_INLINE boolean IfxCan_Node_getFDFFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the Message Marker (MM) from the Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event FIFO Element
 * \return Message Marker
 */
IFX_INLINE uint8 IfxCan_Node_getMMFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the identifier (ID) from the Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event FIFO Element
 * \return Identifier
 */
IFX_INLINE uint32 IfxCan_Node_getMesssageIdFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the Remote Transmission Request Status (RTR) from the Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event FIFO Element
 * \return Remote Transmission Request Status
 */
IFX_INLINE boolean IfxCan_Node_getRTRFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the Tx Time Stamp (TXTS) from the Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event FIFO Element
 * \return Tx Time Stamp
 */
IFX_INLINE uint16 IfxCan_Node_getTXTSFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the Tx Event Fifo Acknowledge Index
 * \param node Specifies the pointer to the CAN Node registers
 * \return Returns Tx Event Fifo Acknowledge Index
 */
IFX_INLINE uint8 IfxCan_Node_getTxEventFifoAcknowledgeIndex(Ifx_CAN_N *node);

/** \brief Returns the Tx Event Fifo Fill Level
 * \param node Specifies the pointer to the CAN Node registers
 * \return Returns Tx Event Fifo Fill Level
 */
IFX_INLINE uint8 IfxCan_Node_getTxEventFifoFillLevel(Ifx_CAN_N *node);

/** \brief Returns the Tx Event Fifo Get Index
 * \param node Specifies the pointer to the CAN Node registers
 * \return Returns Tx Event Fifo Get Index
 */
IFX_INLINE uint8 IfxCan_Node_getTxEventFifoGetIndex(Ifx_CAN_N *node);

/** \brief Returns the Tx Event Fifo Put Index
 * \param node Specifies the pointer to the CAN Node registers
 * \return Returns Tx Event Fifo Put Index
 */
IFX_INLINE uint8 IfxCan_Node_getTxEventFifoPutIndex(Ifx_CAN_N *node);

/** \brief Returns Tx Event Fifo Size
 * \param node Specifies the pointer to the CAN Node registers
 * \return Tx Event Fifo Size
 */
IFX_INLINE uint8 IfxCan_Node_getTxEventFifoSize(Ifx_CAN_N *node);

/** \brief Returns Tx Event Fifo Start Address
 * \param node Specifies the pointer to the CAN Node registers
 * \return Tx Event Fifo Start Address
 */
IFX_INLINE uint16 IfxCan_Node_getTxEventFifoStartAddress(Ifx_CAN_N *node);

/** \brief Returns Tx Event Fifo Watermark Level
 * \param node Specifies the pointer to the CAN Node registers
 * \return Tx Event Fifo Watermark Level
 */
IFX_INLINE uint8 IfxCan_Node_getTxEventFifoWatermarkLevel(Ifx_CAN_N *node);

/** \brief Returns the status of Tx Event Fifo Element lost
 * \param node Specifies the pointer to the CAN Node registers
 * \return Returns status of Tx Event Fifo Element Lost\n
 * True : elemnt lost\n
 * False : element not lost
 */
IFX_INLINE boolean IfxCan_Node_isTxEventFifoElementLost(Ifx_CAN_N *node);

/** \brief Returns the status of Tx Event Fifo Full
 * \param node Specifies the pointer to the CAN Node registers
 * \return Returns status of Tx Event Fifo Full\n
 * True : Fifo full\n
 * False : Fifo not full
 */
IFX_INLINE boolean IfxCan_Node_isTxEventFifoFull(Ifx_CAN_N *node);

/** \brief Sets Tx Event Fifo Size
 * \param node Specifies the pointer to the CAN Node registers
 * \param size Tx Event Fifo Size
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxEventFifoSize(Ifx_CAN_N *node, uint8 size);

/** \brief Sets Tx Event Fifo Start Address
 * \param node Specifies the pointer to the CAN Node registers
 * \param address Tx Event Fifo Start Address
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxEventFifoStartAddress(Ifx_CAN_N *node, uint16 address);

/** \brief Sets Tx Event Fifo Watermark Level
 * \param node Specifies the pointer to the CAN Node registers
 * \param level Tx Event Fifo Watermark Level
 * \return None
 */
IFX_INLINE void IfxCan_Node_setTxEventFifoWatermarkLevel(Ifx_CAN_N *node, uint8 level);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns CAN frame mode of operation for a Tx Event Fifo Element
 * \param node Specifies the pointer to the CAN Node registers
 * \param txEventFifoElement Tx Event Fifo Element
 * \return CAN frame mode
 */
IFX_EXTERN IfxCan_FrameMode IfxCan_Node_getFrameModeFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement);

/** \brief Returns the address of selected Tx Event Fifo element
 * \param node Specifies the pointer to the CAN Node registers
 * \param ramBaseAddress Message RAM base address of CAN module
 * \param txEventFifoStartAddress Start address of Tx Event Fifo section in the Message RAM
 * \param txEventFifoNumber Tx Event Fifo element number
 * \return Tx Event Fifo Element Address
 */
IFX_EXTERN Ifx_CAN_TXEVENT *IfxCan_Node_getTxEventFifoElementAddress(Ifx_CAN_N *node, uint32 ramBaseAddress, uint16 txEventFifoStartAddress, uint8 txEventFifoNumber);

/** \} */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the address of interrupt node source register
 * \param can Specifies the pointer to the CAN registers
 * \param interruptLine Interrupt line number
 * \return Address of interrupt node source register
 */
IFX_EXTERN volatile Ifx_SRC_SRCR *IfxCan_getSrcPointer(Ifx_CAN *can, IfxCan_InterruptLine interruptLine);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxCan_Node_acceptRemoteFramesWithStandardId(Ifx_CAN_N *node)
{
    node->GFC.B.RRFS = 0U;
}


IFX_INLINE void IfxCan_Node_acceptRemoteFrameswithExtendedId(Ifx_CAN_N *node)
{
    node->GFC.B.RRFE = 0U;
}


IFX_INLINE void IfxCan_Node_clearInterruptFlag(Ifx_CAN_N *node, IfxCan_Interrupt interrupt)
{
    uint32 value = (1U << interrupt);
    node->IR.U = value;
}


IFX_INLINE void IfxCan_Node_configureExtendedFilterForNonMatchingFrames(Ifx_CAN_N *node, IfxCan_NonMatchingFrame filter)
{
    node->GFC.B.ANFE = filter;
}


IFX_INLINE void IfxCan_Node_configureStandardFilterForNonMatchingFrames(Ifx_CAN_N *node, IfxCan_NonMatchingFrame filter)
{
    node->GFC.B.ANFS = filter;
}


IFX_INLINE void IfxCan_Node_disableConfigurationChange(Ifx_CAN_N *node)
{
    node->CCCR.B.CCE = 0;

    while (node->CCCR.B.CCE != 0)
    {}

    node->CCCR.B.INIT = 0;

    while (node->CCCR.B.INIT != 0)
    {}
}


IFX_INLINE void IfxCan_Node_disableInterrupt(Ifx_CAN_N *node, IfxCan_Interrupt interrupt)
{
    uint32 mask = (1U << interrupt);
    node->IE.U = node->IE.U & ~(mask);
}


IFX_INLINE void IfxCan_Node_disableTxBufferCancellationFinishedInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32 mask = (1U << txBufferId);
    node->TX.BCIE.U = node->TX.BCIE.U & ~(mask);
}


IFX_INLINE void IfxCan_Node_disableTxBufferTransmissionInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32 mask = (1U << txBufferId);
    node->TX.BTIE.U = node->TX.BTIE.U & ~(mask);
}


IFX_INLINE void IfxCan_Node_enableConfigurationChange(Ifx_CAN_N *node)
{
    Ifx_CAN_N_CCCR cccr;

    /* If INIT already set, clear it before setting again. */
    /* The module needs some time if INIT was rewritten !*/
    if (node->CCCR.B.INIT == 1)
    {
        node->CCCR.B.CCE = 0;

        while (node->CCCR.B.CCE != 0)
        {}

        node->CCCR.B.INIT = 0;

        while (node->CCCR.B.INIT != 0)
        {}
    }

    node->CCCR.B.INIT = 1;

    while (node->CCCR.B.INIT != 1)
    {}

    {
        cccr.U       = node->CCCR.U;
        cccr.B.INIT  = 1;
        cccr.B.CCE   = 1;
        node->CCCR.U = cccr.U;
    }
}


IFX_INLINE void IfxCan_Node_enableInterrupt(Ifx_CAN_N *node, IfxCan_Interrupt interrupt)
{
    uint32 mask = (1U << interrupt);
    node->IE.U = node->IE.U | (mask);
}


IFX_INLINE void IfxCan_Node_enableLoopbackMode(Ifx_CAN_N *node)
{
    node->NPCR.B.LBM = 1;
}


IFX_INLINE void IfxCan_Node_enableTxBufferCancellationFinishedInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32 mask = (1U << txBufferId);
    node->TX.BCIE.U = node->TX.BCIE.U | (mask);
}


IFX_INLINE void IfxCan_Node_enableTxBufferTransmissionInterrupt(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32 mask = (1U << txBufferId);
    node->TX.BTIE.U = node->TX.BTIE.U | (mask);
}


IFX_INLINE boolean IfxCan_Node_getBRSFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

    return txEventFifoElement->E1.B.BRS;
}


IFX_INLINE uint32 IfxCan_Node_getDLCFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

    return (IfxCan_DataLengthCode)txEventFifoElement->E1.B.DLC;
}


IFX_INLINE uint32 IfxCan_Node_getDataLengthCode(Ifx_CAN_N *node, Ifx_CAN_RXMSG *rxBufferElement)
{

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

    return (IfxCan_DataLengthCode)rxBufferElement->R1.B.DLC;
}


IFX_INLINE boolean IfxCan_Node_getESIFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{
    return txEventFifoElement->E0.B.ESI;

	/* MJB get rid of warning with pointless read */
    txEventFifoElement->E0.U = node->ACCENNODE0.U;
}


IFX_INLINE boolean IfxCan_Node_getFDFFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{
    return txEventFifoElement->E1.B.FDF;

	/* MJB get rid of warning with pointless read */
    txEventFifoElement->E0.U = node->ACCENNODE0.U;
}


IFX_INLINE boolean IfxCan_Node_getInterruptFlagStatus(Ifx_CAN_N *node, IfxCan_Interrupt interrupt)
{
    uint32  mask   = (1U << interrupt);
    boolean status = (node->IR.U & mask) != 0;
    return status;
}


IFX_INLINE uint8 IfxCan_Node_getMMFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{
    return (uint8)txEventFifoElement->E1.B.MM;

	/* MJB get rid of warning with pointless read */
    txEventFifoElement->E0.U = node->ACCENNODE0.U;
}


IFX_INLINE uint32 IfxCan_Node_getMesssageId(Ifx_CAN_N *node, Ifx_CAN_RXMSG *rxBufferElement)
{
    /* get identifier extention */
    IfxCan_MessageIdLength messageIdLength = (IfxCan_MessageIdLength)rxBufferElement->R0.B.XTD;

    /* get identifier */
    return rxBufferElement->R0.B.ID >> ((messageIdLength != IfxCan_MessageIdLength_standard) ? 0 : 18);

	/* MJB get rid of warning with pointless read */
    rxBufferElement->R0.U = node->ACCENNODE0.U;
}


IFX_INLINE uint32 IfxCan_Node_getMesssageIdFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

    /* get identifier extention */
    IfxCan_MessageIdLength messageIdLength = (IfxCan_MessageIdLength)txEventFifoElement->E0.B.XTD;

    /* get identifier */
    return txEventFifoElement->E0.B.ID >> ((messageIdLength != IfxCan_MessageIdLength_standard) ? 0 : 18);
}


IFX_INLINE boolean IfxCan_Node_getRTRFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{
	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

    return txEventFifoElement->E0.B.RTR;
}


IFX_INLINE uint8 IfxCan_Node_getRxFifo0FillLevel(Ifx_CAN_N *node)
{
    return node->RX.F0S.B.F0FL;
}


IFX_INLINE IfxCan_RxBufferId IfxCan_Node_getRxFifo0GetIndex(Ifx_CAN_N *node)
{
    return (IfxCan_RxBufferId)node->RX.F0S.B.F0GI;
}


IFX_INLINE uint8 IfxCan_Node_getRxFifo1FillLevel(Ifx_CAN_N *node)
{
    return node->RX.F1S.B.F1FL;
}


IFX_INLINE IfxCan_RxBufferId IfxCan_Node_getRxFifo1GetIndex(Ifx_CAN_N *node)
{
    return (IfxCan_RxBufferId)node->RX.F1S.B.F1GI;
}


IFX_INLINE uint16 IfxCan_Node_getTXTSFromTxEventFifo(Ifx_CAN_N *node, Ifx_CAN_TXEVENT *txEventFifoElement)
{
	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

    return (uint16)txEventFifoElement->E1.B.TXTS;
}


IFX_INLINE uint8 IfxCan_Node_getTxEventFifoAcknowledgeIndex(Ifx_CAN_N *node)
{
    return (uint8)node->TX.EFA.B.EFAI;
}


IFX_INLINE uint8 IfxCan_Node_getTxEventFifoFillLevel(Ifx_CAN_N *node)
{
    return (uint8)node->TX.EFS.B.EFFL;
}


IFX_INLINE uint8 IfxCan_Node_getTxEventFifoGetIndex(Ifx_CAN_N *node)
{
    return (uint8)node->TX.EFS.B.EFGI;
}


IFX_INLINE uint8 IfxCan_Node_getTxEventFifoPutIndex(Ifx_CAN_N *node)
{
    return (uint8)node->TX.EFS.B.EFPI;
}


IFX_INLINE uint8 IfxCan_Node_getTxEventFifoSize(Ifx_CAN_N *node)
{
    return (uint8)node->TX.EFC.B.EFS;
}


IFX_INLINE uint16 IfxCan_Node_getTxEventFifoStartAddress(Ifx_CAN_N *node)
{
    return (uint16)node->TX.EFC.B.EFSA;
}


IFX_INLINE uint8 IfxCan_Node_getTxEventFifoWatermarkLevel(Ifx_CAN_N *node)
{
    return (uint8)node->TX.EFC.B.EFWM;
}


IFX_INLINE IfxCan_TxBufferId IfxCan_Node_getTxFifoQueuePutIndex(Ifx_CAN_N *node)
{
    return (IfxCan_TxBufferId)node->TX.FQS.B.TFQPI;
}


IFX_INLINE boolean IfxCan_Node_isNodeSynchronized(Ifx_CAN_N *node)
{
    return (boolean)((node->PSR.B.ACT != 0) ? 1 : 0);
}


IFX_INLINE boolean IfxCan_Node_isTxBufferCancellationFinished(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32  mask    = (1U << txBufferId);
    boolean tempVar = (boolean)(node->TX.BTO.U & mask);
    return tempVar;
}


IFX_INLINE boolean IfxCan_Node_isTxBufferRequestPending(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32  mask    = (1U << txBufferId);
    boolean tempVar = (boolean)(node->TX.BRP.U & mask);
    return tempVar;
}


IFX_INLINE boolean IfxCan_Node_isTxBufferTransmissionOccured(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32 mask = (1U << txBufferId);
    return (boolean)(node->TX.BTO.U & mask);
}


IFX_INLINE boolean IfxCan_Node_isTxEventFifoElementLost(Ifx_CAN_N *node)
{
    return node->TX.EFS.B.TEFL;
}


IFX_INLINE boolean IfxCan_Node_isTxEventFifoFull(Ifx_CAN_N *node)
{
    return node->TX.EFS.B.EFF;
}


IFX_INLINE boolean IfxCan_Node_isTxFifoQueueFull(Ifx_CAN_N *node)
{
    return node->TX.FQS.B.TFQF;
}


IFX_INLINE void IfxCan_Node_pauseTransmission(Ifx_CAN_N *node, boolean enable)
{
    node->CCCR.B.TXP = enable ? 1 : 0;
}


IFX_INLINE void IfxCan_Node_rejectRemoteFramesWithExtendedId(Ifx_CAN_N *node)
{
    node->GFC.B.RRFE = 1U;
}


IFX_INLINE void IfxCan_Node_rejectRemoteFramesWithStandardId(Ifx_CAN_N *node)
{
    node->GFC.B.RRFS = 1U;
}


IFX_INLINE void IfxCan_Node_setDataLengthCode(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, IfxCan_DataLengthCode dataLengthCode)
{
    txBufferElement->T1.B.DLC = dataLengthCode;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setDedicatedTxBuffersNumber(Ifx_CAN_N *node, uint8 number)
{
    node->TX.BC.B.NDTB = number;
}


IFX_INLINE void IfxCan_Node_setErrorStateIndicator(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, boolean enable)
{
    txBufferElement->T0.B.ESI = enable ? 1 : 0;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setExtendedFilterConfiguration(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, IfxCan_FilterElementConfiguration filterElementConfiguration)
{
    extendedFilterElement->F0.B.EFEC = filterElementConfiguration;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;
}


IFX_INLINE void IfxCan_Node_setExtendedFilterId1(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, uint32 id)
{
    extendedFilterElement->F0.B.EFID1 = id;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setExtendedFilterId2(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, uint32 id)
{
    extendedFilterElement->F1.B.EFID2 = id;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setExtendedFilterListSize(Ifx_CAN_N *node, uint8 size)
{
    node->XIDFC.B.LSE = size;
}


IFX_INLINE void IfxCan_Node_setExtendedFilterListStartAddress(Ifx_CAN_N *node, uint16 address)
{
    node->XIDFC.B.FLESA = address >> 2;
}


IFX_INLINE void IfxCan_Node_setExtendedFilterRxBufferOffset(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, IfxCan_RxBufferId rxBufferNumber)
{
    extendedFilterElement->F1.B.EFID2 = (uint8)rxBufferNumber;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;
}


IFX_INLINE void IfxCan_Node_setExtendedFilterType(Ifx_CAN_N *node, Ifx_CAN_EXTMSG *extendedFilterElement, IfxCan_FilterType filterType)
{
    extendedFilterElement->F1.B.EFT = filterType;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setInitialisation(Ifx_CAN_N *node, boolean enable)
{
    node->CCCR.B.INIT = enable ? 1 : 0;
}


IFX_INLINE void IfxCan_Node_setMessageMarker(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, IfxCan_TxBufferId bufferId)
{
    txBufferElement->T1.B.MM = bufferId;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;
}


IFX_INLINE void IfxCan_Node_setMesssageId(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, uint32 messageId, IfxCan_MessageIdLength messageIdLength)
{
    /* set identifier extention */
    txBufferElement->T0.B.XTD = (messageIdLength != IfxCan_MessageIdLength_extended) ? 0 : 1;
    /* set identifier */
    txBufferElement->T0.B.ID  = messageId << ((messageIdLength != IfxCan_MessageIdLength_standard) ? 0 : 18);

	/* MJB get rid of warning with pointless read */
    messageIdLength = (IfxCan_MessageIdLength)node->ACCENNODE0.U;
}


IFX_INLINE void IfxCan_Node_setRemoteTransmitRequest(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, boolean enable)
{
    txBufferElement->T0.B.RTR = enable ? 1 : 0;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setRxBufferDataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size)
{
    node->RX.ESC.B.RBDS = size;
}


IFX_INLINE void IfxCan_Node_setRxBuffersStartAddress(Ifx_CAN_N *node, uint16 address)
{
    node->RX.BC.B.RBSA = address >> 2;
}


IFX_INLINE void IfxCan_Node_setRxFifo0AcknowledgeIndex(Ifx_CAN_N *node, IfxCan_RxBufferId RxBufferNumber)
{
    node->RX.F0A.B.F0AI = RxBufferNumber;
}


IFX_INLINE void IfxCan_Node_setRxFifo0DataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size)
{
    node->RX.ESC.B.F0DS = size;
}


IFX_INLINE void IfxCan_Node_setRxFifo0OperatingMode(Ifx_CAN_N *node, IfxCan_RxFifoMode mode)
{
    node->RX.F0C.B.F0OM = mode;
}


IFX_INLINE void IfxCan_Node_setRxFifo0Size(Ifx_CAN_N *node, uint8 size)
{
    node->RX.F0C.B.F0S = size;
}


IFX_INLINE void IfxCan_Node_setRxFifo0StartAddress(Ifx_CAN_N *node, uint16 address)
{
    node->RX.F0C.B.F0SA = address >> 2;
}


IFX_INLINE void IfxCan_Node_setRxFifo0WatermarkLevel(Ifx_CAN_N *node, uint8 level)
{
    node->RX.F0C.B.F0WM = level;
}


IFX_INLINE void IfxCan_Node_setRxFifo1AcknowledgeIndex(Ifx_CAN_N *node, IfxCan_RxBufferId RxBufferNumber)
{
    node->RX.F1A.B.F1AI = RxBufferNumber;
}


IFX_INLINE void IfxCan_Node_setRxFifo1DataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size)
{
    node->RX.ESC.B.F1DS = size;
}


IFX_INLINE void IfxCan_Node_setRxFifo1OperatingMode(Ifx_CAN_N *node, IfxCan_RxFifoMode mode)
{
    node->RX.F1C.B.F1OM = mode;
}


IFX_INLINE void IfxCan_Node_setRxFifo1Size(Ifx_CAN_N *node, uint8 size)
{
    node->RX.F1C.B.F1S = size;
}


IFX_INLINE void IfxCan_Node_setRxFifo1StartAddress(Ifx_CAN_N *node, uint16 address)
{
    node->RX.F1C.B.F1SA = address >> 2;
}


IFX_INLINE void IfxCan_Node_setRxFifo1WatermarkLevel(Ifx_CAN_N *node, uint8 level)
{
    node->RX.F1C.B.F1WM = level;
}


IFX_INLINE void IfxCan_Node_setStandardFilterConfiguration(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, IfxCan_FilterElementConfiguration filterElementConfiguration)
{
    standardFilterElement->S0.B.SFEC = filterElementConfiguration;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setStandardFilterId1(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, uint32 id)
{

    standardFilterElement->S0.B.SFID1 = id;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setStandardFilterId2(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, uint32 id)
{
    standardFilterElement->S0.B.SFID2 = id;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setStandardFilterListSize(Ifx_CAN_N *node, uint8 size)
{
    node->SIDFC.B.LSS = size;
}


IFX_INLINE void IfxCan_Node_setStandardFilterListStartAddress(Ifx_CAN_N *node, uint16 address)
{
    node->SIDFC.B.FLSSA = address >> 2;
}


IFX_INLINE void IfxCan_Node_setStandardFilterRxBufferOffset(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, IfxCan_RxBufferId rxBufferNumber)
{
    standardFilterElement->S0.B.SFID2 = (uint8)rxBufferNumber;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setStandardFilterType(Ifx_CAN_N *node, Ifx_CAN_STDMSG *standardFilterElement, IfxCan_FilterType filterType)
{
    standardFilterElement->S0.B.SFT = filterType;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setTransceiverDelayCompensationOffset(Ifx_CAN_N *node, uint8 delay)
{
    /* enable Transceiver Delay Compensation */
    node->DBTP.B.TDC  = 1;
    /* set Transceiver Delay Compensation offset */
    node->TDCR.B.TDCO = delay;
}


IFX_INLINE void IfxCan_Node_setTransmitFifoQueueMode(Ifx_CAN_N *node, IfxCan_TxMode mode)
{
    if ((mode == IfxCan_TxMode_fifo) || (mode == IfxCan_TxMode_queue))
    {
        node->TX.BC.B.TFQM = mode;
    }
    else
    {
        IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, FALSE); /* wrong selection  */
    }
}


IFX_INLINE void IfxCan_Node_setTransmitFifoQueueSize(Ifx_CAN_N *node, uint8 number)
{
    node->TX.BC.B.TFQS = number;
}


IFX_INLINE void IfxCan_Node_setTxBufferAddRequest(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32 mask = (1U << txBufferId);
    node->TX.BAR.U = node->TX.BAR.U | (mask);
}


IFX_INLINE void IfxCan_Node_setTxBufferCancellationRequest(Ifx_CAN_N *node, IfxCan_TxBufferId txBufferId)
{
    uint32 mask = (1U << txBufferId);
    node->TX.BCR.U = node->TX.BCR.U | (mask);
}


IFX_INLINE void IfxCan_Node_setTxBufferDataFieldSize(Ifx_CAN_N *node, IfxCan_DataFieldSize size)
{
    node->TX.ESC.B.TBDS = size;
}


IFX_INLINE void IfxCan_Node_setTxBuffersStartAddress(Ifx_CAN_N *node, uint16 address)
{
    node->TX.BC.B.TBSA = address >> 2;
}


IFX_INLINE void IfxCan_Node_setTxEventFifoControl(Ifx_CAN_N *node, Ifx_CAN_TXMSG *txBufferElement, boolean enable)
{
    txBufferElement->T1.B.EFC = enable ? 1 : 0;

	/* MJB get rid of warning with pointless read */
    DummyVar = node->ACCENNODE0.U;

}


IFX_INLINE void IfxCan_Node_setTxEventFifoSize(Ifx_CAN_N *node, uint8 size)
{
    node->TX.EFC.B.EFS = size;
}


IFX_INLINE void IfxCan_Node_setTxEventFifoStartAddress(Ifx_CAN_N *node, uint16 address)
{
    node->TX.EFC.B.EFSA = address >> 2;
}


IFX_INLINE void IfxCan_Node_setTxEventFifoWatermarkLevel(Ifx_CAN_N *node, uint8 level)
{
    node->TX.EFC.B.EFWM = level;
}


IFX_INLINE Ifx_CAN_N *IfxCan_getNodePointer(Ifx_CAN *can, IfxCan_NodeId nodeId)
{
    return &(can->N[nodeId]);
}


IFX_INLINE boolean IfxCan_isModuleEnabled(Ifx_CAN *can)
{
    return can->CLC.B.DISS == 0;
}


IFX_INLINE boolean IfxCan_isModuleSuspended(Ifx_CAN *can)
{
    Ifx_CAN_OCS ocs;

    // read the status
    ocs.U = can->OCS.U;

    // return the status
    return ocs.B.SUSSTA;
}


IFX_INLINE void IfxCan_setSleepMode(Ifx_CAN *can, IfxCan_SleepMode mode)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    can->CLC.B.EDIS = mode;
    IfxScuWdt_setCpuEndinit(passwd);
}


IFX_INLINE void IfxCan_setSuspendMode(Ifx_CAN *can, IfxCan_SuspendMode mode)
{
    Ifx_CAN_OCS ocs;

    // remove protection and configure the suspend mode.
    ocs.B.SUS_P = 1;
    ocs.B.SUS   = mode;
    can->OCS.U  = ocs.U;
}


#endif /* IFXCAN_H */
