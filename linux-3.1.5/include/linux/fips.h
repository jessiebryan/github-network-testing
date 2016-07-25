#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:36:30 PDT 2016
Fri Jul 22 15:42:49 PDT 2016
Sun, Jul 24, 2016  1:51:03 PM
