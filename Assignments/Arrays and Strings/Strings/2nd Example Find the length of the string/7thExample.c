/*
 * 7thExample.c
 *
 *  Created on: Jan 17, 2021
 *      Author: Alper
 */

#include<stdio.h>
void main(){
	int i=0;
	char a[500];
	printf("Enter a string\n");
	fflush(stdout);
	gets(a);
	int sum=0;
	for(i=0;a[i]!='\0';++i)
	{
			++sum;
	}
	printf("%d",sum);
	fflush(stdout);
}
