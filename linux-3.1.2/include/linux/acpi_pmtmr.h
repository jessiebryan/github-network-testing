#ifndef _ACPI_PMTMR_H_
#define _ACPI_PMTMR_H_

#include <linux/clocksource.h>

/* Number of PMTMR ticks expected during calibration run */
#define PMTMR_TICKS_PER_SEC 3579545

/* limit it to 24 bits */
#define ACPI_PM_MASK CLOCKSOURCE_MASK(24)

/* Overrun value */
#define ACPI_PM_OVRRUN	(1<<24)

#ifdef CONFIG_X86_PM_TIMER

extern u32 acpi_pm_read_verified(void);
extern u32 pmtmr_ioport;

static inline u32 acpi_pm_read_early(void)
{
	if (!pmtmr_ioport)
		return 0;
	/* mask the output to 24 bits */
	return acpi_pm_read_verified() & ACPI_PM_MASK;
}

#else

static inline u32 acpi_pm_read_early(void)
{
	return 0;
}

#endif

#endif

Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:06 PM
Mon, Jul 25, 2016  6:35:31 PM
Mon, Jul 25, 2016  7:48:27 PM
Tue, Jul 26, 2016  2:23:50 PM
