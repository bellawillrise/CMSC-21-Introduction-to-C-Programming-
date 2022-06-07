#include <stdio.h>

void cube_by_ref(int *np);

int main() {
	int n = 5, prod = 0; 
	cube_by_ref(&n);
	printf ("\n prod=%d", n); 
}

void cube_by_ref(int *np){
	*np = *np * *np * *np;
} 



