#include <linux/mmc/host.h>
#include <linux/platform_data/mmc-omap.h>

#define OMAP15XX_NR_MMC		1
#define OMAP16XX_NR_MMC		2
#define OMAP1_MMC_SIZE		0x080
#define OMAP1_MMC1_BASE		0xfffb7800
#define OMAP1_MMC2_BASE		0xfffb7c00	/* omap16xx only */

#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
void omap1_init_mmc(struct omap_mmc_platform_data **mmc_data,
				int nr_controllers);
#else
static inline void omap1_init_mmc(struct omap_mmc_platform_data **mmc_data,
				int nr_controllers)
{
}
#endif
Tue Jul 19 12:38:27 PDT 2016
Fri Jul 22 15:46:27 PDT 2016
Sun, Jul 24, 2016  2:17:55 PM
Mon, Jul 25, 2016  8:49:00 PM
