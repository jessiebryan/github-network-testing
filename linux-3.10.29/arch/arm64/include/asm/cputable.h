/*
 * arch/arm64/include/asm/cputable.h
 *
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
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
#ifndef __ASM_CPUTABLE_H
#define __ASM_CPUTABLE_H

struct cpu_info {
	unsigned int	cpu_id_val;
	unsigned int	cpu_id_mask;
	const char	*cpu_name;
	unsigned long	(*cpu_setup)(void);
};

extern struct cpu_info *lookup_processor_type(unsigned int);

#endif
Tue Jul 19 12:53:25 PDT 2016
Fri Jul 22 16:14:43 PDT 2016
Sun, Jul 24, 2016  5:50:52 PM
Tue, Jul 26, 2016 12:45:56 AM
