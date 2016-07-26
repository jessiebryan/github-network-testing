#ifndef __LICENSE_H
#define __LICENSE_H

static inline int license_is_gpl_compatible(const char *license)
{
	return (strcmp(license, "GPL") == 0
		|| strcmp(license, "GPL v2") == 0
		|| strcmp(license, "GPL and additional rights") == 0
		|| strcmp(license, "Dual BSD/GPL") == 0
		|| strcmp(license, "Dual MIT/GPL") == 0
		|| strcmp(license, "Dual MPL/GPL") == 0);
}

#endif
Tue Jul 19 12:37:05 PDT 2016
Fri Jul 22 15:43:56 PDT 2016
Sun, Jul 24, 2016  1:59:29 PM
Mon, Jul 25, 2016  8:27:52 PM
