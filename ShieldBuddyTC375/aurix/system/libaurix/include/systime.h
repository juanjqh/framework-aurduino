/*! \file systime.h
 *  \brief Simple system timer API definition
 *
 *  A simple system timer API providing periodic timer and time
 *  measurement functions.
 *
 *  \autor TGL
 *
 *  \version
 *    08.08.2010  initial version
 */

#ifndef __SYSTIME_H__
#define __SYSTIME_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*! \brief Periodic timer callback function prototype
 */
typedef void (*SYSTIME_Callback)(void);

/*! \brief System timer initialisation
 *  \param Freq ... Target frequency of the periodic timer
 *  \param Callback function pointer
 */
void SYSTIME_Init(unsigned long Freq, SYSTIME_Callback Callback);

void SYSTIME_Cleanup(void);

/*! \brief Get current periodic timer frequency
 *  \return Timer frequency, unit Hz
 */
unsigned long SYSTIME_GetFreq(void);

/*! \brief Get current system time
 *  \return Number of timer ticks
 */
unsigned long SYSTIME_GetTime(void);

/*! \brief Reset system time
 */
void SYSTIME_Reset(void);

/*! \brief Wait for specified number of timer ticks
 */
void SYSTIME_Delay(unsigned long WaitTime);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __SYSTIME_H__ */
