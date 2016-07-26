#ifndef _ASM_M68K_FD_H
#define _ASM_M68K_FD_H

/* Definitions for the Atari Floppy driver */

struct atari_format_descr {
    int track;			/* to be formatted */
    int head;			/*   ""     ""     */
    int sect_offset;		/* offset of first sector */
};

#endif
Tue Jul 19 12:39:49 PDT 2016
Fri Jul 22 15:49:12 PDT 2016
Sun, Jul 24, 2016  2:37:33 PM
Mon, Jul 25, 2016  9:10:53 PM
