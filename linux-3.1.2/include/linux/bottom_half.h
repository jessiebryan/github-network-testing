#ifndef _LINUX_BH_H
#define _LINUX_BH_H

extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);

#endif /* _LINUX_BH_H */
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:24 PDT 2016
Sun, Jul 24, 2016  1:26:10 PM
