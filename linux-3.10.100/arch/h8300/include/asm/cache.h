#ifndef __ARCH_H8300_CACHE_H
#define __ARCH_H8300_CACHE_H

/* bytes per L1 cache line */
#define        L1_CACHE_SHIFT  2
#define        L1_CACHE_BYTES  (1 << L1_CACHE_SHIFT)

/* m68k-elf-gcc  2.95.2 doesn't like these */

#define __cacheline_aligned
#define ____cacheline_aligned

#endif
Tue Jul 19 12:39:48 PDT 2016
Fri Jul 22 15:49:09 PDT 2016
Sun, Jul 24, 2016  2:37:14 PM
Mon, Jul 25, 2016  9:10:31 PM
