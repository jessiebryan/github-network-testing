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
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:11 PDT 2016
Sun, Jul 24, 2016  5:02:26 PM
Mon, Jul 25, 2016 11:52:31 PM
