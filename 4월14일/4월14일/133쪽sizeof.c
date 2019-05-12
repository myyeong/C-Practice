/* 자료형의 크기를 알아보는 sizeof 함수를 이용하여 보자.
sizeof는 함수같아 보일 수 있지만 "연산자" 임 !!
sizeof() 괄호 안에 크기를 알고 싶은 변수, 자료형, 값을 집어 넣으면 됨. */

#include <stdio.h>

int main(void)
{
	int x;
	printf("변수 x의 크기 : %d\n", sizeof(x));

	printf("short형의 크기 : %d\n", sizeof(short));
	printf("int형의 크기 : %d\n", sizeof(int));
	printf("long형의 크기 : %d\n", sizeof(long));
	printf("long long형의 크기 : %d\n", sizeof(long long));
	printf("float형의 크기 : %d\n", sizeof(float));
	printf("double형의 크기 : %d\n", sizeof(double));
	printf("long double형의 크기 : %d\n", sizeof(long double));
	printf("char형의 크기 : %d\n", sizeof(char));

	return 0;
}