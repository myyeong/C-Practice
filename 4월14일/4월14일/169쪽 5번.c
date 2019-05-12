#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main()
{
	float area, sqmeter;

	printf("평을 입력하세요 : ");
	scanf("%f", &area);

	sqmeter = SQMETER_PER_PYEONG * area;

	printf("%f평방미터입니다.\n", sqmeter);

	return 0;
}