// ����ڷκ��� �� ���� �Ǽ��� �Է¹��� ��, �հ�� ��հ� ���

#include <stdio.h>

int main(void)
{
	float x;	// ù��° �Ǽ�
	float y;	// �ι�° �Ǽ�
	float z;	// ����° �Ǽ�
	float sum;
	float avg;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &x);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &y);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("���� %f�̰� ����� %f�Դϴ�.\n", sum, avg);

	return 0;

}