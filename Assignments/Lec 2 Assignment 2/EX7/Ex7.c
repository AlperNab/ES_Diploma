/*
 * Ex7.c
 *
 *  Created on: Dec 16, 2020
 *      Author: Alper
 */

//Program to make a calculator

#include <stdio.h>
void main(){

	char operator;
	float a, b;
	printf("Enter Operator either + or - or * or divide");
	fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two numbers to calculate");
	fflush(stdout);
	scanf("%f %f", &a, &b);

	switch(operator){
	case('+'):
					printf("a+b = %f",a+b);
	break;
	case('-'):
					printf("a-b = %f ",a-b);
	break;
	case('*'):
					printf("a*b =%f",a*b);
	break;
	case('/'):
					printf("a divide b = %f",a/b);
	}

}
