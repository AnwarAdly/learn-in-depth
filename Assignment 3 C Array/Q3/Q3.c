/*
 * Q3.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int x[10][10],t[10][10],i,j,r,c;
	printf("Enter size rxc of array : ");
	fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("Enter elements of array : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Element x%d%d : ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&x[i][j]);
		}
	}
	printf("Entered matrix :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",x[i][j]);
			if(j==c-1)
				printf("\n");
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[j][i]=x[i][j];
		}
	}
	printf("The transpose of matrix :\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ",t[i][j]);
			if(j==r-1)
				printf("\n");
		}
	}
}
