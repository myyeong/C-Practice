#include <stdio.h>

int main()
{
	float avg, tall, weight;
	
	printf("체중과 키를 입력하세요: ");
	scanf("%f %f", &weight, &tall);

	avg = (tall - 100)*0.9;

	if (weight > avg)
		printf("과체중입니다.\n");

	else if (weight < avg)
		printf("저체중입니다.\n");

	else
		printf("표준체중입니다.\n");

	return 0;
}