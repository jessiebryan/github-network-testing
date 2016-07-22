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
Tue Jul 19 12:35:24 PDT 2016
Fri Jul 22 15:40:37 PDT 2016
