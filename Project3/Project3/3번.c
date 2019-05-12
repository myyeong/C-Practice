#include <stdio.h>

int main()
{
	float base;
	float height;
	float area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf("%f", &base);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%f", &height);

	area = 0.5 * base * height;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %f\n", area);

	return 0;

}