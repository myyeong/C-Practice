#include <stdio.h>

int main(void)
{
	int n, i;
	int result = 0;
	
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result += i * i;

	printf("��갪�� %d�Դϴ�.\n", result);

	return 0;
}