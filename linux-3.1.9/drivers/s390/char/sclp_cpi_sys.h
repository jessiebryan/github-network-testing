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
Tue Jul 19 12:38:12 PDT 2016
Fri Jul 22 15:45:56 PDT 2016
Sun, Jul 24, 2016  2:14:14 PM
Mon, Jul 25, 2016  8:44:55 PM
