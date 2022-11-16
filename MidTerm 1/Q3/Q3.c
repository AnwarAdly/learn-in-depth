/*
 * Q3.c
 *
 *  Created on: Nov 15, 2022
 *      Author: DELL
 */


#include <stdio.h>

int prime (int x);

void main (){
	int f,l,i,flag;
	printf("Enter an interval : ");
	fflush(stdout);
	scanf("%d%d",&f,&l);
	printf("Interval : %d -- %d --> Prime numbers : ",f,l);
	for(i=f+1;i<l;i++){
		flag=prime(i);
		if (flag==1)
			printf("%d ",i);
	}

}

int prime (int x){
	int i,flag=1;
	for(i=2;i<=x/2;i++){
		if(x%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
