#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:36 PDT 2016
Sun, Jul 24, 2016  1:34:53 PM
Mon, Jul 25, 2016  7:58:47 PM
Tue, Jul 26, 2016  2:33:31 PM
