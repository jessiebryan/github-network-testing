/*
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_TIMEX_H
#define __ASM_TIMEX_H

/*
 * Use the current timer as a cycle counter since this is what we use for
 * the delay loop.
 */
#define get_cycles()	({ cycles_t c; read_current_timer(&c); c; })

#include <asm-generic/timex.h>

#define ARCH_HAS_READ_CURRENT_TIMER

#endif
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:39 PDT 2016
Sun, Jul 24, 2016  5:13:39 PM
Tue, Jul 26, 2016 12:04:51 AM
