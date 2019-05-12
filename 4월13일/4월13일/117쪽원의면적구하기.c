// 사용자로부터 원의 반지름을 입력받고 원의 면적을 구하여 화면에 출력하는 프로그램을 만들어보자.
// 실수형 변수를 선언하여 사용하여 보자.

#include <stdio.h>

int main(void)
{
	float radius;	// 반지름 변수
	float circle;	// 원의 면적 변수

	printf("반지름을 입력하시오 : ");
	scanf("%f", &radius);

	circle = 3.14 * radius * radius;

	printf("원의 면적 : %f\n", circle);

	return 0;
}