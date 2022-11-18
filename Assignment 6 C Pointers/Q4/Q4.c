/*
 * Q4.c
 *
 *  Created on: Nov 18, 2022
 *      Author: DELL
 */


#include <stdio.h>

void main(){
	int arr[20];
	int *ptr = arr;
	int i,size;
	printf("The size of array : ");
	fflush(stdout);
	scanf("%d",&size);
	printf("The entered array : ");
	fflush(stdout);
	for(i=0;i<size;i++){
		scanf("%d",ptr);
		ptr++;
	}
	printf("The reversed array : ");
	for(i=size;i>0;i--){
		ptr--;
		printf("%d ",*ptr);
	}
}
