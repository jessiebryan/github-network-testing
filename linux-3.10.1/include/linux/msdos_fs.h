#ifndef _LINUX_MSDOS_FS_H
#define _LINUX_MSDOS_FS_H

#include <uapi/linux/msdos_fs.h>

/* media of boot sector */
static inline int fat_valid_media(u8 media)
{
	return 0xf8 <= media || media == 0xf0;
}
#endif /* !_LINUX_MSDOS_FS_H */
Tue Jul 19 12:38:56 PDT 2016
Fri Jul 22 15:47:24 PDT 2016
Sun, Jul 24, 2016  2:24:43 PM
Mon, Jul 25, 2016  8:56:35 PM
