/*
 * Q3.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	int x,y,z;
	printf("Enter three numbers : ");
	fflush(stdout);
	scanf("%d %d %d",&x ,&y ,&z);
	if(x>y && x>z)
		printf("%d is Largest number",x);
	else if (y>z)
		printf("%d is Largest number",y);
	else
		printf("%d is Largest number",z);
}
