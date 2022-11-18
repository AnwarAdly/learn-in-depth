/*
 * Q2.c
 *
 *  Created on: Nov 18, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main(){
	char alph[26];
	char *ptr = alph;
	int i;
	for(i=0;i<26;i++){
		*ptr=i+'A';
		ptr++;
	}
	ptr=alph;
	printf("The alphapet is : ");
	for(i=0;i<26;i++){
		printf("%c ",*ptr++);
	}
}
