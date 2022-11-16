/*
 * Q1.c
 *
 *  Created on: Nov 16, 2022
 *      Author: DELL
 */


#include <stdio.h>
#include <string.h>

struct Sstudent {
	char name[50];
	int roll_number;
	float marks;
}s;

void main(){
	printf("Enter information of student : ");
	printf("\nEnter name : ");
	fflush(stdout);
	gets(s.name);
	printf("Enter roll number : ");
	fflush(stdout);
	scanf("%d",&s.roll_number);
	printf("Enter marks : ");
	fflush(stdout);
	scanf("%f",&s.marks);
	printf("Displaying informations : \n Name : %s \n Roll number : %d \n Marks : %f \n ",s.name,s.roll_number,s.marks);
}
