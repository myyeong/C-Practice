// 정수형 오버플로우 발생
// 정수형의 범위를 넘어갔을 때 오버플로우가 발생한다.
// 오버플로우가 발생하면 연산 값이 이상함 
// 정수형에서 오버플로우가 발생하더라도 컴파일러는 경고를 하지 않기 때문에 스스로 주의해야 해 !

#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;	// 최대값으로 초기화함. 32767
	unsigned short u_money = USHRT_MAX;		// 최대값으로 초기화함. 65535
	// unsigned는 양수만을 표현하므로 그냥 short 형보다 최대값이 두 배

	s_money = s_money + 1;		// 최대값에 1을 더함 음 ㅋ 오버플로우 발생이지
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1;		// 이것도 최대값에 1을 더함
	printf("u_money = %u\n", u_money);		// unsigned 이므로 형식지정자 %u

	return 0;
}