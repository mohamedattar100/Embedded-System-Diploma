#include "uart.h"
unsigned char strin[100]="learn_in_depth:<mohamed>";
const unsigned char strin2[100]="learn_in_depth:<mohamed>";

void main(void)
{
	Uart_Send_String(strin);
}