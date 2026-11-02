#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	float sum;
	float sum1 = 0.0;
	float sum2 = 0.0;
	for (i = 1; i <= 100; i += 2)
	{
		sum1 = sum1 + 1.0 / i;
	}
	for (j = 2; j <= 100; j += 2)
	{
		sum2 = sum2 + 1.0 / j;
	}
	sum = sum1 - sum2;
	printf("%f\n", sum);
	return 0;
}