#ifndef _MIPS_SPRAM_H
#define _MIPS_SPRAM_H

#ifdef CONFIG_CPU_MIPSR2
extern __init void spram_config(void);
#else
static inline void spram_config(void) { };
#endif /* CONFIG_CPU_MIPSR2 */

#endif /* _MIPS_SPRAM_H */
Tue Jul 19 12:51:35 PDT 2016
Fri Jul 22 16:11:07 PDT 2016
Sun, Jul 24, 2016  5:24:27 PM
Tue, Jul 26, 2016 12:16:47 AM
