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
Tue Jul 19 12:51:35 PDT 2016
Fri Jul 22 16:11:07 PDT 2016
Sun, Jul 24, 2016  5:24:27 PM
Tue, Jul 26, 2016 12:16:48 AM
