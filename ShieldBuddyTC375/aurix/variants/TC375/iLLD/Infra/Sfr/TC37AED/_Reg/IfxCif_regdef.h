/**
 * \file IfxCif_regdef.h
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
 * \defgroup IfxSfr_Cif_Registers Cif Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Cif_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Cif_Registers
 * 
 * \defgroup IfxSfr_Cif_Registers_union Register unions
 * \ingroup IfxSfr_Cif_Registers
 * 
 * \defgroup IfxSfr_Cif_Registers_struct Memory map
 * \ingroup IfxSfr_Cif_Registers
 */
#ifndef IFXCIF_REGDEF_H
#define IFXCIF_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Cif_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_CIF_BBB_ACCEN0_Bits
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
} Ifx_CIF_BBB_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_CIF_BBB_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_CIF_BBB_ACCEN1_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_CIF_BBB_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CIF_BBB_CLC_Bits;

/** \brief General Purpose Control Register */
typedef struct _Ifx_CIF_BBB_GPCTL_Bits
{
    Ifx_UReg_32Bit PISEL:1;           /**< \brief [0:0] Port Input Select Bit - PISEL (r) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_BBB_GPCTL_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_CIF_BBB_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CIF_BBB_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_CIF_BBB_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_BBB_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_CIF_BBB_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_BBB_KRSTCLR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_CIF_BBB_MODID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_CIF_BBB_MODID_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_CIF_CCL_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit CIF_CCLDISS:1;     /**< \brief [1:1] Status of cif_ccl[2] bit - CIF_CCLDISS (r) */
    Ifx_UReg_32Bit CIF_CCLFDIS:1;     /**< \brief [2:2] Clock Control Logic disable - CIF_CCLFDIS (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_CCL_Bits;

/** \brief CIF Data Path Control Register */
typedef struct _Ifx_CIF_DPCL_Bits
{
    Ifx_UReg_32Bit CIF_MP_MUX:2;      /**< \brief [1:0] Data path selector for main path - CIF_MP_MUX (rw) */
    Ifx_UReg_32Bit CIF_CHAN_MODE:2;    /**< \brief [3:2] Y/C splitter channel mode - CIF_CHAN_MODE (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit IF_SELECT:2;       /**< \brief [9:8] Selects input interface - IF_SELECT (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_CIF_DPCL_Bits;

/** \brief Debug Path Control Register */
typedef struct _Ifx_CIF_DP_CTRL_Bits
{
    Ifx_UReg_32Bit DP_EN:1;           /**< \brief [0:0] Debug Path Enable - DP_EN (rw) */
    Ifx_UReg_32Bit DP_SEL:3;          /**< \brief [3:1] Select Source Path which will be transfered over the Debug Interface - DP_SEL (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit RST_FNC:1;         /**< \brief [8:8] Reset Frame Number Counter - RST_FNC (w) */
    Ifx_UReg_32Bit RST_LNC:1;         /**< \brief [9:9] Reset Line Number Counter - RST_LNC (w) */
    Ifx_UReg_32Bit RST_TSC:1;         /**< \brief [10:10] Reset Timestamp Counter - RST_TSC (w) */
    Ifx_UReg_32Bit RST_PD:1;          /**< \brief [11:11] Reset Predivider Counter - RST_PD (w) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit FNC_EN:1;          /**< \brief [13:13] Enable/disable Frame Number Counter - FNC_EN (rw) */
    Ifx_UReg_32Bit LNC_EN:1;          /**< \brief [14:14] Enable/disable Line Number Counter - LNC_EN (rw) */
    Ifx_UReg_32Bit TSC_EN:1;          /**< \brief [15:15] Enable/disable Timestamp Counter - TSC_EN (rw) */
    Ifx_UReg_32Bit UDS1:1;            /**< \brief [16:16] Enable/disable sending of User Defined Symbol 1 - UDS1 (rw) */
    Ifx_UReg_32Bit UDS2:1;            /**< \brief [17:17] Enable/disable sending of User Defined Symbol 2 - UDS2 (rw) */
    Ifx_UReg_32Bit UDS3:1;            /**< \brief [18:18] Enable/disable sending of User Defined Symbol 3 - UDS3 (rw) */
    Ifx_UReg_32Bit UDS4:1;            /**< \brief [19:19] Enable/disable sending of User Defined Symbol 4 - UDS4 (rw) */
    Ifx_UReg_32Bit UDS5:1;            /**< \brief [20:20] Enable/disable sending of User Defined Symbol 5 - UDS5 (rw) */
    Ifx_UReg_32Bit UDS6:1;            /**< \brief [21:21] Enable/disable sending of User Defined Symbol 6 - UDS6 (rw) */
    Ifx_UReg_32Bit UDS7:1;            /**< \brief [22:22] Enable/disable sending of User Defined Symbol 7 - UDS7 (rw) */
    Ifx_UReg_32Bit UDS8:1;            /**< \brief [23:23] Enable/disable sending of User Defined Symbol 8 - UDS8 (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_DP_CTRL_Bits;

/** \brief Debug Path Frame/Line Counter Status Register */
typedef struct _Ifx_CIF_DP_FLC_STAT_Bits
{
    Ifx_UReg_32Bit FNC_VAL:15;        /**< \brief [14:0] Returns the current value of the Frame Number Counter - FNC_VAL (r) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit LNC_VAL:15;        /**< \brief [30:16] Returns the current value of the Line Number Counter - LNC_VAL (r) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_CIF_DP_FLC_STAT_Bits;

/** \brief Debug Path Predivider Control Register */
typedef struct _Ifx_CIF_DP_PDIV_CTRL_Bits
{
    Ifx_UReg_32Bit PDIV_VAL:32;       /**< \brief [31:0] If the Debug Path and the Timestamp Counter are enabled, the timestamp counter will be increased with every pdiv_val+1 CIF module clock cycle. - PDIV_VAL (rw) */
} Ifx_CIF_DP_PDIV_CTRL_Bits;

/** \brief Debug Path Predivider Counter Status Register */
typedef struct _Ifx_CIF_DP_PDIV_STAT_Bits
{
    Ifx_UReg_32Bit PDIV_VAL:32;       /**< \brief [31:0] Returns the current value of the Predivider Counter. - PDIV_VAL (r) */
} Ifx_CIF_DP_PDIV_STAT_Bits;

/** \brief Debug Path Timestamp Counter Status Register */
typedef struct _Ifx_CIF_DP_TSC_STAT_Bits
{
    Ifx_UReg_32Bit TSC_VAL:30;        /**< \brief [29:0] Returns the current value of the Timestamp Counter. - TSC_VAL (r) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CIF_DP_TSC_STAT_Bits;

/** \brief Debug Path User Defined Symbol ${x} Register */
typedef struct _Ifx_CIF_DP_UDS_1S_Bits
{
    Ifx_UReg_32Bit UDS:15;            /**< \brief [14:0] User Defined Symbol which may be inserted into debug stream - UDS (rw) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_CIF_DP_UDS_1S_Bits;

/** \brief Extra Path ${i} Image Cropping Control Register */
typedef struct _Ifx_CIF_EP_IC_1S_CTRL_Bits
{
    Ifx_UReg_32Bit IC_EN:1;           /**< \brief [0:0] Image Cropping Enable - IC_EN (rw) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_EP_IC_1S_CTRL_Bits;

/** \brief Extra Path ${i} Image Cropping Camera Displacement Register */
typedef struct _Ifx_CIF_EP_IC_1S_DISPLACE_Bits
{
    Ifx_UReg_32Bit DX:12;             /**< \brief [11:0] Camera Displacement - DX (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit DY:12;             /**< \brief [27:16] Camera Displacement - DY (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CIF_EP_IC_1S_DISPLACE_Bits;

/** \brief Extra Path ${i} Image Cropping Horizontal Offset of Output Window Register */
typedef struct _Ifx_CIF_EP_IC_1S_H_OFFS_Bits
{
    Ifx_UReg_32Bit H_OFFS:12;         /**< \brief [11:0] Horizontal Picture Offset - H_OFFS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_H_OFFS_Bits;

/** \brief Extra Path ${i} Image Cropping Current Horizontal Offset of Output Window Shadow Register */
typedef struct _Ifx_CIF_EP_IC_1S_H_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit H_OFFS_SHD:13;     /**< \brief [12:0] Horizontal Picture Offset - H_OFFS_SHD (r) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CIF_EP_IC_1S_H_OFFS_SHD_Bits;

/** \brief Extra Path ${i} Image Cropping Output Horizontal Picture Size Register */
typedef struct _Ifx_CIF_EP_IC_1S_H_SIZE_Bits
{
    Ifx_UReg_32Bit H_SIZE:12;         /**< \brief [11:0] Horizontal Picture Size - H_SIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_H_SIZE_Bits;

/** \brief Extra Path ${i} Image Cropping Current Output Horizontal Picture Size Shadow Register */
typedef struct _Ifx_CIF_EP_IC_1S_H_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit H_SIZE_SHD:13;     /**< \brief [12:0] Horizontal Picture Size - H_SIZE_SHD (r) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CIF_EP_IC_1S_H_SIZE_SHD_Bits;

/** \brief Extra Path ${i} Image Cropping Maximum Horizontal Displacement Register */
typedef struct _Ifx_CIF_EP_IC_1S_MAX_DX_Bits
{
    Ifx_UReg_32Bit MAX_DX:12;         /**< \brief [11:0] Maximum Horizontal Displacement - MAX_DX (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_MAX_DX_Bits;

/** \brief Extra Path ${i} Image Cropping Maximum Vertical Displacement Register */
typedef struct _Ifx_CIF_EP_IC_1S_MAX_DY_Bits
{
    Ifx_UReg_32Bit MAX_DY:12;         /**< \brief [11:0] Maximum Vertical Displacement - MAX_DY (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_MAX_DY_Bits;

/** \brief Extra Path ${i} Image Cropping Recenter Register */
typedef struct _Ifx_CIF_EP_IC_1S_RECENTER_Bits
{
    Ifx_UReg_32Bit RECENTER:3;        /**< \brief [2:0] Recenter - RECENTER (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_EP_IC_1S_RECENTER_Bits;

/** \brief Extra Path ${i} Image Cropping Vertical Offset Of Output Window Register */
typedef struct _Ifx_CIF_EP_IC_1S_V_OFFS_Bits
{
    Ifx_UReg_32Bit V_OFFS:12;         /**< \brief [11:0] Vertical Picture Offset - V_OFFS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_V_OFFS_Bits;

/** \brief Extra Path ${i} Image Cropping Current Vertical Offset Of Output Window Shadow Register */
typedef struct _Ifx_CIF_EP_IC_1S_V_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit V_OFFS_SHD:12;     /**< \brief [11:0] Vertical Picture Offset - V_OFFS_SHD (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_V_OFFS_SHD_Bits;

/** \brief Extra Path ${i} Image Cropping Output Vertical Picture Size Register */
typedef struct _Ifx_CIF_EP_IC_1S_V_SIZE_Bits
{
    Ifx_UReg_32Bit V_SIZE:12;         /**< \brief [11:0] Vertical Picture Size - V_SIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_V_SIZE_Bits;

/** \brief Extra Path ${i} Image Cropping Current Output Vertical Picture Size Shadow Register */
typedef struct _Ifx_CIF_EP_IC_1S_V_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit V_SIZE_SHD:12;     /**< \brief [11:0] Vertical Picture Size - V_SIZE_SHD (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_EP_IC_1S_V_SIZE_SHD_Bits;

/** \brief CIF Internal Clock Control Register */
typedef struct _Ifx_CIF_ICCL_Bits
{
    Ifx_UReg_32Bit CIF_ISP_CLK_ENABLE:1;    /**< \brief [0:0] ISP processing clock enable - CIF_ISP_CLK_ENABLE (rw) */
    Ifx_UReg_32Bit reserved_1:4;      /**< \brief [4:1] \internal Reserved */
    Ifx_UReg_32Bit CIF_JPEG_CLK_ENABLE:1;    /**< \brief [5:5] JPEG encoder clock enable - CIF_JPEG_CLK_ENABLE (rw) */
    Ifx_UReg_32Bit CIF_MI_CLK_ENABLE:1;    /**< \brief [6:6] Memory interface clock enable - CIF_MI_CLK_ENABLE (rw) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit CIF_WATCHDOG_CLK_ENABLE:1;    /**< \brief [16:16] Security Watchdog clock enable - CIF_WATCHDOG_CLK_ENABLE (rw) */
    Ifx_UReg_32Bit CIF_LIN_DSCALER_CLK_ENABLE:1;    /**< \brief [17:17] Linear Downscaler clock enable - CIF_LIN_DSCALER_CLK_ENABLE (rw) */
    Ifx_UReg_32Bit CIF_EXTRA_PATHS_CLK_ENABLE:1;    /**< \brief [18:18] Extra Paths clock enable - CIF_EXTRA_PATHS_CLK_ENABLE (rw) */
    Ifx_UReg_32Bit CIF_DEBUG_PATH_CLK_EN:1;    /**< \brief [19:19] Debug Path clock enable - CIF_DEBUG_PATH_CLK_EN (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_ICCL_Bits;

/** \brief CIF Revision Identification Register */
typedef struct _Ifx_CIF_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUM:16;         /**< \brief [31:16] Module Number Value - MODNUM (r) */
} Ifx_CIF_ID_Bits;

/** \brief CIF Internal Reset Control Register */
typedef struct _Ifx_CIF_IRCL_Bits
{
    Ifx_UReg_32Bit CIF_ISP_SOFT_RST:1;    /**< \brief [0:0] Isp software reset - CIF_ISP_SOFT_RST (rw) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit CIF_YCS_SOFT_RST:1;    /**< \brief [2:2] Y/C splitter software reset - CIF_YCS_SOFT_RST (rw) */
    Ifx_UReg_32Bit reserved_3:2;      /**< \brief [4:3] \internal Reserved */
    Ifx_UReg_32Bit CIF_JPEG_SOFT_RST:1;    /**< \brief [5:5] JPEG encoder software reset - CIF_JPEG_SOFT_RST (rw) */
    Ifx_UReg_32Bit CIF_MI_SOFT_RST:1;    /**< \brief [6:6] Memory interface software reset - CIF_MI_SOFT_RST (rw) */
    Ifx_UReg_32Bit CIF_GLOBAL_RST:1;    /**< \brief [7:7] Soft reset of entire CIF - CIF_GLOBAL_RST (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit CIF_WATCHDOG_RST:1;    /**< \brief [16:16] Securtiy Watchdog software reset - CIF_WATCHDOG_RST (rw) */
    Ifx_UReg_32Bit CIF_LIN_DSCALER_RST:1;    /**< \brief [17:17] Linear Downscaler software reset - CIF_LIN_DSCALER_RST (rw) */
    Ifx_UReg_32Bit CIF_EXTRA_PATHS_RST:1;    /**< \brief [18:18] Extra Paths software reset - CIF_EXTRA_PATHS_RST (rw) */
    Ifx_UReg_32Bit CIF_DEBUG_PATH_RST:1;    /**< \brief [19:19] Debug Path software reset - CIF_DEBUG_PATH_RST (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_IRCL_Bits;

/** \brief ISP Image Stabilization Control Register */
typedef struct _Ifx_CIF_ISPIS_CTRL_Bits
{
    Ifx_UReg_32Bit IS_EN:1;           /**< \brief [0:0] Image Stabilization Enable - IS_EN (rw) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_ISPIS_CTRL_Bits;

/** \brief ISP Image Stabilization Camera Displacement Register */
typedef struct _Ifx_CIF_ISPIS_DISPLACE_Bits
{
    Ifx_UReg_32Bit DX:12;             /**< \brief [11:0] Camera Displacement - DX (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit DY:12;             /**< \brief [27:16] Camera Displacement - DY (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CIF_ISPIS_DISPLACE_Bits;

/** \brief ISP Image Stabilization Horizontal Offset Of Output Window Register */
typedef struct _Ifx_CIF_ISPIS_H_OFFS_Bits
{
    Ifx_UReg_32Bit IS_H_OFFS:12;      /**< \brief [11:0] Horizontal Picture Offset - IS_H_OFFS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_H_OFFS_Bits;

/** \brief ISP Image Current Horizontal Offset Of Output Window Shadow Register */
typedef struct _Ifx_CIF_ISPIS_H_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit IS_H_OFFS_SHD:13;    /**< \brief [12:0] Horizontal Picture Offset - IS_H_OFFS_SHD (r) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CIF_ISPIS_H_OFFS_SHD_Bits;

/** \brief ISP Image Stabilization Output Horizontal Picture Size Register */
typedef struct _Ifx_CIF_ISPIS_H_SIZE_Bits
{
    Ifx_UReg_32Bit IS_H_SIZE:12;      /**< \brief [11:0] Horizontal Picture Size - IS_H_SIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_H_SIZE_Bits;

/** \brief ISP Image Current Output Horizontal Picture Size Shadow Register */
typedef struct _Ifx_CIF_ISPIS_H_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit ISP_H_SIZE_SHD:13;    /**< \brief [12:0] Horizontal Picture Size - ISP_H_SIZE_SHD (r) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CIF_ISPIS_H_SIZE_SHD_Bits;

/** \brief ISP Image Stabilization Maximum Horizontal Displacement Register */
typedef struct _Ifx_CIF_ISPIS_MAX_DX_Bits
{
    Ifx_UReg_32Bit IS_MAX_DX:12;      /**< \brief [11:0] Maximum Horizontal Displacement - IS_MAX_DX (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_MAX_DX_Bits;

/** \brief ISP Image Stabilization Maximum Vertical Displacement Register */
typedef struct _Ifx_CIF_ISPIS_MAX_DY_Bits
{
    Ifx_UReg_32Bit IS_MAX_DY:12;      /**< \brief [11:0] Maximum Vertical Displacement - IS_MAX_DY (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_MAX_DY_Bits;

/** \brief ISP Image Stabilization Recenter Register */
typedef struct _Ifx_CIF_ISPIS_RECENTER_Bits
{
    Ifx_UReg_32Bit RECENTER:3;        /**< \brief [2:0] Recenter - RECENTER (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_ISPIS_RECENTER_Bits;

/** \brief ISP Image Stabilization Vertical Offset Of Output Window Register */
typedef struct _Ifx_CIF_ISPIS_V_OFFS_Bits
{
    Ifx_UReg_32Bit IS_V_OFFS:12;      /**< \brief [11:0] Vertical Picture Offset - IS_V_OFFS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_V_OFFS_Bits;

/** \brief ISP Image Current Vertical Offset Of Output Window Shadow Register */
typedef struct _Ifx_CIF_ISPIS_V_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit IS_V_OFFS_SHD:12;    /**< \brief [11:0] Vertical Picture Offset - IS_V_OFFS_SHD (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_V_OFFS_SHD_Bits;

/** \brief ISP Image Stabilization Output Vertical Picture Size Register */
typedef struct _Ifx_CIF_ISPIS_V_SIZE_Bits
{
    Ifx_UReg_32Bit IS_V_SIZE:12;      /**< \brief [11:0] Vertical Picture Size - IS_V_SIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_V_SIZE_Bits;

/** \brief ISP Image Current Output Vertical Picture Size Shadow Register */
typedef struct _Ifx_CIF_ISPIS_V_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit ISP_V_SIZE_SHD:12;    /**< \brief [11:0] Vertical Picture Size - ISP_V_SIZE_SHD (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISPIS_V_SIZE_SHD_Bits;

/** \brief ISP Acquisition Horizontal Offset Register */
typedef struct _Ifx_CIF_ISP_ACQ_H_OFFS_Bits
{
    Ifx_UReg_32Bit ACQ_H_OFFS:13;     /**< \brief [12:0] Horizontal sample offset - ACQ_H_OFFS (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CIF_ISP_ACQ_H_OFFS_Bits;

/** \brief ISP Acquisition Horizontal Size Register */
typedef struct _Ifx_CIF_ISP_ACQ_H_SIZE_Bits
{
    Ifx_UReg_32Bit ACQ_H_SIZE:13;     /**< \brief [12:0] Horizontal sample size - ACQ_H_SIZE (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CIF_ISP_ACQ_H_SIZE_Bits;

/** \brief ISP Acquisition Number of Frames Register */
typedef struct _Ifx_CIF_ISP_ACQ_NR_FRAMES_Bits
{
    Ifx_UReg_32Bit ACQ_NR_FRAMES:10;    /**< \brief [9:0] Number of Input Frames - ACQ_NR_FRAMES (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_CIF_ISP_ACQ_NR_FRAMES_Bits;

/** \brief ISP Acquisition Properties Register */
typedef struct _Ifx_CIF_ISP_ACQ_PROP_Bits
{
    Ifx_UReg_32Bit SAMPLE_EDGE:1;     /**< \brief [0:0] Sample Edge - SAMPLE_EDGE (rw) */
    Ifx_UReg_32Bit HSYNC_POL:1;       /**< \brief [1:1] Horizontal sync polarity - HSYNC_POL (rw) */
    Ifx_UReg_32Bit VSYNC_POL:1;       /**< \brief [2:2] Vertical sync polarity - VSYNC_POL (rw) */
    Ifx_UReg_32Bit reserved_3:4;      /**< \brief [6:3] \internal Reserved */
    Ifx_UReg_32Bit CCIR_SEQ:2;        /**< \brief [8:7] CCIR Sequence - CCIR_SEQ (rw) */
    Ifx_UReg_32Bit FIELD_SELECTION:2;    /**< \brief [10:9] Field Selection - FIELD_SELECTION (rw) */
    Ifx_UReg_32Bit FIELD_INVERT:1;    /**< \brief [11:11] Field Invert - FIELD_INVERT (rw) */
    Ifx_UReg_32Bit INPUT_SELECTION:4;    /**< \brief [15:12] Input Selection - INPUT_SELECTION (rw) */
    Ifx_UReg_32Bit reserved_16:4;     /**< \brief [19:16] \internal Reserved */
    Ifx_UReg_32Bit INPUT_SELECTION_NO_APP:1;    /**< \brief [20:20] Input Selection No Append - INPUT_SELECTION_NO_APP (rw) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_CIF_ISP_ACQ_PROP_Bits;

/** \brief ISP Acquistion Vertical Offset Register */
typedef struct _Ifx_CIF_ISP_ACQ_V_OFFS_Bits
{
    Ifx_UReg_32Bit ACQ_V_OFFS:12;     /**< \brief [11:0] Vertical sample offset - ACQ_V_OFFS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_ACQ_V_OFFS_Bits;

/** \brief ISP Acquisition Vertical Size Register */
typedef struct _Ifx_CIF_ISP_ACQ_V_SIZE_Bits
{
    Ifx_UReg_32Bit ACQ_V_SIZE:12;     /**< \brief [11:0] Vertical sample size - ACQ_V_SIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_ACQ_V_SIZE_Bits;

/** \brief ISP Global Control Register */
typedef struct _Ifx_CIF_ISP_CTRL_Bits
{
    Ifx_UReg_32Bit ISP_ENABLE:1;      /**< \brief [0:0] ISP output enable - ISP_ENABLE (rw) */
    Ifx_UReg_32Bit ISP_MODE:3;        /**< \brief [3:1] ISP Mode - ISP_MODE (rw) */
    Ifx_UReg_32Bit ISP_INFORM_ENABLE:1;    /**< \brief [4:4] ISP Input Formater Enable - ISP_INFORM_ENABLE (rw) */
    Ifx_UReg_32Bit reserved_5:4;      /**< \brief [8:5] \internal Reserved */
    Ifx_UReg_32Bit ISP_CFG_UPD:1;     /**< \brief [9:9] ISP Config Update - ISP_CFG_UPD (w) */
    Ifx_UReg_32Bit ISP_GEN_CFG_UPD:1;    /**< \brief [10:10] ISP Generate Config Update - ISP_GEN_CFG_UPD (w) */
    Ifx_UReg_32Bit reserved_11:2;     /**< \brief [12:11] \internal Reserved */
    Ifx_UReg_32Bit ISP_CSM_Y_RANGE:1;    /**< \brief [13:13] Color Space Matrix luminance clipping range for ISP output - ISP_CSM_Y_RANGE (rw) */
    Ifx_UReg_32Bit ISP_CSM_C_RANGE:1;    /**< \brief [14:14] Color Space Matrix chrominance clipping range for ISP output - ISP_CSM_C_RANGE (rw) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_CIF_ISP_CTRL_Bits;

/** \brief ISP Error Register */
typedef struct _Ifx_CIF_ISP_ERR_Bits
{
    Ifx_UReg_32Bit INFORM_SIZE_ERR:1;    /**< \brief [0:0] Size error is generated in inform submodule - INFORM_SIZE_ERR (r) */
    Ifx_UReg_32Bit IS_SIZE_ERR:1;     /**< \brief [1:1] Size error is generated in image stabilization submodule - IS_SIZE_ERR (r) */
    Ifx_UReg_32Bit OUTFORM_SIZE_ERR:1;    /**< \brief [2:2] Size error is generated in outmux submodule - OUTFORM_SIZE_ERR (r) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_ISP_ERR_Bits;

/** \brief ISP Error Clear Register */
typedef struct _Ifx_CIF_ISP_ERR_CLR_Bits
{
    Ifx_UReg_32Bit INFORM_SIZE_ERR_CLR:1;    /**< \brief [0:0] Size error is cleared - INFORM_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit IS_SIZE_ERR_CLR:1;    /**< \brief [1:1] Size error is cleared - IS_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit OUTFORM_SIZE_ERR_CLR:1;    /**< \brief [2:2] Size error is cleared - OUTFORM_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_ISP_ERR_CLR_Bits;

/** \brief ISP Shadow Flags Register */
typedef struct _Ifx_CIF_ISP_FLAGS_SHD_Bits
{
    Ifx_UReg_32Bit ISP_ENABLE_SHD:1;    /**< \brief [0:0] ISP enable shadow register - ISP_ENABLE_SHD (r) */
    Ifx_UReg_32Bit ISP_INFORM_ENABLE_SHD:1;    /**< \brief [1:1] Input formatter enable shadow register - ISP_INFORM_ENABLE_SHD (r) */
    Ifx_UReg_32Bit INFORM_FIELD:1;    /**< \brief [2:2] Current field information - INFORM_FIELD (r) */
    Ifx_UReg_32Bit reserved_3:11;     /**< \brief [13:3] \internal Reserved */
    Ifx_UReg_32Bit S_DATA:16;         /**< \brief [29:14] State of ISP input port s_data - S_DATA (r) */
    Ifx_UReg_32Bit S_VSYNC:1;         /**< \brief [30:30] State of ISP input port s_vsync - S_VSYNC (r) */
    Ifx_UReg_32Bit S_HSYNC:1;         /**< \brief [31:31] State of ISP input port s_hsync - S_HSYNC (r) */
} Ifx_CIF_ISP_FLAGS_SHD_Bits;

/** \brief ISP Frame Counter Register */
typedef struct _Ifx_CIF_ISP_FRAME_COUNT_Bits
{
    Ifx_UReg_32Bit FRAME_COUNTER:10;    /**< \brief [9:0] Current Frame Count of Processing - FRAME_COUNTER (r) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_CIF_ISP_FRAME_COUNT_Bits;

/** \brief ISP Interrupt Clear Register */
typedef struct _Ifx_CIF_ISP_ICR_Bits
{
    Ifx_UReg_32Bit ICR_ISP_OFF:1;     /**< \brief [0:0] Isp was Turned Off (vsynced) - ICR_ISP_OFF (w) */
    Ifx_UReg_32Bit ICR_FRAME:1;       /**< \brief [1:1] Frame was Completely Put Out - ICR_FRAME (w) */
    Ifx_UReg_32Bit ICR_DATA_LOSS:1;    /**< \brief [2:2] Loss of Data - ICR_DATA_LOSS (w) */
    Ifx_UReg_32Bit ICR_PIC_SIZE_ERR:1;    /**< \brief [3:3] Pic Size Violation Occurred - ICR_PIC_SIZE_ERR (w) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit ICR_FRAME_IN:1;    /**< \brief [5:5] Sampled Input Frame is Complete - ICR_FRAME_IN (w) */
    Ifx_UReg_32Bit ICR_V_START:1;     /**< \brief [6:6] Start Edge of v_sync - ICR_V_START (w) */
    Ifx_UReg_32Bit ICR_H_START:1;     /**< \brief [7:7] Start Edge of h_sync - ICR_H_START (w) */
    Ifx_UReg_32Bit reserved_8:11;     /**< \brief [18:8] \internal Reserved */
    Ifx_UReg_32Bit ICR_WD_TRIG:1;     /**< \brief [19:19] A watchdog timeout was triggered at the ISP input - ICR_WD_TRIG (w) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_ISP_ICR_Bits;

/** \brief ISP Interrupt Mask Register */
typedef struct _Ifx_CIF_ISP_IMSC_Bits
{
    Ifx_UReg_32Bit IMSC_ISP_OFF:1;    /**< \brief [0:0] Isp was Turned Off (vsynced) - IMSC_ISP_OFF (rw) */
    Ifx_UReg_32Bit IMSC_FRAME:1;      /**< \brief [1:1] Frame was Completely Put Out - IMSC_FRAME (rw) */
    Ifx_UReg_32Bit IMSC_DATA_LOSS:1;    /**< \brief [2:2] Loss of Data - IMSC_DATA_LOSS (rw) */
    Ifx_UReg_32Bit IMSC_PIC_SIZE_ERR:1;    /**< \brief [3:3] Pic Size Violation Occurred - IMSC_PIC_SIZE_ERR (rw) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit IMSC_FRAME_IN:1;    /**< \brief [5:5] Sampled Input Frame is Complete - IMSC_FRAME_IN (rw) */
    Ifx_UReg_32Bit IMSC_V_START:1;    /**< \brief [6:6] Start Edge of v_sync - IMSC_V_START (rw) */
    Ifx_UReg_32Bit IMSC_H_START:1;    /**< \brief [7:7] Start Edge of h_sync - IMSC_H_START (rw) */
    Ifx_UReg_32Bit reserved_8:11;     /**< \brief [18:8] \internal Reserved */
    Ifx_UReg_32Bit IMSC_WD_TRIG:1;    /**< \brief [19:19] A watchdog timeout was triggered at the ISP input - IMSC_WD_TRIG (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_ISP_IMSC_Bits;

/** \brief ISP Interrupt Set Register */
typedef struct _Ifx_CIF_ISP_ISR_Bits
{
    Ifx_UReg_32Bit ISR_ISP_OFF:1;     /**< \brief [0:0] Isp was Turned Off (vsynced) - ISR_ISP_OFF (w) */
    Ifx_UReg_32Bit ISR_FRAME:1;       /**< \brief [1:1] Frame was Completely Put Out - ISR_FRAME (w) */
    Ifx_UReg_32Bit ISR_DATA_LOSS:1;    /**< \brief [2:2] Loss of Data - ISR_DATA_LOSS (w) */
    Ifx_UReg_32Bit ISR_PIC_SIZE_ERR:1;    /**< \brief [3:3] Pic Size Violation Occurred - ISR_PIC_SIZE_ERR (w) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit ISR_FRAME_IN:1;    /**< \brief [5:5] Sampled Input Frame is Complete - ISR_FRAME_IN (w) */
    Ifx_UReg_32Bit ISR_V_START:1;     /**< \brief [6:6] Start Edge of v_sync - ISR_V_START (w) */
    Ifx_UReg_32Bit ISR_H_START:1;     /**< \brief [7:7] Start Edge of h_sync - ISR_H_START (w) */
    Ifx_UReg_32Bit reserved_8:11;     /**< \brief [18:8] \internal Reserved */
    Ifx_UReg_32Bit ISR_WD_TRIG:1;     /**< \brief [19:19] A watchdog timeout was triggered at the ISP input - ISR_WD_TRIG (w) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_ISP_ISR_Bits;

/** \brief ISP Masked Interrupt Status Register */
typedef struct _Ifx_CIF_ISP_MIS_Bits
{
    Ifx_UReg_32Bit MIS_ISP_OFF:1;     /**< \brief [0:0] Isp was Turned Off (vsynced) - MIS_ISP_OFF (r) */
    Ifx_UReg_32Bit MIS_FRAME:1;       /**< \brief [1:1] Frame was Completely Put Out - MIS_FRAME (r) */
    Ifx_UReg_32Bit MIS_DATA_LOSS:1;    /**< \brief [2:2] Loss of Data - MIS_DATA_LOSS (r) */
    Ifx_UReg_32Bit MIS_PIC_SIZE_ERR:1;    /**< \brief [3:3] Pic Size Violation Occurred - MIS_PIC_SIZE_ERR (r) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit MIS_FRAME_IN:1;    /**< \brief [5:5] Sampled Input Frame is Complete - MIS_FRAME_IN (r) */
    Ifx_UReg_32Bit MIS_V_START:1;     /**< \brief [6:6] Start Edge of v_sync - MIS_V_START (r) */
    Ifx_UReg_32Bit MIS_H_START:1;     /**< \brief [7:7] Start Edge of h_sync - MIS_H_START (r) */
    Ifx_UReg_32Bit reserved_8:11;     /**< \brief [18:8] \internal Reserved */
    Ifx_UReg_32Bit MIS_WD_TRIG:1;     /**< \brief [19:19] A watchdog timeout was triggered at the ISP input - MIS_WD_TRIG (r) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_ISP_MIS_Bits;

/** \brief ISP Output Window Horizontal Offset Register */
typedef struct _Ifx_CIF_ISP_OUT_H_OFFS_Bits
{
    Ifx_UReg_32Bit ISP_OUT_H_OFFS:12;    /**< \brief [11:0] Horizontal Picture Offset - ISP_OUT_H_OFFS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_OUT_H_OFFS_Bits;

/** \brief ISP Output Window Horizontal Offset Shadow Register */
typedef struct _Ifx_CIF_ISP_OUT_H_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit ISP_OUT_H_OFFS_SHD:12;    /**< \brief [11:0] Current horizontal picture offset - ISP_OUT_H_OFFS_SHD (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_OUT_H_OFFS_SHD_Bits;

/** \brief ISP Output Horizontal Picture Size Register */
typedef struct _Ifx_CIF_ISP_OUT_H_SIZE_Bits
{
    Ifx_UReg_32Bit ISP_OUT_H_SIZE:12;    /**< \brief [11:0] Horizontal picture size - ISP_OUT_H_SIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_OUT_H_SIZE_Bits;

/** \brief ISP Output Horizontal Picture Size Shadow Register */
typedef struct _Ifx_CIF_ISP_OUT_H_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit ISP_OUT_H_SIZE_SHD:13;    /**< \brief [12:0] Current horizontal picture size - ISP_OUT_H_SIZE_SHD (r) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CIF_ISP_OUT_H_SIZE_SHD_Bits;

/** \brief ISP Output Window Vertical Offset Register */
typedef struct _Ifx_CIF_ISP_OUT_V_OFFS_Bits
{
    Ifx_UReg_32Bit ISP_OUT_V_OFFS:12;    /**< \brief [11:0] Vertical Picture Offset - ISP_OUT_V_OFFS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_OUT_V_OFFS_Bits;

/** \brief ISP Output Window Vertical Offset Shadow Register */
typedef struct _Ifx_CIF_ISP_OUT_V_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit ISP_OUT_V_OFFS_SHD:12;    /**< \brief [11:0] Current vertical picture offset - ISP_OUT_V_OFFS_SHD (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_OUT_V_OFFS_SHD_Bits;

/** \brief ISP Output Vertical Picture Size Register */
typedef struct _Ifx_CIF_ISP_OUT_V_SIZE_Bits
{
    Ifx_UReg_32Bit ISP_OUT_V_SIZE:12;    /**< \brief [11:0] Vertical picture size - ISP_OUT_V_SIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_OUT_V_SIZE_Bits;

/** \brief ISP Output Vertical Picture Size Shadow Register */
typedef struct _Ifx_CIF_ISP_OUT_V_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit ISP_OUT_V_SIZE_SHD:12;    /**< \brief [11:0] Current vertical pic size - ISP_OUT_V_SIZE_SHD (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_ISP_OUT_V_SIZE_SHD_Bits;

/** \brief ISP Raw Interrupt Status Register */
typedef struct _Ifx_CIF_ISP_RIS_Bits
{
    Ifx_UReg_32Bit RIS_ISP_OFF:1;     /**< \brief [0:0] Isp was Turned Off (vsynced) - RIS_ISP_OFF (r) */
    Ifx_UReg_32Bit RIS_FRAME:1;       /**< \brief [1:1] Frame was Completely Put Out - RIS_FRAME (r) */
    Ifx_UReg_32Bit RIS_DATA_LOSS:1;    /**< \brief [2:2] Loss of Data - RIS_DATA_LOSS (r) */
    Ifx_UReg_32Bit RIS_PIC_SIZE_ERR:1;    /**< \brief [3:3] Pic Size Violation Occurred - RIS_PIC_SIZE_ERR (r) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit RIS_FRAME_IN:1;    /**< \brief [5:5] Sampled Input Frame is Complete - RIS_FRAME_IN (r) */
    Ifx_UReg_32Bit RIS_V_START:1;     /**< \brief [6:6] Start Edge of v_sync - RIS_V_START (r) */
    Ifx_UReg_32Bit RIS_H_START:1;     /**< \brief [7:7] Start Edge of h_sync - RIS_H_START (r) */
    Ifx_UReg_32Bit reserved_8:11;     /**< \brief [18:8] \internal Reserved */
    Ifx_UReg_32Bit RIS_WD_TRIG:1;     /**< \brief [19:19] A watchdog timeout was triggered at the ISP input - RIS_WD_TRIG (r) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_ISP_RIS_Bits;

/** \brief JPE Huffman Table Selector For AC Values Register */
typedef struct _Ifx_CIF_JPE_AC_TABLE_SELECT_Bits
{
    Ifx_UReg_32Bit AC_TABLE_SELECT:3;    /**< \brief [2:0] AC Table Selector - AC_TABLE_SELECT (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_JPE_AC_TABLE_SELECT_Bits;

/** \brief JPE Cb/Cr Value Scaling Control Register */
typedef struct _Ifx_CIF_JPE_CBCR_SCALE_EN_Bits
{
    Ifx_UReg_32Bit CBCR_SCALE_EN:1;    /**< \brief [0:0] Cb/Cr scale flag - CBCR_SCALE_EN (rw) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_JPE_CBCR_SCALE_EN_Bits;

/** \brief JPE Huffman Table Selector For DC Values Register */
typedef struct _Ifx_CIF_JPE_DC_TABLE_SELECT_Bits
{
    Ifx_UReg_32Bit S0:1;              /**< \brief [0:0] DC Table Selector - S0 (rw) */
    Ifx_UReg_32Bit S1:1;              /**< \brief [1:1] DC Table Selector - S1 (rw) */
    Ifx_UReg_32Bit S2:1;              /**< \brief [2:2] DC Table Selector - S2 (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_JPE_DC_TABLE_SELECT_Bits;

/** \brief JPE Debug Information Register */
typedef struct _Ifx_CIF_JPE_DEBUG_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit DEB_QIQ_TABLE_ACC:1;    /**< \brief [2:2] QIQ Table Access - DEB_QIQ_TABLE_ACC (r) */
    Ifx_UReg_32Bit DEB_VLC_ENCODE_BUSY:1;    /**< \brief [3:3] VLC Encode Busy - DEB_VLC_ENCODE_BUSY (r) */
    Ifx_UReg_32Bit DEB_R2B_MEMORY_FULL:1;    /**< \brief [4:4] R2B Memory Full - DEB_R2B_MEMORY_FULL (r) */
    Ifx_UReg_32Bit DEB_VLC_TABLE_BUSY:1;    /**< \brief [5:5] Debug VLC Table Busy - DEB_VLC_TABLE_BUSY (r) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit DEB_BAD_TABLE_ACCESS:1;    /**< \brief [8:8] Debug Bad Table Access - DEB_BAD_TABLE_ACCESS (r) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_CIF_JPE_DEBUG_Bits;

/** \brief JPE Start Command To Start JFIF Stream Encoding Register */
typedef struct _Ifx_CIF_JPE_ENCODE_Bits
{
    Ifx_UReg_32Bit ENCODE:1;          /**< \brief [0:0] Encode - ENCODE (w) */
    Ifx_UReg_32Bit reserved_1:3;      /**< \brief [3:1] \internal Reserved */
    Ifx_UReg_32Bit CONT_MODE:2;       /**< \brief [5:4] Encoder continuous mode - CONT_MODE (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CIF_JPE_ENCODE_Bits;

/** \brief JPE Encoder Status Flag Register */
typedef struct _Ifx_CIF_JPE_ENCODER_BUSY_Bits
{
    Ifx_UReg_32Bit CODEC_BUSY:1;      /**< \brief [0:0] Codec Busy - CODEC_BUSY (r) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_JPE_ENCODER_BUSY_Bits;

/** \brief JPE Encode Mode Register */
typedef struct _Ifx_CIF_JPE_ENCODE_MODE_Bits
{
    Ifx_UReg_32Bit ENCODE_MODE:1;     /**< \brief [0:0] Encode Mode - ENCODE_MODE (r) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_JPE_ENCODE_MODE_Bits;

/** \brief JPEG Codec Horizontal Image Size For Encoding Register */
typedef struct _Ifx_CIF_JPE_ENC_HSIZE_Bits
{
    Ifx_UReg_32Bit ENC_HSIZE:12;      /**< \brief [11:0] Horizontal Size - ENC_HSIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_JPE_ENC_HSIZE_Bits;

/** \brief JPEG Codec Vertical Image Size For Encoding Register */
typedef struct _Ifx_CIF_JPE_ENC_VSIZE_Bits
{
    Ifx_UReg_32Bit ENC_VSIZE:12;      /**< \brief [11:0] Vertical Size - ENC_VSIZE (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CIF_JPE_ENC_VSIZE_Bits;

/** \brief JPE Error Interrupt Clear Register */
typedef struct _Ifx_CIF_JPE_ERROR_ICR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit VLC_SYMBOL_ERR:1;    /**< \brief [4:4] VLC Symbol Error - VLC_SYMBOL_ERR (w) */
    Ifx_UReg_32Bit reserved_5:2;      /**< \brief [6:5] \internal Reserved */
    Ifx_UReg_32Bit DCT_ERR:1;         /**< \brief [7:7] DC Table Error - DCT_ERR (w) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit R2B_IMG_SIZE_ERR:1;    /**< \brief [9:9] R2B Image Size Error - R2B_IMG_SIZE_ERR (w) */
    Ifx_UReg_32Bit VLC_TABLE_ERR:1;    /**< \brief [10:10] VLC Table Error - VLC_TABLE_ERR (w) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_JPE_ERROR_ICR_Bits;

/** \brief JPE Error Interrupt Mask Register */
typedef struct _Ifx_CIF_JPE_ERROR_IMR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit VLC_SYMBOL_ERR:1;    /**< \brief [4:4] VLC Symbol Error - VLC_SYMBOL_ERR (rw) */
    Ifx_UReg_32Bit reserved_5:2;      /**< \brief [6:5] \internal Reserved */
    Ifx_UReg_32Bit DCT_ERR:1;         /**< \brief [7:7] DC Table Error - DCT_ERR (rw) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit R2B_IMG_SIZE_ERR:1;    /**< \brief [9:9] R2B Image Size Error - R2B_IMG_SIZE_ERR (rw) */
    Ifx_UReg_32Bit VLC_TABLE_ERR:1;    /**< \brief [10:10] VLC Table Error - VLC_TABLE_ERR (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_JPE_ERROR_IMR_Bits;

/** \brief JPE Error Interrupt Set Register */
typedef struct _Ifx_CIF_JPE_ERROR_ISR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit VLC_SYMBOL_ERR:1;    /**< \brief [4:4] VLC Symbol Error - VLC_SYMBOL_ERR (w) */
    Ifx_UReg_32Bit reserved_5:2;      /**< \brief [6:5] \internal Reserved */
    Ifx_UReg_32Bit DCT_ERR:1;         /**< \brief [7:7] DC Table Error - DCT_ERR (w) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit R2B_IMG_SIZE_ERR:1;    /**< \brief [9:9] R2B Image Size Error - R2B_IMG_SIZE_ERR (w) */
    Ifx_UReg_32Bit VLC_TABLE_ERR:1;    /**< \brief [10:10] VLC Table Error - VLC_TABLE_ERR (w) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_JPE_ERROR_ISR_Bits;

/** \brief JPE Error Masked Interrupt Status Register */
typedef struct _Ifx_CIF_JPE_ERROR_MIS_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit VLC_SYMBOL_ERR:1;    /**< \brief [4:4] VLC Symbol Error - VLC_SYMBOL_ERR (r) */
    Ifx_UReg_32Bit reserved_5:2;      /**< \brief [6:5] \internal Reserved */
    Ifx_UReg_32Bit DCT_ERR:1;         /**< \brief [7:7] DC Table Error - DCT_ERR (r) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit R2B_IMG_SIZE_ERR:1;    /**< \brief [9:9] R2B Image Size Error - R2B_IMG_SIZE_ERR (r) */
    Ifx_UReg_32Bit VLC_TABLE_ERR:1;    /**< \brief [10:10] VLC Table Error - VLC_TABLE_ERR (r) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_JPE_ERROR_MIS_Bits;

/** \brief JPE Error Raw Interrupt Status Register */
typedef struct _Ifx_CIF_JPE_ERROR_RIS_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit VLC_SYMBOL_ERR:1;    /**< \brief [4:4] VLC Symbol Error - VLC_SYMBOL_ERR (r) */
    Ifx_UReg_32Bit reserved_5:2;      /**< \brief [6:5] \internal Reserved */
    Ifx_UReg_32Bit DCT_ERR:1;         /**< \brief [7:7] DC Table Error - DCT_ERR (r) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit R2B_IMG_SIZE_ERR:1;    /**< \brief [9:9] R2B Image Size Error - R2B_IMG_SIZE_ERR (r) */
    Ifx_UReg_32Bit VLC_TABLE_ERR:1;    /**< \brief [10:10] VLC Table Error - VLC_TABLE_ERR (r) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_JPE_ERROR_RIS_Bits;

/** \brief JPE Command To Start Stream Header Generation Register */
typedef struct _Ifx_CIF_JPE_GEN_HEADER_Bits
{
    Ifx_UReg_32Bit GEN_HEADER:1;      /**< \brief [0:0] Generate Header - GEN_HEADER (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_JPE_GEN_HEADER_Bits;

/** \brief JPE Header Mode Definition Register */
typedef struct _Ifx_CIF_JPE_HEADER_MODE_Bits
{
    Ifx_UReg_32Bit HEADER_MODE:2;     /**< \brief [1:0] Header Mode - HEADER_MODE (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CIF_JPE_HEADER_MODE_Bits;

/** \brief JPE Automatic Configuration Update Register */
typedef struct _Ifx_CIF_JPE_INIT_Bits
{
    Ifx_UReg_32Bit JP_INIT:1;         /**< \brief [0:0] JPEG Init - JP_INIT (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_JPE_INIT_Bits;

/** \brief JPEG Picture Encoding Format Register */
typedef struct _Ifx_CIF_JPE_PIC_FORMAT_Bits
{
    Ifx_UReg_32Bit ENC_PIC_FORMAT:3;    /**< \brief [2:0] Picture Encoding Format - ENC_PIC_FORMAT (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CIF_JPE_PIC_FORMAT_Bits;

/** \brief JPE Restart Marker Insertion Register */
typedef struct _Ifx_CIF_JPE_RESTART_INTERVAL_Bits
{
    Ifx_UReg_32Bit RESTART_INTERVAL:16;    /**< \brief [15:0] Restart Interval - RESTART_INTERVAL (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CIF_JPE_RESTART_INTERVAL_Bits;

/** \brief JPEG Status Interrupt Clear Register */
typedef struct _Ifx_CIF_JPE_STATUS_ICR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit ENCODE_DONE:1;     /**< \brief [4:4] Encoding Complete - ENCODE_DONE (w) */
    Ifx_UReg_32Bit GEN_HEADER_DONE:1;    /**< \brief [5:5] Header Generation Complete - GEN_HEADER_DONE (w) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CIF_JPE_STATUS_ICR_Bits;

/** \brief JPEG Status Interrupt Mask Register */
typedef struct _Ifx_CIF_JPE_STATUS_IMR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit ENCODE_DONE:1;     /**< \brief [4:4] Encoding Complete - ENCODE_DONE (rw) */
    Ifx_UReg_32Bit GEN_HEADER_DONE:1;    /**< \brief [5:5] Header Generation Complete - GEN_HEADER_DONE (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CIF_JPE_STATUS_IMR_Bits;

/** \brief JPEG Status Interrupt Set Register */
typedef struct _Ifx_CIF_JPE_STATUS_ISR_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit ENCODE_DONE:1;     /**< \brief [4:4] Encoding Complete - ENCODE_DONE (w) */
    Ifx_UReg_32Bit GEN_HEADER_DONE:1;    /**< \brief [5:5] Header Generation Complete - GEN_HEADER_DONE (w) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CIF_JPE_STATUS_ISR_Bits;

/** \brief JPEG Status Masked Interrupt Status Register */
typedef struct _Ifx_CIF_JPE_STATUS_MIS_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit ENCODE_DONE:1;     /**< \brief [4:4] Encoding Complete - ENCODE_DONE (r) */
    Ifx_UReg_32Bit GEN_HEADER_DONE:1;    /**< \brief [5:5] Header Generation Complete - GEN_HEADER_DONE (r) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CIF_JPE_STATUS_MIS_Bits;

/** \brief JPEG Status Raw Interrupt Status Register */
typedef struct _Ifx_CIF_JPE_STATUS_RIS_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit ENCODE_DONE:1;     /**< \brief [4:4] Encoding Complete - ENCODE_DONE (r) */
    Ifx_UReg_32Bit GEN_HEADER_DONE:1;    /**< \brief [5:5] Header Generation Complete - GEN_HEADER_DONE (r) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CIF_JPE_STATUS_RIS_Bits;

/** \brief JPE Table Programming Register */
typedef struct _Ifx_CIF_JPE_TABLE_DATA_Bits
{
    Ifx_UReg_32Bit TABLE_WDATA_L:8;    /**< \brief [7:0] Table data LSB - TABLE_WDATA_L (w) */
    Ifx_UReg_32Bit TABLE_WDATA_H:8;    /**< \brief [15:8] Table data MSB - TABLE_WDATA_H (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CIF_JPE_TABLE_DATA_Bits;

/** \brief JPE Header Generation Debug Register */
typedef struct _Ifx_CIF_JPE_TABLE_FLUSH_Bits
{
    Ifx_UReg_32Bit TABLE_FLUSH:1;     /**< \brief [0:0] Header generation debug control flag - TABLE_FLUSH (rw) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_JPE_TABLE_FLUSH_Bits;

/** \brief JPE Table Programming Select Register */
typedef struct _Ifx_CIF_JPE_TABLE_ID_Bits
{
    Ifx_UReg_32Bit TABLE_ID:4;        /**< \brief [3:0] JPE Table ID - TABLE_ID (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CIF_JPE_TABLE_ID_Bits;

/** \brief JPE Huffman AC Table 0 Length Register */
typedef struct _Ifx_CIF_JPE_TAC0_LEN_Bits
{
    Ifx_UReg_32Bit TAC0_LEN:8;        /**< \brief [7:0] AC Table 0 Length - TAC0_LEN (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CIF_JPE_TAC0_LEN_Bits;

/** \brief JPE Huffman AC Table 1 Length Register */
typedef struct _Ifx_CIF_JPE_TAC1_LEN_Bits
{
    Ifx_UReg_32Bit TAC1_LEN:8;        /**< \brief [7:0] AC Table 1 Length - TAC1_LEN (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CIF_JPE_TAC1_LEN_Bits;

/** \brief JPE Huffman DC Table 0 Length Register */
typedef struct _Ifx_CIF_JPE_TDC0_LEN_Bits
{
    Ifx_UReg_32Bit TDC0_LEN:8;        /**< \brief [7:0] DC Table 0 Length - TDC0_LEN (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CIF_JPE_TDC0_LEN_Bits;

/** \brief JPE Huffman DC Table 1 Length Register */
typedef struct _Ifx_CIF_JPE_TDC1_LEN_Bits
{
    Ifx_UReg_32Bit TDC1_LEN:8;        /**< \brief [7:0] DC Table 1 Length - TDC1_LEN (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CIF_JPE_TDC1_LEN_Bits;

/** \brief Q- table Selector 1, Quant. Table For U Component */
typedef struct _Ifx_CIF_JPE_TQ_U_SELECT_Bits
{
    Ifx_UReg_32Bit TQ1_SELECT:2;      /**< \brief [1:0] Q-Table Selector U - TQ1_SELECT (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CIF_JPE_TQ_U_SELECT_Bits;

/** \brief Q- table Selector 2 Quant Table For V Component */
typedef struct _Ifx_CIF_JPE_TQ_V_SELECT_Bits
{
    Ifx_UReg_32Bit TQ2_SELECT:2;      /**< \brief [1:0] Q-Table Selector V - TQ2_SELECT (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CIF_JPE_TQ_V_SELECT_Bits;

/** \brief Q- table Selector 0, Quant. Table For Y Component */
typedef struct _Ifx_CIF_JPE_TQ_Y_SELECT_Bits
{
    Ifx_UReg_32Bit TQ0_SELECT:2;      /**< \brief [1:0] Q-Table Selector Y - TQ0_SELECT (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CIF_JPE_TQ_Y_SELECT_Bits;

/** \brief JPE Y Value Scaling Control Register */
typedef struct _Ifx_CIF_JPE_Y_SCALE_EN_Bits
{
    Ifx_UReg_32Bit Y_SCALE_EN:1;      /**< \brief [0:0] Y scale flag - Y_SCALE_EN (rw) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CIF_JPE_Y_SCALE_EN_Bits;

/** \brief Linear Downscaler Control Register */
typedef struct _Ifx_CIF_LDS_CTRL_Bits
{
    Ifx_UReg_32Bit LDS_V_EN:1;        /**< \brief [0:0] Vertical scaling enable - LDS_V_EN (rw) */
    Ifx_UReg_32Bit LDS_H_EN:1;        /**< \brief [1:1] Horizontal scaling enable - LDS_H_EN (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit LDS_V_MODE:2;      /**< \brief [5:4] Vertical scaling mode - LDS_V_MODE (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit LDS_H_MODE:2;      /**< \brief [9:8] Horizontal scaling mode - LDS_H_MODE (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_CIF_LDS_CTRL_Bits;

/** \brief Linear Downscaler Factor Register */
typedef struct _Ifx_CIF_LDS_FAC_Bits
{
    Ifx_UReg_32Bit LDS_V_FAC:8;       /**< \brief [7:0] Vertical scaling factor - LDS_V_FAC (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit LDS_H_FAC:8;       /**< \brief [23:16] Horizontal scaling factor - LDS_H_FAC (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_LDS_FAC_Bits;

/** \brief Memory Interface Base Address for Extra Path ${j} Data Buffer Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_BASE_AD_INIT:30;    /**< \brief [31:2] Extra Path Base Address Init - EP_BASE_AD_INIT (rw) */
} Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT_Bits;

/** \brief Memory Interface Base Address Shadow Register for Extra Path ${j} Buffer Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_BASE_AD:30;     /**< \brief [31:2] Extra Path Base Address - EP_BASE_AD (r) */
} Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD_Bits;

/** \brief Memory Interface Extra Path ${j} Control Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_CTRL_Bits
{
    Ifx_UReg_32Bit EP_ENABLE:1;       /**< \brief [0:0] Enables enable ep picture data path - EP_ENABLE (rw) */
    Ifx_UReg_32Bit reserved_1:6;      /**< \brief [6:1] \internal Reserved */
    Ifx_UReg_32Bit BYTE_SWAP:1;       /**< \brief [7:7] Byte Swap Enable - BYTE_SWAP (rw) */
    Ifx_UReg_32Bit reserved_8:12;     /**< \brief [19:8] \internal Reserved */
    Ifx_UReg_32Bit INIT_BASE_EN:1;    /**< \brief [20:20] Init Base Address Enable - INIT_BASE_EN (rw) */
    Ifx_UReg_32Bit INIT_OFFSET_EN:1;    /**< \brief [21:21] Init Offset Counter Enable - INIT_OFFSET_EN (rw) */
    Ifx_UReg_32Bit EP_WRITE_FORMAT:2;    /**< \brief [23:22] Extra Path Write Format - EP_WRITE_FORMAT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_CTRL_Bits;

/** \brief Memory Interface Extra Path ${j} Control Internal Shadow Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_CTRL_SHD_Bits
{
    Ifx_UReg_32Bit EP_ENABLE_IN:1;    /**< \brief [0:0] Extra Path In Enable - EP_ENABLE_IN (r) */
    Ifx_UReg_32Bit reserved_1:15;     /**< \brief [15:1] \internal Reserved */
    Ifx_UReg_32Bit EP_ENABLE_OUT:1;    /**< \brief [16:16] Extra Path Out Enable - EP_ENABLE_OUT (r) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_CTRL_SHD_Bits;

/** \brief Memory Interface Extra Path ${j} Control Register For Address Init And Skip Function Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_INIT_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit MI_EP_SKIP:1;      /**< \brief [2:2] Skip Picture - MI_EP_SKIP (w) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit MI_EP_CFG_UPD:1;    /**< \brief [4:4] Forced Configuration Update - MI_EP_CFG_UPD (w) */
    Ifx_UReg_32Bit reserved_5:27;     /**< \brief [31:5] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_INIT_Bits;

/** \brief Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_IRQ_OFFS_INIT:22;    /**< \brief [23:2] Extra Path Y IRQ Offset Init - EP_IRQ_OFFS_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT_Bits;

/** \brief Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path ${j} Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_IRQ_OFFS:22;    /**< \brief [23:2] Extra Path IRQ Offset - EP_IRQ_OFFS (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD_Bits;

/** \brief Memory Interface Offset Counter Init Value For Extra Path ${j} Buffer Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_OFFS_CNT_INIT:22;    /**< \brief [23:2] Extra Path Offset Counter Init - EP_OFFS_CNT_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT_Bits;

/** \brief Memory Interface Current Offset Counter of Extra Path ${j} Buffer Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_OFFS_CNT:22;    /**< \brief [23:2] Extra Path Y Offset Counter - EP_OFFS_CNT (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD_Bits;

/** \brief Memory Interface Offset Counter Start Value for Extra Path ${j} Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_OFFS_CNT_START:22;    /**< \brief [23:2] Extra Path Offset Counter Start - EP_OFFS_CNT_START (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START_Bits;

/** \brief Memory Interface Size of Extra Path ${j} Data Buffer Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_SIZE_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_SIZE_INIT:22;    /**< \brief [23:2] Extra Path Size Init - EP_SIZE_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_SIZE_INIT_Bits;

/** \brief Memory Interface Size Shadow Register of Extra Path ${j} Buffer Register */
typedef struct _Ifx_CIF_MIEP_CH_1S_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit EP_SIZE:22;        /**< \brief [23:2] Extra Path Size - EP_SIZE (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MIEP_CH_1S_SIZE_SHD_Bits;

/** \brief MI Extra Path Interrupt Clear Register */
typedef struct _Ifx_CIF_MIEP_ICR_Bits
{
    Ifx_UReg_32Bit FRAME_END_EP_1:1;    /**< \brief [0:0] Extra Path 1 Frame End - FRAME_END_EP_1 (w) */
    Ifx_UReg_32Bit FILL_EP_1:1;       /**< \brief [1:1] Fill Extra Path 1 - FILL_EP_1 (w) */
    Ifx_UReg_32Bit WRAP_EP_1:1;       /**< \brief [2:2] Wrap Extra Path 1 - WRAP_EP_1 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_1:1;    /**< \brief [3:3] Macro Block Line Interrupt Extra Path 1 - MBLK_LINE_EP_1 (w) */
    Ifx_UReg_32Bit FRAME_END_EP_2:1;    /**< \brief [4:4] Extra Path 2 Frame End - FRAME_END_EP_2 (w) */
    Ifx_UReg_32Bit FILL_EP_2:1;       /**< \brief [5:5] Fill Extra Path 2 - FILL_EP_2 (w) */
    Ifx_UReg_32Bit WRAP_EP_2:1;       /**< \brief [6:6] Wrap Extra Path 2 - WRAP_EP_2 (w) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit FRAME_END_EP_3:1;    /**< \brief [8:8] Extra Path 3 Frame End - FRAME_END_EP_3 (w) */
    Ifx_UReg_32Bit FILL_EP_3:1;       /**< \brief [9:9] Fill Extra Path 3 - FILL_EP_3 (w) */
    Ifx_UReg_32Bit WRAP_EP_3:1;       /**< \brief [10:10] Wrap Extra Path 3 - WRAP_EP_3 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_3:1;    /**< \brief [11:11] Macro Block Line Interrupt Extra Path 3 - MBLK_LINE_EP_3 (w) */
    Ifx_UReg_32Bit FRAME_END_EP_4:1;    /**< \brief [12:12] Extra Path 4 Frame End - FRAME_END_EP_4 (w) */
    Ifx_UReg_32Bit FILL_EP_4:1;       /**< \brief [13:13] Fill Extra Path 4 - FILL_EP_4 (w) */
    Ifx_UReg_32Bit WRAP_EP_4:1;       /**< \brief [14:14] Wrap Extra Path 4 - WRAP_EP_4 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_4:1;    /**< \brief [15:15] Macro Block Line Interrupt Extra Path 4 - MBLK_LINE_EP_4 (w) */
    Ifx_UReg_32Bit FRAME_END_EP_5:1;    /**< \brief [16:16] Extra Path 5 Frame End - FRAME_END_EP_5 (w) */
    Ifx_UReg_32Bit FILL_EP_5:1;       /**< \brief [17:17] Fill Extra Path 5 - FILL_EP_5 (w) */
    Ifx_UReg_32Bit WRAP_EP_5:1;       /**< \brief [18:18] Wrap Extra Path 5 - WRAP_EP_5 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_5:1;    /**< \brief [19:19] Macro Block Line Interrupt Extra Path 5 - MBLK_LINE_EP_5 (w) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_MIEP_ICR_Bits;

/** \brief MI Extra Path Interrupt Mask \u20181\u2019: interrupt active, \u20180\u2019: interrupt masked */
typedef struct _Ifx_CIF_MIEP_IMSC_Bits
{
    Ifx_UReg_32Bit FRAME_END_EP_1:1;    /**< \brief [0:0] Extra Path 1 Frame End - FRAME_END_EP_1 (rw) */
    Ifx_UReg_32Bit FILL_EP_1:1;       /**< \brief [1:1] Fill Extra Path 1 - FILL_EP_1 (rw) */
    Ifx_UReg_32Bit WRAP_EP_1:1;       /**< \brief [2:2] Wrap Extra Path 1 - WRAP_EP_1 (rw) */
    Ifx_UReg_32Bit MBLK_LINE_EP_1:1;    /**< \brief [3:3] Macro Block Line Interrupt Extra Path 1 - MBLK_LINE_EP_1 (rw) */
    Ifx_UReg_32Bit FRAME_END_EP_2:1;    /**< \brief [4:4] Extra Path 2 Frame End - FRAME_END_EP_2 (rw) */
    Ifx_UReg_32Bit FILL_EP_2:1;       /**< \brief [5:5] Fill Extra Path 2 - FILL_EP_2 (rw) */
    Ifx_UReg_32Bit WRAP_EP_2:1;       /**< \brief [6:6] Wrap Extra Path 2 - WRAP_EP_2 (rw) */
    Ifx_UReg_32Bit MBLK_LINE_EP_2:1;    /**< \brief [7:7] Macro Block Line Interrupt Extra Path 2 - MBLK_LINE_EP_2 (rw) */
    Ifx_UReg_32Bit FRAME_END_EP_3:1;    /**< \brief [8:8] Extra Path 3 Frame End - FRAME_END_EP_3 (rw) */
    Ifx_UReg_32Bit FILL_EP_3:1;       /**< \brief [9:9] Fill Extra Path 3 - FILL_EP_3 (rw) */
    Ifx_UReg_32Bit WRAP_EP_3:1;       /**< \brief [10:10] Wrap Extra Path 3 - WRAP_EP_3 (rw) */
    Ifx_UReg_32Bit MBLK_LINE_EP_3:1;    /**< \brief [11:11] Macro Block Line Interrupt Extra Path 3 - MBLK_LINE_EP_3 (rw) */
    Ifx_UReg_32Bit FRAME_END_EP_4:1;    /**< \brief [12:12] Extra Path 4 Frame End - FRAME_END_EP_4 (rw) */
    Ifx_UReg_32Bit FILL_EP_4:1;       /**< \brief [13:13] Fill Extra Path 4 - FILL_EP_4 (rw) */
    Ifx_UReg_32Bit WRAP_EP_4:1;       /**< \brief [14:14] Wrap Extra Path 4 - WRAP_EP_4 (rw) */
    Ifx_UReg_32Bit MBLK_LINE_EP_4:1;    /**< \brief [15:15] Macro Block Line Interrupt Extra Path 4 - MBLK_LINE_EP_4 (rw) */
    Ifx_UReg_32Bit FRAME_END_EP_5:1;    /**< \brief [16:16] Extra Path 5 Frame End - FRAME_END_EP_5 (rw) */
    Ifx_UReg_32Bit FILL_EP_5:1;       /**< \brief [17:17] Fill Extra Path 5 - FILL_EP_5 (rw) */
    Ifx_UReg_32Bit WRAP_EP_5:1;       /**< \brief [18:18] Wrap Extra Path 5 - WRAP_EP_5 (rw) */
    Ifx_UReg_32Bit MBLK_LINE_EP_5:1;    /**< \brief [19:19] Macro Block Line Interrupt Extra Path 5 - MBLK_LINE_EP_5 (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_MIEP_IMSC_Bits;

/** \brief MI Extra Path Interrupt Set Register */
typedef struct _Ifx_CIF_MIEP_ISR_Bits
{
    Ifx_UReg_32Bit FRAME_END_EP_1:1;    /**< \brief [0:0] Extra Path 1 Frame End - FRAME_END_EP_1 (w) */
    Ifx_UReg_32Bit FILL_EP_1:1;       /**< \brief [1:1] Fill Extra Path 1 - FILL_EP_1 (w) */
    Ifx_UReg_32Bit WRAP_EP_1:1;       /**< \brief [2:2] Wrap Extra Path 1 - WRAP_EP_1 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_1:1;    /**< \brief [3:3] Macro Block Line Interrupt Extra Path 1 - MBLK_LINE_EP_1 (w) */
    Ifx_UReg_32Bit FRAME_END_EP_2:1;    /**< \brief [4:4] Extra Path 2 Frame End - FRAME_END_EP_2 (w) */
    Ifx_UReg_32Bit FILL_EP_2:1;       /**< \brief [5:5] Fill Extra Path 2 - FILL_EP_2 (w) */
    Ifx_UReg_32Bit WRAP_EP_2:1;       /**< \brief [6:6] Wrap Extra Path 2 - WRAP_EP_2 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_2:1;    /**< \brief [7:7] Macro Block Line Interrupt Extra Path 2 - MBLK_LINE_EP_2 (w) */
    Ifx_UReg_32Bit FRAME_END_EP_3:1;    /**< \brief [8:8] Extra Path 3 Frame End - FRAME_END_EP_3 (w) */
    Ifx_UReg_32Bit FILL_EP_3:1;       /**< \brief [9:9] Fill Extra Path 3 - FILL_EP_3 (w) */
    Ifx_UReg_32Bit WRAP_EP_3:1;       /**< \brief [10:10] Wrap Extra Path 3 - WRAP_EP_3 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_3:1;    /**< \brief [11:11] Macro Block Line Interrupt Extra Path 3 - MBLK_LINE_EP_3 (w) */
    Ifx_UReg_32Bit FRAME_END_EP_4:1;    /**< \brief [12:12] Extra Path 4 Frame End - FRAME_END_EP_4 (w) */
    Ifx_UReg_32Bit FILL_EP_4:1;       /**< \brief [13:13] Fill Extra Path 4 - FILL_EP_4 (w) */
    Ifx_UReg_32Bit WRAP_EP_4:1;       /**< \brief [14:14] Wrap Extra Path 4 - WRAP_EP_4 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_4:1;    /**< \brief [15:15] Macro Block Line Interrupt Extra Path 4 - MBLK_LINE_EP_4 (w) */
    Ifx_UReg_32Bit FRAME_END_EP_5:1;    /**< \brief [16:16] Extra Path 5 Frame End - FRAME_END_EP_5 (w) */
    Ifx_UReg_32Bit FILL_EP_5:1;       /**< \brief [17:17] Fill Extra Path 5 - FILL_EP_5 (w) */
    Ifx_UReg_32Bit WRAP_EP_5:1;       /**< \brief [18:18] Wrap Extra Path 5 - WRAP_EP_5 (w) */
    Ifx_UReg_32Bit MBLK_LINE_EP_5:1;    /**< \brief [19:19] Macro Block Line Interrupt Extra Path 5 - MBLK_LINE_EP_5 (w) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_MIEP_ISR_Bits;

/** \brief MI Extra Path Masked Interrupt Status Register */
typedef struct _Ifx_CIF_MIEP_MIS_Bits
{
    Ifx_UReg_32Bit FRAME_END_EP_1:1;    /**< \brief [0:0] Extra Path 1 Frame End - FRAME_END_EP_1 (r) */
    Ifx_UReg_32Bit FILL_EP_1:1;       /**< \brief [1:1] Fill Extra Path 1 - FILL_EP_1 (r) */
    Ifx_UReg_32Bit WRAP_EP_1:1;       /**< \brief [2:2] Wrap Extra Path 1 - WRAP_EP_1 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_1:1;    /**< \brief [3:3] Macro Block Line Interrupt Extra Path 1 - MBLK_LINE_EP_1 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_2:1;    /**< \brief [4:4] Extra Path 2 Frame End - FRAME_END_EP_2 (r) */
    Ifx_UReg_32Bit FILL_EP_2:1;       /**< \brief [5:5] Fill Extra Path 2 - FILL_EP_2 (r) */
    Ifx_UReg_32Bit WRAP_EP_2:1;       /**< \brief [6:6] Wrap Extra Path 2 - WRAP_EP_2 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_2:1;    /**< \brief [7:7] Macro Block Line Interrupt Extra Path 2 - MBLK_LINE_EP_2 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_3:1;    /**< \brief [8:8] Extra Path 3 Frame End - FRAME_END_EP_3 (r) */
    Ifx_UReg_32Bit FILL_EP_3:1;       /**< \brief [9:9] Fill Extra Path 3 - FILL_EP_3 (r) */
    Ifx_UReg_32Bit WRAP_EP_3:1;       /**< \brief [10:10] Wrap Extra Path 3 - WRAP_EP_3 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_3:1;    /**< \brief [11:11] Macro Block Line Interrupt Extra Path 3 - MBLK_LINE_EP_3 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_4:1;    /**< \brief [12:12] Extra Path 4 Frame End - FRAME_END_EP_4 (r) */
    Ifx_UReg_32Bit FILL_EP_4:1;       /**< \brief [13:13] Fill Extra Path 4 - FILL_EP_4 (r) */
    Ifx_UReg_32Bit WRAP_EP_4:1;       /**< \brief [14:14] Wrap Extra Path 4 - WRAP_EP_4 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_4:1;    /**< \brief [15:15] Macro Block Line Interrupt Extra Path 4 - MBLK_LINE_EP_4 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_5:1;    /**< \brief [16:16] Extra Path 5 Frame End - FRAME_END_EP_5 (r) */
    Ifx_UReg_32Bit FILL_EP_5:1;       /**< \brief [17:17] Fill Extra Path 5 - FILL_EP_5 (r) */
    Ifx_UReg_32Bit WRAP_EP_5:1;       /**< \brief [18:18] Wrap Extra Path 5 - WRAP_EP_5 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_5:1;    /**< \brief [19:19] Macro Block Line Interrupt Extra Path 5 - MBLK_LINE_EP_5 (r) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_MIEP_MIS_Bits;

/** \brief MI Extra Path Raw Interrupt Status Register */
typedef struct _Ifx_CIF_MIEP_RIS_Bits
{
    Ifx_UReg_32Bit FRAME_END_EP_1:1;    /**< \brief [0:0] Extra Path 1 Frame End - FRAME_END_EP_1 (r) */
    Ifx_UReg_32Bit FILL_EP_1:1;       /**< \brief [1:1] Fill Extra Path 1 - FILL_EP_1 (r) */
    Ifx_UReg_32Bit WRAP_EP_1:1;       /**< \brief [2:2] Wrap Extra Path 1 - WRAP_EP_1 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_1:1;    /**< \brief [3:3] Macro Block Line Interrupt Extra Path 1 - MBLK_LINE_EP_1 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_2:1;    /**< \brief [4:4] Extra Path 2 Frame End - FRAME_END_EP_2 (r) */
    Ifx_UReg_32Bit FILL_EP_2:1;       /**< \brief [5:5] Fill Extra Path 2 - FILL_EP_2 (r) */
    Ifx_UReg_32Bit WRAP_EP_2:1;       /**< \brief [6:6] Wrap Extra Path 2 - WRAP_EP_2 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_2:1;    /**< \brief [7:7] Macro Block Line Interrupt Extra Path 2 - MBLK_LINE_EP_2 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_3:1;    /**< \brief [8:8] Extra Path 3 Frame End - FRAME_END_EP_3 (r) */
    Ifx_UReg_32Bit FILL_EP_3:1;       /**< \brief [9:9] Fill Extra Path 3 - FILL_EP_3 (r) */
    Ifx_UReg_32Bit WRAP_EP_3:1;       /**< \brief [10:10] Wrap Extra Path 3 - WRAP_EP_3 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_3:1;    /**< \brief [11:11] Macro Block Line Interrupt Extra Path 3 - MBLK_LINE_EP_3 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_4:1;    /**< \brief [12:12] Extra Path 4 Frame End - FRAME_END_EP_4 (r) */
    Ifx_UReg_32Bit FILL_EP_4:1;       /**< \brief [13:13] Fill Extra Path 4 - FILL_EP_4 (r) */
    Ifx_UReg_32Bit WRAP_EP_4:1;       /**< \brief [14:14] Wrap Extra Path 4 - WRAP_EP_4 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_4:1;    /**< \brief [15:15] Macro Block Line Interrupt Extra Path 4 - MBLK_LINE_EP_4 (r) */
    Ifx_UReg_32Bit FRAME_END_EP_5:1;    /**< \brief [16:16] Extra Path 5 Frame End - FRAME_END_EP_5 (r) */
    Ifx_UReg_32Bit FILL_EP_5:1;       /**< \brief [17:17] Fill Extra Path 5 - FILL_EP_5 (r) */
    Ifx_UReg_32Bit WRAP_EP_5:1;       /**< \brief [18:18] Wrap Extra Path 5 - WRAP_EP_5 (r) */
    Ifx_UReg_32Bit MBLK_LINE_EP_5:1;    /**< \brief [19:19] Macro Block Line Interrupt Extra Path 5 - MBLK_LINE_EP_5 (r) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_MIEP_RIS_Bits;

/** \brief Extra Path Error Register */
typedef struct _Ifx_CIF_MIEP_STA_ERR_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit EP_1_IC_SIZE_ERR:1;    /**< \brief [1:1] Size error is generated in Extra Path 1 image cropping submodule - EP_1_IC_SIZE_ERR (r) */
    Ifx_UReg_32Bit EP_2_IC_SIZE_ERR:1;    /**< \brief [2:2] Size error is generated in Extra Path 2 image cropping submodule - EP_2_IC_SIZE_ERR (r) */
    Ifx_UReg_32Bit EP_3_IC_SIZE_ERR:1;    /**< \brief [3:3] Size error is generated in Extra Path 3 image cropping submodule - EP_3_IC_SIZE_ERR (r) */
    Ifx_UReg_32Bit EP_4_IC_SIZE_ERR:1;    /**< \brief [4:4] Size error is generated in Extra Path 4 image cropping submodule - EP_4_IC_SIZE_ERR (r) */
    Ifx_UReg_32Bit EP_5_IC_SIZE_ERR:1;    /**< \brief [5:5] Size error is generated in Extra Path 5 image cropping submodule - EP_5_IC_SIZE_ERR (r) */
    Ifx_UReg_32Bit reserved_6:11;     /**< \brief [16:6] \internal Reserved */
    Ifx_UReg_32Bit EP_1_FIFO_FULL:1;    /**< \brief [17:17] Extra Path 1 FIFO Full - EP_1_FIFO_FULL (r) */
    Ifx_UReg_32Bit EP_2_FIFO_FULL:1;    /**< \brief [18:18] Extra Path 2 FIFO Full - EP_2_FIFO_FULL (r) */
    Ifx_UReg_32Bit EP_3_FIFO_FULL:1;    /**< \brief [19:19] Extra Path 3 FIFO Full - EP_3_FIFO_FULL (r) */
    Ifx_UReg_32Bit EP_4_FIFO_FULL:1;    /**< \brief [20:20] Extra Path 4 FIFO Full - EP_4_FIFO_FULL (r) */
    Ifx_UReg_32Bit EP_5_FIFO_FULL:1;    /**< \brief [21:21] Extra Path 5 FIFO Full - EP_5_FIFO_FULL (r) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_CIF_MIEP_STA_ERR_Bits;

/** \brief Extra Path Status Error Clear Register */
typedef struct _Ifx_CIF_MIEP_STA_ERR_CLR_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit EP_1_IC_SIZE_ERR_CLR:1;    /**< \brief [1:1] Size error is cleared - EP_1_IC_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit EP_2_IC_SIZE_ERR_CLR:1;    /**< \brief [2:2] Size error is cleared - EP_2_IC_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit EP_3_IC_SIZE_ERR_CLR:1;    /**< \brief [3:3] Size error is cleared - EP_3_IC_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit EP_4_IC_SIZE_ERR_CLR:1;    /**< \brief [4:4] Size error is cleared - EP_4_IC_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit EP_5_IC_SIZE_ERR_CLR:1;    /**< \brief [5:5] Size error is cleared - EP_5_IC_SIZE_ERR_CLR (w) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CIF_MIEP_STA_ERR_CLR_Bits;

/** \brief Memory Interface Counter Value of JPEG or RAW Data Bytes Register */
typedef struct _Ifx_CIF_MI_BYTE_CNT_Bits
{
    Ifx_UReg_32Bit BYTE_CNT:24;       /**< \brief [23:0] Byte Count - BYTE_CNT (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_BYTE_CNT_Bits;

/** \brief Memory Interface Global Control Register */
typedef struct _Ifx_CIF_MI_CTRL_Bits
{
    Ifx_UReg_32Bit MP_ENABLE:1;       /**< \brief [0:0] Enables main picture data path, YCbCr mode - MP_ENABLE (rw) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit JPEG_ENABLE:1;     /**< \brief [2:2] Enables JPEG mode - JPEG_ENABLE (rw) */
    Ifx_UReg_32Bit RAW_ENABLE:1;      /**< \brief [3:3] Enables RAW mode - RAW_ENABLE (rw) */
    Ifx_UReg_32Bit reserved_4:3;      /**< \brief [6:4] \internal Reserved */
    Ifx_UReg_32Bit BYTE_SWAP:1;       /**< \brief [7:7] Byte Swap Enable - BYTE_SWAP (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit BURST_LEN_LUM:1;    /**< \brief [16:16] Luminance Burst Length - BURST_LEN_LUM (rw) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit BURST_LEN_CHROM:1;    /**< \brief [18:18] Chrominance Burst Length - BURST_LEN_CHROM (rw) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit INIT_BASE_EN:1;    /**< \brief [20:20] Init Base Address Enable - INIT_BASE_EN (rw) */
    Ifx_UReg_32Bit INIT_OFFSET_EN:1;    /**< \brief [21:21] Init Offset Counter Enable - INIT_OFFSET_EN (rw) */
    Ifx_UReg_32Bit MP_WRITE_FORMAT:2;    /**< \brief [23:22] Main Picture YCbCr Write Format - MP_WRITE_FORMAT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_CTRL_Bits;

/** \brief Memory Interface Global Control Internal Shadow Register */
typedef struct _Ifx_CIF_MI_CTRL_SHD_Bits
{
    Ifx_UReg_32Bit MP_ENABLE_IN:1;    /**< \brief [0:0] Main Picture In Enable - MP_ENABLE_IN (r) */
    Ifx_UReg_32Bit reserved_1:3;      /**< \brief [3:1] \internal Reserved */
    Ifx_UReg_32Bit JPEG_ENABLE_IN:1;    /**< \brief [4:4] JPEG In Enable - JPEG_ENABLE_IN (r) */
    Ifx_UReg_32Bit RAW_ENABLE_IN:1;    /**< \brief [5:5] RAW In Enable - RAW_ENABLE_IN (r) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit MP_ENABLE_OUT:1;    /**< \brief [16:16] Main Picture Out Enable - MP_ENABLE_OUT (r) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit JPEG_ENABLE_OUT:1;    /**< \brief [18:18] JPEG Out Enable - JPEG_ENABLE_OUT (r) */
    Ifx_UReg_32Bit RAW_ENABLE_OUT:1;    /**< \brief [19:19] RAW Out Enable - RAW_ENABLE_OUT (r) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CIF_MI_CTRL_SHD_Bits;

/** \brief MI Interrupt Clear Register */
typedef struct _Ifx_CIF_MI_ICR_Bits
{
    Ifx_UReg_32Bit MP_FRAME_END:1;    /**< \brief [0:0] Main Picture Frame End - MP_FRAME_END (w) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit MBLK_LINE:1;       /**< \brief [2:2] Macro Block Line Interrupt - MBLK_LINE (w) */
    Ifx_UReg_32Bit FILL_MPY:1;        /**< \brief [3:3] Fill Main Picture Y - FILL_MPY (w) */
    Ifx_UReg_32Bit WRAP_MP_Y:1;       /**< \brief [4:4] Wrap Main Picture Y - WRAP_MP_Y (w) */
    Ifx_UReg_32Bit WRAP_MP_CB:1;      /**< \brief [5:5] Wrap Main Picture Cb - WRAP_MP_CB (w) */
    Ifx_UReg_32Bit WRAP_MP_CR:1;      /**< \brief [6:6] Wrap Main Picture Cr - WRAP_MP_CR (w) */
    Ifx_UReg_32Bit reserved_7:3;      /**< \brief [9:7] \internal Reserved */
    Ifx_UReg_32Bit BUS_ERROR:1;       /**< \brief [10:10] Bus Error - BUS_ERROR (w) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_MI_ICR_Bits;

/** \brief MI Interrupt Mask \u20181\u2019 interrupt active \u20180\u2019 interrupt masked */
typedef struct _Ifx_CIF_MI_IMSC_Bits
{
    Ifx_UReg_32Bit MP_FRAME_END:1;    /**< \brief [0:0] Main Picture Frame End - MP_FRAME_END (rw) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit MBLK_LINE:1;       /**< \brief [2:2] Macro Block Line Interrupt - MBLK_LINE (rw) */
    Ifx_UReg_32Bit FILL_MP_Y:1;       /**< \brief [3:3] Fill Main Picture Y - FILL_MP_Y (rw) */
    Ifx_UReg_32Bit WRAP_MP_Y:1;       /**< \brief [4:4] Wrap Main Picture Y - WRAP_MP_Y (rw) */
    Ifx_UReg_32Bit WRAP_MP_CB:1;      /**< \brief [5:5] Wrap Main Picture Cb - WRAP_MP_CB (rw) */
    Ifx_UReg_32Bit WRAP_MP_CR:1;      /**< \brief [6:6] Wrap Main Picture Cr - WRAP_MP_CR (rw) */
    Ifx_UReg_32Bit reserved_7:3;      /**< \brief [9:7] \internal Reserved */
    Ifx_UReg_32Bit BUS_ERROR:1;       /**< \brief [10:10] Bus Error - BUS_ERROR (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_MI_IMSC_Bits;

/** \brief Memory Interface Control Register For Address Init And Skip Function Register */
typedef struct _Ifx_CIF_MI_INIT_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit MI_SKIP:1;         /**< \brief [2:2] Skip Picture - MI_SKIP (w) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit MI_CFG_UPD:1;      /**< \brief [4:4] Forced Configuration Update - MI_CFG_UPD (w) */
    Ifx_UReg_32Bit reserved_5:27;     /**< \brief [31:5] \internal Reserved */
} Ifx_CIF_MI_INIT_Bits;

/** \brief MI Interrupt Set Register */
typedef struct _Ifx_CIF_MI_ISR_Bits
{
    Ifx_UReg_32Bit MP_FRAME_END:1;    /**< \brief [0:0] Main Picture Frame End - MP_FRAME_END (w) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit MBLK_LINE:1;       /**< \brief [2:2] Macro Block Line Interrupt - MBLK_LINE (w) */
    Ifx_UReg_32Bit FILL_MP_Y:1;       /**< \brief [3:3] Fill Main Picture Y - FILL_MP_Y (w) */
    Ifx_UReg_32Bit WRAP_MP_Y:1;       /**< \brief [4:4] Wrap Main Picture Y - WRAP_MP_Y (w) */
    Ifx_UReg_32Bit WRAP_MP_CB:1;      /**< \brief [5:5] Wrap Main Picture Cb - WRAP_MP_CB (w) */
    Ifx_UReg_32Bit WRAP_MP_CR:1;      /**< \brief [6:6] Wrap Main Picture Cr - WRAP_MP_CR (w) */
    Ifx_UReg_32Bit reserved_7:3;      /**< \brief [9:7] \internal Reserved */
    Ifx_UReg_32Bit BUS_ERROR:1;       /**< \brief [10:10] Bus Error - Bus_ERROR (w) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_MI_ISR_Bits;

/** \brief MI Masked Interrupt Status Registe */
typedef struct _Ifx_CIF_MI_MIS_Bits
{
    Ifx_UReg_32Bit MP_FRAME_END:1;    /**< \brief [0:0] Main Picture Frame End - MP_FRAME_END (r) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit MBLK_LINE:1;       /**< \brief [2:2] Macro Block Line Interrupt - MBLK_LINE (r) */
    Ifx_UReg_32Bit FILL_MP_Y:1;       /**< \brief [3:3] Fill Main Picture Y - FILL_MP_Y (r) */
    Ifx_UReg_32Bit WRAP_MP_Y:1;       /**< \brief [4:4] Wrap Main Picture Y - WRAP_MP_Y (r) */
    Ifx_UReg_32Bit WRAP_MP_CB:1;      /**< \brief [5:5] Wrap Main Picture Cb - WRAP_MP_CB (r) */
    Ifx_UReg_32Bit WRAP_MP_CR:1;      /**< \brief [6:6] Wrap Main Picture Cr - WRAP_MP_CR (r) */
    Ifx_UReg_32Bit reserved_7:3;      /**< \brief [9:7] \internal Reserved */
    Ifx_UReg_32Bit BUS_ERROR:1;       /**< \brief [10:10] Bus Error - BUS_ERROR (r) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_MI_MIS_Bits;

/** \brief Memory Interface Base Address For Main Picture Cb Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CB_BASE_AD_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CB_BASEAD_INIT:30;    /**< \brief [31:2] Main Picture Cb Base Address Init - MP_CB_BASEAD_INIT (rw) */
} Ifx_CIF_MI_MP_CB_BASE_AD_INIT_Bits;

/** \brief Memory Interface Base Address Shadow Register For Main Picture Cb Component Ring Register */
typedef struct _Ifx_CIF_MI_MP_CB_BASE_AD_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CB_BASE_AD:30;    /**< \brief [31:2] Main Picture Cb Base Address - MP_CB_BASE_AD (r) */
} Ifx_CIF_MI_MP_CB_BASE_AD_SHD_Bits;

/** \brief Memory Interface Offset Counter Init Value For Main Picture Cb Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CB_OFFS_CNT_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CB_OFFS_CNT_INIT:22;    /**< \brief [23:2] Main Picture Cb Offset Counter Init - MP_CB_OFFS_CNT_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CB_OFFS_CNT_INIT_Bits;

/** \brief Memory Interface Current Offset Counter Of Main Picture Cb Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CB_OFFS_CNT_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CB_OFFS_CNT:22;    /**< \brief [23:2] Main Picture Cb Offset Counter - MP_CB_OFFS_CNT (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CB_OFFS_CNT_SHD_Bits;

/** \brief Memory Interface Offset Counter Start Value For Main Picture Cb Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CB_OFFS_CNT_START_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CB_OFFS_CNT_START:22;    /**< \brief [23:2] Main Picture Cb Offset Count Start - MP_CB_OFFS_CNT_START (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CB_OFFS_CNT_START_Bits;

/** \brief Memory Interface Size Of Main Picture Cb Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CB_SIZE_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CB_SIZE_INIT:22;    /**< \brief [23:2] Main Picture Cb Size Init - MP_CB_SIZE_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CB_SIZE_INIT_Bits;

/** \brief Memory Interface Size Shadow Register Of Main Picture Cb Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CB_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CB_SIZE:22;     /**< \brief [23:2] Main Picture Cb Size - MP_CB_SIZE (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CB_SIZE_SHD_Bits;

/** \brief Memory Interface Base Address For Main Picture Cr Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CR_BASE_AD_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CR_BASE_AD_INIT:30;    /**< \brief [31:2] Main Picture Cr Base Address Init - MP_CR_BASE_AD_INIT (rw) */
} Ifx_CIF_MI_MP_CR_BASE_AD_INIT_Bits;

/** \brief Memory Interface Base Address Shadow Register For Main Picture Cr Component Ring Register */
typedef struct _Ifx_CIF_MI_MP_CR_BASE_AD_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CR_BASE_AD:30;    /**< \brief [31:2] Main Picture Cr Base Address - MP_CR_BASE_AD (r) */
} Ifx_CIF_MI_MP_CR_BASE_AD_SHD_Bits;

/** \brief Memory Interface Offset Counter Init value For Main Picture Cr Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CR_OFFS_CNT_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CR_OFFS_CNT_INIT:22;    /**< \brief [23:2] Main Picture Cr Offset Counter Init - MP_CR_OFFS_CNT_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CR_OFFS_CNT_INIT_Bits;

/** \brief Memory Interface Current Offset Counter Of Main Picture Cr Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CR_OFFS_CNT_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CR_OFFS_CNT:22;    /**< \brief [23:2] Main Picture Cr Offset Counter - MP_CR_OFFS_CNT (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CR_OFFS_CNT_SHD_Bits;

/** \brief Memory Interface Offset Counter Start Value For Main Picture Cr Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CR_OFFS_CNT_START_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CR_OFFS_CNT_START:22;    /**< \brief [23:2] Main Picture Cr Offset Counter Start - MP_CR_OFFS_CNT_START (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CR_OFFS_CNT_START_Bits;

/** \brief Memory Interface Size Of Main Picture Cr Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CR_SIZE_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CR_SIZE_INIT:22;    /**< \brief [23:2] Main Picture Cr Size Init - MP_CR_SIZE_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CR_SIZE_INIT_Bits;

/** \brief Memory Interface Size Shadow Register Of Main Picture Cr Component Ring Buffer Register */
typedef struct _Ifx_CIF_MI_MP_CR_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_CR_SIZE:22;     /**< \brief [23:2] Main Picture Cr Size - MP_CR_SIZE (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_CR_SIZE_SHD_Bits;

/** \brief Memory Interface Base Address For Main Picture Y Component, JPEG or RAW Data Register */
typedef struct _Ifx_CIF_MI_MP_Y_BASE_AD_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_BASE_AD_INIT:30;    /**< \brief [31:2] Main Picture Y Base Address Init - MP_Y_BASE_AD_INIT (rw) */
} Ifx_CIF_MI_MP_Y_BASE_AD_INIT_Bits;

/** \brief Memory Interface Base Address Shadow Register For Main Picture Y Component, JPEG Register */
typedef struct _Ifx_CIF_MI_MP_Y_BASE_AD_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_BASE_AD:30;    /**< \brief [31:2] Main Picture Y Base Address - MP_Y_BASE_AD (r) */
} Ifx_CIF_MI_MP_Y_BASE_AD_SHD_Bits;

/** \brief Memory Interface Fill Level Interrupt Offset Value For Main Picture Y, JPEG or RAW Data Register */
typedef struct _Ifx_CIF_MI_MP_Y_IRQ_OFFS_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_IRQ_OFFS_INIT:22;    /**< \brief [23:2] Main Picture Y IRQ Offset Init - MP_Y_IRQ_OFFS_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_Y_IRQ_OFFS_INIT_Bits;

/** \brief Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Main Picture Y Register */
typedef struct _Ifx_CIF_MI_MP_Y_IRQ_OFFS_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_IRQ_OFFS:22;    /**< \brief [23:2] Main Picture Y IRQ Offset - MP_Y_IRQ_OFFS (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_Y_IRQ_OFFS_SHD_Bits;

/** \brief Memory Interface Offset Counter Init Value For Main Picture Y, JPEG or RAW Data Register */
typedef struct _Ifx_CIF_MI_MP_Y_OFFS_CNT_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_OFFS_CNT_INIT:22;    /**< \brief [23:2] Main Picture Y Offset Counter Init - MP_Y_OFFS_CNT_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_Y_OFFS_CNT_INIT_Bits;

/** \brief Memory Interface Current Offset Counter of Main Picture Y Component JPEG or RAW Register */
typedef struct _Ifx_CIF_MI_MP_Y_OFFS_CNT_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_OFFS_CNT:22;    /**< \brief [23:2] Main Picture Y Offset Counter - MP_Y_OFFS_CNT (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_Y_OFFS_CNT_SHD_Bits;

/** \brief Memory Interface Offset Counter Start Value For Main Picture Y, JPEG or RAW Data Register */
typedef struct _Ifx_CIF_MI_MP_Y_OFFS_CNT_START_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_OFFS_CNT_START:22;    /**< \brief [23:2] Main Picture Y Offset Counter Start - MP_Y_OFFS_CNT_START (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_Y_OFFS_CNT_START_Bits;

/** \brief Memory Interface Size of main picture Y component, JPEG or RAW data Register */
typedef struct _Ifx_CIF_MI_MP_Y_SIZE_INIT_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_SIZE_INIT:22;    /**< \brief [23:2] Main Picture Y Size Init - MP_Y_SIZE_INIT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_Y_SIZE_INIT_Bits;

/** \brief Memory Interface Size Shadow Register of Main Picture Y Component,JPEG or RAW Data Register */
typedef struct _Ifx_CIF_MI_MP_Y_SIZE_SHD_Bits
{
    Ifx_UReg_32Bit FIXED_TO_00:2;     /**< \brief [1:0] Bits [1:0] are set to "00" (word aligned value). - FIXED_TO_00 (r) */
    Ifx_UReg_32Bit MP_Y_SIZE:22;      /**< \brief [23:2] Main Picture Y Size - MP_Y_SIZE (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CIF_MI_MP_Y_SIZE_SHD_Bits;

/** \brief MI Raw Interrupt Status Register */
typedef struct _Ifx_CIF_MI_RIS_Bits
{
    Ifx_UReg_32Bit MP_FRAME_END:1;    /**< \brief [0:0] Main Picture Frame End - MP_FRAME_END (r) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit MBLK_LINE:1;       /**< \brief [2:2] Macro Block Line Interrupt - MBLK_LINE (r) */
    Ifx_UReg_32Bit FILL_MP_Y:1;       /**< \brief [3:3] Fill Main Picture Y - FILL_MP_Y (r) */
    Ifx_UReg_32Bit WRAP_MP_Y:1;       /**< \brief [4:4] Wrap Main Picture Y - WRAP_MP_Y (r) */
    Ifx_UReg_32Bit WRAP_MP_CB:1;      /**< \brief [5:5] Wrap Main Picture Cb - WRAP_MP_CB (r) */
    Ifx_UReg_32Bit WRAP_MP_CR:1;      /**< \brief [6:6] Wrap Main Picture Cr - WRAP_MP_CR (r) */
    Ifx_UReg_32Bit reserved_7:3;      /**< \brief [9:7] \internal Reserved */
    Ifx_UReg_32Bit BUS_ERROR:1;       /**< \brief [10:10] Bus Error - BUS_ERROR (r) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CIF_MI_RIS_Bits;

/** \brief MI Status Register */
typedef struct _Ifx_CIF_MI_STATUS_Bits
{
    Ifx_UReg_32Bit MP_Y_FIFO_FULL:1;    /**< \brief [0:0] Main Picture Y FIFO Full - MP_Y_FIFO_FULL (r) */
    Ifx_UReg_32Bit MP_CB_FIFO_FULL:1;    /**< \brief [1:1] Main Picture Cb FIFO Full - MP_CB_FIFO_FULL (r) */
    Ifx_UReg_32Bit MP_CR_FIFO_FULL:1;    /**< \brief [2:2] Main Picture Cr FIFO Full - MP_CR_FIFO_FULL (r) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit BUS_WRITE_ERROR:1;    /**< \brief [8:8] Bus Write Error - BUS_WRITE_ERROR (r) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_CIF_MI_STATUS_Bits;

/** \brief MI Status Clear Register */
typedef struct _Ifx_CIF_MI_STATUS_CLR_Bits
{
    Ifx_UReg_32Bit MP_Y_FIFO_FULL:1;    /**< \brief [0:0] Main Picture Y FIFO Full - MP_Y_FIFO_FULL (w) */
    Ifx_UReg_32Bit MP_CB_FIFO_FULL:1;    /**< \brief [1:1] Main Picture Cb FIFO Full - MP_CB_FIFO_FULL (w) */
    Ifx_UReg_32Bit MP_CR_FIFO_FULL:1;    /**< \brief [2:2] Main Picture Cr FIFO Full - MP_CR_FIFO_FULL (w) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit BUS_WRITE_ERROR:1;    /**< \brief [8:8] Bus Write Error - BUS_WRITE_ERROR (w) */
    Ifx_UReg_32Bit reserved_9:15;     /**< \brief [23:9] \internal Reserved */
    Ifx_UReg_32Bit EP_1_FIFO_FULL:1;    /**< \brief [24:24] Extra Path 1 FIFO Full - EP_1_FIFO_FULL (w) */
    Ifx_UReg_32Bit EP_2_FIFO_FULL:1;    /**< \brief [25:25] Extra Path 2 FIFO Full - EP_2_FIFO_FULL (w) */
    Ifx_UReg_32Bit EP_3_FIFO_FULL:1;    /**< \brief [26:26] Extra Path 3 FIFO Full - EP_3_FIFO_FULL (w) */
    Ifx_UReg_32Bit EP_4_FIFO_FULL:1;    /**< \brief [27:27] Extra Path 4 FIFO Full - EP_4_FIFO_FULL (w) */
    Ifx_UReg_32Bit EP_5_FIFO_FULL:1;    /**< \brief [28:28] Extra Path 5 FIFO Full - EP_5_FIFO_FULL (w) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_CIF_MI_STATUS_CLR_Bits;

/** \brief Watchdog Control Register */
typedef struct _Ifx_CIF_WD_CTRL_Bits
{
    Ifx_UReg_32Bit WD_EN:1;           /**< \brief [0:0] Enable Security Watchdog - WD_EN (rw) */
    Ifx_UReg_32Bit RST_H_CNT:1;       /**< \brief [1:1] Reset Horizontal Counter - RST_H_CNT (w) */
    Ifx_UReg_32Bit RST_V_CNT:1;       /**< \brief [2:2] Reset Vertical Counter - RST_V_CNT (w) */
    Ifx_UReg_32Bit RST_PD_CNT:1;      /**< \brief [3:3] Reset Predivider Counter - RST_PD_CNT (w) */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit WD_PREDIV:16;      /**< \brief [31:16] Watchdog Counter Predivider - WD_PREDIV (rw) */
} Ifx_CIF_WD_CTRL_Bits;

/** \brief Watchdog Horizontal Timeout Register */
typedef struct _Ifx_CIF_WD_H_TIMEOUT_Bits
{
    Ifx_UReg_32Bit WD_HSE_TO:16;      /**< \brief [15:0] Watchdog Horizontal Start End Timeout - WD_HSE_TO (rw) */
    Ifx_UReg_32Bit WD_HES_TO:16;      /**< \brief [31:16] Watchdog Horizontal End Start Timeout - WD_HES_TO (rw) */
} Ifx_CIF_WD_H_TIMEOUT_Bits;

/** \brief Watchdog Interrupt Clear Register */
typedef struct _Ifx_CIF_WD_ICR_Bits
{
    Ifx_UReg_32Bit ICR_WD_VES_TO:1;    /**< \brief [0:0] Vertical End Start Timeout - ICR_WD_VES_TO (w) */
    Ifx_UReg_32Bit ICR_WD_VSE_TO:1;    /**< \brief [1:1] Vertical Start End Timeout - ICR_WD_VSE_TO (w) */
    Ifx_UReg_32Bit ICR_WD_HES_TO:1;    /**< \brief [2:2] Horizontal End Start Timeout - ICR_WD_HES_TO (w) */
    Ifx_UReg_32Bit ICR_WD_HSE_TO:1;    /**< \brief [3:3] Horizontal Start End Timeout - ICR_WD_HSE_TO (w) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CIF_WD_ICR_Bits;

/** \brief Watchdog Interrupt Mask Register */
typedef struct _Ifx_CIF_WD_IMSC_Bits
{
    Ifx_UReg_32Bit IMSC_WD_VES_TO:1;    /**< \brief [0:0] Vertical End Start Timeout - IMSC_WD_VES_TO (rw) */
    Ifx_UReg_32Bit IMSC_WD_VSE_TO:1;    /**< \brief [1:1] Vertical Start End Timeout - IMSC_WD_VSE_TO (rw) */
    Ifx_UReg_32Bit IMSC_WD_HES_TO:1;    /**< \brief [2:2] Horizontal End Start Timeout - IMSC_WD_HES_TO (rw) */
    Ifx_UReg_32Bit IMSC_WD_HSE_TO:1;    /**< \brief [3:3] Horizontal Start End Timeout - IMSC_WD_HSE_TO (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CIF_WD_IMSC_Bits;

/** \brief Watchdog Interrupt Set Register */
typedef struct _Ifx_CIF_WD_ISR_Bits
{
    Ifx_UReg_32Bit ISR_WD_VES_TO:1;    /**< \brief [0:0] Vertical End Start Timeout - ISR_WD_VES_TO (w) */
    Ifx_UReg_32Bit ISR_WD_VSE_TO:1;    /**< \brief [1:1] Vertical Start End Timeout - ISR_WD_VSE_TO (w) */
    Ifx_UReg_32Bit ISR_WD_HES_TO:1;    /**< \brief [2:2] Horizontal End Start Timeout - ISR_WD_HES_TO (w) */
    Ifx_UReg_32Bit ISR_WD_HSE_TO:1;    /**< \brief [3:3] Horizontal Start End Timeout - ISR_WD_HSE_TO (w) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CIF_WD_ISR_Bits;

/** \brief Watchdog Masked Interrupt Status Register */
typedef struct _Ifx_CIF_WD_MIS_Bits
{
    Ifx_UReg_32Bit MIS_WD_VES_TO:1;    /**< \brief [0:0] Vertical End Start Timeout - MIS_WD_VES_TO (r) */
    Ifx_UReg_32Bit MIS_WD_VSE_TO:1;    /**< \brief [1:1] Vertical Start End Timeout - MIS_WD_VSE_TO (r) */
    Ifx_UReg_32Bit MIS_WD_HES_TO:1;    /**< \brief [2:2] Horizontal End Start Timeout - MIS_WD_HES_TO (r) */
    Ifx_UReg_32Bit MIS_WD_HSE_TO:1;    /**< \brief [3:3] Horizontal Start End Timeout - MIS_WD_HSE_TO (r) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CIF_WD_MIS_Bits;

/** \brief Watchdog Raw Interrupt Status Register */
typedef struct _Ifx_CIF_WD_RIS_Bits
{
    Ifx_UReg_32Bit RIS_WD_VES_TO:1;    /**< \brief [0:0] Vertical End Start Timeout - RIS_WD_VES_TO (r) */
    Ifx_UReg_32Bit RIS_WD_VSE_TO:1;    /**< \brief [1:1] Vertical Start End Timeout - RIS_WD_VSE_TO (r) */
    Ifx_UReg_32Bit RIS_WD_HES_TO:1;    /**< \brief [2:2] Horizontal End Start Timeout - RIS_WD_HES_TO (r) */
    Ifx_UReg_32Bit RIS_WD_HSE_TO:1;    /**< \brief [3:3] Horizontal Start End Timeout - RIS_WD_HSE_TO (r) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CIF_WD_RIS_Bits;

/** \brief Watchdog Vertical Timeout Register */
typedef struct _Ifx_CIF_WD_V_TIMEOUT_Bits
{
    Ifx_UReg_32Bit WD_VSE_TO:16;      /**< \brief [15:0] Watchdog Vertical Start End Timeout - WD_VSE_TO (rw) */
    Ifx_UReg_32Bit WD_VES_TO:16;      /**< \brief [31:16] Watchdog Vertical End Start Timeout - WD_VES_TO (rw) */
} Ifx_CIF_WD_V_TIMEOUT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_cif_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_ACCEN0_Bits B;        /**< \brief Bitfield access */
} Ifx_CIF_BBB_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_ACCEN1_Bits B;        /**< \brief Bitfield access */
} Ifx_CIF_BBB_ACCEN1;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_CLC_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_BBB_CLC;

/** \brief General Purpose Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_GPCTL_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_BBB_GPCTL;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_KRST0_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_BBB_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_KRST1_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_BBB_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_KRSTCLR_Bits B;       /**< \brief Bitfield access */
} Ifx_CIF_BBB_KRSTCLR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_BBB_MODID_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_BBB_MODID;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_CCL_Bits B;               /**< \brief Bitfield access */
} Ifx_CIF_CCL;

/** \brief CIF Data Path Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_DPCL_Bits B;              /**< \brief Bitfield access */
} Ifx_CIF_DPCL;

/** \brief Debug Path Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_DP_CTRL_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_DP_CTRL;

/** \brief Debug Path Frame/Line Counter Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_DP_FLC_STAT_Bits B;       /**< \brief Bitfield access */
} Ifx_CIF_DP_FLC_STAT;

/** \brief Debug Path Predivider Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_DP_PDIV_CTRL_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_DP_PDIV_CTRL;

/** \brief Debug Path Predivider Counter Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_DP_PDIV_STAT_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_DP_PDIV_STAT;

/** \brief Debug Path Timestamp Counter Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_DP_TSC_STAT_Bits B;       /**< \brief Bitfield access */
} Ifx_CIF_DP_TSC_STAT;

/** \brief Debug Path User Defined Symbol ${x} Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_DP_UDS_1S_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_DP_UDS_1S;

/** \brief Extra Path ${i} Image Cropping Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_CTRL_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_CTRL;

/** \brief Extra Path ${i} Image Cropping Camera Displacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_DISPLACE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_DISPLACE;

/** \brief Extra Path ${i} Image Cropping Horizontal Offset of Output Window Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_H_OFFS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_H_OFFS;

/** \brief Extra Path ${i} Image Cropping Current Horizontal Offset of Output Window Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_H_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_H_OFFS_SHD;

/** \brief Extra Path ${i} Image Cropping Output Horizontal Picture Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_H_SIZE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_H_SIZE;

/** \brief Extra Path ${i} Image Cropping Current Output Horizontal Picture Size Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_H_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_H_SIZE_SHD;

/** \brief Extra Path ${i} Image Cropping Maximum Horizontal Displacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_MAX_DX_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_MAX_DX;

/** \brief Extra Path ${i} Image Cropping Maximum Vertical Displacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_MAX_DY_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_MAX_DY;

/** \brief Extra Path ${i} Image Cropping Recenter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_RECENTER_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_RECENTER;

/** \brief Extra Path ${i} Image Cropping Vertical Offset Of Output Window Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_V_OFFS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_V_OFFS;

/** \brief Extra Path ${i} Image Cropping Current Vertical Offset Of Output Window Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_V_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_V_OFFS_SHD;

/** \brief Extra Path ${i} Image Cropping Output Vertical Picture Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_V_SIZE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_V_SIZE;

/** \brief Extra Path ${i} Image Cropping Current Output Vertical Picture Size Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_EP_IC_1S_V_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_EP_IC_1S_V_SIZE_SHD;

/** \brief CIF Internal Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ICCL_Bits B;              /**< \brief Bitfield access */
} Ifx_CIF_ICCL;

/** \brief CIF Revision Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_CIF_ID;

/** \brief CIF Internal Reset Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_IRCL_Bits B;              /**< \brief Bitfield access */
} Ifx_CIF_IRCL;

/** \brief ISP Image Stabilization Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_CTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_CTRL;

/** \brief ISP Image Stabilization Camera Displacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_DISPLACE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_DISPLACE;

/** \brief ISP Image Stabilization Horizontal Offset Of Output Window Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_H_OFFS_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_H_OFFS;

/** \brief ISP Image Current Horizontal Offset Of Output Window Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_H_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_H_OFFS_SHD;

/** \brief ISP Image Stabilization Output Horizontal Picture Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_H_SIZE_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_H_SIZE;

/** \brief ISP Image Current Output Horizontal Picture Size Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_H_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_H_SIZE_SHD;

/** \brief ISP Image Stabilization Maximum Horizontal Displacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_MAX_DX_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_MAX_DX;

/** \brief ISP Image Stabilization Maximum Vertical Displacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_MAX_DY_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_MAX_DY;

/** \brief ISP Image Stabilization Recenter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_RECENTER_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_RECENTER;

/** \brief ISP Image Stabilization Vertical Offset Of Output Window Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_V_OFFS_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_V_OFFS;

/** \brief ISP Image Current Vertical Offset Of Output Window Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_V_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_V_OFFS_SHD;

/** \brief ISP Image Stabilization Output Vertical Picture Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_V_SIZE_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_V_SIZE;

/** \brief ISP Image Current Output Vertical Picture Size Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISPIS_V_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISPIS_V_SIZE_SHD;

/** \brief ISP Acquisition Horizontal Offset Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ACQ_H_OFFS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_ACQ_H_OFFS;

/** \brief ISP Acquisition Horizontal Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ACQ_H_SIZE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_ACQ_H_SIZE;

/** \brief ISP Acquisition Number of Frames Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ACQ_NR_FRAMES_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_ACQ_NR_FRAMES;

/** \brief ISP Acquisition Properties Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ACQ_PROP_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_ISP_ACQ_PROP;

/** \brief ISP Acquistion Vertical Offset Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ACQ_V_OFFS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_ACQ_V_OFFS;

/** \brief ISP Acquisition Vertical Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ACQ_V_SIZE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_ACQ_V_SIZE;

/** \brief ISP Global Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_CTRL_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_ISP_CTRL;

/** \brief ISP Error Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ERR_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_ISP_ERR;

/** \brief ISP Error Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ERR_CLR_Bits B;       /**< \brief Bitfield access */
} Ifx_CIF_ISP_ERR_CLR;

/** \brief ISP Shadow Flags Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_FLAGS_SHD_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_ISP_FLAGS_SHD;

/** \brief ISP Frame Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_FRAME_COUNT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_FRAME_COUNT;

/** \brief ISP Interrupt Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ICR_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_ISP_ICR;

/** \brief ISP Interrupt Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_IMSC_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_ISP_IMSC;

/** \brief ISP Interrupt Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_ISR_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_ISP_ISR;

/** \brief ISP Masked Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_MIS_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_ISP_MIS;

/** \brief ISP Output Window Horizontal Offset Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_H_OFFS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_H_OFFS;

/** \brief ISP Output Window Horizontal Offset Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_H_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_H_OFFS_SHD;

/** \brief ISP Output Horizontal Picture Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_H_SIZE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_H_SIZE;

/** \brief ISP Output Horizontal Picture Size Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_H_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_H_SIZE_SHD;

/** \brief ISP Output Window Vertical Offset Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_V_OFFS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_V_OFFS;

/** \brief ISP Output Window Vertical Offset Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_V_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_V_OFFS_SHD;

/** \brief ISP Output Vertical Picture Size Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_V_SIZE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_V_SIZE;

/** \brief ISP Output Vertical Picture Size Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_OUT_V_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_ISP_OUT_V_SIZE_SHD;

/** \brief ISP Raw Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_ISP_RIS_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_ISP_RIS;

/** \brief JPE Huffman Table Selector For AC Values Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_AC_TABLE_SELECT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_AC_TABLE_SELECT;

/** \brief JPE Cb/Cr Value Scaling Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_CBCR_SCALE_EN_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_CBCR_SCALE_EN;

/** \brief JPE Huffman Table Selector For DC Values Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_DC_TABLE_SELECT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_DC_TABLE_SELECT;

/** \brief JPE Debug Information Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_DEBUG_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_JPE_DEBUG;

/** \brief JPE Start Command To Start JFIF Stream Encoding Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ENCODE_Bits B;        /**< \brief Bitfield access */
} Ifx_CIF_JPE_ENCODE;

/** \brief JPE Encoder Status Flag Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ENCODER_BUSY_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_ENCODER_BUSY;

/** \brief JPE Encode Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ENCODE_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_ENCODE_MODE;

/** \brief JPEG Codec Horizontal Image Size For Encoding Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ENC_HSIZE_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_JPE_ENC_HSIZE;

/** \brief JPEG Codec Vertical Image Size For Encoding Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ENC_VSIZE_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_JPE_ENC_VSIZE;

/** \brief JPE Error Interrupt Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ERROR_ICR_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_JPE_ERROR_ICR;

/** \brief JPE Error Interrupt Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ERROR_IMR_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_JPE_ERROR_IMR;

/** \brief JPE Error Interrupt Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ERROR_ISR_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_JPE_ERROR_ISR;

/** \brief JPE Error Masked Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ERROR_MIS_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_JPE_ERROR_MIS;

/** \brief JPE Error Raw Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_ERROR_RIS_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_JPE_ERROR_RIS;

/** \brief JPE Command To Start Stream Header Generation Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_GEN_HEADER_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_GEN_HEADER;

/** \brief JPE Header Mode Definition Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_HEADER_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_HEADER_MODE;

/** \brief JPE Automatic Configuration Update Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_INIT_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_JPE_INIT;

/** \brief JPEG Picture Encoding Format Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_PIC_FORMAT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_PIC_FORMAT;

/** \brief JPE Restart Marker Insertion Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_RESTART_INTERVAL_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_RESTART_INTERVAL;

/** \brief JPEG Status Interrupt Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_STATUS_ICR_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_STATUS_ICR;

/** \brief JPEG Status Interrupt Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_STATUS_IMR_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_STATUS_IMR;

/** \brief JPEG Status Interrupt Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_STATUS_ISR_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_STATUS_ISR;

/** \brief JPEG Status Masked Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_STATUS_MIS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_STATUS_MIS;

/** \brief JPEG Status Raw Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_STATUS_RIS_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_STATUS_RIS;

/** \brief JPE Table Programming Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TABLE_DATA_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_TABLE_DATA;

/** \brief JPE Header Generation Debug Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TABLE_FLUSH_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_TABLE_FLUSH;

/** \brief JPE Table Programming Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TABLE_ID_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_JPE_TABLE_ID;

/** \brief JPE Huffman AC Table 0 Length Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TAC0_LEN_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_JPE_TAC0_LEN;

/** \brief JPE Huffman AC Table 1 Length Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TAC1_LEN_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_JPE_TAC1_LEN;

/** \brief JPE Huffman DC Table 0 Length Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TDC0_LEN_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_JPE_TDC0_LEN;

/** \brief JPE Huffman DC Table 1 Length Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TDC1_LEN_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_JPE_TDC1_LEN;

/** \brief Q- table Selector 1, Quant. Table For U Component   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TQ_U_SELECT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_TQ_U_SELECT;

/** \brief Q- table Selector 2 Quant Table For V Component   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TQ_V_SELECT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_TQ_V_SELECT;

/** \brief Q- table Selector 0, Quant. Table For Y Component   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_TQ_Y_SELECT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_TQ_Y_SELECT;

/** \brief JPE Y Value Scaling Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_JPE_Y_SCALE_EN_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_JPE_Y_SCALE_EN;

/** \brief Linear Downscaler Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_LDS_CTRL_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_LDS_CTRL;

/** \brief Linear Downscaler Factor Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_LDS_FAC_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_LDS_FAC;

/** \brief Memory Interface Base Address for Extra Path ${j} Data Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT;

/** \brief Memory Interface Base Address Shadow Register for Extra Path ${j} Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD;

/** \brief Memory Interface Extra Path ${j} Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_CTRL_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_CTRL;

/** \brief Memory Interface Extra Path ${j} Control Internal Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_CTRL_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_CTRL_SHD;

/** \brief Memory Interface Extra Path ${j} Control Register For Address Init And Skip Function Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_INIT;

/** \brief Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT;

/** \brief Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path ${j} Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD;

/** \brief Memory Interface Offset Counter Init Value For Extra Path ${j} Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT;

/** \brief Memory Interface Current Offset Counter of Extra Path ${j} Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD;

/** \brief Memory Interface Offset Counter Start Value for Extra Path ${j} Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START;

/** \brief Memory Interface Size of Extra Path ${j} Data Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_SIZE_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_SIZE_INIT;

/** \brief Memory Interface Size Shadow Register of Extra Path ${j} Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_CH_1S_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_CH_1S_SIZE_SHD;

/** \brief MI Extra Path Interrupt Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_ICR_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_MIEP_ICR;

/** \brief MI Extra Path Interrupt Mask \u20181\u2019: interrupt active, \u20180\u2019: interrupt masked   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_IMSC_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_MIEP_IMSC;

/** \brief MI Extra Path Interrupt Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_ISR_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_MIEP_ISR;

/** \brief MI Extra Path Masked Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_MIS_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_MIEP_MIS;

/** \brief MI Extra Path Raw Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_RIS_Bits B;          /**< \brief Bitfield access */
} Ifx_CIF_MIEP_RIS;

/** \brief Extra Path Error Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_STA_ERR_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_MIEP_STA_ERR;

/** \brief Extra Path Status Error Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MIEP_STA_ERR_CLR_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MIEP_STA_ERR_CLR;

/** \brief Memory Interface Counter Value of JPEG or RAW Data Bytes Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_BYTE_CNT_Bits B;       /**< \brief Bitfield access */
} Ifx_CIF_MI_BYTE_CNT;

/** \brief Memory Interface Global Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_CTRL_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_MI_CTRL;

/** \brief Memory Interface Global Control Internal Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_CTRL_SHD_Bits B;       /**< \brief Bitfield access */
} Ifx_CIF_MI_CTRL_SHD;

/** \brief MI Interrupt Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_ICR_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_MI_ICR;

/** \brief MI Interrupt Mask \u20181\u2019 interrupt active \u20180\u2019 interrupt masked   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_IMSC_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_MI_IMSC;

/** \brief Memory Interface Control Register For Address Init And Skip Function Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_INIT_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_MI_INIT;

/** \brief MI Interrupt Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_ISR_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_MI_ISR;

/** \brief MI Masked Interrupt Status Registe   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MIS_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_MI_MIS;

/** \brief Memory Interface Base Address For Main Picture Cb Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CB_BASE_AD_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CB_BASE_AD_INIT;

/** \brief Memory Interface Base Address Shadow Register For Main Picture Cb Component Ring Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CB_BASE_AD_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CB_BASE_AD_SHD;

/** \brief Memory Interface Offset Counter Init Value For Main Picture Cb Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CB_OFFS_CNT_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CB_OFFS_CNT_INIT;

/** \brief Memory Interface Current Offset Counter Of Main Picture Cb Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CB_OFFS_CNT_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CB_OFFS_CNT_SHD;

/** \brief Memory Interface Offset Counter Start Value For Main Picture Cb Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CB_OFFS_CNT_START_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CB_OFFS_CNT_START;

/** \brief Memory Interface Size Of Main Picture Cb Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CB_SIZE_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CB_SIZE_INIT;

/** \brief Memory Interface Size Shadow Register Of Main Picture Cb Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CB_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CB_SIZE_SHD;

/** \brief Memory Interface Base Address For Main Picture Cr Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CR_BASE_AD_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CR_BASE_AD_INIT;

/** \brief Memory Interface Base Address Shadow Register For Main Picture Cr Component Ring Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CR_BASE_AD_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CR_BASE_AD_SHD;

/** \brief Memory Interface Offset Counter Init value For Main Picture Cr Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CR_OFFS_CNT_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CR_OFFS_CNT_INIT;

/** \brief Memory Interface Current Offset Counter Of Main Picture Cr Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CR_OFFS_CNT_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CR_OFFS_CNT_SHD;

/** \brief Memory Interface Offset Counter Start Value For Main Picture Cr Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CR_OFFS_CNT_START_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CR_OFFS_CNT_START;

/** \brief Memory Interface Size Of Main Picture Cr Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CR_SIZE_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CR_SIZE_INIT;

/** \brief Memory Interface Size Shadow Register Of Main Picture Cr Component Ring Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_CR_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_CR_SIZE_SHD;

/** \brief Memory Interface Base Address For Main Picture Y Component, JPEG or RAW Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_BASE_AD_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_BASE_AD_INIT;

/** \brief Memory Interface Base Address Shadow Register For Main Picture Y Component, JPEG Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_BASE_AD_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_BASE_AD_SHD;

/** \brief Memory Interface Fill Level Interrupt Offset Value For Main Picture Y, JPEG or RAW Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_IRQ_OFFS_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_IRQ_OFFS_INIT;

/** \brief Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Main Picture Y Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_IRQ_OFFS_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_IRQ_OFFS_SHD;

/** \brief Memory Interface Offset Counter Init Value For Main Picture Y, JPEG or RAW Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_OFFS_CNT_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_OFFS_CNT_INIT;

/** \brief Memory Interface Current Offset Counter of Main Picture Y Component JPEG or RAW Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_OFFS_CNT_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_OFFS_CNT_SHD;

/** \brief Memory Interface Offset Counter Start Value For Main Picture Y, JPEG or RAW Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_OFFS_CNT_START_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_OFFS_CNT_START;

/** \brief Memory Interface Size of main picture Y component, JPEG or RAW data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_SIZE_INIT_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_SIZE_INIT;

/** \brief Memory Interface Size Shadow Register of Main Picture Y Component,JPEG or RAW Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_MP_Y_SIZE_SHD_Bits B;    /**< \brief Bitfield access */
} Ifx_CIF_MI_MP_Y_SIZE_SHD;

/** \brief MI Raw Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_RIS_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_MI_RIS;

/** \brief MI Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_STATUS_Bits B;         /**< \brief Bitfield access */
} Ifx_CIF_MI_STATUS;

/** \brief MI Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_MI_STATUS_CLR_Bits B;     /**< \brief Bitfield access */
} Ifx_CIF_MI_STATUS_CLR;

/** \brief Watchdog Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_CTRL_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_WD_CTRL;

/** \brief Watchdog Horizontal Timeout Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_H_TIMEOUT_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_WD_H_TIMEOUT;

/** \brief Watchdog Interrupt Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_ICR_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_WD_ICR;

/** \brief Watchdog Interrupt Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_IMSC_Bits B;           /**< \brief Bitfield access */
} Ifx_CIF_WD_IMSC;

/** \brief Watchdog Interrupt Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_ISR_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_WD_ISR;

/** \brief Watchdog Masked Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_MIS_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_WD_MIS;

/** \brief Watchdog Raw Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_RIS_Bits B;            /**< \brief Bitfield access */
} Ifx_CIF_WD_RIS;

/** \brief Watchdog Vertical Timeout Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CIF_WD_V_TIMEOUT_Bits B;      /**< \brief Bitfield access */
} Ifx_CIF_WD_V_TIMEOUT;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_BBB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief BBB object */
typedef volatile struct _Ifx_CIF_BBB
{
       Ifx_CIF_BBB_CLC                     CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_CIF_BBB_MODID                   MODID;                  /**< \brief 4, Module Identification Register*/
       Ifx_CIF_BBB_GPCTL                   GPCTL;                  /**< \brief 8, General Purpose Control Register*/
       Ifx_CIF_BBB_ACCEN0                  ACCEN0;                 /**< \brief C, Access Enable Register 0*/
       Ifx_CIF_BBB_ACCEN1                  ACCEN1;                 /**< \brief 10, Access Enable Register 1*/
       Ifx_CIF_BBB_KRST0                   KRST0;                  /**< \brief 14, Kernel Reset Register 0*/
       Ifx_CIF_BBB_KRST1                   KRST1;                  /**< \brief 18, Kernel Reset Register 1*/
       Ifx_CIF_BBB_KRSTCLR                 KRSTCLR;                /**< \brief 1C, Kernel Reset Status Clear Register*/
} Ifx_CIF_BBB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_ISP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ISP object */
typedef volatile struct _Ifx_CIF_ISP
{
       Ifx_CIF_ISP_CTRL                    CTRL;                   /**< \brief 0, ISP Global Control Register*/
       Ifx_CIF_ISP_ACQ_PROP                ACQ_PROP;               /**< \brief 4, ISP Acquisition Properties Register*/
       Ifx_CIF_ISP_ACQ_H_OFFS              ACQ_H_OFFS;             /**< \brief 8, ISP Acquisition Horizontal Offset Register*/
       Ifx_CIF_ISP_ACQ_V_OFFS              ACQ_V_OFFS;             /**< \brief C, ISP Acquistion Vertical Offset Register*/
       Ifx_CIF_ISP_ACQ_H_SIZE              ACQ_H_SIZE;             /**< \brief 10, ISP Acquisition Horizontal Size Register*/
       Ifx_CIF_ISP_ACQ_V_SIZE              ACQ_V_SIZE;             /**< \brief 14, ISP Acquisition Vertical Size Register*/
       Ifx_CIF_ISP_ACQ_NR_FRAMES           ACQ_NR_FRAMES;          /**< \brief 18, ISP Acquisition Number of Frames Register*/
       Ifx_UReg_8Bit                       reserved_1C[376];       /**< \brief 1C, \internal Reserved */
       Ifx_CIF_ISP_OUT_H_OFFS              OUT_H_OFFS;             /**< \brief 194, ISP Output Window Horizontal Offset Register*/
       Ifx_CIF_ISP_OUT_V_OFFS              OUT_V_OFFS;             /**< \brief 198, ISP Output Window Vertical Offset Register*/
       Ifx_CIF_ISP_OUT_H_SIZE              OUT_H_SIZE;             /**< \brief 19C, ISP Output Horizontal Picture Size Register*/
       Ifx_CIF_ISP_OUT_V_SIZE              OUT_V_SIZE;             /**< \brief 1A0, ISP Output Vertical Picture Size Register*/
       Ifx_UReg_8Bit                       reserved_1A4[4];        /**< \brief 1A4, \internal Reserved */
       Ifx_CIF_ISP_FLAGS_SHD               FLAGS_SHD;              /**< \brief 1A8, ISP Shadow Flags Register*/
       Ifx_CIF_ISP_OUT_H_OFFS_SHD          OUT_H_OFFS_SHD;         /**< \brief 1AC, ISP Output Window Horizontal Offset Shadow Register*/
       Ifx_CIF_ISP_OUT_V_OFFS_SHD          OUT_V_OFFS_SHD;         /**< \brief 1B0, ISP Output Window Vertical Offset Shadow Register*/
       Ifx_CIF_ISP_OUT_H_SIZE_SHD          OUT_H_SIZE_SHD;         /**< \brief 1B4, ISP Output Horizontal Picture Size Shadow Register*/
       Ifx_CIF_ISP_OUT_V_SIZE_SHD          OUT_V_SIZE_SHD;         /**< \brief 1B8, ISP Output Vertical Picture Size Shadow Register*/
       Ifx_CIF_ISP_IMSC                    IMSC;                   /**< \brief 1BC, ISP Interrupt Mask Register*/
       Ifx_CIF_ISP_RIS                     RIS;                    /**< \brief 1C0, ISP Raw Interrupt Status Register*/
       Ifx_CIF_ISP_MIS                     MIS;                    /**< \brief 1C4, ISP Masked Interrupt Status Register*/
       Ifx_CIF_ISP_ICR                     ICR;                    /**< \brief 1C8, ISP Interrupt Clear Register*/
       Ifx_CIF_ISP_ISR                     ISR;                    /**< \brief 1CC, ISP Interrupt Set Register*/
       Ifx_UReg_8Bit                       reserved_1D0[108];      /**< \brief 1D0, \internal Reserved */
       Ifx_CIF_ISP_ERR                     ERR;                    /**< \brief 23C, ISP Error Register*/
       Ifx_CIF_ISP_ERR_CLR                 ERR_CLR;                /**< \brief 240, ISP Error Clear Register*/
       Ifx_CIF_ISP_FRAME_COUNT             FRAME_COUNT;            /**< \brief 244, ISP Frame Counter Register*/
} Ifx_CIF_ISP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_MI_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MI object */
typedef volatile struct _Ifx_CIF_MI
{
       Ifx_CIF_MI_CTRL                     CTRL;                   /**< \brief 0, Memory Interface Global Control Register*/
       Ifx_CIF_MI_INIT                     INIT;                   /**< \brief 4, Memory Interface Control Register For Address Init And Skip Function Register*/
       Ifx_CIF_MI_MP_Y_BASE_AD_INIT        MP_Y_BASE_AD_INIT;      /**< \brief 8, Memory Interface Base Address For Main Picture Y Component, JPEG or RAW Data Register*/
       Ifx_CIF_MI_MP_Y_SIZE_INIT           MP_Y_SIZE_INIT;         /**< \brief C, Memory Interface Size of main picture Y component, JPEG or RAW data Register*/
       Ifx_CIF_MI_MP_Y_OFFS_CNT_INIT       MP_Y_OFFS_CNT_INIT;     /**< \brief 10, Memory Interface Offset Counter Init Value For Main Picture Y, JPEG or RAW Data Register*/
       Ifx_CIF_MI_MP_Y_OFFS_CNT_START      MP_Y_OFFS_CNT_START;    /**< \brief 14, Memory Interface Offset Counter Start Value For Main Picture Y, JPEG or RAW Data Register*/
       Ifx_CIF_MI_MP_Y_IRQ_OFFS_INIT       MP_Y_IRQ_OFFS_INIT;     /**< \brief 18, Memory Interface Fill Level Interrupt Offset Value For Main Picture Y, JPEG or RAW Data Register*/
       Ifx_CIF_MI_MP_CB_BASE_AD_INIT       MP_CB_BASE_AD_INIT;     /**< \brief 1C, Memory Interface Base Address For Main Picture Cb Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CB_SIZE_INIT          MP_CB_SIZE_INIT;        /**< \brief 20, Memory Interface Size Of Main Picture Cb Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CB_OFFS_CNT_INIT      MP_CB_OFFS_CNT_INIT;    /**< \brief 24, Memory Interface Offset Counter Init Value For Main Picture Cb Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CB_OFFS_CNT_START     MP_CB_OFFS_CNT_START;    /**< \brief 28, Memory Interface Offset Counter Start Value For Main Picture Cb Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CR_BASE_AD_INIT       MP_CR_BASE_AD_INIT;     /**< \brief 2C, Memory Interface Base Address For Main Picture Cr Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CR_SIZE_INIT          MP_CR_SIZE_INIT;        /**< \brief 30, Memory Interface Size Of Main Picture Cr Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CR_OFFS_CNT_INIT      MP_CR_OFFS_CNT_INIT;    /**< \brief 34, Memory Interface Offset Counter Init value For Main Picture Cr Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CR_OFFS_CNT_START     MP_CR_OFFS_CNT_START;    /**< \brief 38, Memory Interface Offset Counter Start Value For Main Picture Cr Component Ring Buffer Register*/
       Ifx_UReg_8Bit                       reserved_3C[52];        /**< \brief 3C, \internal Reserved */
       Ifx_CIF_MI_BYTE_CNT                 BYTE_CNT;               /**< \brief 70, Memory Interface Counter Value of JPEG or RAW Data Bytes Register*/
       Ifx_CIF_MI_CTRL_SHD                 CTRL_SHD;               /**< \brief 74, Memory Interface Global Control Internal Shadow Register*/
       Ifx_CIF_MI_MP_Y_BASE_AD_SHD         MP_Y_BASE_AD_SHD;       /**< \brief 78, Memory Interface Base Address Shadow Register For Main Picture Y Component, JPEG Register*/
       Ifx_CIF_MI_MP_Y_SIZE_SHD            MP_Y_SIZE_SHD;          /**< \brief 7C, Memory Interface Size Shadow Register of Main Picture Y Component,JPEG or RAW Data Register*/
       Ifx_CIF_MI_MP_Y_OFFS_CNT_SHD        MP_Y_OFFS_CNT_SHD;      /**< \brief 80, Memory Interface Current Offset Counter of Main Picture Y Component JPEG or RAW Register*/
       Ifx_CIF_MI_MP_Y_IRQ_OFFS_SHD        MP_Y_IRQ_OFFS_SHD;      /**< \brief 84, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Main Picture Y Register*/
       Ifx_CIF_MI_MP_CB_BASE_AD_SHD        MP_CB_BASE_AD_SHD;      /**< \brief 88, Memory Interface Base Address Shadow Register For Main Picture Cb Component Ring Register*/
       Ifx_CIF_MI_MP_CB_SIZE_SHD           MP_CB_SIZE_SHD;         /**< \brief 8C, Memory Interface Size Shadow Register Of Main Picture Cb Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CB_OFFS_CNT_SHD       MP_CB_OFFS_CNT_SHD;     /**< \brief 90, Memory Interface Current Offset Counter Of Main Picture Cb Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CR_BASE_AD_SHD        MP_CR_BASE_AD_SHD;      /**< \brief 94, Memory Interface Base Address Shadow Register For Main Picture Cr Component Ring Register*/
       Ifx_CIF_MI_MP_CR_SIZE_SHD           MP_CR_SIZE_SHD;         /**< \brief 98, Memory Interface Size Shadow Register Of Main Picture Cr Component Ring Buffer Register*/
       Ifx_CIF_MI_MP_CR_OFFS_CNT_SHD       MP_CR_OFFS_CNT_SHD;     /**< \brief 9C, Memory Interface Current Offset Counter Of Main Picture Cr Component Ring Buffer Register*/
       Ifx_UReg_8Bit                       reserved_A0[88];        /**< \brief A0, \internal Reserved */
       Ifx_CIF_MI_IMSC                     IMSC;                   /**< \brief F8, MI Interrupt Mask \u20181\u2019 interrupt active \u20180\u2019 interrupt masked*/
       Ifx_CIF_MI_RIS                      RIS;                    /**< \brief FC, MI Raw Interrupt Status Register*/
       Ifx_CIF_MI_MIS                      MIS;                    /**< \brief 100, MI Masked Interrupt Status Registe*/
       Ifx_CIF_MI_ICR                      ICR;                    /**< \brief 104, MI Interrupt Clear Register*/
       Ifx_CIF_MI_ISR                      ISR;                    /**< \brief 108, MI Interrupt Set Register*/
       Ifx_CIF_MI_STATUS                   STATUS;                 /**< \brief 10C, MI Status Register*/
       Ifx_CIF_MI_STATUS_CLR               STATUS_CLR;             /**< \brief 110, MI Status Clear Register*/
} Ifx_CIF_MI;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_JPE_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief JPE object */
typedef volatile struct _Ifx_CIF_JPE
{
       Ifx_CIF_JPE_GEN_HEADER              GEN_HEADER;             /**< \brief 0, JPE Command To Start Stream Header Generation Register*/
       Ifx_CIF_JPE_ENCODE                  ENCODE;                 /**< \brief 4, JPE Start Command To Start JFIF Stream Encoding Register*/
       Ifx_CIF_JPE_INIT                    INIT;                   /**< \brief 8, JPE Automatic Configuration Update Register*/
       Ifx_CIF_JPE_Y_SCALE_EN              Y_SCALE_EN;             /**< \brief C, JPE Y Value Scaling Control Register*/
       Ifx_CIF_JPE_CBCR_SCALE_EN           CBCR_SCALE_EN;          /**< \brief 10, JPE Cb/Cr Value Scaling Control Register*/
       Ifx_CIF_JPE_TABLE_FLUSH             TABLE_FLUSH;            /**< \brief 14, JPE Header Generation Debug Register*/
       Ifx_CIF_JPE_ENC_HSIZE               ENC_HSIZE;              /**< \brief 18, JPEG Codec Horizontal Image Size For Encoding Register*/
       Ifx_CIF_JPE_ENC_VSIZE               ENC_VSIZE;              /**< \brief 1C, JPEG Codec Vertical Image Size For Encoding Register*/
       Ifx_CIF_JPE_PIC_FORMAT              PIC_FORMAT;             /**< \brief 20, JPEG Picture Encoding Format Register*/
       Ifx_CIF_JPE_RESTART_INTERVAL        RESTART_INTERVAL;       /**< \brief 24, JPE Restart Marker Insertion Register*/
       Ifx_CIF_JPE_TQ_Y_SELECT             TQ_Y_SELECT;            /**< \brief 28, Q- table Selector 0, Quant. Table For Y Component*/
       Ifx_CIF_JPE_TQ_U_SELECT             TQ_U_SELECT;            /**< \brief 2C, Q- table Selector 1, Quant. Table For U Component*/
       Ifx_CIF_JPE_TQ_V_SELECT             TQ_V_SELECT;            /**< \brief 30, Q- table Selector 2 Quant Table For V Component*/
       Ifx_CIF_JPE_DC_TABLE_SELECT         DC_TABLE_SELECT;        /**< \brief 34, JPE Huffman Table Selector For DC Values Register*/
       Ifx_CIF_JPE_AC_TABLE_SELECT         AC_TABLE_SELECT;        /**< \brief 38, JPE Huffman Table Selector For AC Values Register*/
       Ifx_CIF_JPE_TABLE_DATA              TABLE_DATA;             /**< \brief 3C, JPE Table Programming Register*/
       Ifx_CIF_JPE_TABLE_ID                TABLE_ID;               /**< \brief 40, JPE Table Programming Select Register*/
       Ifx_CIF_JPE_TAC0_LEN                TAC0_LEN;               /**< \brief 44, JPE Huffman AC Table 0 Length Register*/
       Ifx_CIF_JPE_TDC0_LEN                TDC0_LEN;               /**< \brief 48, JPE Huffman DC Table 0 Length Register*/
       Ifx_CIF_JPE_TAC1_LEN                TAC1_LEN;               /**< \brief 4C, JPE Huffman AC Table 1 Length Register*/
       Ifx_CIF_JPE_TDC1_LEN                TDC1_LEN;               /**< \brief 50, JPE Huffman DC Table 1 Length Register*/
       Ifx_UReg_8Bit                       reserved_54[4];         /**< \brief 54, \internal Reserved */
       Ifx_CIF_JPE_ENCODER_BUSY            ENCODER_BUSY;           /**< \brief 58, JPE Encoder Status Flag Register*/
       Ifx_CIF_JPE_HEADER_MODE             HEADER_MODE;            /**< \brief 5C, JPE Header Mode Definition Register*/
       Ifx_CIF_JPE_ENCODE_MODE             ENCODE_MODE;            /**< \brief 60, JPE Encode Mode Register*/
       Ifx_CIF_JPE_DEBUG                   DEBUG;                  /**< \brief 64, JPE Debug Information Register*/
       Ifx_CIF_JPE_ERROR_IMR               ERROR_IMR;              /**< \brief 68, JPE Error Interrupt Mask Register*/
       Ifx_CIF_JPE_ERROR_RIS               ERROR_RIS;              /**< \brief 6C, JPE Error Raw Interrupt Status Register*/
       Ifx_CIF_JPE_ERROR_MIS               ERROR_MIS;              /**< \brief 70, JPE Error Masked Interrupt Status Register*/
       Ifx_CIF_JPE_ERROR_ICR               ERROR_ICR;              /**< \brief 74, JPE Error Interrupt Clear Register*/
       Ifx_CIF_JPE_ERROR_ISR               ERROR_ISR;              /**< \brief 78, JPE Error Interrupt Set Register*/
       Ifx_CIF_JPE_STATUS_IMR              STATUS_IMR;             /**< \brief 7C, JPEG Status Interrupt Mask Register*/
       Ifx_CIF_JPE_STATUS_RIS              STATUS_RIS;             /**< \brief 80, JPEG Status Raw Interrupt Status Register*/
       Ifx_CIF_JPE_STATUS_MIS              STATUS_MIS;             /**< \brief 84, JPEG Status Masked Interrupt Status Register*/
       Ifx_CIF_JPE_STATUS_ICR              STATUS_ICR;             /**< \brief 88, JPEG Status Interrupt Clear Register*/
       Ifx_CIF_JPE_STATUS_ISR              STATUS_ISR;             /**< \brief 8C, JPEG Status Interrupt Set Register*/
} Ifx_CIF_JPE;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_ISPIS_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ISPIS object */
typedef volatile struct _Ifx_CIF_ISPIS
{
       Ifx_CIF_ISPIS_CTRL                  CTRL;                   /**< \brief 0, ISP Image Stabilization Control Register*/
       Ifx_CIF_ISPIS_RECENTER              RECENTER;               /**< \brief 4, ISP Image Stabilization Recenter Register*/
       Ifx_CIF_ISPIS_H_OFFS                H_OFFS;                 /**< \brief 8, ISP Image Stabilization Horizontal Offset Of Output Window Register*/
       Ifx_CIF_ISPIS_V_OFFS                V_OFFS;                 /**< \brief C, ISP Image Stabilization Vertical Offset Of Output Window Register*/
       Ifx_CIF_ISPIS_H_SIZE                H_SIZE;                 /**< \brief 10, ISP Image Stabilization Output Horizontal Picture Size Register*/
       Ifx_CIF_ISPIS_V_SIZE                V_SIZE;                 /**< \brief 14, ISP Image Stabilization Output Vertical Picture Size Register*/
       Ifx_CIF_ISPIS_MAX_DX                MAX_DX;                 /**< \brief 18, ISP Image Stabilization Maximum Horizontal Displacement Register*/
       Ifx_CIF_ISPIS_MAX_DY                MAX_DY;                 /**< \brief 1C, ISP Image Stabilization Maximum Vertical Displacement Register*/
       Ifx_CIF_ISPIS_DISPLACE              DISPLACE;               /**< \brief 20, ISP Image Stabilization Camera Displacement Register*/
       Ifx_CIF_ISPIS_H_OFFS_SHD            H_OFFS_SHD;             /**< \brief 24, ISP Image Current Horizontal Offset Of Output Window Shadow Register*/
       Ifx_CIF_ISPIS_V_OFFS_SHD            V_OFFS_SHD;             /**< \brief 28, ISP Image Current Vertical Offset Of Output Window Shadow Register*/
       Ifx_CIF_ISPIS_H_SIZE_SHD            H_SIZE_SHD;             /**< \brief 2C, ISP Image Current Output Horizontal Picture Size Shadow Register*/
       Ifx_CIF_ISPIS_V_SIZE_SHD            V_SIZE_SHD;             /**< \brief 30, ISP Image Current Output Vertical Picture Size Shadow Register*/
} Ifx_CIF_ISPIS;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_WD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief WD object */
typedef volatile struct _Ifx_CIF_WD
{
       Ifx_CIF_WD_CTRL                     CTRL;                   /**< \brief 0, Watchdog Control Register*/
       Ifx_CIF_WD_V_TIMEOUT                V_TIMEOUT;              /**< \brief 4, Watchdog Vertical Timeout Register*/
       Ifx_CIF_WD_H_TIMEOUT                H_TIMEOUT;              /**< \brief 8, Watchdog Horizontal Timeout Register*/
       Ifx_CIF_WD_IMSC                     IMSC;                   /**< \brief C, Watchdog Interrupt Mask Register*/
       Ifx_CIF_WD_RIS                      RIS;                    /**< \brief 10, Watchdog Raw Interrupt Status Register*/
       Ifx_CIF_WD_MIS                      MIS;                    /**< \brief 14, Watchdog Masked Interrupt Status Register*/
       Ifx_CIF_WD_ICR                      ICR;                    /**< \brief 18, Watchdog Interrupt Clear Register*/
       Ifx_CIF_WD_ISR                      ISR;                    /**< \brief 1C, Watchdog Interrupt Set Register*/
} Ifx_CIF_WD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_LDS_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief LDS object */
typedef volatile struct _Ifx_CIF_LDS
{
       Ifx_CIF_LDS_CTRL                    CTRL;                   /**< \brief 0, Linear Downscaler Control Register*/
       Ifx_CIF_LDS_FAC                     FAC;                    /**< \brief 4, Linear Downscaler Factor Register*/
} Ifx_CIF_LDS;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_DP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief DP object */
typedef volatile struct _Ifx_CIF_DP
{
       Ifx_CIF_DP_CTRL                     CTRL;                   /**< \brief 0, Debug Path Control Register*/
       Ifx_CIF_DP_PDIV_CTRL                PDIV_CTRL;              /**< \brief 4, Debug Path Predivider Control Register*/
       Ifx_CIF_DP_FLC_STAT                 FLC_STAT;               /**< \brief 8, Debug Path Frame/Line Counter Status Register*/
       Ifx_CIF_DP_PDIV_STAT                PDIV_STAT;              /**< \brief C, Debug Path Predivider Counter Status Register*/
       Ifx_CIF_DP_TSC_STAT                 TSC_STAT;               /**< \brief 10, Debug Path Timestamp Counter Status Register*/
       Ifx_CIF_DP_UDS_1S                   UDS_1S[8];              /**< \brief 14, Debug Path User Defined Symbol ${x} Register*/
} Ifx_CIF_DP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_EP_IC_1S_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief EP_IC_1S object */
typedef volatile struct _Ifx_CIF_EP_IC_1S
{
       Ifx_CIF_EP_IC_1S_CTRL               CTRL;                   /**< \brief 0, Extra Path ${i} Image Cropping Control Register*/
       Ifx_CIF_EP_IC_1S_RECENTER           RECENTER;               /**< \brief 4, Extra Path ${i} Image Cropping Recenter Register*/
       Ifx_CIF_EP_IC_1S_H_OFFS             H_OFFS;                 /**< \brief 8, Extra Path ${i} Image Cropping Horizontal Offset of Output Window Register*/
       Ifx_CIF_EP_IC_1S_V_OFFS             V_OFFS;                 /**< \brief C, Extra Path ${i} Image Cropping Vertical Offset Of Output Window Register*/
       Ifx_CIF_EP_IC_1S_H_SIZE             H_SIZE;                 /**< \brief 10, Extra Path ${i} Image Cropping Output Horizontal Picture Size Register*/
       Ifx_CIF_EP_IC_1S_V_SIZE             V_SIZE;                 /**< \brief 14, Extra Path ${i} Image Cropping Output Vertical Picture Size Register*/
       Ifx_CIF_EP_IC_1S_MAX_DX             MAX_DX;                 /**< \brief 18, Extra Path ${i} Image Cropping Maximum Horizontal Displacement Register*/
       Ifx_CIF_EP_IC_1S_MAX_DY             MAX_DY;                 /**< \brief 1C, Extra Path ${i} Image Cropping Maximum Vertical Displacement Register*/
       Ifx_CIF_EP_IC_1S_DISPLACE           DISPLACE;               /**< \brief 20, Extra Path ${i} Image Cropping Camera Displacement Register*/
       Ifx_CIF_EP_IC_1S_H_OFFS_SHD         H_OFFS_SHD;             /**< \brief 24, Extra Path ${i} Image Cropping Current Horizontal Offset of Output Window Shadow Register*/
       Ifx_CIF_EP_IC_1S_V_OFFS_SHD         V_OFFS_SHD;             /**< \brief 28, Extra Path ${i} Image Cropping Current Vertical Offset Of Output Window Shadow Register*/
       Ifx_CIF_EP_IC_1S_H_SIZE_SHD         H_SIZE_SHD;             /**< \brief 2C, Extra Path ${i} Image Cropping Current Output Horizontal Picture Size Shadow Register*/
       Ifx_CIF_EP_IC_1S_V_SIZE_SHD         V_SIZE_SHD;             /**< \brief 30, Extra Path ${i} Image Cropping Current Output Vertical Picture Size Shadow Register*/
       Ifx_UReg_8Bit                       reserved_34[204];       /**< \brief 34, \internal Reserved */
} Ifx_CIF_EP_IC_1S;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_MIEP_CH_1S_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CH_1S object */
typedef volatile struct _Ifx_CIF_MIEP_CH_1S
{
       Ifx_CIF_MIEP_CH_1S_CTRL             CTRL;                   /**< \brief 0, Memory Interface Extra Path ${j} Control Register*/
       Ifx_CIF_MIEP_CH_1S_INIT             INIT;                   /**< \brief 4, Memory Interface Extra Path ${j} Control Register For Address Init And Skip Function Register*/
       Ifx_CIF_MIEP_CH_1S_BASE_AD_INIT     BASE_AD_INIT;           /**< \brief 8, Memory Interface Base Address for Extra Path ${j} Data Buffer Register*/
       Ifx_CIF_MIEP_CH_1S_SIZE_INIT        SIZE_INIT;              /**< \brief C, Memory Interface Size of Extra Path ${j} Data Buffer Register*/
       Ifx_CIF_MIEP_CH_1S_OFFS_CNT_INIT    OFFS_CNT_INIT;          /**< \brief 10, Memory Interface Offset Counter Init Value For Extra Path ${j} Buffer Register*/
       Ifx_CIF_MIEP_CH_1S_OFFS_CNT_START   OFFS_CNT_START;         /**< \brief 14, Memory Interface Offset Counter Start Value for Extra Path ${j} Register*/
       Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_INIT    IRQ_OFFS_INIT;          /**< \brief 18, Memory Interface Fill Level Interrupt Offset Value For Extra Path Data Register*/
       Ifx_CIF_MIEP_CH_1S_CTRL_SHD         CTRL_SHD;               /**< \brief 1C, Memory Interface Extra Path ${j} Control Internal Shadow Register*/
       Ifx_CIF_MIEP_CH_1S_BASE_AD_SHD      BASE_AD_SHD;            /**< \brief 20, Memory Interface Base Address Shadow Register for Extra Path ${j} Buffer Register*/
       Ifx_CIF_MIEP_CH_1S_SIZE_SHD         SIZE_SHD;               /**< \brief 24, Memory Interface Size Shadow Register of Extra Path ${j} Buffer Register*/
       Ifx_CIF_MIEP_CH_1S_OFFS_CNT_SHD     OFFS_CNT_SHD;           /**< \brief 28, Memory Interface Current Offset Counter of Extra Path ${j} Buffer Register*/
       Ifx_CIF_MIEP_CH_1S_IRQ_OFFS_SHD     IRQ_OFFS_SHD;           /**< \brief 2C, Memory Interface Shadow Register of Fill Level Interrupt Offset Value For Extra Path ${j} Register*/
       Ifx_UReg_8Bit                       reserved_30[208];       /**< \brief 30, \internal Reserved */
} Ifx_CIF_MIEP_CH_1S;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cif_MIEP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MIEP object */
typedef volatile struct _Ifx_CIF_MIEP
{
       Ifx_CIF_MIEP_STA_ERR                STA_ERR;                /**< \brief 0, Extra Path Error Register*/
       Ifx_CIF_MIEP_STA_ERR_CLR            STA_ERR_CLR;            /**< \brief 4, Extra Path Status Error Clear Register*/
       Ifx_CIF_MIEP_IMSC                   IMSC;                   /**< \brief 8, MI Extra Path Interrupt Mask \u20181\u2019: interrupt active, \u20180\u2019: interrupt masked*/
       Ifx_CIF_MIEP_RIS                    RIS;                    /**< \brief C, MI Extra Path Raw Interrupt Status Register*/
       Ifx_CIF_MIEP_MIS                    MIS;                    /**< \brief 10, MI Extra Path Masked Interrupt Status Register*/
       Ifx_CIF_MIEP_ICR                    ICR;                    /**< \brief 14, MI Extra Path Interrupt Clear Register*/
       Ifx_CIF_MIEP_ISR                    ISR;                    /**< \brief 18, MI Extra Path Interrupt Set Register*/
       Ifx_UReg_8Bit                       reserved_1C[228];       /**< \brief 1C, \internal Reserved */
       Ifx_CIF_MIEP_CH_1S                  CH_1S[5];               /**< \brief 100, */
} Ifx_CIF_MIEP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Cif_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief CIF object */
typedef volatile struct _Ifx_CIF
{
       Ifx_CIF_BBB                         BBB;                    /**< \brief 0, Kernel Reset Status Clear Register*/
       Ifx_UReg_8Bit                       reserved_20[224];       /**< \brief 20, \internal Reserved */
       Ifx_CIF_CCL                         CCL;                    /**< \brief 100, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_104[4];        /**< \brief 104, \internal Reserved */
       Ifx_CIF_ID                          ID;                     /**< \brief 108, CIF Revision Identification Register*/
       Ifx_UReg_8Bit                       reserved_10C[4];        /**< \brief 10C, \internal Reserved */
       Ifx_CIF_ICCL                        ICCL;                   /**< \brief 110, CIF Internal Clock Control Register*/
       Ifx_CIF_IRCL                        IRCL;                   /**< \brief 114, CIF Internal Reset Control Register*/
       Ifx_CIF_DPCL                        DPCL;                   /**< \brief 118, CIF Data Path Control Register*/
       Ifx_UReg_8Bit                       reserved_11C[996];      /**< \brief 11C, \internal Reserved */
       Ifx_CIF_ISP                         ISP;                    /**< \brief 500, */
       Ifx_UReg_8Bit                       reserved_748[3512];     /**< \brief 748, \internal Reserved */
       Ifx_CIF_MI                          MI;                     /**< \brief 1500, */
       Ifx_UReg_8Bit                       reserved_1614[748];     /**< \brief 1614, \internal Reserved */
       Ifx_CIF_JPE                         JPE;                    /**< \brief 1900, */
       Ifx_UReg_8Bit                       reserved_1990[2672];    /**< \brief 1990, \internal Reserved */
       Ifx_CIF_ISPIS                       ISPIS;                  /**< \brief 2400, ISP Image Current Output Vertical Picture Size Shadow Register*/
       Ifx_UReg_8Bit                       reserved_2434[204];     /**< \brief 2434, \internal Reserved */
       Ifx_CIF_WD                          WD;                     /**< \brief 2500, Watchdog Interrupt Set Register*/
       Ifx_UReg_8Bit                       reserved_2520[224];     /**< \brief 2520, \internal Reserved */
       Ifx_CIF_LDS                         LDS;                    /**< \brief 2600, Linear Downscaler Factor Register*/
       Ifx_UReg_8Bit                       reserved_2608[504];     /**< \brief 2608, \internal Reserved */
       Ifx_CIF_DP                          DP;                     /**< \brief 2800, */
       Ifx_UReg_8Bit                       reserved_2834[460];     /**< \brief 2834, \internal Reserved */
       Ifx_CIF_EP_IC_1S                    EP_IC_1S[5];            /**< \brief 2A00, */
       Ifx_UReg_8Bit                       reserved_2F00[1536];    /**< \brief 2F00, \internal Reserved */
       Ifx_CIF_MIEP                        MIEP;                   /**< \brief 3500, */
       Ifx_UReg_8Bit                       reserved_3B00[1536];    /**< \brief 3B00, \internal Reserved */
} Ifx_CIF;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXCIF_REGDEF_H */
