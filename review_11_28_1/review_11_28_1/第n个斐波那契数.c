#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	return Fib(n - 2) + Fib(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=Fib(n);
	printf("%d", ret);
	return 0;
}