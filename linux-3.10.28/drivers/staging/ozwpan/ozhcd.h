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

Tue Jul 19 12:53:07 PDT 2016
Fri Jul 22 16:14:09 PDT 2016
Sun, Jul 24, 2016  5:46:36 PM
Tue, Jul 26, 2016 12:41:13 AM
