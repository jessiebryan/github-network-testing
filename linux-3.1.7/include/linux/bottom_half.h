#ifndef _LINUX_BH_H
#define _LINUX_BH_H

extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);

#endif /* _LINUX_BH_H */
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:53 PDT 2016
Sun, Jul 24, 2016  1:59:09 PM
Mon, Jul 25, 2016  8:27:28 PM
