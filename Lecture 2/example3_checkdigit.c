/* Computes a check digit of a bar code */
#include <stdio.h>

int main(void){
	/* d stands for the first digit,
	i1-15 represent the first group of 5 digits,
	j1-j5 represent the 2nd group of 5 digits
	*/
	int d , i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

	printf("Enter the first (single) digit:");
	scanf ("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf( "%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf( "%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	/* Add the 1st, 3rd, 5th, 7th, 9th, and 11th digits */
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	/* Add the 2nd, 4th, 6th, 8th, and 10th digits */
	second_sum = i1 + i3 + i5 + j2 + j4;
	/* Multiply Sum 1 by 3 and add to Sum 2 */
	total= 3 * first_sum + second_sum;

	/*
	Subtract 1 from the total,
	Compute remainder when the adjusted total is divided by 10,
	Subtract the remainder from 9
	*/
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
	
	return 0;
}

