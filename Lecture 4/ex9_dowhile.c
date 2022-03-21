/* Prints a series of numbers separated by comma */

#include <stdio.h>

int main(){
	int i = 1, n;

	printf("Enter n: ");
	scanf("%d", &n);

	do{
		if (i < n){
			printf("%d, ", i);
		}
		else{
			printf("%d", i);
		}
		i++;
		
	}while (i <= n);

	return 0;
}

