#include <stdio.h>

int main()
{
	int cm, feet;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf("%d", &cm);

	inch = cm / 2.54;
	feet = inch / 12;
	inch = inch - feet * 12;

	printf("%dcm�� %d��Ʈ %f��ġ�Դϴ�.\n", cm, feet, inch);

	return 0;
}