/*
 * Q4.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int x;
	printf("Enter an integer :");
	fflush(stdout);
	scanf("%d",&x);
	if(x>=0)
		printf("%d is a positive integer",x);
	else
		printf("%d is a negative integer",x);
}
