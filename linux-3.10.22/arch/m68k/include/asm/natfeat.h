/*
 * ARAnyM hardware support via Native Features (natfeats)
 *
 * Copyright (c) 2005 Petr Stehlik of ARAnyM dev team
 *
 * This software may be used and distributed according to the terms of
 * the GNU General Public License (GPL), incorporated herein by reference.
 */

#ifndef _NATFEAT_H
#define _NATFEAT_H

long nf_get_id(const char *feature_name);
long nf_call(long id, ...);

void nf_init(void);
void nf_shutdown(void);

void nfprint(const char *fmt, ...)
	__attribute__ ((format (printf, 1, 2)));

# endif /* _NATFEAT_H */
Tue Jul 19 12:48:56 PDT 2016
Fri Jul 22 16:06:07 PDT 2016
Sun, Jul 24, 2016  4:46:45 PM
Mon, Jul 25, 2016 11:35:06 PM
