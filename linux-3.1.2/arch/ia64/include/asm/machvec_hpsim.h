#ifndef _ASM_IA64_MACHVEC_HPSIM_h
#define _ASM_IA64_MACHVEC_HPSIM_h

extern ia64_mv_setup_t hpsim_setup;
extern ia64_mv_irq_init_t hpsim_irq_init;

/*
 * This stuff has dual use!
 *
 * For a generic kernel, the macros are used to initialize the
 * platform's machvec structure.  When compiling a non-generic kernel,
 * the macros are used directly.
 */
#define platform_name		"hpsim"
#define platform_setup		hpsim_setup
#define platform_irq_init	hpsim_irq_init

#endif /* _ASM_IA64_MACHVEC_HPSIM_h */
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:47 PDT 2016
Sun, Jul 24, 2016  1:21:22 PM
Mon, Jul 25, 2016  6:29:50 PM
Mon, Jul 25, 2016  7:42:55 PM
Tue, Jul 26, 2016  2:18:37 PM
