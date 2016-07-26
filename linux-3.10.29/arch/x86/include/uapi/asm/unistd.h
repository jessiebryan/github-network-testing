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
Tue Jul 19 12:53:37 PDT 2016
Fri Jul 22 16:15:07 PDT 2016
Sun, Jul 24, 2016  5:53:52 PM
Tue, Jul 26, 2016 12:49:16 AM
