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
Tue Jul 19 12:38:18 PDT 2016
Fri Jul 22 15:46:07 PDT 2016
Sun, Jul 24, 2016  2:15:37 PM
Mon, Jul 25, 2016  8:46:26 PM
