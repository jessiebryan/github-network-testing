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
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:37 PDT 2016
Sun, Jul 24, 2016  1:27:51 PM
Mon, Jul 25, 2016  6:37:37 PM
Mon, Jul 25, 2016  7:50:31 PM
Tue, Jul 26, 2016  2:25:46 PM
