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
Tue Jul 19 12:43:35 PDT 2016
Fri Jul 22 15:56:04 PDT 2016
Sun, Jul 24, 2016  3:28:47 PM
Mon, Jul 25, 2016 10:08:25 PM
