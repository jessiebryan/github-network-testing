#ifndef _VBUTIL_
#define _VBUTIL_
extern void xgifb_reg_set(unsigned long, u8, u8);
extern u8 xgifb_reg_get(unsigned long, u8);
extern void xgifb_reg_or(unsigned long, u8, unsigned);
extern void xgifb_reg_and(unsigned long, u8, unsigned);
extern void xgifb_reg_and_or(unsigned long, u8, unsigned, unsigned);
#endif

Tue Jul 19 12:43:32 PDT 2016
Fri Jul 22 15:55:58 PDT 2016
