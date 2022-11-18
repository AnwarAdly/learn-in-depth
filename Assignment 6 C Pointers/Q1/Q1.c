/*
 * Q1.c
 *
 *  Created on: Nov 18, 2022
 *      Author: DELL
 */


#include <stdio.h>
void main(){
	int m=29;
	printf("Address of m : %p \tValue of m : %d\n",&m,m);
	int* ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of ab : %p \tValue of ab : %d\n",ab,*ab);
	m=34;
	printf("Now the value of m assigned to 34.\n");
	printf("Address of ab : %p \tValue of ab : %d\n",ab,*ab);
	*ab=7;
	printf("Now the value of ab assigned to 7.\n");
	printf("Address of m : %p \tValue of m : %d\n",&m,m);
}
