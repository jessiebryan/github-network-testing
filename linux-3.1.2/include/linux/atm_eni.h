/* atm_eni.h - Driver-specific declarations of the ENI driver (for use by
	       driver-specific utilities) */

/* Written 1995-2000 by Werner Almesberger, EPFL LRC/ICA */


#ifndef LINUX_ATM_ENI_H
#define LINUX_ATM_ENI_H

#include <linux/atmioc.h>


struct eni_multipliers {
	int tx,rx;	/* values are in percent and must be > 100 */
};


#define ENI_MEMDUMP     _IOW('a',ATMIOC_SARPRV,struct atmif_sioc)
                                                /* printk memory map */
#define ENI_SETMULT	_IOW('a',ATMIOC_SARPRV+7,struct atmif_sioc)
						/* set buffer multipliers */

#endif
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:24 PDT 2016
Sun, Jul 24, 2016  1:26:08 PM
Mon, Jul 25, 2016  6:35:33 PM
