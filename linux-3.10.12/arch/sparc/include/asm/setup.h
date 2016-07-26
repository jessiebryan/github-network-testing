/*
 *	Just a place holder. 
 */
#ifndef _SPARC_SETUP_H
#define _SPARC_SETUP_H

#include <uapi/asm/setup.h>


extern char reboot_command[];

#ifdef CONFIG_SPARC32
/* The CPU that was used for booting
 * Only sun4d + leon may have boot_cpu_id != 0
 */
extern unsigned char boot_cpu_id;

extern unsigned long empty_zero_page;

extern int serial_console;
static inline int con_is_present(void)
{
	return serial_console ? 0 : 1;
}
#endif

extern void sun_do_break(void);
extern int stop_a_enabled;
extern int scons_pwroff;

#endif /* _SPARC_SETUP_H */
Tue Jul 19 12:42:42 PDT 2016
Fri Jul 22 15:54:26 PDT 2016
Sun, Jul 24, 2016  3:15:59 PM
Mon, Jul 25, 2016  9:54:13 PM
