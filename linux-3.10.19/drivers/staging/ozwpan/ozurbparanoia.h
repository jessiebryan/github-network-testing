#ifndef _OZURBPARANOIA_H
#define _OZURBPARANOIA_H
/* -----------------------------------------------------------------------------
 * Released under the GNU General Public License Version 2 (GPLv2).
 * Copyright (c) 2011 Ozmo Inc
 * -----------------------------------------------------------------------------
 */

#ifdef WANT_URB_PARANOIA
void oz_remember_urb(struct urb *urb);
int oz_forget_urb(struct urb *urb);
#else
#define oz_remember_urb(__x)
#define oz_forget_urb(__x)	0
#endif /* WANT_URB_PARANOIA */


#endif /* _OZURBPARANOIA_H */

Tue Jul 19 12:47:19 PDT 2016
Fri Jul 22 16:03:03 PDT 2016
Sun, Jul 24, 2016  4:23:05 PM
Mon, Jul 25, 2016 11:08:47 PM
