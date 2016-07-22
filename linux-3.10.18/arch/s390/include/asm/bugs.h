/*
 *  S390 version
 *    Copyright IBM Corp. 1999
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
Tue Jul 19 12:46:27 PDT 2016
Fri Jul 22 16:01:28 PDT 2016
