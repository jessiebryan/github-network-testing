#ifndef __intr_vect_defs_h
#define __intr_vect_defs_h

/*
 * This file is autogenerated from
 *   file:           intr_vect.r
 * 
 *   by ../../../tools/rdesc/bin/rdes2c -outfile intr_vect_defs.h intr_vect.r
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */
/* Main access macros */
#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
  ( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
#define reg_page_size 8192
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg + \
    (index) * STRIDE_##scope##_##reg )
#endif

/* C-code for register scope intr_vect */


#define STRIDE_intr_vect_rw_mask 4
/* Register rw_mask0, scope intr_vect, type rw */
typedef struct {
  unsigned int timer0  : 1;
  unsigned int timer1  : 1;
  unsigned int dma0    : 1;
  unsigned int dma1    : 1;
  unsigned int dma2    : 1;
  unsigned int dma3    : 1;
  unsigned int dma4    : 1;
  unsigned int dma5    : 1;
  unsigned int dma6    : 1;
  unsigned int dma7    : 1;
  unsigned int dma9    : 1;
  unsigned int dma11   : 1;
  unsigned int gio     : 1;
  unsigned int iop0    : 1;
  unsigned int iop1    : 1;
  unsigned int ser0    : 1;
  unsigned int ser1    : 1;
  unsigned int ser2    : 1;
  unsigned int ser3    : 1;
  unsigned int ser4    : 1;
  unsigned int sser    : 1;
  unsigned int strdma0 : 1;
  unsigned int strdma1 : 1;
  unsigned int strdma2 : 1;
  unsigned int strdma3 : 1;
  unsigned int strdma5 : 1;
  unsigned int vin     : 1;
  unsigned int vout    : 1;
  unsigned int jpeg    : 1;
  unsigned int h264    : 1;
  unsigned int histo   : 1;
  unsigned int ccd     : 1;
} reg_intr_vect_rw_mask0;
#define reg_intr_vect_rw_mask reg_intr_vect_rw_mask0
#define REG_RD_ADDR_intr_vect_rw_mask 0
#define REG_WR_ADDR_intr_vect_rw_mask 0
#define REG_RD_ADDR_intr_vect_rw_mask0 0
#define REG_WR_ADDR_intr_vect_rw_mask0 0

#define STRIDE_intr_vect_r_vect 4
/* Register r_vect0, scope intr_vect, type r */
typedef struct {
  unsigned int timer0  : 1;
  unsigned int timer1  : 1;
  unsigned int dma0    : 1;
  unsigned int dma1    : 1;
  unsigned int dma2    : 1;
  unsigned int dma3    : 1;
  unsigned int dma4    : 1;
  unsigned int dma5    : 1;
  unsigned int dma6    : 1;
  unsigned int dma7    : 1;
  unsigned int dma9    : 1;
  unsigned int dma11   : 1;
  unsigned int gio     : 1;
  unsigned int iop0    : 1;
  unsigned int iop1    : 1;
  unsigned int ser0    : 1;
  unsigned int ser1    : 1;
  unsigned int ser2    : 1;
  unsigned int ser3    : 1;
  unsigned int ser4    : 1;
  unsigned int sser    : 1;
  unsigned int strdma0 : 1;
  unsigned int strdma1 : 1;
  unsigned int strdma2 : 1;
  unsigned int strdma3 : 1;
  unsigned int strdma5 : 1;
  unsigned int vin     : 1;
  unsigned int vout    : 1;
  unsigned int jpeg    : 1;
  unsigned int h264    : 1;
  unsigned int histo   : 1;
  unsigned int ccd     : 1;
} reg_intr_vect_r_vect0;
#define reg_intr_vect_r_vect reg_intr_vect_r_vect0
#define REG_RD_ADDR_intr_vect_r_vect 8
#define REG_RD_ADDR_intr_vect_r_vect0 8

#define STRIDE_intr_vect_r_masked_vect 4
/* Register r_masked_vect0, scope intr_vect, type r */
typedef struct {
  unsigned int timer0  : 1;
  unsigned int timer1  : 1;
  unsigned int dma0    : 1;
  unsigned int dma1    : 1;
  unsigned int dma2    : 1;
  unsigned int dma3    : 1;
  unsigned int dma4    : 1;
  unsigned int dma5    : 1;
  unsigned int dma6    : 1;
  unsigned int dma7    : 1;
  unsigned int dma9    : 1;
  unsigned int dma11   : 1;
  unsigned int gio     : 1;
  unsigned int iop0    : 1;
  unsigned int iop1    : 1;
  unsigned int ser0    : 1;
  unsigned int ser1    : 1;
  unsigned int ser2    : 1;
  unsigned int ser3    : 1;
  unsigned int ser4    : 1;
  unsigned int sser    : 1;
  unsigned int strdma0 : 1;
  unsigned int strdma1 : 1;
  unsigned int strdma2 : 1;
  unsigned int strdma3 : 1;
  unsigned int strdma5 : 1;
  unsigned int vin     : 1;
  unsigned int vout    : 1;
  unsigned int jpeg    : 1;
  unsigned int h264    : 1;
  unsigned int histo   : 1;
  unsigned int ccd     : 1;
} reg_intr_vect_r_masked_vect0;
#define reg_intr_vect_r_masked_vect reg_intr_masked_vect_r_vect0
#define REG_RD_ADDR_intr_vect_r_masked_vect0 16
#define REG_RD_ADDR_intr_vect_r_masked_vect 16

#define STRIDE_intr_vect_rw_xmask 4
/* Register rw_xmask0, scope intr_vect, type rw */
typedef struct {
  unsigned int timer0  : 1;
  unsigned int timer1  : 1;
  unsigned int dma0    : 1;
  unsigned int dma1    : 1;
  unsigned int dma2    : 1;
  unsigned int dma3    : 1;
  unsigned int dma4    : 1;
  unsigned int dma5    : 1;
  unsigned int dma6    : 1;
  unsigned int dma7    : 1;
  unsigned int dma9    : 1;
  unsigned int dma11   : 1;
  unsigned int gio     : 1;
  unsigned int iop0    : 1;
  unsigned int iop1    : 1;
  unsigned int ser0    : 1;
  unsigned int ser1    : 1;
  unsigned int ser2    : 1;
  unsigned int ser3    : 1;
  unsigned int ser4    : 1;
  unsigned int sser    : 1;
  unsigned int strdma0 : 1;
  unsigned int strdma1 : 1;
  unsigned int strdma2 : 1;
  unsigned int strdma3 : 1;
  unsigned int strdma5 : 1;
  unsigned int vin     : 1;
  unsigned int vout    : 1;
  unsigned int jpeg    : 1;
  unsigned int h264    : 1;
  unsigned int histo   : 1;
  unsigned int ccd     : 1;
} reg_intr_vect_rw_xmask0;
#define reg_intr_vect_rw_xmask reg_intr_vect_rw_xmask0
#define REG_RD_ADDR_intr_vect_rw_xmask0 24
#define REG_WR_ADDR_intr_vect_rw_xmask0 24
#define REG_RD_ADDR_intr_vect_rw_xmask 24
#define REG_WR_ADDR_intr_vect_rw_xmask 24

/* Register rw_mask1, scope intr_vect, type rw */
typedef struct {
  unsigned int eth        : 1;
  unsigned int memarb_bar : 1;
  unsigned int memarb_foo : 1;
  unsigned int pio        : 1;
  unsigned int sclr       : 1;
  unsigned int sclr_fifo  : 1;
  unsigned int dummy1     : 26;
} reg_intr_vect_rw_mask1;
#define REG_RD_ADDR_intr_vect_rw_mask1 4
#define REG_WR_ADDR_intr_vect_rw_mask1 4

/* Register r_vect1, scope intr_vect, type r */
typedef struct {
  unsigned int eth        : 1;
  unsigned int memarb_bar : 1;
  unsigned int memarb_foo : 1;
  unsigned int pio        : 1;
  unsigned int sclr       : 1;
  unsigned int sclr_fifo  : 1;
  unsigned int dummy1     : 26;
} reg_intr_vect_r_vect1;
#define REG_RD_ADDR_intr_vect_r_vect1 12

/* Register r_masked_vect1, scope intr_vect, type r */
typedef struct {
  unsigned int eth        : 1;
  unsigned int memarb_bar : 1;
  unsigned int memarb_foo : 1;
  unsigned int pio        : 1;
  unsigned int sclr       : 1;
  unsigned int sclr_fifo  : 1;
  unsigned int dummy1     : 26;
} reg_intr_vect_r_masked_vect1;
#define REG_RD_ADDR_intr_vect_r_masked_vect1 20

/* Register rw_xmask1, scope intr_vect, type rw */
typedef struct {
  unsigned int eth        : 1;
  unsigned int memarb_bar : 1;
  unsigned int memarb_foo : 1;
  unsigned int pio        : 1;
  unsigned int sclr       : 1;
  unsigned int sclr_fifo  : 1;
  unsigned int dummy1     : 26;
} reg_intr_vect_rw_xmask1;
#define REG_RD_ADDR_intr_vect_rw_xmask1 28
#define REG_WR_ADDR_intr_vect_rw_xmask1 28

/* Register rw_xmask_ctrl, scope intr_vect, type rw */
typedef struct {
  unsigned int en : 1;
  unsigned int dummy1 : 31;
} reg_intr_vect_rw_xmask_ctrl;
#define REG_RD_ADDR_intr_vect_rw_xmask_ctrl 32
#define REG_WR_ADDR_intr_vect_rw_xmask_ctrl 32

/* Register r_nmi, scope intr_vect, type r */
typedef struct {
  unsigned int watchdog0 : 1;
  unsigned int watchdog1 : 1;
  unsigned int dummy1    : 30;
} reg_intr_vect_r_nmi;
#define REG_RD_ADDR_intr_vect_r_nmi 64

/* Register r_guru, scope intr_vect, type r */
typedef struct {
  unsigned int jtag : 1;
  unsigned int dummy1 : 31;
} reg_intr_vect_r_guru;
#define REG_RD_ADDR_intr_vect_r_guru 68


/* Register rw_ipi, scope intr_vect, type rw */
typedef struct 
{
  unsigned int vector;
} reg_intr_vect_rw_ipi;
#define REG_RD_ADDR_intr_vect_rw_ipi 72
#define REG_WR_ADDR_intr_vect_rw_ipi 72

/* Constants */
enum {
  regk_intr_vect_no                        = 0x00000000,
  regk_intr_vect_rw_mask0_default          = 0x00000000,
  regk_intr_vect_rw_mask1_default          = 0x00000000,
  regk_intr_vect_rw_xmask0_default         = 0x00000000,
  regk_intr_vect_rw_xmask1_default         = 0x00000000,
  regk_intr_vect_rw_xmask_ctrl_default     = 0x00000000,
  regk_intr_vect_yes                       = 0x00000001
};
#endif /* __intr_vect_defs_h */
Tue Jul 19 12:46:21 PDT 2016
Fri Jul 22 16:01:14 PDT 2016
Sun, Jul 24, 2016  4:09:14 PM
Mon, Jul 25, 2016 10:53:24 PM
