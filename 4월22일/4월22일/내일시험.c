#include <stdio.h>

int main(void)
{
	int x = 0;

	for (int i = 2; i < 10; 2)
		x = x + i;

	printf("%d", x);

	return 0;
}