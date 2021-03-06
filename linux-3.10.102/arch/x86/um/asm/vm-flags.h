/*
 * Copyright (C) 2004 Jeff Dike (jdike@addtoit.com)
 * Copyright 2003 PathScale, Inc.
 * Licensed under the GPL
 */

#ifndef __VM_FLAGS_X86_H
#define __VM_FLAGS_X86_H

#ifdef CONFIG_X86_32

#define VM_DATA_DEFAULT_FLAGS \
	(VM_READ | VM_WRITE | \
	((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0 ) | \
		 VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#else

#define VM_DATA_DEFAULT_FLAGS (VM_READ | VM_WRITE | VM_EXEC | \
	VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
#define VM_STACK_DEFAULT_FLAGS (VM_GROWSDOWN | VM_READ | VM_WRITE | \
	VM_EXEC | VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#endif
#endif
Tue Jul 19 12:41:16 PDT 2016
Fri Jul 22 15:52:03 PDT 2016
Sun, Jul 24, 2016  2:58:05 PM
Mon, Jul 25, 2016  9:34:02 PM
