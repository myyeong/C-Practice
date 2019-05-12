#include <stdio.h>

int main()
{
	int x = 10, y = 20;
	int tmp;

	printf("x = %d y = %d\n", x, y);

	tmp = y;
	y = x;
	x = tmp;

	printf("x = %d y = %d\n", x, y);

	return 0;
}