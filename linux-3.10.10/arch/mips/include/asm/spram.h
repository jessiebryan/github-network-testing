#ifndef _MIPS_SPRAM_H
#define _MIPS_SPRAM_H

#ifdef CONFIG_CPU_MIPSR2
extern __init void spram_config(void);
#else
static inline void spram_config(void) { };
#endif /* CONFIG_CPU_MIPSR2 */

#endif /* _MIPS_SPRAM_H */
Tue Jul 19 12:39:14 PDT 2016
Fri Jul 22 15:47:59 PDT 2016
Sun, Jul 24, 2016  2:28:57 PM
Mon, Jul 25, 2016  9:01:19 PM
