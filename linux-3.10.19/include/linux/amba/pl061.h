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
Tue Jul 19 12:47:22 PDT 2016
Fri Jul 22 16:03:10 PDT 2016
Sun, Jul 24, 2016  4:24:01 PM
Mon, Jul 25, 2016 11:09:48 PM
