#ifndef __M68K_FPU_H
#define __M68K_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#if defined(CONFIG_M68020) || defined(CONFIG_M68030)
#define FPSTATESIZE (216)
#elif defined(CONFIG_M68040)
#define FPSTATESIZE (96)
#elif defined(CONFIG_M68KFPU_EMU)
#define FPSTATESIZE (28)
#elif defined(CONFIG_COLDFIRE) && defined(CONFIG_MMU)
#define FPSTATESIZE (16)
#elif defined(CONFIG_M68060)
#define FPSTATESIZE (12)
#else
#define FPSTATESIZE (0)
#endif

#endif /* __M68K_FPU_H */
Tue Jul 19 12:50:53 PDT 2016
Fri Jul 22 16:09:47 PDT 2016
Sun, Jul 24, 2016  5:14:33 PM
Tue, Jul 26, 2016 12:05:52 AM
