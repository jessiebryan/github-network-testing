/*
 * rational fractions
 *
 * Copyright (C) 2009 emlix GmbH, Oskar Schirmer <oskar@scara.com>
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
Tue Jul 19 12:52:36 PDT 2016
Fri Jul 22 16:13:07 PDT 2016
Sun, Jul 24, 2016  5:39:02 PM
Tue, Jul 26, 2016 12:32:53 AM
