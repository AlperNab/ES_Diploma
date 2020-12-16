/*
 * Ex4.c
 *
 *  Created on: Dec 10, 2020
 *      Author: Alper
 */


fflush(stdout);

#include <stdio.h>


int main(void)
{


	int a ;
	printf("Enter Two  a character");
	fflush(stdout);
	scanf("%c", &a);
	printf("\nThe Letter is %c and its ASCII Code is %d ", a, a);

	return 0;

}

