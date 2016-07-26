/*
 *  include/asm-m68k/bugs.h
 *
 *  Copyright (C) 1994  Linus Torvalds
 */

/*
 * This is included by init/main.c to check for architecture-dependent bugs.
 *
 * Needs:
 *	void check_bugs(void);
 */

#ifdef CONFIG_MMU
extern void check_bugs(void);	/* in arch/m68k/kernel/setup.c */
#else
static void check_bugs(void)
{
}
#endif
Tue Jul 19 12:49:36 PDT 2016
Fri Jul 22 16:07:20 PDT 2016
Sun, Jul 24, 2016  4:55:53 PM
Mon, Jul 25, 2016 11:45:19 PM
