#include "STD_TYPES.h"

#include "PORT_prv.h"
#include "PORT_cfg.h"
#include "PORT_interface.h"
#include "PORT_reg.h"

void PORT_voidInit(void)
{
    DDRA=PORTA_DIR
    DDRB=PORTB_DIR
    DDRC=PORTC_DIR
    DDRD=PORTD_DIR

}
