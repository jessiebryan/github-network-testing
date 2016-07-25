#ifndef _MRST_VRTC_H
#define _MRST_VRTC_H

extern unsigned char vrtc_cmos_read(unsigned char reg);
extern void vrtc_cmos_write(unsigned char val, unsigned char reg);
extern unsigned long vrtc_get_time(void);
extern int vrtc_set_mmss(unsigned long nowtime);

#endif
Tue Jul 19 12:40:36 PDT 2016
Fri Jul 22 15:50:44 PDT 2016
Sun, Jul 24, 2016  2:48:42 PM
