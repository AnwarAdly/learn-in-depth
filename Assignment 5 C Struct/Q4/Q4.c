/*
 * Q4.c
 *
 *  Created on: Nov 16, 2022
 *      Author: DELL
 */


#include <stdio.h>
#include <string.h>

struct Sstudent {
	char name[50];
	float marks;
}s[3];

void main(){
	int i;
	printf("Enter information of students : \n");
	for(i=0;i<3;i++){
		printf("Student's roll number : %d \n",i+1);
		printf("Enter name : ");
		fflush(stdout);	fflush(stdin);
		gets(s[i].name);
		printf("Enter marks : ");
		fflush(stdout);	fflush(stdin);
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<3;i++){
		printf("Displaying informations : \nRoll number : %d \nName : %s \n Marks : %f \n ",i+1,s[i].name,s[i].marks);

	}
}
