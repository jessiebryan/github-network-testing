/*
 * Copyright (C) 2000 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __UM_CURRENT_H
#define __UM_CURRENT_H

#include "linux/thread_info.h"

#define current (current_thread_info()->task)

#endif
Tue Jul 19 12:36:17 PDT 2016
Fri Jul 22 15:42:22 PDT 2016
