#ifndef _LINUX_BH_H
#define _LINUX_BH_H

extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);

#endif /* _LINUX_BH_H */
Tue Jul 19 12:51:54 PDT 2016
Fri Jul 22 16:11:46 PDT 2016
Sun, Jul 24, 2016  5:28:57 PM
Tue, Jul 26, 2016 12:21:45 AM
