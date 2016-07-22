/*
 * Copyright (C) 2000 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __UM_CURRENT_H
#define __UM_CURRENT_H

#include "linux/thread_info.h"

#define current (current_thread_info()->task)

#endif
Tue Jul 19 12:37:26 PDT 2016
Fri Jul 22 15:44:36 PDT 2016
