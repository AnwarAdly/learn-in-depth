/*
 * Q6.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int x ,i ,result=0;
	printf("Enter a positive integer :");
	fflush(stdout);
	scanf("%d",&x);
	for(i=1;x>=i;i++){
		result+=i;
	}
	printf("The result = %d",result);

}
