
#ifndef _atari_stdma_h
#define _atari_stdma_h


#include <linux/interrupt.h>


/***************************** Prototypes *****************************/

void stdma_lock(irq_handler_t handler, void *data);
void stdma_release( void );
int stdma_others_waiting( void );
int stdma_islocked( void );
void *stdma_locked_by( void );
void stdma_init( void );

/************************* End of Prototypes **************************/



#endif  /* _atari_stdma_h */
Tue Jul 19 12:45:10 PDT 2016
Fri Jul 22 15:58:58 PDT 2016
Sun, Jul 24, 2016  3:51:18 PM
Mon, Jul 25, 2016 10:33:29 PM
