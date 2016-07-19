#ifndef _FIPS_H
#define _FIPS_H

#ifdef CONFIG_CRYPTO_FIPS
extern int fips_enabled;
#else
#define fips_enabled 0
#endif

#endif
Tue Jul 19 12:50:36 PDT 2016
