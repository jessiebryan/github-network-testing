/* -----------------------------------------------------------------------------
 * Copyright (c) 2011 Ozmo Inc
 * Released under the GNU General Public License Version 2 (GPLv2).
 * -----------------------------------------------------------------------------
 */
#ifndef _OZCDEV_H
#define _OZCDEV_H

int oz_cdev_register(void);
int oz_cdev_deregister(void);
int oz_cdev_init(void);
void oz_cdev_term(void);
int oz_cdev_start(struct oz_pd *pd, int resume);
void oz_cdev_stop(struct oz_pd *pd, int pause);
void oz_cdev_rx(struct oz_pd *pd, struct oz_elt *elt);

#endif /* _OZCDEV_H */
Tue Jul 19 12:53:07 PDT 2016
Fri Jul 22 16:14:09 PDT 2016
Sun, Jul 24, 2016  5:46:36 PM
Tue, Jul 26, 2016 12:41:13 AM
