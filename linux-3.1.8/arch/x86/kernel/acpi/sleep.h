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
Tue Jul 19 12:37:28 PDT 2016
Fri Jul 22 15:44:39 PDT 2016
Sun, Jul 24, 2016  2:04:45 PM
