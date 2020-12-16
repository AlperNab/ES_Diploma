/*
 * Ex4.c
 *
 *  Created on: Dec 16, 2020
 *      Author: Alper
 */

#include <stdio.h>

void main(){
	char m;
	for(int i =0;i<6;i++){
		printf("Please enter a letter : ");
		fflush(stdout);
		scanf("%c" ,&m);
		if(m >='a' && m<='z'){
			printf("%c is an alphabet", m);
			fflush(stdout);
			break;
		}
		else{
			printf("%c is not an alphabet", m);
			fflush(stdout);
			break;
		}







	}
}
