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
Tue Jul 19 12:44:14 PDT 2016
Fri Jul 22 15:57:16 PDT 2016
Sun, Jul 24, 2016  3:38:00 PM
