#include <stdio.h>

int main()
{
	int number, multi;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number);

	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf("%d", &multi);

	printf("%d<<%d�� �� : %d\n", number, multi, number << multi);

	return 0;
}