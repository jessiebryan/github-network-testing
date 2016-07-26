/*
 *  drivers/s390/char/sclp_cpi_sys.h
 *    SCLP control program identification sysfs interface
 *
 *    Copyright IBM Corp. 2007
 *    Author(s): Michael Ernst <mernst@de.ibm.com>
 */

#ifndef __SCLP_CPI_SYS_H__
#define __SCLP_CPI_SYS_H__

int sclp_cpi_set_data(const char *system, const char *sysplex,
		      const char *type, u64 level);

#endif	 /* __SCLP_CPI_SYS_H__ */
Tue Jul 19 12:36:57 PDT 2016
Fri Jul 22 15:43:42 PDT 2016
Sun, Jul 24, 2016  1:57:45 PM
Mon, Jul 25, 2016  8:25:48 PM
