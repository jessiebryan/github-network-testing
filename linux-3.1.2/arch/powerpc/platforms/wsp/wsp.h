#ifndef __WSP_H
#define __WSP_H

#include <asm/wsp.h>

extern void wsp_setup_pci(void);
extern void scom_init_wsp(void);

extern void a2_setup_smp(void);
extern int a2_scom_startup_cpu(unsigned int lcpu, int thr_idx,
			       struct device_node *np);
int smp_a2_cpu_bootable(unsigned int nr);
int __devinit smp_a2_kick_cpu(int nr);

void opb_pic_init(void);

#endif /*  __WSP_H */
Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:55 PDT 2016
Sun, Jul 24, 2016  1:22:35 PM
Mon, Jul 25, 2016  6:31:17 PM
Mon, Jul 25, 2016  7:44:20 PM
Tue, Jul 26, 2016  2:19:57 PM
