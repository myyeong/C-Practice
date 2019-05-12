#include <stdio.h>

int main(void)
{
	float WeightOnMoon;
	float WeightOnEarth;

	printf("몸무게를 입력하세요(단위 : kg) : ");
	scanf("%f", &WeightOnEarth);

	WeightOnMoon = WeightOnEarth * 0.17;

	printf("달에서의 몸무게는 %fkg입니다.", WeightOnMoon);

	return 0;
}