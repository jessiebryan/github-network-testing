/* 
 * Copyright (C) 2002 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __MEM_H__
#define __MEM_H__

extern int phys_mapping(unsigned long phys, unsigned long long *offset_out);

extern unsigned long uml_physmem;
static inline unsigned long to_phys(void *virt)
{
	return(((unsigned long) virt) - uml_physmem);
}

static inline void *to_virt(unsigned long phys)
{
	return((void *) uml_physmem + phys);
}

#endif
Tue Jul 19 12:38:40 PDT 2016
Fri Jul 22 15:46:53 PDT 2016
Sun, Jul 24, 2016  2:20:56 PM
Mon, Jul 25, 2016  8:52:23 PM
