#ifndef __pio_defs_h
#define __pio_defs_h

/*
 * This file is autogenerated from
 *   file:           pio.r
 * 
 *   by ../../../tools/rdesc/bin/rdes2c -outfile pio_defs.h pio.r
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

/* C-code for register scope pio */

/* Register rw_data, scope pio, type rw */
typedef unsigned int reg_pio_rw_data;
#define REG_RD_ADDR_pio_rw_data 64
#define REG_WR_ADDR_pio_rw_data 64

/* Register rw_io_access0, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access0;
#define REG_RD_ADDR_pio_rw_io_access0 0
#define REG_WR_ADDR_pio_rw_io_access0 0

/* Register rw_io_access1, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access1;
#define REG_RD_ADDR_pio_rw_io_access1 4
#define REG_WR_ADDR_pio_rw_io_access1 4

/* Register rw_io_access2, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access2;
#define REG_RD_ADDR_pio_rw_io_access2 8
#define REG_WR_ADDR_pio_rw_io_access2 8

/* Register rw_io_access3, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access3;
#define REG_RD_ADDR_pio_rw_io_access3 12
#define REG_WR_ADDR_pio_rw_io_access3 12

/* Register rw_io_access4, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access4;
#define REG_RD_ADDR_pio_rw_io_access4 16
#define REG_WR_ADDR_pio_rw_io_access4 16

/* Register rw_io_access5, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access5;
#define REG_RD_ADDR_pio_rw_io_access5 20
#define REG_WR_ADDR_pio_rw_io_access5 20

/* Register rw_io_access6, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access6;
#define REG_RD_ADDR_pio_rw_io_access6 24
#define REG_WR_ADDR_pio_rw_io_access6 24

/* Register rw_io_access7, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access7;
#define REG_RD_ADDR_pio_rw_io_access7 28
#define REG_WR_ADDR_pio_rw_io_access7 28

/* Register rw_io_access8, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access8;
#define REG_RD_ADDR_pio_rw_io_access8 32
#define REG_WR_ADDR_pio_rw_io_access8 32

/* Register rw_io_access9, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access9;
#define REG_RD_ADDR_pio_rw_io_access9 36
#define REG_WR_ADDR_pio_rw_io_access9 36

/* Register rw_io_access10, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access10;
#define REG_RD_ADDR_pio_rw_io_access10 40
#define REG_WR_ADDR_pio_rw_io_access10 40

/* Register rw_io_access11, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access11;
#define REG_RD_ADDR_pio_rw_io_access11 44
#define REG_WR_ADDR_pio_rw_io_access11 44

/* Register rw_io_access12, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access12;
#define REG_RD_ADDR_pio_rw_io_access12 48
#define REG_WR_ADDR_pio_rw_io_access12 48

/* Register rw_io_access13, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access13;
#define REG_RD_ADDR_pio_rw_io_access13 52
#define REG_WR_ADDR_pio_rw_io_access13 52

/* Register rw_io_access14, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access14;
#define REG_RD_ADDR_pio_rw_io_access14 56
#define REG_WR_ADDR_pio_rw_io_access14 56

/* Register rw_io_access15, scope pio, type rw */
typedef struct {
  unsigned int data : 8;
  unsigned int dummy1 : 24;
} reg_pio_rw_io_access15;
#define REG_RD_ADDR_pio_rw_io_access15 60
#define REG_WR_ADDR_pio_rw_io_access15 60

/* Register rw_ce0_cfg, scope pio, type rw */
typedef struct {
  unsigned int lw   : 6;
  unsigned int ew   : 3;
  unsigned int zw   : 3;
  unsigned int aw   : 2;
  unsigned int mode : 2;
  unsigned int dummy1 : 16;
} reg_pio_rw_ce0_cfg;
#define REG_RD_ADDR_pio_rw_ce0_cfg 68
#define REG_WR_ADDR_pio_rw_ce0_cfg 68

/* Register rw_ce1_cfg, scope pio, type rw */
typedef struct {
  unsigned int lw   : 6;
  unsigned int ew   : 3;
  unsigned int zw   : 3;
  unsigned int aw   : 2;
  unsigned int mode : 2;
  unsigned int dummy1 : 16;
} reg_pio_rw_ce1_cfg;
#define REG_RD_ADDR_pio_rw_ce1_cfg 72
#define REG_WR_ADDR_pio_rw_ce1_cfg 72

/* Register rw_ce2_cfg, scope pio, type rw */
typedef struct {
  unsigned int lw   : 6;
  unsigned int ew   : 3;
  unsigned int zw   : 3;
  unsigned int aw   : 2;
  unsigned int mode : 2;
  unsigned int dummy1 : 16;
} reg_pio_rw_ce2_cfg;
#define REG_RD_ADDR_pio_rw_ce2_cfg 76
#define REG_WR_ADDR_pio_rw_ce2_cfg 76

/* Register rw_dout, scope pio, type rw */
typedef struct {
  unsigned int data  : 8;
  unsigned int rd_n  : 1;
  unsigned int wr_n  : 1;
  unsigned int a0    : 1;
  unsigned int a1    : 1;
  unsigned int ce0_n : 1;
  unsigned int ce1_n : 1;
  unsigned int ce2_n : 1;
  unsigned int rdy   : 1;
  unsigned int dummy1 : 16;
} reg_pio_rw_dout;
#define REG_RD_ADDR_pio_rw_dout 80
#define REG_WR_ADDR_pio_rw_dout 80

/* Register rw_oe, scope pio, type rw */
typedef struct {
  unsigned int data  : 8;
  unsigned int rd_n  : 1;
  unsigned int wr_n  : 1;
  unsigned int a0    : 1;
  unsigned int a1    : 1;
  unsigned int ce0_n : 1;
  unsigned int ce1_n : 1;
  unsigned int ce2_n : 1;
  unsigned int rdy   : 1;
  unsigned int dummy1 : 16;
} reg_pio_rw_oe;
#define REG_RD_ADDR_pio_rw_oe 84
#define REG_WR_ADDR_pio_rw_oe 84

/* Register rw_man_ctrl, scope pio, type rw */
typedef struct {
  unsigned int data  : 8;
  unsigned int rd_n  : 1;
  unsigned int wr_n  : 1;
  unsigned int a0    : 1;
  unsigned int a1    : 1;
  unsigned int ce0_n : 1;
  unsigned int ce1_n : 1;
  unsigned int ce2_n : 1;
  unsigned int rdy   : 1;
  unsigned int dummy1 : 16;
} reg_pio_rw_man_ctrl;
#define REG_RD_ADDR_pio_rw_man_ctrl 88
#define REG_WR_ADDR_pio_rw_man_ctrl 88

/* Register r_din, scope pio, type r */
typedef struct {
  unsigned int data  : 8;
  unsigned int rd_n  : 1;
  unsigned int wr_n  : 1;
  unsigned int a0    : 1;
  unsigned int a1    : 1;
  unsigned int ce0_n : 1;
  unsigned int ce1_n : 1;
  unsigned int ce2_n : 1;
  unsigned int rdy   : 1;
  unsigned int dummy1 : 16;
} reg_pio_r_din;
#define REG_RD_ADDR_pio_r_din 92

/* Register r_stat, scope pio, type r */
typedef struct {
  unsigned int busy : 1;
  unsigned int dummy1 : 31;
} reg_pio_r_stat;
#define REG_RD_ADDR_pio_r_stat 96

/* Register rw_intr_mask, scope pio, type rw */
typedef struct {
  unsigned int rdy : 1;
  unsigned int dummy1 : 31;
} reg_pio_rw_intr_mask;
#define REG_RD_ADDR_pio_rw_intr_mask 100
#define REG_WR_ADDR_pio_rw_intr_mask 100

/* Register rw_ack_intr, scope pio, type rw */
typedef struct {
  unsigned int rdy : 1;
  unsigned int dummy1 : 31;
} reg_pio_rw_ack_intr;
#define REG_RD_ADDR_pio_rw_ack_intr 104
#define REG_WR_ADDR_pio_rw_ack_intr 104

/* Register r_intr, scope pio, type r */
typedef struct {
  unsigned int rdy : 1;
  unsigned int dummy1 : 31;
} reg_pio_r_intr;
#define REG_RD_ADDR_pio_r_intr 108

/* Register r_masked_intr, scope pio, type r */
typedef struct {
  unsigned int rdy : 1;
  unsigned int dummy1 : 31;
} reg_pio_r_masked_intr;
#define REG_RD_ADDR_pio_r_masked_intr 112


/* Constants */
enum {
  regk_pio_a2                              = 0x00000003,
  regk_pio_no                              = 0x00000000,
  regk_pio_normal                          = 0x00000000,
  regk_pio_rd                              = 0x00000001,
  regk_pio_rw_ce0_cfg_default              = 0x00000000,
  regk_pio_rw_ce1_cfg_default              = 0x00000000,
  regk_pio_rw_ce2_cfg_default              = 0x00000000,
  regk_pio_rw_intr_mask_default            = 0x00000000,
  regk_pio_rw_man_ctrl_default             = 0x00000000,
  regk_pio_rw_oe_default                   = 0x00000000,
  regk_pio_wr                              = 0x00000002,
  regk_pio_wr_ce2                          = 0x00000003,
  regk_pio_yes                             = 0x00000001,
  regk_pio_yes_all                         = 0x000000ff
};
#endif /* __pio_defs_h */
Tue Jul 19 12:37:56 PDT 2016
Fri Jul 22 15:45:27 PDT 2016
Sun, Jul 24, 2016  2:10:36 PM
Mon, Jul 25, 2016  8:40:55 PM
