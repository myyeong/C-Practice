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
			printf("1���� %d������ ���� %d�Դϴ�.\n", i - 1, sum - i);
			break;
		}
	}

	return 0;
}