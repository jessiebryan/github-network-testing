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
Tue Jul 19 12:37:07 PDT 2016
Fri Jul 22 15:44:00 PDT 2016
Sun, Jul 24, 2016  1:59:59 PM
Mon, Jul 25, 2016  8:28:27 PM
