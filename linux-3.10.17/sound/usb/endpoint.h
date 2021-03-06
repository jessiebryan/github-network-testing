#ifndef __USBAUDIO_ENDPOINT_H
#define __USBAUDIO_ENDPOINT_H

#define SND_USB_ENDPOINT_TYPE_DATA     0
#define SND_USB_ENDPOINT_TYPE_SYNC     1

struct snd_usb_endpoint *snd_usb_add_endpoint(struct snd_usb_audio *chip,
					      struct usb_host_interface *alts,
					      int ep_num, int direction, int type);

int snd_usb_endpoint_set_params(struct snd_usb_endpoint *ep,
				snd_pcm_format_t pcm_format,
				unsigned int channels,
				unsigned int period_bytes,
				unsigned int rate,
				struct audioformat *fmt,
				struct snd_usb_endpoint *sync_ep);

int  snd_usb_endpoint_start(struct snd_usb_endpoint *ep, bool can_sleep);
void snd_usb_endpoint_stop(struct snd_usb_endpoint *ep);
void snd_usb_endpoint_sync_pending_stop(struct snd_usb_endpoint *ep);
int  snd_usb_endpoint_activate(struct snd_usb_endpoint *ep);
int  snd_usb_endpoint_deactivate(struct snd_usb_endpoint *ep);
void snd_usb_endpoint_free(struct list_head *head);

int snd_usb_endpoint_implicit_feedback_sink(struct snd_usb_endpoint *ep);
int snd_usb_endpoint_next_packet_size(struct snd_usb_endpoint *ep);

void snd_usb_handle_sync_urb(struct snd_usb_endpoint *ep,
			     struct snd_usb_endpoint *sender,
			     const struct urb *urb);

#endif /* __USBAUDIO_ENDPOINT_H */
Tue Jul 19 12:46:15 PDT 2016
Fri Jul 22 16:01:04 PDT 2016
Sun, Jul 24, 2016  4:07:52 PM
Mon, Jul 25, 2016 10:51:53 PM
