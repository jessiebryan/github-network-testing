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
Tue Jul 19 12:39:54 PDT 2016
Fri Jul 22 15:49:22 PDT 2016
Sun, Jul 24, 2016  2:38:45 PM
Mon, Jul 25, 2016  9:12:12 PM
