#ifndef _MIPS_SPRAM_H
#define _MIPS_SPRAM_H

#ifdef CONFIG_CPU_MIPSR2
extern __init void spram_config(void);
#else
static inline void spram_config(void) { };
#endif /* CONFIG_CPU_MIPSR2 */

#endif /* _MIPS_SPRAM_H */
Tue Jul 19 12:36:46 PDT 2016
Fri Jul 22 15:43:21 PDT 2016
Sun, Jul 24, 2016  1:55:04 PM
Mon, Jul 25, 2016  8:22:37 PM
