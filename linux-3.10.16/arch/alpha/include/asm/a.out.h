#ifndef __ALPHA_A_OUT_H__
#define __ALPHA_A_OUT_H__

#include <uapi/asm/a.out.h>


/* Assume that start addresses below 4G belong to a TASO application.
   Unfortunately, there is no proper bit in the exec header to check.
   Worse, we have to notice the start address before swapping to use
   /sbin/loader, which of course is _not_ a TASO application.  */
#define SET_AOUT_PERSONALITY(BFPM, EX) \
	set_personality (((BFPM->taso || EX.ah.entry < 0x100000000L \
			   ? ADDR_LIMIT_32BIT : 0) | PER_OSF4))

#endif /* __A_OUT_GNU_H__ */
Tue Jul 19 12:45:03 PDT 2016
Fri Jul 22 15:58:44 PDT 2016
Sun, Jul 24, 2016  3:49:32 PM
Mon, Jul 25, 2016 10:31:31 PM
