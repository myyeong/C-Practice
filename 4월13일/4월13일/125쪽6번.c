#include <stdio.h>

int main(void)
{
	float WeightOnMoon;
	float WeightOnEarth;

	printf("�����Ը� �Է��ϼ���(���� : kg) : ");
	scanf("%f", &WeightOnEarth);

	WeightOnMoon = WeightOnEarth * 0.17;

	printf("�޿����� �����Դ� %fkg�Դϴ�.", WeightOnMoon);

	return 0;
}