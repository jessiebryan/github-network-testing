#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:53:13 PDT 2016
Fri Jul 22 16:14:21 PDT 2016
Sun, Jul 24, 2016  5:48:06 PM
Tue, Jul 26, 2016 12:42:51 AM
