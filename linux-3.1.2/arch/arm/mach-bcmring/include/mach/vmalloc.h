/*
 *
 *  Copyright (C) 2000 Russell King.
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * Move VMALLOC_END to 0xf0000000 so that the vm space can range from
 * 0xe0000000 to 0xefffffff. This gives us 256 MB of vm space and handles
 * larger physical memory designs better.
 */
#define VMALLOC_END       0xf0000000UL
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:56 PM
Mon, Jul 25, 2016  6:28:07 PM
Mon, Jul 25, 2016  7:41:13 PM
