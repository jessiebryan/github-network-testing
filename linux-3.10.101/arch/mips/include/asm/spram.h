#ifndef _MIPS_SPRAM_H
#define _MIPS_SPRAM_H

#ifdef CONFIG_CPU_MIPSR2
extern __init void spram_config(void);
#else
static inline void spram_config(void) { };
#endif /* CONFIG_CPU_MIPSR2 */

#endif /* _MIPS_SPRAM_H */
Tue Jul 19 12:40:31 PDT 2016
Fri Jul 22 15:50:33 PDT 2016
Sun, Jul 24, 2016  2:47:22 PM
Mon, Jul 25, 2016  9:21:55 PM
