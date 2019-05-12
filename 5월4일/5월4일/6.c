#include <stdio.h>

int main(void)
{
	int n1, n2;
	char op;

	do
	{
		getc;

		printf("*****************\n");
		printf("A---- Add\n");
		printf("S---- Subtract\n");
		printf("M---- Multiply\n");
		printf("D---- Divide\n");
		printf("Q---- Quit\n");
		printf("*****************\n");

		printf("연산을 선택하시오 : ");
		scanf("%c", &op);

		if (op == 'Q')
			break;

		else if (op == 'A')
		{
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 + n2);
		}

		else if (op == 'S')
		{
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 - n2);
		}

		else if (op == 'M')
		{
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 * n2);
		}

		else if (op == 'D')
		{
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 / n2);
		}

		else
			continue;

		getchar();

	} while (1);

	return 0;
}