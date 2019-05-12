#include <stdio.h>

int main()
{
	int tall, age;

	printf("키를 입력하시오(cm) : ");
	scanf("%d", &tall);

	printf("나이를 입력하시오 : ");
	scanf("%d", &age);

	if (tall >= 140 && age >= 10)
		printf("타도 좋습니다.\n");
	else
		printf("죄송합니다.\n");

	return 0;
}