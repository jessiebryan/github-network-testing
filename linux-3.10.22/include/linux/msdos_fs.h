#ifndef _LINUX_MSDOS_FS_H
#define _LINUX_MSDOS_FS_H

#include <uapi/linux/msdos_fs.h>

/* media of boot sector */
static inline int fat_valid_media(u8 media)
{
	return 0xf8 <= media || media == 0xf0;
}
#endif /* !_LINUX_MSDOS_FS_H */
Tue Jul 19 12:49:20 PDT 2016
Fri Jul 22 16:06:50 PDT 2016
Sun, Jul 24, 2016  4:52:13 PM
Mon, Jul 25, 2016 11:41:15 PM
