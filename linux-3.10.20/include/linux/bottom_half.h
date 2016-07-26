#ifndef _LINUX_BH_H
#define _LINUX_BH_H

extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);

#endif /* _LINUX_BH_H */
Tue Jul 19 12:48:01 PDT 2016
Fri Jul 22 16:04:22 PDT 2016
Sun, Jul 24, 2016  4:33:17 PM
Mon, Jul 25, 2016 11:20:07 PM
