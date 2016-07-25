#ifndef _LINUX_FD_H
#define _LINUX_FD_H

#include <uapi/linux/fd.h>

#ifdef CONFIG_COMPAT
#include <linux/compat.h>

struct compat_floppy_struct {
	compat_uint_t	size;
	compat_uint_t	sect;
	compat_uint_t	head;
	compat_uint_t	track;
	compat_uint_t	stretch;
	unsigned char	gap;
	unsigned char	rate;
	unsigned char	spec1;
	unsigned char	fmt_gap;
	const compat_caddr_t name;
};

#define FDGETPRM32 _IOR(2, 0x04, struct compat_floppy_struct)
#endif
#endif
Tue Jul 19 12:42:18 PDT 2016
Fri Jul 22 15:53:43 PDT 2016
Sun, Jul 24, 2016  3:10:24 PM
