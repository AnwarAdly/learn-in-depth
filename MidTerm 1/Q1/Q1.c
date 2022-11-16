/*
 * Q1.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

int sumDigits (int x);

void main (){
	int num;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Input : %d --> Sum of all digits : %d",num,sumDigits(num));

}

int sumDigits (int x){
	int rem=0,sum=0;
	while (x!=0){
		rem=x%10;
		sum+=rem;
		x/=10;
	}
	return sum;
}
