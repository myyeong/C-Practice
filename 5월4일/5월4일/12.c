#include <stdio.h>

int main(void)
{
	int a = 0, b = 1, c;
	int i, num;

	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &num);

	printf("0, 1, ");

	for (i = 2; i <= num; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%d, ", c);
	}

	printf("\n");
	return 0;
}