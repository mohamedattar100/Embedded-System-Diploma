/*
 * DC.c
 *
 *  Created on: Aug 6, 2022
 *      Author: Mohamed
 */
//variables not appear outside

#include "DC.h"

int DC_speed=0;





//state pointer to func
void (*DC_state)();

void DC_init()
{
	//init DC motor
	printf("DC MOTOR INIT \n");
}

void DC_motor(int s)
{
	DC_speed=s;
	DC_state=state(DC_busy);
}

state_define(DC_idle){
	DC_state_id = DC_idle;
	
	printf("DC_idle_state_speed = %d \n",DC_speed);
}

state_define(DC_busy){
	DC_state_id = DC_busy;

	printf("DC_busy_state_speed = %d \n",DC_speed);
	DC_state=state(DC_idle);

}

