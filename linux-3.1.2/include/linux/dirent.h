#ifndef _LINUX_DIRENT_H
#define _LINUX_DIRENT_H

struct linux_dirent64 {
	u64		d_ino;
	s64		d_off;
	unsigned short	d_reclen;
	unsigned char	d_type;
	char		d_name[0];
};

#endif
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:25 PDT 2016
Sun, Jul 24, 2016  1:26:15 PM
Mon, Jul 25, 2016  6:35:41 PM
Mon, Jul 25, 2016  7:48:38 PM
Tue, Jul 26, 2016  2:23:59 PM
