/*
 * reboot.h - shutdown/reboot header
 *
 * Copyright 2004-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __ASM_REBOOT_H__
#define __ASM_REBOOT_H__

/* optional board specific hooks */
extern void native_machine_restart(char *cmd);
extern void native_machine_halt(void);
extern void native_machine_power_off(void);

/* common reboot workarounds */
extern void bfin_reset_boot_spi_cs(unsigned short pin);

#endif
Tue Jul 19 12:48:15 PDT 2016
Fri Jul 22 16:04:48 PDT 2016
Sun, Jul 24, 2016  4:36:42 PM
Mon, Jul 25, 2016 11:23:55 PM
