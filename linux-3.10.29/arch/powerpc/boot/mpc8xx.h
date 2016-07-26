#ifndef _PPC_BOOT_MPC8xx_H_
#define _PPC_BOOT_MPC8xx_H_

#include "types.h"

void mpc8xx_set_clocks(u32 sysclk);

u32 mpc885_get_clock(u32 crystal);
int mpc885_fixup_clocks(u32 crystal);

#endif
Tue Jul 19 12:53:32 PDT 2016
Fri Jul 22 16:14:58 PDT 2016
Sun, Jul 24, 2016  5:52:40 PM
Tue, Jul 26, 2016 12:47:57 AM
