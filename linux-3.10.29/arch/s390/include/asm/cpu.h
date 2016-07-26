/*
 *    Copyright IBM Corp. 2000, 2009
 *    Author(s): Hartmut Penner <hp@de.ibm.com>,
 *		 Martin Schwidefsky <schwidefsky@de.ibm.com>,
 *		 Christian Ehrhardt <ehrhardt@de.ibm.com>,
 */

#ifndef _ASM_S390_CPU_H
#define _ASM_S390_CPU_H

#define MAX_CPU_ADDRESS 255

#ifndef __ASSEMBLY__

#include <linux/types.h>

struct cpuid
{
	unsigned int version :	8;
	unsigned int ident   : 24;
	unsigned int machine : 16;
	unsigned int unused  : 16;
} __attribute__ ((packed, aligned(8)));

#endif /* __ASSEMBLY__ */
#endif /* _ASM_S390_CPU_H */
Tue Jul 19 12:53:33 PDT 2016
Fri Jul 22 16:15:00 PDT 2016
Sun, Jul 24, 2016  5:52:56 PM
Tue, Jul 26, 2016 12:48:14 AM
