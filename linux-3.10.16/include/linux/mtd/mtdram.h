#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:45:32 PDT 2016
Fri Jul 22 15:59:41 PDT 2016
Sun, Jul 24, 2016  3:56:53 PM
Mon, Jul 25, 2016 10:39:40 PM
