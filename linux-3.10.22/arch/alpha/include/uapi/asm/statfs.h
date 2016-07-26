#ifndef _ALPHA_STATFS_H
#define _ALPHA_STATFS_H

#include <linux/types.h>

/* Alpha is the only 64-bit platform with 32-bit statfs. And doesn't
   even seem to implement statfs64 */
#define __statfs_word __u32

#include <asm-generic/statfs.h>

#endif
Tue Jul 19 12:48:49 PDT 2016
Fri Jul 22 16:05:53 PDT 2016
Sun, Jul 24, 2016  4:45:00 PM
Mon, Jul 25, 2016 11:33:09 PM
