/**
 * \file IfxSdmmc_regdef.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37XED_TS_V2.5.1.R0
 * Specification: TC3xx Target Specification.V2.5.1
 * MAY BE CHANGED BY USER [yes/no]: No
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
 * \defgroup IfxSfr_Sdmmc_Registers Sdmmc Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Sdmmc_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Sdmmc_Registers
 * 
 * \defgroup IfxSfr_Sdmmc_Registers_union Register unions
 * \ingroup IfxSfr_Sdmmc_Registers
 * 
 * \defgroup IfxSfr_Sdmmc_Registers_struct Memory map
 * \ingroup IfxSfr_Sdmmc_Registers
 */
#ifndef IFXSDMMC_REGDEF_H
#define IFXSDMMC_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Sdmmc_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_SDMMC_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID 0 - EN0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID 1 - EN1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID 2 - EN2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID 3 - EN3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID 4 - EN4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID 5 - EN5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID 6 - EN6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID 7 - EN7 (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID 8 - EN8 (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID 9 - EN9 (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID 10 - EN10 (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID 11 - EN11 (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID 12 - EN12 (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID 13 - EN13 (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID 14 - EN14 (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID 15 - EN15 (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID 16 - EN16 (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID 17 - EN17 (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID 18 - EN18 (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID 19 - EN19 (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID 20 - EN20 (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID 21 - EN21 (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID 22 - EN22 (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID 23 - EN23 (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID 24 - EN24 (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID 25 - EN25 (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID 26 - EN26 (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID 27 - EN27 (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID 28 - EN28 (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID 29 - EN29 (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID 30 - EN30 (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID 31 - EN31 (rw) */
} Ifx_SDMMC_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_SDMMC_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SDMMC_ACCEN1_Bits;

/** \brief ADMA Error Status Register */
typedef struct _Ifx_SDMMC_ADMA_ERR_STAT_Bits
{
    Ifx_UReg_32Bit ADMA_ERR_STATES:2;    /**< \brief [1:0] ADMA Error States - ADMA_ERR_STATES (r) */
    Ifx_UReg_32Bit ADMA_LEN_ERR:1;    /**< \brief [2:2] ADMA Length Mismatch Error States - ADMA_LEN_ERR (r) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_SDMMC_ADMA_ERR_STAT_Bits;

/** \brief ADMA3 Integrated Descriptor Address Register - Low */
typedef struct _Ifx_SDMMC_ADMA_ID_LOW_Bits
{
    Ifx_UReg_32Bit ADMA_ID_LOW:32;    /**< \brief [31:0] ADMA Integrated Descriptor Address - ADMA_ID_LOW (rw) */
} Ifx_SDMMC_ADMA_ID_LOW_Bits;

/** \brief ADMA System Address Register Low */
typedef struct _Ifx_SDMMC_ADMA_SA_LOW_Bits
{
    Ifx_UReg_32Bit ADMA_SA_LOW:32;    /**< \brief [31:0] ADMA System Address - ADMA_SA_LOW (rw) */
} Ifx_SDMMC_ADMA_SA_LOW_Bits;

/** \brief Argument register */
typedef struct _Ifx_SDMMC_ARGUMENT_Bits
{
    Ifx_UReg_32Bit ARGUMENT:32;       /**< \brief [31:0] Command Argument - ARGUMENT (rw) */
} Ifx_SDMMC_ARGUMENT_Bits;

/** \brief Auto CMD Status Register */
typedef struct _Ifx_SDMMC_AUTO_CMD_STAT_Bits
{
    Ifx_UReg_16Bit AUTO_CMD12_NOT_EXEC:1;    /**< \brief [0:0] Auto CMD12 Not Executed - AUTO_CMD12_NOT_EXEC (r) */
    Ifx_UReg_16Bit AUTO_CMD_TOUT_ERR:1;    /**< \brief [1:1] Auto CMD Timeout Error - AUTO_CMD_TOUT_ERR (r) */
    Ifx_UReg_16Bit AUTO_CMD_CRC_ERR:1;    /**< \brief [2:2] Auto CMD CRC Error - AUTO_CMD_CRC_ERR (r) */
    Ifx_UReg_16Bit AUTO_CMD_EBIT_ERR:1;    /**< \brief [3:3] Auto CMD End Bit Error - AUTO_CMD_EBIT_ERR (r) */
    Ifx_UReg_16Bit AUTO_CMD_IDX_ERR:1;    /**< \brief [4:4] Auto CMD Index Error - AUTO_CMD_IDX_ERR (r) */
    Ifx_UReg_16Bit AUTO_CMD_RESP_ERR:1;    /**< \brief [5:5] Auto CMD Response Error - AUTO_CMD_RESP_ERR (r) */
    Ifx_UReg_16Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_16Bit CMD_NOT_ISSUED_AUTO_CMD12:1;    /**< \brief [7:7] Command Not Issued By Auto CMD12 Error - CMD_NOT_ISSUED_AUTO_CMD12 (r) */
    Ifx_UReg_16Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
} Ifx_SDMMC_AUTO_CMD_STAT_Bits;

/** \brief Block Gap Control Register */
typedef struct _Ifx_SDMMC_BGAP_CTRL_Bits
{
    Ifx_UReg_8Bit STOP_BG_REQ:1;      /**< \brief [0:0] Stop At Block Gap Request - STOP_BG_REQ (rw) */
    Ifx_UReg_8Bit CONTINUE_REQ:1;     /**< \brief [1:1] Continue Request - CONTINUE_REQ (rw) */
    Ifx_UReg_8Bit RD_WAIT_CTRL:1;     /**< \brief [2:2] Read Wait Control (SD Mode only) - RD_WAIT_CTRL (rw) */
    Ifx_UReg_8Bit INT_AT_BGAP:1;      /**< \brief [3:3] Interrupt At Block Gap (SD Mode only) - INT_AT_BGAP (rw) */
    Ifx_UReg_8Bit reserved_4:4;       /**< \brief [7:4] \internal Reserved */
} Ifx_SDMMC_BGAP_CTRL_Bits;

/** \brief 16-bit Block Count register */
typedef struct _Ifx_SDMMC_BLOCKCOUNT_Bits
{
    Ifx_UReg_16Bit BLOCK_CNT:16;      /**< \brief [15:0] 16-bit Block Count - BLOCK_CNT (rw) */
} Ifx_SDMMC_BLOCKCOUNT_Bits;

/** \brief Block Size register */
typedef struct _Ifx_SDMMC_BLOCKSIZE_Bits
{
    Ifx_UReg_16Bit XFER_BLOCK_SIZE:12;    /**< \brief [11:0] Transfer Block Size - XFER_BLOCK_SIZE (rw) */
    Ifx_UReg_16Bit SDMA_BUF_BDARY:3;    /**< \brief [14:12] SDMA Buffer Boundary - SDMA_BUF_BDARY (rw) */
    Ifx_UReg_16Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
} Ifx_SDMMC_BLOCKSIZE_Bits;

/** \brief eMMC Boot Control register */
typedef struct _Ifx_SDMMC_BOOT_CTRL_Bits
{
    Ifx_UReg_16Bit MAN_BOOT_EN:1;     /**< \brief [0:0] Mandatory Boot Enable - MAN_BOOT_EN (rw) */
    Ifx_UReg_16Bit reserved_1:6;      /**< \brief [6:1] \internal Reserved */
    Ifx_UReg_16Bit VALIDATE_BOOT:1;    /**< \brief [7:7] Validate Mandatory Boot Enable bit - VALIDATE_BOOT (w) */
    Ifx_UReg_16Bit BOOT_ACK_ENABLE:1;    /**< \brief [8:8] Boot Acknowledge Enable - BOOT_ACK_ENABLE (rw) */
    Ifx_UReg_16Bit reserved_9:3;      /**< \brief [11:9] \internal Reserved */
    Ifx_UReg_16Bit BOOT_TOUT_CNT:4;    /**< \brief [15:12] Boot Ack Timeout Counter Value. - BOOT_TOUT_CNT (rw) */
} Ifx_SDMMC_BOOT_CTRL_Bits;

/** \brief Buffer Data Port Register */
typedef struct _Ifx_SDMMC_BUF_DATA_Bits
{
    Ifx_UReg_32Bit BUF_DATA:32;       /**< \brief [31:0] Buffer Data - BUF_DATA (rw) */
} Ifx_SDMMC_BUF_DATA_Bits;

/** \brief Capabilities 1 Register 0 to 31 */
typedef struct _Ifx_SDMMC_CAPABILITIES1_Bits
{
    Ifx_UReg_32Bit TOUT_CLK_FREQ:6;    /**< \brief [5:0] Timeout Clock Frequency - TOUT_CLK_FREQ (r) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit TOUT_CLK_UNIT:1;    /**< \brief [7:7] Timeout Clock Unit - TOUT_CLK_UNIT (r) */
    Ifx_UReg_32Bit BASE_CLK_FREQ:8;    /**< \brief [15:8] Base Clock Frequency for SD clock - BASE_CLK_FREQ (r) */
    Ifx_UReg_32Bit MAX_BLK_LEN:2;     /**< \brief [17:16] Maximum Block Length - MAX_BLK_LEN (r) */
    Ifx_UReg_32Bit EMBEDDED_8_BIT:1;    /**< \brief [18:18] 8-bit Support for Embedded Device - Embedded_8_BIT (r) */
    Ifx_UReg_32Bit ADMA2_SUPPORT:1;    /**< \brief [19:19] ADMA2 Support - ADMA2_SUPPORT (r) */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit HIGH_SPEED_SUPPORT:1;    /**< \brief [21:21] High Speed Support - HIGH_SPEED_SUPPORT (r) */
    Ifx_UReg_32Bit SDMA_SUPPORT:1;    /**< \brief [22:22] SDMA Support - SDMA_SUPPORT (r) */
    Ifx_UReg_32Bit SUS_RES_SUPPORT:1;    /**< \brief [23:23] Suspense/Resume Support - SUS_RES_SUPPORT (r) */
    Ifx_UReg_32Bit VOLT_33:1;         /**< \brief [24:24] Voltage Support 3.3 V - VOLT_33 (r) */
    Ifx_UReg_32Bit VOLT_30:1;         /**< \brief [25:25] Voltage Support 3.0 V - VOLT_30 (r) */
    Ifx_UReg_32Bit VOLT_18:1;         /**< \brief [26:26] Voltage Support 1.8 V - VOLT_18 (r) */
    Ifx_UReg_32Bit SYS_ADDR_64_V4:1;    /**< \brief [27:27] 64-bit System Address Support for V4 - SYS_ADDR_64_V4 (r) */
    Ifx_UReg_32Bit SYS_ADDR_64_V3:1;    /**< \brief [28:28] 64-bit System Address Support for V3 - SYS_ADDR_64_V3 (r) */
    Ifx_UReg_32Bit ASYNC_INT_SUPPORT:1;    /**< \brief [29:29] Asynchronous Interrupt Support (SD Mode only) - ASYNC_INT_SUPPORT (r) */
    Ifx_UReg_32Bit SLOT_TYPE:2;       /**< \brief [31:30] Slot Type - SLOT_TYPE_R (r) */
} Ifx_SDMMC_CAPABILITIES1_Bits;

/** \brief Capabilities Register 32 to 63 */
typedef struct _Ifx_SDMMC_CAPABILITIES2_Bits
{
    Ifx_UReg_32Bit SDR50_SUPPORT:1;    /**< \brief [0:0] SDR50 Support - SDR50_SUPPORT (r) */
    Ifx_UReg_32Bit SDR104_SUPPORT:1;    /**< \brief [1:1] SDR104 Support - SDR104_SUPPORT (r) */
    Ifx_UReg_32Bit DDR50_SUPPORT:1;    /**< \brief [2:2] DDR50 Support - DDR50_SUPPORT (r) */
    Ifx_UReg_32Bit UHS2_SUPPORT:1;    /**< \brief [3:3] UHS-II Support - UHS2_SUPPORT (r) */
    Ifx_UReg_32Bit DRV_TYPEA:1;       /**< \brief [4:4] Driver Type A Support - DRV_TYPEA (r) */
    Ifx_UReg_32Bit DRV_TYPEC:1;       /**< \brief [5:5] Driver Type C Support - DRV_TYPEC (r) */
    Ifx_UReg_32Bit DRV_TYPED:1;       /**< \brief [6:6] Driver Type D Support - DRV_TYPED (r) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit RETUNE_CNT:4;      /**< \brief [11:8] Timer Count for Re-Tuning - RETUNE_CNT (r) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit USE_TUNING_SDR50:1;    /**< \brief [13:13] Use Tuning for SDR50 - USE_TUNING_SDR50 (r) */
    Ifx_UReg_32Bit RE_TUNING_MODES:2;    /**< \brief [15:14] Re-Tuning Modes - RE_TUNING_MODES (r) */
    Ifx_UReg_32Bit CLK_MUL:8;         /**< \brief [23:16] Clock Multiplier - CLK_MUL (r) */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit ADMA3_SUPPORT:1;    /**< \brief [27:27] ADMA3 Support - ADMA3_SUPPORT (r) */
    Ifx_UReg_32Bit VDD2_18V_SUPPORT:1;    /**< \brief [28:28] 1.8 V VDD2 Support - VDD2_18V_SUPPORT (r) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SDMMC_CAPABILITIES2_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_SDMMC_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SDMMC_CLC_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_SDMMC_CLK_CTRL_Bits
{
    Ifx_UReg_16Bit INTERNAL_CLK_EN:1;    /**< \brief [0:0] Internal Clock Enable - INTERNAL_CLK_EN (rw) */
    Ifx_UReg_16Bit INTERNAL_CLK_STABLE:1;    /**< \brief [1:1] Internal Clock Stable - INTERNAL_CLK_STABLE (r) */
    Ifx_UReg_16Bit SD_CLK_EN:1;       /**< \brief [2:2] SD/eMMC Clock Enable - SD_CLK_EN (rw) */
    Ifx_UReg_16Bit PLL_ENABLE:1;      /**< \brief [3:3] PLL Enable - PLL_ENABLE (rw) */
    Ifx_UReg_16Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_16Bit CLK_GEN_SELECT:1;    /**< \brief [5:5] Clock Generator Select - CLK_GEN_SELECT (rw) */
    Ifx_UReg_16Bit UPPER_FREQ_SEL:2;    /**< \brief [7:6] SDCLK/RCLK Frequency Select - FREQ_SEL (rw) */
    Ifx_UReg_16Bit FREQ_SEL:8;        /**< \brief [15:8] SDCLK/RCLK Frequency Select - FREQ_SEL (rw) */
} Ifx_SDMMC_CLK_CTRL_Bits;

/** \brief Command register */
typedef struct _Ifx_SDMMC_CMD_Bits
{
    Ifx_UReg_16Bit RESP_TYPE_SELECT:2;    /**< \brief [1:0] Response Type Select - RESP_TYPE_SELECT (rw) */
    Ifx_UReg_16Bit SUB_CMD_FLAG:1;    /**< \brief [2:2] Sub Command Flag - SUB_CMD_FLAG (rw) */
    Ifx_UReg_16Bit CMD_CRC_CHK_ENABLE:1;    /**< \brief [3:3] Command CRC Check Enable - CMD_CRC_CHK_ENABLE (rw) */
    Ifx_UReg_16Bit CMD_IDX_CHK_ENABLE:1;    /**< \brief [4:4] Command Index Check Enable - CMD_IDX_CHK_ENABLE (rw) */
    Ifx_UReg_16Bit DATA_PRESENT_SEL:1;    /**< \brief [5:5] Data Present Select - DATA_PRESENT_SEL (rw) */
    Ifx_UReg_16Bit CMD_TYPE:2;        /**< \brief [7:6] Command Type - CMD_TYPE (rw) */
    Ifx_UReg_16Bit CMD_INDEX:6;       /**< \brief [13:8] Command Index - CMD_INDEX (rw) */
    Ifx_UReg_16Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
} Ifx_SDMMC_CMD_Bits;

/** \brief Maximum Current Capabilities Register 0 to 31 */
typedef struct _Ifx_SDMMC_CURR_CAPABILITIES1_Bits
{
    Ifx_UReg_32Bit MAX_CUR_33V:8;     /**< \brief [7:0] Maximum Current for 3.3 V - MAX_CUR_33V (r) */
    Ifx_UReg_32Bit MAX_CUR_30V:8;     /**< \brief [15:8] Maximum Current for 3.0 V - MAX_CUR_30V (r) */
    Ifx_UReg_32Bit MAX_CUR_18V:8;     /**< \brief [23:16] Maximum Current for 1.8 V - MAX_CUR_18V (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SDMMC_CURR_CAPABILITIES1_Bits;

/** \brief Maximum Current Capabilities Register 32 to 63 */
typedef struct _Ifx_SDMMC_CURR_CAPABILITIES2_Bits
{
    Ifx_UReg_32Bit MAX_CUR_VDD2_18V:8;    /**< \brief [7:0] Maximum Current for 1.8 V VDD2 - MAX_CUR_VDD2_18V (r) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_SDMMC_CURR_CAPABILITIES2_Bits;

/** \brief Embedded Control register */
typedef struct _Ifx_SDMMC_EMBEDDED_CTRL_Bits
{
    Ifx_UReg_32Bit NUM_CLK_PIN:3;     /**< \brief [2:0] Number of Clock Pins (SD Mode) - NUM_CLK_PIN (r) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit NUM_INT_PIN:2;     /**< \brief [5:4] Number of Interrupt Input Pins - NUM_INT_PIN (r) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit BUS_WIDTH_PRESET:7;    /**< \brief [14:8] Bus Width Preset (SD Mode) - BUS_WIDTH_PRESET (r) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit CLK_PIN_SEL:3;     /**< \brief [18:16] Clock Pin Select (SD Mode) - CLK_PIN_SEL (rw) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit INT_PIN_SEL:3;     /**< \brief [22:20] Interrupt Pin Select - INT_PIN_SEL (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit BACK_END_PWR_CTRL:7;    /**< \brief [30:24] Back-End Power Control (SD Mode) - BACK_END_PWR_CTRL (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SDMMC_EMBEDDED_CTRL_Bits;

/** \brief eMMC Control register */
typedef struct _Ifx_SDMMC_EMMC_CTRL_Bits
{
    Ifx_UReg_16Bit CARD_IS_EMMC:1;    /**< \brief [0:0] eMMC Card present - CARD_IS_EMMC (rw) */
    Ifx_UReg_16Bit DISABLE_DATA_CRC_CHK:1;    /**< \brief [1:1] Disable Data CRC Check - DISABLE_DATA_CRC_CHK (rw) */
    Ifx_UReg_16Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_16Bit ENH_STROBE_ENABLE:1;    /**< \brief [8:8] Enhanced Strobe Enable - ENH_STROBE_ENABLE (rw) */
    Ifx_UReg_16Bit CQE_ALGO_SEL:1;    /**< \brief [9:9] Scheduler algorithm selected for execution - CQE_ALGO_SEL (rw) */
    Ifx_UReg_16Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
} Ifx_SDMMC_EMMC_CTRL_Bits;

/** \brief Error Interrupt Signal Enable Register */
typedef struct _Ifx_SDMMC_ERROR_INT_SIGNAL_EN_Bits
{
    Ifx_UReg_16Bit CMD_TOUT_ERR_SIGNAL_EN:1;    /**< \brief [0:0] Command Timeout Error Signal Enable (SD/eMMC Mode only) - CMD_TOUT_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CMD_CRC_ERR_SIGNAL_EN:1;    /**< \brief [1:1] Command CRC Error Signal Enable (SD/eMMC Mode only) - CMD_CRC_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CMD_END_BIT_ERR_SIGNAL_EN:1;    /**< \brief [2:2] Command End Bit Error Signal Enable (SD/eMMC Mode only) - CMD_END_BIT_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CMD_IDX_ERR_SIGNAL_EN:1;    /**< \brief [3:3] Command Index Error Signal Enable (SD/eMMC Mode only) - CMD_IDX_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit DATA_TOUT_ERR_SIGNAL_EN:1;    /**< \brief [4:4] Data Timeout Error Signal Enable (SD/eMMC Mode only) - DATA_TOUT_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit DATA_CRC_ERR_SIGNAL_EN:1;    /**< \brief [5:5] Data CRC Error Signal Enable (SD/eMMC Mode only) - DATA_CRC_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit DATA_END_BIT_ERR_SIGNAL_EN:1;    /**< \brief [6:6] Data End Bit Error Signal Enable (SD/eMMC Mode only) - DATA_END_BIT_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CUR_LMT_ERR_SIGNAL_EN:1;    /**< \brief [7:7] Current Limit Error Signal Enable - CUR_LMT_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit AUTO_CMD_ERR_SIGNAL_EN:1;    /**< \brief [8:8] Auto CMD Error Signal Enable (SD/eMMC Mode only) - AUTO_CMD_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit ADMA_ERR_SIGNAL_EN:1;    /**< \brief [9:9] ADMA Error Signal Enable - ADMA_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit TUNING_ERR_SIGNAL_EN:1;    /**< \brief [10:10] Tuning Error Signal Enable - TUNING_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit RESP_ERR_SIGNAL_EN:1;    /**< \brief [11:11] Response Error Signal Enable (SD Mode only) - RESP_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit BOOT_ACK_ERR_SIGNAL_EN:1;    /**< \brief [12:12] Boot Acknowledgment Error (eMMC Mode only). - BOOT_ACK_ERR_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_16Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_16Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
} Ifx_SDMMC_ERROR_INT_SIGNAL_EN_Bits;

/** \brief Error Interrupt Status Register */
typedef struct _Ifx_SDMMC_ERROR_INT_STAT_Bits
{
    Ifx_UReg_16Bit CMD_TOUT_ERR:1;    /**< \brief [0:0] Command Timeout Error (SD/eMMC Mode only) - CMD_TOUT_ERR (rw) */
    Ifx_UReg_16Bit CMD_CRC_ERR:1;     /**< \brief [1:1] Command CRC Error (SD/eMMC Mode only) - CMD_CRC_ERR (rw) */
    Ifx_UReg_16Bit CMD_END_BIT_ERR:1;    /**< \brief [2:2] Command End Bit Error (SD/eMMC Mode only) - CMD_END_BIT_ERR (rw) */
    Ifx_UReg_16Bit CMD_IDX_ERR:1;     /**< \brief [3:3] Command Index Error (SD/eMMC Mode only) - CMD_IDX_ERR (rw) */
    Ifx_UReg_16Bit DATA_TOUT_ERR:1;    /**< \brief [4:4] Data Timeout Error (SD/eMMC Mode only) - DATA_TOUT_ERR (rw) */
    Ifx_UReg_16Bit DATA_CRC_ERR:1;    /**< \brief [5:5] Data CRC Error (SD/eMMC Mode only). - DATA_CRC_ERR (rw) */
    Ifx_UReg_16Bit DATA_END_BIT_ERR:1;    /**< \brief [6:6] Data End Bit Error (SD/eMMC Mode only) - DATA_END_BIT_ERR (rw) */
    Ifx_UReg_16Bit CUR_LMT_ERR:1;     /**< \brief [7:7] Current Limit Error - CUR_LMT_ERR (rw) */
    Ifx_UReg_16Bit AUTO_CMD_ERR:1;    /**< \brief [8:8] Auto CMD Error (SD/eMMC Mode only) - AUTO_CMD_ERR (rw) */
    Ifx_UReg_16Bit ADMA_ERR:1;        /**< \brief [9:9] ADMA Error - ADMA_ERR (rw) */
    Ifx_UReg_16Bit TUNING_ERR:1;      /**< \brief [10:10] Tuning Error - TUNING_ERR (rw) */
    Ifx_UReg_16Bit RESP_ERR:1;        /**< \brief [11:11] Response Error (SD Mode only) - RESP_ERR (rw) */
    Ifx_UReg_16Bit BOOT_ACK_ERR:1;    /**< \brief [12:12] Boot Acknowledgement Error (eMMC Mode only) - BOOT_ACK_ERR (rw) */
    Ifx_UReg_16Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_16Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_16Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
} Ifx_SDMMC_ERROR_INT_STAT_Bits;

/** \brief Error Interrupt Status Enable Register */
typedef struct _Ifx_SDMMC_ERROR_INT_STAT_EN_Bits
{
    Ifx_UReg_16Bit CMD_TOUT_ERR_STAT_EN:1;    /**< \brief [0:0] Command Timeout Error Status Enable (SD/eMMC Mode only). - CMD_TOUT_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit CMD_CRC_ERR_STAT_EN:1;    /**< \brief [1:1] Command CRC Error Status Enable (SD/eMMC Mode only) - CMD_CRC_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit CMD_END_BIT_ERR_STAT_EN:1;    /**< \brief [2:2] Command End Bit Error Status Enable (SD/eMMC Mode only) - CMD_END_BIT_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit CMD_IDX_ERR_STAT_EN:1;    /**< \brief [3:3] Command Index Error Status Enable (SD/eMMC Mode only) - CMD_IDX_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit DATA_TOUT_ERR_STAT_EN:1;    /**< \brief [4:4] Data Timeout Error Status Enable (SD/eMMC Mode only) - DATA_TOUT_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit DATA_CRC_ERR_STAT_EN:1;    /**< \brief [5:5] Data CRC Error Status Enable (SD/eMMC Mode only) - DATA_CRC_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit DATA_END_BIT_ERR_STAT_EN:1;    /**< \brief [6:6] Data End Bit Error Status Enable (SD/eMMC Mode only). - DATA_END_BIT_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit CUR_LMT_ERR_STAT_EN:1;    /**< \brief [7:7] Current Limit Error Status Enable - CUR_LMT_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit AUTO_CMD_ERR_STAT_EN:1;    /**< \brief [8:8] Auto CMD Error Status Enable (SD/eMMC Mode only). - AUTO_CMD_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit ADMA_ERR_STAT_EN:1;    /**< \brief [9:9] ADMA Error Status Enable. - ADMA_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit TUNING_ERR_STAT_EN:1;    /**< \brief [10:10] Tuning Error Status Enable. - TUNING_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit RESP_ERR_STAT_EN:1;    /**< \brief [11:11] Response Error Status Enable (SD Mode only) - RESP_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit BOOT_ACK_ERR_STAT_EN:1;    /**< \brief [12:12] Boot Acknowledgment Error (eMMC Mode only). - BOOT_ACK_ERR_STAT_EN (rw) */
    Ifx_UReg_16Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_16Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_16Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
} Ifx_SDMMC_ERROR_INT_STAT_EN_Bits;

/** \brief Force Event Register for Auto CMD Error Status register */
typedef struct _Ifx_SDMMC_FORCE_AUTO_CMD_STAT_Bits
{
    Ifx_UReg_16Bit FORCE_AUTO_CMD12_NOT_EXEC:1;    /**< \brief [0:0] Force Event for Auto CMD12 Not Executed - FORCE_AUTO_CMD12_NOT_EXEC (w) */
    Ifx_UReg_16Bit FORCE_AUTO_CMD_TOUT_ERR:1;    /**< \brief [1:1] Force Event for Auto CMD Timeout Error - FORCE_AUTO_CMD_TOUT_ERR (w) */
    Ifx_UReg_16Bit FORCE_AUTO_CMD_CRC_ERR:1;    /**< \brief [2:2] Force Event for Auto CMD CRC Error - FORCE_AUTO_CMD_CRC_ERR (w) */
    Ifx_UReg_16Bit FORCE_AUTO_CMD_EBIT_ERR:1;    /**< \brief [3:3] Force Event for Auto CMD End Bit Error - FORCE_AUTO_CMD_EBIT_ERR (w) */
    Ifx_UReg_16Bit FORCE_AUTO_CMD_IDX_ERR:1;    /**< \brief [4:4] Force Event for Auto CMD Index Error - FORCE_AUTO_CMD_IDX_ERR (w) */
    Ifx_UReg_16Bit FORCE_AUTO_CMD_RESP_ERR:1;    /**< \brief [5:5] Force Event for Auto CMD Response Error - FORCE_AUTO_CMD_RESP_ERR (w) */
    Ifx_UReg_16Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_16Bit FORCE_CMD_NOT_ISSUED_AUTO_CMD12:1;    /**< \brief [7:7] Force Event for Command Not Issued By Auto CMD12 Error - FORCE_CMD_NOT_ISSUED_AUTO_CMD12 (w) */
    Ifx_UReg_16Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
} Ifx_SDMMC_FORCE_AUTO_CMD_STAT_Bits;

/** \brief Force Event Register for Error Interrupt Status */
typedef struct _Ifx_SDMMC_FORCE_ERROR_INT_STAT_Bits
{
    Ifx_UReg_16Bit FORCE_CMD_TOUT_ERR:1;    /**< \brief [0:0] Force Event for Command Timeout Error (SD/eMMC Mode only) - FORCE_CMD_TOUT_ERR (w) */
    Ifx_UReg_16Bit FORCE_CMD_CRC_ERR:1;    /**< \brief [1:1] Force Event for Command CRC Error (SD/eMMC Mode only) - FORCE_CMD_CRC_ERR (w) */
    Ifx_UReg_16Bit FORCE_CMD_END_BIT_ERR:1;    /**< \brief [2:2] Force Event for Command End Bit Error (SD/eMMC Mode only) - FORCE_CMD_END_BIT_ERR (w) */
    Ifx_UReg_16Bit FORCE_CMD_IDX_ERR:1;    /**< \brief [3:3] Force Event for Command Index Error (SD/eMMC Mode only) - FORCE_CMD_IDX_ERR (w) */
    Ifx_UReg_16Bit FORCE_DATA_TOUT_ERR:1;    /**< \brief [4:4] Force Event for Data Timeout Error (SD/eMMC Mode only) - FORCE_DATA_TOUT_ERR (w) */
    Ifx_UReg_16Bit FORCE_DATA_CRC_ERR:1;    /**< \brief [5:5] Force Event for Data CRC Error (SD/eMMC Mode only) - FORCE_DATA_CRC_ERR (w) */
    Ifx_UReg_16Bit FORCE_DATA_END_BIT_ERR:1;    /**< \brief [6:6] Force Event for Data End Bit Error (SD/eMMC Mode only) - FORCE_DATA_END_BIT_ERR (w) */
    Ifx_UReg_16Bit FORCE_CUR_LMT_ERR:1;    /**< \brief [7:7] Force Event for Current Limit Error - FORCE_CUR_LMT_ERR (w) */
    Ifx_UReg_16Bit FORCE_AUTO_CMD_ERR:1;    /**< \brief [8:8] Force Event for Auto CMD Error (SD/eMMC Mode only) - FORCE_AUTO_CMD_ERR (w) */
    Ifx_UReg_16Bit FORCE_ADMA_ERR:1;    /**< \brief [9:9] Force Event for ADMA Error - FORCE_ADMA_ERR (w) */
    Ifx_UReg_16Bit FORCE_TUNING_ERR:1;    /**< \brief [10:10] Force Event for Tuning Error - FORCE_TUNING_ERR (w) */
    Ifx_UReg_16Bit FORCE_RESP_ERR:1;    /**< \brief [11:11] Force Event for Response Error (SD Mode only) - FORCE_RESP_ERR (w) */
    Ifx_UReg_16Bit FORCE_BOOT_ACK_ERR:1;    /**< \brief [12:12] Force Event for Boot Ack error. - FORCE_BOOT_ACK_ERR (w) */
    Ifx_UReg_16Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_16Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_16Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
} Ifx_SDMMC_FORCE_ERROR_INT_STAT_Bits;

/** \brief Host Controller Version */
typedef struct _Ifx_SDMMC_HOST_CNTRL_VERS_Bits
{
    Ifx_UReg_16Bit SPEC_VERSION_NUM:8;    /**< \brief [7:0] Specification Version Number - SPEC_VERSION_NUM (r) */
    Ifx_UReg_16Bit VENDOR_VERSION_NUM:8;    /**< \brief [15:8] Vendor Version Number - VENDOR_VERSION_NUM (r) */
} Ifx_SDMMC_HOST_CNTRL_VERS_Bits;

/** \brief Host Control 1 Register */
typedef struct _Ifx_SDMMC_HOST_CTRL1_Bits
{
    Ifx_UReg_8Bit LED_CTRL:1;         /**< \brief [0:0] LED Control - LED_CTRL (rw) */
    Ifx_UReg_8Bit DAT_XFER_WIDTH:1;    /**< \brief [1:1] Data Transfer Width (SD/eMMC Mode only) - DAT_XFER_WIDTH (rw) */
    Ifx_UReg_8Bit HIGH_SPEED_EN:1;    /**< \brief [2:2] High Speed Enable (SD/eMMC Mode only) - HIGH_SPEED_EN (rw) */
    Ifx_UReg_8Bit DMA_SEL:2;          /**< \brief [4:3] DMA Select - DMA_SEL (rw) */
    Ifx_UReg_8Bit EXT_DAT_XFER:1;     /**< \brief [5:5] Extended Data Transfer Width (Embedded and an SD/eMMC Mode only) - EXT_DAT_XFER (rw) */
    Ifx_UReg_8Bit CARD_DETECT_TEST_LVL:1;    /**< \brief [6:6] Card Detect Test Level - CARD_DETECT_TEST_LVL (rw) */
    Ifx_UReg_8Bit CARD_DETECT_SIG_LVL:1;    /**< \brief [7:7] Card Detect Signal Selection - CARD_DETECT_SIG_LVL (rw) */
} Ifx_SDMMC_HOST_CTRL1_Bits;

/** \brief Host Control 2 Register */
typedef struct _Ifx_SDMMC_HOST_CTRL2_Bits
{
    Ifx_UReg_16Bit UHS_MODE_SEL:3;    /**< \brief [2:0] eMMC Speed Mode Select - MODE_SEL (rw) */
    Ifx_UReg_16Bit SIGNALING_EN:1;    /**< \brief [3:3] 1.8 V Signaling Enable - SIGNALING_EN (rw) */
    Ifx_UReg_16Bit DRV_STRENGTH_SEL:2;    /**< \brief [5:4] Driver Strength Select - DRV_STRENGTH_SEL (rw) */
    Ifx_UReg_16Bit EXEC_TUNING:1;     /**< \brief [6:6] Execute Tuning - EXEC_TUNING (rw) */
    Ifx_UReg_16Bit SAMPLE_CLK_SEL:1;    /**< \brief [7:7] Sampling Clock Select - SAMPLE_CLK_SEL (rw) */
    Ifx_UReg_16Bit UHS2_IF_ENABLE:1;    /**< \brief [8:8] UHS-II Interface Enable - UHS2_IF_ENABLE (rw) */
    Ifx_UReg_16Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_16Bit ADMA2_LEN_MODE:1;    /**< \brief [10:10] ADMA2 Length Mode - ADMA2_LEN_MODE (rw) */
    Ifx_UReg_16Bit CMD23_ENABLE:1;    /**< \brief [11:11] CMD23 Enable - CMD23_ENABLE (rw) */
    Ifx_UReg_16Bit HOST_VER4_ENABLE:1;    /**< \brief [12:12] Host Version 4 Enable - HOST_VER4_ENABLE (rw) */
    Ifx_UReg_16Bit ADDRESSING:1;      /**< \brief [13:13] 64-bit Addressing - ADDRESSING (rw) */
    Ifx_UReg_16Bit ASYNC_INT_ENABLE:1;    /**< \brief [14:14] Asynchronous Interrupt Enable - ASYNC_INT_ENABLE (rw) */
    Ifx_UReg_16Bit PRESET_VAL_ENABLE:1;    /**< \brief [15:15] Preset Value Enable - PRESET_VAL_ENABLE (rw) */
} Ifx_SDMMC_HOST_CTRL2_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_SDMMC_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUM:16;         /**< \brief [31:16] Module Number Value - MODNUM (r) */
} Ifx_SDMMC_ID_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_SDMMC_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SDMMC_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_SDMMC_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_SDMMC_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_SDMMC_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_SDMMC_KRSTCLR_Bits;

/** \brief DMA burst control register */
typedef struct _Ifx_SDMMC_MBIU_CTRL_Bits
{
    Ifx_UReg_32Bit UNDEFL_INCR_EN:1;    /**< \brief [0:0] Controls the generation of undefined length INCR transfer on master interface (rw) */
    Ifx_UReg_32Bit BURST_INCR4_EN:1;    /**< \brief [1:1] Controls generation of INCR4 transfers on master interface (rw) */
    Ifx_UReg_32Bit BURST_INCR8_EN:1;    /**< \brief [2:2] Controls generation of INCR8 transfers on master interface (rw) */
    Ifx_UReg_32Bit BURST_INCR16_EN:1;    /**< \brief [3:3] Controls generation of INCR16 transfers on master interface (rw) */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:2;     /**< \brief [17:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:6;     /**< \brief [23:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:2;     /**< \brief [25:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SDMMC_MBIU_CTRL_Bits;

/** \brief MSHC version */
typedef struct _Ifx_SDMMC_MSHC_VER_ID_Bits
{
    Ifx_UReg_32Bit MSHC_VER_ID:32;    /**< \brief [31:0] Current release number - MSHC_VER_ID (r) */
} Ifx_SDMMC_MSHC_VER_ID_Bits;

/** \brief MSHC version type */
typedef struct _Ifx_SDMMC_MSHC_VER_TYPE_Bits
{
    Ifx_UReg_32Bit MSHC_VER_TYPE:32;    /**< \brief [31:0] Current release type - MSHC_VER_TYPE (r) */
} Ifx_SDMMC_MSHC_VER_TYPE_Bits;

/** \brief Normal Interrupt Signal Enable Register */
typedef struct _Ifx_SDMMC_NORMAL_INT_SIGNAL_EN_Bits
{
    Ifx_UReg_16Bit CMD_COMPLETE_SIGNAL_EN:1;    /**< \brief [0:0] Command Complete Signal Enable - CMD_COMPLETE_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit XFER_COMPLETE_SIGNAL_EN:1;    /**< \brief [1:1] Transfer Complete Signal Enable - XFER_COMPLETE_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit BGAP_EVENT_SIGNAL_EN:1;    /**< \brief [2:2] Block Gap Event Signal Enable - BGAP_EVENT_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit DMA_INTERRUPT_SIGNAL_EN:1;    /**< \brief [3:3] DMA Interrupt Signal Enable - DMA_INTERRUPT_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit BUF_WR_READY_SIGNAL_EN:1;    /**< \brief [4:4] Buffer Write Ready Signal Enable - BUF_WR_READY_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit BUF_RD_READY_SIGNAL_EN:1;    /**< \brief [5:5] Buffer Read Ready Signal Enable - BUF_RD_READY_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CARD_INSERTION_SIGNAL_EN:1;    /**< \brief [6:6] Card Insertion Signal Enable - CARD_INSERTION_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CARD_REMOVAL_SIGNAL_EN:1;    /**< \brief [7:7] Card Removal Signal Enable - CARD_REMOVAL_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CARD_INTERRUPT_SIGNAL_EN:1;    /**< \brief [8:8] Card Interrupt Signal Enable - CARD_INTERRUPT_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit INT_A_SIGNAL_EN:1;    /**< \brief [9:9] INT_A (Embedded) Signal Enable - INT_A_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit INT_B_SIGNAL_EN:1;    /**< \brief [10:10] INT_B (Embedded) Signal Enable - INT_B_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit INT_C_SIGNAL_EN:1;    /**< \brief [11:11] INT_C (Embedded) Signal Enable - INT_C_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit RE_TUNE_EVENT_SIGNAL_EN:1;    /**< \brief [12:12] Re-Tuning Event Signal Enable. - RE_TUNE_EVENT_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit FX_EVENT_SIGNAL_EN:1;    /**< \brief [13:13] FX Event Signal Enable - FX_EVENT_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit CQE_EVENT_SIGNAL_EN:1;    /**< \brief [14:14] Command Queuing Engine Event Signal Enable - CQE_EVENT_SIGNAL_EN (rw) */
    Ifx_UReg_16Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
} Ifx_SDMMC_NORMAL_INT_SIGNAL_EN_Bits;

/** \brief Normal Interrupt Status Register */
typedef struct _Ifx_SDMMC_NORMAL_INT_STAT_Bits
{
    Ifx_UReg_16Bit CMD_COMPLETE:1;    /**< \brief [0:0] Command Complete - CMD_COMPLETE (rw) */
    Ifx_UReg_16Bit XFER_COMPLETE:1;    /**< \brief [1:1] Transfer Complete - XFER_COMPLETE (rw) */
    Ifx_UReg_16Bit BGAP_EVENT:1;      /**< \brief [2:2] Block Gap Event - BGAP_EVENT (rw) */
    Ifx_UReg_16Bit DMA_INTERRUPT:1;    /**< \brief [3:3] DMA Interrupt - DMA_INTERRUPT (rw) */
    Ifx_UReg_16Bit BUF_WR_READY:1;    /**< \brief [4:4] Buffer Write Ready - BUF_WR_READY (rw) */
    Ifx_UReg_16Bit BUF_RD_READY:1;    /**< \brief [5:5] Buffer Read Ready - BUF_RD_READY (rw) */
    Ifx_UReg_16Bit CARD_INSERTION:1;    /**< \brief [6:6] Card Insertion - CARD_INSERTION (rw) */
    Ifx_UReg_16Bit CARD_REMOVAL:1;    /**< \brief [7:7] Card Removal - CARD_REMOVAL (rw) */
    Ifx_UReg_16Bit CARD_INTERRUPT:1;    /**< \brief [8:8] Card Interrupt - CARD_INTERRUPT (r) */
    Ifx_UReg_16Bit INT_A:1;           /**< \brief [9:9] INT_A (Embedded) - INT_A (r) */
    Ifx_UReg_16Bit INT_B:1;           /**< \brief [10:10] INT_B (Embedded) - INT_B (r) */
    Ifx_UReg_16Bit INT_C:1;           /**< \brief [11:11] INT_C (Embedded) - INT_C (r) */
    Ifx_UReg_16Bit RE_TUNE_EVENT:1;    /**< \brief [12:12] Re-tuning Event - RE_TUNE_EVENT (r) */
    Ifx_UReg_16Bit FX_EVENT:1;        /**< \brief [13:13] FX Event - FX_EVENT (r) */
    Ifx_UReg_16Bit CQE_EVENT:1;       /**< \brief [14:14] Command Queuing Event - CQE_EVENT (rw) */
    Ifx_UReg_16Bit ERR_INTERRUPT:1;    /**< \brief [15:15] Error Interrupt - ERR_INTERRUPT (r) */
} Ifx_SDMMC_NORMAL_INT_STAT_Bits;

/** \brief Normal Interrupt Status Enable Register */
typedef struct _Ifx_SDMMC_NORMAL_INT_STAT_EN_Bits
{
    Ifx_UReg_16Bit CMD_COMPLETE_STAT_EN:1;    /**< \brief [0:0] Command Complete Status Enable - CMD_COMPLETE_STAT_EN (rw) */
    Ifx_UReg_16Bit XFER_COMPLETE_STAT_EN:1;    /**< \brief [1:1] Transfer Complete Status Enable - XFER_COMPLETE_STAT_EN (rw) */
    Ifx_UReg_16Bit BGAP_EVENT_STAT_EN:1;    /**< \brief [2:2] Block Gap Event Status Enable - BGAP_EVENT_STAT_EN (rw) */
    Ifx_UReg_16Bit DMA_INTERRUPT_STAT_EN:1;    /**< \brief [3:3] DMA Interrupt Status Enable - DMA_INTERRUPT_STAT_EN (rw) */
    Ifx_UReg_16Bit BUF_WR_READY_STAT_EN:1;    /**< \brief [4:4] Buffer Write Ready Status Enable - BUF_WR_READY_STAT_EN (rw) */
    Ifx_UReg_16Bit BUF_RD_READY_STAT_EN:1;    /**< \brief [5:5] Buffer Read Ready Status Enable - BUF_RD_READY_STAT_EN (rw) */
    Ifx_UReg_16Bit CARD_INSERTION_STAT_EN:1;    /**< \brief [6:6] Card Insertion Status Enable - CARD_INSERTION_STAT_EN (rw) */
    Ifx_UReg_16Bit CARD_REMOVAL_STAT_EN:1;    /**< \brief [7:7] Card Removal Status Enable - CARD_REMOVAL_STAT_EN (rw) */
    Ifx_UReg_16Bit CARD_INTERRUPT_STAT_EN:1;    /**< \brief [8:8] Card Interrupt Status Enable - CARD_INTERRUPT_STAT_EN (rw) */
    Ifx_UReg_16Bit INT_A_STAT_EN:1;    /**< \brief [9:9] INT_A (Embedded) Status Enable - INT_A_STAT_EN (rw) */
    Ifx_UReg_16Bit INT_B_STAT_EN:1;    /**< \brief [10:10] INT_B (Embedded) Status Enable. - INT_B_STAT_EN (rw) */
    Ifx_UReg_16Bit INT_C_STAT_EN:1;    /**< \brief [11:11] INT_C (Embedded) Status Enable. - INT_C_STAT_EN (rw) */
    Ifx_UReg_16Bit RE_TUNE_EVENT_STAT_EN:1;    /**< \brief [12:12] Re-Tuning Event Status Enable - RE_TUNE_EVENT_STAT_EN (rw) */
    Ifx_UReg_16Bit FX_EVENT_STAT_EN:1;    /**< \brief [13:13] FX Event Status Enable. - FX_EVENT_STAT_EN (rw) */
    Ifx_UReg_16Bit CQE_EVENT_STAT_EN:1;    /**< \brief [14:14] CQE Event Status Enable. - CQE_EVENT_STAT_EN (rw) */
    Ifx_UReg_16Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
} Ifx_SDMMC_NORMAL_INT_STAT_EN_Bits;

/** \brief Preset Value for Default Speed */
typedef struct _Ifx_SDMMC_PRESET_DS_Bits
{
    Ifx_UReg_16Bit FREQ_SEL_VAL:10;    /**< \brief [9:0] SDCLK/RCLK Frequency Select Value - FREQ_SEL_VAL (r) */
    Ifx_UReg_16Bit CLK_GEN_SEL_VAL:1;    /**< \brief [10:10] Clock Generator Select Value - CLK_GEN_SEL_VAL (r) */
    Ifx_UReg_16Bit reserved_11:3;     /**< \brief [13:11] \internal Reserved */
    Ifx_UReg_16Bit DRV_SEL_VAL:2;     /**< \brief [15:14] Driver Strength Select Value - DRV_SEL_VAL (r) */
} Ifx_SDMMC_PRESET_DS_Bits;

/** \brief Preset Value for High Speed */
typedef struct _Ifx_SDMMC_PRESET_HS_Bits
{
    Ifx_UReg_32Bit FREQ_SEL_VAL:10;    /**< \brief [9:0] SDCLK/RCLK Frequency Select Value - FREQ_SEL_VAL (r) */
    Ifx_UReg_32Bit CLK_GEN_SEL_VAL:1;    /**< \brief [10:10] Clock Generator Select Value - CLK_GEN_SEL_VAL (r) */
    Ifx_UReg_32Bit reserved_11:3;     /**< \brief [13:11] \internal Reserved */
    Ifx_UReg_32Bit DRV_SEL_VAL:2;     /**< \brief [15:14] Driver Strength Select Value - DRV_SEL_VAL (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SDMMC_PRESET_HS_Bits;

/** \brief Preset Value for Initialization */
typedef struct _Ifx_SDMMC_PRESET_INIT_Bits
{
    Ifx_UReg_16Bit FREQ_SEL_VAL:10;    /**< \brief [9:0] SDCLK/RCLK Frequency Select Value - FREQ_SEL_VAL (r) */
    Ifx_UReg_16Bit CLK_GEN_SEL_VAL:1;    /**< \brief [10:10] Clock Generator Select Value - CLK_GEN_SEL_VAL (r) */
    Ifx_UReg_16Bit reserved_11:3;     /**< \brief [13:11] \internal Reserved */
    Ifx_UReg_16Bit DRV_SEL_VAL:2;     /**< \brief [15:14] Driver Strength Select Value - DRV_SEL_VAL (r) */
} Ifx_SDMMC_PRESET_INIT_Bits;

/** \brief Present State Register */
typedef struct _Ifx_SDMMC_PSTATE_REG_Bits
{
    Ifx_UReg_32Bit CMD_INHIBIT:1;     /**< \brief [0:0] Command Inhibit (CMD) - CMD_INHIBIT (r) */
    Ifx_UReg_32Bit CMD_INHIBIT_DAT:1;    /**< \brief [1:1] Command Inhibit (DAT)(SD/eMMC Mode only) - CMD_INHIBIT_DAT (r) */
    Ifx_UReg_32Bit DAT_LINE_ACTIVE:1;    /**< \brief [2:2] DAT Line Active (SD/eMMC Mode only) - DAT_LINE_ACTIVE (r) */
    Ifx_UReg_32Bit RE_TUNE_REQ:1;     /**< \brief [3:3] Re-Tuning Request - RE_TUNE_REQ (r) */
    Ifx_UReg_32Bit DAT_7_4:4;         /**< \brief [7:4] DAT[7:4] Line Signal Level (Embedded only) - DAT_7_4 (r) */
    Ifx_UReg_32Bit WR_XFER_ACTIVE:1;    /**< \brief [8:8] Write Transfer Active (SD/eMMC Mode only) - WR_XFER_ACTIVE (r) */
    Ifx_UReg_32Bit RD_XFER_ACTIVE:1;    /**< \brief [9:9] Read Transfer Active (SD/eMMC Mode only) - RD_XFER_ACTIVE (r) */
    Ifx_UReg_32Bit BUF_WR_ENABLE:1;    /**< \brief [10:10] Buffer Write Enable - BUF_WR_ENABLE (r) */
    Ifx_UReg_32Bit BUF_RD_ENABLE:1;    /**< \brief [11:11] Buffer Read Enable - BUF_RD_ENABLE (r) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit CARD_INSERTED:1;    /**< \brief [16:16] Card Inserted - CARD_INSERTED (r) */
    Ifx_UReg_32Bit CARD_STABLE:1;     /**< \brief [17:17] Card Stable - CARD_STABLE (r) */
    Ifx_UReg_32Bit CARD_DETECT_LEVEL:1;    /**< \brief [18:18] Card Detect Pin Level - CARD_DETECT_PIN_LEVEL (r) */
    Ifx_UReg_32Bit WR_PROTECT_SW_LVL:1;    /**< \brief [19:19] Write Protect Switch Pin Level - WR_PROTECT_SW_LVL (r) */
    Ifx_UReg_32Bit DAT_3_0:4;         /**< \brief [23:20] DAT[3:0] Line Signal Level (SD/eMMC Mode only) - DAT_3_0 (r) */
    Ifx_UReg_32Bit CMD_LINE_LVL:1;    /**< \brief [24:24] Command Line Signal Level (SD/eMMC Mode only) - CMD_LINE_LVL (r) */
    Ifx_UReg_32Bit HOST_REG_VOL:1;    /**< \brief [25:25] Host Regulator Voltage Stable - HOST_REG_VOL (r) */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit CMD_ISSUE_ERR:1;    /**< \brief [27:27] Command Not Issued by Error - CMD_ISSUE_ERR (r) */
    Ifx_UReg_32Bit SUB_CMD_STAT:1;    /**< \brief [28:28] Sub Command Status - SUB_CMD_STAT (r) */
    Ifx_UReg_32Bit IN_DORMANT_ST:1;    /**< \brief [29:29] In Dormant Status - IN_DORMANT_ST (r) */
    Ifx_UReg_32Bit LANE_SYNC:1;       /**< \brief [30:30] Lane Synchronization - LANE_SYNC (r) */
    Ifx_UReg_32Bit UHS2_IF_DETECT:1;    /**< \brief [31:31] UHS-II IF Detection - UHS2_IF_DETECT (r) */
} Ifx_SDMMC_PSTATE_REG_Bits;

/** \brief Power Control Register */
typedef struct _Ifx_SDMMC_PWR_CTRL_Bits
{
    Ifx_UReg_8Bit SD_BUS_PWR_VDD1:1;    /**< \brief [0:0] SD Bus Power for VDD1 - SD_BUS_PWR_VDD1 (rw) */
    Ifx_UReg_8Bit SD_BUS_VOL_VDD1:3;    /**< \brief [3:1] SD Bus Voltage Select for VDD1/eMMC Bus Voltage Select for VDD. - SD_BUS_VOL_VDD1 (rw) */
    Ifx_UReg_8Bit SD_BUS_PWR_VDD2:1;    /**< \brief [4:4] SD Bus Power for VDD2. - SD_BUS_PWR_VDD2 (rw) */
    Ifx_UReg_8Bit SD_BUS_VOL_VDD2:3;    /**< \brief [7:5] SD Bus Voltage Select for VDD2. - SD_BUS_VOL_VDD2 (rw) */
} Ifx_SDMMC_PWR_CTRL_Bits;

/** \brief Pointer for Vendor Specific Area 2 */
typedef struct _Ifx_SDMMC_P_VENDOR2_SPECIFIC_AREA_Bits
{
    Ifx_UReg_16Bit REG_OFFSET_ADDR:12;    /**< \brief [11:0] Base offset Address for Command Queuing registers. - REG_OFFSET_ADDR (r) */
    Ifx_UReg_16Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
} Ifx_SDMMC_P_VENDOR2_SPECIFIC_AREA_Bits;

/** \brief Pointer for Vendor Specific Area 1 */
typedef struct _Ifx_SDMMC_P_VENDOR_SPECIFIC_AREA_Bits
{
    Ifx_UReg_16Bit REG_OFFSET_ADDR:12;    /**< \brief [11:0] Base offset Address for Vendor Specific registers. - REG_OFFSET_ADDR (r) */
    Ifx_UReg_16Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
} Ifx_SDMMC_P_VENDOR_SPECIFIC_AREA_Bits;

/** \brief Response Register 01 */
typedef struct _Ifx_SDMMC_RESP01_Bits
{
    Ifx_UReg_32Bit RESP01:32;         /**< \brief [31:0] Command Response - RESP01 (r) */
} Ifx_SDMMC_RESP01_Bits;

/** \brief Response Register 23 */
typedef struct _Ifx_SDMMC_RESP23_Bits
{
    Ifx_UReg_32Bit RESP23:32;         /**< \brief [31:0] Command Response - RESP23 (r) */
} Ifx_SDMMC_RESP23_Bits;

/** \brief Response Register 45 */
typedef struct _Ifx_SDMMC_RESP45_Bits
{
    Ifx_UReg_32Bit RESP45:32;         /**< \brief [31:0] Command Response - RESP45 (r) */
} Ifx_SDMMC_RESP45_Bits;

/** \brief Response Register 67 */
typedef struct _Ifx_SDMMC_RESP67_Bits
{
    Ifx_UReg_32Bit RESP67:32;         /**< \brief [31:0] Command Response - RESP67 (r) */
} Ifx_SDMMC_RESP67_Bits;

/** \brief SDMA System Address register */
typedef struct _Ifx_SDMMC_SDMASA_Bits
{
    Ifx_UReg_32Bit BLOCKCNT_SDMASA:32;    /**< \brief [31:0] 32-bit Block Count (SDMA System Address) - BLOCKCNT_SDMASA (rw) */
} Ifx_SDMMC_SDMASA_Bits;

/** \brief Slot Interrupt Status Register */
typedef struct _Ifx_SDMMC_SLOT_INTR_STATUS_Bits
{
    Ifx_UReg_16Bit INTR_SLOT:8;       /**< \brief [7:0] Interrupt signal for each Slot - INTR_SLOT (r) */
    Ifx_UReg_16Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
} Ifx_SDMMC_SLOT_INTR_STATUS_Bits;

/** \brief Software Reset Register */
typedef struct _Ifx_SDMMC_SW_RST_Bits
{
    Ifx_UReg_8Bit SW_RST_ALL:1;       /**< \brief [0:0] Software Reset For All - SW_RST_ALL (rw) */
    Ifx_UReg_8Bit SW_RST_CMD:1;       /**< \brief [1:1] Software Reset For CMD line - SW_RST_CMD (rw) */
    Ifx_UReg_8Bit SW_RST_DAT:1;       /**< \brief [2:2] Software Reset For DAT line (SD/eMMC Mode only) - SW_RST_DAT (rw) */
    Ifx_UReg_8Bit reserved_3:5;       /**< \brief [7:3] \internal Reserved */
} Ifx_SDMMC_SW_RST_Bits;

/** \brief Timeout Control Register */
typedef struct _Ifx_SDMMC_TOUT_CTRL_Bits
{
    Ifx_UReg_8Bit TOUT_CNT:4;         /**< \brief [3:0] Data Timeout Counter Value. - TOUT_CNT (rw) */
    Ifx_UReg_8Bit reserved_4:4;       /**< \brief [7:4] \internal Reserved */
} Ifx_SDMMC_TOUT_CTRL_Bits;

/** \brief Wakeup Control Register */
typedef struct _Ifx_SDMMC_WUP_CTRL_Bits
{
    Ifx_UReg_8Bit CARD_INT:1;         /**< \brief [0:0] Wakeup Event Enable on Card Interrupt - CARD_INT (rw) */
    Ifx_UReg_8Bit CARD_INSERT:1;      /**< \brief [1:1] Wakeup Event Enable on SD Card Insertion - CARD_INSERT (rw) */
    Ifx_UReg_8Bit CARD_REMOVAL:1;     /**< \brief [2:2] Wakeup Event Enable on SD Card Removal - CARD_REMOVAL (rw) */
    Ifx_UReg_8Bit reserved_3:5;       /**< \brief [7:3] \internal Reserved */
} Ifx_SDMMC_WUP_CTRL_Bits;

/** \brief Transfer Mode register */
typedef struct _Ifx_SDMMC_XFER_MODE_Bits
{
    Ifx_UReg_16Bit DMA_ENABLE:1;      /**< \brief [0:0] DMA Enable - DMA_ENABLE (rw) */
    Ifx_UReg_16Bit BLOCK_COUNT_ENABLE:1;    /**< \brief [1:1] Block Count Enable - BLOCK_COUNT_ENABLE (rw) */
    Ifx_UReg_16Bit AUTO_CMD_ENABLE:2;    /**< \brief [3:2] Auto Command Enable - AUTO_CMD_ENABLE (rw) */
    Ifx_UReg_16Bit DATA_XFER_DIR:1;    /**< \brief [4:4] Data Transfer Direction Select - DATA_XFER_DIR (rw) */
    Ifx_UReg_16Bit MULTI_BLK_SEL:1;    /**< \brief [5:5] Multi/Single Block Select - MULTI_BLK_SEL (rw) */
    Ifx_UReg_16Bit RESP_TYPE:1;       /**< \brief [6:6] Response Type R1/R5 - RESP_TYPE (rw) */
    Ifx_UReg_16Bit RESP_ERR_CHK_ENABLE:1;    /**< \brief [7:7] Response Error Check Enable - RESP_ERR_CHK_ENABLE (rw) */
    Ifx_UReg_16Bit RESP_INT_DISABLE:1;    /**< \brief [8:8] Response Interrupt Disable - RESP_INT_DISABLE (rw) */
    Ifx_UReg_16Bit reserved_9:7;      /**< \brief [15:9] \internal Reserved */
} Ifx_SDMMC_XFER_MODE_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_sdmmc_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ACCEN0_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ACCEN1_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_ACCEN1;

/** \brief ADMA Error Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ADMA_ERR_STAT_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_ADMA_ERR_STAT;

/** \brief ADMA3 Integrated Descriptor Address Register - Low   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ADMA_ID_LOW_Bits B;     /**< \brief Bitfield access */
} Ifx_SDMMC_ADMA_ID_LOW;

/** \brief ADMA System Address Register Low   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ADMA_SA_LOW_Bits B;     /**< \brief Bitfield access */
} Ifx_SDMMC_ADMA_SA_LOW;

/** \brief Argument register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ARGUMENT_Bits B;        /**< \brief Bitfield access */
} Ifx_SDMMC_ARGUMENT;

/** \brief Auto CMD Status Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_AUTO_CMD_STAT_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_AUTO_CMD_STAT;

/** \brief Block Gap Control Register   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_SDMMC_BGAP_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_BGAP_CTRL;

/** \brief 16-bit Block Count register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_BLOCKCOUNT_Bits B;      /**< \brief Bitfield access */
} Ifx_SDMMC_BLOCKCOUNT;

/** \brief Block Size register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_BLOCKSIZE_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_BLOCKSIZE;

/** \brief eMMC Boot Control register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_BOOT_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_BOOT_CTRL;

/** \brief Buffer Data Port Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_BUF_DATA_Bits B;        /**< \brief Bitfield access */
} Ifx_SDMMC_BUF_DATA;

/** \brief Capabilities 1 Register 0 to 31   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_CAPABILITIES1_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_CAPABILITIES1;

/** \brief Capabilities Register 32 to 63   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_CAPABILITIES2_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_CAPABILITIES2;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_CLC_Bits B;             /**< \brief Bitfield access */
} Ifx_SDMMC_CLC;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_CLK_CTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SDMMC_CLK_CTRL;

/** \brief Command register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_CMD_Bits B;             /**< \brief Bitfield access */
} Ifx_SDMMC_CMD;

/** \brief Maximum Current Capabilities Register 0 to 31   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_CURR_CAPABILITIES1_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_CURR_CAPABILITIES1;

/** \brief Maximum Current Capabilities Register 32 to 63   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_CURR_CAPABILITIES2_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_CURR_CAPABILITIES2;

/** \brief Embedded Control register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_EMBEDDED_CTRL_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_EMBEDDED_CTRL;

/** \brief eMMC Control register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_EMMC_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_EMMC_CTRL;

/** \brief Error Interrupt Signal Enable Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ERROR_INT_SIGNAL_EN_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_ERROR_INT_SIGNAL_EN;

/** \brief Error Interrupt Status Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ERROR_INT_STAT_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_ERROR_INT_STAT;

/** \brief Error Interrupt Status Enable Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ERROR_INT_STAT_EN_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_ERROR_INT_STAT_EN;

/** \brief Force Event Register for Auto CMD Error Status register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_FORCE_AUTO_CMD_STAT_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_FORCE_AUTO_CMD_STAT;

/** \brief Force Event Register for Error Interrupt Status   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_FORCE_ERROR_INT_STAT_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_FORCE_ERROR_INT_STAT;

/** \brief Host Controller Version   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_HOST_CNTRL_VERS_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_HOST_CNTRL_VERS;

/** \brief Host Control 1 Register   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_SDMMC_HOST_CTRL1_Bits B;      /**< \brief Bitfield access */
} Ifx_SDMMC_HOST_CTRL1;

/** \brief Host Control 2 Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_HOST_CTRL2_Bits B;      /**< \brief Bitfield access */
} Ifx_SDMMC_HOST_CTRL2;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_ID_Bits B;              /**< \brief Bitfield access */
} Ifx_SDMMC_ID;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_KRST0_Bits B;           /**< \brief Bitfield access */
} Ifx_SDMMC_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_KRST1_Bits B;           /**< \brief Bitfield access */
} Ifx_SDMMC_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_KRSTCLR_Bits B;         /**< \brief Bitfield access */
} Ifx_SDMMC_KRSTCLR;

/** \brief DMA burst control register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_MBIU_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_MBIU_CTRL;

/** \brief MSHC version   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_MSHC_VER_ID_Bits B;     /**< \brief Bitfield access */
} Ifx_SDMMC_MSHC_VER_ID;

/** \brief MSHC version type   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_MSHC_VER_TYPE_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_MSHC_VER_TYPE;

/** \brief Normal Interrupt Signal Enable Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_NORMAL_INT_SIGNAL_EN_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_NORMAL_INT_SIGNAL_EN;

/** \brief Normal Interrupt Status Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_NORMAL_INT_STAT_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_NORMAL_INT_STAT;

/** \brief Normal Interrupt Status Enable Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_NORMAL_INT_STAT_EN_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_NORMAL_INT_STAT_EN;

/** \brief Preset Value for Default Speed   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_PRESET_DS_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_PRESET_DS;

/** \brief Preset Value for High Speed   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_PRESET_HS_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_PRESET_HS;

/** \brief Preset Value for Initialization   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_PRESET_INIT_Bits B;     /**< \brief Bitfield access */
} Ifx_SDMMC_PRESET_INIT;

/** \brief Present State Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_PSTATE_REG_Bits B;      /**< \brief Bitfield access */
} Ifx_SDMMC_PSTATE_REG;

/** \brief Power Control Register   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_SDMMC_PWR_CTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SDMMC_PWR_CTRL;

/** \brief Pointer for Vendor Specific Area 2   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_P_VENDOR2_SPECIFIC_AREA_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_P_VENDOR2_SPECIFIC_AREA;

/** \brief Pointer for Vendor Specific Area 1   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_P_VENDOR_SPECIFIC_AREA_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_P_VENDOR_SPECIFIC_AREA;

/** \brief Response Register 01   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_RESP01_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_RESP01;

/** \brief Response Register 23   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_RESP23_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_RESP23;

/** \brief Response Register 45   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_RESP45_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_RESP45;

/** \brief Response Register 67   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_RESP67_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_RESP67;

/** \brief SDMA System Address register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_SDMASA_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_SDMASA;

/** \brief Slot Interrupt Status Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_SLOT_INTR_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_SDMMC_SLOT_INTR_STATUS;

/** \brief Software Reset Register   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_SDMMC_SW_RST_Bits B;          /**< \brief Bitfield access */
} Ifx_SDMMC_SW_RST;

/** \brief Timeout Control Register   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_SDMMC_TOUT_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_TOUT_CTRL;

/** \brief Wakeup Control Register   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_SDMMC_WUP_CTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SDMMC_WUP_CTRL;

/** \brief Transfer Mode register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_SDMMC_XFER_MODE_Bits B;       /**< \brief Bitfield access */
} Ifx_SDMMC_XFER_MODE;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Sdmmc_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief SDMMC object */
typedef volatile struct _Ifx_SDMMC
{
       Ifx_SDMMC_SDMASA                    SDMASA;                 /**< \brief 0, SDMA System Address register*/
       Ifx_SDMMC_BLOCKSIZE                 BLOCKSIZE;              /**< \brief 4, Block Size register*/
       Ifx_SDMMC_BLOCKCOUNT                BLOCKCOUNT;             /**< \brief 6, 16-bit Block Count register*/
       Ifx_SDMMC_ARGUMENT                  ARGUMENT;               /**< \brief 8, Argument register*/
       Ifx_SDMMC_XFER_MODE                 XFER_MODE;              /**< \brief C, Transfer Mode register*/
       Ifx_SDMMC_CMD                       CMD;                    /**< \brief E, Command register*/
       Ifx_SDMMC_RESP01                    RESP01;                 /**< \brief 10, Response Register 01*/
       Ifx_SDMMC_RESP23                    RESP23;                 /**< \brief 14, Response Register 23*/
       Ifx_SDMMC_RESP45                    RESP45;                 /**< \brief 18, Response Register 45*/
       Ifx_SDMMC_RESP67                    RESP67;                 /**< \brief 1C, Response Register 67*/
       Ifx_SDMMC_BUF_DATA                  BUF_DATA;               /**< \brief 20, Buffer Data Port Register*/
       Ifx_SDMMC_PSTATE_REG                PSTATE_REG;             /**< \brief 24, Present State Register*/
       Ifx_SDMMC_HOST_CTRL1                HOST_CTRL1;             /**< \brief 28, Host Control 1 Register*/
       Ifx_SDMMC_PWR_CTRL                  PWR_CTRL;               /**< \brief 29, Power Control Register*/
       Ifx_SDMMC_BGAP_CTRL                 BGAP_CTRL;              /**< \brief 2A, Block Gap Control Register*/
       Ifx_SDMMC_WUP_CTRL                  WUP_CTRL;               /**< \brief 2B, Wakeup Control Register*/
       Ifx_SDMMC_CLK_CTRL                  CLK_CTRL;               /**< \brief 2C, Clock Control Register*/
       Ifx_SDMMC_TOUT_CTRL                 TOUT_CTRL;              /**< \brief 2E, Timeout Control Register*/
       Ifx_SDMMC_SW_RST                    SW_RST;                 /**< \brief 2F, Software Reset Register*/
       Ifx_SDMMC_NORMAL_INT_STAT           NORMAL_INT_STAT;        /**< \brief 30, Normal Interrupt Status Register*/
       Ifx_SDMMC_ERROR_INT_STAT            ERROR_INT_STAT;         /**< \brief 32, Error Interrupt Status Register*/
       Ifx_SDMMC_NORMAL_INT_STAT_EN        NORMAL_INT_STAT_EN;     /**< \brief 34, Normal Interrupt Status Enable Register*/
       Ifx_SDMMC_ERROR_INT_STAT_EN         ERROR_INT_STAT_EN;      /**< \brief 36, Error Interrupt Status Enable Register*/
       Ifx_SDMMC_NORMAL_INT_SIGNAL_EN      NORMAL_INT_SIGNAL_EN;    /**< \brief 38, Normal Interrupt Signal Enable Register*/
       Ifx_SDMMC_ERROR_INT_SIGNAL_EN       ERROR_INT_SIGNAL_EN;    /**< \brief 3A, Error Interrupt Signal Enable Register*/
       Ifx_SDMMC_AUTO_CMD_STAT             AUTO_CMD_STAT;          /**< \brief 3C, Auto CMD Status Register*/
       Ifx_SDMMC_HOST_CTRL2                HOST_CTRL2;             /**< \brief 3E, Host Control 2 Register*/
       Ifx_SDMMC_CAPABILITIES1             CAPABILITIES1;          /**< \brief 40, Capabilities 1 Register 0 to 31*/
       Ifx_SDMMC_CAPABILITIES2             CAPABILITIES2;          /**< \brief 44, Capabilities Register 32 to 63*/
       Ifx_SDMMC_CURR_CAPABILITIES1        CURR_CAPABILITIES1;     /**< \brief 48, Maximum Current Capabilities Register 0 to 31*/
       Ifx_SDMMC_CURR_CAPABILITIES2        CURR_CAPABILITIES2;     /**< \brief 4C, Maximum Current Capabilities Register 32 to 63*/
       Ifx_SDMMC_FORCE_AUTO_CMD_STAT       FORCE_AUTO_CMD_STAT;    /**< \brief 50, Force Event Register for Auto CMD Error Status register*/
       Ifx_SDMMC_FORCE_ERROR_INT_STAT      FORCE_ERROR_INT_STAT;    /**< \brief 52, Force Event Register for Error Interrupt Status*/
       Ifx_SDMMC_ADMA_ERR_STAT             ADMA_ERR_STAT;          /**< \brief 54, ADMA Error Status Register*/
       Ifx_SDMMC_ADMA_SA_LOW               ADMA_SA_LOW;            /**< \brief 58, ADMA System Address Register Low*/
       Ifx_UReg_8Bit                       reserved_5C[4];         /**< \brief 5C, \internal Reserved */
       Ifx_SDMMC_PRESET_INIT               PRESET_INIT;            /**< \brief 60, Preset Value for Initialization*/
       Ifx_SDMMC_PRESET_DS                 PRESET_DS;              /**< \brief 62, Preset Value for Default Speed*/
       Ifx_SDMMC_PRESET_HS                 PRESET_HS;              /**< \brief 64, Preset Value for High Speed*/
       Ifx_UReg_8Bit                       reserved_68[16];        /**< \brief 68, \internal Reserved */
       Ifx_SDMMC_ADMA_ID_LOW               ADMA_ID_LOW;            /**< \brief 78, ADMA3 Integrated Descriptor Address Register - Low*/
       Ifx_UReg_8Bit                       reserved_7C[108];       /**< \brief 7C, \internal Reserved */
       Ifx_SDMMC_P_VENDOR_SPECIFIC_AREA    P_VENDOR_SPECIFIC_AREA;    /**< \brief E8, Pointer for Vendor Specific Area 1*/
       Ifx_SDMMC_P_VENDOR2_SPECIFIC_AREA   P_VENDOR2_SPECIFIC_AREA;    /**< \brief EA, Pointer for Vendor Specific Area 2*/
       Ifx_UReg_8Bit                       reserved_EC[16];        /**< \brief EC, \internal Reserved */
       Ifx_SDMMC_SLOT_INTR_STATUS          SLOT_INTR_STATUS;       /**< \brief FC, Slot Interrupt Status Register*/
       Ifx_SDMMC_HOST_CNTRL_VERS           HOST_CNTRL_VERS;        /**< \brief FE, Host Controller Version*/
       Ifx_UReg_8Bit                       reserved_100[128];      /**< \brief 100, \internal Reserved */
       Ifx_SDMMC_MSHC_VER_ID               MSHC_VER_ID;            /**< \brief 180, MSHC version*/
       Ifx_SDMMC_MSHC_VER_TYPE             MSHC_VER_TYPE;          /**< \brief 184, MSHC version type*/
       Ifx_UReg_8Bit                       reserved_188[8];        /**< \brief 188, \internal Reserved */
       Ifx_SDMMC_MBIU_CTRL                 MBIU_CTRL;              /**< \brief 190, DMA burst control register*/
       Ifx_UReg_8Bit                       reserved_194[24];       /**< \brief 194, \internal Reserved */
       Ifx_SDMMC_EMMC_CTRL                 EMMC_CTRL;              /**< \brief 1AC, eMMC Control register*/
       Ifx_SDMMC_BOOT_CTRL                 BOOT_CTRL;              /**< \brief 1AE, eMMC Boot Control register*/
       Ifx_UReg_8Bit                       reserved_1B0[208];      /**< \brief 1B0, \internal Reserved */
       Ifx_SDMMC_EMBEDDED_CTRL             EMBEDDED_CTRL;          /**< \brief 280, Embedded Control register*/
       Ifx_UReg_8Bit                       reserved_284[124];      /**< \brief 284, \internal Reserved */
       Ifx_SDMMC_CLC                       CLC;                    /**< \brief 300, Clock Control Register*/
       Ifx_SDMMC_ID                        ID;                     /**< \brief 304, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_308[4];        /**< \brief 308, \internal Reserved */
       Ifx_SDMMC_ACCEN0                    ACCEN0;                 /**< \brief 30C, Access Enable Register 0*/
       Ifx_SDMMC_ACCEN1                    ACCEN1;                 /**< \brief 310, Access Enable Register 1*/
       Ifx_SDMMC_KRST0                     KRST0;                  /**< \brief 314, Kernel Reset Register 0*/
       Ifx_SDMMC_KRST1                     KRST1;                  /**< \brief 318, Kernel Reset Register 1*/
       Ifx_SDMMC_KRSTCLR                   KRSTCLR;                /**< \brief 31C, Kernel Reset Status Clear Register*/
       Ifx_UReg_8Bit                       reserved_320[3295];     /**< \brief 320, \internal Reserved */
} Ifx_SDMMC;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXSDMMC_REGDEF_H */
