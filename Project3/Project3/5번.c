#include <stdio.h>

int main()
{
	float x;
	float sol;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &x);

	sol = 3 * x * x + 7 * x + 11;

	printf("���׽��� ���� %f\n", sol);

	return 0;
}