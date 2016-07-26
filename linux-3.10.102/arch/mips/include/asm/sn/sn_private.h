#ifndef __ASM_SN_SN_PRIVATE_H
#define __ASM_SN_SN_PRIVATE_H

#include <asm/sn/types.h>

extern nasid_t master_nasid;

extern void cpu_node_probe(void);
extern cnodeid_t get_compact_nodeid(void);
extern void hub_rtc_init(cnodeid_t);
extern void cpu_time_init(void);
extern void per_cpu_init(void);
extern void install_cpu_nmi_handler(int slice);
extern void install_ipi(void);
extern void setup_replication_mask(void);
extern void replicate_kernel_text(void);
extern unsigned long node_getfirstfree(cnodeid_t);

#endif /* __ASM_SN_SN_PRIVATE_H */
Tue Jul 19 12:41:10 PDT 2016
Fri Jul 22 15:51:49 PDT 2016
Sun, Jul 24, 2016  2:56:35 PM
Mon, Jul 25, 2016  9:32:18 PM
