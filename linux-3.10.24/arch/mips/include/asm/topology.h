/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2007 by Ralf Baechle
 */
#ifndef __ASM_TOPOLOGY_H
#define __ASM_TOPOLOGY_H

#include <topology.h>

#ifdef CONFIG_SMP
#define smt_capable()	(smp_num_siblings > 1)
#endif

#endif /* __ASM_TOPOLOGY_H */
Tue Jul 19 12:50:16 PDT 2016
Fri Jul 22 16:08:38 PDT 2016
Sun, Jul 24, 2016  5:05:51 PM
Mon, Jul 25, 2016 11:56:15 PM
