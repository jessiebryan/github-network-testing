/* Unusual Devices File for the Freecom USB/IDE adaptor
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

#if defined(CONFIG_USB_STORAGE_FREECOM) || \
		defined(CONFIG_USB_STORAGE_FREECOM_MODULE)

UNUSUAL_DEV(  0x07ab, 0xfc01, 0x0000, 0x9999,
		"Freecom",
		"USB-IDE",
		USB_SC_QIC, USB_PR_FREECOM, init_freecom, 0),

#endif /* defined(CONFIG_USB_STORAGE_FREECOM) || ... */
Tue Jul 19 12:34:21 PDT 2016
Fri Jul 22 15:39:19 PDT 2016
Sun, Jul 24, 2016  1:25:36 PM
Mon, Jul 25, 2016  6:34:55 PM
Mon, Jul 25, 2016  7:47:52 PM
Tue, Jul 26, 2016  2:23:16 PM
