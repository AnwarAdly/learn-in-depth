/*
 * Q7.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

int sum (int x);

void main (){
	printf("Sum of numbers from 0 to 100 : %d",sum(100));
}

int sum (int x){
	if (x>0)
		return x+sum(x-1);
}
