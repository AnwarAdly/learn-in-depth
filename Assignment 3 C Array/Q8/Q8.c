/*
 * Q8.c
 *
 *  Created on: Nov 2, 2022
 *      Author: DELL
 */



#include <stdio.h>
#include <string.h>

void main (){
	char str[100],rev[100];
	int i,j=0;
	printf("Enter a string : ");
	fflush (stdout);	fflush(stdin);
	gets(str);
	for(i=strlen(str)-1;i>=0;i--){
		rev[j]=str[i];
		j++;
	}
	rev[j]='\0';
	printf("The reversed string : %s",rev);
}
