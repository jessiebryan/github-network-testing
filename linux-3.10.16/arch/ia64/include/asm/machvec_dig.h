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
Tue Jul 19 12:45:09 PDT 2016
Fri Jul 22 15:58:56 PDT 2016
Sun, Jul 24, 2016  3:51:07 PM
Mon, Jul 25, 2016 10:33:16 PM
