/*
 * Copyright (C) 2008 Juergen Beisert (kernel@pengutronix.de)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef __ASM_ARCH_MXC_BOARD_PCM038_H__
#define __ASM_ARCH_MXC_BOARD_PCM038_H__

#ifndef __ASSEMBLY__
/*
 * This CPU module needs a baseboard to work. After basic initializing
 * its own devices, it calls the baseboard's init function.
 * TODO: Add your own baseboard init function and call it from
 * inside pcm038_init().
 *
 * This example here is for the development board. Refer pcm970-baseboard.c
 */

extern void pcm970_baseboard_init(void);

#endif

#endif /* __ASM_ARCH_MXC_BOARD_PCM038_H__ */
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:01 PDT 2016
Sun, Jul 24, 2016  1:45:23 PM
Mon, Jul 25, 2016  8:11:12 PM
Tue, Jul 26, 2016  2:45:09 PM
