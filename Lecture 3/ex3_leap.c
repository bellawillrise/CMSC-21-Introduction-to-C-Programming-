/**
Determine whether a year entered by the user is a leap year
Specifications:
    2016 – leap year, divisible by 4 but not by 100
    1995 – not a leap year,  not divisible by 4
    2000 – leap year,  divisible by 400
    1800 – not a leap year, evenly divisible by 100 but not by 400
    1500 – not a leap year, divisible by both 4 and 100 ( a century year!)

**/

#include <stdio.h>

int main(){

	int year, rem4, rem100, rem400;

	printf("Enter year: \n");
	scanf("%d", &year);

	rem4 = year % 4; // checks if year is divisible by 4
	rem100 = year % 100; // checks if year is divisible by 100
	rem400 = year % 400;


	if(((rem4 == 0) && (rem100 != 0)) || (rem400 == 0)){
		printf("The year is a leap year.\n");
	}else{
		printf("The year is not a leap year. \n");
	}


	return 0;
}