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

union u64_swap {
	u64 val64;
	u32 val32[2];
};

#endif /* __PERF_TYPES_H */
Tue Jul 19 12:46:54 PDT 2016
Fri Jul 22 16:02:17 PDT 2016
Sun, Jul 24, 2016  4:17:09 PM
Mon, Jul 25, 2016 11:02:13 PM
