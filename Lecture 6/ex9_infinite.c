/* A demo on infinite loops*/

#include <stdio.h>

int main(void){

	int a = 1; 

	while (a < 6){
		printf("Value of a = %d \n", a);
		a++;
	}


	return 0;
}