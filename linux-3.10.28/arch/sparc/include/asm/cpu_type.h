#ifndef __ASM_CPU_TYPE_H
#define __ASM_CPU_TYPE_H

/*
 * Sparc (general) CPU types
 */
enum sparc_cpu {
  sun4m       = 0x00,
  sun4d       = 0x01,
  sun4e       = 0x02,
  sun4u       = 0x03, /* V8 ploos ploos */
  sun_unknown = 0x04,
  ap1000      = 0x05, /* almost a sun4m */
  sparc_leon  = 0x06, /* Leon SoC */
};

#ifdef CONFIG_SPARC32
extern enum sparc_cpu sparc_cpu_model;

#define SUN4M_NCPUS            4              /* Architectural limit of sun4m. */

#else

#define sparc_cpu_model sun4u

#endif

#endif /* __ASM_CPU_TYPE_H */
Tue Jul 19 12:52:56 PDT 2016
Fri Jul 22 16:13:48 PDT 2016
Sun, Jul 24, 2016  5:43:57 PM
Tue, Jul 26, 2016 12:38:19 AM
