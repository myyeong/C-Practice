#include <stdio.h>

int main()
{
	int user, com;

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)");
	scanf("%d", &user);

	com = (rand() % 3 + 1);
	printf("��ǻ���� ����: %d\n", com);

	if (user == 1)
	{
		if (com == 1)
			printf("�����\n");

		else if (com == 2)
			printf("��ǻ�Ͱ� �̰���\n");

		else
			printf("����ڰ� �̰���\n");
	}

	else if (user == 2)
	{
		if (com == 1)
			printf("����ڰ� �̰���\n");

		else if (com == 2)
			printf("�����\n");

		else
			printf("��ǻ�Ͱ� �̰���\n");
	}

	else
	{
		if (com == 1)
			printf("��ǻ�Ͱ� �̰���\n");

		else if (com == 2)
			printf("����ڰ� �̰���\n");

		else
			printf("�����\n");
	}
	return 0;
}