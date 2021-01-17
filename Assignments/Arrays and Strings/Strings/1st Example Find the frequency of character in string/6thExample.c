/*
 * 6thExample.c
 *
 *  Created on: Jan 16, 2021
 *      Author: Alper
 */

#include<stdio.h>
void main(){
	int i=0;
	char l;
	char a[500];
	printf("Enter a string\n");
	fflush(stdout);
	gets(a);
	printf("\nEnter a Character To Find The Frequency");
	fflush(stdout);
	scanf("%c",&l);
	int sum=0;
	for(i=0;a[i]!='\0';++i)
	{
		if(l==a[i]){
			++sum;
		}
	}
	printf("%d",sum);
	fflush(stdout);
}

