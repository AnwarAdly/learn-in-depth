/*
 * app.c
 *
 *  Created on: 6 Jan 2023
 *      Author: DELL
 */


#include "LIFO.h"

unsigned int buf[5];
void main (void){
	int i, temp=0;
	LIFO_buf_t Uart_Lifo;
	LIFO_init(&Uart_Lifo,buf,5);
	for (i=0;i<5;i++){
		if (LIFO_push(&Uart_Lifo , i)==LIFO_NO_ERROR)
			printf("UART LIFO Push : %d \n",i);
	}
	for (i=0;i<5;i++){
		if (LIFO_pop(&Uart_Lifo , &temp)==LIFO_NO_ERROR)
			printf("\nUART LIFO Pop  : %d",temp);
	}
}
