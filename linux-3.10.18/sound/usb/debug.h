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

Tue Jul 19 12:46:54 PDT 2016
Fri Jul 22 16:02:16 PDT 2016
Sun, Jul 24, 2016  4:17:05 PM
Mon, Jul 25, 2016 11:02:08 PM
