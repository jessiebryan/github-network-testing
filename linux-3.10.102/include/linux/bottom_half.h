#ifndef _LINUX_BH_H
#define _LINUX_BH_H

extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);

#endif /* _LINUX_BH_H */
Tue Jul 19 12:41:28 PDT 2016
Fri Jul 22 15:52:29 PDT 2016
Sun, Jul 24, 2016  3:01:03 PM
