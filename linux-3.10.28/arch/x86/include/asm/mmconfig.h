#ifndef _ASM_X86_MMCONFIG_H
#define _ASM_X86_MMCONFIG_H

#ifdef CONFIG_PCI_MMCONFIG
extern void __cpuinit fam10h_check_enable_mmcfg(void);
extern void __cpuinit check_enable_amd_mmconf_dmi(void);
#else
static inline void fam10h_check_enable_mmcfg(void) { }
static inline void check_enable_amd_mmconf_dmi(void) { }
#endif

#endif /* _ASM_X86_MMCONFIG_H */
Tue Jul 19 12:52:58 PDT 2016
Fri Jul 22 16:13:52 PDT 2016
Sun, Jul 24, 2016  5:44:25 PM
Tue, Jul 26, 2016 12:38:49 AM
