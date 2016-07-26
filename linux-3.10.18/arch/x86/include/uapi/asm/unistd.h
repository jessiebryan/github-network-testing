#ifndef _UAPI_ASM_X86_UNISTD_H
#define _UAPI_ASM_X86_UNISTD_H

/* x32 syscall flag bit */
#define __X32_SYSCALL_BIT	0x40000000

#ifndef __KERNEL__
# ifdef __i386__
#  include <asm/unistd_32.h>
# elif defined(__ILP32__)
#  include <asm/unistd_x32.h>
# else
#  include <asm/unistd_64.h>
# endif
#endif

#endif /* _UAPI_ASM_X86_UNISTD_H */
Tue Jul 19 12:46:31 PDT 2016
Fri Jul 22 16:01:36 PDT 2016
Sun, Jul 24, 2016  4:11:48 PM
Mon, Jul 25, 2016 10:56:17 PM
