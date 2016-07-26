#ifndef __MACH_MXM_8X10_H
#define __MACH_MXM_8X10_H

#define MXM_8X10_ETH_PHYS	0x13000000

#if defined(CONFIG_MMC)

#define MXM_8X10_SD_nCD (72)
#define MXM_8X10_SD_WP (84)

extern void mxm_8x10_mmc_init(void);
#else
static inline void mxm_8x10_mmc_init(void) {}
#endif

extern void mxm_8x10_usb_host_init(void);
extern void mxm_8x10_ac97_init(void);

extern void mxm_8x10_barebones_init(void);

#endif /* __MACH_MXM_8X10_H */
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:38 PDT 2016
Sun, Jul 24, 2016  1:20:20 PM
Mon, Jul 25, 2016  6:28:36 PM
Mon, Jul 25, 2016  7:41:42 PM
Tue, Jul 26, 2016  2:17:25 PM
