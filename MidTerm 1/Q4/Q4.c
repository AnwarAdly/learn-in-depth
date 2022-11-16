/*
 * Q4.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

int revDigits (int x);

void main (){
	int num;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Input : %d --> Reverse of digits : %d",num,revDigits(num));

}

int revDigits (int x){
	int rem=0,rev=0;
	while (x!=0){
		rem=x%10;
		rev=rev*10+rem;
		x/=10;
	}
	return rev;
}
