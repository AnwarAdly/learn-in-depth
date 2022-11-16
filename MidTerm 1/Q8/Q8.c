/*
 * Q8.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

void revArr (int x[]);

void main (){
	int arr[5]={1,2,3,4,5};
	printf("The entered array : 1 2 3 4 5 ");
	revArr(arr);
}

void revArr (int x[]){
	int i,rev[5];
	for (i=0;i<5;i++){
		rev[4-i]=x[i];
	}
	printf("\nThe reversed array : ");
	for(i=0;i<5;i++){
		printf("%d ",rev[i]);
	}
}
