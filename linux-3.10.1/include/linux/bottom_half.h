#ifndef _LINUX_BH_H
#define _LINUX_BH_H

extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);

#endif /* _LINUX_BH_H */
Tue Jul 19 12:38:54 PDT 2016
Fri Jul 22 15:47:21 PDT 2016
Sun, Jul 24, 2016  2:24:14 PM
Mon, Jul 25, 2016  8:56:02 PM
