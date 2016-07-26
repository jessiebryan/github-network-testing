/*
 * Copyright (C) 2004 Jeff Dike (jdike@addtoit.com)
 * Licensed under the GPL
 */

#ifndef __VM_FLAGS_I386_H
#define __VM_FLAGS_I386_H

#define VM_DATA_DEFAULT_FLAGS \
	(VM_READ | VM_WRITE | \
	((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0 ) | \
		 VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#endif
Tue Jul 19 12:38:05 PDT 2016
Fri Jul 22 15:45:43 PDT 2016
Sun, Jul 24, 2016  2:12:43 PM
Mon, Jul 25, 2016  8:43:15 PM
