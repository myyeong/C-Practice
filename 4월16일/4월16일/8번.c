#include <stdio.h>

int main()
{
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &time, &age);

	if (time < 17)
	{
		if (age >= 65 || (age >= 3 && age <= 12))
			printf("����� 25000�Դϴ�.\n");

		else
			printf("����� 34000�Դϴ�.\n");
	}

	else
		printf("����� 10000�Դϴ�.\n");

	return 0;
}