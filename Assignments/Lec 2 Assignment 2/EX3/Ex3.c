/*
 * Ex3.c
 *
 *  Created on: Dec 16, 2020
 *      Author: Alper
 */


#include <stdio.h>

void main(){
	int a;
	for(int i=0;i<5;i++){
		printf("please enter a number: ");
		fflush(stdout);
		scanf("%d", &a);
		if(a>0){
			printf("%d is positive \n", a);
			fflush(stdout);
		}
		else if(a<0) {
			printf("%d is negative \n", a);
			fflush(stdout);
		}
		else{
			printf("%d is zero \n", a);
			fflush(stdout);
		}

	}

}

