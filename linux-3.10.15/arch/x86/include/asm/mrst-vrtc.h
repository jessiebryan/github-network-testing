#ifndef _MRST_VRTC_H
#define _MRST_VRTC_H

extern unsigned char vrtc_cmos_read(unsigned char reg);
extern void vrtc_cmos_write(unsigned char val, unsigned char reg);
extern unsigned long vrtc_get_time(void);
extern int vrtc_set_mmss(unsigned long nowtime);

#endif
Tue Jul 19 12:44:39 PDT 2016
Fri Jul 22 15:58:02 PDT 2016
Sun, Jul 24, 2016  3:44:01 PM
Mon, Jul 25, 2016 10:25:22 PM
