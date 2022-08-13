/*
 * main.c
 *
 *  Created on: Aug 6, 2022
 *      Author: Mohamed
 */

#include "CA.h"
#include "US.h"
#include "DC.h"
void setup()
{
	// init all drivers
	// init IRQ......
	//init BLOCK
	// set state pointer
	CA_state = state(CA_wating);
	DC_state=state(DC_idle);
	US_state=state(US_busy);
}

int main(void)
{
	setup();
	volatile int i;
	while(1)
	{
		US_state();
		CA_state();
		DC_state();
		for ( i = 0; i < 1000; i++);
	}
}
