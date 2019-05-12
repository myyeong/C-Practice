#include <stdio.h>

int main()
{
	int cm, feet;
	double inch;

	printf("키를 입력하시오(cm) : ");
	scanf("%d", &cm);

	inch = cm / 2.54;
	feet = inch / 12;
	inch = inch - feet * 12;

	printf("%dcm는 %d피트 %f인치입니다.\n", cm, feet, inch);

	return 0;
}