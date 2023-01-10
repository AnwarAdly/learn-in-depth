/*
 * LIFO.h
 *
 *  Created on: 6 Jan 2023
 *      Author: DELL
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"

//Datatypes of LIFO
typedef struct {
	unsigned int* base ;
	unsigned int* head ;
	unsigned int length;
	unsigned int count ;
}LIFO_buf_t;

//ERROR Status
typedef enum {
	LIFO_NO_ERROR,
	LIFO_IS_FULL ,
	LIFO_IS_EMPTY,
	LIFO_NULL
}LIFO_Status;

//APIs
LIFO_Status LIFO_init(LIFO_buf_t* LIFO , unsigned int* buf , unsigned int length);
LIFO_Status LIFO_push(LIFO_buf_t* LIFO , unsigned int  item);
LIFO_Status LIFO_pop (LIFO_buf_t* LIFO , unsigned int* item);

#endif /* LIFO_H_ */
