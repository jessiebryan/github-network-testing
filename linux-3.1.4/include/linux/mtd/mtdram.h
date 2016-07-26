#ifndef __MTD_MTDRAM_H__
#define __MTD_MTDRAM_H__

#include <linux/mtd/mtd.h>
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
			unsigned long size, char *name);

#endif /* __MTD_MTDRAM_H__ */
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:43 PDT 2016
Sun, Jul 24, 2016  1:43:07 PM
Mon, Jul 25, 2016  8:08:31 PM
Tue, Jul 26, 2016  2:42:39 PM
