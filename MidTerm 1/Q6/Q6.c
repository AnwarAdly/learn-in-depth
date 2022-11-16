/*
 * Q6.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

int uniqueNo (int x[],int size);

void main (){
	int arr[5]={4,3,4,5,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Input : {4,3,4,5,3} --> Unique number in array : %d",uniqueNo(arr,size));

}

int uniqueNo (int x[],int size){
	int i,uni=0;
	for(i=0;i<size;i++)
		uni^=x[i];
	return uni;
}
