/*
 * Ex5.c
 *
 *  Created on: Dec 16, 2020
 *      Author: Alper
 */


#include <stdio.h>

void main(){
	int a;
	int sum =0;
	printf("enter  any number to calculate");
	fflush(stdout);
	scanf("%d",&a);
	for(int i=0;i<=a;i++){
		sum=sum+i;

	}
	printf("%d", sum);
	fflush(stdout);
}

