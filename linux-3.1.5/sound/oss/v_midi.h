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
Tue Jul 19 12:36:36 PDT 2016
Fri Jul 22 15:43:00 PDT 2016
Sun, Jul 24, 2016  1:52:26 PM
Mon, Jul 25, 2016  8:19:30 PM
