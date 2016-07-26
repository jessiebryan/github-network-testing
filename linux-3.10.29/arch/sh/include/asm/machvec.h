/*
 * include/asm-sh/machvec.h
 *
 * Copyright 2000 Stuart Menefy (stuart.menefy@st.com)
 *
 * May be copied or modified under the terms of the GNU General Public
 * License.  See linux/COPYING for more information.
 */

#ifndef _ASM_SH_MACHVEC_H
#define _ASM_SH_MACHVEC_H

#include <linux/types.h>
#include <linux/time.h>
#include <generated/machtypes.h>

struct sh_machine_vector {
	void (*mv_setup)(char **cmdline_p);
	const char *mv_name;

	int (*mv_irq_demux)(int irq);
	void (*mv_init_irq)(void);

#ifdef CONFIG_HAS_IOPORT
	void __iomem *(*mv_ioport_map)(unsigned long port, unsigned int size);
	void (*mv_ioport_unmap)(void __iomem *);
#endif

	int (*mv_clk_init)(void);
	int (*mv_mode_pins)(void);

	void (*mv_mem_init)(void);
	void (*mv_mem_reserve)(void);
};

extern struct sh_machine_vector sh_mv;

#define get_system_type()	sh_mv.mv_name

#define __initmv \
	__used __section(.machvec.init)

#endif /* _ASM_SH_MACHVEC_H */
Tue Jul 19 12:53:34 PDT 2016
Fri Jul 22 16:15:02 PDT 2016
Sun, Jul 24, 2016  5:53:09 PM
Tue, Jul 26, 2016 12:48:28 AM
