/*
 * Q6.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (void){
	int x,y,temp;
	printf("Enter value of x :");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter value of y :");
	fflush(stdout);
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("Value of x after swapping : %d \n",x);
	printf("Value of y after swapping : %d",y);

}
