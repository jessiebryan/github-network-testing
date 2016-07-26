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
Tue Jul 19 12:44:23 PDT 2016
Fri Jul 22 15:57:33 PDT 2016
Sun, Jul 24, 2016  3:40:14 PM
Mon, Jul 25, 2016 10:21:07 PM
