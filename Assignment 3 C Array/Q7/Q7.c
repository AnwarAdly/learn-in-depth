/*
 * Q7.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */


#include<stdio.h>
void main(){
	char str[100];
	int i,counter=0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	for(i=0 ; str[i] != '\0';i++){
		counter++;
	}
	printf("The length of string : %d",counter);
}
