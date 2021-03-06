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
Tue Jul 19 12:48:24 PDT 2016
Fri Jul 22 16:05:05 PDT 2016
Sun, Jul 24, 2016  4:38:48 PM
Mon, Jul 25, 2016 11:26:16 PM
