/*
 * arch/arm/plat-omap/include/mach/board-ams-delta.h
 *
 * Copyright (C) 2006 Jonathan McDowell <noodles@earth.li>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN
 * NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#ifndef __ASM_ARCH_OMAP_AMS_DELTA_H
#define __ASM_ARCH_OMAP_AMS_DELTA_H

#if defined (CONFIG_MACH_AMS_DELTA)

#define AMD_DELTA_LATCH2_SCARD_RSTIN	0x0400
#define AMD_DELTA_LATCH2_SCARD_CMDVCC	0x0800
#define AMS_DELTA_LATCH2_MODEM_CODEC	0x2000

#define AMS_DELTA_GPIO_PIN_KEYBRD_DATA	0
#define AMS_DELTA_GPIO_PIN_KEYBRD_CLK	1
#define AMS_DELTA_GPIO_PIN_MODEM_IRQ	2
#define AMS_DELTA_GPIO_PIN_HOOK_SWITCH	4
#define AMS_DELTA_GPIO_PIN_SCARD_NOFF	6
#define AMS_DELTA_GPIO_PIN_SCARD_IO	7
#define AMS_DELTA_GPIO_PIN_CONFIG	11
#define AMS_DELTA_GPIO_PIN_NAND_RB	12

#define AMS_DELTA_GPIO_PIN_LCD_VBLEN		240
#define AMS_DELTA_GPIO_PIN_LCD_NDISP		241
#define AMS_DELTA_GPIO_PIN_NAND_NCE		242
#define AMS_DELTA_GPIO_PIN_NAND_NRE		243
#define AMS_DELTA_GPIO_PIN_NAND_NWP		244
#define AMS_DELTA_GPIO_PIN_NAND_NWE		245
#define AMS_DELTA_GPIO_PIN_NAND_ALE		246
#define AMS_DELTA_GPIO_PIN_NAND_CLE		247
#define AMS_DELTA_GPIO_PIN_KEYBRD_PWR		248
#define AMS_DELTA_GPIO_PIN_KEYBRD_DATAOUT	249
#define AMS_DELTA_GPIO_PIN_SCARD_RSTIN		250
#define AMS_DELTA_GPIO_PIN_SCARD_CMDVCC		251
#define AMS_DELTA_GPIO_PIN_MODEM_NRESET		252
#define AMS_DELTA_GPIO_PIN_MODEM_CODEC		253

#define AMS_DELTA_LATCH2_GPIO_BASE	AMS_DELTA_GPIO_PIN_LCD_VBLEN
#define AMS_DELTA_LATCH2_NGPIO		16

#ifndef __ASSEMBLY__
void ams_delta_latch_write(int base, int ngpio, u16 mask, u16 value);
#define ams_delta_latch2_write(mask, value) \
	ams_delta_latch_write(AMS_DELTA_LATCH2_GPIO_BASE, \
			AMS_DELTA_LATCH2_NGPIO, (mask), (value))
#endif

#endif /* CONFIG_MACH_AMS_DELTA */

#endif /* __ASM_ARCH_OMAP_AMS_DELTA_H */
Tue Jul 19 12:48:51 PDT 2016
Fri Jul 22 16:05:56 PDT 2016
Sun, Jul 24, 2016  4:45:25 PM
Mon, Jul 25, 2016 11:33:38 PM
