/*
 * Q5.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

int countOnes (int x);

void main (){
	int num;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Input : %d --> Numbers of ones in binary : %d",num,countOnes(num));

}

int countOnes (int x){
	int bin[10],i,counter=0;
	for(i=0;x>0;i++){
		bin[i]=x%2;
		x/=2;
		if(bin[i]==1)
			counter++;
	}
	return counter;
}
