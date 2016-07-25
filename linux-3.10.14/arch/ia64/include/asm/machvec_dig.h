#ifndef _ASM_IA64_MACHVEC_DIG_h
#define _ASM_IA64_MACHVEC_DIG_h

extern ia64_mv_setup_t dig_setup;

/*
 * This stuff has dual use!
 *
 * For a generic kernel, the macros are used to initialize the
 * platform's machvec structure.  When compiling a non-generic kernel,
 * the macros are used directly.
 */
#define ia64_platform_name	"dig"
#define platform_setup		dig_setup

#endif /* _ASM_IA64_MACHVEC_DIG_h */
Tue Jul 19 12:43:52 PDT 2016
Fri Jul 22 15:56:33 PDT 2016
Sun, Jul 24, 2016  3:32:39 PM
