#ifndef __WINBOND_WB35TX_F_H
#define __WINBOND_WB35TX_F_H

#include "core.h"

/*
 * ====================================
 * Interface function declare
 * ====================================
 */
unsigned char Wb35Tx_initial(struct hw_data *hw_data);
void Wb35Tx_destroy(struct hw_data *hw_data);
unsigned char Wb35Tx_get_tx_buffer(struct hw_data *hw_data, u8 **buffer);

void Wb35Tx_EP2VM_start(struct wbsoft_priv *adapter);

void Wb35Tx_start(struct wbsoft_priv *adapter);
void Wb35Tx_stop(struct hw_data *hw_data);

void Wb35Tx_CurrentTime(struct wbsoft_priv *adapter, u32 time_count);

#endif
Tue Jul 19 12:49:53 PDT 2016
Fri Jul 22 16:07:54 PDT 2016
Sun, Jul 24, 2016  5:00:14 PM
