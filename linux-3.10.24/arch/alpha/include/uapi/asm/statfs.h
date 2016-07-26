#ifndef _ALPHA_STATFS_H
#define _ALPHA_STATFS_H

#include <linux/types.h>

/* Alpha is the only 64-bit platform with 32-bit statfs. And doesn't
   even seem to implement statfs64 */
#define __statfs_word __u32

#include <asm-generic/statfs.h>

#endif
Tue Jul 19 12:50:07 PDT 2016
Fri Jul 22 16:08:19 PDT 2016
Sun, Jul 24, 2016  5:03:34 PM
Mon, Jul 25, 2016 11:53:41 PM
