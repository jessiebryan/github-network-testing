#ifndef __ARCH_H8300_CACHE_H
#define __ARCH_H8300_CACHE_H

/* bytes per L1 cache line */
#define        L1_CACHE_SHIFT  2
#define        L1_CACHE_BYTES  (1 << L1_CACHE_SHIFT)

/* m68k-elf-gcc  2.95.2 doesn't like these */

#define __cacheline_aligned
#define ____cacheline_aligned

#endif
Tue Jul 19 12:52:49 PDT 2016
Fri Jul 22 16:13:33 PDT 2016
Sun, Jul 24, 2016  5:42:07 PM
Tue, Jul 26, 2016 12:36:17 AM
