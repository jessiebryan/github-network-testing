/*
 *	Variables and functions used by the code in sleep.c
 */

#include <asm/realmode.h>

extern unsigned long saved_video_mode;
extern long saved_magic;

extern int wakeup_pmode_return;

extern u8 wake_sleep_flags;

extern unsigned long acpi_copy_wakeup_routine(unsigned long);
extern void wakeup_long64(void);

extern void do_suspend_lowlevel(void);
Tue Jul 19 12:43:22 PDT 2016
Fri Jul 22 15:55:40 PDT 2016
Sun, Jul 24, 2016  3:25:42 PM
Mon, Jul 25, 2016 10:04:59 PM
