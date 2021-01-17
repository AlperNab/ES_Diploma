/*
 * 1stExample.c
 *
 *  Created on: Dec 31, 2020
 *      Author: Alper
 */


#include <stdio.h>
void main(){
	int a[3][3];
	int b[3][3];
	int i;
	int j;
	printf("Enter The First Matrix");
	fflush(stdout);
	for(i=1;i<=2;i++){
		for(j=1;j<=2;j++){
			scanf("%d\n",&a[i][j]);
			printf("Enter a%d%d:%d\n",i, j,a[i][j]);
			if(i==2 && j==2){
				break;
			}

		}

	}
	/*	for(i=1;i<=2;i++){
		for(j=1;j<=2;j++){
			printf("%d  ",a[i][j]);
			if(i==1 && j==2){
				printf("\n");
			}
		}
	}*/
	printf("Enter The Second Matrix");
	for(int m=1;m<=2;m++){
		for(int n=1;n<=2;n++){
			scanf("%d\n",&b[m][n]);
			printf("Enter b%d%d:%d\n" , m, n,b[m][n]);
			if(m==2 && n==2){
				break;
			}
		}

	}
	for(int i=1;i<=2;i++){
		for(int j=1;j<=2;j++){
			printf("%d " , a[i][j]+b[i][j]);
			if(i==1 && j==2){
				printf("\n");

			}
		}
	}
}
