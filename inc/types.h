#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>

typedef unsigned int uint32;
typedef int int32;
typedef unsigned short uint16;
typedef short int16;
typedef unsigned char uint8;        //hex
typedef unsigned char uchar;        //内存内容为ASCII码
typedef signed char int8;


#if defined(_WIN32)
typedef unsigned char  uint8_t;    /* add new */
typedef unsigned int  uint32_t;    /* add new */
typedef unsigned long long  uint64_t;    /* add new */
#endif


#endif //_TYPES_H_

