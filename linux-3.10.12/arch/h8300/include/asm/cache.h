#ifndef __ARCH_H8300_CACHE_H
#define __ARCH_H8300_CACHE_H

/* bytes per L1 cache line */
#define        L1_CACHE_SHIFT  2
#define        L1_CACHE_BYTES  (1 << L1_CACHE_SHIFT)

/* m68k-elf-gcc  2.95.2 doesn't like these */

#define __cacheline_aligned
#define ____cacheline_aligned

#endif
Tue Jul 19 12:42:34 PDT 2016
Fri Jul 22 15:54:11 PDT 2016
Sun, Jul 24, 2016  3:14:05 PM
Mon, Jul 25, 2016  9:52:04 PM
