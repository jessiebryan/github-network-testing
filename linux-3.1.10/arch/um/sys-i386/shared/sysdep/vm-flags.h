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
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:15:00 PM
Mon, Jul 25, 2016  6:22:11 PM
Mon, Jul 25, 2016  7:35:25 PM
Tue, Jul 26, 2016  2:11:25 PM
