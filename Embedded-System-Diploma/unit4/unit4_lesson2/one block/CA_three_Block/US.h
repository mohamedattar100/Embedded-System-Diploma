/*
 * US.h
 *
 *  Created on: Aug 6, 2022
 *      Author: Mohamed
 */

#ifndef US_H_
#define US_H_
#include "state.h"
//state
enum{
	US_busy
}US_state_id;

void US_init();
state_define(US_busy);

extern void (*US_state)();


#endif /* US_H_ */
