/*
Code using while loop that prints 1 to n square brackets. For example, if n = 6, 

[1] [2] [3] [4] [5] [6] 

*/

#include <stdio.h>

int main(void){

	int n;
	int i = 1;

	printf("Enter a number: \n");
	scanf("%d", &n);

	while(i <= n){
		printf("[%d] ", i);
		i++;
	}


	return 0;
}