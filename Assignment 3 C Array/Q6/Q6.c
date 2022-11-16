/*
 * Q6.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */


#include <stdio.h>
#include <string.h>

void main (){
	char str[100] , element;
	int i,counter=0;
	printf("Enter a string : ");
	fflush(stdout); fflush(stdin);
	gets(str);
	printf("Enter element to search : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&element);
	for(i=0;i<strlen(str);i++){
		if(str[i]==element)
			counter++;
	}
	printf("Number of %c in string : %d",element,counter);
}
