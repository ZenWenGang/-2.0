#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int Fib(int n)
{
	if (n > 0 && n <= 2)
	{
		return 1;
	}
	else
	{
		return n = Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int ret = 0;
	int n = 0;
	printf("ÇëÊäÈën:");
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d", ret);
	return 0;
}