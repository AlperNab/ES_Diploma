/*
 * 4thExample.c
 *
 *  Created on: Jan 15, 2021
 *      Author: Alper
 */


#include<stdio.h>
#include<string.h>
void main(){
	int i,l,m;
	int j=0;
	int a[]={};
	printf("Enter The No. Of Elements Of The Array\n");
	fflush(stdout);
	scanf("%d",&i );
	for(a[j]=1;a[j]<=i;a[j]++){
		printf("%d\t",a[j]);
	}
	printf("\nEnter The Element To Be Inserted");
	fflush(stdout);
	scanf("%d",&l);
	printf("\nEnter The Location");
	fflush(stdout);
	scanf("%d",&m);
	a[m]=l;
	while(a[j]!=i+1){
		j=0;
		a[j]=1;
		printf("%d\t",a[j]);
		fflush(stdout);
		j++;
	}


}
