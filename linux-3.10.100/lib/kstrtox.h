#ifndef _LIB_KSTRTOX_H
#define _LIB_KSTRTOX_H

#define KSTRTOX_OVERFLOW	(1U << 31)
const char *_parse_integer_fixup_radix(const char *s, unsigned int *base);
unsigned int _parse_integer(const char *s, unsigned int base, unsigned long long *res);

#endif
Tue Jul 19 12:40:18 PDT 2016
Fri Jul 22 15:50:09 PDT 2016
Sun, Jul 24, 2016  2:44:30 PM
Mon, Jul 25, 2016  9:18:38 PM
