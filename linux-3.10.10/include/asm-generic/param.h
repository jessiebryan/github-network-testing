#ifndef __ASM_GENERIC_PARAM_H
#define __ASM_GENERIC_PARAM_H

#include <uapi/asm-generic/param.h>

# undef HZ
# define HZ		CONFIG_HZ	/* Internal kernel timer frequency */
# define USER_HZ	100		/* some user interfaces are */
# define CLOCKS_PER_SEC	(USER_HZ)       /* in "ticks" like times() */
#endif /* __ASM_GENERIC_PARAM_H */
Tue Jul 19 12:39:31 PDT 2016
Fri Jul 22 15:48:37 PDT 2016
Sun, Jul 24, 2016  2:33:17 PM
Mon, Jul 25, 2016  9:06:08 PM
