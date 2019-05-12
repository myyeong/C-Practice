#include <stdio.h>

int main()
{
	int user, com;

	printf("선택하시오(1: 가위 2: 바위 3: 보)");
	scanf("%d", &user);

	com = (rand() % 3 + 1);
	printf("컴퓨터의 선택: %d\n", com);

	if (user == 1)
	{
		if (com == 1)
			printf("비겼음\n");

		else if (com == 2)
			printf("컴퓨터가 이겼음\n");

		else
			printf("사용자가 이겼음\n");
	}

	else if (user == 2)
	{
		if (com == 1)
			printf("사용자가 이겼음\n");

		else if (com == 2)
			printf("비겼음\n");

		else
			printf("컴퓨터가 이겼음\n");
	}

	else
	{
		if (com == 1)
			printf("컴퓨터가 이겼음\n");

		else if (com == 2)
			printf("사용자가 이겼음\n");

		else
			printf("비겼음\n");
	}
	return 0;
}