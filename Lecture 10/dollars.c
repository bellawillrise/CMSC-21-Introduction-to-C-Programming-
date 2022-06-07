#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
    int dollars, twenties, tens, fives, ones;

    printf("\nEnter a dollar amount: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("\n$20 bills: %d", twenties);
    printf("\n$10 bills: %d", tens);
    printf("\n $5 bills: %d", fives);
    printf("\n $1 bills: %d\n\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20;
    dollars   = dollars - (*twenties * 20);
    *tens     = dollars / 10;
    dollars   = dollars - (*tens * 10);
    *fives    = dollars / 5;
    *ones     = dollars - (*fives * 5);
}


