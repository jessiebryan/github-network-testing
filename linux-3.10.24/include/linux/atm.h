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
Tue Jul 19 12:50:35 PDT 2016
Fri Jul 22 16:09:13 PDT 2016
Sun, Jul 24, 2016  5:10:18 PM
Tue, Jul 26, 2016 12:01:11 AM
