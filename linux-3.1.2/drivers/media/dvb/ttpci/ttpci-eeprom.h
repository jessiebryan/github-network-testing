/*
    Retrieve encoded MAC address from ATMEL ttpci_eeprom serial 2-wire EEPROM,
    decode it and store it in associated adapter net device

    Robert Schlabbach	GMX
    Michael Glaum	KVH Industries
    Holger Waechtler	Convergence

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#ifndef __TTPCI_EEPROM_H__
#define __TTPCI_EEPROM_H__

#include <linux/types.h>
#include <linux/i2c.h>

extern int ttpci_eeprom_parse_mac(struct i2c_adapter *adapter, u8 *propsed_mac);

#endif
Tue Jul 19 12:34:07 PDT 2016
Fri Jul 22 15:39:07 PDT 2016
Sun, Jul 24, 2016  1:24:05 PM
Mon, Jul 25, 2016  6:33:05 PM
Mon, Jul 25, 2016  7:46:05 PM
Tue, Jul 26, 2016  2:21:37 PM
