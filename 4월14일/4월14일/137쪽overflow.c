// ������ �����÷ο� �߻�
// �������� ������ �Ѿ�� �� �����÷ο찡 �߻��Ѵ�.
// �����÷ο찡 �߻��ϸ� ���� ���� �̻��� 
// ���������� �����÷ο찡 �߻��ϴ��� �����Ϸ��� ��� ���� �ʱ� ������ ������ �����ؾ� �� !

#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;	// �ִ밪���� �ʱ�ȭ��. 32767
	unsigned short u_money = USHRT_MAX;		// �ִ밪���� �ʱ�ȭ��. 65535
	// unsigned�� ������� ǥ���ϹǷ� �׳� short ������ �ִ밪�� �� ��

	s_money = s_money + 1;		// �ִ밪�� 1�� ���� �� �� �����÷ο� �߻�����
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1;		// �̰͵� �ִ밪�� 1�� ����
	printf("u_money = %u\n", u_money);		// unsigned �̹Ƿ� ���������� %u

	return 0;
}