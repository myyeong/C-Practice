#include <stdio.h>

int main(void)
{
	float x, sol;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%f", &x);

	sol = 3 * x*x + 7 * x + 11;

	printf("���׽��� ���� %f", sol);

	return 0;
}