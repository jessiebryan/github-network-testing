/*
 * linux/include/linux/timeriomem-rng.h
 *
 * Copyright (c) 2009 Alexander Clouter <alex@digriz.org.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/completion.h>

struct timeriomem_rng_data {
	struct completion	completion;
	unsigned int		present:1;

	void __iomem		*address;

	/* measures in usecs */
	unsigned int		period;
};
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:30 PDT 2016
Sun, Jul 24, 2016  1:27:00 PM
Mon, Jul 25, 2016  6:36:35 PM
Mon, Jul 25, 2016  7:49:30 PM
Tue, Jul 26, 2016  2:24:49 PM
