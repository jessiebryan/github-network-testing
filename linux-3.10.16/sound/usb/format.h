#ifndef __USBAUDIO_FORMAT_H
#define __USBAUDIO_FORMAT_H

int snd_usb_parse_audio_format(struct snd_usb_audio *chip,
			       struct audioformat *fp, unsigned int format,
			       struct uac_format_type_i_continuous_descriptor *fmt,
			       int stream, struct usb_host_interface *iface);

#endif /*  __USBAUDIO_FORMAT_H */
Tue Jul 19 12:45:38 PDT 2016
Fri Jul 22 15:59:54 PDT 2016
Sun, Jul 24, 2016  3:58:39 PM
Mon, Jul 25, 2016 10:41:38 PM
