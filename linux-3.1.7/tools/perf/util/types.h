#ifndef __PERF_TYPES_H
#define __PERF_TYPES_H

#include <stdint.h>

/*
 * We define u64 as uint64_t for every architecture
 * so that we can print it with "%"PRIx64 without getting warnings.
 */
typedef uint64_t	   u64;
typedef int64_t		   s64;
typedef unsigned int	   u32;
typedef signed int	   s32;
typedef unsigned short	   u16;
typedef signed short	   s16;
typedef unsigned char	   u8;
typedef signed char	   s8;

#endif /* __PERF_TYPES_H */
Tue Jul 19 12:37:11 PDT 2016
Fri Jul 22 15:44:08 PDT 2016
Sun, Jul 24, 2016  2:00:54 PM
Mon, Jul 25, 2016  8:29:32 PM
