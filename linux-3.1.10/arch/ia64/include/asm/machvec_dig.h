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
#define platform_name		"dig"
#define platform_setup		dig_setup

#endif /* _ASM_IA64_MACHVEC_DIG_h */
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:41 PDT 2016
Sun, Jul 24, 2016  1:13:08 PM
Mon, Jul 25, 2016  6:19:58 PM
Mon, Jul 25, 2016  7:33:13 PM
Tue, Jul 26, 2016  2:09:22 PM
