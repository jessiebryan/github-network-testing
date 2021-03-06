/*
 * asm-generic/int-ll64.h
 *
 * Integer declarations for architectures which use "long long"
 * for 64-bit types.
 */

#ifndef _UAPI_ASM_GENERIC_INT_LL64_H
#define _UAPI_ASM_GENERIC_INT_LL64_H

#include <asm/bitsperlong.h>

#ifndef __ASSEMBLY__
/*
 * __xx is ok: it doesn't pollute the POSIX namespace. Use these in the
 * header files exported to user space
 */

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#ifdef __GNUC__
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
#else
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#endif

#endif /* __ASSEMBLY__ */


#endif /* _UAPI_ASM_GENERIC_INT_LL64_H */
Tue Jul 19 12:48:07 PDT 2016
Fri Jul 22 16:04:33 PDT 2016
Sun, Jul 24, 2016  4:34:42 PM
Mon, Jul 25, 2016 11:21:42 PM
