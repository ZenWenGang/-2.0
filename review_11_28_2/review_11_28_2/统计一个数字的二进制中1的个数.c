#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0, count = 0;
	scanf("%d", & n);
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n /= 2;
	}
	printf("%d", count);
}