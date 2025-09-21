#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f %f %f", &a, &b, &c);
	int root = b * b - 4 * a * c;
	if (root == 0)
	{
		printf("该方程有两个相等的实根");
	}
	else if (root> 0)
	{
		printf("该方程有两个不相等的实根");
	}
	else
		printf("该方程没有实根");
	return 0;
}