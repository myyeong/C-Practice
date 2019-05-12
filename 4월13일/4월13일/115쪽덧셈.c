// 두개의 정수 값을 입력받아서 덧셈 처리하는 프로그램을 만들어 보자.

#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오:");
	scanf("%d", &x);

	printf("두번째 숫자를 입력하시오:");
	scanf("%d", &y);

	sum = x + y;

	printf("두수의 합:%d\n", x + y);

	return 0;
}