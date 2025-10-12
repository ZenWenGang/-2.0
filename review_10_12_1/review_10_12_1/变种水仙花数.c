#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 10000; i <= 99999; i++)
	{
		int num = 0;
		for (j = 10; j <= 10000; j *= 10)
		{
			num += (i / j) * (i % j);
		}
		if (num == i)
			printf("%d ", i);
	}
	return 0;
}