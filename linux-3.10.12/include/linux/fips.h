#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:42:58 PDT 2016
Fri Jul 22 15:54:53 PDT 2016
Sun, Jul 24, 2016  3:19:37 PM
Mon, Jul 25, 2016  9:58:14 PM
