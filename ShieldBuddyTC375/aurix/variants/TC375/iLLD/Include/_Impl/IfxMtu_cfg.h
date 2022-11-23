/**
 * \file IfxMtu_cfg.h
 * \brief Mtu on-chip implementation data
 * \ingroup IfxLld_Mtu
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
 * \defgroup IfxLld_Mtu MTU
 * \ingroup IfxLld
 * \defgroup IfxLld_Mtu_Impl Implementation
 * \ingroup IfxLld_Mtu
 * \defgroup IfxLld_Mtu_Std Standard Driver
 * \ingroup IfxLld_Mtu
 */

#ifndef IFXMTU_CFG_H
#define IFXMTU_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Cpu/Std/IfxCpu.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "IfxMtu_reg.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief Base address of first MBIST Control Block
 */
#define IFXMTU_MC_ADDRESS_BASE       (0xF0061000u)

/** \brief Number of MBIST Table items
 */
#define IFXMTU_NUM_MBIST_TABLE_ITEMS (96)

/** \brief Maximum number of tracked SRAM addresses (ETTR)
 */
#define IFXMTU_MAX_TRACKED_ADDRESSES (5)

/**
 * Conversion to SRAM address from Memory Mapped address
 */
#define IFXMTU_SCRAMBLED_RANGE_ADDR_DSPR0(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x70000000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_DSPR1(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x60000000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_DSPR2(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x50000000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_PSPR0(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x70100000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_PSPR1(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x60100000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_PSPR2(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x50100000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_DLMU0(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x90000000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_DLMU1(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x90010000) / (16 * 64))
#define IFXMTU_SCRAMBLED_RANGE_ADDR_DLMU2(memoryMapedAddr) (uint8)((memoryMapedAddr - 0x90020000) / (16 * 64))

/******************************************************************************/
/*-------------------------------Enumerations---------------------------------*/
/******************************************************************************/

/** \brief MBIST Selection
 */
typedef enum
{
    IfxMtu_MbistSel_none        = -1,
    IfxMtu_MbistSel_cpu0Dspr    = 0,
    IfxMtu_MbistSel_cpu0Dtag    = 1,
    IfxMtu_MbistSel_cpu0Pspr    = 2,
    IfxMtu_MbistSel_cpu0Ptag    = 3,
    IfxMtu_MbistSel_cpu0Dlmu    = 4,
    IfxMtu_MbistSel_cpu1Dspr    = 5,
    IfxMtu_MbistSel_cpu1Dtag    = 6,
    IfxMtu_MbistSel_cpu1Pspr    = 7,
    IfxMtu_MbistSel_cpu1Ptag    = 8,
    IfxMtu_MbistSel_cpu1Dlmu    = 9,
    IfxMtu_MbistSel_cpu2Dspr    = 10,
    IfxMtu_MbistSel_cpu2Dtag    = 11,
    IfxMtu_MbistSel_cpu2Pspr    = 12,
    IfxMtu_MbistSel_cpu2Ptag    = 13,
    IfxMtu_MbistSel_cpu2Dlmu    = 14,
    IfxMtu_MbistSel_cpu0Dspr1   = 34,
    IfxMtu_MbistSel_cpu1Dspr1   = 35,
    IfxMtu_MbistSel_mod50       = 38,
    IfxMtu_MbistSel_mod4        = 40,
    IfxMtu_MbistSel_dma         = 41,
    IfxMtu_MbistSel_mcds        = 43,
    IfxMtu_MbistSel_ememUpper0  = 44,
    IfxMtu_MbistSel_ememUpper1  = 45,
    IfxMtu_MbistSel_ememUpper2  = 46,
    IfxMtu_MbistSel_ememXtm     = 48,
    IfxMtu_MbistSel_gtmFifo     = 53,
    IfxMtu_MbistSel_gtmMcs0Fast = 55,
    IfxMtu_MbistSel_gtmMcs1Fast = 57,
    IfxMtu_MbistSel_gtmDpll1a   = 58,
    IfxMtu_MbistSel_gtmDpll1b   = 59,
    IfxMtu_MbistSel_gtmDpll2    = 60,
    IfxMtu_MbistSel_mcan0       = 62,
    IfxMtu_MbistSel_mcan1       = 63,
    IfxMtu_MbistSel_mcan2       = 64,
    IfxMtu_MbistSel_psi5        = 65,
    IfxMtu_MbistSel_eray0Obf    = 66,
    IfxMtu_MbistSel_eray0IbfTbf = 68,
    IfxMtu_MbistSel_eray0Mbf    = 70,
    IfxMtu_MbistSel_mod1        = 72,
    IfxMtu_MbistSel_mod2        = 73,
    IfxMtu_MbistSel_mod3        = 74,
    IfxMtu_MbistSel_mod6        = 75,
    IfxMtu_MbistSel_mod7        = 76,
    IfxMtu_MbistSel_scrXram     = 77,
    IfxMtu_MbistSel_scrIram     = 78,
    IfxMtu_MbistSel_cifJpeg1_4  = 79,
    IfxMtu_MbistSel_cifJpeg3    = 80,
    IfxMtu_MbistSel_cifCif      = 81,
    IfxMtu_MbistSel_ethermacRx  = 82,
    IfxMtu_MbistSel_ethermacTx  = 83,
    IfxMtu_MbistSel_sdmmc       = 84,
    IfxMtu_MbistSel_ethermacRx1  = 86,
    IfxMtu_MbistSel_ethermacTx1  = 87,
} IfxMtu_MbistSel;

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \brief Describes physical parameters of a SRAM memory
 */
typedef struct
{
    uint8  numBlocks;      /**< \brief number of SRAM blocks */
    uint16 dataSize;       /**< \brief Data Size of each memory block */
    uint8  eccSize;        /**< \brief ECC Size of each memory block */
    uint8  eccInvPos0;     /**< \brief First ECC bit which needs to be inverted */
    uint8  eccInvPos1;     /**< \brief Second ECC bit which needs to be inverted */
} IfxMtu_SramItem;

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/

IFX_EXTERN const IfxMtu_SramItem IfxMtu_sramTable[IFXMTU_NUM_MBIST_TABLE_ITEMS];

#endif /* IFXMTU_CFG_H */
