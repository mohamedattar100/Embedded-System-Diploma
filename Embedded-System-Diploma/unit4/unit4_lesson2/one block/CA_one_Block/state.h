/*
 * state.h
 *
 *  Created on: Aug 6, 2022
 *      Author: Mohamed
 */

#ifndef STATE_H_
#define STATE_H_

#include <stdio.h>
#include <stdlib.h>

#define state_define(_stateFunc_)  void ST_##_stateFunc_()
#define state(_stateFunc_) ST_##_stateFunc_


#endif /* STATE_H_ */
