/*
 * CA.h
 *
 *  Created on: Aug 6, 2022
 *      Author: Mohamed
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"
//state
enum{
	CA_wating,
	CA_driving
}CA_state_id;
state_define(CA_wating);
state_define(CA_driving);
extern void (*CA_state)();


#endif /* CA_H_ */
