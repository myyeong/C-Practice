#include <stdio.h>

int main()
{
	double kenergy, mass, speed;

	printf("����(kg) : ");
	scanf("%lf", &mass);

	printf("�ӵ�(m/s) : ");
	scanf("%lf", &speed);

	kenergy = 0.5*mass*speed*speed;

	printf("�������(J) : %f\n", kenergy);

	return 0;
}