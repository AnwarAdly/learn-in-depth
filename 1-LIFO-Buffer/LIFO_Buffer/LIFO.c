/*
 * LIFO.c
 *
 *  Created on: 6 Jan 2023
 *      Author: DELL
 */


#include "LIFO.h"
LIFO_Status LIFO_init(LIFO_buf_t* LIFO , unsigned int* buf , unsigned int length){
	if(buf==NULL)
		return LIFO_NULL;
	LIFO->base   = buf;
	LIFO->head   = buf;
	LIFO->length = length;
	LIFO->count  = 0;
	return LIFO_NO_ERROR ;
}
LIFO_Status LIFO_push(LIFO_buf_t* LIFO , unsigned int item ){
	if (!LIFO || !LIFO->base || !LIFO->head)
		return LIFO_NULL;
	if (LIFO->count == LIFO->length)
		return LIFO_IS_FULL;
	*(LIFO->head)=item;
	LIFO->head++;
	LIFO->count++;
	return LIFO_NO_ERROR;
}
LIFO_Status LIFO_pop (LIFO_buf_t* LIFO , unsigned int* item){
	if (!LIFO || !LIFO->base || !LIFO->head)
		return LIFO_NULL;
	if (LIFO->count == 0)
		return LIFO_IS_EMPTY;
	LIFO->head--;
	*item=  *(LIFO->head);
	LIFO->count--;
	return LIFO_NO_ERROR;
}
