/*
 * Q2.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

float sqrRoot (int x);

void main (){
	int num;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Input : %d --> Square root : %f",num,sqrRoot(num));

}

float sqrRoot (int x){		//x=10
	float y=0,sqrt=x/2;		//y=0 sqrt=5
	while (sqrt!=y){
		y=sqrt;				//y=5
		sqrt=(x/y+y)/2;		//sqrt=7/2=3.5
	}
	return sqrt;
}
