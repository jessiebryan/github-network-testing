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
Tue Jul 19 12:35:36 PDT 2016
Fri Jul 22 15:41:02 PDT 2016
Sun, Jul 24, 2016  1:37:53 PM
Mon, Jul 25, 2016  8:02:21 PM
Tue, Jul 26, 2016  2:36:52 PM
