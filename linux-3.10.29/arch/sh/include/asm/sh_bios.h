#ifndef __ASM_SH_BIOS_H
#define __ASM_SH_BIOS_H

#ifdef CONFIG_SH_STANDARD_BIOS

/*
 * Copyright (C) 2000 Greg Banks, Mitch Davis
 * C API to interface to the standard LinuxSH BIOS
 * usually from within the early stages of kernel boot.
 */
extern void sh_bios_console_write(const char *buf, unsigned int len);
extern void sh_bios_gdb_detach(void);

extern void sh_bios_get_node_addr(unsigned char *node_addr);
extern void sh_bios_shutdown(unsigned int how);

extern void sh_bios_vbr_init(void);
extern void sh_bios_vbr_reload(void);

#else

static inline void sh_bios_vbr_init(void) { }
static inline void sh_bios_vbr_reload(void) { }

#endif /* CONFIG_SH_STANDARD_BIOS */

#endif /* __ASM_SH_BIOS_H */
Tue Jul 19 12:53:34 PDT 2016
Fri Jul 22 16:15:02 PDT 2016
Sun, Jul 24, 2016  5:53:10 PM
Tue, Jul 26, 2016 12:48:29 AM
