/*
 * Q5.c
 *
 *  Created on: Nov 18, 2022
 *      Author: DELL
 */


#include <stdio.h>

struct emp{
	char* name;
	int id;
};

void main(){
	struct emp x = {"anwar",1001},y={"alex",1002},z={"adly",1003};
	struct emp (*arr[])={&x,&y,&z};
	struct emp (*(*ptr)[3])=&arr;
	int i;
	for (i=0;i<3;i++){
		printf("Employee name : %s\n",(*(*ptr+i))->name);
		printf("Employee id   : %d\n",(*(*ptr+i))->id);
	}
}
