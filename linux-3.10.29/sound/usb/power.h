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
Tue Jul 19 12:54:00 PDT 2016
Fri Jul 22 16:15:51 PDT 2016
Sun, Jul 24, 2016  5:59:12 PM
Tue, Jul 26, 2016 12:55:08 AM
