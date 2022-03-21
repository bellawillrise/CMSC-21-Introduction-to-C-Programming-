#include <stdio.h>

int main(void){

	int i = 10;

	for(; i > 0; ){
		printf( "T minus %d and counting\n", i--);
	}

	i = 10; 

	while(i>0){
		printf( "T minus %d and counting\n", i--);
	}
	
	return 0;
}




