#include <stdio.h>

int main(){
    int age;

    printf("How old are you: ");
    scanf("%d", &age);

    if(age>=70){
        printf("You are aged to perfection");
    }
    else if(age==50){
        printf("Wow! You are half a century old!");
    }
    else{
        printf("You are a spring chicken!");
    }
}
