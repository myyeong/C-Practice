// ���ڸ� 8, 10, 16�������� �Է��Ͽ� ������ ����غ���

#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 010;	// 0���� ���� : 8����
	int z = 0x10;	// 0x�� ���� : 16����

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}