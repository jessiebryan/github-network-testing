#ifndef _OMAP2_MCSPI_H
#define _OMAP2_MCSPI_H

#define OMAP2_MCSPI_REV 0
#define OMAP3_MCSPI_REV 1
#define OMAP4_MCSPI_REV 2

#define OMAP4_MCSPI_REG_OFFSET 0x100

struct omap2_mcspi_platform_config {
	unsigned short	num_cs;
	unsigned int regs_offset;
};

struct omap2_mcspi_dev_attr {
	unsigned short num_chipselect;
};

struct omap2_mcspi_device_config {
	unsigned turbo_mode:1;

	/* Do we want one channel enabled at the same time? */
	unsigned single_channel:1;
};

#endif
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:27 PM
Mon, Jul 25, 2016  6:19:09 PM
Mon, Jul 25, 2016  7:32:26 PM
Tue, Jul 26, 2016  2:08:38 PM
