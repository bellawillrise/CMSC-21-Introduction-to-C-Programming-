/*

Printing a table of squares 

Enter a number of entries in table: 5

1    1
2    4
3    9
4    16
5    25

*/

#include <stdio.h>

int main(void){

	int n, square;
	int i = 1; //loop control variable

	printf("Enter a number: \n");
	scanf("%d", &n);

	while( i <= n ){
		square = i*i;
		printf("%d \t %d\n", i, square);
		i++;
	}
	

	return 0;
}