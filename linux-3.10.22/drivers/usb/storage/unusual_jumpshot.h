/* Unusual Devices File for the Lexar "Jumpshot" Compact Flash reader
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

#if defined(CONFIG_USB_STORAGE_JUMPSHOT) || \
		defined(CONFIG_USB_STORAGE_JUMPSHOT_MODULE)

UNUSUAL_DEV(  0x05dc, 0x0001, 0x0000, 0x0001,
		"Lexar",
		"Jumpshot USB CF Reader",
		USB_SC_SCSI, USB_PR_JUMPSHOT, NULL,
		US_FL_NEED_OVERRIDE),

#endif /* defined(CONFIG_USB_STORAGE_JUMPSHOT) || ... */
Tue Jul 19 12:49:15 PDT 2016
Fri Jul 22 16:06:42 PDT 2016
Sun, Jul 24, 2016  4:51:09 PM
Mon, Jul 25, 2016 11:40:03 PM
