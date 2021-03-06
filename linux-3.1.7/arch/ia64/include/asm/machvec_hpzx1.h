#ifndef _ASM_IA64_MACHVEC_HPZX1_h
#define _ASM_IA64_MACHVEC_HPZX1_h

extern ia64_mv_setup_t			dig_setup;
extern ia64_mv_dma_init			sba_dma_init;

/*
 * This stuff has dual use!
 *
 * For a generic kernel, the macros are used to initialize the
 * platform's machvec structure.  When compiling a non-generic kernel,
 * the macros are used directly.
 */
#define platform_name				"hpzx1"
#define platform_setup				dig_setup
#define platform_dma_init			sba_dma_init

#endif /* _ASM_IA64_MACHVEC_HPZX1_h */
Tue Jul 19 12:36:43 PDT 2016
Fri Jul 22 15:43:15 PDT 2016
Sun, Jul 24, 2016  1:54:22 PM
Mon, Jul 25, 2016  8:21:47 PM
