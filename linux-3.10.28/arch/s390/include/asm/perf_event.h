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
Tue Jul 19 12:52:55 PDT 2016
Fri Jul 22 16:13:46 PDT 2016
Sun, Jul 24, 2016  5:43:38 PM
Tue, Jul 26, 2016 12:37:58 AM
