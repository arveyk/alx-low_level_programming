#ifndef _3_FUNCTION_LIKE_MACRO_H
#define _3_FUNCTION_LIKE_MACRO_H

#define ABS
#ifdef ABS < 0
ABS = -ABS;
#else
ABS = ABS * 1;
#endif
