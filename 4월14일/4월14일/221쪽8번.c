#include <stdio.h>
#define PI 3.14

int main()
{
	double radius, A, V;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &radius);

	A = 4 * PI * radius * radius;
	V = (4.0 / 3.0) * PI * radius * radius * radius;

	printf("ǥ������ %lf�Դϴ�.\n", A);
	printf("ü���� %lf�Դϴ�.\n", V);

	return 0;
}