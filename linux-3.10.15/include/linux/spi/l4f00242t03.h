/*
 * l4f00242t03.h -- Platform glue for Epson L4F00242T03 LCD
 *
 * Copyright (c) 2009 Alberto Panizzo <maramaopercheseimorto@gmail.com>
 * Based on Marek Vasut work in lms283gf05.h
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _INCLUDE_LINUX_SPI_L4F00242T03_H_
#define _INCLUDE_LINUX_SPI_L4F00242T03_H_

struct l4f00242t03_pdata {
	unsigned int	reset_gpio;
	unsigned int	data_enable_gpio;
};

#endif /* _INCLUDE_LINUX_SPI_L4F00242T03_H_ */
Tue Jul 19 12:44:57 PDT 2016
Fri Jul 22 15:58:32 PDT 2016
Sun, Jul 24, 2016  3:48:01 PM
Mon, Jul 25, 2016 10:29:47 PM
