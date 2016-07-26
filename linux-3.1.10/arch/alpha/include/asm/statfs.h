#ifndef _ALPHA_STATFS_H
#define _ALPHA_STATFS_H

#include <linux/types.h>

/* Alpha is the only 64-bit platform with 32-bit statfs. And doesn't
   even seem to implement statfs64 */
#define __statfs_word __u32

#include <asm-generic/statfs.h>

#endif
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:28 PDT 2016
Sun, Jul 24, 2016  1:11:29 PM
Mon, Jul 25, 2016  6:18:01 PM
Mon, Jul 25, 2016  7:31:20 PM
