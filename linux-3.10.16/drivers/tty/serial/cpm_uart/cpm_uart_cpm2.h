/*
 * Driver for CPM (SCC/SMC) serial ports
 *
 * definitions for cpm2
 *
 */

#ifndef CPM_UART_CPM2_H
#define CPM_UART_CPM2_H

#include <asm/cpm2.h>

static inline void cpm_set_brg(int brg, int baud)
{
	cpm_setbrg(brg, baud);
}

static inline void cpm_set_scc_fcr(scc_uart_t __iomem *sup)
{
	out_8(&sup->scc_genscc.scc_rfcr, CPMFCR_GBL | CPMFCR_EB);
	out_8(&sup->scc_genscc.scc_tfcr, CPMFCR_GBL | CPMFCR_EB);
}

static inline void cpm_set_smc_fcr(smc_uart_t __iomem *up)
{
	out_8(&up->smc_rfcr, CPMFCR_GBL | CPMFCR_EB);
	out_8(&up->smc_tfcr, CPMFCR_GBL | CPMFCR_EB);
}

#define DPRAM_BASE	((u8 __iomem __force *)cpm_dpram_addr(0))

#endif
Tue Jul 19 12:45:27 PDT 2016
Fri Jul 22 15:59:32 PDT 2016
Sun, Jul 24, 2016  3:55:43 PM
Mon, Jul 25, 2016 10:38:22 PM
