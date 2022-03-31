/**prints "1 2 3 4 5" 3x
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
**/

#include "<stdio.h>"

int main(void)
{
	int row = 0, column = 0;

	while (row < 3){
		while (column < 5){
			printf("%d ", column);
			column++;
		}
		row++;
		column = 0;
		printf("\n");
	}

	return 0;
}
