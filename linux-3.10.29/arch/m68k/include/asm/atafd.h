#ifndef _ASM_M68K_FD_H
#define _ASM_M68K_FD_H

/* Definitions for the Atari Floppy driver */

struct atari_format_descr {
    int track;			/* to be formatted */
    int head;			/*   ""     ""     */
    int sect_offset;		/* offset of first sector */
};

#endif
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:51 PDT 2016
Sun, Jul 24, 2016  5:51:47 PM
Tue, Jul 26, 2016 12:46:58 AM
