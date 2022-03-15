#include <stdio.h>

int main(){
    /*calculate absolute value of a number*/
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num<0)
        num = -num;
        printf("You entered a negative number \n");
    
    printf("The number's absolute value is: %d", num);
}



