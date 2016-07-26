#ifndef _LINUX_AVERAGE_H
#define _LINUX_AVERAGE_H

/* Exponentially weighted moving average (EWMA) */

/* For more documentation see lib/average.c */

struct ewma {
	unsigned long internal;
	unsigned long factor;
	unsigned long weight;
};

extern void ewma_init(struct ewma *avg, unsigned long factor,
		      unsigned long weight);

extern struct ewma *ewma_add(struct ewma *avg, unsigned long val);

/**
 * ewma_read() - Get average value
 * @avg: Average structure
 *
 * Returns the average value held in @avg.
 */
static inline unsigned long ewma_read(const struct ewma *avg)
{
	return avg->internal >> avg->factor;
}

#endif /* _LINUX_AVERAGE_H */
Tue Jul 19 12:53:50 PDT 2016
Fri Jul 22 16:15:32 PDT 2016
Sun, Jul 24, 2016  5:56:53 PM
Tue, Jul 26, 2016 12:52:35 AM
