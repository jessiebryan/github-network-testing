/* -----------------------------------------------------------------------------
 * Copyright (c) 2011 Ozmo Inc
 * Released under the GNU General Public License Version 2 (GPLv2).
 * ---------------------------------------------------------------------------*/
#ifndef _OZHCD_H
#define _OZHCD_H

int oz_hcd_init(void);
void oz_hcd_term(void);
void *oz_hcd_pd_arrived(void *ctx);
void oz_hcd_pd_departed(void *ctx);
void oz_hcd_pd_reset(void *hpd, void *hport);

#endif /* _OZHCD_H */

Tue Jul 19 12:39:28 PDT 2016
Fri Jul 22 15:48:30 PDT 2016
Sun, Jul 24, 2016  2:32:26 PM
Mon, Jul 25, 2016  9:05:12 PM
