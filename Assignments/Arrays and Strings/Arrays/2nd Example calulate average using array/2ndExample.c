/*
 * 2ndExample.c
 *
 *  Created on: Dec 31, 2020
 *      Author: Alper
 */


#include <stdio.h>
void main(){
	int a;
	float sum=0;
	float average;
	printf("Enter the numbers of data\n");
	fflush(stdout);
	scanf("%d " ,&a );

	float c[a];
	for(int i=1; i<=a;i++){
		printf("%d.Enter number : ",i);
		fflush(stdout);
		scanf("%f", &c[i]);
		printf("%f\n",c[i]);
		sum+=c[i];
	}
average=sum /a;
printf("\n %2.2f", average);



}
