/* Unusual Devices File for the Rio Karma
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if defined(CONFIG_USB_STORAGE_KARMA) || \
		defined(CONFIG_USB_STORAGE_KARMA_MODULE)

UNUSUAL_DEV(  0x045a, 0x5210, 0x0101, 0x0101,
		"Rio",
		"Rio Karma",
		USB_SC_SCSI, USB_PR_KARMA, rio_karma_init, 0),

#endif /* defined(CONFIG_USB_STORAGE_KARMA) || ... */
Tue Jul 19 12:35:53 PDT 2016
Fri Jul 22 15:41:35 PDT 2016
Sun, Jul 24, 2016  1:42:06 PM
Mon, Jul 25, 2016  8:07:19 PM
Tue, Jul 26, 2016  2:41:31 PM
