/*
 * Q5.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	char x;
	printf("Enter a character :");
	fflush(stdout);
	scanf("%c",&x);
	if ((x>='a' && x<='z') || (x>='A' && x<='Z'))
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);
}
