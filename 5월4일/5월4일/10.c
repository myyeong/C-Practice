#include <stdio.h>

int main(void)
{
	double n1;
	double result = 1.0;
	int n2;
	int i;

	printf("실수의 값을 입력하시오 : ");
	scanf("%lf", &n1);

	printf("거듭제곱횟수를 입력하시오 :");
	scanf("%d", &n2);

	for (i = 1; i <= n2; i++)
		result = result * n1;

	printf("결과값은 %f\n", result);

	return 0;
}