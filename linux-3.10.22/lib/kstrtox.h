#ifndef _LIB_KSTRTOX_H
#define _LIB_KSTRTOX_H

#define KSTRTOX_OVERFLOW	(1U << 31)
const char *_parse_integer_fixup_radix(const char *s, unsigned int *base);
unsigned int _parse_integer(const char *s, unsigned int base, unsigned long long *res);

#endif
Tue Jul 19 12:49:26 PDT 2016
Fri Jul 22 16:07:01 PDT 2016
Sun, Jul 24, 2016  4:53:37 PM
Mon, Jul 25, 2016 11:42:47 PM
