/*
 * Q3.c
 *
 *  Created on: Nov 16, 2022
 *      Author: DELL
 */


#include <stdio.h>
#include <string.h>

struct Scomplex {
	float real;
	float imag;
}c1,c2,sum;

void addComplex (struct Scomplex x, struct Scomplex y);

void main(){
	printf("Enter first complex number : ");
	printf("\nEnter real : ");
	fflush(stdout);
	scanf("%f",&c1.real);
	printf("Enter imag : ");
	fflush(stdout);
	scanf("%f",&c1.imag);
	printf("Enter second complex number : ");
	printf("\nEnter real : ");
	fflush(stdout);
	scanf("%f",&c2.real);
	printf("Enter imag : ");
	fflush(stdout);
	scanf("%f",&c2.imag);
	addComplex(c1,c2);
}

void addComplex (struct Scomplex x, struct Scomplex y){
	sum.real=x.real+y.real;
	sum.imag=x.imag+y.imag;
	printf("Sum of two complex : %f+%fi",sum.real,sum.imag);
}
