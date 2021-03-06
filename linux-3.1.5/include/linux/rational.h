/*
 * rational fractions
 *
 * Copyright (C) 2009 emlix GmbH, Oskar Schirmer <os@emlix.com>
 *
 * helper functions when coping with rational numbers,
 * e.g. when calculating optimum numerator/denominator pairs for
 * pll configuration taking into account restricted register size
 */

#ifndef _LINUX_RATIONAL_H
#define _LINUX_RATIONAL_H

void rational_best_approximation(
	unsigned long given_numerator, unsigned long given_denominator,
	unsigned long max_numerator, unsigned long max_denominator,
	unsigned long *best_numerator, unsigned long *best_denominator);

#endif /* _LINUX_RATIONAL_H */
Tue Jul 19 12:36:32 PDT 2016
Fri Jul 22 15:42:53 PDT 2016
Sun, Jul 24, 2016  1:51:34 PM
Mon, Jul 25, 2016  8:18:29 PM
