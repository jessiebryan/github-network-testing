/*
 * Image header stuff
 */
#ifndef _HEAD_H
#define _HEAD_H

#define LASAT_K_MAGIC0_VAL	0xfedeabba
#define LASAT_K_MAGIC1_VAL	0x00bedead

#ifndef _LANGUAGE_ASSEMBLY
#include <linux/types.h>
struct bootloader_header {
	u32 magic[2];
	u32 version;
	u32 image_start;
	u32 image_size;
	u32 kernel_start;
	u32 kernel_entry;
};
#endif

#endif /* _HEAD_H */
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:05 PM
Mon, Jul 25, 2016  6:40:16 PM
Mon, Jul 25, 2016  7:53:07 PM
Tue, Jul 26, 2016  2:28:15 PM
