/* Computes the cumulative sum of a series of integers */

#include <stdio.h>

int main(){
	int i = 1, n, sum = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	while (i <= n){
		sum += i;
		i++;
	}

	printf("Cumulative sum: %d\n", sum);
	return 0;
}


