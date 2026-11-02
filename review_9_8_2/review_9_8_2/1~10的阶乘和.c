#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 10;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		int ret = 1;//刷新ret，防止继续调用上一次的ret
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}