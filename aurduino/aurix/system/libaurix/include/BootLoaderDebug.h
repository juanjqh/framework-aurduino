#include <avr/pgmspace.h>


//#define DEBUG

#ifdef DEBUG
#define TRACE(msg) trace(msg)
void trace(char const * msg);
void tracenum(uint16_t num);
#else
#define TRACE(msg) trace(msg)
void trace(char const * msg);
void tracenum(uint16_t num);
#endif
void debugInit();
