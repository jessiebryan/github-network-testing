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
Tue Jul 19 12:51:54 PDT 2016
Fri Jul 22 16:11:46 PDT 2016
Sun, Jul 24, 2016  5:28:56 PM
Tue, Jul 26, 2016 12:21:44 AM
