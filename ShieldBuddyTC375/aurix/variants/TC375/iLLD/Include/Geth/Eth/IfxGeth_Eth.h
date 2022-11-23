/**
 * \file IfxGeth_Eth.h
 * \brief GETH ETH details
 * \ingroup IfxLld_Geth
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
 * \defgroup IfxLld_Geth_Eth_Usage How to use the Geth Eth Interface driver?
 * \ingroup IfxLld_Geth
 *
 * In the following sections it will be described, how to integrate the driver into the application framework.
 *
 * \section IfxLld_Geth_Eth_Preparation Preparation
 * \subsection IfxLld_Geth_Eth_Include Include Files
 *
 * Include following header file into your C code:
 * \code
 * #include <Geth/Eth/IfxGeth_Eth.h>
 * \endcode
 *
 * \subsection IfxLld_Geth_Eth_Variables Variables
 *
 * Declare the Geth handle and the Data buffers as global variables in your C code:
 *
 * \code
 * // used globally
 * IfxGeth_Eth geth;
 *
 * #define IFXGETH_MAX_TX_DESCRIPTORS 4
 * #define IFXGETH_MAX_RX_DESCRIPTORS 4
 *
 * #define IFXGETH_MAX_TX_BUFFER_SIZE 256 // bytes
 * #define IFXGETH_MAX_RX_BUFFER_SIZE 256 // bytes
 * #define IFXGETH_HEADER_LENGTH 14 // words
 *
 * uint8 channel0TxBuffer1[IFXGETH_MAX_TX_BUFFER_SIZE];
 * uint8 channel0RxBuffer1[IFXGETH_MAX_RX_BUFFER_SIZE];
 *
 * const uint8 myMacAddress[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};
 * \endcode
 *
 * \subsection IfxLld_Geth_Eth_Init Module Initialisation
 *
 * The module initialisation can be done in the same function. Here an example:
 * \code
 * // create module config
 * IfxGeth_Eth_Config config;
 *
 * IfxGeth_Eth_initModuleConfig(&config, &MODULE_GETH);
 *
 * config.phyInterfaceMode = IfxGeth_PhyInterfaceMode_rmii;
 *
 * // MAC core configuration
 * config.macConfig.lineSpeed = IfxGeth_LineSpeed_100Mbps;
 * config.macConfig.loopbackMode = IfxGeth_LoopbackMode_disable;
 * config.macConfig.macAddress[0] = myMacAddress[0];
 * config.macConfig.macAddress[1] = myMacAddress[1];
 * config.macConfig.macAddress[2] = myMacAddress[2];
 * config.macConfig.macAddress[3] = myMacAddress[3];
 * config.macConfig.macAddress[4] = myMacAddress[4];
 * config.macConfig.macAddress[5] = myMacAddress[5];
 *
 * // MTL configuration
 * config.mtlConfig.numOfTxQueues                =    1;
 * config.mtlConfig.numOfRxQueues                =    1;
 * config.mtlConfig.txQueueConfig[0].txQueueSize                  =    IfxGeth_QueueSize_256Bytes;
 * config.mtlConfig.rxQueueConfig[0].rxQueueSize                  =    IfxGeth_QueueSize_256Bytes;
 * config.mtlConfig.rxQueueConfig[0].rxDmaChannelMap              =    IfxEth_RxDmaChannel_0;
 *
 * config.dmaConfig.numOfTxChannels = 1;
 * config.dmaConfig.numOfRxChannels = 1;
 * config.dmaConfig.txChannel[0].channelId = IfxGeth_TxDmaChannel_0;
 * config.dmaConfig.txChannel[0].txDescrList = &IfxGeth_txDescrList[0];
 * config.dmaConfig.txChannel[0].txBuffer1StartAddress = &channel0TxBuffer1[0]; // user buffer
 * config.dmaConfig.txChannel[0].txBuffer1Size = IFXGETH_MAX_TX_BUFFER_SIZE; // used to calculate the next descriptor  buffer offset
 *
 * config.dmaConfig.rxChannel[0].channelId = IfxGeth_RxDmaChannel_0;
 * config.dmaConfig.rxChannel[0].rxDescrList = &IfxGeth_rxDescrList[0];
 * config.dmaConfig.rxChannel[0].rxBuffer1StartAddress = &channel0RxBuffer1[0]; // user buffer
 * config.dmaConfig.rxChannel[0].rxBuffer1Size = IFXGETH_MAX_RX_BUFFER_SIZE; // user defined variable
 *
 * config.dmaConfig.txInterrupt[0].channelId = IfxGeth_DmaChannel_0;
 * config.dmaConfig.txInterrupt[0].priority = 10;	// priority
 * config.dmaConfig.txInterrupt[0].provider = IfxSrc_Tos_cpu0;
 * config.dmaConfig.rxInterrupt[0].channelId = IfxGeth_DmaChannel_0;
 * config.dmaConfig.rxInterrupt[0].priority = 11;	// priority
 * config.dmaConfig.rxInterrupt[0].provider = IfxSrc_Tos_cpu0;
 *
 * // initialise themodule
 * IfxGeth_Eth_initModule(&geth, &config);
 *
 * // and enable transmitter/receiver
 * IfxGeth_Eth_startTransmitters(&geth, 1);
 * IfxGeth_Eth_startReceivers(&geth, 1);
 *
 * The ETH is ready for use now!
 *
 *
 * \section IfxLld_Geth_Eth_DataTransfers Data Transfers
 * \subsection  IfxLld_Geth_Eth_DataTransfers_Transmit Transmission
 *
 * uint32 payloadLength = 8; // 8 bytes
 * uint32 packetLength = IFXGETH_HEADER_LENGTH + payloadLength;
 *
 * // get free buffer
 * uint8 *pTxBuf = (uint8*) IfxGeth_Eth_waitTransmitBuffer(&geth, IfxGeth_TxDmaChannel_0);
 * // write the header
 * IfxGeth_Eth_writeHeader(&geth, pTxBuf, (uint8 *)myMacAddress, (uint8 *)myMacAddress, payloadLength);
 * // write the payload
 * uint32 i;
 * for(i = IFXGETH_HEADER_LENGTH; i < packetLength; ++i) {
 *     pTxBuf[i] = i - 13;
 * }
 *
 * // clear the TX interrupt status
 * IfxGeth_dma_clearInterruptFlag(geth->gethSFR, IfxGeth_DmaChannel_0,IfxGeth_DmaInterruptFlag_transmitInterrupt) ;
 *
 * IfxGeth_Eth_sendTransmitBuffer(&geth, packetLength, IfxGeth_TxDmaChannel_0);
 *
 * // wait until buffer has been transmitted
 * while( IfxGeth_dma_isInterruptFlagSet(geth->gethSFR, IfxGeth_DmaChannel_0, IfxGeth_DmaInterruptFlag_transmitInterrupt) == FALSE );
 *
 * // clear the TX interrupt status for the next interrupt to come
 * IfxGeth_dma_clearInterruptFlag(geth->gethSFR, IfxGeth_DmaChannel_0, IfxGeth_DmaInterruptFlag_transmitInterrupt) ;
 *
 * \subsection  IfxLld_Geth_Eth_DataTransfers_Receive Receive
 *
 * // wait until data is been received
 * while(IfxGeth_Eth_isRxDataAvailable(&geth, IfxGeth_RxDmaChannel_0)!= TRUE);
 *
 * // wake up the receiver and get the recieve buffer
 * uint8 *pRxBuf = (uint8*)IfxGeth_Eth_getReceiveBuffer(&geth, IfxGeth_RxDmaChannel_0);
 *
 * // update the descreptor pointer for next packet
 * // Free the receive buffer, enabling it for the further reception
 * IfxGeth_Eth_freeReceiveBuffer(&geth, IfxGeth_RxDmaChannel_0);
 *
 * // data is available in pRxBuf
 *
 * \defgroup IfxLld_Geth_Eth ETH
 * \ingroup IfxLld_Geth
 * \defgroup IfxLld_Geth_Eth_DataStructures DataStructures
 * \ingroup IfxLld_Geth_Eth
 * \defgroup IfxLld_Geth_Eth_MAC_Functions MAC Functions
 * \ingroup IfxLld_Geth_Eth
 * \defgroup IfxLld_Geth_Eth_Module_Functions Module Functions
 * \ingroup IfxLld_Geth_Eth
 * \defgroup IfxLld_Geth_Eth_MTL_Functions MTL Functions
 * \ingroup IfxLld_Geth_Eth
 * \defgroup IfxLld_Geth_Eth_DMA_Functions DMA Functions
 * \ingroup IfxLld_Geth_Eth
 * \defgroup IfxLld_Geth_Eth_Variables Variables
 * \ingroup IfxLld_Geth_Eth
 */

#ifndef IFXGETH_ET_H
#define IFXGETH_ET_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Utilities/Ifx_Assert.h"
#include "Geth/Std/IfxGeth.h"
#include "_PinMap/IfxGeth_PinMap.h"
#include "IfxPort_reg.h"
#include "IfxPort_bf.h"

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Geth_Eth_DataStructures
 * \{ */
/** \brief Interrupt configuration structure for DMA Channel
 */
typedef struct
{
    IfxGeth_DmaChannel channelId;       /**< \brief DMA channel ID (irrespective of TX and Rx for interrupt configuration) */
    Ifx_Priority       priority;        /**< \brief Interrupt service priority */
    IfxSrc_Tos         provider;        /**< \brief Interrupt service provider */
} IfxGeth_Eth_DmaInterruptConfig;

/** \brief Port pins for MII mode configuration
 */
typedef struct
{
    IfxGeth_Crs_In     *crs;         /**< \brief pointer to CRS input pin config */
    IfxGeth_Col_In     *col;         /**< \brief pointer to COL input pin config */
    IfxGeth_Txclk_In   *txClk;       /**< \brief Pointer to TXCLK input pin config */
    IfxGeth_Rxclk_In   *rxClk;       /**< \brief Pointer to RXCLK input pin config */
    IfxGeth_Rxdv_In    *rxDv;        /**< \brief Pointer to RXDV input pin config */
    IfxGeth_Rxer_In    *rxEr;        /**< \brief Pointer to RXER input pin config */
    IfxGeth_Rxd_In     *rxd0;        /**< \brief Pointer to RXD0 input pin config */
    IfxGeth_Rxd_In     *rxd1;        /**< \brief Pointer to RXD1 input pin config */
    IfxGeth_Rxd_In     *rxd2;        /**< \brief Pointer to RXD2 input pin config */
    IfxGeth_Rxd_In     *rxd3;        /**< \brief Pointer to RXD3 input pin config */
    IfxGeth_Txen_Out   *txEn;        /**< \brief Pointer to TXEN output pin config */
    IfxGeth_Txer_Out   *txEr;        /**< \brief Pointer to TXER output pin config */
    IfxGeth_Txd_Out    *txd0;        /**< \brief Pointer to TXD0 output pin config */
    IfxGeth_Txd_Out    *txd1;        /**< \brief Pointer to TXD1 output pin config */
    IfxGeth_Txd_Out    *txd2;        /**< \brief Pointer to TXD2 output pin config */
    IfxGeth_Txd_Out    *txd3;        /**< \brief Pointer to TXD3 output pin config */
    IfxGeth_Mdc_Out    *mdc;         /**< \brief Pointer to MDC output pin config */
    IfxGeth_Mdio_InOut *mdio;        /**< \brief Pointer to MDIO pin config */
} IfxGeth_Eth_MiiPins;

/** \brief Interrupt configuration structure for MTL block
 */
typedef struct
{
    IfxGeth_ServiceRequest serviceRequest;       /**< \brief Service Request node for MTL interrupt */
    Ifx_Priority           priority;             /**< \brief Interrupt service priority */
    IfxSrc_Tos             provider;             /**< \brief Interrupt service provider */
} IfxGeth_Eth_MtlInterruptConfig;

/** \brief Port pins for RGMII mode configuration
 */
typedef struct
{
    IfxGeth_Txclk_Out  *txClk;         /**< \brief Pointer to TXCLK input pin config */
    IfxGeth_Txd_Out    *txd0;          /**< \brief Pointer to TXD0 output pin config */
    IfxGeth_Txd_Out    *txd1;          /**< \brief Pointer to TXD1 output pin config */
    IfxGeth_Txd_Out    *txd2;          /**< \brief Pointer to TXD2 output pin config */
    IfxGeth_Txd_Out    *txd3;          /**< \brief Pointer to TXD3 output pin config */
    IfxGeth_Txctl_Out  *txCtl;         /**< \brief Pointer to TXCTL output pin config */
    IfxGeth_Rxclk_In   *rxClk;         /**< \brief Pointer to RXCLK input pin config */
    IfxGeth_Rxd_In     *rxd0;          /**< \brief Pointer to RXD0 input pin config */
    IfxGeth_Rxd_In     *rxd1;          /**< \brief Pointer to RXD1 input pin config */
    IfxGeth_Rxd_In     *rxd2;          /**< \brief Pointer to RXD2 input pin config */
    IfxGeth_Rxd_In     *rxd3;          /**< \brief Pointer to RXD3 input pin config */
    IfxGeth_Rxctl_In   *rxCtl;         /**< \brief Pointer to RXCTL input pin config */
    IfxGeth_Mdc_Out    *mdc;           /**< \brief Pointer to MDC output pin config */
    IfxGeth_Mdio_InOut *mdio;          /**< \brief Pointer to MDIO pin config */
    IfxGeth_Grefclk_In *grefClk;       /**< \brief Pointer to GREFCLK input pin config */
} IfxGeth_Eth_RgmiiPins;

/** \brief Port pins for RMII mode configuration
 */
typedef struct
{
    IfxGeth_Crsdv_In   *crsDiv;       /**< \brief pointer to CRSDIV input pin config */
    IfxGeth_Refclk_In  *refClk;       /**< \brief Pointer to REFCLK input pin config */
    IfxGeth_Rxd_In     *rxd0;         /**< \brief Pointer to RXD0 input pin config */
    IfxGeth_Rxd_In     *rxd1;         /**< \brief Pointer to RXD1 input pin config */
    IfxGeth_Mdio_InOut *mdio;         /**< \brief Pointer to MDIO pin config */
    IfxGeth_Txd_Out    *txd0;         /**< \brief Pointer to TXD0 output pin config */
    IfxGeth_Mdc_Out    *mdc;          /**< \brief Pointer to MDC output pin config */
    IfxGeth_Txd_Out    *txd1;         /**< \brief Pointer to TXD1 output pin config */
    IfxGeth_Txen_Out   *txEn;         /**< \brief Pointer to TXEN output pin config */
} IfxGeth_Eth_RmiiPins;

/** \brief Configuration sturcture for DMA rx channel
 */
typedef struct
{
    IfxGeth_RxDmaChannel   channelId;                   /**< \brief Rx DMA channel Index */
    IfxGeth_DmaBurstLength maxBurstLength;              /**< \brief Maximum burst length of the channel */
    IfxGeth_RxDescrList   *rxDescrList;                 /**< \brief pointer to RX descriptors RAM */
    uint32                *rxBuffer1StartAddress;       /**< \brief Start address of Rx Buffer 1 */
    uint16                 rxBuffer1Size;               /**< \brief Size of Rx Buffer 1 */
} IfxGeth_Eth_RxChannelConfig;

/** \brief Rx Queue Configuration
 */
typedef struct
{
    boolean              storeAndForward;                       /**< \brief Receive Store and Forward Enable/Disable */
    IfxGeth_QueueSize    rxQueueSize;                           /**< \brief Rx Queue size */
    boolean              forwardErrorPacket;                    /**< \brief Error Packet Forwarding Enable/Disable */
    boolean              forwardUndersizedGoodPacket;           /**< \brief Undersized Good Packet Forwarding Enable/Disable */
    boolean              daBasedDmaChannelEnabled;              /**< \brief DA-based DMA Channel Selection Enable/Disable */
    IfxGeth_RxDmaChannel rxDmaChannelMap;                       /**< \brief Mapped DMA Channel of Rx Queue */
    boolean              rxQueueOverflowInterruptEnabled;       /**< \brief Enable/Disable Rx Queue Overflow Interrupt */
} IfxGeth_Eth_RxQueueConfig;

/** \brief Configuration sturcture for DMA tx channel
 */
typedef struct
{
    IfxGeth_TxDmaChannel   channelId;                   /**< \brief Tx DMA channel Index */
    IfxGeth_DmaBurstLength maxBurstLength;              /**< \brief Maximum burst length of the channel */
    IfxGeth_TxDescrList   *txDescrList;                 /**< \brief pointer to TX descriptors RAM */
    uint32                *txBuffer1StartAddress;       /**< \brief Start address of Tx Buffer 1 */
    uint16                 txBuffer1Size;               /**< \brief Size of Tx Buffer 1 */
} IfxGeth_Eth_TxChannelConfig;

/** \brief Tx Queue Configuration
 */
typedef struct
{
    boolean           storeAndForward;                        /**< \brief Transmit Store and Forward Enable/Disable */
    IfxGeth_QueueSize txQueueSize;                            /**< \brief Tx Queue size */
    boolean           txQueueUnderflowInterruptEnabled;       /**< \brief Enable/Disable Tx Queue Underflow Interrupt */
} IfxGeth_Eth_TxQueueConfig;

/** \} */

/** \addtogroup IfxLld_Geth_Eth_DataStructures
 * \{ */
/** \brief Configuration Structure for the DMA initialisation
 */
typedef struct
{
    uint32                         numOfTxChannels;                             /**< \brief Number of Tx Dma channels */
    uint32                         numOfRxChannels;                             /**< \brief Number of Rx Dma channels */
    boolean                        addressAlignedBeatsEnabled;                  /**< \brief Enable/Disable Address Aligned Beats */
    boolean                        fixedBurstEnabled;                           /**< \brief Enable/Disable Fixed Burst length */
    boolean                        mixedBurstEnabled;                           /**< \brief Enable/Disable Mixed Burst length */
    IfxGeth_Eth_TxChannelConfig    txChannel[IFXGETH_NUM_TX_CHANNELS];          /**< \brief Tx Channels configurations of selected Channels */
    IfxGeth_Eth_RxChannelConfig    rxChannel[IFXGETH_NUM_RX_CHANNELS];          /**< \brief Rx Channels configurations of selected Channels */
    IfxGeth_Eth_DmaInterruptConfig txInterrupt[IFXGETH_NUM_DMA_CHANNELS];       /**< \brief Transmit Interrupt configuration structure for DMA Channel */
    IfxGeth_Eth_DmaInterruptConfig rxInterrupt[IFXGETH_NUM_DMA_CHANNELS];       /**< \brief Receive Interrupt configuration structure for DMA Channel */
} IfxGeth_Eth_DmaConfig;

/** \brief Configuration Structure for the MAC initialisation
 */
typedef struct
{
    IfxGeth_DuplexMode   duplexMode;          /**< \brief Duplex Mode */
    IfxGeth_LineSpeed    lineSpeed;           /**< \brief Ethernet Line Speed */
    IfxGeth_LoopbackMode loopbackMode;        /**< \brief Loopback mode enable/disable */
    uint8                macAddress[6];       /**< \brief MAC address for the ethernet, should be unique in the network */
} IfxGeth_Eth_MacConfig;

/** \brief Configuration Structure for the MTL initialisation
 */
typedef struct
{
    uint32                         numOfTxQueues;                        /**< \brief Number of Tx Queues, will also be used to enable the selected number of queues */
    IfxGeth_TxSchedulingAlgorithm  txSchedulingAlgorithm;                /**< \brief Tx Scheduling Algorithm for Tx queues when no of queues are more than 1 */
    uint32                         numOfRxQueues;                        /**< \brief Number of Rx Queues */
    IfxGeth_RxArbitrationAlgorithm rxArbitrationAlgorithm;               /**< \brief Rx Arbitration Algorithm for Rx queues when no of queues are more than 1 */
    IfxGeth_Eth_TxQueueConfig      txQueue[IFXGETH_NUM_TX_QUEUES];       /**< \brief Tx queue configurations of selected queues */
    IfxGeth_Eth_RxQueueConfig      rxQueue[IFXGETH_NUM_RX_QUEUES];       /**< \brief Rx queue configurations of selected queues */
    IfxGeth_Eth_MtlInterruptConfig interrupt;                            /**< \brief Interrupt configuration structure for MTL block */
} IfxGeth_Eth_MtlConfig;

/** \brief Configuration structure for pins
 */
typedef struct
{
    IFX_CONST IfxGeth_Eth_RmiiPins  *rmiiPins;        /**< \brief Structure for RMII pins */
    IFX_CONST IfxGeth_Eth_RgmiiPins *rgmiiPins;       /**< \brief Structure for RGMII pins */
    IFX_CONST IfxGeth_Eth_MiiPins   *miiPins;         /**< \brief Structure for MII pins */
} IfxGeth_Eth_PinConfig;

/** \brief Handle sturcture for DMA rx channel
 */
typedef struct
{
    IfxGeth_RxDmaChannel      channelId;         /**< \brief Rx DMA channel Index */
    IfxGeth_RxDescrList      *rxDescrList;       /**< \brief pointer to RX descriptors RAM */
    volatile IfxGeth_RxDescr *rxDescrPtr;        /**< \brief Pointer to Rx Descriptor (current descriptor) */
    uint32                    rxCount;           /**< \brief Number of frames received */
} IfxGeth_Eth_RxChannel;

/** \brief handle sturcture for DMA tx channel
 */
typedef struct
{
    IfxGeth_TxDmaChannel      channelId;         /**< \brief Tx DMA channel Index */
    IfxGeth_TxDescrList      *txDescrList;       /**< \brief pointer to TX descriptors RAM */
    volatile IfxGeth_TxDescr *txDescrPtr;        /**< \brief Pointer to Tx Descriptor (current descriptor) */
    uint32                    txCount;           /**< \brief Number of frames transmitted */
} IfxGeth_Eth_TxChannel;

/** \} */

/** \addtogroup IfxLld_Geth_Eth_DataStructures
 * \{ */
/** \brief GETH driver Handle
 */
typedef struct
{
    Ifx_GETH             *gethSFR;                                  /**< \brief Pointer to GETH register base address */
    uint32                numOfTxChannels;                          /**< \brief Number of Tx Dma channels */
    uint32                numOfRxChannels;                          /**< \brief Number of Rx Dma channels */
    IfxGeth_Eth_TxChannel txChannel[IFXGETH_NUM_TX_CHANNELS];       /**< \brief Tx Channels handle of selected Channels */
    IfxGeth_Eth_RxChannel rxChannel[IFXGETH_NUM_RX_CHANNELS];       /**< \brief Rx Channels handle of selected Channels */
} IfxGeth_Eth;

/** \brief Configuration Structure for the Module initialisation
 */
typedef struct
{
    Ifx_GETH                *gethSFR;                /**< \brief Pointer to GETH register base address */
    IfxGeth_PhyInterfaceMode phyInterfaceMode;       /**< \brief External Phy Interface RMII Mode */
    IfxGeth_Eth_PinConfig    pins;                   /**< \brief COnfiguration structure for Pins */
    IfxGeth_Eth_MacConfig    mac;                    /**< \brief Configuration Structure for the the MAC initialisation */
    IfxGeth_Eth_MtlConfig    mtl;                    /**< \brief Configuration Structure for the MTL initialisation */
    IfxGeth_Eth_DmaConfig    dma;                    /**< \brief Configuration Structure for the DMA initialisation */
} IfxGeth_Eth_Config;

/** \} */

/** \brief Configuration Structure for TX Frame
 */
typedef struct
{
    IfxGeth_TxDmaChannel channelId;          /**< \brief Tx DMA channel Index */
    uint32               packetLength;       /**< \brief the length of the packet to be transmitted in bytes */
} IfxGeth_Eth_FrameConfig;

/** \addtogroup IfxLld_Geth_Eth_MAC_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Configures the MAC core
 * \param geth GETH driver Handle
 * \param macConfig Configuration Structure for the MAC initialisation
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_MacConfig macConfig;
 * macConfig.duplexMode = IfxGeth_DuplexMode_fullDuplex;
 * macConfig.lineSpeed = IfxGeth_LineSpeed_100Mbps;
 * macConfig.loopbackMode = IfxGeth_LoopbackMode_disable;
 * macConfig.macAddress =  {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};
 *
 * IfxGeth_Eth_configureMacCore(&geth, &macConfig);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_configureMacCore(IfxGeth_Eth *geth, IfxGeth_Eth_MacConfig *macConfig);

/** \} */

/** \addtogroup IfxLld_Geth_Eth_Module_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Waits for one TX buffer becomes available
 * \param geth GETH driver Handle
 * \param channelId Tx channel Id
 * retval non NULL_PTR TX buffer is available at the address pointed by the returned value
 * retval NULL_PTR TX buffer is busy.
 *
 * \code
 *
 * // get free buffer
 * uint8 *pTxBuf = (uint8*) IfxGeth_Eth_waitTransmitBuffer(&geth, IfxGeth_TxDmaChannel_0);
 * \endcode
 *
 */
IFX_INLINE void *IfxGeth_Eth_waitTransmitBuffer(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Gets receive buffer\n
 * note: IfxEth_freeReceiveBuffer() shall be called after the data from the RX buffer has been processed
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return retval NULL_PTR no received frame
 * retval !NULL_PTR a frame has been received
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * uint8 *pRxBuf = (uint8*)IfxGeth_Eth_getReceiveBuffer(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void *IfxGeth_Eth_getReceiveBuffer(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);

/** \brief Get the transmit buffer pointer of current descriptor
 * \param geth GETH driver Handle
 * \param channelId Tx channel Id
 * \return retval NULL_PTR no free transmit buffer is available
 * retval !NULL_PTR a free transmit buffer is available
 */
IFX_EXTERN void *IfxGeth_Eth_getTransmitBuffer(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId);

/** \brief Initialises the Geth Module with given configuration
 * \param geth GETH driver Handle
 * \param config Configuration Structure for the Module initialisation
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 * IfxGeth_Eth_Config config;
 *
 * IfxGeth_Eth_initModuleConfig(&config, &MODULE_GETH);
 * IfxGeth_Eth_initModule(&geth, &config);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_initModule(IfxGeth_Eth *geth, IfxGeth_Eth_Config *config);

/** \brief Initialises the config structure with default values
 * \param config Configuration Structure for the Module initialisation
 * \param gethSFR Pointer to GETH register base address
 * \return None
 *
 * \code
 * IfxGeth_Eth_Config config;
 * IfxGeth_Eth_initModuleConfig(&config, &MODULE_GETH);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_initModuleConfig(IfxGeth_Eth_Config *config, Ifx_GETH *gethSFR);

/** \brief Set up MII mode input pins
 * \param geth GETH driver Handle
 * \param miiPins Mii Pins
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_setupMiiInputPins(IfxGeth_Eth *geth, const IfxGeth_Eth_MiiPins *miiPins);

/** \brief setup MII mode output pins
 * \param geth GETH driver Handle
 * \param miiPins Mii Pins
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_setupMiiOutputPins(IfxGeth_Eth *geth, const IfxGeth_Eth_MiiPins *miiPins);

/** \brief Set up RGMII mode input pins
 * \param geth GETH driver Handle
 * \param rgmiiPins RGMII Pins
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_setupRgmiiInputPins(IfxGeth_Eth *geth, const IfxGeth_Eth_RgmiiPins *rgmiiPins);

/** \brief Set up RGMII mode output pins
 * \param geth GETH driver Handle
 * \param rgmiiPins RGMII Pins
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_setupRgmiiOutputPins(IfxGeth_Eth *geth, const IfxGeth_Eth_RgmiiPins *rgmiiPins);

/** \brief setup RMII mode input pins
 * \param geth GETH driver Handle
 * \param rmiiPins Rmii Pins
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_setupRmiiInputPins(IfxGeth_Eth *geth, const IfxGeth_Eth_RmiiPins *rmiiPins);

/** \brief setup RMII mode output pins
 * \param geth GETH driver Handle
 * \param rmiiPins Rmii Pins
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_setupRmiiOutputPins(IfxGeth_Eth *geth, const IfxGeth_Eth_RmiiPins *rmiiPins);

/** \brief writes the header format into buffrer
 * \param geth GETH driver Handle
 * \param txBuffer pointer to tx buffer
 * \param destinationAddress pointer to destination address
 * \param sourceAddress pointer to source address
 * \param payloadLength size of the payload
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 * //const uint8 myMacAddress[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};   // assumed to be defined globally
 * //#define IFXGETH_MAX_TX_BUFFER_SIZE 256   // assumed to be defined globally
 * //uint8 txBuffer1[IFXGETH_MAX_TX_BUFFER_SIZE];  // assumed to be defined globally
 *
 * // get free buffer
 * uint8 *pTxBuf = (uint8*) IfxGeth_Eth_waitTransmitBuffer(&geth, IfxGeth_TxDmaChannel_0);
 *
 * IfxGeth_Eth_writeHeader(&geth, &pTxBuf, (uint8 *)myMacAddress, (uint8 *)myMacAddress, payloadLength);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_writeHeader(IfxGeth_Eth *geth, uint8 *txBuffer, uint8 *destinationAddress, uint8 *sourceAddress, uint32 payloadLength);

/** \} */

/** \addtogroup IfxLld_Geth_Eth_MTL_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Configures the MTL
 * \param geth GETH driver Handle
 * \param mtlConfig Configuration Structure for the MTL initialisation
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_MtlConfig mtlConfig;
 *
 * mtlConfig.numOfTxQueues                =    1;
 * mtlConfig.txSchedulingAlgorithm        =    IfxGeth_TxSchedulingAlgorithm_wrr;
 * mtlConfig.numOfRxQueues                =    1;
 * mtlConfig.rxArbitrationAlgorithm       =    IfxGeth_RxArbitrationAlgorithm_sp;
 * mtlConfig.txQueueConfig[0].storeAndForward              =    FALSE;
 * mtlConfig.txQueueConfig[0].txQueueSize                  =    IfxGeth_QueueSize_256Bytes;
 * mtlConfig.txQueueConfig[0].txQueueUnderflowInterruptEnabled = FLASE;	// enable if required
 *
 * mtlConfig.rxQueueConfig[0].storeAndForward              =    FALSE;
 * mtlConfig.rxQueueConfig[0].rxQueueSize                  =    IfxGeth_QueueSize_256Bytes;
 * mtlConfig.rxQueueConfig[0].forwardErrorPacket           =    FALSE;
 * mtlConfig.rxQueueConfig[0].forwardUndersizeedGoodPacket    =    FALSE;
 * mtlConfig.rxQueueConfig[0].daBasedDmaChannelEnabled     =    FALSE;
 * mtlConfig.rxQueueConfig[0].rxDmaChannelMap              =    IfxEth_RxDmaChannel_0;
 * mtlConfig.rxQueueConfig[0].rxQueueOverflowInterruptEnabled = FALSE;	// enable if required
 *
 * mtlConfig.interrupt.serviceRequest = IfxGeth_ServiceRequest_1;
 * mtlConfig.interrupt.priority = 0;	// choose priority
 * mtlConfig.interrupt.provider = IfxSrc_Tos_cpu0;
 *
 * IfxGeth_Eth_configureMTL(&geth, &mtlConfig);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_configureMTL(IfxGeth_Eth *geth, IfxGeth_Eth_MtlConfig *mtlConfig);

/** \} */

/** \addtogroup IfxLld_Geth_Eth_DMA_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the pointer to current RX descriptor
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return pointer to base RX descriptor in the list
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_RxDescr *descr = IfxGeth_Eth_getActualRxDescriptor(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_INLINE volatile IfxGeth_RxDescr *IfxGeth_Eth_getActualRxDescriptor(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);

/** \brief Returns the pointer to current TX descriptor
 * \param geth GETH driver Handle
 * \param channelId Tx channel Id
 * \return pointer to base TX descriptor in the list
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_TxDescr *descr = IfxGeth_Eth_getActualTxDescriptor(&geth, IfxGeth_TxDmaChannel_0);
 * \endcode
 *
 */
IFX_INLINE volatile IfxGeth_TxDescr *IfxGeth_Eth_getActualTxDescriptor(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId);

/** \brief Checks whether one or more RX data is available
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return TRUE : if one or more RX data available
 * FALSE: if Rx data not available
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * boolean status = IfxGeth_Eth_isRxDataAvailable(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_INLINE boolean IfxGeth_Eth_isRxDataAvailable(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Configures the DMA
 * \param geth GETH driver Handle
 * \param dmaConfig Configuration Structure for the DMA initialisation
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 * IfxGeth_Eth_DmaConfig dmaConfig;
 * dmaConfig.numOfTxChannels = 1;
 * dmaConfig.numOfRxChannels = 1;
 *
 * dmaConfig.txChannel[0].channelId = IfxGeth_TxDmaChannel_0;
 * dmaConfig.txChannel[0].txDescrList = &IfxGeth_txDescrList[0];
 * dmaConfig.txChannel[0].txBuffer1StartAddress = &txBuffer[0][0]; //  user buffer
 * dmaConfig.txChannel[0].txBuffer1Size = TX_BUFFER1_SIZE; // user defined variable
 *
 * dmaConfig.rxChannel[0].channelId = IfxGeth_RxDmaChannel_0;
 * dmaConfig.rxChannel[0].rxDescrList = &IfxGeth_rxDescrList[0];
 * dmaConfig.rxChannel[0].rxBuffer1StartAddress = &rxBuffer[0][0]; // user buffer
 * dmaConfig.rxChannel[0].rxBuffer1Size = RX_BUFFER1_SIZE; // user defined variable
 *
 * dmaConfig.txInterrupt[0].channelId = IfxGeth_DmaChannel_0;
 * dmaConfig.txInterrupt[0].priority = 0;	// choose priority
 * dmaConfig.txInterrupt[0].provider = IfxSrc_Tos_cpu0;
 *
 * dmaConfig.rxInterrupt[0].channelId = IfxGeth_DmaChannel_0;
 * dmaConfig.rxInterrupt[0].priority = 0;	// choose priority
 * dmaConfig.rxInterrupt[0].provider = IfxSrc_Tos_cpu0;
 *
 * IfxGeth_Eth_configureDMA(&geth, &dmaConfig);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_configureDMA(IfxGeth_Eth *geth, IfxGeth_Eth_DmaConfig *dmaConfig);

/** \brief Initialises the Rx descriptors of a single channel
 * \param geth GETH driver Handle
 * \param config Rx channel configuration
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_initReceiveDescriptors(IfxGeth_Eth *geth, IfxGeth_Eth_RxChannelConfig *config);

/** \brief Initialises the Tx descriptors of a single channel
 * \param geth GETH driver Handle
 * \param config Tx channel configuration
 * \return None
 */
IFX_EXTERN void IfxGeth_Eth_initTransmitDescriptors(IfxGeth_Eth *geth, IfxGeth_Eth_TxChannelConfig *config);

/** \brief Transmits a frame from a single channel
 * \param geth GETH driver Handle
 * \param config Tx Frame configuration
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 * //const uint8 myMacAddress[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};   // assumed to be defined globally
 *
 * uint32 payloadLength = 8; // 8 bytes
 * uint32 packetLength = IFXGETH_HEADER_LENGTH + payloadLength; // IFXGETH_HEADER_LENGTH defined by user
 * IfxGeth_FrameConfig frameConfig;
 * frameConfig.channelId = IfxGeth_TxDmaChannel_0;
 * frameConfig.packetLength = packetLength;
 *
 * // get free buffer
 * uint8 *pTxBuf = (uint8*) IfxGeth_Eth_waitTransmitBuffer(&geth, IfxGeth_TxDmaChannel_0);
 * // write the header
 * IfxGeth_Eth_writeHeader(&geth, pTxBuf, (uint8 *)myMacAddress, (uint8 *)myMacAddress, payloadLength);
 * // write the payload
 * uint32 i;
 * for(i = IFXGETH_HEADER_LENGTH; i < packetLength; ++i) {
 *     pTxBuf[i] = i - 13;
 * }
 *
 * // clear the TX interrupt status
 * IfxGeth_dma_clearInterruptFlag(geth->gethSFR, IfxGeth_DmaChannel_0, IfxGeth_DmaInterruptFlag_transmitInterrupt) ;
 *
 * IfxGeth_Eth_sendFrame(&geth, &frameConfig);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_sendFrame(IfxGeth_Eth *geth, IfxGeth_Eth_FrameConfig *config);

/** \brief Transmits a frame from a single channel
 * \param geth GETH driver Handle
 * \param packetLength Length of the packet to be transmitted in bytes
 * \param channelId Tx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 * //const uint8 myMacAddress[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};   // assumed to be defined globally
 *
 * uint32 payloadLength = 8; // 8 bytes
 * uint32 packetLength = IFXGETH_HEADER_LENGTH + payloadLength; // IFXGETH_HEADER_LENGTH defined by user
 *
 * // get free buffer
 * uint8 *pTxBuf = (uint8*) IfxGeth_Eth_waitTransmitBuffer(&geth, IfxGeth_TxDmaChannel_0);
 * // write the header
 * IfxGeth_Eth_writeHeader(&geth, pTxBuf, (uint8 *)myMacAddress, (uint8 *)myMacAddress, payloadLength);
 * // write the payload
 * uint32 i;
 * for(i = IFXGETH_HEADER_LENGTH; i < packetLength; ++i) {
 *     pTxBuf[i] = i - 13;
 * }
 *
 * // clear the TX interrupt status
 * IfxGeth_dma_clearInterruptFlag(geth->gethSFR, IfxGeth_DmaChannel_0, IfxGeth_DmaInterruptFlag_transmitInterrupt) ;
 *
 * IfxGeth_Eth_sendTransmitBuffer(&geth, packetLength, IfxGeth_TxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_sendTransmitBuffer(IfxGeth_Eth *geth, uint32 packetLength, IfxGeth_TxDmaChannel channelId);

/** \brief Updates the current Rx descriptor pointer in the handle to next Rx descriptor
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_shuffleRxDescriptor(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_shuffleRxDescriptor(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);

/** \brief Updates the current Tx descriptor pointer in the handle to next Tx descriptor
 * \param geth GETH driver Handle
 * \param channelId Tx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_shuffleTxDescriptor(&geth, IfxGeth_TxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_shuffleTxDescriptor(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId);

/** \brief Start the Receiver functions of MAC and selected channel of DMA
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_startReceiver(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_startReceiver(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);

/** \brief Start the Receiver functions of MAC and all selected number of DMA channels
 * \param geth GETH driver Handle
 * \param numOfChannels number of channels to be started for transmission (starting from channel 0)
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_startReceivers(&geth, 1);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_startReceivers(IfxGeth_Eth *geth, uint32 numOfChannels);

/** \brief Start the transmitter functions of MAC and selected channel of DMA
 * \param geth GETH driver Handle
 * \param channelId Tx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_startTransmitter(&geth, IfxGeth_TxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_startTransmitter(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId);

/** \brief Start the transmitter functions of MAC and all selected number of DMA channels
 * \param geth GETH driver Handle
 * \param numOfChannels number of channels to be started for transmission (starting from channel 0)
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_startTransmitter(&geth, 1);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_startTransmitters(IfxGeth_Eth *geth, uint32 numOfChannels);

/** \brief Stops the transmitter functions of MAC and all selected number of DMA channels
 * \param geth GETH driver Handle
 * \param numOfChannels number of channels to be started for transmission (starting from channel 0)
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_stopTransmitter(&geth, 4);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_stopTransmitters(IfxGeth_Eth *geth, uint32 numOfChannels);

/** \brief Wakes up the Receiver functions of MAC and selected channel of DMA
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_wakeupReceiver(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_wakeupReceiver(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);

/** \brief Wakes up the transmitter functions of MAC and selected channel of DMA
 * \param geth GETH driver Handle
 * \param channelId Tx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_wakeupTransmitter(&geth, IfxGeth_TxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_wakeupTransmitter(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId);

/** \} */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the pointer to base RX descriptor in the list
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return pointer to base RX descriptor in the list
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_RxDescr *descr = IfxGeth_Eth_getBaseRxDescriptor(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_INLINE volatile IfxGeth_RxDescr *IfxGeth_Eth_getBaseRxDescriptor(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);

/** \brief Returns the pointer to base TX descriptor in the list
 * \param geth GETH driver Handle
 * \param channelId Tx channel Id
 * \return pointer to base TX descriptor in the list
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_TxDescr *descr = IfxGeth_Eth_getBaseTxDescriptor(&geth, IfxGeth_TxDmaChannel_0);
 * \endcode
 *
 */
IFX_INLINE volatile IfxGeth_TxDescr *IfxGeth_Eth_getBaseTxDescriptor(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Free the receive buffer, enabling it for the further reception
 * \param geth GETH driver Handle
 * \param channelId Rx channel Id
 * \return None
 *
 * \code
 * // IfxGeth_Eth geth; // assumed to be defined globally
 *
 * IfxGeth_Eth_freeReceiveBuffer(&geth, IfxGeth_RxDmaChannel_0);
 * \endcode
 *
 */
IFX_EXTERN void IfxGeth_Eth_freeReceiveBuffer(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId);
/** \addtogroup IfxLld_Geth_Eth_Variables
 * \{ */

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/

/** \brief Actual rx descriptor lists of all availabe rx channels
 */
IFX_EXTERN IfxGeth_RxDescrList IfxGeth_Eth_rxDescrList[IFXGETH_NUM_RX_CHANNELS];

/** \brief Actual tx descriptor lists of all availabe tx channels
 */
IFX_EXTERN IfxGeth_TxDescrList IfxGeth_Eth_txDescrList[IFXGETH_NUM_TX_CHANNELS];

/** \} */

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE volatile IfxGeth_RxDescr *IfxGeth_Eth_getActualRxDescriptor(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId)
{
    return geth->rxChannel[channelId].rxDescrPtr;
}


IFX_INLINE volatile IfxGeth_TxDescr *IfxGeth_Eth_getActualTxDescriptor(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId)
{
    return geth->txChannel[channelId].txDescrPtr;
}


IFX_INLINE volatile IfxGeth_RxDescr *IfxGeth_Eth_getBaseRxDescriptor(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId)
{
    return geth->rxChannel[channelId].rxDescrList->descr;
}


IFX_INLINE volatile IfxGeth_TxDescr *IfxGeth_Eth_getBaseTxDescriptor(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId)
{
    return geth->txChannel[channelId].txDescrList->descr;
}


IFX_INLINE boolean IfxGeth_Eth_isRxDataAvailable(IfxGeth_Eth *geth, IfxGeth_RxDmaChannel channelId)
{
    return IfxGeth_Eth_getActualRxDescriptor(geth, channelId)->RDES3.R.OWN == 0;
}


IFX_INLINE void *IfxGeth_Eth_waitTransmitBuffer(IfxGeth_Eth *geth, IfxGeth_TxDmaChannel channelId)
{
    void *tx;

    do
    {
        tx = IfxGeth_Eth_getTransmitBuffer(geth, channelId);
    } while (tx == NULL_PTR);

    return tx;
}


#endif /* IFXGETH_ET_H */
