/*
 * main.c
 *
 *  Created on: Aug 6, 2022
 *      Author: Mohamed
 */

#include "CA.h"
void setup()
{
	// init all drivers
	// init IRQ......
	//init BLOCK
	// set state pointer
	CA_state = state(CA_wating);
}

int main(void)
{
	setup();
	volatile int i;
	while(1)
	{
		CA_state();
		for ( i = 0; i < 1000; i++);
	}
}
