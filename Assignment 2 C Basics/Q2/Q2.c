/*
 * Q2.c
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
	if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U' )
		printf("%c is vowel",x);
	else
		printf("%c is consonant",x);
}
