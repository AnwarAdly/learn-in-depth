/*
 * Q4.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int x[10],i,j,n,y;
	printf("Enter number of elements : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Enter elements of array : ");
	fflush(stdout); fflush(stdin);
	for (i=0 ; i<n ; i++){
		scanf("%d ",&x[i]);
	}
	printf("Enter elements to be inserted : \n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&y);
	printf("Enter index of inserted elements : \n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&j);
	for(i=n;i>=j;i--){
		x[i]=x[i-1];
	}
	n+=1;
	x[j-1]=y;
	printf("The new array : ");
	for (i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}
