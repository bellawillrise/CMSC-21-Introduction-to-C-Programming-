/* Series of numbers in square brackets */

#include <stdio.h>

int main(){
	int i = 1, n;

	printf("Enter n: ");
	scanf("%d", &n);

	do{
		printf("[%d] ", i);
		i++;
	}while (i <= n);

	return 0;
}



