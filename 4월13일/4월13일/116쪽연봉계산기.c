// ������ �Է��ϸ� �� ���ɾ��� ����ϴ� ���α׷��� ������.

#include <stdio.h>

int main(void)
{
	int ysalary;
	int msalary;

	printf("������ �Է��Ͻÿ�(����: ����) : ");
	scanf("%d", &ysalary);	//scanf �Լ����� ������ �ּҸ� ��Ÿ���� & ��ȣ ����� ���� ���� !

	msalary = ysalary / 12;

	printf("�����ɾ�(����: ����) : %d", msalary);

	return 0;
}