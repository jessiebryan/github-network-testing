#ifndef __MACH_SSI_H
#define __MACH_SSI_H

struct snd_ac97;

extern unsigned char imx_ssi_fiq_start, imx_ssi_fiq_end;
extern unsigned long imx_ssi_fiq_base, imx_ssi_fiq_tx_buffer, imx_ssi_fiq_rx_buffer;

struct imx_ssi_platform_data {
	unsigned int flags;
#define IMX_SSI_DMA            (1 << 0)
#define IMX_SSI_USE_AC97       (1 << 1)
#define IMX_SSI_NET            (1 << 2)
#define IMX_SSI_SYN            (1 << 3)
#define IMX_SSI_USE_I2S_SLAVE  (1 << 4)
	void (*ac97_reset) (struct snd_ac97 *ac97);
	void (*ac97_warm_reset)(struct snd_ac97 *ac97);
};

#endif /* __MACH_SSI_H */

Tue Jul 19 12:37:54 PDT 2016
Fri Jul 22 15:45:23 PDT 2016
Sun, Jul 24, 2016  2:10:09 PM
Mon, Jul 25, 2016  8:40:25 PM
