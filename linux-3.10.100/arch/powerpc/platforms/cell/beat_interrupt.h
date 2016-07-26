/*
 * Celleb/Beat Interrupt controller
 *
 * (C) Copyright 2006 TOSHIBA CORPORATION
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef ASM_BEAT_PIC_H
#define ASM_BEAT_PIC_H
#ifdef __KERNEL__

extern void beatic_init_IRQ(void);
extern unsigned int beatic_get_irq(void);
extern void beatic_deinit_IRQ(void);

#endif
#endif /* ASM_BEAT_PIC_H */
Tue Jul 19 12:39:54 PDT 2016
Fri Jul 22 15:49:21 PDT 2016
Sun, Jul 24, 2016  2:38:40 PM
Mon, Jul 25, 2016  9:12:07 PM
