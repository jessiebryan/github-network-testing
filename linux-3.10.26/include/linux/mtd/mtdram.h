#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:51:56 PDT 2016
Fri Jul 22 16:11:50 PDT 2016
Sun, Jul 24, 2016  5:29:28 PM
Tue, Jul 26, 2016 12:22:19 AM
