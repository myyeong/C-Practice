/* �ڷ����� ũ�⸦ �˾ƺ��� sizeof �Լ��� �̿��Ͽ� ����.
sizeof�� �Լ����� ���� �� ������ "������" �� !!
sizeof() ��ȣ �ȿ� ũ�⸦ �˰� ���� ����, �ڷ���, ���� ���� ������ ��. */

#include <stdio.h>

int main(void)
{
	int x;
	printf("���� x�� ũ�� : %d\n", sizeof(x));

	printf("short���� ũ�� : %d\n", sizeof(short));
	printf("int���� ũ�� : %d\n", sizeof(int));
	printf("long���� ũ�� : %d\n", sizeof(long));
	printf("long long���� ũ�� : %d\n", sizeof(long long));
	printf("float���� ũ�� : %d\n", sizeof(float));
	printf("double���� ũ�� : %d\n", sizeof(double));
	printf("long double���� ũ�� : %d\n", sizeof(long double));
	printf("char���� ũ�� : %d\n", sizeof(char));

	return 0;
}