#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n&(n - 1)) == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}