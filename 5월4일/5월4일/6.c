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

		printf("������ �����Ͻÿ� : ");
		scanf("%c", &op);

		if (op == 'Q')
			break;

		else if (op == 'A')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 + n2);
		}

		else if (op == 'S')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 - n2);
		}

		else if (op == 'M')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 * n2);
		}

		else if (op == 'D')
		{
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &n1, &n2);
			printf("%d\n", n1 / n2);
		}

		else
			continue;

		getchar();

	} while (1);

	return 0;
}