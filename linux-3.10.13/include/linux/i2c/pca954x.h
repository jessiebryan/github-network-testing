/*
 *
 * pca954x.h - I2C multiplexer/switch support
 *
 * Copyright (c) 2008-2009 Rodolfo Giometti <giometti@linux.it>
 * Copyright (c) 2008-2009 Eurotech S.p.A. <info@eurotech.it>
 * Michael Lawnick <michael.lawnick.ext@nsn.com>
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#ifndef _LINUX_I2C_PCA954X_H
#define _LINUX_I2C_PCA954X_H

/* Platform data for the PCA954x I2C multiplexers */

/* Per channel initialisation data:
 * @adap_id: bus number for the adapter. 0 = don't care
 * @deselect_on_exit: set this entry to 1, if your H/W needs deselection
 *                    of this channel after transaction.
 *
 */
struct pca954x_platform_mode {
	int		adap_id;
	unsigned int	deselect_on_exit:1;
	unsigned int	class;
};

/* Per mux/switch data, used with i2c_register_board_info */
struct pca954x_platform_data {
	struct pca954x_platform_mode *modes;
	int num_modes;
};

#endif /* _LINUX_I2C_PCA954X_H */
Tue Jul 19 12:43:36 PDT 2016
Fri Jul 22 15:56:05 PDT 2016
Sun, Jul 24, 2016  3:28:54 PM
Mon, Jul 25, 2016 10:08:33 PM
