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
Tue Jul 19 12:38:18 PDT 2016
Fri Jul 22 15:46:08 PDT 2016
Sun, Jul 24, 2016  2:15:43 PM
Mon, Jul 25, 2016  8:46:34 PM
