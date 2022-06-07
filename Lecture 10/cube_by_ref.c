#include <stdio.h>

int cube_by_value(int np);

int main() {
	int n = 5, prod = 0; 
	prod = cube_by_value(n);
	printf ("\n prod=%d", prod); 
}

int cube_by_value(int np){
	return np * np * np;
} 


