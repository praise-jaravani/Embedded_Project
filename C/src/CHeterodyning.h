/* #ifndef Prac2_threadded_h
#define Prac2_threadded_h
//------------------------------------------------------------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//------------------------------------------------------------------------------

#include "Timer.h"
#include "globals.h"
//------------------------------------------------------------------------------


#endif
 */

// For altered data types
 
#ifndef Prac2_threadded_h
#define Prac2_threadded_h

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "Timer.h"
#include "globals.h"

#ifdef USE_FLOAT
    typedef float data_t;
#elif defined(USE_DOUBLE)
    typedef double data_t;
#elif defined(USE_LONG_DOUBLE)
    typedef long double data_t;
#elif defined(USE_FP16)
    #include <arm_fp16.h>
    typedef __fp16 data_t;
#elif defined(USE_FLOAT128)
    #include <quadmath.h>
    typedef __float128 data_t;
#else
    typedef float data_t;
#endif

#endif