#ifndef _PPC_BOOT_PQ2_H_
#define _PPC_BOOT_PQ2_H_

#include "types.h"

int pq2_get_clocks(u32 crystal, u32 *sysfreq, u32 *corefreq,
                   u32 *timebase, u32 *brgfreq);
void pq2_set_clocks(u32 sysfreq, u32 corefreq, u32 timebase, u32 brgfreq);
int pq2_fixup_clocks(u32 crystal);

#endif
Tue Jul 19 12:38:36 PDT 2016
Fri Jul 22 15:46:46 PDT 2016
Sun, Jul 24, 2016  2:20:03 PM
Mon, Jul 25, 2016  8:51:23 PM
