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
Tue Jul 19 12:37:58 PDT 2016
Fri Jul 22 15:45:30 PDT 2016
Sun, Jul 24, 2016  2:11:02 PM
Mon, Jul 25, 2016  8:41:24 PM
