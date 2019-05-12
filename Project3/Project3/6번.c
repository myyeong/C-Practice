#include <stdio.h>

int main()
{
	float weight_on_moon;
	float weight_on_earth;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%f", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("달에서의 몸무게는 %fkg입니다.\n", weight_on_moon);

	return 0;
}