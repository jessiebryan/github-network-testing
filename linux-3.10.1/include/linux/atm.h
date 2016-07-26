/* atm.h - general ATM declarations */
#ifndef _LINUX_ATM_H
#define _LINUX_ATM_H

#include <uapi/linux/atm.h>

#ifdef CONFIG_COMPAT
#include <linux/compat.h>
struct compat_atmif_sioc {
	int number;
	int length;
	compat_uptr_t arg;
};
#endif
#endif
Tue Jul 19 12:38:54 PDT 2016
Fri Jul 22 15:47:21 PDT 2016
Sun, Jul 24, 2016  2:24:12 PM
Mon, Jul 25, 2016  8:56:00 PM
