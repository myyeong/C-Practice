#include <stdio.h>

int main(void)
{
	double n1;
	double result = 1.0;
	int n2;
	int i;

	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf("%lf", &n1);

	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� :");
	scanf("%d", &n2);

	for (i = 1; i <= n2; i++)
		result = result * n1;

	printf("������� %f\n", result);

	return 0;
}