/*
 * Performance event support - s390 specific definitions.
 *
 * Copyright IBM Corp. 2009, 2012
 * Author(s): Martin Schwidefsky <schwidefsky@de.ibm.com>
 *	      Hendrik Brueckner <brueckner@linux.vnet.ibm.com>
 */

#include <asm/cpu_mf.h>

/* CPU-measurement counter facility */
#define PERF_CPUM_CF_MAX_CTR		256

/* Per-CPU flags for PMU states */
#define PMU_F_RESERVED			0x1000
#define PMU_F_ENABLED			0x2000
Tue Jul 19 12:49:40 PDT 2016
Fri Jul 22 16:07:29 PDT 2016
Sun, Jul 24, 2016  4:57:05 PM
Mon, Jul 25, 2016 11:46:38 PM
