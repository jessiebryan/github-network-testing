#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:41 PDT 2016
Sun, Jul 24, 2016  1:42:49 PM
