/****************************************************************

Siano Mobile Silicon, Inc.
MDTV receiver kernel modules.
Copyright (C) 2006-2009, Uri Shkolnik

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

 This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

****************************************************************/

#ifndef __SMS_ENDIAN_H__
#define __SMS_ENDIAN_H__

#include <asm/byteorder.h>

extern void smsendian_handle_tx_message(void *buffer);
extern void smsendian_handle_rx_message(void *buffer);
extern void smsendian_handle_message_header(void *msg);

#endif /* __SMS_ENDIAN_H__ */

Tue Jul 19 12:39:22 PDT 2016
Fri Jul 22 15:48:18 PDT 2016
Sun, Jul 24, 2016  2:31:04 PM
