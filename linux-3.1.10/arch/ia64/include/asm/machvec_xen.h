#ifndef _ASM_IA64_MACHVEC_XEN_h
#define _ASM_IA64_MACHVEC_XEN_h

extern ia64_mv_setup_t			dig_setup;
extern ia64_mv_cpu_init_t		xen_cpu_init;
extern ia64_mv_irq_init_t		xen_irq_init;
extern ia64_mv_send_ipi_t		xen_platform_send_ipi;

/*
 * This stuff has dual use!
 *
 * For a generic kernel, the macros are used to initialize the
 * platform's machvec structure.  When compiling a non-generic kernel,
 * the macros are used directly.
 */
#define platform_name				"xen"
#define platform_setup				dig_setup
#define platform_cpu_init			xen_cpu_init
#define platform_irq_init			xen_irq_init
#define platform_send_ipi			xen_platform_send_ipi

#endif /* _ASM_IA64_MACHVEC_XEN_h */
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:41 PDT 2016
Sun, Jul 24, 2016  1:13:08 PM
Mon, Jul 25, 2016  6:19:58 PM
Mon, Jul 25, 2016  7:33:13 PM
Tue, Jul 26, 2016  2:09:23 PM
