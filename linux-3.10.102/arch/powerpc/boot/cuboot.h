#ifndef _PPC_BOOT_CUBOOT_H_
#define _PPC_BOOT_CUBOOT_H_

void cuboot_init(unsigned long r4, unsigned long r5,
		 unsigned long r6, unsigned long r7,
		 unsigned long end_of_ram);

#define CUBOOT_INIT() \
	do { \
		memcpy(&bd, (bd_t *)r3, sizeof(bd)); \
		cuboot_init(r4, r5, r6, r7, bd.bi_memstart + bd.bi_memsize); \
	} while (0)

#endif /* _PPC_BOOT_CUBOOT_H_ */
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:52 PDT 2016
Sun, Jul 24, 2016  2:56:51 PM
Mon, Jul 25, 2016  9:32:37 PM
