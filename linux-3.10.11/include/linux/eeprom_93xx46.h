/*
 * Module: eeprom_93xx46
 * platform description for 93xx46 EEPROMs.
 */

struct eeprom_93xx46_platform_data {
	unsigned char	flags;
#define EE_ADDR8	0x01		/*  8 bit addr. cfg */
#define EE_ADDR16	0x02		/* 16 bit addr. cfg */
#define EE_READONLY	0x08		/* forbid writing */

	/*
	 * optional hooks to control additional logic
	 * before and after spi transfer.
	 */
	void (*prepare)(void *);
	void (*finish)(void *);
};
Tue Jul 19 12:42:18 PDT 2016
Fri Jul 22 15:53:43 PDT 2016
Sun, Jul 24, 2016  3:10:23 PM
Mon, Jul 25, 2016  9:47:53 PM
