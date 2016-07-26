/* 
 * Copyright (C) 2000 - 2003 Jeff Dike (jdike@addtoit.com)
 * Copyright 2003 PathScale, Inc.
 * Licensed under the GPL
 */

#ifndef __UM_ARCHPARAM_H
#define __UM_ARCHPARAM_H

#ifdef CONFIG_X86_32

#ifdef CONFIG_X86_PAE
#define LAST_PKMAP 512
#else
#define LAST_PKMAP 1024
#endif

#endif

#endif
Tue Jul 19 12:44:40 PDT 2016
Fri Jul 22 15:58:03 PDT 2016
Sun, Jul 24, 2016  3:44:11 PM
Mon, Jul 25, 2016 10:25:33 PM
