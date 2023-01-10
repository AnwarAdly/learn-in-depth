/*
 * main.c
 *
 *  Created on: 6 Jan 2023
 *      Author: DELL
 */



#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"

#define DPRINTF(...)		{fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}

struct sData{
	int ID;
	char name[20];
	float height;
};

struct student{
	struct sData student;
	struct student* NextStudent;
};

struct student* FirstStudent = NULL;
char temp[20];

void Add_Student(){
	struct student* NewStudent;
	struct student* LastStudent;
	if (FirstStudent == NULL){ //if list is empty so create the first node
		NewStudent = (struct student*) malloc (sizeof(struct student));
		FirstStudent = NewStudent;
	}
	else{ // if list have last nodes so first go to last node then add new node to others
		LastStudent = FirstStudent ;
		while (LastStudent->NextStudent)
			LastStudent = LastStudent->NextStudent;
		NewStudent = (struct student*) malloc (sizeof(struct student));
		LastStudent->NextStudent=NewStudent;
	}
	//fill the new node
	DPRINTF("\n Enter the ID : ");
	gets(temp);
	NewStudent->student.ID = atoi(temp);
	DPRINTF("\n Enter student full name : ");
	gets(NewStudent->student.name);
	DPRINTF("\n Enter the height : ");
	gets(temp);
	NewStudent->student.height = atof(temp);
	//set the next node to null
	NewStudent->NextStudent = NULL;
}
int Delete_Student (){
	int selected_id;
	DPRINTF("\n Enter the selected ID : ");
	gets(temp);
	selected_id = atoi(temp);
	if(FirstStudent){
		struct student* PreviousStudent = NULL;
		struct student* SelectedStudent = FirstStudent;
		while(SelectedStudent){
			if(SelectedStudent->student.ID == selected_id){
				if(PreviousStudent)
					PreviousStudent->NextStudent = SelectedStudent->NextStudent;
				else
					FirstStudent = SelectedStudent->NextStudent;
				free (SelectedStudent);
				return 1;
			}
			PreviousStudent = SelectedStudent;
			SelectedStudent = SelectedStudent->NextStudent;
		}
	}
	DPRINTF("\n Can not find student id");
	return 0;
}
void View_Students(){
	int count =0;
	struct student* CurrentStudent = FirstStudent;
	if (FirstStudent == NULL)
		DPRINTF("\n Empty List");
	while(CurrentStudent){
		DPRINTF("\n Record number : %d",count+1);
		DPRINTF("\n ID : %d",CurrentStudent->student.ID);
		DPRINTF("\n Name : %s",CurrentStudent->student.name);
		DPRINTF("\n Height : %f",CurrentStudent->student.height);
		CurrentStudent = CurrentStudent->NextStudent;
		count++;
	}
}
void Delete_All(){
	struct student* CurrentStudent = FirstStudent;
	if (FirstStudent == NULL)
		DPRINTF("\n Empty List");
	while(CurrentStudent){
		struct student* TempStudent = CurrentStudent;
		CurrentStudent = CurrentStudent->NextStudent;
		free(TempStudent);
	}
	FirstStudent = NULL;
}
void GetNth(){
	int index , count=0;
	DPRINTF("\n Enter the selected index : ");
	gets(temp);
	index = atoi(temp);
	struct student* CurrentStudent = FirstStudent;
	if (FirstStudent == NULL)
		DPRINTF("\n Empty List");
	while(CurrentStudent){
		if(count == index){
			DPRINTF("\n Student ID : %d",CurrentStudent->student.ID);
			DPRINTF("\n Student Name : %s",CurrentStudent->student.name);
			DPRINTF("\n Student Height : %f",CurrentStudent->student.height);
			break;
		}
		else{
			count++;
			CurrentStudent = CurrentStudent->NextStudent;
		}
	}
}
void Get_Length (){
	int count=0;
	struct student* CurrentStudent = FirstStudent;
	if (FirstStudent == NULL)
		DPRINTF("\n Empty List");
	while(CurrentStudent){
		CurrentStudent=CurrentStudent->NextStudent;
		count++;
	}
	DPRINTF("\n Length of linked list : %d ",count);
}
void GetNthFromEnd (){
	int n , count;
	DPRINTF("\n Enter the selected node : ");
	gets(temp);
	n = atoi(temp);
	struct student* mai = FirstStudent;
	struct student* ref  = FirstStudent;
	if (FirstStudent == NULL)
		DPRINTF("\n Empty List");
	while(ref){
		for(count=0;count <= n;count++)
			ref = ref->NextStudent;
		mai = mai->NextStudent;
		ref = ref->NextStudent;
	}
	DPRINTF("\n Student ID : %d",mai->student.ID);
	DPRINTF("\n Student Name : %s",mai->student.name);
	DPRINTF("\n Student Height : %f",mai->student.height);
}

void main(){
	while(1){
		DPRINTF("\n==========Student DataBase=========");
		DPRINTF("\n \t Choose any option you need ");
		DPRINTF("\n 1: Add a student ");
		DPRINTF("\n 2: Delete a student ");
		DPRINTF("\n 3: View all students ");
		DPRINTF("\n 4: Delete all students ");
		DPRINTF("\n 5: Get entered index node ");
		DPRINTF("\n 6: Get length of list ");
		DPRINTF("\n 7: Get entered node from end ");
		DPRINTF("\n \t Enter option number : ");
		gets(temp);
		DPRINTF("\n ===================================");
		switch(atoi(temp)){
		case 1: Add_Student();		break;
		case 2: Delete_Student();	break;
		case 3: View_Students();	break;
		case 4: Delete_All();		break;
		case 5: GetNth();			break;
		case 6: Get_Length();		break;
		case 7: GetNthFromEnd();		break;
		default: DPRINTF("\n Wrong option ");	break;
		}
	}
}
