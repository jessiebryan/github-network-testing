/*
 * Driver for CPM (SCC/SMC) serial ports
 *
 * definitions for cpm1
 *
 */

#ifndef CPM_UART_CPM1_H
#define CPM_UART_CPM1_H

#include <asm/cpm1.h>

static inline void cpm_set_brg(int brg, int baud)
{
	cpm_setbrg(brg, baud);
}

static inline void cpm_set_scc_fcr(scc_uart_t __iomem * sup)
{
	out_8(&sup->scc_genscc.scc_rfcr, SMC_EB);
	out_8(&sup->scc_genscc.scc_tfcr, SMC_EB);
}

static inline void cpm_set_smc_fcr(smc_uart_t __iomem * up)
{
	out_8(&up->smc_rfcr, SMC_EB);
	out_8(&up->smc_tfcr, SMC_EB);
}

#define DPRAM_BASE	((u8 __iomem __force *)cpm_dpram_addr(0))

#endif
Tue Jul 19 12:33:35 PDT 2016
Fri Jul 22 15:38:14 PDT 2016
Sun, Jul 24, 2016  1:17:15 PM
Mon, Jul 25, 2016  6:24:54 PM
Mon, Jul 25, 2016  7:38:05 PM
Tue, Jul 26, 2016  2:13:58 PM
