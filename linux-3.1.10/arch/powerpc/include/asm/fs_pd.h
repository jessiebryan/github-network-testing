/*
 * Platform information definitions.
 *
 * 2006 (c) MontaVista Software, Inc.
 * Vitaly Bordug <vbordug@ru.mvista.com>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */

#ifndef FS_PD_H
#define FS_PD_H
#include <sysdev/fsl_soc.h>
#include <asm/time.h>

#ifdef CONFIG_CPM2
#include <asm/cpm2.h>

#if defined(CONFIG_8260)
#include <asm/mpc8260.h>
#endif

#define cpm2_map(member) (&cpm2_immr->member)
#define cpm2_map_size(member, size) (&cpm2_immr->member)
#define cpm2_unmap(addr) do {} while(0)
#endif

#ifdef CONFIG_8xx
#include <asm/8xx_immap.h>
#include <asm/mpc8xx.h>

extern immap_t __iomem *mpc8xx_immr;

#define immr_map(member) (&mpc8xx_immr->member)
#define immr_map_size(member, size) (&mpc8xx_immr->member)
#define immr_unmap(addr) do {} while (0)
#endif

static inline int uart_baudrate(void)
{
        return get_baudrate();
}

static inline int uart_clock(void)
{
        return ppc_proc_freq;
}

#endif
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:09 PM
Mon, Jul 25, 2016  6:21:11 PM
Mon, Jul 25, 2016  7:34:25 PM
Tue, Jul 26, 2016  2:10:29 PM
