// 사용자로부터 세 개의 실수을 입력받은 후, 합계와 평균값 계산

#include <stdio.h>

int main(void)
{
	float x;	// 첫번째 실수
	float y;	// 두번째 실수
	float z;	// 세번째 실수
	float sum;
	float avg;

	printf("실수를 입력하시오 : ");
	scanf("%f", &x);
	printf("실수를 입력하시오 : ");
	scanf("%f", &y);
	printf("실수를 입력하시오 : ");
	scanf("%f", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("합은 %f이고 평균은 %f입니다.\n", sum, avg);

	return 0;

}