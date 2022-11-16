/*
 * Q2.c
 *
 *  Created on: Nov 14, 2022
 *      Author: DELL
 */


#include <stdio.h>

int fact (int x);

void main(void){
	int a;
	printf("Enter number : ");
	fflush(stdout);
	scanf("%d",&a);
	printf("Factorial of %d is : %d",a,fact(a));

}

int fact (int x){
	if(x!=1)
		return x*fact(x-1);
}
