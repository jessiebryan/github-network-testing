#include <linux/types.h>

/* platform data for the PL061 GPIO driver */

struct pl061_platform_data {
	/* number of the first GPIO */
	unsigned	gpio_base;

	/* number of the first IRQ.
	 * If the IRQ functionality in not desired this must be set to
	 * (unsigned) -1.
	 */
	unsigned	irq_base;

	u8		directions;	/* startup directions, 1: out, 0: in */
	u8		values;		/* startup values */
};
Tue Jul 19 12:36:29 PDT 2016
Fri Jul 22 15:42:47 PDT 2016
Sun, Jul 24, 2016  1:50:51 PM
Mon, Jul 25, 2016  8:17:38 PM
