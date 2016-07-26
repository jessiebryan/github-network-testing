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
Tue Jul 19 12:48:40 PDT 2016
Fri Jul 22 16:05:37 PDT 2016
Sun, Jul 24, 2016  4:42:52 PM
Mon, Jul 25, 2016 11:30:46 PM
