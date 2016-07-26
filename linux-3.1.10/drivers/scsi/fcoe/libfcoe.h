#ifndef _FCOE_LIBFCOE_H_
#define _FCOE_LIBFCOE_H_

extern unsigned int libfcoe_debug_logging;
#define LIBFCOE_LOGGING	    0x01 /* General logging, not categorized */
#define LIBFCOE_FIP_LOGGING 0x02 /* FIP logging */
#define LIBFCOE_TRANSPORT_LOGGING	0x04 /* FCoE transport logging */

#define LIBFCOE_CHECK_LOGGING(LEVEL, CMD)		\
do {							\
	if (unlikely(libfcoe_debug_logging & LEVEL))	\
		do {					\
			CMD;				\
		} while (0);				\
} while (0)

#define LIBFCOE_DBG(fmt, args...)					\
	LIBFCOE_CHECK_LOGGING(LIBFCOE_LOGGING,				\
			      printk(KERN_INFO "libfcoe: " fmt, ##args);)

#define LIBFCOE_FIP_DBG(fip, fmt, args...)				\
	LIBFCOE_CHECK_LOGGING(LIBFCOE_FIP_LOGGING,			\
			      printk(KERN_INFO "host%d: fip: " fmt,	\
				     (fip)->lp->host->host_no, ##args);)

#define LIBFCOE_TRANSPORT_DBG(fmt, args...)				\
	LIBFCOE_CHECK_LOGGING(LIBFCOE_TRANSPORT_LOGGING,		\
			      printk(KERN_INFO "%s: " fmt,		\
				     __func__, ##args);)

#endif /* _FCOE_LIBFCOE_H_ */
Tue Jul 19 12:33:33 PDT 2016
Fri Jul 22 15:38:09 PDT 2016
Sun, Jul 24, 2016  1:16:35 PM
Mon, Jul 25, 2016  6:24:06 PM
