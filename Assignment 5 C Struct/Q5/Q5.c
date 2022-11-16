/*
 * Q5.c
 *
 *  Created on: Nov 16, 2022
 *      Author: DELL
 */


#include <stdio.h>

#define PI 3.14
#define area(r) (PI*r*r)

void main(){
	int rad;
	float area;
	printf("Enter radius of circle : ");
	fflush(stdout);
	scanf("%d",&rad);
	area=area(rad);
	printf("Area of circle = %.2f",area);
}
