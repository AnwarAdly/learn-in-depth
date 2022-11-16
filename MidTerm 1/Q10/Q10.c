/*
 * Q10.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

int countOnes (int x);

void main (){
	int num;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Input : %d --> Max ones between two zeroes : %d",num,countOnes(num));

}

int countOnes (int x){
	int counter=0;
	while (x!=0){
		x=(x&(x<<1));
		counter++;
	}
	return counter;
}

