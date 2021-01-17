/*
 * 3rdExample.c
 *
 *  Created on: Dec 31, 2020
 *      Author: Alper
 */


/*
 * 2ndExample.c
 *
 *  Created on: Dec 31, 2020
 *      Author: Alper
 */


#include <stdio.h>
void main(){
	float c[3][3];
	float t[3][3];

	printf("Enter 3 by 3 matrix \n");
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			scanf("%f\n",&c[i][j]);
		}
	}
	printf("the matrix is \n");
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("%f \t ", c[i][j]);
		}
		printf("\r\n");
	}


	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			t[j][i]=c[i][j];
		}
	}
	printf("the transpose is \n");

	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("%f \t ", t[i][j]);
		}
		printf("\r\n");
	}
}
