#include <stdio.h>

int main()
{
	float weight_on_moon;
	float weight_on_earth;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%f", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("�޿����� �����Դ� %fkg�Դϴ�.\n", weight_on_moon);

	return 0;
}