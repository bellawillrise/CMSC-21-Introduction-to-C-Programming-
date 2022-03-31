#include <stdio.h>

int main(void)
{
	int row = 0;

	while (row < 10){
		
		if(row == 3){
			break;
		}

		printf("%d\n", row);
		row++;

	}

	return 0;
}

