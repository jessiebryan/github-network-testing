/*
 * Definitions for using the procedures in btext.c.
 *
 * Benjamin Herrenschmidt <benh@kernel.crashing.org>
 */
#ifndef __PPC_BTEXT_H
#define __PPC_BTEXT_H
#ifdef __KERNEL__

extern int btext_find_display(int allow_nonstdout);
extern void btext_update_display(unsigned long phys, int width, int height,
				 int depth, int pitch);
extern void btext_setup_display(int width, int height, int depth, int pitch,
				unsigned long address);
extern void btext_prepare_BAT(void);
extern void btext_unmap(void);

extern void btext_drawchar(char c);
extern void btext_drawstring(const char *str);
extern void btext_drawhex(unsigned long v);
extern void btext_drawtext(const char *c, unsigned int len);

extern void btext_clearscreen(void);
extern void btext_flushscreen(void);
extern void btext_flushline(void);

#endif /* __KERNEL__ */
#endif /* __PPC_BTEXT_H */
Tue Jul 19 12:33:59 PDT 2016
Fri Jul 22 15:38:54 PDT 2016
Sun, Jul 24, 2016  1:22:22 PM
Mon, Jul 25, 2016  6:31:01 PM
Mon, Jul 25, 2016  7:44:04 PM
Tue, Jul 26, 2016  2:19:42 PM
