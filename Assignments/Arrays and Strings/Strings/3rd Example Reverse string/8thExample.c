/*
 * 8thExample.c
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
	for(i=sizeof(a)-1;a[i]!='\0';--i)
	{
		printf("%c",a[i]);
	}
}
