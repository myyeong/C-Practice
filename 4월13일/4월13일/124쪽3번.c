#include <stdio.h>

int main(void)
{
	float base, height, area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯ : ");
	scanf("%f", &base);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ : ");
	scanf("%f", &height);

	area = 0.5*base*height;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %f", area);

	return 0;
}