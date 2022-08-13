
#include <stdio.h>
#include <stdlib.h>
#include "lifo.h"
unsigned int buffer1[5];
int main(void) {
	LIFO_BUF_t uart_lifo,I2C_lifo;
	LIFO_init(&uart_lifo,buffer1,5);
	unsigned int* buffer2 = (unsigned int *) malloc (5*sizeof(unsigned int));
	LIFO_init(&I2C_lifo, buffer2,5);

	int i,temper;
	for(i=0;i<5;i++)
		{
			if ( LIFO_add_item(&uart_lifo, i)==LIFO_NO_ERROR)
				printf("lifo add : %d\n",i);
		}
	for(i=0;i<5;i++)
		{
			if ( LIFO_get_item(&uart_lifo, &temper)==LIFO_NO_ERROR)
				printf("lifo get : %d\n",temper);
		}
}
