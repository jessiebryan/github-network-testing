#include <linux/mmc/host.h>
#include <linux/platform_data/mmc-omap.h>

#define OMAP24XX_NR_MMC		2
#define OMAP2420_MMC_SIZE	OMAP1_MMC_SIZE
#define OMAP2_MMC1_BASE		0x4809c000

#define OMAP4_MMC_REG_OFFSET	0x100

#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
void omap242x_init_mmc(struct omap_mmc_platform_data **mmc_data);
#else
static inline void omap242x_init_mmc(struct omap_mmc_platform_data **mmc_data)
{
}
#endif

struct omap_hwmod;
int omap_msdi_reset(struct omap_hwmod *oh);

/* called from board-specific card detection service routine */
extern void omap_mmc_notify_cover_event(struct device *dev, int slot,
					int is_closed);
Tue Jul 19 12:46:57 PDT 2016
Fri Jul 22 16:02:22 PDT 2016
Sun, Jul 24, 2016  4:17:44 PM
Mon, Jul 25, 2016 11:02:53 PM
