#include <stdio.h>

int main()
{
	float avg, tall, weight;
	
	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%f %f", &weight, &tall);

	avg = (tall - 100)*0.9;

	if (weight > avg)
		printf("��ü���Դϴ�.\n");

	else if (weight < avg)
		printf("��ü���Դϴ�.\n");

	else
		printf("ǥ��ü���Դϴ�.\n");

	return 0;
}