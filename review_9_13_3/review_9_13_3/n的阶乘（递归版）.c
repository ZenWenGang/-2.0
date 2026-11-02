#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ret(int n)
{
	if (n == 1)
	{
		return n;
	}
	else {
		return n * ret(n - 1);
	}

}
int main()
{
	int n=0;
	printf("«Î ‰»În:");
	scanf("%d", &n);
	printf("%d",ret(n));
	return 0;
}