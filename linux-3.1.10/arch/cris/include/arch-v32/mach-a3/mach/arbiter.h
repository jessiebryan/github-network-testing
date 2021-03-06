#ifndef _ASM_CRIS_ARCH_ARBITER_H
#define _ASM_CRIS_ARCH_ARBITER_H

#define EXT_REGION 0
#define INT_REGION 1

typedef void (watch_callback)(void);

enum {
	arbiter_all_dmas = 0x7fe,
	arbiter_cpu = 0x1800,
	arbiter_all_clients = 0x7fff
};

enum {
	arbiter_bar_all_clients = 0x1ff
};

enum {
	arbiter_all_read = 0x55,
	arbiter_all_write = 0xaa,
	arbiter_all_accesses = 0xff
};

#define MARB_CLIENTS(foo_cli, bar_cli) (((bar_cli) << 16) | (foo_cli))

int crisv32_arbiter_allocate_bandwidth(int client, int region,
		unsigned long bandwidth);
int crisv32_arbiter_watch(unsigned long start, unsigned long size,
		unsigned long clients, unsigned long accesses,
		watch_callback * cb);
int crisv32_arbiter_unwatch(int id);

#endif
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:38 PDT 2016
Sun, Jul 24, 2016  1:12:51 PM
Mon, Jul 25, 2016  6:19:38 PM
Mon, Jul 25, 2016  7:32:54 PM
Tue, Jul 26, 2016  2:09:04 PM
