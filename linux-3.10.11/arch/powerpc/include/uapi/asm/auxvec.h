#ifndef _ASM_POWERPC_AUXVEC_H
#define _ASM_POWERPC_AUXVEC_H

/*
 * We need to put in some extra aux table entries to tell glibc what
 * the cache block size is, so it can use the dcbz instruction safely.
 */
#define AT_DCACHEBSIZE		19
#define AT_ICACHEBSIZE		20
#define AT_UCACHEBSIZE		21
/* A special ignored type value for PPC, for glibc compatibility.  */
#define AT_IGNOREPPC		22

/* The vDSO location. We have to use the same value as x86 for glibc's
 * sake :-)
 */
#define AT_SYSINFO_EHDR		33

#define AT_VECTOR_SIZE_ARCH 6 /* entries in ARCH_DLINFO */

#endif
Tue Jul 19 12:41:54 PDT 2016
Fri Jul 22 15:53:10 PDT 2016
Sun, Jul 24, 2016  3:06:15 PM
