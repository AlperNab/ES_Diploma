/*
 * Ex6.c
 *
 *  Created on: Dec 16, 2020
 *      Author: Alper
 */

//Program to find factorial of a number
#include <stdio.h>

int main(){
	int a;
	int product;
	printf("enter a number to calculate its factorial");
	fflush(stdout);
	scanf("%d",&a);
	product=a;
	if(a>0){
		while(1){
			a=a-1;
			if(a!=0){
				product=product*a;
			}
			else{
				break;
			}
		}
		printf("%d", product);
		fflush(stdout);
	}

}
