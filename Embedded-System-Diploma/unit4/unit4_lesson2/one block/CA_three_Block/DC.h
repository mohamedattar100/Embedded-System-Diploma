/*
 * DC.h
 *
 *  Created on: Aug 6, 2022
 *      Author: Mohamed
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"
//state
enum{
	DC_idle,
	DC_busy
}DC_state_id;

void DC_init();

state_define(DC_idle);
state_define(DC_busy);
extern void (*DC_state)();


#endif /* DC_H_ */
