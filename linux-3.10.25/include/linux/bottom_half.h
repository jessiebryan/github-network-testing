#ifndef _LINUX_BH_H
#define _LINUX_BH_H

extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);

#endif /* _LINUX_BH_H */
Tue Jul 19 12:51:15 PDT 2016
Fri Jul 22 16:10:28 PDT 2016
Sun, Jul 24, 2016  5:19:39 PM
Tue, Jul 26, 2016 12:11:31 AM
