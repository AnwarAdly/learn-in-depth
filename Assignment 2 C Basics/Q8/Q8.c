/*
 * Q8.c
 *
 *  Created on: Nov 1, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main (){
	char x;
	int y,z;
	printf("Enter the operator : ");
	fflush(stdout);
	scanf("%c",&x);
	printf("Enter the two operand : ");
	fflush(stdout);
	scanf("%d %d",&y , &z);
	switch(x){
	case'+' : printf("%d + %d = %d",y,z,y+z);	break;
	case'-' : printf("%d - %d = %d",y,z,y-z);	break;
	case'/' : printf("%d / %d = %d",y,z,y/z);	break;
	case'*' : printf("%d * %d = %d",y,z,y*z);	break;
	default : printf("Wrong operator");			break;
	}
}
