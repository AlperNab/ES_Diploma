/*
 * 5thExample.c
 *
 *  Created on: Jan 16, 2021
 *      Author: Alper
 */

#include<stdio.h>
void main(){
	int i,l;
	int j;
	int a[j];
	printf("Enter The No. Of Elements Of The Array\n");
	fflush(stdout);
	scanf("%d",&i );
	for(j=0;j<=i;j++){
		scanf("%d\t",&a[j]);
		printf("%d\t",a[j]);
	}

	printf("\nEnter The Element To Be Inserted");
	fflush(stdout);
	scanf("%d",&l);
	j=0;
	for(a[j];j<i;j++){
		if(l!=a[j]){
			continue;
		}
		else{
			printf("%u",&a[j]);
			fflush(stdout);

		}
	}

}

