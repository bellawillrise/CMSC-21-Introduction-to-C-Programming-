#include<stdio.h>

void findAge(){  

    int age=18;   

}
 
int main(){

    printf("Age is %d", age);

}




int i;

void print_one_row(void){
	for(i = 1; i <= 10; i++){
		printf("*");
	}
}

void print_all_rows(void){
	for (i = 1; i <= 10; i++){
		print_one_row();
		printf("\n");
	}
}

