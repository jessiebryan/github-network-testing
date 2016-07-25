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
Tue Jul 19 12:52:13 PDT 2016
Fri Jul 22 16:12:25 PDT 2016
Sun, Jul 24, 2016  5:33:46 PM
