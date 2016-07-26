#ifndef _ASM_M68K_FD_H
#define _ASM_M68K_FD_H

/* Definitions for the Atari Floppy driver */

struct atari_format_descr {
    int track;			/* to be formatted */
    int head;			/*   ""     ""     */
    int sect_offset;		/* offset of first sector */
};

#endif
Tue Jul 19 12:49:36 PDT 2016
Fri Jul 22 16:07:20 PDT 2016
Sun, Jul 24, 2016  4:55:53 PM
Mon, Jul 25, 2016 11:45:19 PM
