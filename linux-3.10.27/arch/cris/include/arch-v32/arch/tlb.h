#ifndef _CRIS_ARCH_TLB_H
#define _CRIS_ARCH_TLB_H

/*
 * The TLB is a 64-entry cache. Each entry has a 8-bit page_id that is used
 * to store the "process" it belongs to (=> fast mm context switch). The
 * last page_id is never used so we can make TLB entries that never matches.
 */
#define NUM_TLB_ENTRIES 64
#define NUM_PAGEID 256
#define INVALID_PAGEID 255
#define NO_CONTEXT -1

#endif /* _CRIS_ARCH_TLB_H */
Tue Jul 19 12:52:08 PDT 2016
Fri Jul 22 16:12:15 PDT 2016
Sun, Jul 24, 2016  5:32:37 PM
Tue, Jul 26, 2016 12:25:49 AM
