/*
 * Q1.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	float a[2][2] , b[2][2] , s[2][2];
	int i,j;
	printf("Enter elements of array a : \n");
	for (i=0 ; i<2 ; i++){
		for (j=0 ; j<2 ; j++ ){
			printf("Element a%d%d : ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter elements of array b : \n");
	for (i=0 ; i<2 ; i++){
		for (j=0 ; j<2 ; j++ ){
			printf("Element b%d%d : ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	for (i=0 ; i<2 ; i++){
		for (j=0 ; j<2 ; j++ ){
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of matrix : \n");
	for (i=0 ; i<2 ; i++){
		for (j=0 ; j<2 ; j++ ){
			printf("%f ",s[i][j]);
			if (j==1)
				printf("\n");
		}
	}


}
