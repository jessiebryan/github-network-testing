/******************************************************************************
 *
 * atm_nicstar.h
 *
 * Driver-specific declarations for use by NICSTAR driver specific utils.
 *
 * Author: Rui Prior
 *
 * (C) INESC 1998
 *
 ******************************************************************************/


#ifndef LINUX_ATM_NICSTAR_H
#define LINUX_ATM_NICSTAR_H

/* Note: non-kernel programs including this file must also include
 * sys/types.h for struct timeval
 */

#include <linux/atmapi.h>
#include <linux/atmioc.h>

#define NS_GETPSTAT	_IOWR('a',ATMIOC_SARPRV+1,struct atmif_sioc)
						/* get pool statistics */
#define NS_SETBUFLEV	_IOW('a',ATMIOC_SARPRV+2,struct atmif_sioc)
						/* set buffer level markers */
#define NS_ADJBUFLEV	_IO('a',ATMIOC_SARPRV+3)
						/* adjust buffer level */

typedef struct buf_nr
{
   unsigned min;
   unsigned init;
   unsigned max;
}buf_nr;


typedef struct pool_levels
{
   int buftype;
   int count;		/* (At least for now) only used in NS_GETPSTAT */
   buf_nr level;
} pool_levels;

/* type must be one of the following: */
#define NS_BUFTYPE_SMALL 1
#define NS_BUFTYPE_LARGE 2
#define NS_BUFTYPE_HUGE 3
#define NS_BUFTYPE_IOVEC 4


#endif /* LINUX_ATM_NICSTAR_H */
Tue Jul 19 12:33:38 PDT 2016
Fri Jul 22 15:38:19 PDT 2016
Sun, Jul 24, 2016  1:17:53 PM
Mon, Jul 25, 2016  6:25:39 PM
Mon, Jul 25, 2016  7:38:48 PM
Tue, Jul 26, 2016  2:14:41 PM
