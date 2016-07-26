#ifndef _LINUX_MSDOS_FS_H
#define _LINUX_MSDOS_FS_H

#include <uapi/linux/msdos_fs.h>

/* media of boot sector */
static inline int fat_valid_media(u8 media)
{
	return 0xf8 <= media || media == 0xf0;
}
#endif /* !_LINUX_MSDOS_FS_H */
Tue Jul 19 12:44:16 PDT 2016
Fri Jul 22 15:57:19 PDT 2016
Sun, Jul 24, 2016  3:38:24 PM
Mon, Jul 25, 2016 10:19:08 PM
