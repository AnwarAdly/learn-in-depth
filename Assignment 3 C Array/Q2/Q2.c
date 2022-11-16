/*
 * Q2.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int n , i ;
	float x[50],s=0;
	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d . Enter number : ",i+1);
		fflush(stdout);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++){
		s+=x[i];
	}
	printf("The average of array : %f",s/n);
}
