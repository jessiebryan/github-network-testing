#ifndef __DRIVERS_USB_CHIPIDEA_HOST_H
#define __DRIVERS_USB_CHIPIDEA_HOST_H

#ifdef CONFIG_USB_CHIPIDEA_HOST

int ci_hdrc_host_init(struct ci13xxx *ci);

#else

static inline int ci_hdrc_host_init(struct ci13xxx *ci)
{
	return -ENXIO;
}

#endif

#endif /* __DRIVERS_USB_CHIPIDEA_HOST_H */
Tue Jul 19 12:46:42 PDT 2016
Fri Jul 22 16:01:54 PDT 2016
Sun, Jul 24, 2016  4:14:10 PM
Mon, Jul 25, 2016 10:58:53 PM
