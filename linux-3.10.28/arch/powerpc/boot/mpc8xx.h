#ifndef _PPC_BOOT_MPC8xx_H_
#define _PPC_BOOT_MPC8xx_H_

#include "types.h"

void mpc8xx_set_clocks(u32 sysclk);

u32 mpc885_get_clock(u32 crystal);
int mpc885_fixup_clocks(u32 crystal);

#endif
Tue Jul 19 12:52:54 PDT 2016
Fri Jul 22 16:13:43 PDT 2016
Sun, Jul 24, 2016  5:43:20 PM
Tue, Jul 26, 2016 12:37:38 AM
