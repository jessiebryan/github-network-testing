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
Tue Jul 19 12:39:03 PDT 2016
Fri Jul 22 15:47:37 PDT 2016
Sun, Jul 24, 2016  2:26:18 PM
Mon, Jul 25, 2016  8:58:21 PM
