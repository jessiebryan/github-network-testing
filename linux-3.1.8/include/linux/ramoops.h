#ifndef __RAMOOPS_H
#define __RAMOOPS_H

/*
 * Ramoops platform data
 * @mem_size	memory size for ramoops
 * @mem_address	physical memory address to contain ramoops
 */

struct ramoops_platform_data {
	unsigned long	mem_size;
	unsigned long	mem_address;
	unsigned long	record_size;
	int		dump_oops;
};

#endif
Tue Jul 19 12:37:44 PDT 2016
Fri Jul 22 15:45:07 PDT 2016
Sun, Jul 24, 2016  2:08:04 PM
