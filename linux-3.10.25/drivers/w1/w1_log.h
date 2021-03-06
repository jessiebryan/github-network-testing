/*
 *	w1_log.h
 *
 * Copyright (c) 2004 Evgeniy Polyakov <zbr@ioremap.net>
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef __W1_LOG_H
#define __W1_LOG_H

#define DEBUG

#ifdef W1_DEBUG
#  define assert(expr) do {} while (0)
#else
#  define assert(expr) \
        if(unlikely(!(expr))) {				        \
        printk(KERN_ERR "Assertion failed! %s,%s,%s,line=%d\n",	\
	#expr, __FILE__, __func__, __LINE__);		        \
        }
#endif

#endif /* __W1_LOG_H */

Tue Jul 19 12:51:12 PDT 2016
Fri Jul 22 16:10:24 PDT 2016
Sun, Jul 24, 2016  5:19:10 PM
Tue, Jul 26, 2016 12:10:58 AM
