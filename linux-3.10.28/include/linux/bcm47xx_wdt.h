#ifndef LINUX_BCM47XX_WDT_H_
#define LINUX_BCM47XX_WDT_H_

#include <linux/notifier.h>
#include <linux/timer.h>
#include <linux/types.h>
#include <linux/watchdog.h>


struct bcm47xx_wdt {
	u32 (*timer_set)(struct bcm47xx_wdt *, u32);
	u32 (*timer_set_ms)(struct bcm47xx_wdt *, u32);
	u32 max_timer_ms;

	void *driver_data;

	struct watchdog_device wdd;
	struct notifier_block notifier;

	struct timer_list soft_timer;
	atomic_t soft_ticks;
};

static inline void *bcm47xx_wdt_get_drvdata(struct bcm47xx_wdt *wdt)
{
	return wdt->driver_data;
}
#endif /* LINUX_BCM47XX_WDT_H_ */
Tue Jul 19 12:53:11 PDT 2016
Fri Jul 22 16:14:17 PDT 2016
Sun, Jul 24, 2016  5:47:35 PM
Tue, Jul 26, 2016 12:42:17 AM
