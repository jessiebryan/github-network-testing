/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASMARC_SEGMENT_H
#define __ASMARC_SEGMENT_H

#ifndef __ASSEMBLY__

typedef unsigned long mm_segment_t;

#define MAKE_MM_SEG(s)	((mm_segment_t) { (s) })

#define KERNEL_DS		MAKE_MM_SEG(0)
#define USER_DS			MAKE_MM_SEG(TASK_SIZE)

#define segment_eq(a, b)	((a) == (b))

#endif /* __ASSEMBLY__ */
#endif /* __ASMARC_SEGMENT_H */
Tue Jul 19 12:49:29 PDT 2016
Fri Jul 22 16:07:06 PDT 2016
Sun, Jul 24, 2016  4:54:14 PM
Mon, Jul 25, 2016 11:43:28 PM
