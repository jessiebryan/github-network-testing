/* ----------------------------------------------------------------------- *
 *   
 *   Copyright 2001 H. Peter Anvin - All Rights Reserved
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, Inc., 675 Mass Ave, Cambridge MA 02139,
 *   USA; either version 2 of the License, or (at your option) any later
 *   version; incorporated herein by reference.
 *
 * ----------------------------------------------------------------------- */

/*
 * Prototypes for functions exported from the compressed isofs subsystem
 */

#ifdef CONFIG_ZISOFS
extern const struct address_space_operations zisofs_aops;
extern int __init zisofs_init(void);
extern void zisofs_cleanup(void);
#endif
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:17 PDT 2016
Sun, Jul 24, 2016  1:17:31 PM
Mon, Jul 25, 2016  6:25:13 PM
Mon, Jul 25, 2016  7:38:23 PM
Tue, Jul 26, 2016  2:14:17 PM
