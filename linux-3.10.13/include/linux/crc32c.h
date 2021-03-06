#ifndef _LINUX_CRC32C_H
#define _LINUX_CRC32C_H

#include <linux/types.h>

extern u32 crc32c(u32 crc, const void *address, unsigned int length);

/* This macro exists for backwards-compatibility. */
#define crc32c_le crc32c

#endif	/* _LINUX_CRC32C_H */
Tue Jul 19 12:43:35 PDT 2016
Fri Jul 22 15:56:04 PDT 2016
Sun, Jul 24, 2016  3:28:46 PM
Mon, Jul 25, 2016 10:08:24 PM
