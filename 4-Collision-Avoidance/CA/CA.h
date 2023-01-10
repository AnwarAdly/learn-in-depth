/*
 * CA.h
 *
 *  Created on: 9 Jan 2023
 *      Author: DELL
 */

#ifndef CA_H_
#define CA_H_

#include "state.h"

enum {
	CA_waiting,
	CA_driving
}CA_state_id;

STATE_define(CA_waiting);
STATE_define(CA_driving);


void (*CA_state)();

#endif /* CA_H_ */
