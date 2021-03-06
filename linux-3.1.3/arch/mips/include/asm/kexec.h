/*
 * kexec.h for kexec
 * Created by <nschichan@corp.free.fr> on Thu Oct 12 14:59:34 2006
 *
 * This source code is licensed under the GNU General Public License,
 * Version 2.  See the file COPYING for more details.
 */

#ifndef _MIPS_KEXEC
# define _MIPS_KEXEC

/* Maximum physical address we can use pages from */
#define KEXEC_SOURCE_MEMORY_LIMIT (0x20000000)
/* Maximum address we can reach in physical address mode */
#define KEXEC_DESTINATION_MEMORY_LIMIT (0x20000000)
 /* Maximum address we can use for the control code buffer */
#define KEXEC_CONTROL_MEMORY_LIMIT (0x20000000)

#define KEXEC_CONTROL_PAGE_SIZE 4096

/* The native architecture */
#define KEXEC_ARCH KEXEC_ARCH_MIPS

static inline void crash_setup_regs(struct pt_regs *newregs,
				    struct pt_regs *oldregs)
{
	/* Dummy implementation for now */
}

#endif /* !_MIPS_KEXEC */
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:05 PM
Mon, Jul 25, 2016  6:40:16 PM
Mon, Jul 25, 2016  7:53:07 PM
Tue, Jul 26, 2016  2:28:15 PM
