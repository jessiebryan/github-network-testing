/*
 * Copyright 2005-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _MACH_BLACKFIN_H_
#define _MACH_BLACKFIN_H_

#define BF561_FAMILY

#include "bf561.h"
#include "anomaly.h"

#include <asm/def_LPBlackfin.h>
#include "defBF561.h"

#ifndef __ASSEMBLY__
# include <asm/cdef_LPBlackfin.h>
# include "cdefBF561.h"
#endif

#define bfin_read_FIO_FLAG_D() bfin_read_FIO0_FLAG_D()
#define bfin_write_FIO_FLAG_D(val) bfin_write_FIO0_FLAG_D(val)
#define bfin_read_FIO_DIR() bfin_read_FIO0_DIR()
#define bfin_write_FIO_DIR(val) bfin_write_FIO0_DIR(val)
#define bfin_read_FIO_INEN() bfin_read_FIO0_INEN()
#define bfin_write_FIO_INEN(val) bfin_write_FIO0_INEN(val)

/* Weird muxer funcs which pick SIC regs from IMASK base */
#define __SIC_MUX(base, x)		((base) + ((x) << 2))
#define bfin_read_SIC_IMASK(x)		bfin_read32(__SIC_MUX(SIC_IMASK0, x))
#define bfin_write_SIC_IMASK(x, val)	bfin_write32(__SIC_MUX(SIC_IMASK0, x), val)
#define bfin_read_SICB_IMASK(x)		bfin_read32(__SIC_MUX(SICB_IMASK0, x))
#define bfin_write_SICB_IMASK(x, val)	bfin_write32(__SIC_MUX(SICB_IMASK0, x), val)
#define bfin_read_SIC_ISR(x)		bfin_read32(__SIC_MUX(SIC_ISR0, x))
#define bfin_write_SIC_ISR(x, val)	bfin_write32(__SIC_MUX(SIC_ISR0, x), val)
#define bfin_read_SICB_ISR(x)		bfin_read32(__SIC_MUX(SICB_ISR0, x))
#define bfin_write_SICB_ISR(x, val)	bfin_write32(__SIC_MUX(SICB_ISR0, x), val)

#endif				/* _MACH_BLACKFIN_H_ */
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:38 PDT 2016
Sun, Jul 24, 2016  1:12:45 PM
Mon, Jul 25, 2016  6:19:31 PM
Mon, Jul 25, 2016  7:32:47 PM
Tue, Jul 26, 2016  2:08:58 PM
