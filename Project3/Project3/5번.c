#include <stdio.h>

int main()
{
	float x;
	float sol;

	printf("실수를 입력하세요: ");
	scanf("%f", &x);

	sol = 3 * x * x + 7 * x + 11;

	printf("다항식의 값은 %f\n", sol);

	return 0;
}