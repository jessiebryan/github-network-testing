#ifndef __IXP4XX_NPE_H
#define __IXP4XX_NPE_H

#include <linux/kernel.h>

extern const char *npe_names[];

struct npe_regs {
	u32 exec_addr, exec_data, exec_status_cmd, exec_count;
	u32 action_points[4];
	u32 watchpoint_fifo, watch_count;
	u32 profile_count;
	u32 messaging_status, messaging_control;
	u32 mailbox_status, /*messaging_*/ in_out_fifo;
};

struct npe {
	struct resource *mem_res;
	struct npe_regs __iomem *regs;
	u32 regs_phys;
	int id;
	int valid;
};


static inline const char *npe_name(struct npe *npe)
{
	return npe_names[npe->id];
}

int npe_running(struct npe *npe);
int npe_send_message(struct npe *npe, const void *msg, const char *what);
int npe_recv_message(struct npe *npe, void *msg, const char *what);
int npe_send_recv_message(struct npe *npe, void *msg, const char *what);
int npe_load_firmware(struct npe *npe, const char *name, struct device *dev);
struct npe *npe_request(unsigned id);
void npe_release(struct npe *npe);

#endif /* __IXP4XX_NPE_H */
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:31 PDT 2016
Sun, Jul 24, 2016  1:11:51 PM
Mon, Jul 25, 2016  6:18:26 PM
Mon, Jul 25, 2016  7:31:44 PM
Tue, Jul 26, 2016  2:07:58 PM
