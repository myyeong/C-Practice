#include <stdio.h>

int main(void)
{
	float base, height, area;

	printf("�ﰢ���� �غ� : ");
	scanf("%f", &base);
	printf("�ﰢ���� ���� : ");
	scanf("%f", &height);

	area = 0.5*base*height;

	printf("�ﰢ���� ���� : %f", area);

	return 0;
}