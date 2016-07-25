#ifndef _LINUX_CRC32C_H
#define _LINUX_CRC32C_H

#include <linux/types.h>

extern u32 crc32c(u32 crc, const void *address, unsigned int length);

/* This macro exists for backwards-compatibility. */
#define crc32c_le crc32c

#endif	/* _LINUX_CRC32C_H */
Tue Jul 19 12:39:32 PDT 2016
Fri Jul 22 15:48:38 PDT 2016
Sun, Jul 24, 2016  2:33:29 PM
