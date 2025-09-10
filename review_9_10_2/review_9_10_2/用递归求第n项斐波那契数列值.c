#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int f(int n)
{
	int s;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		s = f(n - 1) + f(n - 2);
		return s;
	}
}
int main()
{
	int n;
	printf("请输入要求的第n项:");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("输入非法");
	}
	else
	{
		printf("第%d项的斐波那契数列值为%d", n, f(n));
	}
	return 0;
}