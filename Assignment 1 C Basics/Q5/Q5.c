/*
 * Q5.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (void){
	char x;
	printf("Enter a character : ");
	fflush(stdout);
	scanf("%c",&x);
	printf("The ascii value of %c is %d",x,x);
}
