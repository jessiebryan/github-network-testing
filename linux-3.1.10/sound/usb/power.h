#ifndef __USBAUDIO_POWER_H
#define __USBAUDIO_POWER_H

#ifdef CONFIG_PM
int snd_usb_autoresume(struct snd_usb_audio *chip);
void snd_usb_autosuspend(struct snd_usb_audio *chip);
#else
static inline int snd_usb_autoresume(struct snd_usb_audio *chip)
{
	return 0;
}
static inline void snd_usb_autosuspend(struct snd_usb_audio *chip)
{
}
#endif

#endif /* __USBAUDIO_POWER_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:32 PDT 2016
Sun, Jul 24, 2016  1:19:36 PM
Mon, Jul 25, 2016  6:27:43 PM
Mon, Jul 25, 2016  7:40:50 PM
Tue, Jul 26, 2016  2:16:35 PM
