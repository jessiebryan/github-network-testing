#ifndef _LINUX_MSDOS_FS_H
#define _LINUX_MSDOS_FS_H

#include <uapi/linux/msdos_fs.h>

/* media of boot sector */
static inline int fat_valid_media(u8 media)
{
	return 0xf8 <= media || media == 0xf0;
}
#endif /* !_LINUX_MSDOS_FS_H */
Tue Jul 19 12:50:38 PDT 2016
Fri Jul 22 16:09:17 PDT 2016
Sun, Jul 24, 2016  5:10:50 PM
Tue, Jul 26, 2016 12:01:45 AM
