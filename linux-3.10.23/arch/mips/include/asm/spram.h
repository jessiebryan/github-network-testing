#ifndef _MIPS_SPRAM_H
#define _MIPS_SPRAM_H

#ifdef CONFIG_CPU_MIPSR2
extern __init void spram_config(void);
#else
static inline void spram_config(void) { };
#endif /* CONFIG_CPU_MIPSR2 */

#endif /* _MIPS_SPRAM_H */
Tue Jul 19 12:49:38 PDT 2016
Fri Jul 22 16:07:24 PDT 2016
Sun, Jul 24, 2016  4:56:30 PM
Mon, Jul 25, 2016 11:45:59 PM
