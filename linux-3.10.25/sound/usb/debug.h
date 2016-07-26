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

Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:47 PDT 2016
Sun, Jul 24, 2016  5:21:57 PM
Tue, Jul 26, 2016 12:14:02 AM
