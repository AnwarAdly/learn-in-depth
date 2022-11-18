/*
 * Q3.c
 *
 *  Created on: Nov 18, 2022
 *      Author: DELL
 */


#include <stdio.h>
#include <string.h>

void main(){
	char str[20];
	char *ptr = str;
	int i;
	printf("The entered is : ");
	fflush(stdout);
	gets(str);
	for(i=0;i<=strlen(str);i++){
		ptr++;
	}
	printf("The reversed is : ");
	for(i=strlen(str);i>=0;i--){
		ptr--;
		printf("%c",*ptr);
	}
}
