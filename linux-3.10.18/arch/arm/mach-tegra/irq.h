/*
 * Copyright (c) 2012, NVIDIA Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TEGRA_IRQ_H
#define __TEGRA_IRQ_H

bool tegra_pending_sgi(void);

#ifdef CONFIG_PM_SLEEP
int tegra_legacy_irq_syscore_init(void);
#else
static inline int tegra_legacy_irq_syscore_init(void) { return 0; }
#endif

#endif
Tue Jul 19 12:46:18 PDT 2016
Fri Jul 22 16:01:10 PDT 2016
Sun, Jul 24, 2016  4:08:44 PM
Mon, Jul 25, 2016 10:52:51 PM
