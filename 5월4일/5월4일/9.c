#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; ; i++)
	{
		sum += i;

		if (sum > 10000)
		{
			printf("1부터 %d까지의 합이 %d입니다.\n", i - 1, sum - i);
			break;
		}
	}

	return 0;
}