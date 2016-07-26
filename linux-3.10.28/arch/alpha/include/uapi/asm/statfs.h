#ifndef _ALPHA_STATFS_H
#define _ALPHA_STATFS_H

#include <linux/types.h>

/* Alpha is the only 64-bit platform with 32-bit statfs. And doesn't
   even seem to implement statfs64 */
#define __statfs_word __u32

#include <asm-generic/statfs.h>

#endif
Tue Jul 19 12:52:43 PDT 2016
Fri Jul 22 16:13:21 PDT 2016
Sun, Jul 24, 2016  5:40:45 PM
Tue, Jul 26, 2016 12:34:47 AM
