/**
 * \file IfxFce_regdef.h
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
 * \defgroup IfxSfr_Fce_Registers Fce Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Fce_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Fce_Registers
 * 
 * \defgroup IfxSfr_Fce_Registers_union Register unions
 * \ingroup IfxSfr_Fce_Registers
 * 
 * \defgroup IfxSfr_Fce_Registers_struct Memory map
 * \ingroup IfxSfr_Fce_Registers
 */
#ifndef IFXFCE_REGDEF_H
#define IFXFCE_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Fce_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_FCE_ACCEN0_Bits
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
} Ifx_FCE_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_FCE_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_FCE_ACCEN1_Bits;

/** \brief Channels Status Register */
typedef struct _Ifx_FCE_CHSTS_Bits
{
    Ifx_UReg_32Bit CH0:1;             /**< \brief [0:0] Channel0 Status - CH0 (rh) */
    Ifx_UReg_32Bit CH1:1;             /**< \brief [1:1] Channel1 Status - CH1 (rh) */
    Ifx_UReg_32Bit CH2:1;             /**< \brief [2:2] Channel2 Status - CH2 (rh) */
    Ifx_UReg_32Bit CH3:1;             /**< \brief [3:3] Channel3 Status - CH3 (rh) */
    Ifx_UReg_32Bit CH4:1;             /**< \brief [4:4] Channel4 Status - CH4 (rh) */
    Ifx_UReg_32Bit CH5:1;             /**< \brief [5:5] Channel5 Status - CH5 (rh) */
    Ifx_UReg_32Bit CH6:1;             /**< \brief [6:6] Channel6 Status - CH6 (rh) */
    Ifx_UReg_32Bit CH7:1;             /**< \brief [7:7] Channel7 Status - CH7 (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_FCE_CHSTS_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_FCE_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_FCE_CLC_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_FCE_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_FCE_ID_Bits;

/** \brief CRC Configuration Register ${i} */
typedef struct _Ifx_FCE_IN_CFG_Bits
{
    Ifx_UReg_32Bit CMI:1;             /**< \brief [0:0] CRC Mismatch Interrupt - CMI (rw) */
    Ifx_UReg_32Bit CEI:1;             /**< \brief [1:1] Configuration Error Interrupt - CEI (rw) */
    Ifx_UReg_32Bit LEI:1;             /**< \brief [2:2] Length Error Interrupt - LEI (rw) */
    Ifx_UReg_32Bit BEI:1;             /**< \brief [3:3] Bus Error Interrupt - BEI (rw) */
    Ifx_UReg_32Bit CCE:1;             /**< \brief [4:4] CRC Check Comparison - CCE (rw) */
    Ifx_UReg_32Bit ALR:1;             /**< \brief [5:5] Automatic Length Reload - ALR (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit REFIN:1;           /**< \brief [8:8] IR Byte Wise Reflection - REFIN (rw) */
    Ifx_UReg_32Bit REFOUT:1;          /**< \brief [9:9] CRC Bit Wise Reflection - REFOUT (rw) */
    Ifx_UReg_32Bit XSEL:1;            /**< \brief [10:10] Selects the value to be xored with the final CRC - XSEL (rw) */
    Ifx_UReg_32Bit BYTESWAP:1;        /**< \brief [11:11] Swaps the order of the bytes in the IR input register. - BYTESWAP (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit KERNEL:4;          /**< \brief [19:16] Selects the CRC Kernel (Polynomial Engine) used by this channel. - KERNEL (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_FCE_IN_CFG_Bits;

/** \brief CRC Check Register ${i} */
typedef struct _Ifx_FCE_IN_CHECK_Bits
{
    Ifx_UReg_32Bit CHECK:32;          /**< \brief [31:0] CHECK Register - CHECK (rw) */
} Ifx_FCE_IN_CHECK_Bits;

/** \brief CRC Regsister ${i} */
typedef struct _Ifx_FCE_IN_CRC_Bits
{
    Ifx_UReg_32Bit CRC:32;            /**< \brief [31:0] CRC Register - CRC (rwh) */
} Ifx_FCE_IN_CRC_Bits;

/** \brief CRC Test Register ${i} */
typedef struct _Ifx_FCE_IN_CTR_Bits
{
    Ifx_UReg_32Bit FCM:1;             /**< \brief [0:0] Force CRC Mismatch - FCM (rw) */
    Ifx_UReg_32Bit FRM_CFG:1;         /**< \brief [1:1] Force CFG Register Mismatch - FRM_CFG (rw) */
    Ifx_UReg_32Bit FRM_CHECK:1;       /**< \brief [2:2] Force Check Register Mismatch - FRM_CHECK (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_FCE_IN_CTR_Bits;

/** \brief Input Register ${i} */
typedef struct _Ifx_FCE_IN_IR_Bits
{
    Ifx_UReg_32Bit IR:32;             /**< \brief [31:0] Input Register - IR (rw) */
} Ifx_FCE_IN_IR_Bits;

/** \brief CRC Length Register ${i} */
typedef struct _Ifx_FCE_IN_LENGTH_Bits
{
    Ifx_UReg_32Bit LENGTH:16;         /**< \brief [15:0] Message Length Register - LENGTH (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_FCE_IN_LENGTH_Bits;

/** \brief CRC Result Register ${i} */
typedef struct _Ifx_FCE_IN_RES_Bits
{
    Ifx_UReg_32Bit RES:32;            /**< \brief [31:0] Result Register - RES (rh) */
} Ifx_FCE_IN_RES_Bits;

/** \brief CRC Status Register ${i} */
typedef struct _Ifx_FCE_IN_STS_Bits
{
    Ifx_UReg_32Bit CMF:1;             /**< \brief [0:0] CRC Mismatch Flag - CMF (rwh) */
    Ifx_UReg_32Bit CEF:1;             /**< \brief [1:1] Configuration Error Flag - CEF (rwh) */
    Ifx_UReg_32Bit LEF:1;             /**< \brief [2:2] Length Error Flag - LEF (rwh) */
    Ifx_UReg_32Bit BEF:1;             /**< \brief [3:3] Bus Error Flag - BEF (rwh) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_FCE_IN_STS_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_FCE_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (r) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_FCE_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_FCE_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_FCE_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_FCE_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_FCE_KRSTCLR_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_fce_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_FCE_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_FCE_ACCEN1;

/** \brief Channels Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_CHSTS_Bits B;             /**< \brief Bitfield access */
} Ifx_FCE_CHSTS;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_FCE_CLC;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_FCE_ID;

/** \brief CRC Configuration Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_CFG_Bits B;            /**< \brief Bitfield access */
} Ifx_FCE_IN_CFG;

/** \brief CRC Check Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_CHECK_Bits B;          /**< \brief Bitfield access */
} Ifx_FCE_IN_CHECK;

/** \brief CRC Regsister ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_CRC_Bits B;            /**< \brief Bitfield access */
} Ifx_FCE_IN_CRC;

/** \brief CRC Test Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_CTR_Bits B;            /**< \brief Bitfield access */
} Ifx_FCE_IN_CTR;

/** \brief Input Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_IR_Bits B;             /**< \brief Bitfield access */
} Ifx_FCE_IN_IR;

/** \brief CRC Length Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_LENGTH_Bits B;         /**< \brief Bitfield access */
} Ifx_FCE_IN_LENGTH;

/** \brief CRC Result Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_RES_Bits B;            /**< \brief Bitfield access */
} Ifx_FCE_IN_RES;

/** \brief CRC Status Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_IN_STS_Bits B;            /**< \brief Bitfield access */
} Ifx_FCE_IN_STS;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_FCE_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_FCE_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FCE_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_FCE_KRSTCLR;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Fce_IN_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief IN object */
typedef volatile struct _Ifx_FCE_IN
{
       Ifx_FCE_IN_IR                       IR;                     /**< \brief 0, Input Register ${i}*/
       Ifx_FCE_IN_RES                      RES;                    /**< \brief 4, CRC Result Register ${i}*/
       Ifx_FCE_IN_CFG                      CFG;                    /**< \brief 8, CRC Configuration Register ${i}*/
       Ifx_FCE_IN_STS                      STS;                    /**< \brief C, CRC Status Register ${i}*/
       Ifx_FCE_IN_LENGTH                   LENGTH;                 /**< \brief 10, CRC Length Register ${i}*/
       Ifx_FCE_IN_CHECK                    CHECK;                  /**< \brief 14, CRC Check Register ${i}*/
       Ifx_FCE_IN_CRC                      CRC;                    /**< \brief 18, CRC Regsister ${i}*/
       Ifx_FCE_IN_CTR                      CTR;                    /**< \brief 1C, CRC Test Register ${i}*/
} Ifx_FCE_IN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Fce_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief FCE object */
typedef volatile struct _Ifx_FCE
{
       Ifx_FCE_CLC                         CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_FCE_ID                          ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[20];         /**< \brief C, \internal Reserved */
       Ifx_FCE_CHSTS                       CHSTS;                  /**< \brief 20, Channels Status Register*/
       Ifx_UReg_8Bit                       reserved_24[200];       /**< \brief 24, \internal Reserved */
       Ifx_FCE_KRSTCLR                     KRSTCLR;                /**< \brief EC, Kernel Reset Status Clear Register*/
       Ifx_FCE_KRST1                       KRST1;                  /**< \brief F0, Kernel Reset Register 1*/
       Ifx_FCE_KRST0                       KRST0;                  /**< \brief F4, Kernel Reset Register 0*/
       Ifx_FCE_ACCEN1                      ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_FCE_ACCEN0                      ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
       Ifx_FCE_IN                          IN[8];                  /**< \brief 100, CRC Test Register ${i}*/
} Ifx_FCE;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXFCE_REGDEF_H */
