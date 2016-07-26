#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:40:52 PDT 2016
Fri Jul 22 15:51:13 PDT 2016
Sun, Jul 24, 2016  2:52:20 PM
Mon, Jul 25, 2016  9:27:31 PM
