#ifndef __ASM_GENERIC_PARAM_H
#define __ASM_GENERIC_PARAM_H

#include <uapi/asm-generic/param.h>

# undef HZ
# define HZ		CONFIG_HZ	/* Internal kernel timer frequency */
# define USER_HZ	100		/* some user interfaces are */
# define CLOCKS_PER_SEC	(USER_HZ)       /* in "ticks" like times() */
#endif /* __ASM_GENERIC_PARAM_H */
Tue Jul 19 12:49:17 PDT 2016
Fri Jul 22 16:06:46 PDT 2016
Sun, Jul 24, 2016  4:51:36 PM
Mon, Jul 25, 2016 11:40:33 PM
