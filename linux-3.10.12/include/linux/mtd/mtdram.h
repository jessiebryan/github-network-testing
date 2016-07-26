#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:42:59 PDT 2016
Fri Jul 22 15:54:56 PDT 2016
Sun, Jul 24, 2016  3:19:58 PM
Mon, Jul 25, 2016  9:58:38 PM
