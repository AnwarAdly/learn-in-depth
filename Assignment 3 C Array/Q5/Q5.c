/*
 * Q5.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int x[10],i,n,y;
	printf("Enter number of elements : ");
	fflush(stdout); 	fflush(stdin);
	scanf("%d",&n);
	printf("Enter elements of array : ");
	fflush(stdout);
	for (i=0 ; i<n ; i++){
		scanf("%d ",&x[i]);
	}
	printf("Enter element for search : ");
	fflush(stdout);	fflush(stdin);
	scanf("%d ",&y);
	for(i=0 ; i<n;i++){
		if(y==x[i])
			printf("The searched element index : %d",i+1);
	}
}
