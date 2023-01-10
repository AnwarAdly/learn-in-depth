/*
 * FIFO.c
 *
 *  Created on: 6 Jan 2023
 *      Author: DELL
 */

#include "FIFO.h"

FIFO_Status FIFO_init   (FIFO_buf_t* FIFO , unsigned int* buf , unsigned int length){
	if(buf==NULL)
		return FIFO_NULL;
	FIFO->base = buf;
	FIFO->head = buf;
	FIFO->tail = buf;
	FIFO->length = length;
	FIFO->count = 0;
	return FIFO_NO_ERROR;
}
FIFO_Status FIFO_enqueue(FIFO_buf_t* FIFO , unsigned int  item){
	if(!FIFO || !FIFO->base || !FIFO->head)
		return FIFO_NULL;
	if (FIFO->length == FIFO->count)
		return FIFO_FULL;
	*(FIFO->head) = item;
	if (FIFO->count == FIFO->length)
		FIFO->head = FIFO->base;
	else
		FIFO->head++;
	FIFO->count++;
	return FIFO_NO_ERROR;
}
FIFO_Status FIFO_dequeue(FIFO_buf_t* FIFO , unsigned int* item){
	if(!FIFO || !FIFO->base || !FIFO->head)
		return FIFO_NULL;
	if (FIFO->count==0)
		return FIFO_EMPTY;
	*item = *(FIFO->tail);
	if (FIFO->tail == (FIFO->base +(FIFO->length * sizeof(unsigned int))))
		FIFO->tail = FIFO->base;
	else
		FIFO->tail++;
	FIFO->count--;
	return FIFO_NO_ERROR;
}
void FIFO_Print (FIFO_buf_t* FIFO){
	unsigned int i , *temp;
	if (FIFO->count==0)
		printf("FIFO is empty \n");
	else{
		temp = FIFO->tail;
		printf("===========FIFO PRINT==========\n");
		for (i=0;i<FIFO->count;i++){
			printf("%d \n",*temp);
			temp++;
		}
	}
}


