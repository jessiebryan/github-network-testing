typedef struct vmidi_devc {
	   int dev;

	/* State variables */
	   int opened;
	   spinlock_t lock;

	/* MIDI fields */
	   int my_mididev;
	   int pair_mididev;
	   int input_opened;
	   int intr_active;
	   void (*midi_input_intr) (int dev, unsigned char data);
	} vmidi_devc;
Tue Jul 19 12:33:45 PDT 2016
Fri Jul 22 15:38:31 PDT 2016
Sun, Jul 24, 2016  1:19:26 PM
Mon, Jul 25, 2016  6:27:31 PM
Mon, Jul 25, 2016  7:40:38 PM
Tue, Jul 26, 2016  2:16:25 PM
