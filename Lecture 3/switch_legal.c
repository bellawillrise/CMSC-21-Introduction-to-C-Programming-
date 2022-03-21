/* 

Contracts and other legal documents are often dated in the following way:
    Dated this ____ day of ___ ,  20_

Let’s write a program that displays dates in this form. We’ll have the user enter the date in month/day/year. then we'll display the date in "legal'' form:

Enter date (mm/dd/yy) : 7/19/1995
Dated this 19th day of July, 1995.

*/

#include <stdio.h>

int main(){
   int month, day, year;

   printf("Enter date (mm/dd/yyyy): ");
   scanf("%d /%d /%d", &month, &day, &year);

   printf("Dated this %d", day);

   /*
   days ending with 1, 21, or 31 - st,
   days ending with 2, 22 - nd,
   days ending with 3, 23 - rd,
   days ending with 4, 5, 6, 7, 8, 9, 10 - th
   */

   switch(day){
      case 1: case 21: case 31:
         printf("st");
         break;
      case 2: case 22:
         printf("nd");
         break;
      case 3: case 23:
         printf("rd");
         break; 
      default:
         printf("th");
         break;       
   }

   printf(" day of ");

   switch (month) {
      case 1:  printf("January"); break;
      case 2:  printf("February"); break;
      case 3:  printf("March"); break;
      case 4:  printf("April"); break;
      case 5:  printf("May"); break;
      case 6:  printf("June"); break;
      case 7:  printf("July"); break;
      case 8:  printf("August"); break;
      case 9:  printf("September"); break;
      case 10: printf("October"); break;
      case 11: printf("November"); break;
      case 12: printf("December"); break;
   }

   printf(", %d\n", year);

   return 0;






   return 0;
}