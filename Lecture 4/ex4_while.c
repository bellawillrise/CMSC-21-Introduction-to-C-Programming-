/* Prints a series of numbers separated by comma */


#include <stdio.h>

int main(){
	int i = 1, n;

	printf("Enter n: ");
	scanf("%d", &n);

	while (i <= n){
		if (i < n){
			printf("%d, ", i);
		}
		else{
			printf("%d", i);
		}
		i++;
		
	}

	return 0;
}