#include <stdio.h>
#define ROWS 3
#define COLS 4

int main(void) {
  
  int a[ROWS][COLS] = {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };
  
  int i, j, *address, value;
  
  // print the element of the array via pointer ptr
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      address = *(a + i )+ j;
      value = *address;
      printf("|%d ", address);
      printf("%d| \t", value);
    }
    printf("\n");
  }

  printf("\n");
  
for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      address = *(a + i )+ j;
      value = *address;
      printf(" *(*(a + %d) + %d)) = %d  |", i, j, value);
    }
    printf("\n");
  }

  return 0;
}