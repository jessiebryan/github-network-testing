/*
 * linux/include/linux/timeriomem-rng.h
 *
 * Copyright (c) 2009 Alexander Clouter <alex@digriz.org.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

struct timeriomem_rng_data {
	void __iomem		*address;

	/* measures in usecs */
	unsigned int		period;
};
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:01 PDT 2016
Sun, Jul 24, 2016  2:43:33 PM
Mon, Jul 25, 2016  9:17:34 PM
