/* atm_he.h */

#ifndef LINUX_ATM_HE_H
#define LINUX_ATM_HE_H

#include <linux/atmioc.h>

#define HE_GET_REG	_IOW('a', ATMIOC_SARPRV, struct atmif_sioc)

#define HE_REGTYPE_PCI	1
#define HE_REGTYPE_RCM	2
#define HE_REGTYPE_TCM	3
#define HE_REGTYPE_MBOX	4

struct he_ioctl_reg {
	unsigned addr, val;
	char type;
};

#endif /* LINUX_ATM_HE_H */
Tue Jul 19 12:48:45 PDT 2016
Fri Jul 22 16:05:45 PDT 2016
Sun, Jul 24, 2016  4:43:59 PM
Mon, Jul 25, 2016 11:31:59 PM
