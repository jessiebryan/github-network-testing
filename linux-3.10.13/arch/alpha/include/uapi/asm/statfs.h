#ifndef _ALPHA_STATFS_H
#define _ALPHA_STATFS_H

#include <linux/types.h>

/* Alpha is the only 64-bit platform with 32-bit statfs. And doesn't
   even seem to implement statfs64 */
#define __statfs_word __u32

#include <asm-generic/statfs.h>

#endif
Tue Jul 19 12:43:07 PDT 2016
Fri Jul 22 15:55:11 PDT 2016
Sun, Jul 24, 2016  3:21:56 PM
Mon, Jul 25, 2016 10:00:49 PM
