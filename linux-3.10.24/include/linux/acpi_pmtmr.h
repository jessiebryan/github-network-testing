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

Tue Jul 19 12:50:35 PDT 2016
Fri Jul 22 16:09:13 PDT 2016
Sun, Jul 24, 2016  5:10:17 PM
Tue, Jul 26, 2016 12:01:09 AM
