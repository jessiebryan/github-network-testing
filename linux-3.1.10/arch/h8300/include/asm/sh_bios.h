/* eCos HAL interface header */

#ifndef SH_BIOS_H
#define SH_BIOS_H

#define HAL_IF_VECTOR_TABLE 0xfffe20
#define CALL_IF_SET_CONSOLE_COMM  13
#define QUERY_CURRENT -1
#define MANGLER       -3

/* Checking for GDB stub active */
/* suggestion Jonathan Larmour */
static int sh_bios_in_gdb_mode(void)
{
	static int gdb_active = -1;
	if (gdb_active == -1) {
		int (*set_console_comm)(int);
		set_console_comm = ((void **)HAL_IF_VECTOR_TABLE)[CALL_IF_SET_CONSOLE_COMM];
		gdb_active = (set_console_comm(QUERY_CURRENT) == MANGLER);
	}
	return gdb_active;
}

static void sh_bios_gdb_detach(void)
{

}

#endif
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:04 PM
Mon, Jul 25, 2016  6:19:53 PM
Mon, Jul 25, 2016  7:33:09 PM
Tue, Jul 26, 2016  2:09:18 PM
