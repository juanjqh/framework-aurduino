/**
 * \file IfxEmem_regdef.h
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
 * \defgroup IfxSfr_Emem_Registers Emem Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Emem_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Emem_Registers
 * 
 * \defgroup IfxSfr_Emem_Registers_union Register unions
 * \ingroup IfxSfr_Emem_Registers
 * 
 * \defgroup IfxSfr_Emem_Registers_struct Memory map
 * \ingroup IfxSfr_Emem_Registers
 */
#ifndef IFXEMEM_REGDEF_H
#define IFXEMEM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Emem_Registers_Bitfields
 * \{  */
/** \brief EMEM Core Access Enable Register 0 */
typedef struct _Ifx_EMEM_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID q - ENq (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID q - ENq (rw) */
} Ifx_EMEM_ACCEN0_Bits;

/** \brief EMEM Core Access Enable Register 1 */
typedef struct _Ifx_EMEM_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_EMEM_ACCEN1_Bits;

/** \brief EMEM Core Clock Control Register */
typedef struct _Ifx_EMEM_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_EMEM_CLC_Bits;

/** \brief EMEM Core Module Identification Register */
typedef struct _Ifx_EMEM_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUM:16;        /**< \brief [31:16] Module Number - MOD_NUM (r) */
} Ifx_EMEM_ID_Bits;

/** \brief EMEM Core Standby RAM Control Register */
typedef struct _Ifx_EMEM_SBRCTR_Bits
{
    Ifx_UReg_32Bit STBLOCK:1;         /**< \brief [0:0] Standby Lock Flag - STBLOCK (rh) */
    Ifx_UReg_32Bit STBULK:3;          /**< \brief [3:1] Unlock Standby Lock Flag - STBULK (w) */
    Ifx_UReg_32Bit STBSLK:4;          /**< \brief [7:4] Set Standby Lock Flag - STBSLK (w) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit STBPON:1;          /**< \brief [16:16] Standby Power On - STBPON (rh) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_EMEM_SBRCTR_Bits;

/** \brief EMEM Core Tile Control Common Memory Register */
typedef struct _Ifx_EMEM_TILECC_Bits
{
    Ifx_UReg_32Bit TCM0:1;            /**< \brief [0:0] Common Memory TCM Tile 0 Control - TCM0 (rw) */
    Ifx_UReg_32Bit TCM1:1;            /**< \brief [1:1] Common Memory TCM Tile 1 Control - TCM1 (rw) */
    Ifx_UReg_32Bit TCM2:1;            /**< \brief [2:2] Common Memory TCM Tile 2 Control - TCM2 (rw) */
    Ifx_UReg_32Bit TCM3:1;            /**< \brief [3:3] Common Memory TCM Tile 3 Control - TCM3 (rw) */
    Ifx_UReg_32Bit TCM4:1;            /**< \brief [4:4] Common Memory TCM Tile 4 Control - TCM4 (rw) */
    Ifx_UReg_32Bit TCM5:1;            /**< \brief [5:5] Common Memory TCM Tile 5 Control - TCM5 (rw) */
    Ifx_UReg_32Bit TCM6:1;            /**< \brief [6:6] Common Memory TCM Tile 6 Control - TCM6 (rw) */
    Ifx_UReg_32Bit TCM7:1;            /**< \brief [7:7] Common Memory TCM Tile 7 Control - TCM7 (rw) */
    Ifx_UReg_32Bit XCM0:1;            /**< \brief [8:8] Common Memory XCM Tile 0 Control - XCM0 (rw) */
    Ifx_UReg_32Bit XCM1:1;            /**< \brief [9:9] Common Memory XCM Tile 1 Control - XCM1 (rw) */
    Ifx_UReg_32Bit XCM2:1;            /**< \brief [10:10] Common Memory XCM Tile 2 Control - XCM2 (rw) */
    Ifx_UReg_32Bit XCM3:1;            /**< \brief [11:11] Common Memory XCM Tile 3 Control - XCM3 (rw) */
    Ifx_UReg_32Bit XCM4:1;            /**< \brief [12:12] Common Memory XCM Tile 4 Control - XCM4 (rw) */
    Ifx_UReg_32Bit XCM5:1;            /**< \brief [13:13] Common Memory XCM Tile 5 Control - XCM5 (rw) */
    Ifx_UReg_32Bit XCM6:1;            /**< \brief [14:14] Common Memory XCM Tile 6 Control - XCM6 (rw) */
    Ifx_UReg_32Bit XCM7:1;            /**< \brief [15:15] Common Memory XCM Tile 7 Control - XCM7 (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EMEM_TILECC_Bits;

/** \brief EMEM Core Tile Configuration Register */
typedef struct _Ifx_EMEM_TILECONFIG_Bits
{
    Ifx_UReg_32Bit TCM0:2;            /**< \brief [1:0] TCM Tile 0 Assignment Change - TCM0 (w) */
    Ifx_UReg_32Bit TCM1:2;            /**< \brief [3:2] TCM Tile 1 Assignment Change - TCM1 (w) */
    Ifx_UReg_32Bit TCM2:2;            /**< \brief [5:4] TCM Tile 2 Assignment Change - TCM2 (w) */
    Ifx_UReg_32Bit TCM3:2;            /**< \brief [7:6] TCM Tile 3 Assignment Change - TCM3 (w) */
    Ifx_UReg_32Bit TCM4:2;            /**< \brief [9:8] TCM Tile 4 Assignment Change - TCM4 (w) */
    Ifx_UReg_32Bit TCM5:2;            /**< \brief [11:10] TCM Tile 5 Assignment Change - TCM5 (w) */
    Ifx_UReg_32Bit TCM6:2;            /**< \brief [13:12] TCM Tile 6 Assignment Change - TCM6 (w) */
    Ifx_UReg_32Bit TCM7:2;            /**< \brief [15:14] TCM Tile 7 Assignment Change - TCM7 (w) */
    Ifx_UReg_32Bit XCM0:2;            /**< \brief [17:16] XCM Tile 0 Assignment Change - XCM0 (w) */
    Ifx_UReg_32Bit XCM1:2;            /**< \brief [19:18] XCM Tile 1 Assignment Change - XCM1 (w) */
    Ifx_UReg_32Bit XCM2:2;            /**< \brief [21:20] XCM Tile 2 Assignment Change - XCM2 (w) */
    Ifx_UReg_32Bit XCM3:2;            /**< \brief [23:22] XCM Tile 3 Assignment Change - XCM3 (w) */
    Ifx_UReg_32Bit XCM4:2;            /**< \brief [25:24] XCM Tile 4 Assignment Change - XCM4 (w) */
    Ifx_UReg_32Bit XCM5:2;            /**< \brief [27:26] XCM Tile 5 Assignment Change - XCM5 (w) */
    Ifx_UReg_32Bit XCM6:2;            /**< \brief [29:28] XCM Tile 6 Assignment Change - XCM6 (w) */
    Ifx_UReg_32Bit XCM7:2;            /**< \brief [31:30] XCM Tile 7 Assignment Change - XCM7 (w) */
} Ifx_EMEM_TILECONFIG_Bits;

/** \brief EMEM Core Tile Control Trace Memory Register */
typedef struct _Ifx_EMEM_TILECT_Bits
{
    Ifx_UReg_32Bit TCM0:1;            /**< \brief [0:0] Trace Memory TCM Tile 0 Control Bit - TCM0 (rw) */
    Ifx_UReg_32Bit TCM1:1;            /**< \brief [1:1] Trace Memory TCM Tile 1 Control Bit - TCM1 (rw) */
    Ifx_UReg_32Bit TCM2:1;            /**< \brief [2:2] Trace Memory TCM Tile 2 Control Bit - TCM2 (rw) */
    Ifx_UReg_32Bit TCM3:1;            /**< \brief [3:3] Trace Memory TCM Tile 3 Control Bit - TCM3 (rw) */
    Ifx_UReg_32Bit TCM4:1;            /**< \brief [4:4] Trace Memory TCM Tile 4 Control Bit - TCM4 (rw) */
    Ifx_UReg_32Bit TCM5:1;            /**< \brief [5:5] Trace Memory TCM Tile 5 Control Bit - TCM5 (rw) */
    Ifx_UReg_32Bit TCM6:1;            /**< \brief [6:6] Trace Memory TCM Tile 6 Control Bit - TCM6 (rw) */
    Ifx_UReg_32Bit TCM7:1;            /**< \brief [7:7] Trace Memory TCM Tile 7 Control Bit - TCM7 (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit XTM0:1;            /**< \brief [16:16] Trace Memory XTM Tile 0 Control Bit - XTM0 (rw) */
    Ifx_UReg_32Bit XTM1:1;            /**< \brief [17:17] Trace Memory XTM Tile 1 Control Bit - XTM1 (rw) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_EMEM_TILECT_Bits;

/** \brief EMEM Core Tile Status Register */
typedef struct _Ifx_EMEM_TILESTATE_Bits
{
    Ifx_UReg_32Bit TCM0:2;            /**< \brief [1:0] Assignment of TCM Tile 0 - TCM0 (rh) */
    Ifx_UReg_32Bit TCM1:2;            /**< \brief [3:2] Assignment of TCM Tile 1 - TCM1 (rh) */
    Ifx_UReg_32Bit TCM2:2;            /**< \brief [5:4] Assignment of TCM Tile 2 - TCM2 (rh) */
    Ifx_UReg_32Bit TCM3:2;            /**< \brief [7:6] Assignment of TCM Tile 3 - TCM3 (rh) */
    Ifx_UReg_32Bit TCM4:2;            /**< \brief [9:8] Assignment of TCM Tile 4 - TCM4 (rh) */
    Ifx_UReg_32Bit TCM5:2;            /**< \brief [11:10] Assignment of TCM Tile 5 - TCM5 (rh) */
    Ifx_UReg_32Bit TCM6:2;            /**< \brief [13:12] Assignment of TCM Tile 6 - TCM6 (rh) */
    Ifx_UReg_32Bit TCM7:2;            /**< \brief [15:14] Assignment of TCM Tile 7 - TCM7 (rh) */
    Ifx_UReg_32Bit XCM0:2;            /**< \brief [17:16] Assignment of XCM Tile 0 - XCM0 (rh) */
    Ifx_UReg_32Bit XCM1:2;            /**< \brief [19:18] Assignment of XCM Tile 1 - XCM1 (rh) */
    Ifx_UReg_32Bit XCM2:2;            /**< \brief [21:20] Assignment of XCM Tile 2 - XCM2 (rh) */
    Ifx_UReg_32Bit XCM3:2;            /**< \brief [23:22] Assignment of XCM Tile 3 - XCM3 (rh) */
    Ifx_UReg_32Bit XCM4:2;            /**< \brief [25:24] Assignment of XCM Tile 4 - XCM4 (rh) */
    Ifx_UReg_32Bit XCM5:2;            /**< \brief [27:26] Assignment of XCM Tile 5 - XCM5 (rh) */
    Ifx_UReg_32Bit XCM6:2;            /**< \brief [29:28] Assignment of XCM Tile 6 - XCM6 (rh) */
    Ifx_UReg_32Bit XCM7:2;            /**< \brief [31:30] Assignment of XCM Tile 7 - XCM7 (rh) */
} Ifx_EMEM_TILESTATE_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_emem_Registers_union
 * \{   */
/** \brief EMEM Core Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_ACCEN0;

/** \brief EMEM Core Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_ACCEN1;

/** \brief EMEM Core Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_EMEM_CLC;

/** \brief EMEM Core Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_EMEM_ID;

/** \brief EMEM Core Standby RAM Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_SBRCTR_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_SBRCTR;

/** \brief EMEM Core Tile Control Common Memory Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILECC_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_TILECC;

/** \brief EMEM Core Tile Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILECONFIG_Bits B;       /**< \brief Bitfield access */
} Ifx_EMEM_TILECONFIG;

/** \brief EMEM Core Tile Control Trace Memory Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILECT_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_TILECT;

/** \brief EMEM Core Tile Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILESTATE_Bits B;        /**< \brief Bitfield access */
} Ifx_EMEM_TILESTATE;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Emem_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief EMEM object */
typedef volatile struct _Ifx_EMEM
{
       Ifx_EMEM_CLC                        CLC;                    /**< \brief 0, EMEM Core Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_EMEM_ID                         ID;                     /**< \brief 8, EMEM Core Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[20];         /**< \brief C, \internal Reserved */
       Ifx_EMEM_TILECONFIG                 TILECONFIG;             /**< \brief 20, EMEM Core Tile Configuration Register*/
       Ifx_EMEM_TILECC                     TILECC;                 /**< \brief 24, EMEM Core Tile Control Common Memory Register*/
       Ifx_EMEM_TILECT                     TILECT;                 /**< \brief 28, EMEM Core Tile Control Trace Memory Register*/
       Ifx_EMEM_TILESTATE                  TILESTATE;              /**< \brief 2C, EMEM Core Tile Status Register*/
       Ifx_UReg_8Bit                       reserved_30[4];         /**< \brief 30, \internal Reserved */
       Ifx_EMEM_SBRCTR                     SBRCTR;                 /**< \brief 34, EMEM Core Standby RAM Control Register*/
       Ifx_UReg_8Bit                       reserved_38[192];       /**< \brief 38, \internal Reserved */
       Ifx_EMEM_ACCEN1                     ACCEN1;                 /**< \brief F8, EMEM Core Access Enable Register 1*/
       Ifx_EMEM_ACCEN0                     ACCEN0;                 /**< \brief FC, EMEM Core Access Enable Register 0*/
} Ifx_EMEM;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXEMEM_REGDEF_H */
