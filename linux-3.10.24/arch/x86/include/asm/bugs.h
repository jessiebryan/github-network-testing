#ifndef _ASM_X86_BUGS_H
#define _ASM_X86_BUGS_H

extern void check_bugs(void);

#if defined(CONFIG_CPU_SUP_INTEL) && defined(CONFIG_X86_32)
int ppro_with_ram_bug(void);
#else
static inline int ppro_with_ram_bug(void) { return 0; }
#endif

#endif /* _ASM_X86_BUGS_H */
Tue Jul 19 12:50:22 PDT 2016
Fri Jul 22 16:08:47 PDT 2016
Sun, Jul 24, 2016  5:07:06 PM
Mon, Jul 25, 2016 11:57:39 PM
