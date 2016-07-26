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
Tue Jul 19 12:53:51 PDT 2016
Fri Jul 22 16:15:33 PDT 2016
Sun, Jul 24, 2016  5:56:59 PM
Tue, Jul 26, 2016 12:52:42 AM
