/*
 * arch/xtensa/platform/xtavnet/include/platform/lcd.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001, 2006 Tensilica Inc.
 */

#ifndef __XTENSA_XTAVNET_LCD_H
#define __XTENSA_XTAVNET_LCD_H

#ifdef CONFIG_XTFPGA_LCD
/* Display string STR at position POS on the LCD. */
void lcd_disp_at_pos(char *str, unsigned char pos);

/* Shift the contents of the LCD display left or right. */
void lcd_shiftleft(void);
void lcd_shiftright(void);
#else
static inline void lcd_disp_at_pos(char *str, unsigned char pos)
{
}

static inline void lcd_shiftleft(void)
{
}

static inline void lcd_shiftright(void)
{
}
#endif

#endif
Tue Jul 19 12:40:38 PDT 2016
Fri Jul 22 15:50:46 PDT 2016
Sun, Jul 24, 2016  2:48:56 PM
Mon, Jul 25, 2016  9:23:42 PM
