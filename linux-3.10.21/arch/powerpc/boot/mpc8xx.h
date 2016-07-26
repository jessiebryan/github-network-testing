#ifndef _PPC_BOOT_MPC8xx_H_
#define _PPC_BOOT_MPC8xx_H_

#include "types.h"

void mpc8xx_set_clocks(u32 sysclk);

u32 mpc885_get_clock(u32 crystal);
int mpc885_fixup_clocks(u32 crystal);

#endif
Tue Jul 19 12:48:22 PDT 2016
Fri Jul 22 16:05:01 PDT 2016
Sun, Jul 24, 2016  4:38:19 PM
Mon, Jul 25, 2016 11:25:43 PM
