#ifndef _UAPI__ASM_GENERIC_BITS_PER_LONG
#define _UAPI__ASM_GENERIC_BITS_PER_LONG

/*
 * There seems to be no way of detecting this automatically from user
 * space, so 64 bit architectures should override this in their
 * bitsperlong.h. In particular, an architecture that supports
 * both 32 and 64 bit user space must not rely on CONFIG_64BIT
 * to decide it, but rather check a compiler provided macro.
 */
#ifndef __BITS_PER_LONG
#define __BITS_PER_LONG 32
#endif

#endif /* _UAPI__ASM_GENERIC_BITS_PER_LONG */
Tue Jul 19 12:53:56 PDT 2016
Fri Jul 22 16:15:44 PDT 2016
Sun, Jul 24, 2016  5:58:20 PM
Tue, Jul 26, 2016 12:54:10 AM
