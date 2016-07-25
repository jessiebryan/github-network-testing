#define MAXPACK 50
#define MAXBUFFERMS 100
#define MAXSTRIDE 3

#define SSS (((MAXPACK*MAXBUFFERMS*MAXSTRIDE + 4096) / 4096) * 4096)
struct snd_usX2Y_hwdep_pcm_shm {
	char playback[SSS];
	char capture0x8[SSS];
	char capture0xA[SSS];
	volatile int playback_iso_head;
	int playback_iso_start;
	struct {
		int	frame,
			offset,
			length;
	} captured_iso[128];
	volatile int captured_iso_head;
	volatile unsigned captured_iso_frames;
	int capture_iso_start;
};

int usX2Y_hwdep_pcm_new(struct snd_card *card);
Tue Jul 19 12:45:38 PDT 2016
Fri Jul 22 15:59:54 PDT 2016
Sun, Jul 24, 2016  3:58:40 PM
