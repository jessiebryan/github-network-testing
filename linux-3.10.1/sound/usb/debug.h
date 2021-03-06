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

Tue Jul 19 12:39:04 PDT 2016
Fri Jul 22 15:47:38 PDT 2016
Sun, Jul 24, 2016  2:26:29 PM
Mon, Jul 25, 2016  8:58:34 PM
