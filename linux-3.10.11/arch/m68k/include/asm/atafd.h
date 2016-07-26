#ifndef _ASM_M68K_FD_H
#define _ASM_M68K_FD_H

/* Definitions for the Atari Floppy driver */

struct atari_format_descr {
    int track;			/* to be formatted */
    int head;			/*   ""     ""     */
    int sect_offset;		/* offset of first sector */
};

#endif
Tue Jul 19 12:41:49 PDT 2016
Fri Jul 22 15:53:02 PDT 2016
Sun, Jul 24, 2016  3:05:12 PM
Mon, Jul 25, 2016  9:42:02 PM
