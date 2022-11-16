/*
 * Q1.c
 *
 *  Created on: Nov 14, 2022
 *      Author: DELL
 */


#include <stdio.h>

int prime (int x);

void main(void){
	int a,b,c,i;
	printf("Enter intervals : ");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	printf("Prime numbers between %d and %d are : ",a,b);
	for(i=a+1;i<b;i++){
		c=prime(i);
		if (c==0)
			printf("%d ",i);
	}
}

int prime (int x){
	int j,z=0;
	for(j=2;j<=x/2;j++){
		if(x%j==0){
			z=1;
			break;
		}
	}
	return z;
}
