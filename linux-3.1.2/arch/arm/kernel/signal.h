/*
 *  linux/arch/arm/kernel/signal.h
 *
 *  Copyright (C) 2005-2009 Russell King.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#define KERN_SIGRETURN_CODE	(CONFIG_VECTORS_BASE + 0x00000500)
#define KERN_RESTART_CODE	(KERN_SIGRETURN_CODE + sizeof(sigreturn_codes))

extern const unsigned long sigreturn_codes[7];
extern const unsigned long syscall_restart_code[2];
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:52 PM
Mon, Jul 25, 2016  6:28:03 PM
Mon, Jul 25, 2016  7:41:09 PM
Tue, Jul 26, 2016  2:16:54 PM
