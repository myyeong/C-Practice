// 숫자를 8, 10, 16진법으로 입력하여 정수로 출력해보자

#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 010;	// 0으로 시작 : 8진수
	int z = 0x10;	// 0x로 시작 : 16진수

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}