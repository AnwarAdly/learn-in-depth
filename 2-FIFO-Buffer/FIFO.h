/*
 * FIFO.h
 *
 *  Created on: 6 Jan 2023
 *      Author: DELL
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"

typedef struct {
	unsigned int* base;
	unsigned int* head;
	unsigned int* tail;
	unsigned int  length;
	unsigned int  count;
}FIFO_buf_t;

typedef enum {
	FIFO_NO_ERROR,
	FIFO_EMPTY,
	FIFO_FULL,
	FIFO_NULL
}FIFO_Status;

FIFO_Status FIFO_init   (FIFO_buf_t* FIFO , unsigned int* buf , unsigned int length);
FIFO_Status FIFO_enqueue(FIFO_buf_t* FIFO , unsigned int  item);
FIFO_Status FIFO_dequeue(FIFO_buf_t* FIFO , unsigned int* item);
void FIFO_Print (FIFO_buf_t* FIFO);

#endif /* FIFO_H_ */
