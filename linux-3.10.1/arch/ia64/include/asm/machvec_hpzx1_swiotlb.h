#ifndef _ASM_IA64_MACHVEC_HPZX1_SWIOTLB_h
#define _ASM_IA64_MACHVEC_HPZX1_SWIOTLB_h

extern ia64_mv_setup_t				dig_setup;
extern ia64_mv_dma_get_ops			hwsw_dma_get_ops;

/*
 * This stuff has dual use!
 *
 * For a generic kernel, the macros are used to initialize the
 * platform's machvec structure.  When compiling a non-generic kernel,
 * the macros are used directly.
 */
#define ia64_platform_name			"hpzx1_swiotlb"
#define platform_setup				dig_setup
#define platform_dma_init			machvec_noop
#define platform_dma_get_ops			hwsw_dma_get_ops

#endif /* _ASM_IA64_MACHVEC_HPZX1_SWIOTLB_h */
Tue Jul 19 12:38:32 PDT 2016
Fri Jul 22 15:46:36 PDT 2016
Sun, Jul 24, 2016  2:18:58 PM
Mon, Jul 25, 2016  8:50:11 PM
