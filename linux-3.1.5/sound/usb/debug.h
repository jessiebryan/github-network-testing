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

Tue Jul 19 12:36:36 PDT 2016
Fri Jul 22 15:43:01 PDT 2016
Sun, Jul 24, 2016  1:52:36 PM
Mon, Jul 25, 2016  8:19:41 PM
