/*
 * Q1.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (void){
	int x;
	printf("Enter a number you want to checked :");
	fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);
}
