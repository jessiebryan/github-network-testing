/* MN10300 Mutex fastpath
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 *
 *
 * TODO: implement optimized primitives instead, or leave the generic
 * implementation in place, or pick the atomic_xchg() based generic
 * implementation. (see asm-generic/mutex-xchg.h for details)
 */
#include <asm-generic/mutex-null.h>
Tue Jul 19 12:45:48 PDT 2016
Fri Jul 22 16:00:14 PDT 2016
Sun, Jul 24, 2016  4:01:14 PM
Mon, Jul 25, 2016 10:44:31 PM
