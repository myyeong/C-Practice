#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main()
{
	float area, sqmeter;

	printf("���� �Է��ϼ��� : ");
	scanf("%f", &area);

	sqmeter = SQMETER_PER_PYEONG * area;

	printf("%f�������Դϴ�.\n", sqmeter);

	return 0;
}