/*
 * Q9.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>
#include <string.h>

void revStr (char x[]);

void main (){
	char str[100];
	printf("The entered string :");
	fflush(stdout);
	gets(str);
	revStr(str);
}

void revStr (char x[]){
	char rev[100];
	int i,j,k=0;
	printf("The reversed string : ");
	for (i=strlen(x)-1;i>=0;i--){
		if (x[i]==' '){
			for (j=k-1;j>=0;j--){
				printf("%c",rev[j]);
			}
			printf(" ");
			k=0;
		}
		else{
			rev[k]=x[i];
			k++;
		}
	}
	if(k!=0){
		for(j=k-1;j>=0;j--){
			printf("%c",rev[j]);
		}
	}
}
