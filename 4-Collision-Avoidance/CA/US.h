/*
 * US.h
 *
 *  Created on: 9 Jan 2023
 *      Author: DELL
 */

#ifndef US_H_
#define US_H_

#include "state.h"

enum {
	US_busy
}US_state_id;

void US_init();
STATE_define(US_busy);

void (*US_state)();


#endif /* US_H_ */
