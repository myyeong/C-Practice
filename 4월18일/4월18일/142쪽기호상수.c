// ��ȣ���  ���ݺ���, 1�� ����
// ������ �޾� ���� ���

#include <stdio.h>
#define TAX_RATE 0.2

int main()
{
	const int MONTHS = 12;

	int m_salary, y_salary;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &m_salary);

	y_salary = m_salary * MONTHS;

	printf("������ %d�Դϴ�.\n", y_salary);
	printf("������ %f�Դϴ�.\n", y_salary*TAX_RATE);

	return 0;
}