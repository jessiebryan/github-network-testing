#ifndef _UAPI__HPET__
#define _UAPI__HPET__

#include <linux/compiler.h>


struct hpet_info {
	unsigned long hi_ireqfreq;	/* Hz */
	unsigned long hi_flags;	/* information */
	unsigned short hi_hpet;
	unsigned short hi_timer;
};

#define HPET_INFO_PERIODIC	0x0010	/* periodic-capable comparator */

#define	HPET_IE_ON	_IO('h', 0x01)	/* interrupt on */
#define	HPET_IE_OFF	_IO('h', 0x02)	/* interrupt off */
#define	HPET_INFO	_IOR('h', 0x03, struct hpet_info)
#define	HPET_EPI	_IO('h', 0x04)	/* enable periodic */
#define	HPET_DPI	_IO('h', 0x05)	/* disable periodic */
#define	HPET_IRQFREQ	_IOW('h', 0x6, unsigned long)	/* IRQFREQ usec */

#define MAX_HPET_TBS	8		/* maximum hpet timer blocks */

#endif /* _UAPI__HPET__ */
Tue Jul 19 12:40:17 PDT 2016
Fri Jul 22 15:50:06 PDT 2016
Sun, Jul 24, 2016  2:44:09 PM
Mon, Jul 25, 2016  9:18:14 PM
