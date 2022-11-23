/**
 * \file IfxGtm_Dtm.h
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
 * \defgroup IfxLld_Gtm_Std_Dtm Dtm Basic Functionality
 * \ingroup IfxLld_Gtm_Std
 * \defgroup IfxLld_Gtm_Std_Dtm_Enumerations DTM Enumerations
 * \ingroup IfxLld_Gtm_Std_Dtm
 * \defgroup IfxLld_Gtm_Std_Dtm_Functions DTM Functions
 * \ingroup IfxLld_Gtm_Std_Dtm
 */

#ifndef IFXGTM_DTM_H
#define IFXGTM_DTM_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxGtm_cfg.h"
#include "IfxGtm_reg.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gtm_Std_Dtm_Enumerations
 * \{ */
/** \brief Clock source for DTM object\n
 * Definition in IfxGTM.DTM[i].CTRL.B.CLKSEL ( i = 0 to 35)
 */
typedef enum
{
    IfxGtm_Dtm_ClockSource_systemClock,  /**< \brief SYS_CLK as clock source */
    IfxGtm_Dtm_ClockSource_cmuClock0,    /**< \brief CMU_CLK0 as clock source */
    IfxGtm_Dtm_ClockSource_cmuClock1,    /**< \brief CMU_CLK1 (if DTM is connected to ATOM) or CMU_FXCLK0 (if DTM is connected to TOM) as clock source */
    IfxGtm_Dtm_ClockSource_cmuClock2     /**< \brief CMU_CLK2 (if DTM is connected to ATOM) or CMU_FXCLK1 (if DTM is connected to TOM) as clock source */
} IfxGtm_Dtm_ClockSource;

/** \brief Output x function of channel y \n
 * Definition in IfxGTM.DTM[i].CH.CTRL1.B.O1Fx ( i = 0 to 35 and x = 0 to 3)
 */
typedef enum
{
    IfxGtm_Dtm_Output1Function_signalEdgeTrigger,            /**< \brief Signal Edge Trigger */
    IfxGtm_Dtm_Output1Function_xorOfDtmInputandShiftSignal,  /**< \brief XOR Of Dtm Input and Shift Signal */
    IfxGtm_Dtm_Output1Function_andOfDtmInputandShiftSignal,  /**< \brief AND Of Dtm Input and Shift Signal */
    IfxGtm_Dtm_Output1Function_dtmInputSignal                /**< \brief DTM Input Signal DTM[i]_INx_T (i = 0 to 35 and x = 0 to 3) */
} IfxGtm_Dtm_Output1Function;

/** \brief Output 1 selection of channel x (x = 0 to 3)\n
 * Definition in IfxGTM.DTM[i].CH.CTRL1.B.O1SELx ( i = 0 to 35 and x = 0 to 3)
 */
typedef enum
{
    IfxGtm_Dtm_Output1Select_inverseDeadTime,  /**< \brief Inverse Dead Time */
    IfxGtm_Dtm_Output1Select_specialFunction   /**< \brief Special Function as selected by O1Fx (x = 0 to 3) */
} IfxGtm_Dtm_Output1Select;

/** \} */

/** \brief Dead Time Path on output x of channel y\n
 * Definition in IfxGTM.DTM[i].CH.CTRL2.B.DTxy ( i = 0 to 35; x = 0 , 1; and y = 0 to 4)
 */
typedef enum
{
    IfxGtm_Dtm_DeadTimePath_feedThrough,  /**< \brief Feed through from DTM input to output (DTM[i]_INx to DTM[i]_OUTx (i = 0 to 35 and x = 0 to 4) */
    IfxGtm_Dtm_DeadTimePath_enable        /**< \brief Dead Time Path enabled */
} IfxGtm_Dtm_DeadTimePath;

/** \addtogroup IfxLld_Gtm_Std_Dtm_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Sets the clock source for DTM object
 * \param dtm Pointer to the DTM object
 * \param clockSource Clock source for DTM object
 * \return None
 */
IFX_INLINE void IfxGtm_Dtm_setClockSource(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_ClockSource clockSource);

/** \brief Sets the Output 0 Dead Time Path for DTM channel
 * \param dtm Pointer to the DTM object
 * \param channel Channel index
 * \param deadTimePath Dead Time Path for Dtm chhannel output
 * \return None
 */
IFX_INLINE void IfxGtm_Dtm_setOutput0DeadTimePath(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_DeadTimePath deadTimePath);

/** \brief Sets the Output 1 Dead Time Path for DTM channel
 * \param dtm Pointer to the DTM object
 * \param channel Channel index
 * \param deadTimePath Dead Time Path for Dtm chhannel output
 * \return None
 */
IFX_INLINE void IfxGtm_Dtm_setOutput1DeadTimePath(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_DeadTimePath deadTimePath);

/** \brief Sets the Output Function for DTM channel
 * \param dtm Pointer to the DTM object
 * \param channel Channel index
 * \param output1Function Output 1 function
 * \return None
 */
IFX_INLINE void IfxGtm_Dtm_setOutput1Function(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_Output1Function output1Function);

/** \brief Sets the Output Selection for DTM channel
 * \param dtm Pointer to the DTM object
 * \param channel Channel index
 * \param output1Select Output 1 selection
 * \return None
 */
IFX_INLINE void IfxGtm_Dtm_setOutput1Select(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_Output1Select output1Select);

/** \} */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief returns the base address of selected DTM instance
 * \param gtm pointer to GTM register base
 * \param cdtmIndex CDTM index
 * \param dtmIndex DTM index
 * \return Base address of DTM
 */
IFX_EXTERN Ifx_GTM_CDTM_DTM *IfxGtm_Dtm_getDtmPointer(Ifx_GTM *gtm, IfxGtm_Cdtm cdtmIndex, IfxGtm_Dtm dtmIndex);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxGtm_Dtm_setClockSource(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_ClockSource clockSource)
{
    dtm->CTRL.B.CLK_SEL = clockSource;
}


IFX_INLINE void IfxGtm_Dtm_setOutput0DeadTimePath(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_DeadTimePath deadTimePath)
{
    uint32 shift = (8 * (uint32)channel) + 3;
    uint32 mask  = 1 << shift;

    dtm->CH_CTRL2.U = (dtm->CH_CTRL2.U & ~mask) | ((uint32)deadTimePath << shift);
}


IFX_INLINE void IfxGtm_Dtm_setOutput1DeadTimePath(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_DeadTimePath deadTimePath)
{
    uint32 shift = (8 * (uint32)channel) + 7;
    uint32 mask  = 1 << shift;

    dtm->CH_CTRL2.U = (dtm->CH_CTRL2.U & ~mask) | ((uint32)deadTimePath << shift);
}


IFX_INLINE void IfxGtm_Dtm_setOutput1Function(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_Output1Function output1Function)
{
    uint32 shift = (8 * (uint32)channel) + 4;
    uint32 mask  = 3 << shift;

    dtm->CH_CTRL1.U = (dtm->CH_CTRL1.U & ~mask) | ((uint32)output1Function << shift);
}


IFX_INLINE void IfxGtm_Dtm_setOutput1Select(Ifx_GTM_CDTM_DTM *dtm, IfxGtm_Dtm_Ch channel, IfxGtm_Dtm_Output1Select output1Select)
{
    uint32 shift = 8 * (uint32)channel;
    uint32 mask  = 1 << shift;

    dtm->CH_CTRL1.U = (dtm->CH_CTRL1.U & ~mask) | ((uint32)output1Select << shift);
}


#endif /* IFXGTM_DTM_H */
