/*********************************************************************
 *                
 * Filename:      crc.h
 * Version:       
 * Description:   CRC routines
 * Status:        Experimental.
 * Author:        Dag Brattli <dagb@cs.uit.no>
 * Created at:    Mon Aug  4 20:40:53 1997
 * Modified at:   Sun May  2 20:25:23 1999
 * Modified by:   Dag Brattli <dagb@cs.uit.no>
 * 
 ********************************************************************/

#ifndef IRDA_CRC_H
#define IRDA_CRC_H

#include <linux/types.h>
#include <linux/crc-ccitt.h>

#define INIT_FCS  0xffff   /* Initial FCS value */
#define GOOD_FCS  0xf0b8   /* Good final FCS value */

/* Recompute the FCS with one more character appended. */
#define irda_fcs(fcs, c) crc_ccitt_byte(fcs, c)

/* Recompute the FCS with len bytes appended. */
#define irda_calc_crc16(fcs, buf, len) crc_ccitt(fcs, buf, len)

#endif
Tue Jul 19 12:35:25 PDT 2016
Fri Jul 22 15:40:40 PDT 2016
Sun, Jul 24, 2016  1:35:27 PM
Mon, Jul 25, 2016  7:59:28 PM
Tue, Jul 26, 2016  2:34:10 PM
