#ifndef _UAPI_SPARC_TERMIOS_H
#define _UAPI_SPARC_TERMIOS_H

#include <asm/ioctls.h>
#include <asm/termbits.h>

#if defined(__KERNEL__) || defined(__DEFINE_BSD_TERMIOS)
struct sgttyb {
	char	sg_ispeed;
	char	sg_ospeed;
	char	sg_erase;
	char	sg_kill;
	short	sg_flags;
};

struct tchars {
	char	t_intrc;
	char	t_quitc;
	char	t_startc;
	char	t_stopc;
	char	t_eofc;
	char	t_brkc;
};

struct ltchars {
	char	t_suspc;
	char	t_dsuspc;
	char	t_rprntc;
	char	t_flushc;
	char	t_werasc;
	char	t_lnextc;
};
#endif /* __KERNEL__ */

struct winsize {
	unsigned short ws_row;
	unsigned short ws_col;
	unsigned short ws_xpixel;
	unsigned short ws_ypixel;
};


#endif /* _UAPI_SPARC_TERMIOS_H */
Tue Jul 19 12:49:03 PDT 2016
Fri Jul 22 16:06:20 PDT 2016
Sun, Jul 24, 2016  4:48:19 PM
Mon, Jul 25, 2016 11:36:52 PM
