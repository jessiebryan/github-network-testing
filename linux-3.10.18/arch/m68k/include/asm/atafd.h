#ifndef _ASM_M68K_FD_H
#define _ASM_M68K_FD_H

/* Definitions for the Atari Floppy driver */

struct atari_format_descr {
    int track;			/* to be formatted */
    int head;			/*   ""     ""     */
    int sect_offset;		/* offset of first sector */
};

#endif
Tue Jul 19 12:46:23 PDT 2016
Fri Jul 22 16:01:19 PDT 2016
Sun, Jul 24, 2016  4:09:44 PM
Mon, Jul 25, 2016 10:53:58 PM
