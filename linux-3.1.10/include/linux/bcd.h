#ifndef _BCD_H
#define _BCD_H

#include <linux/compiler.h>

unsigned bcd2bin(unsigned char val) __attribute_const__;
unsigned char bin2bcd(unsigned val) __attribute_const__;

#endif /* _BCD_H */
Tue Jul 19 12:33:38 PDT 2016
