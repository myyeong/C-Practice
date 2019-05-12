#include <stdio.h>

int main()
{
	char code = 'A';

	printf("%d %d %d\n", code, code + 1, code + 2);		// 정수형의 char 코드
	printf("%c %c %c\n", code, code + 1, code + 2);		// 문자형의 char 코드

	return 0;
}