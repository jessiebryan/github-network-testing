#ifndef __ARCH_H8300_CACHE_H
#define __ARCH_H8300_CACHE_H

/* bytes per L1 cache line */
#define        L1_CACHE_SHIFT  2
#define        L1_CACHE_BYTES  (1 << L1_CACHE_SHIFT)

/* m68k-elf-gcc  2.95.2 doesn't like these */

#define __cacheline_aligned
#define ____cacheline_aligned

#endif
Tue Jul 19 12:47:39 PDT 2016
Fri Jul 22 16:03:40 PDT 2016
Sun, Jul 24, 2016  4:27:52 PM
Mon, Jul 25, 2016 11:14:06 PM
