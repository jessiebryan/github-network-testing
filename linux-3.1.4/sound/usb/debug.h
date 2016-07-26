#ifndef __USBAUDIO_DEBUG_H
#define __USBAUDIO_DEBUG_H

/*
 * h/w constraints
 */

#ifdef HW_CONST_DEBUG
#define hwc_debug(fmt, args...) printk(KERN_DEBUG fmt, ##args)
#else
#define hwc_debug(fmt, args...) do { } while(0)
#endif

#endif /* __USBAUDIO_DEBUG_H */

Tue Jul 19 12:36:02 PDT 2016
Fri Jul 22 15:41:53 PDT 2016
Sun, Jul 24, 2016  1:44:21 PM
Mon, Jul 25, 2016  8:09:58 PM
Tue, Jul 26, 2016  2:44:00 PM
