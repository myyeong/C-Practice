#include <stdio.h>

int main(void)
{
	double c, f;

	printf("ȭ������ �Է��Ͻÿ� : ");
	scanf("%lf", &f);

	c = (5.0 / 9.0)*(f - 32.0);

	printf("�������� %f���Դϴ�.", c);

	return 0;
}