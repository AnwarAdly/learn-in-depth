/*
 * app.c
 *
 *  Created on: 9 Jan 2023
 *      Author: DELL
 */


#include "CA.h"
#include "DC.h"
#include "US.h"

void setup(){
	DC_init();
	US_init();
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}

void main(){
	volatile int d;
	setup();
	while(1){
		US_state();
		CA_state();
		DC_state();
		for(d=0;d<=1000;d++);
	}
}

