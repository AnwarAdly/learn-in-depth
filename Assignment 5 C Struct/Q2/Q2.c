/*
 * Q2.c
 *
 *  Created on: Nov 16, 2022
 *      Author: DELL
 */


#include <stdio.h>
#include <string.h>

struct Sdistance {
	float feet;
	float inch;
}d1,d2,sum;

void main(){
	printf("Enter information of first distance : ");
	printf("\nEnter feet : ");
	fflush(stdout);
	scanf("%f",&d1.feet);
	printf("Enter inch : ");
	fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Enter information of second distance : ");
	printf("\nEnter feet : ");
	fflush(stdout);
	scanf("%f",&d2.feet);
	printf("Enter inch : ");
	fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=(d1.inch+d2.inch)*0.083;
	sum.feet+=sum.inch;
	printf("Sum of two distances : %f feets",sum.feet);
}
