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
Tue Jul 19 12:46:31 PDT 2016
Fri Jul 22 16:01:36 PDT 2016
Sun, Jul 24, 2016  4:11:50 PM
Mon, Jul 25, 2016 10:56:19 PM
