/*
 * MTD device concatenation layer definitions
 *
 * Copyright © 2002      Robert Kaiser <rkaiser@sysgo.de>
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
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef MTD_CONCAT_H
#define MTD_CONCAT_H


struct mtd_info *mtd_concat_create(
    struct mtd_info *subdev[],  /* subdevices to concatenate */
    int num_devs,               /* number of subdevices      */
    const char *name);          /* name for the new device   */

void mtd_concat_destroy(struct mtd_info *mtd);

#endif

Tue Jul 19 12:48:41 PDT 2016
Fri Jul 22 16:05:38 PDT 2016
Sun, Jul 24, 2016  4:43:01 PM
Mon, Jul 25, 2016 11:30:55 PM
