// ����ڷκ��� ���� �������� �Է¹ް� ���� ������ ���Ͽ� ȭ�鿡 ����ϴ� ���α׷��� ������.
// �Ǽ��� ������ �����Ͽ� ����Ͽ� ����.

#include <stdio.h>

int main(void)
{
	float radius;	// ������ ����
	float circle;	// ���� ���� ����

	printf("�������� �Է��Ͻÿ� : ");
	scanf("%f", &radius);

	circle = 3.14 * radius * radius;

	printf("���� ���� : %f\n", circle);

	return 0;
}