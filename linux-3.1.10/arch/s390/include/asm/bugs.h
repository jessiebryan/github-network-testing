/*
 *  include/asm-s390/bugs.h
 *
 *  S390 version
 *    Copyright (C) 1999 IBM Deutschland Entwicklung GmbH, IBM Corporation
 *    Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com)
 *
 *  Derived from "include/asm-i386/bugs.h"
 *    Copyright (C) 1994  Linus Torvalds
 */

/*
 * This is included by init/main.c to check for architecture-dependent bugs.
 *
 * Needs:
 *      void check_bugs(void);
 */

static inline void check_bugs(void)
{
  /* s390 has no bugs ... */
}
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:21 PM
Mon, Jul 25, 2016  6:21:26 PM
Mon, Jul 25, 2016  7:34:40 PM
Tue, Jul 26, 2016  2:10:43 PM
