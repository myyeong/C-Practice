#include <stdio.h>

int main(void)
{
	int x, i;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("��� : ");

	for (i = 1; i <= x; i++)
	{
		if (x%i == 0)
		{
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}