#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
        return n%10+ DigitSum (n/10);//分解n的每一位并相加
	}
}
int main()
{
	int n = 0;
	printf("请输入n：");
	scanf("%d",&n);
	printf("%d", DigitSum(n));
	return 0;
}