/*
 * Ex2.c
 *
 *  Created on: Dec 16, 2020
 *      Author: Alper
 */


#include <stdio.h>

void main(){
	float a, b,c ;
	printf("please enter three numbers : ");
	fflush(stdout);
	scanf("%f\n%f\n%f",&a ,&b ,&c);
	if (a >b){

		if (b>c)
		{
			printf("%f is the greatest number", a);
		}
		else{
			printf("%f is the greatest number", c);
		}
	}
	else{
		printf("%f is the greatest number" ,b);

	}
























}
