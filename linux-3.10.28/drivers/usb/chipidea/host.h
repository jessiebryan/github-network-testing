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
Tue Jul 19 12:53:09 PDT 2016
Fri Jul 22 16:14:12 PDT 2016
Sun, Jul 24, 2016  5:46:56 PM
Tue, Jul 26, 2016 12:41:34 AM
