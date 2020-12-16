/*
 * Ex5.c
 *
 *  Created on: Dec 10, 2020
 *      Author: Alper
 */



#include <stdio.h>


int main(void)
{

	int a, b, c, e;
	fflush(stdout);
	printf("Enter the value of a : ");
	fflush(stdout);
	printf("\nEnter the value of b : ");
	scanf("%d %d", &a, &b);
	c=a;
	e=b;
	b=c;
	a=e;
	printf("\nAfter Swapping ,  value of a = %d\nAfter Swapping ,  value of b = %d", a ,b);

	return 0;

}





