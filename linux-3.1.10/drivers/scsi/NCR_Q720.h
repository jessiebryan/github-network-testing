/* -*- mode: c; c-basic-offset: 8 -*- */

/* NCR Quad 720 MCA SCSI Driver
 *
 * Copyright (C) 2003 by James.Bottomley@HansenPartnership.com
 */

#ifndef _NCR_Q720_H
#define _NCR_Q720_H

/* The MCA identifier */
#define NCR_Q720_MCA_ID		0x0720

#define NCR_Q720_CLOCK_MHZ	30

#define NCR_Q720_POS2_BOARD_ENABLE	0x01
#define NCR_Q720_POS2_INTERRUPT_ENABLE	0x02
#define NCR_Q720_POS2_PARITY_DISABLE	0x04
#define NCR_Q720_POS2_IO_MASK		0xf8
#define NCR_Q720_POS2_IO_SHIFT		8

#define NCR_Q720_CHIP_REGISTER_OFFSET	0x200
#define NCR_Q720_SCSR_OFFSET		0x070
#define NCR_Q720_SIOP_SHIFT		0x080

#endif


Tue Jul 19 12:33:33 PDT 2016
Fri Jul 22 15:38:09 PDT 2016
Sun, Jul 24, 2016  1:16:39 PM
Mon, Jul 25, 2016  6:24:10 PM
Mon, Jul 25, 2016  7:37:22 PM
Tue, Jul 26, 2016  2:13:16 PM
