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

Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:19 PDT 2016
Sun, Jul 24, 2016  5:40:34 PM
Tue, Jul 26, 2016 12:34:34 AM
