#include <stdio.h>

int main()
{
	int tall, age;

	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf("%d", &tall);

	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);

	if (tall >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�.\n");
	else
		printf("�˼��մϴ�.\n");

	return 0;
}