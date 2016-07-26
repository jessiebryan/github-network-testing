#ifndef _MIPS_SPRAM_H
#define _MIPS_SPRAM_H

#ifdef CONFIG_CPU_MIPSR2
extern __init void spram_config(void);
#else
static inline void spram_config(void) { };
#endif /* CONFIG_CPU_MIPSR2 */

#endif /* _MIPS_SPRAM_H */
Tue Jul 19 12:42:38 PDT 2016
Fri Jul 22 15:54:18 PDT 2016
Sun, Jul 24, 2016  3:15:00 PM
Mon, Jul 25, 2016  9:53:07 PM
