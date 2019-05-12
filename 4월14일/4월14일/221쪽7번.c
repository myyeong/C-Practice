#include <stdio.h>

int main()
{
	int number, multi;

	printf("정수를 입력하시오 : ");
	scanf("%d", &number);

	printf("2를 곱하고 싶은 횟수 : ");
	scanf("%d", &multi);

	printf("%d<<%d의 값 : %d\n", number, multi, number << multi);

	return 0;
}