// 연봉을 입력하면 월 수령액을 계산하는 프로그램을 만들어보자.

#include <stdio.h>

int main(void)
{
	int ysalary;
	int msalary;

	printf("연봉을 입력하시오(단위: 만원) : ");
	scanf("%d", &ysalary);	//scanf 함수에서 변수의 주소를 나타내는 & 기호 까먹지 말자 제발 !

	msalary = ysalary / 12;

	printf("월수령액(단위: 만원) : %d", msalary);

	return 0;
}