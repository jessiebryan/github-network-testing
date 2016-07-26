/*
 *	Variables and functions used by the code in sleep.c
 */

#include <asm/trampoline.h>

extern unsigned long saved_video_mode;
extern long saved_magic;

extern int wakeup_pmode_return;

extern unsigned long acpi_copy_wakeup_routine(unsigned long);
extern void wakeup_long64(void);

extern void do_suspend_lowlevel(void);
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:19 PDT 2016
Sun, Jul 24, 2016  1:40:00 PM
Mon, Jul 25, 2016  8:04:52 PM
Tue, Jul 26, 2016  2:39:14 PM
