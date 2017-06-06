#include <msp430x14x.h>
#include "hello149.c"
#include "149uart.c"
#include "atcommand.h"
void main(void) 
{   
  WatchDog_off();
  Clock_Init();
  UART_Init();
  while(1)
  {
    printf(HELLOWORLD);
    printf(EOLTEST);
    //Send_Byte('a');
    delay_ms(1000);       
  }
}
