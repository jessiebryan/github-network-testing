/*
 * DaVinci vmalloc definitions
 *
 * Author: Kevin Hilman, MontaVista Software, Inc. <source@mvista.com>
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#include <mach/hardware.h>

/* Allow vmalloc range until the IO virtual range minus a 2M "hole" */
#define VMALLOC_END	  (IO_VIRT - (2<<20))
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:40 PDT 2016
Sun, Jul 24, 2016  1:28:14 PM
Mon, Jul 25, 2016  6:38:03 PM
Mon, Jul 25, 2016  7:50:57 PM
Tue, Jul 26, 2016  2:26:11 PM
