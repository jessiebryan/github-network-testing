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
Tue Jul 19 12:41:25 PDT 2016
Fri Jul 22 15:52:24 PDT 2016
Sun, Jul 24, 2016  3:00:23 PM
Mon, Jul 25, 2016  9:36:37 PM
