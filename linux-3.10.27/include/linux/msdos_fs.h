#ifndef _LINUX_MSDOS_FS_H
#define _LINUX_MSDOS_FS_H

#include <uapi/linux/msdos_fs.h>

/* media of boot sector */
static inline int fat_valid_media(u8 media)
{
	return 0xf8 <= media || media == 0xf0;
}
#endif /* !_LINUX_MSDOS_FS_H */
Tue Jul 19 12:52:34 PDT 2016
Fri Jul 22 16:13:04 PDT 2016
Sun, Jul 24, 2016  5:38:46 PM
Tue, Jul 26, 2016 12:32:35 AM
