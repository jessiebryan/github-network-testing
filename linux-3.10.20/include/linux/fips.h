#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:48:01 PDT 2016
Fri Jul 22 16:04:23 PDT 2016
Sun, Jul 24, 2016  4:33:26 PM
