#include <linux/types.h>

/* platform data for the PL061 GPIO driver */

struct pl061_platform_data {
	/* number of the first GPIO */
	unsigned	gpio_base;

	/* number of the first IRQ.
	 * If the IRQ functionality in not desired this must be set to 0.
	 */
	unsigned	irq_base;

	u8		directions;	/* startup directions, 1: out, 0: in */
	u8		values;		/* startup values */
};
Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:13:00 PDT 2016
Sun, Jul 24, 2016  5:38:14 PM
Tue, Jul 26, 2016 12:31:59 AM
