#ifndef _PPC_BOOT_MPC8xx_H_
#define _PPC_BOOT_MPC8xx_H_

#include "types.h"

void mpc8xx_set_clocks(u32 sysclk);

u32 mpc885_get_clock(u32 crystal);
int mpc885_fixup_clocks(u32 crystal);

#endif
Tue Jul 19 12:43:57 PDT 2016
Fri Jul 22 15:56:41 PDT 2016
Sun, Jul 24, 2016  3:33:44 PM
Mon, Jul 25, 2016 10:13:56 PM
