#ifndef _ASM_X86_BUGS_H
#define _ASM_X86_BUGS_H

extern void check_bugs(void);

#if defined(CONFIG_CPU_SUP_INTEL) && defined(CONFIG_X86_32)
int ppro_with_ram_bug(void);
#else
static inline int ppro_with_ram_bug(void) { return 0; }
#endif

#endif /* _ASM_X86_BUGS_H */
Tue Jul 19 12:52:19 PDT 2016
Fri Jul 22 16:12:35 PDT 2016
Sun, Jul 24, 2016  5:35:02 PM
Tue, Jul 26, 2016 12:28:28 AM
