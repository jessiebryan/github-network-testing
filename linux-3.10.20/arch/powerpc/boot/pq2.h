#ifndef _PPC_BOOT_PQ2_H_
#define _PPC_BOOT_PQ2_H_

#include "types.h"

int pq2_get_clocks(u32 crystal, u32 *sysfreq, u32 *corefreq,
                   u32 *timebase, u32 *brgfreq);
void pq2_set_clocks(u32 sysfreq, u32 corefreq, u32 timebase, u32 brgfreq);
int pq2_fixup_clocks(u32 crystal);

#endif
Tue Jul 19 12:47:44 PDT 2016
Fri Jul 22 16:03:50 PDT 2016
Sun, Jul 24, 2016  4:29:05 PM
Mon, Jul 25, 2016 11:15:27 PM
