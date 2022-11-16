/*
 * Q7.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int x ,i ,result=1;
	printf("Enter a positive integer :");
	fflush(stdout);
	scanf("%d",&x);
	if(x<0)
		printf("There is not factorial to negative numbers");
	else {
		for(i=1;x>=i;i++){
			result*=i;
		}
		printf("Factorial = %d",result);
	}

}
