#ifndef __ASM_ARCH_NAND_H
#define __ASM_ARCH_NAND_H

struct nomadik_nand_platform_data {
	struct mtd_partition *parts;
	int nparts;
	int options;
	int (*init) (void);
	int (*exit) (void);
};

#define NAND_IO_DATA	0x40000000
#define NAND_IO_CMD	0x40800000
#define NAND_IO_ADDR	0x41000000

#endif				/* __ASM_ARCH_NAND_H */
Tue Jul 19 12:37:52 PDT 2016
Fri Jul 22 15:45:20 PDT 2016
