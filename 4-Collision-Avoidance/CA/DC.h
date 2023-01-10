/*
 * DC_Motor.h
 *
 *  Created on: 9 Jan 2023
 *      Author: DELL
 */

#ifndef DC_H_
#define DC_H_

#include "state.h"

enum {
	DC_idle,
	DC_busy
}DC_state_id;

void DC_init();
STATE_define(DC_idle);
STATE_define(DC_busy);


void (*DC_state)();

#endif /* DC_H_ */
