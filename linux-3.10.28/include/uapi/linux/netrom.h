/*
 * These are the public elements of the Linux kernel NET/ROM implementation.
 * For kernel AX.25 see the file ax25.h. This file requires ax25.h for the
 * definition of the ax25_address structure.
 */

#ifndef	NETROM_KERNEL_H
#define	NETROM_KERNEL_H

#include <linux/ax25.h>

#define NETROM_MTU	236

#define NETROM_T1	1
#define NETROM_T2	2
#define NETROM_N2	3
#define	NETROM_T4	6
#define	NETROM_IDLE	7

#define	SIOCNRDECOBS		(SIOCPROTOPRIVATE+2)

struct nr_route_struct {
#define	NETROM_NEIGH	0
#define	NETROM_NODE	1
	int		type;
	ax25_address	callsign;
	char		device[16];
	unsigned int	quality;
	char		mnemonic[7];
	ax25_address	neighbour;
	unsigned int	obs_count;
	unsigned int	ndigis;
	ax25_address	digipeaters[AX25_MAX_DIGIS];
};

#endif
Tue Jul 19 12:53:18 PDT 2016
Fri Jul 22 16:14:30 PDT 2016
Sun, Jul 24, 2016  5:49:16 PM
Tue, Jul 26, 2016 12:44:08 AM
