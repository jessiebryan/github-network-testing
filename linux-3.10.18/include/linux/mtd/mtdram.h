#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:46:47 PDT 2016
Fri Jul 22 16:02:03 PDT 2016
Sun, Jul 24, 2016  4:15:19 PM
Mon, Jul 25, 2016 11:00:11 PM
