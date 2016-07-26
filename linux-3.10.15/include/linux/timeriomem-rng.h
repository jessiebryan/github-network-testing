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
Tue Jul 19 12:44:57 PDT 2016
Fri Jul 22 15:58:33 PDT 2016
Sun, Jul 24, 2016  3:48:05 PM
Mon, Jul 25, 2016 10:29:52 PM
