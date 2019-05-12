#include <stdio.h>

int main(void)
{
	float x, sol;

	printf("실수를 입력하세요 : ");
	scanf("%f", &x);

	sol = 3 * x*x + 7 * x + 11;

	printf("다항식의 값은 %f", sol);

	return 0;
}